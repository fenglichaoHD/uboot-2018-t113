// SPDX-License-Identifier: GPL-2.0+
/*
 *  drivers/dsp/dsp_i.h
 *
 * Copyright (c) 2020 Allwinner.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program;
 */

#ifndef __DSP_REG_H
#define __DSP_REG_H

/* DSP default reset vector address */
#define DSP_DEFAULT_RST_VEC		(0x100000)

/*
 * Register define
 */
#define DSP_ALT_RESET_VEC_REG		(0x0000) /* DSP Reset Control Register */
#define DSP_CTRL_REG			(0x0004) /* DSP Control Register0 */

/*
 * DSP Control Register0
 */
#define BIT_RUN_STALL			(0)
#define BIT_START_VEC_SEL		(1)
#define BIT_DSP_CLKEN			(2)

/*
 * STBY_PRCM related
 */
#define AHBS_CLK_SRC_OFFSET		(24)
#define BIT_AHBS_CLK_SRC_DCXO24M	(0 << AHBS_CLK_SRC_OFFSET)
#define BIT_AHBS_CLK_SRC_RTC_32K	(1 << AHBS_CLK_SRC_OFFSET)
#define BIT_AHBS_CLK_SRC_RC16M		(2 << AHBS_CLK_SRC_OFFSET)
#define BIT_AHBS_CLK_SRC_PERIPLL_DIV	(3 << AHBS_CLK_SRC_OFFSET)
#define BIT_AHBS_CLK_SRC_AUDIO1PLL4X	(4 << AHBS_CLK_SRC_OFFSET)

#define REMAP_CTRL_REG			(0x364)
#define DSP_RAM_REMAP			(0)

/*
 * CCMU related
 */
#define CCMU_DSP_CLK_REG		(0xc70)
#define BIT_DSP_SCLK_GATING		(31)
#define DSP_CLK_M_MASK			(0x1f << 0)
#define DSP_CLK_SRC_MASK		(0x7 << 24)
#define DSP_CLK_SRC_HOSC		(0)
#define DSP_CLK_SRC_32K			(0x1 << 24)
#define DSP_CLK_SRC_16M			(0x2 << 24)
#define DSP_CLK_SRC_PERI2X		(0x3 << 24)
#define DSP_CLK_SRC_AUDIO1_DIV2		(0x4 << 24)
/* x must be 1 - 32 */
#define DSP_CLK_FACTOR_M(x)		(((x) - 1) << 0)

/*
 * MCU_PRCM related
 */
#define DSP_CLK_REG			(0x020)
#define BIT_DSP_GATING			(0x1 << 31)
#define BIT_DSP_SYS_CLK			(0x5 << 24)

#define DSP_CFG_BGR_REG			(0x06c)
#define BIT_DSP_CFG_RST			(0x1 << 16)
#define BIT_DSP_CFG_GATING		(0x1 << 0)

#define DSP_DBG_BGR_REG			(0x100)
#define BIT_DSP_RST			(0x1 << 17)
#define BIT_DBG_RST			(0x1 << 16)

#define RTOS_MAGIC			"freertos"
#define MAGIC_SIZE			8
#define RTOS_VERSION			1
#define PADDING_LEN			(512)

/*the size is 48*/
typedef struct rtos_img_hdr_t {
	unsigned int  jump_instruction;   /* one intruction jumping to real code */
	unsigned char magic[MAGIC_SIZE];  /* ="freertos"*/
	unsigned int  check_sum;          /* generated by PC */
	unsigned int  image_size;        /* the size of image*/
	unsigned int  header_size;       /* the size of header */
	unsigned int  rtos_version;		 /* rtos version */
	unsigned int  dram_size;		  /* dram size in K*/
	unsigned int  rtos_run_addr;	/*rtos load addr*/
	unsigned int  dtb_addr;			/*dtb load addr*/
	unsigned int  dtb_size;			/*the size of dtb*/
	unsigned char reserved[4];
} rtos_img_hdr;


struct dram_para_32 {
	/* normal configuration */
	unsigned int dram_clk;
	unsigned int dram_type;
	unsigned int dram_zq;
	unsigned int dram_odt_en;

	/* control configuration */
	unsigned int dram_para1;
	unsigned int dram_para2;

	/* timing configuration */
	unsigned int dram_mr0;
	unsigned int dram_mr1;
	unsigned int dram_mr2;
	unsigned int dram_mr3;
	unsigned int dram_tpr0;
	unsigned int dram_tpr1;
	unsigned int dram_tpr2;
	unsigned int dram_tpr3;
	unsigned int dram_tpr4;
	unsigned int dram_tpr5;
	unsigned int dram_tpr6;
	unsigned int dram_tpr7;
	unsigned int dram_tpr8;
	unsigned int dram_tpr9;
	unsigned int dram_tpr10;
	unsigned int dram_tpr11;
	unsigned int dram_tpr12;
	unsigned int dram_tpr13;
	unsigned int dram_tpr14;
	unsigned int dram_tpr15;
	unsigned int dram_tpr16;
	unsigned int dram_tpr17;
	unsigned int dram_tpr18;
	unsigned int dram_tpr19;
	unsigned int dram_tpr20;
	unsigned int dram_tpr21;
};

#define HIFI_DAUDIO_NUM (2)
/* size ~ 8B + 4B*3 + 1B*8 + 4B*7= 56 Bytes */
struct codec_param {
	unsigned char mic_gain[8];
	unsigned int pa_gpio[3];

	unsigned char used;
	unsigned char playback_cma;
	unsigned char capture_cma;
	unsigned char spk_vol;
	unsigned char pa_msleep_time;
	unsigned char mic_num;
	unsigned char rx_sync_en;
	unsigned char adcdrc_cfg:2;
	unsigned char dacdrc_cfg:2;
	unsigned char adchpf_cfg:2;
	unsigned char dachpf_cfg:2;

	unsigned int reserved[7];
};

/* should be setup at cpudai driver. */
/* size ~ 4B*(1+1+2+4) + 1B*5 + 4B*6 = 61 Bytes = 64 Bytes */
struct daudio_param {
	unsigned int pcm_lrck_period;

	unsigned int daudio_master:4;
	unsigned int audio_format:4;

	unsigned int tx_data_mode:2;
	unsigned int rx_data_mode:2;
	unsigned int msb_lsb_first:1;
	unsigned int tdm_config:1;
	unsigned int frame_type:1;
	unsigned int daudio_type:1;

	unsigned int signal_inversion:3;
	unsigned int tdm_num:3;
	unsigned int sign_extend:1;
	unsigned int used:1;

	unsigned int mclk_div:8;

	unsigned int tx_chmap[2];
	unsigned int rx_chmap[4];

	unsigned char slot_width_select;
	unsigned char playback_cma;
	unsigned char capture_cma;
	unsigned char tx_num;
	unsigned char rx_num;

	unsigned int rx_sync_en;
	unsigned int reserved[5];
};

/* size ~ 3Bytes + 4Bytes*6 = 27 Bytes = 28 Bytes */
struct dmic_param {
	unsigned char used;
	unsigned char capture_cma;
	unsigned char data_vol;

	unsigned int rx_sync_en;
	unsigned int rx_chmap;
	unsigned int reserved[4];
};

/* size = 4Bytes * 8 = 32 Bytes */
struct mad_param {
	unsigned int lpsd_th;
	unsigned int lpsd_rrun;
	unsigned int lpsd_rstop;
	unsigned int lpsd_ecnt;
	unsigned int reserved[4];
};

/* size ~ 56Bytes + 64Bytes*2 + 28Bytes + 32Bytes = 244 Bytes */
struct audio_param {
	struct codec_param codec_param;
	struct daudio_param daudio_param[HIFI_DAUDIO_NUM];
	struct dmic_param dmic_param;
	struct mad_param mad_param;
};

/* size ~ 16 Bytes*/
struct power_param {
	unsigned int vdd_cpu;
	unsigned int vdd_sys;
	unsigned int vcc_pll;

	unsigned int reserved[1];
};

/* size ~ 16 Bytes*/
struct clk_param {
	unsigned int osc24m_on:1;
	unsigned int pllcpu_off:1;
	unsigned int pllperiph0_off:1;
	unsigned int pllaudio0_off:1;
	unsigned int pllaudio1_off:1;

	unsigned int ahb1ahb2_to_32k:1;
	unsigned int apb1_to_32k:1;
	unsigned int apb2_to_32k:1;
	unsigned int axi_to_32k:1;
	unsigned int apbs0_to_32k:1;
	unsigned int apbs1_to_32k:1;

	unsigned int reserved[3];
};

/* size ~ 16 Bytes*/
struct func_param {
	unsigned int  uart_off:1;

	unsigned int reserved[3];
};

/* size ~ 16*4 = 64 Bytes */
struct standby_param {
	/* 16 Bytes*/
	struct power_param power_param;
	/* 16 Bytes*/
	struct clk_param  clk_param;
	/* 16 Bytes*/
	struct func_param func_param;
	/* 16 Bytes*/
	unsigned int nmi_wakeup:1;
	unsigned int flag_isupdate:1;
	unsigned int sleep_freq;

	unsigned int reserved[2];

};

typedef struct box_start_os_cfg {
	unsigned int used;
	unsigned int start_type;
	unsigned int irkey_used;
	unsigned int pmukey_used;
	unsigned int pmukey_num;
	unsigned int led_power;
	unsigned int led_state;
} box_start_os_cfg_t;

struct rtos_img_params_t {

	/* 32 * 4 = 128 byte */
	struct dram_para_32 dram_para;
	/* size ~ 56Bytes + 64Bytes*2 + 28Bytes = 212 Bytes */
	struct audio_param audio_param;
	struct standby_param standby_param;
	/* unsigned int message_pool_phys; */
	/* unsigned int message_pool_size; */
	/* unsigned int standby_base; */
	/* unsigned int standby_size; */
	/* unsigned int suart_status; */
	/* unsigned int pmu_bat_shutdown_ltf; */
	/* unsigned int pmu_bat_shutdown_htf; */
	/* unsigned int pmu_pwroff_vol; */
	/* unsigned int power_mode; */
	/* unsigned int power_start; */
	/* unsigned int powchk_used; */
	/* unsigned int power_reg; */
	/* unsigned int system_power; */
	/* 7 * 4 = 28 byte */
	struct box_start_os_cfg start_os;
	/* struct ir_key ir_key; */
	/* unsigned int reserved[256]; */
};

struct spare_rtos_head_t {
	struct rtos_img_hdr_t	rtos_img_hdr;
	struct rtos_img_params_t	rtos_img_params;
	unsigned char padding[PADDING_LEN - sizeof(struct rtos_img_hdr_t) -
			      sizeof(struct rtos_img_params_t)];
	unsigned char cert_magic[MAGIC_SIZE];
	unsigned int cert_size;
	/* NOTICE: the 1k - 128 byete start version string */
};


#endif /* __DSP_REG_H */
