#include "focaltech_core.h"

struct fts_mode_flag {
	int  fts_glove_mode_flag;
	int  fts_cover_mode_flag;
	int  fts_charger_mode_flag;
};

struct fts_mode_flag g_fts_mode_flag;
int fts_enter_glove_mode(struct i2c_client *client, int mode);
int fts_enter_cover_mode(struct i2c_client *client, int mode);
int fts_enter_charger_mode(struct i2c_client *client, int mode);

#if FTS_GLOVE_EN
static ssize_t fts_touch_glove_show(struct device *dev,
			struct device_attribute *attr, char *buf)
{
	int count;
	u8 val;
	struct input_dev *input_dev = fts_data->input_dev;
	struct i2c_client *client = container_of(dev, struct i2c_client, dev);

	mutex_lock(&input_dev->mutex);
	fts_i2c_read_reg(client, FTS_REG_GLOVE_MODE_EN, &val);
	count = snprintf(buf, PAGE_SIZE, "Glove Mode: %s\n",
			g_fts_mode_flag.fts_glove_mode_flag ? "On" : "Off");
	count += snprintf(buf + count, PAGE_SIZE,
			"Glove Reg(0xC0) = %d\n", val);
	mutex_unlock(&input_dev->mutex);

	return count;
}

static ssize_t fts_touch_glove_store(struct device *dev,
				struct device_attribute *attr,
				const char *buf, size_t count)
{
	int ret;
	struct fts_ts_data *ts_data = fts_data;
	struct i2c_client *client;


	client = ts_data->client;
	if (FTS_SYSFS_ECHO_ON(buf)) {
		if (!g_fts_mode_flag.fts_glove_mode_flag) {
			FTS_INFO("[Mode]enter glove mode");
			ret = fts_enter_glove_mode(client, true);
			if (ret >= 0)
				g_fts_mode_flag.fts_glove_mode_flag = true;
		}
	} else if (FTS_SYSFS_ECHO_OFF(buf)) {
		if (g_fts_mode_flag.fts_glove_mode_flag) {
			FTS_INFO("[Mode]exit glove mode");
			ret = fts_enter_glove_mode(client, false);
			if (ret >= 0)
				g_fts_mode_flag.fts_glove_mode_flag = false;
		}
	}
	FTS_INFO("[Mode]glove mode status:  %d",
			 g_fts_mode_flag.fts_glove_mode_flag);
	return count;
}

int fts_enter_glove_mode(struct i2c_client *client, int mode)
{
	int ret = 0;
	static u8 buf_addr[2] = {0};
	static u8 buf_value[2] = {0};

	buf_addr[0] = FTS_REG_GLOVE_MODE_EN;

	if (mode)
		buf_value[0] = 0x01;
	else
		buf_value[0] = 0x00;

	ret = fts_i2c_write_reg(client, buf_addr[0], buf_value[0]);
	if (ret < 0)
		FTS_ERROR("[Mode]fts_enter_glove_mode write value fail");
	return ret;
}

static DEVICE_ATTR(fts_glove_mode, 0640,
		   fts_touch_glove_show, fts_touch_glove_store);
#endif

#if FTS_COVER_EN
static ssize_t fts_touch_cover_show(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	int count;
	u8 val;
	struct input_dev *input_dev = fts_data->input_dev;
	struct i2c_client *client = container_of(dev, struct i2c_client, dev);

	mutex_lock(&input_dev->mutex);
	fts_i2c_read_reg(client, FTS_REG_COVER_MODE_EN, &val);
	count = snprintf(buf, PAGE_SIZE, "Cover Mode: %s\n",
			 g_fts_mode_flag.fts_cover_mode_flag ? "On" : "Off");
	count += snprintf(buf + count, PAGE_SIZE,
	"Cover Reg(0xC1) = %d\n", val);
	mutex_unlock(&input_dev->mutex);

	return count;
}

static ssize_t fts_touch_cover_store(struct device *dev,
				struct device_attribute *attr,
				const char *buf, size_t count)
{
	int ret;
	struct fts_ts_data *ts_data = fts_data;
	struct i2c_client *client;

	client = ts_data->client;
	if (FTS_SYSFS_ECHO_ON(buf)) {
		if (!g_fts_mode_flag.fts_cover_mode_flag) {
			FTS_INFO("[Mode]enter cover mode");
			ret = fts_enter_cover_mode(client, true);
			if (ret >= 0)
				g_fts_mode_flag.fts_cover_mode_flag = true;
		}
	} else if (FTS_SYSFS_ECHO_OFF(buf)) {
		if (g_fts_mode_flag.fts_cover_mode_flag) {
			FTS_INFO("[Mode]exit cover mode");
			ret = fts_enter_cover_mode(client, false);
			if (ret >= 0)
				g_fts_mode_flag.fts_cover_mode_flag = false;
		}
	}
	FTS_INFO("[Mode]cover mode status:  %d",
			 g_fts_mode_flag.fts_cover_mode_flag);
	return count;
}

int  fts_enter_cover_mode(struct i2c_client *client, int mode)
{
	int ret = 0;
	static u8 buf_addr[2] = {0};
	static u8 buf_value[2] = {0};

	buf_addr[0] = FTS_REG_COVER_MODE_EN;
	if (mode)
		buf_value[0] = 0x01;
	else
		buf_value[0] = 0x00;

	ret = fts_i2c_write_reg(client, buf_addr[0], buf_value[0]);
	if (ret < 0)
		FTS_ERROR("[Mode] fts_enter_cover_mode write value fail\n");
	return ret;
}

static DEVICE_ATTR(fts_cover_mode, 0640,
fts_touch_cover_show, fts_touch_cover_store);

#endif

#if FTS_CHARGER_EN
static ssize_t fts_touch_charger_show(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	int count;
	u8 val;
	struct input_dev *input_dev = fts_data->input_dev;
	struct i2c_client *client = container_of(dev,
	struct i2c_client, dev);

	mutex_lock(&input_dev->mutex);
	fts_i2c_read_reg(client, FTS_REG_CHARGER_MODE_EN, &val);
	count = snprintf(buf, PAGE_SIZE, "Charge Mode: %s\n",
			 g_fts_mode_flag.fts_charger_mode_flag ? "On" : "Off");
	count += snprintf(buf + count, PAGE_SIZE,
	"Charge Reg(0x8B) = %d\n", val);
	mutex_unlock(&input_dev->mutex);

	return count;
}

static ssize_t fts_touch_charger_store(struct device *dev,
				struct device_attribute *attr,
				const char *buf, size_t count)
{
	int ret;
	struct fts_ts_data *ts_data = fts_data;
	struct i2c_client *client;

	client = ts_data->client;

	if (FTS_SYSFS_ECHO_ON(buf)) {
		if (!g_fts_mode_flag.fts_charger_mode_flag) {
			FTS_INFO("[Mode]enter charger mode");
			ret = fts_enter_charger_mode(client, true);
			if (ret >= 0)
				g_fts_mode_flag.fts_charger_mode_flag = true;
		}
	} else if (FTS_SYSFS_ECHO_OFF(buf)) {
		if (g_fts_mode_flag.fts_charger_mode_flag) {
			FTS_INFO("[Mode]exit charger mode");
			ret = fts_enter_charger_mode(client, false);
			if (ret >= 0)
				g_fts_mode_flag.fts_charger_mode_flag = false;
		}
	}
	FTS_INFO("[Mode]charger mode status: %d",
			 g_fts_mode_flag.fts_charger_mode_flag);
	return count;
}

int  fts_enter_charger_mode(struct i2c_client *client, int mode)
{
	int ret = 0;
	static u8 buf_addr[2] = { 0 };
	static u8 buf_value[2] = { 0 };

	buf_addr[0] = FTS_REG_CHARGER_MODE_EN;
	if (mode)
		buf_value[0] = 0x01;
	else
		buf_value[0] = 0x00;

	ret = fts_i2c_write_reg(client, buf_addr[0], buf_value[0]);
	if (ret < 0)
		FTS_DEBUG("[Mode]fts_enter_charger_mode write value fail");
	return ret;
}

static DEVICE_ATTR(fts_charger_mode, 0640,
		fts_touch_charger_show, fts_touch_charger_store);

#endif

static struct attribute *fts_touch_mode_attrs[] = {
#if FTS_GLOVE_EN
	&dev_attr_fts_glove_mode.attr,
#endif

#if FTS_COVER_EN
	&dev_attr_fts_cover_mode.attr,
#endif

#if FTS_CHARGER_EN
	&dev_attr_fts_charger_mode.attr,
#endif

	NULL,
};

static struct attribute_group fts_touch_mode_group = {
	.attrs = fts_touch_mode_attrs,
};

int fts_ex_mode_init(struct i2c_client *client)
{
	int err = 0;

	g_fts_mode_flag.fts_glove_mode_flag = false;
	g_fts_mode_flag.fts_cover_mode_flag = false;
	g_fts_mode_flag.fts_charger_mode_flag = false;

	err = sysfs_create_group(&client->dev.kobj, &fts_touch_mode_group);
	if (err != 0) {
		FTS_ERROR("[Mode]create sysfs failed.");
		sysfs_remove_group(&client->dev.kobj, &fts_touch_mode_group);
		return -EIO;
	} else if (err == 0) {
		FTS_DEBUG("[Mode]create sysfs succeeded");
	}
	return err;

}

int fts_ex_mode_exit(struct i2c_client *client)
{
	sysfs_remove_group(&client->dev.kobj, &fts_touch_mode_group);
	return 0;
}

int fts_ex_mode_recovery(struct i2c_client *client)
{
	int ret = 0;
#if FTS_GLOVE_EN
	if (g_fts_mode_flag.fts_glove_mode_flag)
		ret = fts_enter_glove_mode(client, true);
#endif

#if FTS_COVER_EN
	if (g_fts_mode_flag.fts_cover_mode_flag)
		ret = fts_enter_cover_mode(client, true);
#endif

#if FTS_CHARGER_EN
	if (g_fts_mode_flag.fts_charger_mode_flag)
		ret = fts_enter_charger_mode(client, true);
#endif

	return ret;
}
