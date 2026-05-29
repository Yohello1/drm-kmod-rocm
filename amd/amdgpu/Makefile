# `kconfig.mk` defines variables used to conditionally add files to $(SRCS).
.include "../../kconfig.mk"

SRCDIR=	${.CURDIR:H:H}/drivers/gpu/drm/amd
DRM= ${.CURDIR:H:H}/drivers/gpu/drm

KMOD=	amdgpu

EXPORT_SYMS=	YES

#
# Work around ctfmerge(1) segfaults with recent amdgpu.ko
#
# https://bugs.freebsd.org/bugzilla/show_bug.cgi?id=276828
#
MK_CTF=	no


.PATH:	${SRCDIR}/acp \
	${SRCDIR}/amdgpu \
	${SRCDIR}/amdxcp \
	${SRCDIR}/display \
	${SRCDIR}/display/amdgpu_dm \
	${SRCDIR}/display/dc \
	${SRCDIR}/display/dc/basics \
	${SRCDIR}/display/dc/bios \
	${SRCDIR}/display/dc/bios/dce110 \
	${SRCDIR}/display/dc/bios/dce112 \
	${SRCDIR}/display/dc/bios/dce60 \
	${SRCDIR}/display/dc/bios/dce80 \
	${SRCDIR}/lib \
	${SRCDIR}/pm \
	${SRCDIR}/pm/inc \
	${SRCDIR}/pm/legacy-dpm \
	${SRCDIR}/pm/powerplay \
	${SRCDIR}/pm/powerplay/hwmgr \
	${SRCDIR}/pm/powerplay/inc \
	${SRCDIR}/pm/powerplay/smumgr \
	${SRCDIR}/pm/swsmu \
	${SRCDIR}/pm/swsmu/inc \
	${SRCDIR}/pm/swsmu/inc/pmfw_if \
	${SRCDIR}/pm/swsmu/smu11 \
	${SRCDIR}/pm/swsmu/smu12 \
	${SRCDIR}/pm/swsmu/smu13 \
	${SRCDIR}/pm/swsmu/smu14 \
	${DRM}/scheduler

# acp
SRCS=	acp_hw.c

# amdgpu
# amdgpu_acp.c \ # not yet - need i2s
# amdgpu_hmm.c \  # disabled

SRCS+=	amdgpu_aca.c \
	amdgpu_afmt.c \
	amdgpu_amdkfd.c \
	amdgpu_atombios.c \
	amdgpu_atomfirmware.c \
	amdgpu_benchmark.c \
	amdgpu_bios.c \
	amdgpu_bo_list.c \
	amdgpu_cgs.c \
	amdgpu_connectors.c \
	amdgpu_cs.c \
	amdgpu_csa.c \
	amdgpu_ctx.c \
	amdgpu_debugfs.c \
	amdgpu_device.c \
	amdgpu_dev_coredump.c \
	amdgpu_discovery.c \
	amdgpu_display.c \
	amdgpu_doorbell_mgr.c \
	amdgpu_dpm.c \
	amdgpu_dpm_internal.c \
	amdgpu_drv.c \
	amdgpu_eeprom.c \
	amdgpu_encoders.c \
	amdgpu_fdinfo.c \
	amdgpu_fence.c \
	amdgpu_freebsd.c \
	amdgpu_fru_eeprom.c \
	amdgpu_fw_attestation.c \
	amdgpu_securedisplay.c \
	amdgpu_gart.c \
	amdgpu_gem.c \
	amdgpu_gfx.c \
	amdgpu_gmc.c \
	amdgpu_gtt_mgr.c \
	amdgpu_preempt_mgr.c \
	amdgpu_hdp.c \
	amdgpu_i2c.c \
	amdgpu_ib.c \
	amdgpu_ids.c \
	amdgpu_ih.c \
	amdgpu_irq.c \
	amdgpu_isp.c \
	amdgpu_job.c \
	amdgpu_jpeg.c \
	amdgpu_kms.c \
	amdgpu_lsdma.c \
	amdgpu_mca.c \
	amdgpu_mes.c \
	amdgpu_mmhub.c \
	amdgpu_nbio.c \
	amdgpu_object.c \
	amdgpu_pll.c \
	amdgpu_pm.c \
	amdgpu_dma_buf.c \
	amdgpu_psp.c \
	amdgpu_psp_ta.c \
	amdgpu_ring.c \
	amdgpu_rap.c \
	amdgpu_ras.c \
	amdgpu_ras_eeprom.c \
	amdgpu_reset.c \
	amdgpu_ring_mux.c \
	amdgpu_rlc.c \
	amdgpu_sa.c \
	amdgpu_sched.c \
	amdgpu_sdma.c \
	amdgpu_umsch_mm.c \
	amdgpu_vpe.c \
	sienna_cichlid.c \
	amdgpu_seq64.c \
	amdgpu_sync.c \
	amdgpu_trace_points.c \
	amdgpu_ttm.c \
	amdgpu_ucode.c \
	amdgpu_umc.c \
	amdgpu_uvd.c \
	amdgpu_vce.c \
	amdgpu_vcn.c \
	amdgpu_vf_error.c \
	amdgpu_virt.c \
	amdgpu_vm.c \
	amdgpu_vkms.c \
	amdgpu_vm_cpu.c \
	amdgpu_vm_pt.c \
	amdgpu_vm_sdma.c \
	amdgpu_vm_tlb_fence.c \
	amdgpu_vram_mgr.c \
	amdgpu_xcp.c \
	amdgpu_xgmi.c \
	arct_reg_init.c \
	athub_v1_0.c \
	athub_v2_0.c \
	athub_v2_1.c \
	athub_v3_0.c \
	athub_v4_1_0.c \
	atom.c \
	atombios_crtc.c \
	atombios_dp.c \
	atombios_encoders.c \
	atombios_i2c.c \
	aqua_vanjaram.c \
	cik_ih.c \
	cik_sdma.c \
	cik.c \
	cz_ih.c \
	dimgrey_cavefish_reg_init.c \
	df_v4_15.c \
	emu_soc.c \
	gfx_v11_0.c \
	gfx_v11_0_3.c \
	gfx_v12_0.c \
	gfxhub_v11_5_0.c \
	gfxhub_v12_0.c \
	gmc_v11_0.c \
	gmc_v12_0.c \
	hdp_v4_0.c \
	hdp_v5_0.c \
	hdp_v5_2.c \
	hdp_v6_0.c \
	hdp_v7_0.c \
	aldebaran_reg_init.c \
	aldebaran.c \
	iceland_ih.c \
	ih_v6_0.c \
	ih_v6_1.c \
	ih_v7_0.c \
	imu_v11_0.c \
	imu_v11_0_3.c \
	imu_v12_0.c \
	isp_v4_1_0.c \
	isp_v4_1_1.c \
	jpeg_v4_0_5.c \
	jpeg_v5_0_0.c \
	kv_dpm.c \
	kv_smc.c \
	legacy_dpm.c \
	lsdma_v6_0.c \
	lsdma_v7_0.c \
	mca_v3_0.c \
	mes_v11_0.c \
	mes_v12_0.c \
	mmhub_v1_0.c \
	mmhub_v1_7.c \
	mmhub_v1_8.c \
	mmhub_v2_0.c \
	mmhub_v2_3.c \
	mmhub_v3_0.c \
	mmhub_v3_0_1.c \
	mmhub_v3_0_2.c \
	mmhub_v4_1_0.c \
	mmhub_v3_3.c \
	mmhub_v9_4.c \
	mxgpu_ai.c \
	mxgpu_nv.c \
	mxgpu_vi.c \
	nbif_v6_3_1.c \
	nbio_v2_3.c \
	nbio_v4_3.c \
	nbio_v6_1.c \
	nbio_v7_0.c \
	nbio_v7_2.c \
	nbio_v7_4.c \
	nbio_v7_7.c \
	nbio_v7_9.c \
	nbio_v7_11.c \
	navi10_ih.c \
	nv.c \
	psp_v13_0_4.c \
	psp_v14_0.c \
	sdma_v6_0.c \
	sdma_v7_0.c \
	si_dma.c \
	si_dpm.c \
	si_ih.c \
	si_smc.c \
	si.c \
	soc15.c \
	soc21.c \
	soc24.c \
	smuio_v13_0.c \
	smuio_v13_0_3.c \
	smuio_v13_0_6.c \
	smuio_v14_0_2.c \
	tonga_ih.c \
	umc_v6_0.c \
	umc_v6_1.c \
	umc_v6_7.c \
	umc_v8_10.c \
	umc_v8_7.c \
	umc_v12_0.c \
	umsch_mm_v4_0.c \
	uvd_v3_1.c \
	uvd_v4_2.c \
	uvd_v5_0.c \
	uvd_v6_0.c \
	uvd_v7_0.c \
	vce_v2_0.c \
	vce_v3_0.c \
	vce_v4_0.c \
	vcn_sw_ring.c \
	vcn_v4_0_5.c \
	vcn_v5_0_0.c \
	vega10_ih.c \
	vega10_reg_init.c \
	vega20_ih.c \
	vega20_reg_init.c \
	vi.c \
	vpe_v6_1.c

.if !empty(KCONFIG:MCOMPAT)
SRCS+=	amdgpu_ioc32.c
.endif

# amdxcp
SRCS+=	amdgpu_xcp_drv.c

# display/amdgpu_dm
SRCS+=	amdgpu_dm_color.c \
	amdgpu_dm_crc.c \
	amdgpu_dm_crtc.c \
	amdgpu_dm_debugfs.c \
	amdgpu_dm_hdcp.c \
	amdgpu_dm_helpers.c \
	amdgpu_dm_irq.c \
	amdgpu_dm_mst_types.c \
	amdgpu_dm_plane.c \
	amdgpu_dm_pp_smu.c \
	amdgpu_dm_psr.c \
	amdgpu_dm_replay.c \
	amdgpu_dm_services.c \
	amdgpu_dm_wb.c \
	amdgpu_dm.c


# display/dc/bios
SRCS+=	bios_parser_common.c \
	bios_parser_helper.c \
	bios_parser_interface.c \
	bios_parser.c \
	bios_parser2.c \
	command_table_helper.c \
	command_table_helper2.c \
	command_table.c \
	command_table2.c \
	command_table_helper2_dce112.c \
	command_table_helper_dce110.c \
	command_table_helper_dce112.c \
	command_table_helper_dce60.c \
	command_table_helper_dce80.c



# display/dc
SRCS+=	dc_helper.c \
	dc_dmub_srv.c \
	dc_edid_parser.c

# Debug files, not handled for now
SRCS_DEBUG=	amdgpu_dm_crc.c \
		amdgpu_dm_debugfs.c

.if !empty(KCONFIG:MACPI*)
SRCS+=	amdgpu_acpi.c
.else
.endif


# powerplay
SRCS+=	amd_powerplay.c \
	amdgpu_smu.c \
	aldebaran_ppt.c \
	yellow_carp_ppt.c \
	arcturus_ppt.c \
	common_baco.c \
	ci_smumgr.c \
	ci_baco.c \
	cyan_skillfish_ppt.c \
	fiji_smumgr.c \
	fiji_baco.c \
	hardwaremanager.c \
	hwmgr.c \
	iceland_smumgr.c \
	navi10_ppt.c \
	renoir_ppt.c \
	polaris10_smumgr.c \
	polaris_baco.c \
	pp_overdriver.c \
	pp_psm.c \
	ppatomctrl.c \
	ppatomfwctrl.c \
	pppcielanes.c \
	process_pptables_v1_0.c \
	processpptables.c \
	sienna_cichlid_ppt.c \
	smu_cmn.c \
	smu_v14_0.c \
	smu_v14_0_0_ppt.c \
	smu_v14_0_2_ppt.c \
	smu_helper.c \
	smumgr.c \
	tonga_baco.c \
	tonga_smumgr.c \
	vangogh_ppt.c \
	vega10_baco.c \
	vega10_hwmgr.c \
	vega10_powertune.c \
	vega10_processpptables.c \
	vega10_smumgr.c \
	vega10_thermal.c \
	vega12_baco.c \
	vega12_hwmgr.c \
	vega12_processpptables.c \
	vega12_smumgr.c \
	vega12_thermal.c \
	vega20_baco.c \
	vega20_hwmgr.c \
	vega20_powertune.c \
	vega20_processpptables.c \
	vega20_smumgr.c \
	vega20_thermal.c \
	vegam_smumgr.c

.ifdef (CONFIG_DEBUG_FS)
SRCS+=	amdgpu_pmu.c
.endif

SRCS+=	device_if.h \
	vnode_if.h \
	bus_if.h \
	pci_if.h \
	pci_iov_if.h \
	iicbus_if.h \
	opt_drm.h \
        opt_vm.h \
	opt_syscons.h \
	opt_acpi.h

CLEANFILES+= ${KMOD}.ko.full ${KMOD}.ko.debug

.include <bsd.kmod.mk>

# These Makefiles are included after <bsd.kmod.mk> because they expand
# variables defined by it.
.include "../../linuxkpi_version.mk"
.include "../../compiler_flags.mk"

CFLAGS+= -I${.CURDIR:H:H}/linuxkpi/gplv2/include
CFLAGS+= -I${.CURDIR:H:H}/linuxkpi/bsd/include
CFLAGS+= -I${SYSDIR}/compat/linuxkpi/common/include
CFLAGS+= -I${SYSDIR}/compat/linuxkpi/dummy/include

CFLAGS+= -I${.CURDIR:H:H}/include
CFLAGS+= -I${.CURDIR:H:H}/include/drm
CFLAGS+= -I${.CURDIR:H:H}/include/uapi
CFLAGS+= -I${SRCDIR:H:H}

CFLAGS+= -I${SRCDIR}
CFLAGS+= -I${SRCDIR}/acp/include
CFLAGS+= -I${SRCDIR}/amdgpu
CFLAGS+= -I${SRCDIR}/amdkfd
CFLAGS+= -I${SRCDIR}/display
CFLAGS+= -I${SRCDIR}/display/amdgpu_dm
CFLAGS+= -I${SRCDIR}/display/dc
CFLAGS+= -I${SRCDIR}/display/dc/clk_mgr
CFLAGS+= -I${SRCDIR}/display/dc/dccg
CFLAGS+= -I${SRCDIR}/display/dc/dml2
CFLAGS+= -I${SRCDIR}/display/dc/dml2/dml21
CFLAGS+= -I${SRCDIR}/display/dc/dml2/dml21/src/dml2_core
CFLAGS+= -I${SRCDIR}/display/dc/dml2/dml21/src/dml2_mcg
CFLAGS+= -I${SRCDIR}/display/dc/dml2/dml21/src/dml2_dpmm
CFLAGS+= -I${SRCDIR}/display/dc/dml2/dml21/src/dml2_pmo
CFLAGS+= -I${SRCDIR}/display/dc/dml2/dml21/src/dml2_standalone_libraries
CFLAGS+= -I${SRCDIR}/display/dc/dml2/dml21/src/inc
CFLAGS+= -I${SRCDIR}/display/dc/dml2/dml21/inc
CFLAGS+= -I${SRCDIR}/display/dc/dio
CFLAGS+= -I${SRCDIR}/display/dc/dpp
CFLAGS+= -I${SRCDIR}/display/dc/dsc
CFLAGS+= -I${SRCDIR}/display/dc/dwb
CFLAGS+= -I${SRCDIR}/display/dc/hpo
CFLAGS+= -I${SRCDIR}/display/dc/hubp
CFLAGS+= -I${SRCDIR}/display/dc/hubbub
CFLAGS+= -I${SRCDIR}/display/dc/hwss
CFLAGS+= -I${SRCDIR}/display/dc/inc
CFLAGS+= -I${SRCDIR}/display/dc/inc/hw
CFLAGS+= -I${SRCDIR}/display/dc/mmhubbub
CFLAGS+= -I${SRCDIR}/display/dc/mpc
CFLAGS+= -I${SRCDIR}/display/dc/opp
CFLAGS+= -I${SRCDIR}/display/dc/optc
CFLAGS+= -I${SRCDIR}/display/dc/pg
CFLAGS+= -I${SRCDIR}/display/dc/resource
CFLAGS+= -I${SRCDIR}/display/dc/spl
CFLAGS+= -I${SRCDIR}/display/dmub/inc
CFLAGS+= -I${SRCDIR}/display/include
CFLAGS+= -I${SRCDIR}/display/modules/hdcp
CFLAGS+= -I${SRCDIR}/display/modules/inc
CFLAGS+= -I${SRCDIR}/include
CFLAGS+= -I${SRCDIR}/include/asic_reg
CFLAGS+= -I${SRCDIR}/pm
CFLAGS+= -I${SRCDIR}/pm/inc
CFLAGS+= -I${SRCDIR}/pm/legacy-dpm
CFLAGS+= -I${SRCDIR}/pm/powerplay
CFLAGS+= -I${SRCDIR}/pm/powerplay/inc
CFLAGS+= -I${SRCDIR}/pm/powerplay/hwmgr
CFLAGS+= -I${SRCDIR}/pm/powerplay/smumgr
CFLAGS+= -I${SRCDIR}/pm/swsmu
CFLAGS+= -I${SRCDIR}/pm/swsmu/inc
CFLAGS+= -I${SRCDIR}/pm/swsmu/inc/pmfw_if
CFLAGS+= -I${SRCDIR}/pm/swsmu/smu11
CFLAGS+= -I${SRCDIR}/pm/swsmu/smu12
CFLAGS+= -I${SRCDIR}/pm/swsmu/smu13
CFLAGS+= -I${SRCDIR}/pm/swsmu/smu14
CFLAGS+= -I${DRM}/scheduler

CFLAGS+= '-DKBUILD_MODNAME="${KMOD}"'
CFLAGS+= '-DLINUXKPI_PARAM_PREFIX=amdgpu_' -DDRM_SYSCTL_PARAM_PREFIX=_${KMOD}
CFLAGS+= ${KCONFIG:C/(.*)/-DCONFIG_\1/}

CFLAGS.gcc+= -Wno-redundant-decls -Wno-unused-but-set-variable


FPUFLAGS= -msse

CFLAGS.dc.c = -Wno-typedef-redefinition

CFLAGS.dcn_calcs.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dcn_calc_auto.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dcn_calc_math.c= ${FPUFLAGS} -mstack-alignment=4 -Wno-tautological-compare
CFLAGS.dcn20_fpu.c= ${FPUFLAGS} -mstack-alignment=4 -Wno-unused-variable
CFLAGS.dcn20_resource.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dcn21_resource.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dcn30_fpu.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dcn30_resource.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dcn301_fpu.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dcn301_resource.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dcn303_fpu.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dcn31_fpu.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dcn31_resource.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dcn314_fpu.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dcn32_fpu.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dcn32_resource.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dcn32_resource_helpers.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dcn321_fpu.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dcn35_fpu.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dcn351_fpu.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dcn401_fpu.c= ${FPUFLAGS} -mstack-alignment=4

CFLAGS.display_mode_core.c = ${FPUFLAGS} -mstack-alignment=4 -Wno-typedef-redefinition
CFLAGS.display_mode_util.c = ${FPUFLAGS} -mstack-alignment=4 -Wno-typedef-redefinition
CFLAGS.dml_display_rq_dlg_calc.c = ${FPUFLAGS} -mstack-alignment=4 -Wno-typedef-redefinition
CFLAGS.dml_top_mcache.c = ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dml2_core_dcn4.c = ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dml2_core_dcn4_calcs.c = ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dml2_core_shared.c = ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dml2_core_utils.c = ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dml2_dc_resource_mgmt.c = ${FPUFLAGS} -mstack-alignment=4 -Wno-typedef-redefinition
CFLAGS.dml2_dpmm_dcn4.c = ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dml2_mall_phantom.c = ${FPUFLAGS} -mstack-alignment=4 -Wno-typedef-redefinition
CFLAGS.dml2_pmo_dcn4_fams2.c = ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dml2_policy.c = ${FPUFLAGS} -mstack-alignment=4 -Wno-typedef-redefinition
CFLAGS.dml2_translation_helper.c = ${FPUFLAGS} -mstack-alignment=4 -Wno-typedef-redefinition
CFLAGS.dml2_utils.c = ${FPUFLAGS} -mstack-alignment=4 -Wno-typedef-redefinition
CFLAGS.dml2_wrapper.c = ${FPUFLAGS} -mstack-alignment=4 -Wno-typedef-redefinition
CFLAGS.dml21_translation_helper.c = ${FPUFLAGS} -mstack-alignment=4 -Wno-typedef-redefinition
CFLAGS.dml21_utils.c = ${FPUFLAGS} -mstack-alignment=4 -Wno-typedef-redefinition
CFLAGS.dml21_wrapper.c = ${FPUFLAGS} -mstack-alignment=4 -Wno-typedef-redefinition
CFLAGS.lib_float_math.c = ${FPUFLAGS} -mstack-alignment=4

CFLAGS.display_mode_lib.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.display_mode_vba.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.display_mode_vba_20.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.display_mode_vba_21.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.display_mode_vba_30.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.display_mode_vba_31.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.display_mode_vba_314.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.display_mode_vba_32.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.display_mode_vba_util_32.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.display_pipe_clocks.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.dml1_display_rq_dlg_calc.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.display_rq_dlg_helpers.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.display_rq_dlg_calc_20.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.display_rq_dlg_calc_21.c= ${FPUFLAGS} -mstack-alignment=4 -Wno-missing-prototypes
CFLAGS.display_rq_dlg_calc_314.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.display_rq_dlg_calc_32.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.soc_bounding_box.c= ${FPUFLAGS} -mstack-alignment=4

CFLAGS.display_rq_dlg_calc_20v2.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.display_mode_vba_20v2.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.display_rq_dlg_calc_30.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.display_rq_dlg_calc_31.c= ${FPUFLAGS} -mstack-alignment=4 -Wno-unused-but-set-variable

CFLAGS.rc_calc.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.rc_calc_dpi.c= ${FPUFLAGS} -mstack-alignment=4
CFLAGS.rc_calc_fpu.c= ${FPUFLAGS} -mstack-alignment=4

.if ${MACHINE_CPUARCH} != "powerpc"
CWARNFLAGS+=	-Wno-expansion-to-defined
.endif
CWARNFLAGS+=	-Wno-pointer-arith -Wno-format -Wno-cast-qual
CWARNFLAGS+=	${CWARNFLAGS.${.IMPSRC:T}}

# amdgpu/
CWARNFLAGS.amdgpu_acpi.c=			-Wno-missing-prototypes -Wno-incompatible-pointer-types
CWARNFLAGS.amdgpu_atpx_handler.c=		-Wno-missing-prototypes
CWARNFLAGS.amdgpu_bo_list.c=			-Wno-unused-but-set-variable -Wno-tautological-constant-out-of-range-compare
CWARNFLAGS.amdgpu_csa.c=			-Wno-unused-but-set-variable
CWARNFLAGS.amdgpu_device.c=			-Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.amdgpu_discovery.c=			-Wno-unused-function
CWARNFLAGS.amdgpu_dm_debugfs.c=			-Wno-pointer-bool-conversion -Wno-unused-but-set-variable
CWARNFLAGS.amdgpu_fence.c=			-Wno-unused-variable
CWARNFLAGS.amdgpu_fdinfo.c=			-Wno-unused-but-set-variable
CWARNFLAGS.amdgpu_gfx.c=			-Wno-unused-but-set-variable -Wno-tautological-overlap-compare
CWARNFLAGS.amdgpu_ioc32.c=			-Wno-missing-prototypes
CWARNFLAGS.amdgpu_pm.c=				-Wno-unused-const-variable
CWARNFLAGS.amdgpu_fw_attestation.c=		-Wno-missing-prototypes
CWARNFLAGS.amdgpu_securedisplay.c=		-Wno-unused-const-variable
CWARNFLAGS.amdgpu_kms.c=			-Wno-missing-prototypes
CWARNFLAGS.amdgpu_mes.c=			-Wno-unused-but-set-variable
CWARNFLAGS.amdgpu_psp.c=			-Wno-missing-prototypes -Wno-unused-variable
CWARNFLAGS.amdgpu_ras.c=			-Wno-missing-prototypes -Wno-unused-function -Wno-undefined-inline -Wno-unused-but-set-variable
CWARNFLAGS.amdgpu_ring_mux.c=			-Wno-missing-prototypes
CWARNFLAGS.amdgpu_sched.c=			-Wno-missing-prototypes
CWARNFLAGS.amdgpu_ttm.c=			-Wno-unused-but-set-variable
CWARNFLAGS.amdgpu_ucode.c=			-Wno-missing-prototypes
CWARNFLAGS.amdgpu_virt.c=			-Wno-missing-prototypes
CWARNFLAGS.amdgpu_vram_mgr.c=			-Wno-unused-variable
CWARNFLAGS.amdgpu_xgmi.c=			-Wno-unused-variable
CWARNFLAGS.aldebaran_ppt.c=			-Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.aldebaran.c=				-Wno-unused-variable
CWARNFLAGS.arcturus_ppt.c=			-Wno-uninitialized
CWARNFLAGS.aqua_vanjaram_reg_init.c=		-Wno-missing-prototypes -Wno-unused-but-set-variable -Wno-unused-function
CWARNFLAGS.dimgrey_cavefish_reg_init.c=		-Wno-missing-prototypes
CWARNFLAGS.yellow_carp_ppt.c=			-Wno-sometimes-uninitialized
CWARNFLAGS.atombios_encoders.c=			-Wno-unused-but-set-variable
CWARNFLAGS.dce_v6_0.c=				-Wno-unused-but-set-variable
CWARNFLAGS.dce_v8_0.c=				-Wno-unused-but-set-variable
CWARNFLAGS.gmc_v9_0.c=				-Wno-initializer-overrides
CWARNFLAGS.gfx_v7_0.c=				-Wno-unused-const-variable
CWARNFLAGS.gfx_v9_0.c=				-Wno-missing-prototypes
CWARNFLAGS.gfx_v9_4_2.c=			-Wno-missing-prototypes
CWARNFLAGS.gfx_v9_4_3.c=			-Wno-unused-but-set-variable -Wno-sometimes-uninitialized -Wno-unused-function -Wno-unused-const-variable
CWARNFLAGS.gfx_v10_0.c=				-Wno-unused-variable
CWARNFLAGS.gfx_v11_0.c=				-Wno-sometimes-uninitialized
CWARNFLAGS.gfxhub_v1_2.c=			-Wno-sometimes-uninitialized
CWARNFLAGS.jpeg_v2_5.c=				-Wno-unused-but-set-variable
CWARNFLAGS.jpeg_v3_0.c=				-Wno-unused-but-set-variable
CWARNFLAGS.jpeg_v4_0_3.c=			-Wno-uninitialized -Wno-unused-function
CWARNFLAGS.imu_v11_0_3.c=			-Wno-missing-prototypes
CWARNFLAGS.kv_dpm.c=				-Wno-unused-but-set-variable
CWARNFLAGS.mmhub_v1_7.c=			-Wno-missing-prototypes
CWARNFLAGS.mmhub_v1_8.c=			-Wno-unused-function -Wno-unused-const-variable
CWARNFLAGS.nv.c=				-Wno-unused-const-variable
CWARNFLAGS.psp_v10_0.c=				-Wno-unused-but-set-variable
CWARNFLAGS.psp_v11_0.c=				-Wno-missing-prototypes
CWARNFLAGS.sdma_v4_0.c=				-Wno-unused-but-set-variable
CWARNFLAGS.sdma_v4_4_2.c=			-Wno-unused-but-set-variable -Wno-unused-function
CWARNFLAGS.si_dma.c=				-Wno-unused-but-set-variable
CWARNFLAGS.si_dpm.c=				-Wno-gnu-variable-sized-type-not-at-end
CWARNFLAGS.si_smc.c=				-Wno-gnu-variable-sized-type-not-at-end
CWARNFLAGS.si.c=				-Wno-gnu-variable-sized-type-not-at-end
CWARNFLAGS.sienna_cichlid_ppt.c=		-Wno-missing-prototypes -Wno-uninitialized
CWARNFLAGS.smuio_v9_0.c=			-Wno-missing-prototypes
CWARNFLAGS.smuio_v11_0.c=			-Wno-missing-prototypes
CWARNFLAGS.smuio_v13_0.c=			-Wno-missing-prototypes
CWARNFLAGS.umc_v6_7.c=				-Wno-unused-function
CWARNFLAGS.umc_v8_10.c=				-Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.vangogh_ppt.c=			-Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.vcn_sw_ring.c=			-Wno-missing-prototypes
CWARNFLAGS.vcn_v3_0.c=				-Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.vcn_v4_0.c=				-Wno-unused-but-set-variable
CWARNFLAGS.vcn_v4_0_3.c=			-Wno-unused-function

# display/amdgpu_dm
CWARNFLAGS.amdgpu_dm_helpers.c=		-Wno-int-in-bool-context -Wno-uninitialized
CWARNFLAGS.amdgpu_dm_mst_types.c=	-Wno-unused-but-set-variable -Wno-missing-prototypes
CWARNFLAGS.amdgpu_dm_plane.c=		-Wno-missing-prototypes
CWARNFLAGS.amdgpu_dm_pp_smu.c=		-Wno-missing-prototypes -Wno-incompatible-function-pointer-types
CWARNFLAGS.amdgpu_dm_psr.c=		-Wno-unused-but-set-variable
CWARNFLAGS.amdgpu_dm_services.c=	-Wno-missing-prototypes
CWARNFLAGS.amdgpu_dm.c=			-Wno-missing-prototypes -Wno-unused-function -Wno-unused-but-set-variable -Wno-unused-variable

# display/dc
CWARNFLAGS.command_table2.c=		-Wno-unused-but-set-variable
CWARNFLAGS.command_table_helper_dce60.c=		-Wno-missing-prototypes
CWARNFLAGS.conversion.c=		-Wno-missing-prototypes
CWARNFLAGS.fixpt31_32.c=		-Wno-incompatible-pointer-types
CWARNFLAGS.vector.c=			-Wno-missing-prototypes
CWARNFLAGS.bios_parser.c=		-Wno-missing-prototypes
CWARNFLAGS.bios_parser2.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dc.c=			-Wno-missing-prototypes -Wno-unused-but-set-variable -Wno-unused-variable
CWARNFLAGS.dc_hw_sequencer.c=		-Wno-missing-prototypes
CWARNFLAGS.dc_link.c=			-Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.dc_link_ddc.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dc_link_enc_cfg.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dc_link_dp.c=		-Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.dc_resource.c=		-Wno-missing-prototypes
CWARNFLAGS.dc_stat.c=			-Wno-unused-but-set-variable
CWARNFLAGS.dce_aux.c=			-Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.dce_audio.c=			-Wno-missing-prototypes
CWARNFLAGS.dce_calcs.c=			-Wno-unused-but-set-variable
CWARNFLAGS.dce_clock_source.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dce_dmcu.c=			-Wno-missing-prototypes
CWARNFLAGS.dce_i2c_hw.c=		-Wno-missing-prototypes
CWARNFLAGS.dce_i2c_sw.c=		-Wno-missing-prototypes
CWARNFLAGS.dce_link_encoder.c=		-Wno-unused-but-set-variable -Wno-missing-prototypes
CWARNFLAGS.dce_transform.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dce_stream_encoder.c=	-Wno-unused-but-set-variable
CWARNFLAGS.dce_opp.c=			-Wno-missing-prototypes
CWARNFLAGS.dce_panel_cntl.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dce100_resource.c=		-Wno-missing-prototypes -Wno-initializer-overrides
CWARNFLAGS.dce110_compressor.c=		-Wno-missing-prototypes
CWARNFLAGS.dce110_hwseq.c=		-Wno-missing-prototypes
CWARNFLAGS.dce110_mem_input_v.c=	-Wno-missing-prototypes
CWARNFLAGS.dce110_resource.c=		-Wno-missing-prototypes -Wno-initializer-overrides
CWARNFLAGS.dce110_timing_generator.c=	-Wno-unused-but-set-variable
CWARNFLAGS.dce112_resource.c=		-Wno-missing-prototypes -Wno-initializer-overrides
CWARNFLAGS.dce120_hwseq.c=		-Wno-unused-const-variable
CWARNFLAGS.dce120_resource.c=		-Wno-missing-prototypes -Wno-initializer-overrides
CWARNFLAGS.dce120_timing_generator.c=	-Wno-missing-prototypes
CWARNFLAGS.dce60_timing_generator.c=	-Wno-missing-prototypes
CWARNFLAGS.dce60_resource.c=		-Wno-missing-prototypes -Wno-initializer-overrides
CWARNFLAGS.dce80_resource.c=		-Wno-missing-prototypes -Wno-initializer-overrides
CWARNFLAGS.rn_clk_mgr_vbios_smu.c=	-Wno-missing-prototypes
CWARNFLAGS.rn_clk_mgr.c=		-Wno-missing-prototypes
CWARNFLAGS.rv1_clk_mgr_vbios_smu.c=	-Wno-missing-prototypes
CWARNFLAGS.rv1_clk_mgr.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn10_dpp.c=			-Wno-missing-prototypes
CWARNFLAGS.dcn10_dpp_dscl.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn10_hwseq.c=		-Wno-missing-prototypes -Wno-unused-but-set-variable -Wno-unused-variable
CWARNFLAGS.dcn10_hubp.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn10_link_encoder.c=	-Wno-unused-but-set-variable
CWARNFLAGS.dcn10_stream_encoder.c=	-Wno-unused-but-set-variable
CWARNFLAGS.dcn10_opp.c=			-Wno-missing-prototypes
CWARNFLAGS.dcn10_optc.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn10_resource.c=		-Wno-missing-prototypes -Wno-initializer-overrides -Wno-unused-const-variable
CWARNFLAGS.dcn20_dpp.c=			-Wno-missing-prototypes
CWARNFLAGS.dcn20_dwb_scl.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn20_hwseq.c=		-Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.dcn20_hubp.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn20_init.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn20_mpc.c=			-Wno-missing-prototypes
CWARNFLAGS.dcn20_optc.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn20_resource.c=		-Wno-missing-prototypes -Wno-initializer-overrides -Wno-unused-variable
CWARNFLAGS.dcn20_clk_mgr.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn201_clk_mgr.c=		-Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.dcn201_dccg.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn201_dpp.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dcn201_hubp.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn201_hwseq.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dcn201_init.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn201_link_encoder.c=	-Wno-missing-prototypes
CWARNFLAGS.dcn201_resource.c=		-Wno-missing-prototypes -Wno-initializer-overrides -Wno-unused-const-variable
CWARNFLAGS.dcn21_dccg.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn21_hubp.c=		-Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.dcn21_hubbub.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn21_hwseq.c=		-Wno-unused-variable
CWARNFLAGS.dcn21_init.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn21_link_encoder.c=	-Wno-missing-prototypes
CWARNFLAGS.dcn21_resource.c=		-Wno-missing-prototypes -Wno-initializer-overrides -Wno-unused-variable
CWARNFLAGS.dcn30_dpp.c=			-Wno-missing-prototypes
CWARNFLAGS.dcn30_hubp.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn30_mpc.c=			-Wno-missing-prototypes
CWARNFLAGS.dcn30_mmhubbub.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn30_dio_stream_encoder.c=	-Wno-missing-prototypes
CWARNFLAGS.dcn30_hwseq.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dcn30_optc.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn30_resource.c=		-Wno-initializer-overrides -Wno-missing-prototypes -Wno-unused-const-variable
CWARNFLAGS.dcn30_afmt.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dcn30_init.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn301_init.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn301_panel_cntl.c=		-Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.dcn301_resource.c=		-Wno-initializer-overrides -Wno-missing-prototypes -Wno-unused-const-variable
CWARNFLAGS.dcn301_smu.c=		-Wno-missing-prototypes
CWARNFLAGS.vg_clk_mgr.c=		-Wno-missing-prototypes -Wno-incompatible-pointer-types
CWARNFLAGS.dcn302_init.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn302_resource.c=		-Wno-initializer-overrides -Wno-unused-const-variable
CWARNFLAGS.dcn303_init.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn303_resource.c=		-Wno-initializer-overrides -Wno-unused-const-variable
CWARNFLAGS.dcn31_apg.c=			-Wno-unused-but-set-variable
CWARNFLAGS.dcn31_clk_mgr.c=		-Wno-missing-prototypes -Wno-incompatible-pointer-types -Wno-unused-but-set-variable
CWARNFLAGS.dcn31_dccg.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn31_dio_link_encoder.c=	-Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.dcn31_hpo_dp_stream_encoder.c=	-Wno-unused-but-set-variable
CWARNFLAGS.dcn31_hubbub.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn31_hubp.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn31_hwseq.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dcn31_init.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn31_panel_cntl.c=		-Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.dcn31_resource.c=		-Wno-missing-prototypes -Wno-initializer-overrides -Wno-unused-const-variable
CWARNFLAGS.dcn31_smu.c=			-Wno-missing-prototypes
CWARNFLAGS.dcn314_clk_mgr.c=		-Wno-incompatible-pointer-types
CWARNFLAGS.dcn314_dccg.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn314_dio_stream_encoder.c=	-Wno-missing-prototypes
CWARNFLAGS.dcn314_optc.c=		-Wno-missing-prototypes -Wno-initializer-overrides
CWARNFLAGS.dcn314_resource.c=		-Wno-initializer-overrides -Wno-unused-const-variable
CWARNFLAGS.dcn315_clk_mgr.c=		-Wno-missing-prototypes -Wno-incompatible-pointer-types -Wno-unused-but-set-variable
CWARNFLAGS.dcn315_resource.c=		-Wno-initializer-overrides -Wno-unused-const-variable
CWARNFLAGS.dcn315_smu.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn316_clk_mgr.c=		-Wno-missing-prototypes -Wno-incompatible-pointer-types -Wno-unused-but-set-variable
CWARNFLAGS.dcn316_resource.c=		-Wno-initializer-overrides -Wno-unused-const-variable
CWARNFLAGS.dcn316_smu.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn32_clk_mgr.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn32_dccg.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn32_dio_link_encoder.c=	-Wno-missing-prototypes -Wno-unused-variable
CWARNFLAGS.dcn32_dio_stream_encoder.c=	-Wno-missing-prototypes
CWARNFLAGS.dcn32_dpp.c=			-Wno-missing-prototypes
CWARNFLAGS.dcn32_fpu.c=			-Wno-unused-but-set-variable -Wno-missing-prototypes
CWARNFLAGS.dcn32_hwseq.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dcn32_hubbub.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn32_hubp.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn32_hwseq.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dcn32_init.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn32_mmhubbub.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn32_mpc.c=			-Wno-missing-prototypes
CWARNFLAGS.dcn32_optc.c=		-Wno-missing-prototypes
CWARNFLAGS.dcn32_resource.c=		-Wno-missing-prototypes -Wno-unused-but-set-variable -Wno-initializer-overrides -Wno-unused-const-variable
CWARNFLAGS.dcn32_resource_helpers.c=	-Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.dcn321_fpu.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dcn321_resource.c=		-Wno-initializer-overrides -Wno-unused-const-variable
CWARNFLAGS.dcn35_clk_mgr.c=		-Wno-incompatible-pointer-types
CWARNFLAGS.dcn35_resource.c=		-Wno-initializer-overrides
CWARNFLAGS.dcn351_resource.c=		-Wno-initializer-overrides
CWARNFLAGS.dcn351_fpu.c=		-Wno-initializer-overrides
CWARNFLAGS.dcn401_resource.c=		-Wno-initializer-overrides
CWARNFLAGS.fixpt31_32.c=		-Wno-unused-but-set-variable -Wno-incompatible-pointer-types -Wno-unused-const-variable
CWARNFLAGS.spl_fixpt31_32.c=		-Wno-incompatible-pointer-types

CWARNFLAGS.hw_ddc.c=			-Wno-unused-but-set-variable
CWARNFLAGS.hw_factory.c=		-Wno-missing-prototypes
CWARNFLAGS.hw_factory_diag.c=		-Wno-missing-prototypes
CWARNFLAGS.hw_gpio.c=			-Wno-unused-function
CWARNFLAGS.hw_translate_diag.c=		-Wno-missing-prototypes
CWARNFLAGS.irq_service.c=		-Wno-missing-prototypes
CWARNFLAGS.irq_service_dcn10.c=		-Wno-missing-prototypes
CWARNFLAGS.irq_service_dcn20.c=		-Wno-missing-prototypes
CWARNFLAGS.irq_service_dcn201.c=	-Wno-missing-prototypes -Wno-unused-const-variable
CWARNFLAGS.irq_service_dcn21.c=		-Wno-missing-prototypes -Wno-unused-const-variable -Wno-initializer-overrides
CWARNFLAGS.irq_service_dcn30.c=		-Wno-missing-prototypes -Wno-unused-const-variable
CWARNFLAGS.irq_service_dcn31.c=		-Wno-missing-prototypes
CWARNFLAGS.irq_service_dcn315.c=	-Wno-missing-prototypes
CWARNFLAGS.link_detection.c=		-Wno-unused-but-set-variable
CWARNFLAGS.link_dp_capability.c=	-Wno-unused-but-set-variable
CWARNFLAGS.link_dp_dpia_bw.c=		-Wno-unused-but-set-variable
CWARNFLAGS.link_dp_trace.c=		-Wno-missing-prototypes
CWARNFLAGS.link_dp_training.c=		-Wno-unused-but-set-variable
CWARNFLAGS.link_validation.c=		-Wno-missing-prototypes
CWARNFLAGS.power_helpers.c=		-Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.dc_helper.c=			-Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.dcn_calcs.c+=		-Wno-missing-prototypes
CWARNFLAGS.dc_dmub_srv.c=		-Wno-unused-but-set-variable -Wno-missing-prototypes
CWARNFLAGS.dmub_psr.c=			-Wno-unused-but-set-variable
CWARNFLAGS.dmub_abm.c=			-Wno-unused-but-set-variable
CWARNFLAGS.dmub_abm_lcd.c=		-Wno-missing-prototypes
CWARNFLAGS.dmub_hw_lock_mgr.c=		-Wno-unused-but-set-variable
CWARNFLAGS.virtual_link_hwss.c=		-Wno-missing-prototypes

# display/dmub/*
CWARNFLAGS.dmub_dcn20.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dmub_dcn21.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dmub_dcn30.c=		-Wno-unused-but-set-variable -Wno-missing-prototypes
CWARNFLAGS.dmub_dcn301.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dmub_dcn302.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dmub_dcn303.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dmub_dcn31.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dmub_dcn315.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dmub_dcn316.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dmub_outbox.c=		-Wno-unused-but-set-variable
CWARNFLAGS.dmub_reg.c=			-Wno-unused-but-set-variable
CWARNFLAGS.dmub_srv.c=			-Wno-unused-but-set-variable
CWARNFLAGS.dmub_srv_stat.c=		-Wno-unused-but-set-variable

# display/dc/dml/
CWARNFLAGS.display_mode_vba_30.c=	-Wno-unused-but-set-variable
CWARNFLAGS.display_mode_vba_31.c=	-Wno-unused-but-set-variable
CWARNFLAGS.display_mode_vba_314.c=	-Wno-unused-but-set-variable
CWARNFLAGS.display_mode_vba_32.c=	-Wno-enum-conversion -Wno-unused-const-variable
CWARNFLAGS.display_mode_vba_util_32.c=	-Wno-enum-conversion -Wno-missing-prototypes -Wno-unused-local-typedef
CWARNFLAGS.display_rq_dlg_calc_314.c=	-Wno-unused-but-set-variable

# powerplay/*
CWARNFLAGS.amdgpu_smu.c=		-Wno-unused-function -Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.ci_smumgr.c=			-Wno-unused-but-set-variable
CWARNFLAGS.hardwaremanager.c=		-Wno-missing-prototypes
CWARNFLAGS.pp_psm.c=			-Wno-unused-but-set-variable
CWARNFLAGS.iceland_smumgr.c=		-Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.navi10_ppt.c=		-Wno-unused-function -Wno-unused-const-variable -Wno-unused-label -Wno-uninitialized
CWARNFLAGS.fiji_smumgr.c=		-Wno-unused-but-set-variable
CWARNFLAGS.ppatomctrl.c=		-Wno-unused-but-set-variable
CWARNFLAGS.polaris10_smumgr.c=		-Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.smu7_hwmgr.c=		-Wno-missing-prototypes
CWARNFLAGS.smu8_hwmgr.c=		-Wno-missing-prototypes
CWARNFLAGS.smu9_smumgr.c=		-Wno-missing-prototypes
CWARNFLAGS.smu_cmn.c=			-Wno-implicit-function-declaration -Wno-sometimes-uninitialized
CWARNFLAGS.smu_v13_0_0_ppt.c=		-Wno-unused-variable
CWARNFLAGS.smu_v13_0_6_ppt.c=		-Wno-missing-prototypes -Wno-initializer-overrides
CWARNFLAGS.smu_v13_0_7_ppt.c=		-Wno-unused-variable
CWARNFLAGS.smu_v14_0_2_ppt.c=		-Wno-unused-variable
CWARNFLAGS.tonga_smumgr.c=		-Wno-unused-but-set-variable
CWARNFLAGS.vega10_hwmgr.c=		-Wno-missing-prototypes -Wno-unused-but-set-variable
CWARNFLAGS.vega10_processpptables.c=	-Wno-missing-prototypes
CWARNFLAGS.vega12_hwmgr.c=		-Wno-missing-prototypes
CWARNFLAGS.vega20_hwmgr.c=		-Wno-missing-prototypes
CWARNFLAGS.vegam_smumgr.c=		-Wno-missing-prototypes

# modules/*
CWARNFLAGS.freesync.c=			-Wno-unused-but-set-variable
