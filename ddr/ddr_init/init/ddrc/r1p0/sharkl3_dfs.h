
#ifndef SHARKL3_DFS_H
#define SHARKL3_DFS_H

#include "sci_types.h"

//macros
#define DFS_CHANEL 2
#define DFS_SEL 8
#define DFS_SEL_CP 4

enum DFS_SOFT_STATUS_E
{
	DFS_SUCCESS=0,
	DFS_CLK_ERROR=1,
	DFS_RUNNING=2,
	DFS_SAME_FREQ=3,
	DFS_FAIL=4
};

//registers
#define REG_CUR_FREQ 0x3000012C

#define REG_DMC_CLK_INIT_CFG	0x30200108
#define REG_ADJS_WB			0x3040000C
#define REG_ADJS_WB_1			0x30400010

#define REG_DFS_STATUS			0x300F0004
#define REG_DFS_SW_CTRL		0x300F0008
#define REG_DFS_PURE_SW_CTRL	0x300F0018
#define REG_DFS_SW_CTRL1		0x300F0030
#define REG_DFS_SW_CTRL2		0x300F0034
#define REG_DFS_SW_CTRL3		0x300F0038

#define REG_DFS_HW_CTRL		0x300F0100
#define REG_DFS_HW_CTRL1		0x300F0104
#define REG_DFS_HW_CTRL2		0x300F0130

#define REG_DFS_HW_RATIO_SET0	0x300F0108
#define REG_DFS_HW_RATIO_SET1	0x300F010C
#define REG_DFS_HW_RATIO_SET2	0x300F0110
#define REG_DFS_HW_RATIO_SET3	0x300F0114
#define REG_DFS_HW_RATIO_SET4	0x300F0118
#define REG_DFS_HW_RATIO_SET5	0x300F011C
#define REG_DFS_HW_RATIO_SET6	0x300F0120
#define REG_DFS_HW_RATIO_SET7	0x300F0124


//structs

enum DRAM_CLASS{
	LPDDR2=0x7,
	LPDDR3=0x7,
	LPDDR4=0xB
};

typedef struct dfs_info
{
	enum DRAM_CLASS ddr_type;		//	//0x7: lpddr3; 0xB:lpddr4.
	uint32 dfs_mode;					//0 sw mode 1 hw mode
}DFS_INFO;

//functions
#endif