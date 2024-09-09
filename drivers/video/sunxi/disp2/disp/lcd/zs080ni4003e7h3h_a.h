/* drivers/video/sunxi/disp2/disp/lcd/zs080ni4003e7h3h_a.h
 *
 * Copyright (c) 2017 Allwinnertech Co., Ltd.
 * Author: anruliu <anruliu@allwinnertech.com>
 *
 * zs080ni4003e7h3h_a panel driver
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef _ZS080NI4003E7H3H_A_H
#define _ZS080NI4003E7H3H_A_H

#include "panels.h"

extern __lcd_panel_t zs080ni4003e7h3h_a_panel;

extern s32 bsp_disp_get_panel_info(u32 screen_id, disp_panel_para *info);

#define REGFLAG_DELAY 0XFE
#define REGFLAG_END_OF_TABLE 0xFF /* END OF REGISTERS MARKER */

struct LCM_setting_table {
	u8 cmd;
	u32 count;
	u8 para_list[64];
};

static struct LCM_setting_table lcm_zs080ni4003e7h3h_a_setting[] = {
	{0xFF, 3, {0x98, 0x81, 0x03} },
	{0x01, 1, {0x00} },
	{0x02, 1, {0x00} },
	{0x03, 1, {0x53} },
	{0x04, 1, {0x53} },
	{0x05, 1, {0x13} },
	{0x06, 1, {0x04} },
	{0x07, 1, {0x02} },
	{0x08, 1, {0x02} },
	{0x09, 1, {0x00} },
	{0x0a, 1, {0x00} },
	{0x0b, 1, {0x00} },
	{0x0c, 1, {0x00} },
	{0x0d, 1, {0x00} },
	{0x0e, 1, {0x00} },
	{0x0f, 1, {0x00} },
	{0x10, 1, {0x00} },
	{0x11, 1, {0x00} },
	{0x12, 1, {0x00} },
	{0x13, 1, {0x00} },
	{0x14, 1, {0x00} },
	{0x15, 1, {0x00} },
	{0x16, 1, {0x00} },
	{0x17, 1, {0x00} },
	{0x18, 1, {0x00} },
	{0x19, 1, {0x00} },
	{0x1a, 1, {0x00} },
	{0x1b, 1, {0x00} },
	{0x1c, 1, {0x00} },
	{0x1d, 1, {0x00} },
	{0x1e, 1, {0xc0} },
	{0x1f, 1, {0x80} },
	{0x20, 1, {0x02} },
	{0x21, 1, {0x09} },
	{0x22, 1, {0x00} },
	{0x23, 1, {0x00} },
	{0x24, 1, {0x00} },
	{0x25, 1, {0x00} },
	{0x26, 1, {0x00} },
	{0x27, 1, {0x00} },
	{0x28, 1, {0x55} },
	{0x29, 1, {0x03} },
	{0x2a, 1, {0x00} },
	{0x2b, 1, {0x00} },
	{0x2c, 1, {0x00} },
	{0x2d, 1, {0x00} },
	{0x2e, 1, {0x00} },
	{0x2f, 1, {0x00} },
	{0x30, 1, {0x00} },
	{0x31, 1, {0x00} },
	{0x32, 1, {0x00} },
	{0x33, 1, {0x00} },
	{0x34, 1, {0x00} },
	{0x35, 1, {0x00} },
	{0x36, 1, {0x00} },
	{0x37, 1, {0x00} },
	{0x38, 1, {0x3C} },
	{0x39, 1, {0x00} },
	{0x3a, 1, {0x00} },
	{0x3b, 1, {0x00} },
	{0x3c, 1, {0x00} },
	{0x3d, 1, {0x00} },
	{0x3e, 1, {0x00} },
	{0x3f, 1, {0x00} },
	{0x40, 1, {0x00} },
	{0x41, 1, {0x00} },
	{0x42, 1, {0x00} },
	{0x43, 1, {0x00} },
	{0x44, 1, {0x00} },
	{0x50, 1, {0x01} },
	{0x51, 1, {0x23} },
	{0x52, 1, {0x45} },
	{0x53, 1, {0x67} },
	{0x54, 1, {0x89} },
	{0x55, 1, {0xab} },
	{0x56, 1, {0x01} },
	{0x57, 1, {0x23} },
	{0x58, 1, {0x45} },
	{0x59, 1, {0x67} },
	{0x5a, 1, {0x89} },
	{0x5b, 1, {0xab} },
	{0x5c, 1, {0xcd} },
	{0x5d, 1, {0xef} },
	{0x5e, 1, {0x01} },
	{0x5f, 1, {0x08} },
	{0x60, 1, {0x02} },
	{0x61, 1, {0x02} },
	{0x62, 1, {0x0A} },
	{0x63, 1, {0x15} },
	{0x64, 1, {0x14} },
	{0x65, 1, {0x02} },
	{0x66, 1, {0x11} },
	{0x67, 1, {0x10} },
	{0x68, 1, {0x02} },
	{0x69, 1, {0x0F} },
	{0x6a, 1, {0x0E} },
	{0x6b, 1, {0x02} },
	{0x6c, 1, {0x0D} },
	{0x6d, 1, {0x0C} },
	{0x6e, 1, {0x06} },
	{0x6f, 1, {0x02} },
	{0x70, 1, {0x02} },
	{0x71, 1, {0x02} },
	{0x72, 1, {0x02} },
	{0x73, 1, {0x02} },
	{0x74, 1, {0x02} },
	{0x75, 1, {0x06} },
	{0x76, 1, {0x02} },
	{0x77, 1, {0x02} },
	{0x78, 1, {0x0A} },
	{0x79, 1, {0x15} },
	{0x7a, 1, {0x14} },
	{0x7b, 1, {0x02} },
	{0x7c, 1, {0x10} },
	{0x7d, 1, {0x11} },
	{0x7e, 1, {0x02} },
	{0x7f, 1, {0x0C} },
	{0x80, 1, {0x0D} },
	{0x81, 1, {0x02} },
	{0x82, 1, {0x0E} },
	{0x83, 1, {0x0F} },
	{0x84, 1, {0x08} },
	{0x85, 1, {0x02} },
	{0x86, 1, {0x02} },
	{0x87, 1, {0x02} },
	{0x88, 1, {0x02} },
	{0x89, 1, {0x02} },
	{0x8A, 1, {0x02} },
	{0xFF, 3, {0x98, 0x81, 0x04} },
	{0x6C, 1, {0x15} },
	{0x6E, 1, {0x30} },
	{0x6F, 1, {0x37} },
	{0x8D, 1, {0x1F} },
	{0x87, 1, {0xBA} },
	{0x26, 1, {0x76} },
	{0xB2, 1, {0xD1} },
	{0xB5, 1, {0x07} },
	{0x35, 1, {0x17} },
	{0x33, 1, {0x14} },
	{0x31, 1, {0x75} },
	{0x3A, 1, {0x85} },
	{0x3B, 1, {0x98} },
	{0x38, 1, {0x01} },
	{0x39, 1, {0x00} },
	{0x7A, 1, {0x10} },
	{0xB5, 1, {0x07} },
	{0x31, 1, {0x75} },
	{0xFF, 3, {0x98, 0x81, 0x01} },
	//{0x2F, 1, {0x01} },
	{0x22, 1, {0x0A} },
	{0x31, 1, {0x00} },
	{0x40, 1, {0x53} },
	{0x50, 1, {0xE9} },
	{0x51, 1, {0xE4} },
	//{0x56, 1, {0x00} },
	{0x53, 1, {0x41} },
	{0x55, 1, {0x48} },
	{0x60, 1, {0x28} },
	{0x2E, 1, {0xC8} },
	{0x34, 1, {0x01} },
	{0xA0, 1, {0x00} },
	{0xA1, 1, {0x17} },
	{0xA2, 1, {0x26} },
	{0xA3, 1, {0x15} },
	{0xA4, 1, {0x19} },
	{0xA5, 1, {0x2E} },
	{0xA6, 1, {0x22} },
	{0xA7, 1, {0x23} },
	{0xA8, 1, {0x89} },
	{0xA9, 1, {0x1B} },
	{0xAA, 1, {0x27} },
	{0xAB, 1, {0x70} },
	{0xAC, 1, {0x1C} },
	{0xAD, 1, {0x1D} },
	{0xAE, 1, {0x52} },
	{0xAF, 1, {0x27} },
	{0xB0, 1, {0x2B} },
	{0xB1, 1, {0x4F} },
	{0xB2, 1, {0x5B} },
	{0xB3, 1, {0x1C} },
	{0xC0, 1, {0x00} },
	{0xC1, 1, {0x17} },
	{0xC2, 1, {0x26} },
	{0xC3, 1, {0x15} },
	{0xC4, 1, {0x19} },
	{0xC5, 1, {0x2E} },
	{0xC6, 1, {0x22} },
	{0xC7, 1, {0x23} },
	{0xC8, 1, {0x89} },
	{0xC9, 1, {0x1B} },
	{0xCA, 1, {0x27} },
	{0xCB, 1, {0x70} },
	{0xCC, 1, {0x1C} },
	{0xCD, 1, {0x1D} },
	{0xCE, 1, {0x52} },
	{0xCF, 1, {0x27} },
	{0xD0, 1, {0x2B} },
	{0xD1, 1, {0x4F} },
	{0xD2, 1, {0x5B} },
	{0xD3, 1, {0x33} },
	{0xFF, 3, {0x98, 0x81, 0x02} },
	{0x04, 1, {0x17} },
	{0x05, 1, {0x12} },
	{0x06, 1, {0x40} },
	{0x07, 1, {0x0B} },
	{0xFF, 3, {0x98, 0x81, 0x00} },
	{0x35, 1, {0x00} },
	{0x11, 1, {} },
	{REGFLAG_DELAY, REGFLAG_DELAY, {120} },
	{0x29, 1, {} },
	{REGFLAG_DELAY, REGFLAG_DELAY, {20} },
	{REGFLAG_END_OF_TABLE, REGFLAG_END_OF_TABLE, {0x00} }
};

static struct LCM_setting_table lcm_lwmx08002922_setting[] = {
	{0xFF, 3, {0x98, 0x81, 0x03} },
	{0x01, 1, {0x00} },
	{0x02, 1, {0x00} },
	{0x03, 1, {0x73} },
	{0x04, 1, {0xD7} },
	{0x05, 1, {0x00} },
	{0x06, 1, {0x08} },
	{0x07, 1, {0x11} },
	{0x08, 1, {0x00} },
	{0x09, 1, {0x3F} },
	{0x0a, 1, {0x00} },
	{0x0b, 1, {0x00} },
	{0x0c, 1, {0x00} },
	{0x0d, 1, {0x00} },
	{0x0e, 1, {0x00} },
	{0x0f, 1, {0x3F} },
	{0x10, 1, {0x3F} },
	{0x11, 1, {0x00} },
	{0x12, 1, {0x00} },
	{0x13, 1, {0x00} },
	{0x14, 1, {0x00} },
	{0x15, 1, {0x00} },
	{0x16, 1, {0x00} },
	{0x17, 1, {0x00} },
	{0x18, 1, {0x00} },
	{0x19, 1, {0x00} },
	{0x1a, 1, {0x00} },
	{0x1b, 1, {0x00} },
	{0x1c, 1, {0x00} },
	{0x1d, 1, {0x00} },
	{0x1e, 1, {0x40} },
	{0x1f, 1, {0x80} },
	{0x20, 1, {0x06} },
	{0x21, 1, {0x01} },
	{0x22, 1, {0x00} },
	{0x23, 1, {0x00} },
	{0x24, 1, {0x00} },
	{0x25, 1, {0x00} },
	{0x26, 1, {0x00} },
	{0x27, 1, {0x00} },
	{0x28, 1, {0x33} },
	{0x29, 1, {0x33} },
	{0x2a, 1, {0x00} },
	{0x2b, 1, {0x00} },
	{0x2c, 1, {0x00} },
	{0x2d, 1, {0x00} },
	{0x2e, 1, {0x00} },
	{0x2f, 1, {0x00} },
	{0x30, 1, {0x00} },
	{0x31, 1, {0x00} },
	{0x32, 1, {0x00} },
	{0x33, 1, {0x00} },
	{0x34, 1, {0x00} },
	{0x35, 1, {0x00} },
	{0x36, 1, {0x00} },
	{0x37, 1, {0x00} },
	{0x38, 1, {0x00} },
	{0x39, 1, {0x00} },
	{0x3a, 1, {0x00} },
	{0x3b, 1, {0x00} },
	{0x3c, 1, {0x00} },
	{0x3d, 1, {0x00} },
	{0x3e, 1, {0x00} },
	{0x3f, 1, {0x00} },
	{0x40, 1, {0x00} },
	{0x41, 1, {0x00} },
	{0x42, 1, {0x00} },
	{0x43, 1, {0x00} },
	{0x44, 1, {0x00} },
	{0x50, 1, {0x01} },
	{0x51, 1, {0x23} },
	{0x52, 1, {0x44} },
	{0x53, 1, {0x67} },
	{0x54, 1, {0x89} },
	{0x55, 1, {0xab} },
	{0x56, 1, {0x01} },
	{0x57, 1, {0x23} },
	{0x58, 1, {0x45} },
	{0x59, 1, {0x67} },
	{0x5a, 1, {0x89} },
	{0x5b, 1, {0xab} },
	{0x5c, 1, {0xcd} },
	{0x5d, 1, {0xef} },
	{0x5e, 1, {0x00} },
	{0x5f, 1, {0x0C} },
	{0x60, 1, {0x0C} },
	{0x61, 1, {0x0F} },
	{0x62, 1, {0x0F} },
	{0x63, 1, {0x0E} },
	{0x64, 1, {0x0E} },
	{0x65, 1, {0x06} },
	{0x66, 1, {0x07} },
	{0x67, 1, {0x0D} },
	{0x68, 1, {0x02} },
	{0x69, 1, {0x02} },
	{0x6a, 1, {0x02} },
	{0x6b, 1, {0x02} },
	{0x6c, 1, {0x02} },
	{0x6d, 1, {0x02} },
	{0x6e, 1, {0x0D} },
	{0x6f, 1, {0x02} },
	{0x70, 1, {0x02} },
	{0x71, 1, {0x05} },
	{0x72, 1, {0x01} },
	{0x73, 1, {0x08} },
	{0x74, 1, {0x00} },
	{0x75, 1, {0x0C} },
	{0x76, 1, {0x0C} },
	{0x77, 1, {0x0F} },
	{0x78, 1, {0x0F} },
	{0x79, 1, {0x0E} },
	{0x7a, 1, {0x0E} },
	{0x7b, 1, {0x06} },
	{0x7c, 1, {0x07} },
	{0x7d, 1, {0x0D} },
	{0x7e, 1, {0x02} },
	{0x7f, 1, {0x02} },
	{0x80, 1, {0x02} },
	{0x81, 1, {0x02} },
	{0x82, 1, {0x02} },
	{0x83, 1, {0x02} },
	{0x84, 1, {0x0D} },
	{0x85, 1, {0x02} },
	{0x86, 1, {0x02} },
	{0x87, 1, {0x05} },
	{0x88, 1, {0x01} },
	{0x89, 1, {0x08} },
	{0x8A, 1, {0x00} },
	{0xFF, 3, {0x98, 0x81, 0x04} },
	{0x6E, 1, {0x3B} },
	{0x6F, 1, {0x57} },
	{0x3A, 1, {0xA4} },
	{0x35, 1, {0x17} },
	{0x8D, 1, {0x1F} },
	{0x87, 1, {0xBA} },
	{0xB2, 1, {0xD1} },
	{0x88, 1, {0x0B} },
	{0x38, 1, {0x01} },
	{0x39, 1, {0x00} },
	{0xB5, 1, {0x07} },
	{0x31, 1, {0x75} },
	{0xFF, 3, {0x98, 0x81, 0x01} },
	{0x22, 1, {0x0A} },
	{0x31, 1, {0x09} },
	{0x56, 1, {0x00} },
	{0x53, 1, {0x62} },
	{0x55, 1, {0x40} },
	{0x50, 1, {0x86} },
	{0x51, 1, {0x82} },
	{0x60, 1, {0x27} },
	{0x62, 1, {0x20} },
	{0xA0, 1, {0x00} },
	{0xA1, 1, {0x12} },
	{0xA2, 1, {0x21} },
	{0xA3, 1, {0x12} },
	{0xA4, 1, {0x15} },
	{0xA5, 1, {0x27} },
	{0xA6, 1, {0x1C} },
	{0xA7, 1, {0x1E} },
	{0xA8, 1, {0x7D} },
	{0xA9, 1, {0x1C} },
	{0xAA, 1, {0x2B} },
	{0xAB, 1, {0x6C} },
	{0xAC, 1, {0x1B} },
	{0xAD, 1, {0x19} },
	{0xAE, 1, {0x4D} },
	{0xAF, 1, {0x23} },
	{0xB0, 1, {0x29} },
	{0xB1, 1, {0x4D} },
	{0xB2, 1, {0x5A} },
	{0xB3, 1, {0x23} },
	{0xC0, 1, {0x00} },
	{0xC1, 1, {0x14} },
	{0xC2, 1, {0x21} },
	{0xC3, 1, {0x11} },
	{0xC4, 1, {0x16} },
	{0xC5, 1, {0x28} },
	{0xC6, 1, {0x1C} },
	{0xC7, 1, {0x1D} },
	{0xC8, 1, {0x7B} },
	{0xC9, 1, {0x1D} },
	{0xCA, 1, {0x29} },
	{0xCB, 1, {0x6B} },
	{0xCC, 1, {0x19} },
	{0xCD, 1, {0x18} },
	{0xCE, 1, {0x4B} },
	{0xCF, 1, {0x21} },
	{0xD0, 1, {0x29} },
	{0xD1, 1, {0x4D} },
	{0xD2, 1, {0x5B} },
	{0xD3, 1, {0x23} },
	{0xFF, 3, {0x98, 0x81, 0x00} },
	{0x35, 1, {0x00} },
	{0x11, 1, {} },
	{REGFLAG_DELAY, REGFLAG_DELAY, {120} },
	{0x29, 1, {} },
	{REGFLAG_DELAY, REGFLAG_DELAY, {20} },
	{REGFLAG_END_OF_TABLE, REGFLAG_END_OF_TABLE, {0x00} }
};

#endif /*End of file*/
