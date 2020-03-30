/*
 * Copyright (C) 2019 Unigroup Spreadtrum & RDA Technologies Co., Ltd.
 *
 * This file is dual-licensed: you can use it either under the terms
 * of the GPL or the X11 license, at your option. Note that this dual
 * licensing only applies to this file, and not this project as a
 * whole.
 *
 * updated at 2019-01-07 15:09:47
 *
 */


#ifndef AON_SEC_APB_H
#define AON_SEC_APB_H

#define CTL_BASE_AON_SEC_APB 0x32050000


#define REG_AON_SEC_APB_SEC_EB                    ( CTL_BASE_AON_SEC_APB + 0x0000 )
#define REG_AON_SEC_APB_SEC_SOFT_RST              ( CTL_BASE_AON_SEC_APB + 0x0004 )
#define REG_AON_SEC_APB_FUNCDMA_NORMAL_EB         ( CTL_BASE_AON_SEC_APB + 0x0008 )
#define REG_AON_SEC_APB_CA53_CFG_CTRL             ( CTL_BASE_AON_SEC_APB + 0x000C )
#define REG_AON_SEC_APB_SECURE_EFUSE_BOUNDRY      ( CTL_BASE_AON_SEC_APB + 0x0010 )
#define REG_AON_SEC_APB_DMA_SEC_EB                ( CTL_BASE_AON_SEC_APB + 0x0014 )
#define REG_AON_SEC_APB_EFUSE_SEC_EB              ( CTL_BASE_AON_SEC_APB + 0x0018 )

/* REG_AON_SEC_APB_SEC_EB */

#define BIT_AON_SEC_APB_SEC_EIC_RTCDV5_EB     BIT(10)
#define BIT_AON_SEC_APB_SEC_EIC_RTC_EB        BIT(9)
#define BIT_AON_SEC_APB_SEC_EIC_EB            BIT(8)
#define BIT_AON_SEC_APB_SEC_GPIO_EB           BIT(7)
#define BIT_AON_SEC_APB_SEC_RTC_CLK_GATE_EB   BIT(6)
#define BIT_AON_SEC_APB_SEC_WDG_EB            BIT(5)
#define BIT_AON_SEC_APB_SEC_WDG_RTC_EB        BIT(4)
#define BIT_AON_SEC_APB_SEC_RTC_EB            BIT(3)
#define BIT_AON_SEC_APB_SEC_TMR_EB            BIT(2)
#define BIT_AON_SEC_APB_SEC_TMR_RTC_EB        BIT(1)
#define BIT_AON_SEC_APB_SEC_TZPC_EB           BIT(0)

/* REG_AON_SEC_APB_SEC_SOFT_RST */

#define BIT_AON_SEC_APB_SEC_EIC_SOFT_RST      BIT(5)
#define BIT_AON_SEC_APB_SEC_GPIO_RST          BIT(4)
#define BIT_AON_SEC_APB_SEC_WDG_SOFT_RST      BIT(3)
#define BIT_AON_SEC_APB_SEC_RTC_SOFT_RST      BIT(2)
#define BIT_AON_SEC_APB_SEC_TMR_SOFT_RST      BIT(1)
#define BIT_AON_SEC_APB_SEC_TZPC_SOFT_RST     BIT(0)

/* REG_AON_SEC_APB_FUNCDMA_NORMAL_EB */

#define BIT_AON_SEC_APB_FUNCDMA_NORMAL_EB     BIT(0)

/* REG_AON_SEC_APB_CA53_CFG_CTRL */

#define BIT_AON_SEC_APB_CA53_GIC_CFGSDISABLE  BIT(8)
#define BIT_AON_SEC_APB_CP15SDISABLE(x)       (((x) & 0xF))

/* REG_AON_SEC_APB_SECURE_EFUSE_BOUNDRY */

#define BIT_AON_SEC_APB_SEC_EFUSE_BOUNDRY(x)  (((x) & 0xFF))

/* REG_AON_SEC_APB_DMA_SEC_EB */

#define BIT_AON_SEC_APB_AON_DMA_SEC_EB        BIT(0)

/* REG_AON_SEC_APB_EFUSE_SEC_EB */

#define BIT_AON_SEC_APB_EFUSE_SEC_EB          BIT(0)


#endif /* AON_SEC_APB_H */


