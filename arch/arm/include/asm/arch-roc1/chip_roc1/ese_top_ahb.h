/*
 * Copyright (C) 2018 Unigroup Spreadtrum & RDA Technologies Co., Ltd.
 *
 * This file is dual-licensed: you can use it either under the terms
 * of the GPL or the X11 license, at your option. Note that this dual
 * licensing only applies to this file, and not this project as a
 * whole.
 *
 * updated at 2018-12-18 10:54:39
 *
 */


#ifndef ESE_TOP_AHB_H
#define ESE_TOP_AHB_H

#define CTL_BASE_ESE_TOP_AHB 0x50010000


#define REG_ESE_TOP_AHB_SOFT_RST                    ( CTL_BASE_ESE_TOP_AHB + 0x0000 )
#define REG_ESE_TOP_AHB_APB_EB                      ( CTL_BASE_ESE_TOP_AHB + 0x0004 )
#define REG_ESE_TOP_AHB_SYS_SOFT_RST                ( CTL_BASE_ESE_TOP_AHB + 0x0008 )
#define REG_ESE_TOP_AHB_CM4_LOCK_RST_CTL            ( CTL_BASE_ESE_TOP_AHB + 0x000C )
#define REG_ESE_TOP_AHB_CM4_INT_STS0                ( CTL_BASE_ESE_TOP_AHB + 0x0010 )
#define REG_ESE_TOP_AHB_ESE_FDC_CLK_DIV             ( CTL_BASE_ESE_TOP_AHB + 0x0014 )
#define REG_ESE_TOP_AHB_ESE_CM4_CFG_SLEEP           ( CTL_BASE_ESE_TOP_AHB + 0x0018 )
#define REG_ESE_TOP_AHB_ESE_RNG_DATA_UPDATE         ( CTL_BASE_ESE_TOP_AHB + 0x001C )
#define REG_ESE_TOP_AHB_ESE_SYS_AS_CLK_DIV_SEL      ( CTL_BASE_ESE_TOP_AHB + 0x0020 )
#define REG_ESE_TOP_AHB_ESE_SYS_AS_SCAN_NUM         ( CTL_BASE_ESE_TOP_AHB + 0x0024 )
#define REG_ESE_TOP_AHB_SPI_TX_START_CTRL           ( CTL_BASE_ESE_TOP_AHB + 0x0028 )
#define REG_ESE_TOP_AHB_MASTER_CTRL              ( CTL_BASE_ESE_TOP_AHB + 0x002C )
#define REG_ESE_TOP_AHB_APB_MISC_CTL                ( CTL_BASE_ESE_TOP_AHB + 0x0030 )
#define REG_ESE_TOP_AHB_DEBUG_BUSIDLE_STATUS        ( CTL_BASE_ESE_TOP_AHB + 0x0034 )
#define REG_ESE_TOP_AHB_DEBUG_BUS_STATUS            ( CTL_BASE_ESE_TOP_AHB + 0x0038 )
#define REG_ESE_TOP_AHB_CM4_CORE_CFG1               ( CTL_BASE_ESE_TOP_AHB + 0x003C )
#define REG_ESE_TOP_AHB_CM4_CORE_SYSTICK_CFG        ( CTL_BASE_ESE_TOP_AHB + 0x0040 )
#define REG_ESE_TOP_AHB_CM4_CORE_AUXFAULT_CFG       ( CTL_BASE_ESE_TOP_AHB + 0x0044 )
#define REG_ESE_TOP_AHB_CM4_MAIN_STATOUT            ( CTL_BASE_ESE_TOP_AHB + 0x0048 )
#define REG_ESE_TOP_AHB_CM4_FPU_STATUS              ( CTL_BASE_ESE_TOP_AHB + 0x004C )
#define REG_ESE_TOP_AHB_CM4_INT_STAT                ( CTL_BASE_ESE_TOP_AHB + 0x0050 )
#define REG_ESE_TOP_AHB_CM4_WDG_RST_FLAG            ( CTL_BASE_ESE_TOP_AHB + 0x0058 )
#define REG_ESE_TOP_AHB_RNG_SOFT_RST                ( CTL_BASE_ESE_TOP_AHB + 0x005C )
#define REG_ESE_TOP_AHB_ESE_SFC_CTRL_REG            ( CTL_BASE_ESE_TOP_AHB + 0x0060 )
#define REG_ESE_TOP_AHB_ESE_CACHE_CTRL_REG          ( CTL_BASE_ESE_TOP_AHB + 0x0064 )
#define REG_ESE_TOP_AHB_ESE_FLASH_SFI_SEL           ( CTL_BASE_ESE_TOP_AHB + 0x0068 )
#define REG_ESE_TOP_AHB_ESE_PIN_MUX_SEL             ( CTL_BASE_ESE_TOP_AHB + 0x006C )
#define REG_ESE_TOP_AHB_ESE_PAD_SHARE_EN            ( CTL_BASE_ESE_TOP_AHB + 0x0070 )
#define REG_ESE_TOP_AHB_ESE_SWP_TEST_MODE_CTRL      ( CTL_BASE_ESE_TOP_AHB + 0x0074 )
#define REG_ESE_TOP_AHB_ESE_SYS_ATTACK_INT_EN       ( CTL_BASE_ESE_TOP_AHB + 0x0078 )
#define REG_ESE_TOP_AHB_ESE_SYS_ATTACK_INT_RAW      ( CTL_BASE_ESE_TOP_AHB + 0x007C )
#define REG_ESE_TOP_AHB_ESE_SYS_ATTACK_INT_MASK     ( CTL_BASE_ESE_TOP_AHB + 0x0080 )
#define REG_ESE_TOP_AHB_ESE_SYS_ATTACK_INT_CLEAR    ( CTL_BASE_ESE_TOP_AHB + 0x0084 )
#define REG_ESE_TOP_AHB_ESE_SWP_POWERON_INT_EN      ( CTL_BASE_ESE_TOP_AHB + 0x0088 )
#define REG_ESE_TOP_AHB_ESE_SWP_POWERON_INT_RAW     ( CTL_BASE_ESE_TOP_AHB + 0x008C )
#define REG_ESE_TOP_AHB_ESE_SWP_POWERON_INT_MASK    ( CTL_BASE_ESE_TOP_AHB + 0x0090 )
#define REG_ESE_TOP_AHB_ESE_SWP_POWERON_INT_CLEAR   ( CTL_BASE_ESE_TOP_AHB + 0x0094 )
#define REG_ESE_TOP_AHB_ESE_SWP_POWEROFF_INT_EN     ( CTL_BASE_ESE_TOP_AHB + 0x0098 )
#define REG_ESE_TOP_AHB_ESE_SWP_POWEROFF_INT_RAW    ( CTL_BASE_ESE_TOP_AHB + 0x009C )
#define REG_ESE_TOP_AHB_ESE_SWP_POWEROFF_INT_MASK   ( CTL_BASE_ESE_TOP_AHB + 0x00A0 )
#define REG_ESE_TOP_AHB_ESE_SWP_POWEROFF_INT_CLEAR  ( CTL_BASE_ESE_TOP_AHB + 0x00A4 )
#define REG_ESE_TOP_AHB_ESE_SYS_TRNG_DATA_VLD       ( CTL_BASE_ESE_TOP_AHB + 0x00A8 )
#define REG_ESE_TOP_AHB_ESE_SYS_TRNG_DATA           ( CTL_BASE_ESE_TOP_AHB + 0x00AC )
#define REG_ESE_TOP_AHB_ESE_SYS_AS_INT_EN           ( CTL_BASE_ESE_TOP_AHB + 0x00B0 )
#define REG_ESE_TOP_AHB_ESE_SYS_AS_INT_RAW          ( CTL_BASE_ESE_TOP_AHB + 0x00B4 )
#define REG_ESE_TOP_AHB_ESE_SYS_AS_INT_MASK         ( CTL_BASE_ESE_TOP_AHB + 0x00B8 )
#define REG_ESE_TOP_AHB_ESE_SYS_AS_INT_CLEAR        ( CTL_BASE_ESE_TOP_AHB + 0x00BC )
#define REG_ESE_TOP_AHB_ESE_SYS_CLK_RCO_INT_EN      ( CTL_BASE_ESE_TOP_AHB + 0x00C0 )
#define REG_ESE_TOP_AHB_ESE_SYS_CLK_RCO_INT_RAW     ( CTL_BASE_ESE_TOP_AHB + 0x00C4 )
#define REG_ESE_TOP_AHB_ESE_SYS_CLK_RCO_INT_MASK    ( CTL_BASE_ESE_TOP_AHB + 0x00C8 )
#define REG_ESE_TOP_AHB_ESE_SYS_CLK_RCO_INT_CLEAR   ( CTL_BASE_ESE_TOP_AHB + 0x00CC )
#define REG_ESE_TOP_AHB_ESE_SYS_CLK_PLL_INT_EN      ( CTL_BASE_ESE_TOP_AHB + 0x00D0 )
#define REG_ESE_TOP_AHB_ESE_SYS_CLK_PLL_INT_RAW     ( CTL_BASE_ESE_TOP_AHB + 0x00D4 )
#define REG_ESE_TOP_AHB_ESE_SYS_CLK_PLL_INT_MASK    ( CTL_BASE_ESE_TOP_AHB + 0x00D8 )
#define REG_ESE_TOP_AHB_ESE_SYS_CLK_PLL_INT_CLEAR   ( CTL_BASE_ESE_TOP_AHB + 0x00DC )
#define REG_ESE_TOP_AHB_ESE_CM4_ATTACK_INT_EN       ( CTL_BASE_ESE_TOP_AHB + 0x00E0 )
#define REG_ESE_TOP_AHB_ESE_CM4_ATTACK_INT_RAW      ( CTL_BASE_ESE_TOP_AHB + 0x00E4 )
#define REG_ESE_TOP_AHB_ESE_CM4_ATTACK_INT_MASK     ( CTL_BASE_ESE_TOP_AHB + 0x00E8 )
#define REG_ESE_TOP_AHB_ESE_CM4_ATTACK_INT_CLEAR    ( CTL_BASE_ESE_TOP_AHB + 0x00EC )
#define REG_ESE_TOP_AHB_ESE_SYS_SFI_BUSY            ( CTL_BASE_ESE_TOP_AHB + 0x00F0 )
#define REG_ESE_TOP_AHB_ESE_SYS_SWP_S2_TO_PAD       ( CTL_BASE_ESE_TOP_AHB + 0x00F4 )
#define REG_ESE_TOP_AHB_ESE_SYS_UART_TO_PAD         ( CTL_BASE_ESE_TOP_AHB + 0x00F8 )
#define REG_ESE_TOP_AHB_ESE_SYS_MED_MODE            ( CTL_BASE_ESE_TOP_AHB + 0x00FC )
#define REG_ESE_TOP_AHB_ESE_MED_TLB_CLR             ( CTL_BASE_ESE_TOP_AHB + 0x0100 )
#define REG_ESE_TOP_AHB_ESE_MED_SOFT_KEY0           ( CTL_BASE_ESE_TOP_AHB + 0x0104 )
#define REG_ESE_TOP_AHB_ESE_MED_SOFT_KEY1           ( CTL_BASE_ESE_TOP_AHB + 0x0108 )
#define REG_ESE_TOP_AHB_ESE_MED_SOFT_KEY2           ( CTL_BASE_ESE_TOP_AHB + 0x010C )
#define REG_ESE_TOP_AHB_ESE_MED_SOFT_KEY3           ( CTL_BASE_ESE_TOP_AHB + 0x0110 )
#define REG_ESE_TOP_AHB_ESE_MED_SOFT_KEY4           ( CTL_BASE_ESE_TOP_AHB + 0x0114 )
#define REG_ESE_TOP_AHB_ESE_MED_SOFT_KEY5           ( CTL_BASE_ESE_TOP_AHB + 0x0118 )
#define REG_ESE_TOP_AHB_ESE_MED_SOFT_KEY6           ( CTL_BASE_ESE_TOP_AHB + 0x011C )
#define REG_ESE_TOP_AHB_ESE_MED_SOFT_KEY7           ( CTL_BASE_ESE_TOP_AHB + 0x0120 )
#define REG_ESE_TOP_AHB_ESE_MED_DEC_ERROR           ( CTL_BASE_ESE_TOP_AHB + 0x0124 )
#define REG_ESE_TOP_AHB_ESE_MED_DEC_ERROR_ADDR      ( CTL_BASE_ESE_TOP_AHB + 0x0128 )
#define REG_ESE_TOP_AHB_ESE_MED_WRITE_DONE          ( CTL_BASE_ESE_TOP_AHB + 0x012C )
#define REG_ESE_TOP_AHB_ESE_MED_STATUS              ( CTL_BASE_ESE_TOP_AHB + 0x0130 )
#define REG_ESE_TOP_AHB_ESE_MED_AXI_QOS             ( CTL_BASE_ESE_TOP_AHB + 0x0134 )
#define REG_ESE_TOP_AHB_ESE_MED_ADDR_HI             ( CTL_BASE_ESE_TOP_AHB + 0x0138 )
#define REG_ESE_TOP_AHB_ESE_MED_STATUS1             ( CTL_BASE_ESE_TOP_AHB + 0x013C )
#define REG_ESE_TOP_AHB_ESE_MED_STATUS2             ( CTL_BASE_ESE_TOP_AHB + 0x0140 )
#define REG_ESE_TOP_AHB_ESE_MED_STATUS3             ( CTL_BASE_ESE_TOP_AHB + 0x0144 )
#define REG_ESE_TOP_AHB_ESE_MED_SOFT_KEY_UPDATE     ( CTL_BASE_ESE_TOP_AHB + 0x0148 )
#define REG_ESE_TOP_AHB_ESE_MED_DBG_SEL             ( CTL_BASE_ESE_TOP_AHB + 0x014C )
#define REG_ESE_TOP_AHB_ESE_MED_BUS_ERROR           ( CTL_BASE_ESE_TOP_AHB + 0x0150 )
#define REG_ESE_TOP_AHB_ESE_MED_WORK_STATUS         ( CTL_BASE_ESE_TOP_AHB + 0x0154 )
#define REG_ESE_TOP_AHB_ESE_MED_AXI_CACHE           ( CTL_BASE_ESE_TOP_AHB + 0x0158 )

/* REG_ESE_TOP_AHB_SOFT_RST */

#define BIT_ESE_TOP_AHB_ESE_PUF_SOFT_RST                    BIT(24)
#define BIT_ESE_TOP_AHB_ESE_MED_SOFT_RST                    BIT(23)
#define BIT_ESE_TOP_AHB_ESE_CPURF_CP_SOFT_RST               BIT(22)
#define BIT_ESE_TOP_AHB_ESE_CPURF_AP_REE_SOFT_RST           BIT(21)
#define BIT_ESE_TOP_AHB_ESE_CPURF_AP_TEE_SOFT_RST           BIT(20)
#define BIT_ESE_TOP_AHB_ESE_FDC_SOFT_RST                    BIT(19)
#define BIT_ESE_TOP_AHB_ESE_SWP_SOFT_RST                    BIT(18)
#define BIT_ESE_TOP_AHB_ESE_FLASH_CACHE_SOFT_RST            BIT(17)
#define BIT_ESE_TOP_AHB_ESE_SFI_SOFT_RST                    BIT(16)
#define BIT_ESE_TOP_AHB_ESE_I2C_TOP1_SOFT_RST               BIT(15)
#define BIT_ESE_TOP_AHB_ESE_I2C_TOP0_SOFT_RST               BIT(14)
#define BIT_ESE_TOP_AHB_ESE_CPURF_SOFT_RST                  BIT(13)
#define BIT_ESE_TOP_AHB_ESE_TMR_SOFT_RST                    BIT(12)
#define BIT_ESE_TOP_AHB_ESE_EFUSE_SOFT_RST                  BIT(11)
#define BIT_ESE_TOP_AHB_ESE_CE_SOFT_RST                     BIT(10)
#define BIT_ESE_TOP_AHB_ESE_TMR3_SOFT_RST                   BIT(9)
#define BIT_ESE_TOP_AHB_ESE_TMR2_SOFT_RST                   BIT(8)
#define BIT_ESE_TOP_AHB_ESE_TMR1_SOFT_RST                   BIT(7)
#define BIT_ESE_TOP_AHB_ESE_TMR0_SOFT_RST                   BIT(6)
#define BIT_ESE_TOP_AHB_ESE_SFC_SOFT_RST                    BIT(5)
#define BIT_ESE_TOP_AHB_ESE_SPI_SOFT_RST                    BIT(4)
#define BIT_ESE_TOP_AHB_ESE_INTC_SOFT_RST                   BIT(3)
#define BIT_ESE_TOP_AHB_ESE_GPIO_SOFT_RST                   BIT(2)
#define BIT_ESE_TOP_AHB_ESE_WDG_SOFT_RST                    BIT(1)

/* REG_ESE_TOP_AHB_APB_EB */

#define BIT_ESE_TOP_AHB_ESE_UART_EB                         BIT(26)
#define BIT_ESE_TOP_AHB_ESE_MED_EB                          BIT(25)
#define BIT_ESE_TOP_AHB_ESE_PUF_EB                          BIT(24)
#define BIT_ESE_TOP_AHB_ESE_FDC_EB                          BIT(23)
#define BIT_ESE_TOP_AHB_ESE_CLKTOP_EB                       BIT(22)
#define BIT_ESE_TOP_AHB_ESE_TOP_EB                          BIT(21)
#define BIT_ESE_TOP_AHB_ESE_WDG_RTC_EB                      BIT(20)
#define BIT_ESE_TOP_AHB_ESE_ARCH_RTC_EB                     BIT(19)
#define BIT_ESE_TOP_AHB_ESE_SWP_EB                          BIT(18)
#define BIT_ESE_TOP_AHB_ESE_FLASH_CACHE_EB                  BIT(17)
#define BIT_ESE_TOP_AHB_ESE_SFI_EB                          BIT(16)
#define BIT_ESE_TOP_AHB_ESE_I2C_TOP1_EB                     BIT(15)
#define BIT_ESE_TOP_AHB_ESE_I2C_TOP0_EB                     BIT(14)
#define BIT_ESE_TOP_AHB_ESE_CPURF_EB                        BIT(13)
#define BIT_ESE_TOP_AHB_ESE_TMR_EB                          BIT(12)
#define BIT_ESE_TOP_AHB_ESE_EFUSE_EB                        BIT(11)
#define BIT_ESE_TOP_AHB_ESE_CE_EB                           BIT(10)
#define BIT_ESE_TOP_AHB_ESE_TMR3_RTC_EB                     BIT(9)
#define BIT_ESE_TOP_AHB_ESE_TMR2_RTC_EB                     BIT(8)
#define BIT_ESE_TOP_AHB_ESE_TMR1_RTC_EB                     BIT(7)
#define BIT_ESE_TOP_AHB_ESE_TMR0_RTC_EB                     BIT(6)
#define BIT_ESE_TOP_AHB_ESE_SFC_EB                          BIT(5)
#define BIT_ESE_TOP_AHB_ESE_SPI_EB                          BIT(4)
#define BIT_ESE_TOP_AHB_ESE_INTC_EB                         BIT(3)
#define BIT_ESE_TOP_AHB_ESE_GPIO_EB                         BIT(2)
#define BIT_ESE_TOP_AHB_ESE_WDG32_EB                        BIT(1)

/* REG_ESE_TOP_AHB_SYS_SOFT_RST */

#define BIT_ESE_TOP_AHB_CM4_SYS_SOFT_RST                    BIT(1)
#define BIT_ESE_TOP_AHB_CM4_CORE_SOFT_RST                   BIT(0)

/* REG_ESE_TOP_AHB_CM4_LOCK_RST_CTL */

#define BIT_ESE_TOP_AHB_CM4_LOCKUP_RST_EN                   BIT(0)

/* REG_ESE_TOP_AHB_CM4_INT_STS0 */

#define BIT_ESE_TOP_AHB_ARM_FRQ_N                           BIT(1)
#define BIT_ESE_TOP_AHB_ARM_IRQ_N                           BIT(0)

/* REG_ESE_TOP_AHB_ESE_FDC_CLK_DIV */

#define BIT_ESE_TOP_AHB_ESE_FDC_CLK_DIV(x)                  (((x) & 0x7))

/* REG_ESE_TOP_AHB_ESE_CM4_CFG_SLEEP */

#define BIT_ESE_TOP_AHB_ESE_CM4_CFG_CE_SLEEP                BIT(4)
#define BIT_ESE_TOP_AHB_ESE_CM4_CFG_SYS_SLEEP               BIT(0)

/* REG_ESE_TOP_AHB_ESE_RNG_DATA_UPDATE */

#define BIT_ESE_TOP_AHB_ESE_TRNG_DATA_UPDATE                BIT(0)

/* REG_ESE_TOP_AHB_ESE_SYS_AS_CLK_DIV_SEL */

#define BIT_ESE_TOP_AHB_ESE_SYS_AS_SCAN_NUM_CLR             BIT(4)
#define BIT_ESE_TOP_AHB_ESE_SYS_AS_CLK_DIV_SEL(x)           (((x) & 0xF))

/* REG_ESE_TOP_AHB_ESE_SYS_AS_SCAN_NUM */

#define BIT_ESE_TOP_AHB_ESE_SYS_AS_SCAN_NUM(x)              (((x) & 0xFFFFFFF))

/* REG_ESE_TOP_AHB_SPI_TX_START_CTRL */

#define BIT_ESE_TOP_AHB_FMARK_POLARITY_INV                  BIT(0)

/* REG_ESE_TOP_AHB_RF_MASTER_CTRL */

#define BIT_ESE_TOP_AHB_SPI_HREADY_EN                       BIT(7)
#define BIT_ESE_TOP_AHB_SPI_SEL                             BIT(6)
#define BIT_ESE_TOP_AHB_SPI_MODE(x)                         (((x) & 0x3) << 4)
#define BIT_ESE_TOP_AHB_SPI_HBIT_WIDTH(x)                   (((x) & 0xF))

/* REG_ESE_TOP_AHB_APB_MISC_CTL */

#define BIT_ESE_TOP_AHB_ROM_CLK_FORCE_EN                    BIT(4)

/* REG_ESE_TOP_AHB_DEBUG_BUSIDLE_STATUS */

#define BIT_ESE_TOP_AHB_DEBUG_BUSIDLE_STATUS(x)             (((x) & 0xFFFFFFFF))

/* REG_ESE_TOP_AHB_DEBUG_BUS_STATUS */

#define BIT_ESE_TOP_AHB_DEBUG_BUS_STATUS(x)                 (((x) & 0xFFFFFFFF))

/* REG_ESE_TOP_AHB_CM4_CORE_CFG1 */

#define BIT_ESE_TOP_AHB_EXRESPD_STAT                        BIT(11)
#define BIT_ESE_TOP_AHB_SOFT_CM4_DEBUG_EN                   BIT(10)
#define BIT_ESE_TOP_AHB_SOFT_FPUDIS                         BIT(9)
#define BIT_ESE_TOP_AHB_SOFT_MPUDIS                         BIT(8)
#define BIT_ESE_TOP_AHB_SOFT_TSCLK_CHG                      BIT(7)
#define BIT_ESE_TOP_AHB_SOFT_FIX_MSTTYPE                    BIT(6)
#define BIT_ESE_TOP_AHB_SOFT_DBG_RESTART                    BIT(5)
#define BIT_ESE_TOP_AHB_SOFT_EDBGRQ                         BIT(4)
#define BIT_ESE_TOP_AHB_SOFT_SLEEP_HOLD_REQ_N               BIT(3)
#define BIT_ESE_TOP_AHB_SOFT_EXRESPS                        BIT(2)
#define BIT_ESE_TOP_AHB_SOFT_CGBYPASS                       BIT(1)
#define BIT_ESE_TOP_AHB_SOFT_RSTBYPASS                      BIT(0)

/* REG_ESE_TOP_AHB_CM4_CORE_SYSTICK_CFG */

#define BIT_ESE_TOP_AHB_SOFT_STCALIB(x)                     (((x) & 0x3FFFFFF) << 1)
#define BIT_ESE_TOP_AHB_SOFT_STCLK                          BIT(0)

/* REG_ESE_TOP_AHB_CM4_CORE_AUXFAULT_CFG */

#define BIT_ESE_TOP_AHB_SOFT_AUXFAULT(x)                    (((x) & 0xFFFFFFFF))

/* REG_ESE_TOP_AHB_CM4_MAIN_STATOUT */

#define BIT_ESE_TOP_AHB_GATEHCLK_STAT                       BIT(30)
#define BIT_ESE_TOP_AHB_WAKEUP_STAT                         BIT(29)
#define BIT_ESE_TOP_AHB_SLEEPHOLDACKN_STAT                  BIT(28)
#define BIT_ESE_TOP_AHB_SLEEPINGDEEP_STAT                   BIT(27)
#define BIT_ESE_TOP_AHB_SLEEPING_STAT                       BIT(26)
#define BIT_ESE_TOP_AHB_LOCKUP_STAT                         BIT(25)
#define BIT_ESE_TOP_AHB_DBGRESTARTED_STAT                   BIT(24)
#define BIT_ESE_TOP_AHB_HALTED_STAT                         BIT(23)
#define BIT_ESE_TOP_AHB_BRCHSTAT_STAT(x)                    (((x) & 0xF) << 19)
#define BIT_ESE_TOP_AHB_EXREQS_STAT                         BIT(18)
#define BIT_ESE_TOP_AHB_MEMATTRS_STAT(x)                    (((x) & 0x3) << 16)
#define BIT_ESE_TOP_AHB_HMASTLOCKS_STAT                     BIT(15)
#define BIT_ESE_TOP_AHB_HMASTERS_STAT(x)                    (((x) & 0x3) << 13)
#define BIT_ESE_TOP_AHB_HWRITED_STAT                        BIT(12)
#define BIT_ESE_TOP_AHB_EXREQD_STAT                         BIT(11)
#define BIT_ESE_TOP_AHB_MEMATTRD_STAT(x)                    (((x) & 0x3) << 9)
#define BIT_ESE_TOP_AHB_HMASTERD_STAT(x)                    (((x) & 0x3) << 7)
#define BIT_ESE_TOP_AHB_MEMATTRI_STAT(x)                    (((x) & 0x3) << 5)
#define BIT_ESE_TOP_AHB_SWV_STAT                            BIT(4)
#define BIT_ESE_TOP_AHB_WICENACK_STAT                       BIT(1)
#define BIT_ESE_TOP_AHB_CDBGPWRUPREQ_STAT                   BIT(0)

/* REG_ESE_TOP_AHB_CM4_FPU_STATUS */

#define BIT_ESE_TOP_AHB_FPIXC_STAT                          BIT(5)
#define BIT_ESE_TOP_AHB_FPOFC_STAT                          BIT(4)
#define BIT_ESE_TOP_AHB_FPUFC_STAT                          BIT(3)
#define BIT_ESE_TOP_AHB_FPIOC_STAT                          BIT(2)
#define BIT_ESE_TOP_AHB_FPDZC_STAT                          BIT(1)
#define BIT_ESE_TOP_AHB_FPIDC_STAT                          BIT(0)

/* REG_ESE_TOP_AHB_CM4_INT_STAT */

#define BIT_ESE_TOP_AHB_CURRPRI_STAT(x)                     (((x) & 0xFF))

/* REG_ESE_TOP_AHB_CM4_WDG_RST_FLAG */

#define BIT_ESE_TOP_AHB_CM4_WDG_RST_FLAG                    BIT(0)

/* REG_ESE_TOP_AHB_RNG_SOFT_RST */

#define BIT_ESE_TOP_AHB_ESE_SYS_TOP_RNG_SOFT_RST            BIT(0)

/* REG_ESE_TOP_AHB_ESE_SFC_CTRL_REG */

#define BIT_ESE_TOP_AHB_ESE_SFC_PAUSE                       BIT(1)
#define BIT_ESE_TOP_AHB_ESE_SFC_SLEEP_REQ                   BIT(0)

/* REG_ESE_TOP_AHB_ESE_CACHE_CTRL_REG */

#define BIT_ESE_TOP_AHB_ESE_FLASH_CACHE_BASE_ADDR(x)        (((x) & 0xF) << 4)
#define BIT_ESE_TOP_AHB_ESE_FLASH_CACHE_BYPASS              BIT(0)

/* REG_ESE_TOP_AHB_ESE_FLASH_SFI_SEL */

#define BIT_ESE_TOP_AHB_ESE_FLASH_SEL                       BIT(0)

/* REG_ESE_TOP_AHB_ESE_PIN_MUX_SEL */

#define BIT_ESE_TOP_AHB_ESE_I2C_GPIO7_GPIO3_SEL(x)          (((x) & 0x3) << 30)
#define BIT_ESE_TOP_AHB_ESE_I2C_GPIO6_GPIO2_SEL(x)          (((x) & 0x3) << 28)
#define BIT_ESE_TOP_AHB_ESE_I2C_GPIO5_GPIO1_SEL(x)          (((x) & 0x3) << 26)
#define BIT_ESE_TOP_AHB_ESE_I2C_GPIO4_GPIO0_SEL(x)          (((x) & 0x3) << 24)
#define BIT_ESE_TOP_AHB_ESE_SPI_I2C_GPIO3_GPIO7_SEL(x)      (((x) & 0x7) << 21)
#define BIT_ESE_TOP_AHB_ESE_SPI_I2C_GPIO2_GPIO6_SEL(x)      (((x) & 0x7) << 18)
#define BIT_ESE_TOP_AHB_ESE_SPI_I2C_GPIO1_GPIO5_SEL(x)      (((x) & 0x7) << 15)
#define BIT_ESE_TOP_AHB_ESE_SPI_I2C_GPIO0_GPIO4_SEL(x)      (((x) & 0x7) << 12)
#define BIT_ESE_TOP_AHB_ESE_SWP_GPIO0_I2C_GPIO6_SEL(x)      (((x) & 0x7) << 9)
#define BIT_ESE_TOP_AHB_ESE_GPIO1_SPI_I2C_GPIO7_SEL(x)      (((x) & 0x7) << 6)
#define BIT_ESE_TOP_AHB_ESE_SPI_I2C_GPIO2_SEL(x)            (((x) & 0x3) << 4)
#define BIT_ESE_TOP_AHB_ESE_SPI_I2C_GPIO3_SEL(x)            (((x) & 0x3) << 2)
#define BIT_ESE_TOP_AHB_ESE_SPI_I2C_GPIO4_SEL(x)            (((x) & 0x3))

/* REG_ESE_TOP_AHB_ESE_PAD_SHARE_EN */

#define BIT_ESE_TOP_AHB_ESE_GPIO7_SHARE_WITH_AP_EN          BIT(11)
#define BIT_ESE_TOP_AHB_ESE_GPIO6_SHARE_WITH_AP_EN          BIT(10)
#define BIT_ESE_TOP_AHB_ESE_GPIO5_SHARE_WITH_AP_EN          BIT(9)
#define BIT_ESE_TOP_AHB_ESE_GPIO4_SHARE_WITH_AP_EN          BIT(8)
#define BIT_ESE_TOP_AHB_ESE_GPIO3_SHARE_WITH_AP_EN          BIT(7)
#define BIT_ESE_TOP_AHB_ESE_GPIO2_SHARE_WITH_AP_EN          BIT(6)
#define BIT_ESE_TOP_AHB_ESE_GPIO1_SHARE_WITH_AP_EN          BIT(5)
#define BIT_ESE_TOP_AHB_ESE_GPIO0_SHARE_WITH_AP_EN          BIT(4)
#define BIT_ESE_TOP_AHB_ESE_I2C1_SHARE_WITH_AP_EN           BIT(2)
#define BIT_ESE_TOP_AHB_ESE_I2C0_SHARE_WITH_AP_EN           BIT(1)
#define BIT_ESE_TOP_AHB_ESE_SPI_SHARE_WITH_AP_EN            BIT(0)

/* REG_ESE_TOP_AHB_ESE_SWP_TEST_MODE_CTRL */

#define BIT_ESE_TOP_AHB_SWP_BG_RBIAS_MODE                   BIT(6)
#define BIT_ESE_TOP_AHB_SWP_BG_PD                           BIT(5)
#define BIT_ESE_TOP_AHB_SWP_BG_ITRIM(x)                     (((x) & 0xF) << 1)
#define BIT_ESE_TOP_AHB_SWP_BG_TEST_EN                      BIT(0)

/* REG_ESE_TOP_AHB_ESE_SYS_ATTACK_INT_EN */

#define BIT_ESE_TOP_AHB_ESE_SYS_SPI_RAM_INT_EN              BIT(29)
#define BIT_ESE_TOP_AHB_ESE_SYS_CPURF_INT_EN                BIT(28)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_RAM_INT_EN               BIT(27)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_SM4_INT_EN               BIT(26)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_PKA_INT_EN               BIT(25)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_TDES_INT_EN              BIT(24)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_AES_INT_EN               BIT(23)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_HASH_INT_EN              BIT(22)
#define BIT_ESE_TOP_AHB_ESE_SYS_FLASH_CRC_SFC_INT_EN        BIT(21)
#define BIT_ESE_TOP_AHB_ESE_SYS_FLASH_CRC_CACHE_INT_EN      BIT(20)
#define BIT_ESE_TOP_AHB_ESE_SYS_FLASH_PARITY_RAM_INT_EN     BIT(19)
#define BIT_ESE_TOP_AHB_ESE_SYS_AXI_MTS_INT_EN              BIT(18)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_MST0_INT_EN             BIT(17)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_MST1_INT_EN             BIT(16)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_MST2_INT_EN             BIT(15)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_SLV0_INT_EN             BIT(14)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_SLV1_INT_EN             BIT(13)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_SLV2_INT_EN             BIT(12)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_SLV3_INT_EN             BIT(11)
#define BIT_ESE_TOP_AHB_ESE_SYS_IRAM_INT_EN                 BIT(10)
#define BIT_ESE_TOP_AHB_ESE_SYS_IROM_INT_EN                 BIT(9)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC7_INT_EN                 BIT(8)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC6_INT_EN                 BIT(7)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC5_INT_EN                 BIT(6)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC4_INT_EN                 BIT(5)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC3_INT_EN                 BIT(4)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC2_INT_EN                 BIT(3)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC1_INT_EN                 BIT(2)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC0_INT_EN                 BIT(1)
#define BIT_ESE_TOP_AHB_ESE_SYS_EFS_ARB_ISTL_INT_EN         BIT(0)

/* REG_ESE_TOP_AHB_ESE_SYS_ATTACK_INT_RAW */

#define BIT_ESE_TOP_AHB_ESE_SYS_SPI_RAM_INT_RAW             BIT(29)
#define BIT_ESE_TOP_AHB_ESE_SYS_CPURF_INT_RAW               BIT(28)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_RAM_INT_RAW              BIT(27)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_SM4_INT_RAW              BIT(26)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_PKA_INT_RAW              BIT(25)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_TDES_INT_RAW             BIT(24)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_AES_INT_RAW              BIT(23)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_HASH_INT_RAW             BIT(22)
#define BIT_ESE_TOP_AHB_ESE_SYS_FLASH_CRC_SFC_INT_RAW       BIT(21)
#define BIT_ESE_TOP_AHB_ESE_SYS_FLASH_CRC_CACHE_INT_RAW     BIT(20)
#define BIT_ESE_TOP_AHB_ESE_SYS_FLASH_PARITY_RAM_INT_RAW    BIT(19)
#define BIT_ESE_TOP_AHB_ESE_SYS_AXI_MTS_INT_RAW             BIT(18)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_MST0_INT_RAW            BIT(17)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_MST1_INT_RAW            BIT(16)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_MST2_INT_RAW            BIT(15)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_SLV0_INT_RAW            BIT(14)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_SLV1_INT_RAW            BIT(13)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_SLV2_INT_RAW            BIT(12)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_SLV3_INT_RAW            BIT(11)
#define BIT_ESE_TOP_AHB_ESE_SYS_IRAM_INT_RAW                BIT(10)
#define BIT_ESE_TOP_AHB_ESE_SYS_IROM_INT_RAW                BIT(9)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC7_INT_RAW                BIT(8)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC6_INT_RAW                BIT(7)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC5_INT_RAW                BIT(6)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC4_INT_RAW                BIT(5)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC3_INT_RAW                BIT(4)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC2_INT_RAW                BIT(3)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC1_INT_RAW                BIT(2)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC0_INT_RAW                BIT(1)
#define BIT_ESE_TOP_AHB_ESE_SYS_EFS_ARB_ISTL_INT_RAW        BIT(0)

/* REG_ESE_TOP_AHB_ESE_SYS_ATTACK_INT_MASK */

#define BIT_ESE_TOP_AHB_ESE_SYS_SPI_RAM_INT_MASK            BIT(29)
#define BIT_ESE_TOP_AHB_ESE_SYS_CPURF_INT_MASK              BIT(28)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_RAM_INT_MASK             BIT(27)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_SM4_INT_MASK             BIT(26)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_PKA_INT_MASK             BIT(25)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_TDES_INT_MASK            BIT(24)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_AES_INT_MASK             BIT(23)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_HASH_INT_MASK            BIT(22)
#define BIT_ESE_TOP_AHB_ESE_SYS_FLASH_CRC_SFC_INT_MASK      BIT(21)
#define BIT_ESE_TOP_AHB_ESE_SYS_FLASH_CRC_CACHE_INT_MASK    BIT(20)
#define BIT_ESE_TOP_AHB_ESE_SYS_FLASH_PARITY_RAM_INT_MASK   BIT(19)
#define BIT_ESE_TOP_AHB_ESE_SYS_AXI_MTS_INT_MASK            BIT(18)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_MST0_INT_MASK           BIT(17)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_MST1_INT_MASK           BIT(16)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_MST2_INT_MASK           BIT(15)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_SLV0_INT_MASK           BIT(14)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_SLV1_INT_MASK           BIT(13)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_SLV2_INT_MASK           BIT(12)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_SLV3_INT_MASK           BIT(11)
#define BIT_ESE_TOP_AHB_ESE_SYS_IRAM_INT_MASK               BIT(10)
#define BIT_ESE_TOP_AHB_ESE_SYS_IROM_INT_MASK               BIT(9)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC7_INT_MASK               BIT(8)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC6_INT_MASK               BIT(7)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC5_INT_MASK               BIT(6)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC4_INT_MASK               BIT(5)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC3_INT_MASK               BIT(4)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC2_INT_MASK               BIT(3)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC1_INT_MASK               BIT(2)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC0_INT_MASK               BIT(1)
#define BIT_ESE_TOP_AHB_ESE_SYS_EFS_ARB_ISTL_INT_MASK       BIT(0)

/* REG_ESE_TOP_AHB_ESE_SYS_ATTACK_INT_CLEAR */

#define BIT_ESE_TOP_AHB_ESE_SYS_SPI_RAM_INT_CLEAR           BIT(29)
#define BIT_ESE_TOP_AHB_ESE_SYS_CPURF_INT_CLEAR             BIT(28)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_RAM_INT_CLEAR            BIT(27)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_SM4_INT_CLEAR            BIT(26)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_PKA_INT_CLEAR            BIT(25)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_TDES_INT_CLEAR           BIT(24)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_AES_INT_CLEAR            BIT(23)
#define BIT_ESE_TOP_AHB_ESE_SYS_CE_HASH_INT_CLEAR           BIT(22)
#define BIT_ESE_TOP_AHB_ESE_SYS_FLASH_CRC_SFC_INT_CLEAR     BIT(21)
#define BIT_ESE_TOP_AHB_ESE_SYS_FLASH_CRC_CACHE_INT_CLEAR   BIT(20)
#define BIT_ESE_TOP_AHB_ESE_SYS_FLASH_PARITY_RAM_INT_CLEAR  BIT(19)
#define BIT_ESE_TOP_AHB_ESE_SYS_AXI_MTS_INT_CLEAR           BIT(18)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_MST0_INT_CLEAR          BIT(17)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_MST1_INT_CLEAR          BIT(16)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_MST2_INT_CLEAR          BIT(15)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_SLV0_INT_CLEAR          BIT(14)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_SLV1_INT_CLEAR          BIT(13)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_SLV2_INT_CLEAR          BIT(12)
#define BIT_ESE_TOP_AHB_ESE_SYS_AHB_SLV3_INT_CLEAR          BIT(11)
#define BIT_ESE_TOP_AHB_ESE_SYS_IRAM_INT_CLEAR              BIT(10)
#define BIT_ESE_TOP_AHB_ESE_SYS_IROM_INT_CLEAR              BIT(9)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC7_INT_CLEAR              BIT(8)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC6_INT_CLEAR              BIT(7)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC5_INT_CLEAR              BIT(6)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC4_INT_CLEAR              BIT(5)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC3_INT_CLEAR              BIT(4)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC2_INT_CLEAR              BIT(3)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC1_INT_CLEAR              BIT(2)
#define BIT_ESE_TOP_AHB_ESE_SYS_FDC0_INT_CLEAR              BIT(1)
#define BIT_ESE_TOP_AHB_ESE_SYS_EFS_ARB_ISTL_INT_CLEAR      BIT(0)

/* REG_ESE_TOP_AHB_ESE_SWP_POWERON_INT_EN */

#define BIT_ESE_TOP_AHB_ESE_SYS_SWP_POWERON_INT_EN          BIT(0)

/* REG_ESE_TOP_AHB_ESE_SWP_POWERON_INT_RAW */

#define BIT_ESE_TOP_AHB_ESE_SYS_SWP_POWERON_INT_RAW         BIT(0)

/* REG_ESE_TOP_AHB_ESE_SWP_POWERON_INT_MASK */

#define BIT_ESE_TOP_AHB_ESE_SYS_SWP_POWERON_INT_MASK        BIT(0)

/* REG_ESE_TOP_AHB_ESE_SWP_POWERON_INT_CLEAR */

#define BIT_ESE_TOP_AHB_ESE_SYS_SWP_POWERON_INT_CLEAR       BIT(0)

/* REG_ESE_TOP_AHB_ESE_SWP_POWEROFF_INT_EN */

#define BIT_ESE_TOP_AHB_ESE_SYS_SWP_POWEROFF_INT_EN         BIT(0)

/* REG_ESE_TOP_AHB_ESE_SWP_POWEROFF_INT_RAW */

#define BIT_ESE_TOP_AHB_ESE_SYS_SWP_POWEROFF_INT_RAW        BIT(0)

/* REG_ESE_TOP_AHB_ESE_SWP_POWEROFF_INT_MASK */

#define BIT_ESE_TOP_AHB_ESE_SYS_SWP_POWEROFF_INT_MASK       BIT(0)

/* REG_ESE_TOP_AHB_ESE_SWP_POWEROFF_INT_CLEAR */

#define BIT_ESE_TOP_AHB_ESE_SYS_SWP_POWEROFF_INT_CLEAR      BIT(0)

/* REG_ESE_TOP_AHB_ESE_SYS_TRNG_DATA_VLD */

#define BIT_ESE_TOP_AHB_ESE_SYS_TRNG_DATA_VLD               BIT(0)

/* REG_ESE_TOP_AHB_ESE_SYS_TRNG_DATA */

#define BIT_ESE_TOP_AHB_ESE_SYS_TRNG_DATA(x)                (((x) & 0xFFFFFFFF))

/* REG_ESE_TOP_AHB_ESE_SYS_AS_INT_EN */

#define BIT_ESE_TOP_AHB_ESE_SYS_AS_INT_EN(x)                (((x) & 0xFF))

/* REG_ESE_TOP_AHB_ESE_SYS_AS_INT_RAW */

#define BIT_ESE_TOP_AHB_ESE_SYS_AS_INT_RAW(x)               (((x) & 0xFF))

/* REG_ESE_TOP_AHB_ESE_SYS_AS_INT_MASK */

#define BIT_ESE_TOP_AHB_ESE_SYS_AS_INT_MASK(x)              (((x) & 0xFF))

/* REG_ESE_TOP_AHB_ESE_SYS_AS_INT_CLEAR */

#define BIT_ESE_TOP_AHB_ESE_SYS_AS_INT_CLEAR(x)             (((x) & 0xFF))

/* REG_ESE_TOP_AHB_ESE_SYS_CLK_RCO_INT_EN */

#define BIT_ESE_TOP_AHB_ESE_SYS_CLK_RCO_INT_EN              BIT(0)

/* REG_ESE_TOP_AHB_ESE_SYS_CLK_RCO_INT_RAW */

#define BIT_ESE_TOP_AHB_ESE_SYS_CLK_RCO_INT_RAW             BIT(0)

/* REG_ESE_TOP_AHB_ESE_SYS_CLK_RCO_INT_MASK */

#define BIT_ESE_TOP_AHB_ESE_SYS_CLK_RCO_INT_MASK            BIT(0)

/* REG_ESE_TOP_AHB_ESE_SYS_CLK_RCO_INT_CLEAR */

#define BIT_ESE_TOP_AHB_ESE_SYS_CLK_RCO_INT_CLEAR           BIT(0)

/* REG_ESE_TOP_AHB_ESE_SYS_CLK_PLL_INT_EN */

#define BIT_ESE_TOP_AHB_ESE_SYS_CLK_PLL_INT_EN              BIT(0)

/* REG_ESE_TOP_AHB_ESE_SYS_CLK_PLL_INT_RAW */

#define BIT_ESE_TOP_AHB_ESE_SYS_CLK_PLL_INT_RAW             BIT(0)

/* REG_ESE_TOP_AHB_ESE_SYS_CLK_PLL_INT_MASK */

#define BIT_ESE_TOP_AHB_ESE_SYS_CLK_PLL_INT_MASK            BIT(0)

/* REG_ESE_TOP_AHB_ESE_SYS_CLK_PLL_INT_CLEAR */

#define BIT_ESE_TOP_AHB_ESE_SYS_CLK_PLL_INT_CLEAR           BIT(0)

/* REG_ESE_TOP_AHB_ESE_CM4_ATTACK_INT_EN */

#define BIT_ESE_TOP_AHB_ESE_CE_SBOX_INT_EN                  BIT(9)
#define BIT_ESE_TOP_AHB_ESE_CE_SBOX_RNG_INT_EN              BIT(8)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC7_INT_EN                 BIT(7)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC6_INT_EN                 BIT(6)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC5_INT_EN                 BIT(5)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC4_INT_EN                 BIT(4)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC3_INT_EN                 BIT(3)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC2_INT_EN                 BIT(2)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC1_INT_EN                 BIT(1)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC0_INT_EN                 BIT(0)

/* REG_ESE_TOP_AHB_ESE_CM4_ATTACK_INT_RAW */

#define BIT_ESE_TOP_AHB_ESE_CE_SBOX_INT_RAW                 BIT(9)
#define BIT_ESE_TOP_AHB_ESE_CE_SBOX_RNG_INT_RAW             BIT(8)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC7_INT_RAW                BIT(7)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC6_INT_RAW                BIT(6)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC5_INT_RAW                BIT(5)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC4_INT_RAW                BIT(4)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC3_INT_RAW                BIT(3)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC2_INT_RAW                BIT(2)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC1_INT_RAW                BIT(1)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC0_INT_RAW                BIT(0)

/* REG_ESE_TOP_AHB_ESE_CM4_ATTACK_INT_MASK */

#define BIT_ESE_TOP_AHB_ESE_CE_SBOX_INT_MASK                BIT(9)
#define BIT_ESE_TOP_AHB_ESE_CE_SBOX_RNG_INT_MASK            BIT(8)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC7_INT_MASK               BIT(7)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC6_INT_MASK               BIT(6)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC5_INT_MASK               BIT(5)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC4_INT_MASK               BIT(4)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC3_INT_MASK               BIT(3)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC2_INT_MASK               BIT(2)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC1_INT_MASK               BIT(1)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC0_INT_MASK               BIT(0)

/* REG_ESE_TOP_AHB_ESE_CM4_ATTACK_INT_CLEAR */

#define BIT_ESE_TOP_AHB_ESE_CE_SBOX_INT_CLEAR               BIT(9)
#define BIT_ESE_TOP_AHB_ESE_CE_SBOX_RNG_INT_CLEAR           BIT(8)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC7_INT_CLEAR              BIT(7)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC6_INT_CLEAR              BIT(6)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC5_INT_CLEAR              BIT(5)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC4_INT_CLEAR              BIT(4)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC3_INT_CLEAR              BIT(3)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC2_INT_CLEAR              BIT(2)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC1_INT_CLEAR              BIT(1)
#define BIT_ESE_TOP_AHB_ESE_CM4_FDC0_INT_CLEAR              BIT(0)

/* REG_ESE_TOP_AHB_ESE_SYS_SFI_BUSY */

#define BIT_ESE_TOP_AHB_ESE_SYS_SFI_BUSY                    BIT(0)

/* REG_ESE_TOP_AHB_ESE_SYS_SWP_S2_TO_PAD */

#define BIT_ESE_TOP_AHB_ESE_SWP_TO_GPIO_PAD7_SEL            BIT(1)
#define BIT_ESE_TOP_AHB_ESE_SWP_TO_GPIO_PAD6_SEL            BIT(0)

/* REG_ESE_TOP_AHB_ESE_SYS_UART_TO_PAD */

#define BIT_ESE_TOP_AHB_ESE_UART_TO_GPIO_PAD5_SEL           BIT(3)
#define BIT_ESE_TOP_AHB_ESE_UART_TO_GPIO_PAD4_SEL           BIT(2)
#define BIT_ESE_TOP_AHB_ESE_UART_TO_GPIO_PAD3_SEL           BIT(1)
#define BIT_ESE_TOP_AHB_ESE_UART_TO_GPIO_PAD2_SEL           BIT(0)

/* REG_ESE_TOP_AHB_ESE_SYS_MED_MODE */

#define BIT_ESE_TOP_AHB_ESE_MED_KEY_IV_SEL(x)               (((x) & 0x3) << 6)
#define BIT_ESE_TOP_AHB_ESE_SYS_MED_MODE(x)                 (((x) & 0x3) << 4)
#define BIT_ESE_TOP_AHB_ESE_SYS_MED_SEL                     BIT(0)

/* REG_ESE_TOP_AHB_ESE_MED_TLB_CLR */

#define BIT_ESE_TOP_AHB_ESE_MED_AES_CLR                     BIT(4)
#define BIT_ESE_TOP_AHB_ESE_MED_WRITE_RAM_CLR               BIT(1)
#define BIT_ESE_TOP_AHB_ESE_MED_READ_RAM_CLR                BIT(0)

/* REG_ESE_TOP_AHB_ESE_MED_SOFT_KEY0 */

#define BIT_ESE_TOP_AHB_ESE_MED_SOFT_CFG_KEY0(x)            (((x) & 0xFFFFFFFF))

/* REG_ESE_TOP_AHB_ESE_MED_SOFT_KEY1 */

#define BIT_ESE_TOP_AHB_ESE_MED_SOFT_CFG_KEY1(x)            (((x) & 0xFFFFFFFF))

/* REG_ESE_TOP_AHB_ESE_MED_SOFT_KEY2 */

#define BIT_ESE_TOP_AHB_ESE_MED_SOFT_CFG_KEY2(x)            (((x) & 0xFFFFFFFF))

/* REG_ESE_TOP_AHB_ESE_MED_SOFT_KEY3 */

#define BIT_ESE_TOP_AHB_ESE_MED_SOFT_CFG_KEY3(x)            (((x) & 0xFFFFFFFF))

/* REG_ESE_TOP_AHB_ESE_MED_SOFT_KEY4 */

#define BIT_ESE_TOP_AHB_ESE_MED_SOFT_CFG_KEY4(x)            (((x) & 0xFFFFFFFF))

/* REG_ESE_TOP_AHB_ESE_MED_SOFT_KEY5 */

#define BIT_ESE_TOP_AHB_ESE_MED_SOFT_CFG_KEY5(x)            (((x) & 0xFFFFFFFF))

/* REG_ESE_TOP_AHB_ESE_MED_SOFT_KEY6 */

#define BIT_ESE_TOP_AHB_ESE_MED_SOFT_CFG_KEY6(x)            (((x) & 0xFFFFFFFF))

/* REG_ESE_TOP_AHB_ESE_MED_SOFT_KEY7 */

#define BIT_ESE_TOP_AHB_ESE_MED_SOFT_CFG_KEY7(x)            (((x) & 0xFFFFFFFF))

/* REG_ESE_TOP_AHB_ESE_MED_DEC_ERROR */

#define BIT_ESE_TOP_AHB_ESE_MED_DEC_ERROR_INT_RAW           BIT(3)
#define BIT_ESE_TOP_AHB_ESE_MED_DEC_ERROR_INT_MASK          BIT(2)
#define BIT_ESE_TOP_AHB_ESE_MED_DEC_ERROR_INT_CLEAR         BIT(1)
#define BIT_ESE_TOP_AHB_ESE_MED_DEC_ERROR_INT_EN            BIT(0)

/* REG_ESE_TOP_AHB_ESE_MED_DEC_ERROR_ADDR */

#define BIT_ESE_TOP_AHB_ESE_MED_FAIL_TAG_STORE(x)           (((x) & 0xFFFFFFFF))

/* REG_ESE_TOP_AHB_ESE_MED_WRITE_DONE */

#define BIT_ESE_TOP_AHB_ESE_MED_WRITE_DONE_INT_RAW          BIT(3)
#define BIT_ESE_TOP_AHB_ESE_MED_WRITE_DONE_INT_MASK         BIT(2)
#define BIT_ESE_TOP_AHB_ESE_MED_WRITE_DONE_INT_CLEAR        BIT(1)
#define BIT_ESE_TOP_AHB_ESE_MED_WRITE_DONE_INT_EN           BIT(0)

/* REG_ESE_TOP_AHB_ESE_MED_STATUS */

#define BIT_ESE_TOP_AHB_ESE_MED_WORK_BUSY                   BIT(31)
#define BIT_ESE_TOP_AHB_ESE_MED_RREADY                      BIT(30)
#define BIT_ESE_TOP_AHB_ESE_MED_RVALID                      BIT(29)
#define BIT_ESE_TOP_AHB_ESE_MED_ARREADY                     BIT(28)
#define BIT_ESE_TOP_AHB_ESE_MED_ARVALID                     BIT(27)
#define BIT_ESE_TOP_AHB_ESE_MED_WREADY                      BIT(26)
#define BIT_ESE_TOP_AHB_ESE_MED_WVALID                      BIT(25)
#define BIT_ESE_TOP_AHB_ESE_MED_AWREADY                     BIT(24)
#define BIT_ESE_TOP_AHB_ESE_MED_AWVALID                     BIT(23)
#define BIT_ESE_TOP_AHB_ESE_MED_ODATA_READY                 BIT(22)
#define BIT_ESE_TOP_AHB_ESE_MED_MAIN_READY                  BIT(21)
#define BIT_ESE_TOP_AHB_ESE_MED_WDMA_DATA_FULL              BIT(20)
#define BIT_ESE_TOP_AHB_ESE_MED_RDMA_DATA_BUF_NUM(x)        (((x) & 0x1F) << 15)
#define BIT_ESE_TOP_AHB_ESE_MED_AES_WRITE_BLK(x)            (((x) & 0x7) << 12)
#define BIT_ESE_TOP_AHB_ESE_MED_DST_CURRENT_STATE(x)        (((x) & 0xF) << 7)
#define BIT_ESE_TOP_AHB_ESE_MED_SRC_CURRENT_STATE(x)        (((x) & 0xF) << 3)
#define BIT_ESE_TOP_AHB_ESE_MED_GEN_CURRENT_STATE(x)        (((x) & 0x7))

/* REG_ESE_TOP_AHB_ESE_MED_AXI_QOS */

#define BIT_ESE_TOP_AHB_ESE_MED_AXI_WR_QOS(x)               (((x) & 0xF) << 4)
#define BIT_ESE_TOP_AHB_ESE_MED_AXI_RD_QOS(x)               (((x) & 0xF))

/* REG_ESE_TOP_AHB_ESE_MED_ADDR_HI */

#define BIT_ESE_TOP_AHB_ESE_MED_AXI_ADDR_HI(x)              (((x) & 0xF))

/* REG_ESE_TOP_AHB_ESE_MED_STATUS1 */

#define BIT_ESE_TOP_AHB_ESE_MED_CIPHER_DEBUG(x)             (((x) & 0xFFFFFFFF))

/* REG_ESE_TOP_AHB_ESE_MED_STATUS2 */

#define BIT_ESE_TOP_AHB_ESE_MED_CTRL_DEBUG2(x)              (((x) & 0x1FF) << 23)
#define BIT_ESE_TOP_AHB_ESE_MED_FAIL_TAG_STORE1(x)          (((x) & 0x7FFFFF))

/* REG_ESE_TOP_AHB_ESE_MED_STATUS3 */

#define BIT_ESE_TOP_AHB_ESE_MED_CTRL_DEBUG3(x)              (((x) & 0xFFFFFFFF))

/* REG_ESE_TOP_AHB_ESE_MED_SOFT_KEY_UPDATE */

#define BIT_ESE_TOP_AHB_ESE_MED_SOFT_KEY_UPDATE_DONE        BIT(4)
#define BIT_ESE_TOP_AHB_ESE_MED_SOFT_KEY_UPDATE_EN          BIT(0)

/* REG_ESE_TOP_AHB_ESE_MED_DBG_SEL */

#define BIT_ESE_TOP_AHB_ESE_MED_STATUS_SEL(x)               (((x) & 0xF))

/* REG_ESE_TOP_AHB_ESE_MED_BUS_ERROR */

#define BIT_ESE_TOP_AHB_ESE_MED_BUS_ERROR_EN                BIT(0)

/* REG_ESE_TOP_AHB_ESE_MED_WORK_STATUS */

#define BIT_ESE_TOP_AHB_ESE_MED_WR_BUSY                     BIT(2)
#define BIT_ESE_TOP_AHB_ESE_MED_RD_BUSY                     BIT(1)
#define BIT_ESE_TOP_AHB_ESE_MED_BUSY                        BIT(0)

/* REG_ESE_TOP_AHB_ESE_MED_AXI_CACHE */

#define BIT_ESE_TOP_AHB_ESE_MED_AXI_WR_CACHE(x)             (((x) & 0xF) << 4)
#define BIT_ESE_TOP_AHB_ESE_MED_AXI_RD_CACHE(x)             (((x) & 0xF))


#endif /* ESE_TOP_AHB_H */

