/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Configuration header file for TI's k2hk-evm
 *
 * (C) Copyright 2012-2014
 *     Texas Instruments Incorporated, <www.ti.com>
 */

#ifndef __CONFIG_K2HK_EVM_H
#define __CONFIG_K2HK_EVM_H

#include <environment/ti/spi.h>

/* U-Boot general configuration */
#define ENV_KS2_BOARD_SETTINGS						\
	DEFAULT_FW_INITRAMFS_BOOT_ENV					\
	DEFAULT_FIT_TI_ARGS						\
	"findfdt=setenv fdtfile ${name_fdt}\0"				\
	"boot=ubi\0"							\
	"args_ubi=setenv bootargs ${bootargs} rootfstype=ubifs "	\
	"root=ubi0:rootfs rootflags=sync rw ubi.mtd=ubifs,2048\0"	\
	"name_fdt=keystone-k2hk-evm.dtb\0"				\
	"name_mon=skern-k2hk.bin\0"					\
	"name_ubi=k2hk-evm-ubifs.ubi\0"					\
	"name_uboot=u-boot-spi-k2hk-evm.gph\0"				\
	"name_fs=arago-console-image-k2hk-evm.cpio.gz\0"

#include <configs/ti_armv7_keystone2.h>

#define SPI_MTD_PARTS KEYSTONE_SPI0_MTD_PARTS

/* Network */
#define CFG_KSNET_CPSW_NUM_PORTS	5

#endif /* __CONFIG_K2HK_EVM_H */
