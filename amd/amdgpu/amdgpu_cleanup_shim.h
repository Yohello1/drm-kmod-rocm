#ifndef _AMDGPU_CLEANUP_SHIM_H_
#define _AMDGPU_CLEANUP_SHIM_H_

#include <linux/file.h>
#include <linux/suspend.h> /* override PM helpers */

#ifdef CLASS
#undef CLASS
#endif

static inline void auto_fdput(struct fd *f) {
	    if (f && f->linux_file) {
		            fdput(*f);
			        }
}

typedef struct fd class_fd_t;
#define class_fd_constructor(id) fdget(id)

#define CLASS(type, var) \
	    class_##type##_t var __attribute__((__cleanup__(auto_fdput))) = class_##type##_constructor

#ifndef fd_empty
static inline bool fd_empty(struct fd f) {
	    return (f.linux_file == NULL);
}
#endif

#ifndef fd_file
static inline struct file *fd_file(struct fd f) {
	    return (struct file *)f.linux_file;
}
#endif

static inline bool pm_resume_via_firmware(void) {
	    return false;
}

#endif /* _AMDGPU_CLEANUP_SHIM_H_ */
