#pragma once
#ifndef QOPENGLPAINTDEVICE_H_C_LIBVIRTUAL
#define QOPENGLPAINTDEVICE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QOpenGLPaintDevice so that we can call protected methods
class VirtualQOpenGLPaintDevice final : public QOpenGLPaintDevice {

public:
	// Virtual class boolean flag
	bool isVirtualQOpenGLPaintDevice= true;

	// Virtual class public types (including callbacks)
	using QOpenGLPaintDevice_DevType_Callback = int (*)();
	using QOpenGLPaintDevice_PaintEngine_Callback = QPaintEngine* (*)();
	using QOpenGLPaintDevice_EnsureActiveTarget_Callback = void (*)();
	using QOpenGLPaintDevice_Metric_Callback = int (*)(const QOpenGLPaintDevice*, int);

protected:
	// Instance callback storage
	mutable QOpenGLPaintDevice_DevType_Callback qopenglpaintdevice_devtype_callback = nullptr;
	mutable QOpenGLPaintDevice_PaintEngine_Callback qopenglpaintdevice_paintengine_callback = nullptr;
	mutable QOpenGLPaintDevice_EnsureActiveTarget_Callback qopenglpaintdevice_ensureactivetarget_callback = nullptr;
	mutable QOpenGLPaintDevice_Metric_Callback qopenglpaintdevice_metric_callback = nullptr;

	// Instance base flags
    mutable bool qopenglpaintdevice_devtype_isbase = false;
    mutable bool qopenglpaintdevice_paintengine_isbase = false;
    mutable bool qopenglpaintdevice_ensureactivetarget_isbase = false;
    mutable bool qopenglpaintdevice_metric_isbase = false;

public:
	VirtualQOpenGLPaintDevice(): QOpenGLPaintDevice() {};
	VirtualQOpenGLPaintDevice(const QSize& size): QOpenGLPaintDevice(size) {};
	VirtualQOpenGLPaintDevice(int width, int height): QOpenGLPaintDevice(width, height) {};

	~VirtualQOpenGLPaintDevice() {
		qopenglpaintdevice_devtype_callback = nullptr;
		qopenglpaintdevice_paintengine_callback = nullptr;
		qopenglpaintdevice_ensureactivetarget_callback = nullptr;
		qopenglpaintdevice_metric_callback = nullptr;
	}

// Callback setters
	inline void setQOpenGLPaintDevice_DevType_Callback(QOpenGLPaintDevice_DevType_Callback cb) const { qopenglpaintdevice_devtype_callback = cb; }
	inline void setQOpenGLPaintDevice_PaintEngine_Callback(QOpenGLPaintDevice_PaintEngine_Callback cb) const { qopenglpaintdevice_paintengine_callback = cb; }
	inline void setQOpenGLPaintDevice_EnsureActiveTarget_Callback(QOpenGLPaintDevice_EnsureActiveTarget_Callback cb) const { qopenglpaintdevice_ensureactivetarget_callback = cb; }
	inline void setQOpenGLPaintDevice_Metric_Callback(QOpenGLPaintDevice_Metric_Callback cb) const { qopenglpaintdevice_metric_callback = cb; }

// Base flag setters
	inline void setQOpenGLPaintDevice_DevType_IsBase(bool value) const { qopenglpaintdevice_devtype_isbase = value; }
	inline void setQOpenGLPaintDevice_PaintEngine_IsBase(bool value) const { qopenglpaintdevice_paintengine_isbase = value; }
	inline void setQOpenGLPaintDevice_EnsureActiveTarget_IsBase(bool value) const { qopenglpaintdevice_ensureactivetarget_isbase = value; }
	inline void setQOpenGLPaintDevice_Metric_IsBase(bool value) const { qopenglpaintdevice_metric_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual int devType() const override {
		if (qopenglpaintdevice_devtype_isbase) {
			qopenglpaintdevice_devtype_isbase = false;
			return QOpenGLPaintDevice::devType();
		} else if (qopenglpaintdevice_devtype_callback != nullptr) {
			int callback_ret = qopenglpaintdevice_devtype_callback();
			return callback_ret;
		} else {
			return QOpenGLPaintDevice::devType();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPaintEngine* paintEngine() const override {
		if (qopenglpaintdevice_paintengine_isbase) {
			qopenglpaintdevice_paintengine_isbase = false;
			return QOpenGLPaintDevice::paintEngine();
		} else if (qopenglpaintdevice_paintengine_callback != nullptr) {
			QPaintEngine* callback_ret = qopenglpaintdevice_paintengine_callback();
			return callback_ret;
		} else {
			return QOpenGLPaintDevice::paintEngine();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void ensureActiveTarget() override {
		if (qopenglpaintdevice_ensureactivetarget_isbase) {
			qopenglpaintdevice_ensureactivetarget_isbase = false;
			QOpenGLPaintDevice::ensureActiveTarget();
		} else if (qopenglpaintdevice_ensureactivetarget_callback != nullptr) {
			qopenglpaintdevice_ensureactivetarget_callback();
		} else {
			QOpenGLPaintDevice::ensureActiveTarget();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
		if (qopenglpaintdevice_metric_isbase) {
			qopenglpaintdevice_metric_isbase = false;
			return QOpenGLPaintDevice::metric(metric);
		} else if (qopenglpaintdevice_metric_callback != nullptr) {
			int cbval1 = static_cast<int>(metric);
			int callback_ret = qopenglpaintdevice_metric_callback(this, cbval1);
			return callback_ret;
		} else {
			return QOpenGLPaintDevice::metric(metric);
		}
	}

	// Friend functions
	friend int QOpenGLPaintDevice_Metric(const QOpenGLPaintDevice* self, int metric);
	friend int QOpenGLPaintDevice_QBaseMetric(const QOpenGLPaintDevice* self, int metric);
};

#endif


