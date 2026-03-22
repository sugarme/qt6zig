#pragma once
#ifndef QPICTURE_H_C_LIBVIRTUAL
#define QPICTURE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QPicture so that we can call protected methods
class VirtualQPicture final : public QPicture {

public:
	// Virtual class boolean flag
	bool isVirtualQPicture= true;

	// Virtual class public types (including callbacks)
	using QPicture_DevType_Callback = int (*)();
	using QPicture_SetData_Callback = void (*)(QPicture*, const char*, unsigned int);
	using QPicture_PaintEngine_Callback = QPaintEngine* (*)();
	using QPicture_Metric_Callback = int (*)(const QPicture*, int);

protected:
	// Instance callback storage
	mutable QPicture_DevType_Callback qpicture_devtype_callback = nullptr;
	mutable QPicture_SetData_Callback qpicture_setdata_callback = nullptr;
	mutable QPicture_PaintEngine_Callback qpicture_paintengine_callback = nullptr;
	mutable QPicture_Metric_Callback qpicture_metric_callback = nullptr;

	// Instance base flags
    mutable bool qpicture_devtype_isbase = false;
    mutable bool qpicture_setdata_isbase = false;
    mutable bool qpicture_paintengine_isbase = false;
    mutable bool qpicture_metric_isbase = false;

public:
	VirtualQPicture(): QPicture() {};
	VirtualQPicture(const QPicture& param1): QPicture(param1) {};
	VirtualQPicture(int formatVersion): QPicture(formatVersion) {};

	~VirtualQPicture() {
		qpicture_devtype_callback = nullptr;
		qpicture_setdata_callback = nullptr;
		qpicture_paintengine_callback = nullptr;
		qpicture_metric_callback = nullptr;
	}

// Callback setters
	inline void setQPicture_DevType_Callback(QPicture_DevType_Callback cb) const { qpicture_devtype_callback = cb; }
	inline void setQPicture_SetData_Callback(QPicture_SetData_Callback cb) const { qpicture_setdata_callback = cb; }
	inline void setQPicture_PaintEngine_Callback(QPicture_PaintEngine_Callback cb) const { qpicture_paintengine_callback = cb; }
	inline void setQPicture_Metric_Callback(QPicture_Metric_Callback cb) const { qpicture_metric_callback = cb; }

// Base flag setters
	inline void setQPicture_DevType_IsBase(bool value) const { qpicture_devtype_isbase = value; }
	inline void setQPicture_SetData_IsBase(bool value) const { qpicture_setdata_isbase = value; }
	inline void setQPicture_PaintEngine_IsBase(bool value) const { qpicture_paintengine_isbase = value; }
	inline void setQPicture_Metric_IsBase(bool value) const { qpicture_metric_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual int devType() const override {
		if (qpicture_devtype_isbase) {
			qpicture_devtype_isbase = false;
			return QPicture::devType();
		} else if (qpicture_devtype_callback != nullptr) {
			int callback_ret = qpicture_devtype_callback();
			return callback_ret;
		} else {
			return QPicture::devType();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setData(const char* data, uint size) override {
		if (qpicture_setdata_isbase) {
			qpicture_setdata_isbase = false;
			QPicture::setData(data, size);
		} else if (qpicture_setdata_callback != nullptr) {
			const char* cbval1 = data;
			unsigned int cbval2 = size;
			qpicture_setdata_callback(this, cbval1, cbval2);
		} else {
			QPicture::setData(data, size);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPaintEngine* paintEngine() const override {
		if (qpicture_paintengine_isbase) {
			qpicture_paintengine_isbase = false;
			return QPicture::paintEngine();
		} else if (qpicture_paintengine_callback != nullptr) {
			QPaintEngine* callback_ret = qpicture_paintengine_callback();
			return callback_ret;
		} else {
			return QPicture::paintEngine();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int metric(PaintDeviceMetric m) const override {
		if (qpicture_metric_isbase) {
			qpicture_metric_isbase = false;
			return QPicture::metric(m);
		} else if (qpicture_metric_callback != nullptr) {
			int cbval1 = static_cast<int>(m);
			int callback_ret = qpicture_metric_callback(this, cbval1);
			return callback_ret;
		} else {
			return QPicture::metric(m);
		}
	}

	// Friend functions
	friend int QPicture_Metric(const QPicture* self, int m);
	friend int QPicture_QBaseMetric(const QPicture* self, int m);
};

#endif


