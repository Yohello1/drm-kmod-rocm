# `kconfig.mk` defines variables used to conditionally add files to $(SRCS).
.include "../../kconfig.mk"

SRCDIR= ${.CURDIR:H:H}/drivers/gpu/drm/amd

.PATH:  ${SRCDIR}/amdkfd

KMOD    = amdkfd
EXPORT_SYMS=    YES

SRCS    = \
        kfd_module.c \
        kfd_device.c \
        kfd_chardev.c \
        kfd_process.c \
        kfd_topology.c \
        kfd_crat.c \
        kfd_pasid.c \
        kfd_doorbell.c \
        kfd_events.c \
        kfd_interrupt.c


SRCS    += \
        kfd_device_queue_manager.c \
        kfd_process_queue_manager.c \
        kfd_queue.c \
        kfd_kernel_queue.c \
        kfd_packet_manager.c \
        kfd_mqd_manager.c \
        kfd_flat_memory.c


SRCS+=  device_if.h \
        vnode_if.h \
        bus_if.h \
        pci_if.h \
        pci_iov_if.h \
        iicbus_if.h \
        opt_drm.h \
        opt_vm.h \
        opt_syscons.h

CLEANFILES+= ${KMOD}.ko.full ${KMOD}.ko.debug

.include <bsd.kmod.mk>

# These Makefiles are included after <bsd.kmod.mk> because they expand
# variables defined by it.
.include "../../linuxkpi_version.mk"
.include "../../compiler_flags.mk"

CFLAGS+= -I${.CURDIR:H:H}/linuxkpi/gplv2/include
CFLAGS+= -I${SYSDIR}/compat/linuxkpi/common/include
CFLAGS+= -I${SYSDIR}/compat/linuxkpi/dummy/include

# Add this line to the top of your Makefile flags section
CFLAGS+= -I${.CURDIR}/../../linuxkpi/dummy/include

CFLAGS+= -I${.CURDIR:H:H}/include
CFLAGS+= -I${.CURDIR:H:H}/include/drm
CFLAGS+= -I${.CURDIR:H:H}/include/uapi
CFLAGS+= -I${SRCDIR:H:H}

CFLAGS+= -I${SRCDIR}/amdgpu
CFLAGS+= -I${SRCDIR}/include
CFLAGS+= -I${SRCDIR}/acp/include
CFLAGS+= -I${SRCDIR}/include/asic_reg
CFLAGS+= -I${SRCDIR}/pm/inc
CFLAGS+= '-DLINUXKPI_PARAM_PREFIX=amdkfd_'
CFLAGS+= '-DKBUILD_MODNAME="${KMOD}"'

CWARNFLAGS+=    -Wno-pointer-arith
CWARNFLAGS+=    ${CWARNFLAGS.${.IMPSRC:T}}

CWARNFLAGS.kfd_chardev.c=               -Wno-format
CWARNFLAGS.kfd_device_queue_manager.c=  -Wno-format -Wno-strict-prototypes -Wno-implicit-function-declaration
CWARNFLAGS.kfd_doorbell.c=              -Wno-format
CWARNFLAGS.kfd_packet_manager.c=        -Wno-format
CWARNFLAGS.kfd_queue.c=                 -Wno-format
