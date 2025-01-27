/*
 * Fbfg fuel gauge driver
 *
 * Copyright (c) 2021, Facebook Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed "as is" WITHOUT ANY WARRANTY of any
 * kind, whether express or implied; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _FB_FG_PROP_H
#define _FB_FG_PROP_H

enum FBFG_PROP_IDX {
	FBFG_PROP_BATTERY_STATUS,
	FBFG_PROP_CELL_BALANCE_TIME,
	FBFG_PROP_CELL_MAX_VOLT,
	FBFG_PROP_CELL_MIN_VOLT,
	FBFG_PROP_CELL1_VOLT,
	FBFG_PROP_CELL2_VOLT,
	FBFG_PROP_CELL3_VOLT,
	FBFG_PROP_CELL4_VOLT,
	FBFG_PROP_FIRMWARE_SUBVER,
	FBFG_PROP_FIRMWARE_VERSION,
	FBFG_PROP_GAUGE_ALERT,
	FBFG_PROP_LAST_AOLD_EVENT,
	FBFG_PROP_LAST_ASCC_EVENT,
	FBFG_PROP_LAST_ASCD_EVENT,
	FBFG_PROP_LAST_COV_EVENT,
	FBFG_PROP_LAST_CUV_EVENT,
	FBFG_PROP_LAST_OCC1_EVENT,
	FBFG_PROP_LAST_OCC2_EVENT,
	FBFG_PROP_LAST_OCD1_EVENT,
	FBFG_PROP_LAST_OCD2_EVENT,
	FBFG_PROP_LAST_OTC_EVENT,
	FBFG_PROP_LAST_OTD_EVENT,
	FBFG_PROP_LAST_OTF_EVENT,
	FBFG_PROP_LAST_VCT,
	FBFG_PROP_MAX_AVG_DSG_CURRENT,
	FBFG_PROP_MAX_AVG_DSG_POWER,
	FBFG_PROP_MAX_CHARGE_CURRENT,
	FBFG_PROP_MAX_DELTA_CELL_TEMP,
	FBFG_PROP_MAX_DELTA_CELL_VOLT,
	FBFG_PROP_MAX_DISCHARGE_CURRENT,
	FBFG_PROP_MAX_TEMP_CELL,
	FBFG_PROP_MAX_TEMP_FET,
	FBFG_PROP_MIN_TEMP_CELL,
	FBFG_PROP_NUM_AOLD_EVENTS,
	FBFG_PROP_NUM_ASCC_EVENTS,
	FBFG_PROP_NUM_ASCD_EVENTS,
	FBFG_PROP_NUM_COV_EVENTS,
	FBFG_PROP_NUM_CUV_EVENTS,
	FBFG_PROP_NUM_OCC1_EVENTS,
	FBFG_PROP_NUM_OCC2_EVENTS,
	FBFG_PROP_NUM_OCD1_EVENTS,
	FBFG_PROP_NUM_OCD2_EVENTS,
	FBFG_PROP_NUM_OTC_EVENTS,
	FBFG_PROP_NUM_OTD_EVENTS,
	FBFG_PROP_NUM_OTF_EVENTS,
	FBFG_PROP_NUMBER_SHUTDOWNS,
	FBFG_PROP_NUMBER_VCT,
	FBFG_PROP_OP_STATUS,
	FBFG_PROP_PF_STATUS,
	FBFG_PROP_SAFETY_STATUS,
	FBFG_PROP_SOH,
	FBFG_PROP_TIME_SPENT_HT_A,
	FBFG_PROP_TIME_SPENT_HT_B,
	FBFG_PROP_TIME_SPENT_HT_C,
	FBFG_PROP_TIME_SPENT_HT_D,
	FBFG_PROP_TIME_SPENT_HT_E,
	FBFG_PROP_TIME_SPENT_HT_F,
	FBFG_PROP_TIME_SPENT_HT_G,
	FBFG_PROP_TIME_SPENT_HT_H,
	FBFG_PROP_TIME_SPENT_LT_A,
	FBFG_PROP_TIME_SPENT_LT_B,
	FBFG_PROP_TIME_SPENT_LT_C,
	FBFG_PROP_TIME_SPENT_LT_D,
	FBFG_PROP_TIME_SPENT_LT_E,
	FBFG_PROP_TIME_SPENT_LT_F,
	FBFG_PROP_TIME_SPENT_LT_G,
	FBFG_PROP_TIME_SPENT_LT_H,
	FBFG_PROP_TIME_SPENT_OT_A,
	FBFG_PROP_TIME_SPENT_OT_B,
	FBFG_PROP_TIME_SPENT_OT_C,
	FBFG_PROP_TIME_SPENT_OT_D,
	FBFG_PROP_TIME_SPENT_OT_E,
	FBFG_PROP_TIME_SPENT_OT_F,
	FBFG_PROP_TIME_SPENT_OT_G,
	FBFG_PROP_TIME_SPENT_OT_H,
	FBFG_PROP_TIME_SPENT_RT_A,
	FBFG_PROP_TIME_SPENT_RT_B,
	FBFG_PROP_TIME_SPENT_RT_C,
	FBFG_PROP_TIME_SPENT_RT_D,
	FBFG_PROP_TIME_SPENT_RT_E,
	FBFG_PROP_TIME_SPENT_RT_F,
	FBFG_PROP_TIME_SPENT_RT_G,
	FBFG_PROP_TIME_SPENT_RT_H,
	FBFG_PROP_TIME_SPENT_STH_A,
	FBFG_PROP_TIME_SPENT_STH_B,
	FBFG_PROP_TIME_SPENT_STH_C,
	FBFG_PROP_TIME_SPENT_STH_D,
	FBFG_PROP_TIME_SPENT_STH_E,
	FBFG_PROP_TIME_SPENT_STH_F,
	FBFG_PROP_TIME_SPENT_STH_G,
	FBFG_PROP_TIME_SPENT_STH_H,
	FBFG_PROP_TIME_SPENT_STL_A,
	FBFG_PROP_TIME_SPENT_STL_B,
	FBFG_PROP_TIME_SPENT_STL_C,
	FBFG_PROP_TIME_SPENT_STL_D,
	FBFG_PROP_TIME_SPENT_STL_E,
	FBFG_PROP_TIME_SPENT_STL_F,
	FBFG_PROP_TIME_SPENT_STL_G,
	FBFG_PROP_TIME_SPENT_STL_H,
	FBFG_PROP_TIME_SPENT_UT_A,
	FBFG_PROP_TIME_SPENT_UT_B,
	FBFG_PROP_TIME_SPENT_UT_C,
	FBFG_PROP_TIME_SPENT_UT_D,
	FBFG_PROP_TIME_SPENT_UT_E,
	FBFG_PROP_TIME_SPENT_UT_F,
	FBFG_PROP_TIME_SPENT_UT_G,
	FBFG_PROP_TIME_SPENT_UT_H,
	FBFG_PROP_TOT_FW_RUNTIME,
	FBFG_PROP_TS_TEMPERATURE1,
	FBFG_PROP_TS_TEMPERATURE2,
	FBFG_PROP_TS_TEMPERATURE3,
	FBFG_PROP_TS_TEMPERATURE4,
	FBFG_PROP_NR,
};


const struct fbfg_prop_name {
	const char *name;
} fbfg_prop_names[FBFG_PROP_NR] = {
	[FBFG_PROP_BATTERY_STATUS] = { "battery_status" },
	[FBFG_PROP_CELL_BALANCE_TIME] = { "cell_balance_time" },
	[FBFG_PROP_CELL_MAX_VOLT] = { "cell_max_volt" },
	[FBFG_PROP_CELL_MIN_VOLT] = { "cell_min_volt" },
	[FBFG_PROP_CELL1_VOLT] = { "cell_voltage_1" },
	[FBFG_PROP_CELL2_VOLT] = { "cell_voltage_2" },
	[FBFG_PROP_CELL3_VOLT] = { "cell_voltage_3" },
	[FBFG_PROP_CELL4_VOLT] = { "cell_voltage_4" },
	[FBFG_PROP_FIRMWARE_SUBVER] = {"firmware_subver" },
	[FBFG_PROP_FIRMWARE_VERSION] = {"firmware_version" },
	[FBFG_PROP_GAUGE_ALERT] = { "gauge_alert" },
	[FBFG_PROP_LAST_AOLD_EVENT] = { "last_aold_event" },
	[FBFG_PROP_LAST_ASCC_EVENT] = { "last_ascc_event" },
	[FBFG_PROP_LAST_ASCD_EVENT] = { "last_ascd_event" },
	[FBFG_PROP_LAST_COV_EVENT] = { "last_cov_event" },
	[FBFG_PROP_LAST_CUV_EVENT] = { "last_cuv_event" },
	[FBFG_PROP_LAST_OCC1_EVENT] = { "last_occ1_event" },
	[FBFG_PROP_LAST_OCC2_EVENT] = { "last_occ2_event" },
	[FBFG_PROP_LAST_OCD1_EVENT] = { "last_ocd1_event" },
	[FBFG_PROP_LAST_OCD2_EVENT] = { "last_ocd2_event" },
	[FBFG_PROP_LAST_OTC_EVENT] = { "last_otc_event" },
	[FBFG_PROP_LAST_OTD_EVENT] = { "last_otd_event" },
	[FBFG_PROP_LAST_OTF_EVENT] = { "last_otf_event" },
	[FBFG_PROP_LAST_VCT] = { "last_vct" },
	[FBFG_PROP_MAX_AVG_DSG_CURRENT] = { "max_avg_dsg_current" },
	[FBFG_PROP_MAX_AVG_DSG_POWER] = { "max_avg_dsg_power" },
	[FBFG_PROP_MAX_CHARGE_CURRENT] = { "max_charge_current" },
	[FBFG_PROP_MAX_DELTA_CELL_TEMP] = { "max_delta_cell_temp" },
	[FBFG_PROP_MAX_DELTA_CELL_VOLT] = { "max_delta_cell_volt" },
	[FBFG_PROP_MAX_DISCHARGE_CURRENT] = { "max_discharge_current" },
	[FBFG_PROP_MAX_TEMP_CELL] = { "max_temp_cell" },
	[FBFG_PROP_MAX_TEMP_FET] = { "max_temp_fet" },
	[FBFG_PROP_MIN_TEMP_CELL] = { "min_temp_cell" },
	[FBFG_PROP_NUM_AOLD_EVENTS] = { "num_aold_events" },
	[FBFG_PROP_NUM_ASCC_EVENTS] = { "num_ascc_events" },
	[FBFG_PROP_NUM_ASCD_EVENTS] = { "num_ascd_events" },
	[FBFG_PROP_NUM_COV_EVENTS] = { "num_cov_events" },
	[FBFG_PROP_NUM_CUV_EVENTS] = { "num_cuv_events" },
	[FBFG_PROP_NUM_OCC1_EVENTS] = { "num_occ1_events" },
	[FBFG_PROP_NUM_OCC2_EVENTS] = { "num_occ2_events" },
	[FBFG_PROP_NUM_OCD1_EVENTS] = { "num_ocd1_events" },
	[FBFG_PROP_NUM_OCD2_EVENTS] = { "num_ocd2_events" },
	[FBFG_PROP_NUM_OTC_EVENTS] = { "num_otc_events" },
	[FBFG_PROP_NUM_OTD_EVENTS] = { "num_otd_events" },
	[FBFG_PROP_NUM_OTF_EVENTS] = { "num_otf_events" },
	[FBFG_PROP_NUMBER_SHUTDOWNS] = { "number_shutdowns" },
	[FBFG_PROP_NUMBER_VCT] = { "number_vct" },
	[FBFG_PROP_OP_STATUS] = { "operation_status" },
	[FBFG_PROP_PF_STATUS] = { "pf_status" },
	[FBFG_PROP_SAFETY_STATUS] = { "safety_status"},
	[FBFG_PROP_SOH] = { "state_of_health" },
	[FBFG_PROP_TIME_SPENT_HT_A] = { "time_spent_ht_a" },
	[FBFG_PROP_TIME_SPENT_HT_B] = { "time_spent_ht_b" },
	[FBFG_PROP_TIME_SPENT_HT_C] = { "time_spent_ht_c" },
	[FBFG_PROP_TIME_SPENT_HT_D] = { "time_spent_ht_d" },
	[FBFG_PROP_TIME_SPENT_HT_E] = { "time_spent_ht_e" },
	[FBFG_PROP_TIME_SPENT_HT_F] = { "time_spent_ht_f" },
	[FBFG_PROP_TIME_SPENT_HT_G] = { "time_spent_ht_g" },
	[FBFG_PROP_TIME_SPENT_HT_H] = { "time_spent_ht_h" },
	[FBFG_PROP_TIME_SPENT_LT_A] = { "time_spent_lt_a" },
	[FBFG_PROP_TIME_SPENT_LT_B] = { "time_spent_lt_b" },
	[FBFG_PROP_TIME_SPENT_LT_C] = { "time_spent_lt_c" },
	[FBFG_PROP_TIME_SPENT_LT_D] = { "time_spent_lt_d" },
	[FBFG_PROP_TIME_SPENT_LT_E] = { "time_spent_lt_e" },
	[FBFG_PROP_TIME_SPENT_LT_F] = { "time_spent_lt_f" },
	[FBFG_PROP_TIME_SPENT_LT_G] = { "time_spent_lt_g" },
	[FBFG_PROP_TIME_SPENT_LT_H] = { "time_spent_lt_h" },
	[FBFG_PROP_TIME_SPENT_OT_A] = { "time_spent_ot_a" },
	[FBFG_PROP_TIME_SPENT_OT_B] = { "time_spent_ot_b" },
	[FBFG_PROP_TIME_SPENT_OT_C] = { "time_spent_ot_c" },
	[FBFG_PROP_TIME_SPENT_OT_D] = { "time_spent_ot_d" },
	[FBFG_PROP_TIME_SPENT_OT_E] = { "time_spent_ot_e" },
	[FBFG_PROP_TIME_SPENT_OT_F] = { "time_spent_ot_f" },
	[FBFG_PROP_TIME_SPENT_OT_G] = { "time_spent_ot_g" },
	[FBFG_PROP_TIME_SPENT_OT_H] = { "time_spent_ot_h" },
	[FBFG_PROP_TIME_SPENT_RT_A] = { "time_spent_rt_a" },
	[FBFG_PROP_TIME_SPENT_RT_B] = { "time_spent_rt_b" },
	[FBFG_PROP_TIME_SPENT_RT_C] = { "time_spent_rt_c" },
	[FBFG_PROP_TIME_SPENT_RT_D] = { "time_spent_rt_d" },
	[FBFG_PROP_TIME_SPENT_RT_E] = { "time_spent_rt_e" },
	[FBFG_PROP_TIME_SPENT_RT_F] = { "time_spent_rt_f" },
	[FBFG_PROP_TIME_SPENT_RT_G] = { "time_spent_rt_g" },
	[FBFG_PROP_TIME_SPENT_RT_H] = { "time_spent_rt_h" },
	[FBFG_PROP_TIME_SPENT_STH_A] = { "time_spent_sth_a" },
	[FBFG_PROP_TIME_SPENT_STH_B] = { "time_spent_sth_b" },
	[FBFG_PROP_TIME_SPENT_STH_C] = { "time_spent_sth_c" },
	[FBFG_PROP_TIME_SPENT_STH_D] = { "time_spent_sth_d" },
	[FBFG_PROP_TIME_SPENT_STH_E] = { "time_spent_sth_e" },
	[FBFG_PROP_TIME_SPENT_STH_F] = { "time_spent_sth_f" },
	[FBFG_PROP_TIME_SPENT_STH_G] = { "time_spent_sth_g" },
	[FBFG_PROP_TIME_SPENT_STH_H] = { "time_spent_sth_h" },
	[FBFG_PROP_TIME_SPENT_STL_A] = { "time_spent_stl_a" },
	[FBFG_PROP_TIME_SPENT_STL_B] = { "time_spent_stl_b" },
	[FBFG_PROP_TIME_SPENT_STL_C] = { "time_spent_stl_c" },
	[FBFG_PROP_TIME_SPENT_STL_D] = { "time_spent_stl_d" },
	[FBFG_PROP_TIME_SPENT_STL_E] = { "time_spent_stl_e" },
	[FBFG_PROP_TIME_SPENT_STL_F] = { "time_spent_stl_f" },
	[FBFG_PROP_TIME_SPENT_STL_G] = { "time_spent_stl_g" },
	[FBFG_PROP_TIME_SPENT_STL_H] = { "time_spent_stl_h" },
	[FBFG_PROP_TIME_SPENT_UT_A] = { "time_spent_ut_a" },
	[FBFG_PROP_TIME_SPENT_UT_B] = { "time_spent_ut_b" },
	[FBFG_PROP_TIME_SPENT_UT_C] = { "time_spent_ut_c" },
	[FBFG_PROP_TIME_SPENT_UT_D] = { "time_spent_ut_d" },
	[FBFG_PROP_TIME_SPENT_UT_E] = { "time_spent_ut_e" },
	[FBFG_PROP_TIME_SPENT_UT_F] = { "time_spent_ut_f" },
	[FBFG_PROP_TIME_SPENT_UT_G] = { "time_spent_ut_g" },
	[FBFG_PROP_TIME_SPENT_UT_H] = { "time_spent_ut_h" },
	[FBFG_PROP_TOT_FW_RUNTIME] = { "tot_fw_runtime" },
	[FBFG_PROP_TS_TEMPERATURE1] = { "ts_temperature1" },
	[FBFG_PROP_TS_TEMPERATURE2] = { "ts_temperature2" },
	[FBFG_PROP_TS_TEMPERATURE3] = { "ts_temperature3" },
	[FBFG_PROP_TS_TEMPERATURE4] = { "ts_temperature4" },
};

enum FBFG_PROP_OP_TYPE {
	SMBUS_WORD,
	SMBUS_BLOCK,
	SMBUS_MAC,
};

enum FBFG_PROP_VAL_TYPE {
	GG_S1,	/* Signed 8-bit integer. */
	GG_S2,	/* Signed 16-bit integer. */
	GG_U1,	/* Unsigned 8-bit integer. */
	GG_U2,	/* Unsigned 16-bit integer. */
	GG_U4,	/* Unsigned 32-bit integer. */
	GG_ST,  /* String type */
};

int fbfg_prop_type_size(int type)
{
	switch (type) {
	case GG_U4: return 4;
	case GG_U2: return 2;
	case GG_S2: return 2;
	case GG_S1: return 1;
	case GG_U1: return 1;
	case GG_ST: return 0;
	}
	return 0;
}

enum PROP_NUM_PARAMS {
	PARAM_NUM_CELL = 0,
	PARAM_NUM_ONE,
	PARAM_NUM_TWO,
	PARAM_NUM_TREE,
	PARAM_NUM_FOUR,
};

union __fbfg_propval {
	int intvals[PARAM_NUM_FOUR];
	uint32_t uintvals[PARAM_NUM_FOUR];
	u8 buf[32];
};

struct fbfg_propval {
	union __fbfg_propval val;
	int len;
};

enum raj240045_lifetime_block {
	RAJ_LIFETIME_BLOCK1 = 0x60,
	RAJ_LIFETIME_BLOCK2 = 0x61,
	RAJ_LIFETIME_BLOCK3 = 0x62,
	RAJ_LIFETIME_BLOCK4 = 0x63,
	RAJ_LIFETIME_BLOCK5 = 0x64,
	RAJ_LIFETIME_BLOCK6 = 0x65,
	RAJ_LIFETIME_BLOCK7 = 0x66,
	RAJ_LIFETIME_BLOCK8 = 0x67,
};

enum fg_ldb4_offsets {
	FG_NUM_COV_EVENTS = 0,
	FG_LAST_COV_EVENT = 2,
	FG_NUM_CUV_EVENTS = 4,
	FG_LAST_CUV_EVENT = 6,
	FG_NUM_OCD1_EVENTS = 8,
	FG_LAST_OCD1_EVENT = 10,
	FG_NUM_OCD2_EVENTS = 12,
	FG_LAST_OCD2_EVENT = 14,
	FG_NUM_OCC1_EVENTS = 16,
	FG_LAST_OCC1_EVENT = 18,
	FG_NUM_OCC2_EVENTS = 20,
	FG_LAST_OCC2_EVENT = 22,
	FG_NUM_AOLD_EVENTS = 24,
	FG_LAST_AOLD_EVENT = 26,
	FG_NUM_ASCD_EVENTS = 28,
	FG_LAST_ASCD_EVENT = 30,
};

struct fbfg_prop_desc {
	const char *name;
	enum FBFG_PROP_OP_TYPE op_type;
	u8 addr;
	u8 offset;
	enum FBFG_PROP_VAL_TYPE data_type;
	enum PROP_NUM_PARAMS num_param;
	int mult;
	int block_sz;
	int mask;
	int add;
};

const struct fbfg_prop_desc raj240045_props_data[FBFG_PROP_NR] = {
	[FBFG_PROP_BATTERY_STATUS] = {"battery_status", SMBUS_WORD,
		0x38, 0, GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_CELL_MAX_VOLT] = {"cell_max_volt", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK1, 0x00, GG_U2, PARAM_NUM_CELL, 1000, 0},
	[FBFG_PROP_CELL_MIN_VOLT] = {"cell_min_volt", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK1, 0x08, GG_U2, PARAM_NUM_CELL, 1000, 0},
	[FBFG_PROP_CELL1_VOLT] = { "cell_voltage_1", SMBUS_WORD,
		0x3F, 0, GG_U2, PARAM_NUM_ONE, 1000, 0},
	[FBFG_PROP_CELL2_VOLT] = { "cell_voltage_2", SMBUS_WORD,
		0x3E, 0, GG_U2, PARAM_NUM_ONE, 1000, 0},
	[FBFG_PROP_CELL3_VOLT] = { "cell_voltage_3", SMBUS_WORD,
		0x3D, 0, GG_U2, PARAM_NUM_ONE, 1000, 0},
	[FBFG_PROP_CELL4_VOLT] = { "cell_voltage_4", SMBUS_WORD,
		0x3C, 0, GG_U2, PARAM_NUM_ONE, 1000, 0},
	[FBFG_PROP_MAX_DELTA_CELL_VOLT] = {"max_delta_cell_volt", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK1, 0x10, GG_U2, PARAM_NUM_ONE, 1000, 0},
	[FBFG_PROP_MAX_CHARGE_CURRENT] = {"max_charge_current", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK1, 0x12, GG_U2, PARAM_NUM_ONE, 1000, 0},
	[FBFG_PROP_MAX_DISCHARGE_CURRENT] = {"max_discharge_current", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK1, 0x14, GG_S2, PARAM_NUM_ONE, 1000, 0},
	[FBFG_PROP_MAX_AVG_DSG_CURRENT] = {"max_avg_dsg_current", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK1, 0x16, GG_S2, PARAM_NUM_ONE, 1000, 0},
	// Unit cW
	[FBFG_PROP_MAX_AVG_DSG_POWER] = {"max_avg_dsg_power", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK1, 0x18, GG_S2, PARAM_NUM_ONE, 1, 0},
	// Unit degC
	[FBFG_PROP_MAX_TEMP_CELL] = {"max_temp_cell", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK1, 0x1A, GG_S1, PARAM_NUM_ONE, 1, 0},
	// Unit degC
	[FBFG_PROP_MIN_TEMP_CELL] = {"min_temp_cell", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK1, 0x1B, GG_S1, PARAM_NUM_ONE, 1, 0},
	// Unit degC
	[FBFG_PROP_MAX_TEMP_FET] = {"max_temp_fet", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK1, 0x1F, GG_S1, PARAM_NUM_ONE, 1, 0},
	// Convert 2h to sec
	[FBFG_PROP_NUMBER_SHUTDOWNS] = {"number_shutdowns", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK2, 0x00, GG_U1, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_CELL_BALANCE_TIME] = {"cell_balance_time", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK6, 0x10, GG_U1, PARAM_NUM_CELL, 7200, 0},
	[FBFG_PROP_NUM_COV_EVENTS] = {"num_cov_events", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK7, FG_NUM_COV_EVENTS,
		GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_LAST_COV_EVENT] = {"last_cov_event", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK7, FG_LAST_COV_EVENT,
		GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_NUM_CUV_EVENTS] = {"num_cuv_events", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK7, FG_NUM_CUV_EVENTS,
		GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_LAST_CUV_EVENT] = {"last_cuv_event", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK7, FG_LAST_CUV_EVENT,
		GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_NUM_OCD1_EVENTS] = {"num_ocd1_events", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK7, FG_NUM_OCD1_EVENTS,
		GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_LAST_OCD1_EVENT] = {"last_ocd1_event", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK7, FG_LAST_OCD1_EVENT,
		GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_NUM_OCD2_EVENTS] = {"num_ocd2_events", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK7, FG_NUM_OCD2_EVENTS,
		GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_LAST_OCD2_EVENT] = {"last_ocd2_event", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK7, FG_LAST_OCD2_EVENT,
		GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_NUM_OCC1_EVENTS] = {"num_occ1_events", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK7, FG_NUM_OCC1_EVENTS,
		GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_LAST_OCC1_EVENT] = {"last_occ1_event", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK7, FG_LAST_OCC1_EVENT,
		GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_NUM_OCC2_EVENTS] = {"num_occ2_events", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK7, FG_NUM_OCC2_EVENTS,
		GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_LAST_OCC2_EVENT] = {"last_occ2_event", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK7, FG_LAST_OCC2_EVENT,
		GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_NUM_AOLD_EVENTS] = {"num_aold_events", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK7, FG_NUM_AOLD_EVENTS,
		GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_LAST_AOLD_EVENT] = {"last_aold_event", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK7, FG_LAST_AOLD_EVENT,
		GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_NUM_ASCD_EVENTS] = {"num_ascd_events", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK7, FG_NUM_ASCD_EVENTS,
		GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_LAST_ASCD_EVENT] = {"last_ascd_event", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK7, FG_LAST_ASCD_EVENT,
		GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_NUM_ASCC_EVENTS] = {"num_ascc_events", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK8, 0x00, GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_LAST_ASCC_EVENT] = {"last_ascc_event", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK8, 0x02, GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_NUM_OTC_EVENTS] = {"num_otc_events", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK8, 0x04, GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_LAST_OTC_EVENT] = {"last_otc_event", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK8, 0x06, GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_NUM_OTD_EVENTS] = {"num_otd_events", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK8, 0x08, GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_LAST_OTD_EVENT] = {"last_otd_event", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK8, 0x0A, GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_NUM_OTF_EVENTS] = {"num_otf_events", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK8, 0x0C, GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_LAST_OTF_EVENT] = {"last_otf_event", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK8, 0x0E, GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_NUMBER_VCT] = {"number_vct", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK8, 0x10, GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_LAST_VCT] = {"last_vct", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK8, 0x12, GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_OP_STATUS] = { "operation_status", SMBUS_WORD,
		0x41, 0, GG_U2, PARAM_NUM_ONE, 1, 0, 0x00ff, 0},
	[FBFG_PROP_PF_STATUS] = { "pf_status", SMBUS_WORD,
		0x41, 8, GG_U1, PARAM_NUM_ONE, 1, 0, 0x00ff, 0},
	[FBFG_PROP_SAFETY_STATUS] = { "safety_status", SMBUS_WORD,
		0x38, 0, GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_SOH] = { "state_of_health", SMBUS_WORD,
		0x48, 0, GG_U2, PARAM_NUM_ONE, 1, 0 },
	[FBFG_PROP_FIRMWARE_VERSION] = {"firmware_version", SMBUS_WORD,
		0xF1, 0, GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_FIRMWARE_SUBVER] = {"firmware_subver", SMBUS_WORD,
		0xF2, 0, GG_U2, PARAM_NUM_ONE, 1, 0},
	[FBFG_PROP_TOT_FW_RUNTIME] = { "tot_fw_runtime", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK2, 0x1C, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_GAUGE_ALERT] = { "gauge_alert", SMBUS_BLOCK,
		0x37, 0x00, GG_U4, PARAM_NUM_ONE, 1, 4, 0x3ffff},
	// Raw data unit is 0.1K. Convert it to 0.1C
	[FBFG_PROP_TS_TEMPERATURE1] = { "ts_temperature1", SMBUS_WORD,
		0x49, 0, GG_U2, PARAM_NUM_ONE, 1, 0, 0, -2730},
	// Raw data unit is 0.1K. Convert it to 0.1C
	[FBFG_PROP_TS_TEMPERATURE2] = { "ts_temperature2", SMBUS_WORD,
		0x4A, 0, GG_U2, PARAM_NUM_ONE, 1, 0, 0, -2730},
	[FBFG_PROP_TS_TEMPERATURE3] = { "ts_temperature3", SMBUS_WORD,
		0x4B, 0, GG_U2, PARAM_NUM_ONE, 1, 0, 0, -2730},
	[FBFG_PROP_TIME_SPENT_UT_A] = { "time_spent_ut_a", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK3, 0x00, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_UT_B] = { "time_spent_ut_b", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK3, 0x02, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_UT_C] = { "time_spent_ut_c", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK3, 0x04, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_UT_D] = { "time_spent_ut_d", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK3, 0x06, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_UT_E] = { "time_spent_ut_e", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK3, 0x08, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_UT_F] = { "time_spent_ut_f", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK3, 0x0A, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_UT_G] = { "time_spent_ut_g", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK3, 0x0C, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_UT_H] = { "time_spent_ut_h", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK3, 0x0E, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_LT_A] = { "time_spent_lt_a", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK3, 0x10, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_LT_B] = { "time_spent_lt_b", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK3, 0x12, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_LT_C] = { "time_spent_lt_c", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK3, 0x14, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_LT_D] = { "time_spent_lt_d", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK3, 0x16, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_LT_E] = { "time_spent_lt_e", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK3, 0x18, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_LT_F] = { "time_spent_lt_f", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK3, 0x1A, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_LT_G] = { "time_spent_lt_g", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK3, 0x1C, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_LT_H] = { "time_spent_lt_h", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK3, 0x1E, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_STL_A] = { "time_spent_stl_a", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK4, 0x00, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_STL_B] = { "time_spent_stl_b", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK4, 0x02, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_STL_C] = { "time_spent_stl_c", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK4, 0x04, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_STL_D] = { "time_spent_stl_d", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK4, 0x06, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_STL_E] = { "time_spent_stl_e", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK4, 0x08, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_STL_F] = { "time_spent_stl_f", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK4, 0x0A, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_STL_G] = { "time_spent_stl_g", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK4, 0x0C, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_STL_H] = { "time_spent_stl_h", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK4, 0x0E, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_RT_A] = { "time_spent_rt_a", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK4, 0x10, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_RT_B] = { "time_spent_rt_b", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK4, 0x12, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_RT_C] = { "time_spent_rt_c", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK4, 0x14, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_RT_D] = { "time_spent_rt_d", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK4, 0x16, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_RT_E] = { "time_spent_rt_e", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK4, 0x18, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_RT_F] = { "time_spent_rt_f", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK4, 0x1A, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_RT_G] = { "time_spent_rt_g", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK4, 0x1C, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_RT_H] = { "time_spent_rt_h", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK4, 0x1E, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_STH_A] = { "time_spent_sth_a", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK5, 0x00, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_STH_B] = { "time_spent_sth_b", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK5, 0x02, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_STH_C] = { "time_spent_sth_c", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK5, 0x04, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_STH_D] = { "time_spent_sth_d", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK5, 0x06, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_STH_E] = { "time_spent_sth_e", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK5, 0x08, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_STH_F] = { "time_spent_sth_f", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK5, 0x0A, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_STH_G] = { "time_spent_sth_g", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK5, 0x0C, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_STH_H] = { "time_spent_sth_h", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK5, 0x0E, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_HT_A] = { "time_spent_ht_a", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK5, 0x10, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_HT_B] = { "time_spent_ht_b", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK5, 0x12, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_HT_C] = { "time_spent_ht_c", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK5, 0x14, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_HT_D] = { "time_spent_ht_d", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK5, 0x16, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_HT_E] = { "time_spent_ht_e", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK5, 0x18, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_HT_F] = { "time_spent_ht_f", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK5, 0x1A, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_HT_G] = { "time_spent_ht_g", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK5, 0x1C, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_HT_H] = { "time_spent_ht_h", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK5, 0x1E, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_OT_A] = { "time_spent_ot_a", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK6, 0x00, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_OT_B] = { "time_spent_ot_b", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK6, 0x02, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_OT_C] = { "time_spent_ot_c", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK6, 0x04, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_OT_D] = { "time_spent_ot_d", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK6, 0x06, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_OT_E] = { "time_spent_ot_e", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK6, 0x08, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_OT_F] = { "time_spent_ot_f", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK6, 0x0A, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_OT_G] = { "time_spent_ot_g", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK6, 0x0C, GG_U2, PARAM_NUM_ONE, 7200, 0},
	[FBFG_PROP_TIME_SPENT_OT_H] = { "time_spent_ot_h", SMBUS_MAC,
		RAJ_LIFETIME_BLOCK6, 0x0E, GG_U2, PARAM_NUM_ONE, 7200, 0},
};

#endif
