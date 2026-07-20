#include <linux/dma-fence.h>
#include <linux/spinlock.h>
#include <linux/atomic.h>
#include <linux/stacktrace.h>
#include <linux/sched.h>
#include <linux/slab.h>
#include <linux/sched/mm.h>
#include "amdgpu_amdkfd.h"
#include "kfd_svm.h"

static const struct dma_fence_ops amdkfd_fence_ops;
static atomic_t fence_seq = ATOMIC_INIT(0);

struct amdgpu_amdkfd_fence *amdgpu_amdkfd_fence_create(u64 context,
							struct mm_struct *mm,
							struct svm_range_bo *svm_bo)
{
	struct amdgpu_amdkfd_fence *fence;

	fence = kzalloc(sizeof(*fence), GFP_KERNEL);
	if (fence == NULL)
		return NULL;

	/* FreeBSD LinuxKPI: mmgrab/mmdrop might be missing or no-ops depending on kernel version */
#if defined(__FreeBSD__) && defined(mmgrab)
	mmgrab(mm);
#elif !defined(__FreeBSD__)
	mmgrab(mm);
#endif

	fence->mm = mm;

	/* Get process name for timeline */
#ifdef __FreeBSD__
	strlcpy(fence->timeline_name, current->comm, sizeof(fence->timeline_name));
#else
	get_task_comm(fence->timeline_name, current);
#endif

	spin_lock_init(&fence->lock);
	fence->svm_bo = svm_bo;
	dma_fence_init(&fence->base, &amdkfd_fence_ops, &fence->lock,
		       context, atomic_inc_return(&fence_seq));

	return fence;
}

struct amdgpu_amdkfd_fence *to_amdgpu_amdkfd_fence(struct dma_fence *f)
{
	struct amdgpu_amdkfd_fence *fence;

	if (!f)
		return NULL;

	fence = container_of(f, struct amdgpu_amdkfd_fence, base);
	if (f->ops == &amdkfd_fence_ops)
		return fence;

	return NULL;
}

static const char *amdkfd_fence_get_driver_name(struct dma_fence *f)
{
	return "amdgpu_amdkfd_fence";
}

static const char *amdkfd_fence_get_timeline_name(struct dma_fence *f)
{
	struct amdgpu_amdkfd_fence *fence = to_amdgpu_amdkfd_fence(f);

	return fence ? fence->timeline_name : "unknown";
}

static bool amdkfd_fence_enable_signaling(struct dma_fence *f)
{
	struct amdgpu_amdkfd_fence *fence = to_amdgpu_amdkfd_fence(f);

	if (!fence)
		return false;

	if (dma_fence_is_signaled(f))
		return true;

	if (!fence->svm_bo) {
		if (!kgd2kfd_schedule_evict_and_restore_process(fence->mm, f))
			return true;
	} else {
		if (!svm_range_schedule_evict_svm_bo(fence))
			return true;
	}
	return false;
}

static void amdkfd_fence_release(struct dma_fence *f)
{
	struct amdgpu_amdkfd_fence *fence = to_amdgpu_amdkfd_fence(f);

	if (WARN_ON(!fence))
		return;

#if defined(__FreeBSD__) && defined(mmdrop)
	mmdrop(fence->mm);
#elif !defined(__FreeBSD__)
	mmdrop(fence->mm);
#endif

	/* FreeBSD LinuxKPI provides kfree_rcu / RCU callbacks natively */
	kfree_rcu(f, rcu);
}

bool amdkfd_fence_check_mm(struct dma_fence *f, struct mm_struct *mm)
{
	struct amdgpu_amdkfd_fence *fence = to_amdgpu_amdkfd_fence(f);

	if (!fence)
		return false;
	else if (fence->mm == mm  && !fence->svm_bo)
		return true;

	return false;
}

static const struct dma_fence_ops amdkfd_fence_ops = {
	.get_driver_name = amdkfd_fence_get_driver_name,
	.get_timeline_name = amdkfd_fence_get_timeline_name,
	.enable_signaling = amdkfd_fence_enable_signaling,
	.release = amdkfd_fence_release,
};
