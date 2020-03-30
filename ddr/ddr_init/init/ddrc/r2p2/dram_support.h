#include	"ddrc_init.h"

#define BIST_RESERVE_SIZE 0x1000

//PINMUX defined by customer
#define CA_BIT_PATTERN_AC0_31_0			0x00042032
#define BYTE_PATTERN_AC0				0x00c68898
#define CA_BIT_PATTERN_AC1_31_0			0x00908765
#define BYTE_PATTERN_AC1				0x00468898
#define DQ_BIT_IN_PATTERN_DS0_31_0		0x56432108
#define DQ_BIT_OUT_PATTERN_DS0_31_0		0x86764321
#define DQ_BIT_IN_OUT_PATTERN_DS0_35_32	0x00000007
#define DQ_BIT_IN_PATTERN_DS1_31_0		0x51047623
#define DQ_BIT_OUT_PATTERN_DS1_31_0		0x32740165
#define DQ_BIT_IN_OUT_PATTERN_DS1_35_32	0x00000088
#define DQ_BIT_IN_PATTERN_DS2_31_0		0x80164235
#define DQ_BIT_OUT_PATTERN_DS2_31_0		0x84031256
#define DQ_BIT_IN_OUT_PATTERN_DS2_35_32	0x00000077
#define DQ_BIT_IN_PATTERN_DS3_31_0		0x75643810
#define DQ_BIT_OUT_PATTERN_DS3_31_0		0x75643810
#define DQ_BIT_IN_OUT_PATTERN_DS3_35_32	0x00000022

/*
*bit[0]:DDR_DS_CA enable
*bit[1]:DDR_DS_DQ enable
*bit[2]:DDR_ODT_DQ enable
*bit[3]:DDR_VREF_DQ enable
*bit[8]:DRAM_DS_DQ enable
*/
//IO Config defined by customer

/*LP3 DRIVER STRENTH and ODT*/
#define DDRC_CA_DS_LP3			DS_34
#define DDRC_DQ_DS_LP3			DS_40
#define DRAM_DQ_DS_LP3			DS_40
#define DDRC_DQ_ODT_LP3			DS_RFU
#define DRAM_DQ_ODT_LP3			DS_RFU

/*LP4 DRIVER STRENTH and ODT*/
#define DDRC_CA_DS_LP4			DS_34
#define DDRC_DQ_DS_LP4			DS_40
#define DRAM_DQ_DS_LP4			DS_40

#define DDRC_DQ_ODT_LP4			DS_48
#define DRAM_DQ_ODT_LP4			DS_48
#define DRAM_SOC_ODT_LP4		DS_40

#define DRAM_CA_ODT_LP4			0x0 //Need Set for roc1

/*LP4X DRIVER STRENTH and ODT*/
#define DDRC_CA_DS_LP4X			DS_34
#define DDRC_DQ_DS_LP4X			DS_40
#define DRAM_DQ_DS_LP4X			DS_40

#define DDRC_DQ_ODT_LP4X		DS_48	//set in phy_base+0xfc*fn*offset
#define DRAM_DQ_ODT_LP4X		DS_48	//set in MR11 through dtmg11 in fsp dfs
#define DRAM_SOC_ODT_LP4X		DS_48  //should equal to the value of PDDS

#define DRAM_CA_ODT_LP4X	    	0x0	//Close ca odt

#define WR_DBI_EN_LP3			0x0
#define RD_DBI_EN_LP3			0x0

#define WR_DBI_EN_LP4			0x0
#define RD_DBI_EN_LP4			0x0

#define WR_DBI_EN_LP4X			0x0
#define RD_DBI_EN_LP4X			0x0


typedef enum PCB_DRAM_STATUS
{
	DRAM_EMCP=0,
	DRAM_DISCRETE
};

typedef enum PINMUX_TYPE
{
	LPDDR3_PINMUX_CASE0=0x0003,
	LPDDR3_PINMUX_CASE1=0X0103,
	LPDDR4_PINMUX_CASE0=0x0004,
	LPDDR4_PINMUX_CASE1=0x0104,
	DEFINE_PINMUX_CASE=0x0000,
}PINMUX_TYPE_E;


typedef enum DRAM_WIDTH
{
	WIDTH_X32 = 0,
	WIDTH_X16 = 1,
	WIDTH_X8 = 2
}DRAM_WIDTH_E;

typedef enum LPDDR3_MR8_SIZE
{
	LPDDR3_MR8_SIZE_1Gb=0x4,
	LPDDR3_MR8_SIZE_2Gb=0x5,
	LPDDR3_MR8_SIZE_4Gb=0x6,
	LPDDR3_MR8_SIZE_6Gb=0xE,
	LPDDR3_MR8_SIZE_8Gb=0x7,
	LPDDR3_MR8_SIZE_12Gb=0xd,
	LPDDR3_MR8_SIZE_16Gb=0x8,
	LPDDR3_MR8_SIZE_32Gb=0x9,
}LPDDR3_MR8_SIZE_E;

typedef enum LPDDR4_MR8_SIZE
{
	LPDDR4_MR8_SIZE_2Gb=0x0,
	LPDDR4_MR8_SIZE_3Gb=0x1,
	LPDDR4_MR8_SIZE_4Gb=0x2,
	LPDDR4_MR8_SIZE_6Gb=0x3,
	LPDDR4_MR8_SIZE_8Gb=0x4,
	LPDDR4_MR8_SIZE_12Gb=0x5,
	LPDDR4_MR8_SIZE_16Gb=0x6,
}LPDDR4_MR8_SIZE_E;

typedef enum DRAM_MEM_SIZE
{
	MEM_SIZE_4Gb=0x2000,
	MEM_SIZE_6Gb=0x3000,
	MEM_SIZE_8Gb=0x4000,
	MEM_SIZE_12Gb=0x6000,
	MEM_SIZE_16Gb=0x8000,
	MEM_SIZE_24Gb=0xc000,
	MEM_SIZE_32Gb=0x10000,
	MEM_SIZE_48Gb=0x16000,
	MEM_SIZE_64Gb=0x20000,
}DRAM_MEM_SIZE_E;


typedef enum DRAM_DETECT_TYPE
{
	LPDDR3_32G_2CS_16GX32_16GX32=0x30100100,
	LPDDR3_32G_2CS_16GX16_16GX16=0x30101101,
	LPDDR3_32G_2CS_16GX16_16GX32=0x30101100,
	LPDDR3_32G_1CS_32GX16=0x30000200,
	LPDDR3_24G_2CS_16GX32_8GX32=0x30100080,
	LPDDR3_24G_2CS_16GX16_8GX16=0x30101081,
	LPDDR3_24G_2CS_16GX16_8GX32=0x30101080,
	LPDDR3_24G_2CS_12GX32_12GX32=0x300c00c0,
	LPDDR3_24G_2CS_12GX16_12GX16=0x300c10c1,
	LPDDR3_24G_2CS_12GX16_12GX32=0x300c10c0,
	LPDDR3_24G_2CS_8GX32_16GX16=0x30080101,
	LPDDR3_24G_2CS_8GX32_16GX32=0x30080100,
	LPDDR3_24G_2CS_8GX16_16GX32=0x30081100,
	LPDDR3_24G_1CS_24GX32=0x30000180,
	LPDDR3_16G_1CS_16GX32=0x30000100,
	LPDDR3_16G_1CS_16GX16=0x30000101,
	LPDDR3_16G_2CS_8GX32_8GX32=0x30080080,
	LPDDR3_16G_2CS_8GX16_8GX16=0x30081081,
	LPDDR3_12G_1CS_12GX32=0x300000c0,
	LPDDR3_12G_1CS_12GX16=0x300000c1,
	LPDDR3_12G_2CS_8GX16_4GX32=0x30081040,
	LPDDR3_12G_2CS_8GX32_4GX32=0x30080040,
	LPDDR3_12G_2CS_6GX32_6GX32=0x30060060,
	LPDDR3_8G_1CS_8GX32=0x30000080,
	LPDDR3_8G_1CS_8GX16=0x30000081,
	LPDDR3_8G_2CS_4GX32_4GX32=0x30040040,
	LPDDR3_6G_1CS_6GX32=0x30000060,
	LPDDR3_6G_2CS_4GX32_2GX32=0x30040020,
	LPDDR3_4G_1CS_4GX32=0x30000040,
	LPDDR3_4G_1CS_4GX16=0x30000041,
	LPDDR3_4G_2CS_2GX32_2GX32=0x30020020,

	LPDDR4_64G_2CS_32GX8_32GX8=0x40202202,
	LPDDR4_48G_2CS_32GX8_16GX8=0x40202102,
	LPDDR4_48G_2CS_16GX8_32GX8=0x40102202,
	LPDDR4_48G_2CS_32GX8_16GX16=0x40202101,
	LPDDR4_48G_2CS_16GX16_32GX8=0x40101202,
	LPDDR4_48G_2CS_24GX8_24GX8=0x40182182,
	LPDDR4_32G_1CS_32GX32=0x40000201,
	LPDDR4_32G_2CS_16GX16_16GX16=0x40101101,
	LPDDR4_32G_2CS_16GX8_16GX16=0x40102101,
	LPDDR4_24G_2CS_16GX16_8GX16=0x40101081,
	LPDDR4_24G_2CS_16GX8_8GX16=0x40102081,
	LPDDR4_24G_2CS_12GX16_12GX16=0x400c10c1,
	LPDDR4_24G_1CS_24GX16=0x40000181,
	LPDDR4_16G_1CS_16GX16=0x40000101,
	LPDDR4_16G_2CS_8GX16_8GX16=0x40081081,
	LPDDR4_12G_1CS_12GX16=0x400000c1,
	LPDDR4_12G_2CS_8GX16_4GX16=0x40081041,
	LPDDR4_8G_1CS_8GX16=0x40000081,
	LPDDR4_8G_2CS_4GX16_4GX16=0x40041041,
	LPDDR4_4G_1CS_4GX16=0x40000041
}DRAM_DETECT_TYPE_E;


struct MR8_SIZE_INFO
{
	u32 mr8_size;
	u32 mem_size;
};

struct DRAM_TOP_FREQ_SEL
{
	u32 top_ddr_clk;
	u32 fixed_mr_val;
};

#if !defined(DRAM_SIZE_AUTO_DETECT)&&!defined(DRAM_SIZE_FIXED)
#define DRAM_COL_MODE_DEF				2
#define DRAM_CS_POSITION_DEF			6
#define DRAM_CS_MODE_DEF				0


#define DRAM_REMAP_EN					0
#define DRAM_REMAP_ADDR_0				0
#define DRAM_REMAP_ADDR_1				0
#endif

void dram_type_auto_detect();
void dram_size_auto_detect();
void ddrc_phy_pinmux_set();
void dmc_update_param_for_uboot();


