/*
 *
 * FocalTech fts TouchScreen driver.
 *
 * Copyright (c) 2012-2018, Focaltech Ltd. All rights reserved.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include "../focaltech_core.h"
#include "../focaltech_flash.h"

static int fts_ft5822_upgrade(struct i2c_client *client, u8 *buf, u32 len)
{
	int ret = 0;
	u32 start_addr = 0;
	u8 cmd[4] = {0};
	int ecc_in_host = 0;
	int ecc_in_tp = 0;

	if (buf == NULL) {
		FTS_ERROR("fw buf is null");
		return -EINVAL;
	}

	if ((len < FTS_MIN_LEN) || (len > (60 * 1024))) {
		FTS_ERROR("fw buffer len(%x) fail", len);
		return -EINVAL;
	}

	/* enter into upgrade environment */
	ret = fts_fwupg_enter_into_boot(client);
	if (ret < 0) {
		FTS_ERROR("enter into pramboot/bootloader fail,ret=%d", ret);
		goto fw_reset;
	}

	cmd[0] = FTS_CMD_FLASH_MODE;
	cmd[1] = FLASH_MODE_UPGRADE_VALUE;
	ret = fts_i2c_write(client, cmd, 2);
	if (ret < 0) {
		FTS_ERROR("upgrade mode(09) cmd write fail");
		goto fw_reset;
	}

	cmd[0] = FTS_CMD_DATA_LEN;
	cmd[1] = BYTE_OFF_16(len);
	cmd[2] = BYTE_OFF_8(len);
	cmd[3] = BYTE_OFF_0(len);
	ret = fts_i2c_write(client, cmd, FTS_CMD_DATA_LEN_LEN);
	if (ret < 0) {
		FTS_ERROR("data len cmd write fail");
		goto fw_reset;
	}

	ret = fts_fwupg_erase(client, FTS_REASE_APP_DELAY);
	if (ret < 0) {
		FTS_ERROR("erase cmd write fail");
		goto fw_reset;
	}

	/* write app */
	start_addr = upgrade_func_ft5822.appoff;
	ecc_in_host = fts_flash_write_buf(client, start_addr, buf, len, 1);
	if (ecc_in_host < 0) {
		FTS_ERROR("lcd initial code write fail");
		goto fw_reset;
	}

	/* ecc */
	ecc_in_tp = fts_fwupg_ecc_cal(client, start_addr, len);
	if (ecc_in_tp < 0) {
		FTS_ERROR("ecc read fail");
		goto fw_reset;
	}

	FTS_INFO("ecc in tp:%x, host:%x", ecc_in_tp, ecc_in_host);
	if (ecc_in_tp != ecc_in_host) {
		FTS_ERROR("ecc check fail");
		goto fw_reset;
	}

	FTS_INFO("upgrade success, reset to normal boot");
	ret = fts_fwupg_reset_in_boot(client);
	if (ret < 0)
		FTS_ERROR("reset to normal boot fail");

	msleep(200);
	return 0;

fw_reset:
	FTS_INFO("upgrade fail, reset to normal boot");
	ret = fts_fwupg_reset_in_boot(client);
	if (ret < 0)
		FTS_ERROR("reset to normal boot fail");
	return -EIO;
}

struct upgrade_func upgrade_func_ft5822 = {
	.ctype = {0x01},
	.fwveroff = 0x10A,
	.fwcfgoff = 0xFFB0,
	.appoff = 0x0000,
	.pramboot_supported = false,
	.hid_supported = true,
	.upgrade = fts_ft5822_upgrade,
};
