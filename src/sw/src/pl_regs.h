
//base address of AXI-DMA Core for ADC Data
#define AXIDMA_ADCBASEADDR  0xA0010000
//base address of AXI-DMA Core for ADC Data
#define AXIDMA_TBTBASEADDR  0xA0020000
//base address of AXI-DMA Core for ADC Data
#define AXIDMA_FABASEADDR  0xA0030000


//base addresses of DMA destination
#define ADC_DMA_DATA 0x10000000
#define TBT_DMA_DATA 0x20000000
#define FA_DMA_DATA  0x30000000


//AXI DMA CORE REGISTERS
#define S2MM_DMACR 0x30 //12
#define S2MM_DMASR 0x34 //13
#define S2MM_DA 0x48 //18
#define S2MM_LEN 0x58 //22


//PL AXI4 Bus Registers

#define MOD_ID_NUM 0x0
#define MOD_ID_VER 0x4
#define PROJ_ID_NUM 0x10
#define PROJ_ID_VER 0x14
#define GIT_SHASUM 0x18
#define COMPILE_TIMESTAMP 0x1C

#define ADC_IDLYWVAL_REG 0x20
#define ADC_IDLYSTR_REG 0x24
#define ADC_IDLYCHARVAL_REG 0x28
#define ADC_IDLYCHBRVAL_REG 0x2C
#define ADC_IDLYCHCRVAL_REG 0x30
#define ADC_IDLYCHDRVAL_REG 0x34
#define ADC_FCOMMCM_REG 0x38

#define PLL_LOCKED_REG 0x3C
#define AD9510_REG 0x40
#define RF_DSA_REG 0x44
#define ADC_SPI_REG 0x48

#define ADC_RAWCHA_REG 0x50
#define ADC_RAWCHB_REG 0x54
#define ADC_RAWCHC_REG 0x58
#define ADC_RAWCHD_REG 0x5C

#define THERM_SPI_REG 0x60
#define THERM_SEL_REG 0x64

#define KX_REG 0x90
#define KY_REG 0x94
#define CHA_GAIN_REG 0x98
#define CHB_GAIN_REG 0x9C
#define CHC_GAIN_REG 0xA0
#define CHD_GAIN_REG 0xA4
#define BBA_XOFF_REG 0xA8
#define BBA_YOFF_REG 0xAC
#define TBT_GATEDLY_REG 0xB0
#define TBT_GATEWID_REG 0xB4

#define CLK_TRIG_SRC 0xB8
#define EVR_RST_REG 0xBC

#define SA_TRIGNUM_REG 0xC0
#define SA_CHA_REG 0xC4
#define SA_CHB_REG 0xC8
#define SA_CHC_REG 0xCC
#define SA_CHD_REG 0xD0
#define SA_XPOS_REG 0xD4
#define SA_YPOS_REG 0xD8
#define SA_SUM_REG 0xDC

#define DMA_SOFTTRIG_REG 0x100
#define DMA_FIFORST_REG 0x104
#define DMA_ADCENABLE_REG 0x108
#define DMA_ADCBURSTLEN_REG 0x10C
#define DMA_TBTENABLE_REG 0x110
#define DMA_TBTBURSTLEN_REG 0x114
#define DMA_FAENABLE_REG 0x118
#define DMA_FABURSTLEN_REG 0x11C
#define DMA_TESTDATENEN_REG 0x120
#define DMA_TRIGSRC_REG 0x124
#define DMA_TRIGCNT_REG 0x128
#define DMA_STATUS_REG 0x12C

#define FP_LEDS_REG 0x140

#define EVR_TS_NS_REG 0x150
#define EVR_TS_S_REG 0x154
#define EVR_TS_NS_LAT_REG 0x158
#define EVR_TS_S_LAT_REG 0x15C
#define EVR_DMA_TRIGNUM_REG 0x160
#define COARSE_TRIG_DLY_REG 0x164
#define EVENT_SRC_SEL_REG 0x168

#define ADCFIFO_STREAMENB_REG 0x200
#define ADCFIFO_RST_REG 0x204
#define ADCFIFO_DATA_REG 0x208
#define ADCFIFO_CNT_REG 0x20C

#define TBTFIFO_STREAMENB_REG 0x210
#define TBTFIFO_RST_REG 0x214
#define TBTFIFO_DATA_REG 0x218
#define TBTFIFO_CNT_REG 0x21C





//Yet to be added
#define ADC_FIFOWREN_REG 8
#define TRIGTOBEAM_DLY_REG 72
#define TRIGTOBEAM_THRESH_REG 73
#define FINE_TRIG_DLY_REG 78








