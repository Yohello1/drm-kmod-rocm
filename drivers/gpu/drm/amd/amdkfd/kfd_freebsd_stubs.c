// SPDX-License-Identifier: GPL-2.0
/*
 * kfd_freebsd_stubs.c - Stub implementations for FreeBSD amdkfd PoC
 *
 * Every function listed here is referenced by kfd core sources but has
 * no FreeBSD implementation yet.  int-returning stubs return -ENOSYS;
 * void-returning stubs are empty; bool-returning stubs return false.
 *
 * Signatures are taken verbatim from the Linux amdkfd headers so that
 * -Wmissing-prototypes is satisfied.
 */

#include "kfd_priv.h"          /* kfd_debugfs_init/fini, kfd_process, etc. */
#include "kfd_debug.h"         /* kfd_dbg_* prototypes */
#include "kfd_smi_events.h"    /* kfd_smi_event_* prototypes */
#include "kfd_crat.h"          /* kfd_create_crat_image_virtual, etc. */

/* ---------- kfd_debugfs ---------- */

void kfd_debugfs_init(void) {}
void kfd_debugfs_fini(void) {}

/* ---------- kfd_dbg ---------- */

int kfd_dbg_ev_query_debug_event(struct kfd_process *process,
			unsigned int *queue_id,
			unsigned int *gpu_id,
			uint64_t exception_clear_mask,
			uint64_t *event_status)
{
	return -ENOSYS;
}

bool kfd_dbg_ev_raise(uint64_t event_mask,
		struct kfd_process *process, struct kfd_node *dev,
		unsigned int source_id, bool use_worker,
		void *exception_data,
		size_t exception_data_size)
{
	return false;
}

int kfd_dbg_send_exception_to_runtime(struct kfd_process *p,
				unsigned int dev_id,
				unsigned int queue_id,
				uint64_t error_reason)
{
	return -ENOSYS;
}

void kfd_dbg_set_enabled_debug_exception_mask(struct kfd_process *target,
				uint64_t exception_set_mask)
{
}

int kfd_dbg_set_mes_debug_mode(struct kfd_process_device *pdd,
			bool sq_trap_en)
{
	return -ENOSYS;
}

int kfd_dbg_trap_activate(struct kfd_process *target)
{
	return -ENOSYS;
}

void kfd_dbg_trap_deactivate(struct kfd_process *target,
			bool unwind, int unwind_count)
{
}

int kfd_dbg_trap_enable(struct kfd_process *target, uint32_t fd,
		void __user *runtime_info,
		uint32_t *runtime_info_size)
{
	return -ENOSYS;
}

int kfd_dbg_trap_disable(struct kfd_process *target)
{
	return -ENOSYS;
}

int kfd_dbg_trap_set_wave_launch_override(struct kfd_process *target,
				uint32_t trap_override,
				uint32_t trap_mask_bits,
				uint32_t trap_mask_request,
				uint32_t *trap_mask_prev,
				uint32_t *trap_mask_supported)
{
	return -ENOSYS;
}

int kfd_dbg_trap_set_wave_launch_mode(struct kfd_process *target,
				uint8_t wave_launch_mode)
{
	return -ENOSYS;
}

int kfd_dbg_trap_set_flags(struct kfd_process *target, uint32_t *flags)
{
	return -ENOSYS;
}

int kfd_dbg_trap_query_exception_info(struct kfd_process *target,
		uint32_t source_id,
		uint32_t exception_code,
		bool clear_exception,
		void __user *info,
		uint32_t *info_size)
{
	return -ENOSYS;
}

int kfd_dbg_trap_device_snapshot(struct kfd_process *target,
		uint64_t exception_clear_mask,
		void __user *user_info,
		uint32_t *number_of_device_infos,
		uint32_t *entry_size)
{
	return -ENOSYS;
}

int kfd_dbg_trap_clear_dev_address_watch(struct kfd_process_device *pdd,
				uint32_t watch_id)
{
	return -ENOSYS;
}

int kfd_dbg_trap_set_dev_address_watch(struct kfd_process_device *pdd,
				uint64_t watch_address,
				uint32_t watch_address_mask,
				uint32_t *watch_id,
				uint32_t watch_mode)
{
	return -ENOSYS;
}

/* ---------- kfd_smi_event ---------- */

int kfd_smi_event_open(struct kfd_node *dev, uint32_t *fd)
{
	return -ENOSYS;
}

void kfd_smi_event_queue_eviction(struct kfd_node *node, pid_t pid,
				  uint32_t trigger)
{
}

void kfd_smi_event_queue_restore(struct kfd_node *node, pid_t pid)
{
}

void kfd_smi_event_queue_restore_rescheduled(struct mm_struct *mm)
{
}

void kfd_smi_event_update_gpu_reset(struct kfd_node *dev, bool post_reset,
				    struct amdgpu_reset_context *reset_context)
{
}

void kfd_smi_event_update_thermal_throttling(struct kfd_node *dev,
					     uint64_t throttle_bitmask)
{
}

/* ---------- kfd_crat ---------- */

int kfd_create_crat_image_virtual(void **crat_image, size_t *size,
				  int flags, struct kfd_node *kdev,
				  uint32_t proximity_domain)
{
	return -ENOSYS;
}

void kfd_destroy_crat_image(void *crat_image)
{
}

int kfd_parse_crat_table(void *crat_image, struct list_head *device_list,
			 uint32_t proximity_domain)
{
	return -ENOSYS;
}

/* ---------- kfd_crat (cache info) ---------- */

int kfd_get_gpu_cache_info(struct kfd_node *kdev,
			   struct kfd_gpu_cache_info **pcache_info)
{
	return -ENOSYS;
}
