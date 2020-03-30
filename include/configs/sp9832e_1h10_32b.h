/*
 * (C) Copyright 2009 DENX Software Engineering
 * Author: John Rigby <jrigby@gmail.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#include <asm/arch/soc_config.h>

#define CONFIG_EXIT_FUN

//only used in fdl2 .in uart download, the debug infors  from  serial will break the download process.
//#define NAND_DEBUG
//#define DEBUG
#define CONFIG_LOAD_PARTITION
#define CONFIG_CHIP_ENV_SET
#define UBOOT_HASH_SIZE        0x200

/*#define SPRD_EVM_TAG_ON 1*/
#ifdef SPRD_EVM_TAG_ON
#define SPRD_EVM_ADDR_START 0x00026000
#define SPRD_EVM_TAG(_x) (*(((unsigned long *)SPRD_EVM_ADDR_START)+_x) = *(volatile unsigned long *)0x87003004)
#endif



/*
 * SPREADTRUM BIGPHONE board - SoC Configuration
 */
#define CONFIG_SOC_SHARKLE
#define BOOT_FLAG_ADDRESS 0x3008
//#define CONFIG_SCX35L64
//
//
//#define CONFIG_SUPPORT_WLTE

//dual-backup, sansung demand
#define CONFIG_DUAL_BACKUP /*to be add*/


#define CHIPRAM_ENV_ADDR	0x82000000
#define CHIP_ENDIAN_LITTLE
#define _LITTLE_ENDIAN 1

#define CONFIG_SYS_64BIT_LBA
#define CONFIG_EMMC_BOOT
//#define CONFIG_ARCH_SCX35L
#define CONFIG_ADIE_SC2721
#define CONFIG_SD_BOOT

#define SDCARD_BOOT_SECTOR	200

#ifdef  CONFIG_EMMC_BOOT
#define EMMC_SECTOR_SIZE 512


#define CONFIG_SYS_EMMC_U_BOOT_SECTOR_NUM ((CONFIG_SYS_NAND_U_BOOT_SIZE+EMMC_SECTOR_SIZE-1)/EMMC_SECTOR_SIZE)
#endif

/*
 * MMC definition
 */
#define CONFIG_CMD_MMC
#ifdef  CONFIG_CMD_MMC
#define CONFIG_EFI_PARTITION		1
#endif



//#define CONFIG_SYS_HUSH_PARSER



#define CONFIG_SPL_LOAD_LEN	(0x6000)

/* NAND BOOT is the only boot method */
#define CONFIG_NAND_U_BOOT
/* Start copying real U-boot from the second page */
#define CONFIG_SYS_NAND_U_BOOT_OFFS	0x40000
#define CONFIG_SYS_NAND_U_BOOT_SIZE	0x8A000
//#define FPGA_TRACE_DOWNLOAD //for download image from trace

/*when ddr channel function open,fdl2/uboot start address can be set intertwine addr*/
//#define CONFIG_UBOOT_INTERTWINE_ADDR

/* Load U-Boot to this address */
#define CONFIG_UBOOT_MAX_SIZE 0x100000
#define CONFIG_SYS_NAND_U_BOOT_DST	0x9f000000
#define CONFIG_SYS_NAND_U_BOOT_START	CONFIG_SYS_NAND_U_BOOT_DST
#define CONFIG_SYS_SDRAM_BASE 0x80000000
#define CONFIG_SYS_SDRAM_END (CONFIG_SYS_SDRAM_BASE + 256*1024*1024)

//#define CONFIG_SMLBOOT          1 /*to be add*/
#define SML_LOAD_MAX_SIZE       (64*1024)
#define TOS_LOAD_MAX_SIZE       (4*1024*1024)
#define TEECFG_LOAD_MAX_SIZE       (1*1024*1024)
//#define CONFIG_SML_LDADDR_START (0x94000000)
//#define CONFIG_TOS_LDADDR_START (0x94100000)
#define IMAGE_HEAD_SIZE		(512)

#ifndef CONFIG_NAND_SPL
#define CONFIG_SYS_INIT_SP_ADDR     \
	(CONFIG_SYS_SDRAM_END - 0x10000 - GENERATED_GBL_DATA_SIZE)

#endif

#define CONFIG_HW_WATCHDOG
//#define CONFIG_AUTOBOOT //used for FPGA test, auto boot other image
//#define CONFIG_DISPLAY_CPUINFO


/*
 * Memory Info
 */
/* malloc() len */
#define CONFIG_SYS_MALLOC_LEN		(2 << 20)	/* 1 MiB */
/*
 * Board has 2 32MB banks of DRAM but there is a bug when using
 * both so only the first is configured
 */
#define CONFIG_NR_DRAM_BANKS	1

/* 8MB DRAM test */

/*
 * Serial Info
 */
#define CONFIG_SYS_SC8800X_UART1	1

/*
 * Flash & Environment
 */
/* No NOR flash present */
#define CONFIG_SYS_MONITOR_LEN ((CONFIG_SYS_NAND_U_BOOT_OFFS)+(CONFIG_SYS_NAND_U_BOOT_SIZE))
#define CONFIG_SYS_NO_FLASH	1
#define CONFIG_ENV_SIZE		(128 * 1024)
/*
#define	CONFIG_ENV_OFFSET	CONFIG_SYS_MONITOR_LEN
#define CONFIG_ENV_OFFSET_REDUND	(CONFIG_ENV_OFFSET + CONFIG_ENV_SIZE)
*/

/* DDR */
#define CONFIG_CLK_PARA
//#define CONFIG_DUAL_DDR fpga verify status
//#define CONFIG_DUAL_DDR_3G

#ifndef CONFIG_CLK_PARA
#define DDR_CLK 464
#else
#define MAGIC_HEADER	0x5555AAAA
#define MAGIC_END	0xAAAA5555
#define CONFIG_PARA_VERSION 2

#define CLK_CA53_CORE0	CLK_1300M

#define CLK_CA53_AXI    CLK_CA53_CORE0/2
#define CLK_DGB0_FREQ	CLK_CA53_CORE0/2
#define CLK_ACE0_FREQ   CLK_CA53_CORE0/2
#define CLK_ATB0_FREQ   CLK_CA53_CORE0/2

#ifdef CONFIG_NAND_SPL
#define CLK_DDR_FREQ        667000000
#else
#define CLK_DDR_FREQ        166000000
#endif

#ifdef CONFIG_NAND_SPL
#define DCDC_ARM	1100
#else
#define DCDC_ARM	1100
#endif

#define DCDC_CORE	900


//clk_list
#define CLK_LEVEL_COUNT_MAX  6
#define CLK_AXI_LEVEL 4
#define CLK_AXI_LEVEL_ID 3
#define CLK_CCI_LEVEL 4
#define CLK_CCI_LEVEL_ID 3
#define CLK_APB_LEVEL 4
#define CLK_APB_LEVEL_ID 3
#define CLK_AON_APB_LEVEL 4
#define CLK_AON_APB_LEVEL_ID 3

#define CONFIG_VOL_PARA
#endif
//--- for DDR
#define CFG_DRAM_TYPE	DRAM_LPDDR3
#define DDR_AUTO_DETECT
#ifdef DDR_AUTO_DETECT
#define DDR_MR8_READ
#endif
//#define DDR_DFS_SUPPORT
//#define DDR_DFS_VAL_BASE 0X1c00
//#define DDR_SCAN_SUPPORT

#define DDR_DFTYPE_LP4 DRAM_LPDDR4_1CS_12G_X32
#define DDR_DFTYPE_LP3 DRAM_LPDDR3_2CS_16G_X32_X16X4

#define DDR_CLK0 667
#define DDR_CLK1 384
#define DDR_CLK2 256
#define DDR_CLK3 166
#define DDR_DPLL_CFG1 REG_ANLG_PHY_G2_ANALOG_DPLL_THM_TOP_DPLL_CTRL0
#define DDR_DPLL_CFG2 REG_ANLG_PHY_G2_ANALOG_DPLL_THM_TOP_DPLL_CTRL1

#define DMC_CA_SWAP

#ifdef DDR_FREQ_AUTO_SEL
#define DDR_REG_VAL_MR5_INDEX0 0x01
#define DDR_REG_VAL_MR6_INDEX0 0x06
#define DDR_REG_VAL_MR7_INDEX0 0
#define DDR_REG_VAL_MR8_INDEX0 0x1F
#define DDR_CS_NUM_VAL_INDEX0 1
#define MR_DDR_CLK_SEL_INDEX0 533

#define DDR_REG_VAL_MR5_INDEX1 0x05
#define DDR_REG_VAL_MR6_INDEX1 0x01
#define DDR_REG_VAL_MR7_INDEX1 0
#define DDR_REG_VAL_MR8_INDEX1 0x1B
#define DDR_CS_NUM_VAL_INDEX1 2
#define MR_DDR_CLK_SEL_INDEX1 533

#define DDR_REG_VAL_MR5_INDEX2 0
#define DDR_REG_VAL_MR6_INDEX2 0
#define DDR_REG_VAL_MR7_INDEX2 0
#define DDR_REG_VAL_MR8_INDEX2 0
#define DDR_CS_NUM_VAL_INDEX2 1
#define MR_DDR_CLK_SEL_INDEX2 533

#define DDR_REG_VAL_MR5_INDEX3 0
#define DDR_REG_VAL_MR6_INDEX3 0
#define DDR_REG_VAL_MR7_INDEX3 0
#define DDR_REG_VAL_MR8_INDEX3 0
#define DDR_CS_NUM_VAL_INDEX3 1
#define MR_DDR_CLK_SEL_INDEX3 533

#define DDR_REG_VAL_MR5_INDEX4 0
#define DDR_REG_VAL_MR6_INDEX4 0
#define DDR_REG_VAL_MR7_INDEX4 0
#define DDR_REG_VAL_MR8_INDEX4 0
#define DDR_CS_NUM_VAL_INDEX4 1
#define MR_DDR_CLK_SEL_INDEX4 533

#define DDR_REG_VAL_MR5_INDEX5 0
#define DDR_REG_VAL_MR6_INDEX5 0
#define DDR_REG_VAL_MR7_INDEX5 0
#define DDR_REG_VAL_MR8_INDEX5 0
#define DDR_CS_NUM_VAL_INDEX5 1
#define MR_DDR_CLK_SEL_INDEX5 533

#define DDR_REG_VAL_MR5_INDEX6 0
#define DDR_REG_VAL_MR6_INDEX6 0
#define DDR_REG_VAL_MR7_INDEX6 0
#define DDR_REG_VAL_MR8_INDEX6 0
#define DDR_CS_NUM_VAL_INDEX6 1
#define MR_DDR_CLK_SEL_INDEX6 533

#define DDR_REG_VAL_MR5_INDEX7 0
#define DDR_REG_VAL_MR6_INDEX7 0
#define DDR_REG_VAL_MR7_INDEX7 0
#define DDR_REG_VAL_MR8_INDEX7 0
#define DDR_CS_NUM_VAL_INDEX7 1
#define MR_DDR_CLK_SEL_INDEX7 533
#endif

/* NAND */
//#define CONFIG_JFFS2_NAND
//#define CONFIG_SPRD_NAND_HWECC
//#define CONFIG_SYS_NAND_5_ADDR_CYCLE


#define CONFIG_MTD_PARTITIONS

/* U-Boot general configuration */
#define CONFIG_SYS_PROMPT	"=> "	/* Monitor Command Prompt */
#define CONFIG_SYS_CBSIZE	1024	/* Console I/O Buffer Size  */
/* Print buffer sz */
#define CONFIG_SYS_PBSIZE	(CONFIG_SYS_CBSIZE + \
		sizeof(CONFIG_SYS_PROMPT) + 16)
/* Boot Argument Buffer Size */

/* support OS choose */
#undef CONFIG_BOOTM_NETBSD
#undef CONFIG_BOOTM_RTEMS

/* U-Boot commands */
#include <config_cmd_default.h>
#undef CONFIG_CMD_FPGA
#undef CONFIG_CMD_LOADS
#undef CONFIG_CMD_NET
#undef CONFIG_CMD_NFS
#undef CONFIG_CMD_SETGETDCR




#define xstr(s)	str(s)
#define str(s)	#s




#ifdef CONFIG_CMD_NET


#define CONFIG_CMD_NFS
#endif

//#define CONFIG_USB_ETHER


#include <asm/sizes.h>



//#define LOW_BAT_ADC_LEVEL 782 /*phone battery adc value low than this value will not boot up*/


#define PHYS_OFFSET_ADDR			0x80000000
//#define TD_CP_OFFSET_ADDR			0x8000000	/*128*/
//#define TD_CP_SDRAM_SIZE			0x1200000	/*18M*/
//#define WCDMA_CP_OFFSET_ADDR		0x10000000	/*256M*/
//#define WCDMA_CP_SDRAM_SIZE		0x4000000	/*64M*/

#define SIPC_APCP_RESET_SIZE	0x1000	/*4K*/
//#define SIPC_TD_APCP_START_ADDR		(PHYS_OFFSET_ADDR + TD_CP_OFFSET_ADDR + TD_CP_SDRAM_SIZE - SIPC_APCP_RESET_SIZE)	/*0x897FF000*/
//#define SIPC_WCDMA_APCP_START_ADDR	(PHYS_OFFSET_ADDR + WCDMA_CP_OFFSET_ADDR + WCDMA_CP_SDRAM_SIZE - SIPC_APCP_RESET_SIZE) /*0x93FFF000*/




/* #define CONFIG_SPRD_AUDIO_DEBUG */


/* EFUSE */
#define CONFIG_EFUSE

#endif /* __CONFIG_H */
