// SPDX-License-Identifier: GPL-2.0
/*
 * kfd_freebsd_stubs.c - Stub implementations for FreeBSD amdkfd PoC
 *
 * Functions that are referenced by kfd_chardev.c / kfd_process.c but
 * are not required for a basic buffer-based vector add dispatch.
 */

#include "kfd_priv.h"
#include "kfd_events.h"
#include "kfd_priv.h"
#include "kfd_events.h"
#include "kfd_debug.h"
#include "kfd_smi_events.h"
#include "kfd_crat.h"

/* ---------- kfd_debugfs ---------- */

void kfd_debugfs_init(void) {}
void kfd_debugfs_fini(void) {}

/* ---------- kfd_dbg ---------- */

int kfd_dbg_ev_query_debug_event(struct kfd_process *p,
				  unsigned int *queue_id,
				  unsigned int *gpu_id,
				  uint64_t exception_clear_mask,
				  uint64_t *event_status) { return -ENOSYS; }

void kfd_dbg_ev_raise(uint64_t ev_mask, struct kfd_process *p,
		      struct kfd_node *dev, unsigned int queue_id,
		      bool thread_id_valid, unsigned int thread_id,
		      void *exception_data, size_t exception_data_size) {}

void kfd_dbg_send_exception_to_runtime(struct kfd_process *p,
				       unsigned int dev_idx,
				       unsigned int queue_id,
				       uint64_t error_reason) {}

int kfd_dbg_set_enabled_debug_exception_mask(struct kfd_process *p,
					     uint64_t bits) { return -ENOSYS; }

int kfd_dbg_set_mes_debug_mode(struct kfd_process_device *pdd,
				bool sq_trap_en) { return -ENOSYS; }

int kfd_dbg_trap_activate(struct kfd_process *p) { return -ENOSYS; }
int kfd_dbg_trap_deactivate(struct kfd_process *p,
			     bool unwind, int unwind_count) { return -ENOSYS; }
int kfd_dbg_trap_enable(struct kfd_process *p, uint32_t flags,
			 void __user *runtime_info,
			 uint32_t *runtime_info_size) { return -ENOSYS; }
int kfd_dbg_trap_disable(struct kfd_process *p) { return -ENOSYS; }

int kfd_dbg_trap_set_wave_launch_override(struct kfd_process *p,
					  uint32_t trap_override,
					  uint32_t trap_mask_bits,
					  uint32_t trap_mask_request,
					  uint32_t *trap_mask_prev,
					  uint32_t *trap_mask_supported) { return -ENOSYS; }

int kfd_dbg_trap_set_wave_launch_mode(struct kfd_process *p,
				      uint8_t wave_launch_mode) { return -ENOSYS; }

int kfd_dbg_trap_set_flags(struct kfd_process *p,
			    uint32_t *flags) { return -ENOSYS; }

int kfd_dbg_trap_query_exception_info(struct kfd_process *p,
				      uint32_t source_id,
				      uint32_t exception_code,
				      bool clear_exception,
				      void __user *info,
				      uint32_t *info_size) { return -ENOSYS; }

int kfd_dbg_trap_device_snapshot(struct kfd_process *p,
				  uint32_t flags,
				  void __user *user_buf,
				  uint32_t *entry_size,
				  uint32_t *num_entries) { return -ENOSYS; }

int kfd_dbg_trap_clear_dev_address_watch(struct kfd_process *p,
					  struct kfd_node *dev,
					  uint32_t watch_id) { return -ENOSYS; }

int kfd_dbg_trap_set_dev_address_watch(struct kfd_process *p,
					struct kfd_node *dev,
					uint64_t watch_address,
					uint32_t *watch_id,
					uint32_t watch_mode) { return -ENOSYS; }

/* ---------- kfd_smi_event ---------- */

int kfd_smi_event_open(struct kfd_node *dev,
		       uint32_t *fd) { return -ENOSYS; }

void kfd_smi_event_queue_eviction(struct kfd_node *dev,
				  uint32_t trigger) {}
void kfd_smi_event_queue_restore(struct kfd_node *dev) {}
void kfd_smi_event_queue_restore_rescheduled(struct mm_struct *mm) {}
void kfd_smi_event_update_gpu_reset(struct kfd_node *dev,
				    bool post_reset) {}
void kfd_smi_event_update_thermal_throttling(struct kfd_node *dev,
					     uint32_t throttle_bitmask) {}

/* ---------- kfd_crat ---------- */

int kfd_create_crat_image_virtual(void **crat_image, size_t *size,
				  int flags, struct kfd_node *knode,
				  uint32_t proximity_domain) { return -ENOSYS; }

void kfd_destroy_crat_image(void *crat_image) {}

int kfd_parse_crat_table(void *crat_image, struct list_head *device_list,
			  uint32_t proximity_domain) { return -ENOSYS; }

/* ---------- kfd_event (minimal) ---------- */

int kfd_event_init_process(struct kfd_process *p) { return 0; }
void kfd_event_free_process(struct kfd_process *p) {}

int kfd_event_create(struct file *devkfd, struct kfd_process *p,
		     uint32_t event_type, bool auto_reset, uint32_t node_id,
		     uint32_t *event_id, uint32_t *event_trigger_data,
		     uint64_t *event_page_offset,
		     uint32_t *event_slot_index) { return -ENOSYS; }

int kfd_event_destroy(struct kfd_process *p,
		      uint32_t event_id) { return 0; }

int kfd_set_event(struct kfd_process *p,
		  uint32_t event_id) { return 0; }

int kfd_reset_event(struct kfd_process *p,
		    uint32_t event_id) { return 0; }

void kfd_signal_reset_event(struct kfd_node *dev) {}

int kfd_event_mmap(struct kfd_process *p,
		   struct vm_area_struct *vma) { return -ENOSYS; }

int kfd_wait_on_events(struct kfd_process *p, uint32_t num_events,
		       void __user *data, bool all, uint32_t *user_timeout_ms,
		       uint32_t *wait_result) { return -ENOSYS; }

void *kfd_kmap_event_page(struct kfd_process *p,
			   uint64_t event_page_offset) { return NULL; }

/* ---------- kfd_topology (cache info only) ---------- */

int kfd_get_gpu_cache_info(struct kfd_node *dev,
			   struct kfd_cache_properties **pcache_info) { return 0; }
