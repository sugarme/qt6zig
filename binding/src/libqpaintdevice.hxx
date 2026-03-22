#pragma once
#ifndef QPAINTDEVICE_H_C_LIBVIRTUAL
#define QPAINTDEVICE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QPaintDevice so that we can call protected methods
class VirtualQPaintDevice : public QPaintDevice {

public:
	// Virtual class boolean flag
	bool isVirtualQPaintDevice= true;

	// Virtual class public types (including callbacks)
	using QPaintDevice_DevType_Callback = int (*)();
	using QPaintDevice_PaintEngine_Callback = QPaintEngine* (*)();
	using QPaintDevice_Metric_Callback = int (*)(const QPaintDevice*, int);
	using QPaintDevice_InitPainter_Callback = void (*)(const QPaintDevice*, QPainter*);
	using QPaintDevice_Redirected_Callback = QPaintDevice* (*)(const QPaintDevice*, QPoint*);
	using QPaintDevice_SharedPainter_Callback = QPainter* (*)();
	using QPaintDevice_GetDecodedMetricF_Callback = double (*)(const QPaintDevice*, int, int);

protected:
	// Instance callback storage
	mutable QPaintDevice_DevType_Callback qpaintdevice_devtype_callback = nullptr;
	mutable QPaintDevice_PaintEngine_Callback qpaintdevice_paintengine_callback = nullptr;
	mutable QPaintDevice_Metric_Callback qpaintdevice_metric_callback = nullptr;
	mutable QPaintDevice_InitPainter_Callback qpaintdevice_initpainter_callback = nullptr;
	mutable QPaintDevice_Redirected_Callback qpaintdevice_redirected_callback = nullptr;
	mutable QPaintDevice_SharedPainter_Callback qpaintdevice_sharedpainter_callback = nullptr;
	mutable QPaintDevice_GetDecodedMetricF_Callback qpaintdevice_getdecodedmetricf_callback = nullptr;

	// Instance base flags
    mutable bool qpaintdevice_devtype_isbase = false;
    mutable bool qpaintdevice_paintengine_isbase = false;
    mutable bool qpaintdevice_metric_isbase = false;
    mutable bool qpaintdevice_initpainter_isbase = false;
    mutable bool qpaintdevice_redirected_isbase = false;
    mutable bool qpaintdevice_sharedpainter_isbase = false;
    mutable bool qpaintdevice_getdecodedmetricf_isbase = false;

public:

	~VirtualQPaintDevice() {
		qpaintdevice_devtype_callback = nullptr;
		qpaintdevice_paintengine_callback = nullptr;
		qpaintdevice_metric_callback = nullptr;
		qpaintdevice_initpainter_callback = nullptr;
		qpaintdevice_redirected_callback = nullptr;
		qpaintdevice_sharedpainter_callback = nullptr;
		qpaintdevice_getdecodedmetricf_callback = nullptr;
	}

// Callback setters
	inline void setQPaintDevice_DevType_Callback(QPaintDevice_DevType_Callback cb) const { qpaintdevice_devtype_callback = cb; }
	inline void setQPaintDevice_PaintEngine_Callback(QPaintDevice_PaintEngine_Callback cb) const { qpaintdevice_paintengine_callback = cb; }
	inline void setQPaintDevice_Metric_Callback(QPaintDevice_Metric_Callback cb) const { qpaintdevice_metric_callback = cb; }
	inline void setQPaintDevice_InitPainter_Callback(QPaintDevice_InitPainter_Callback cb) const { qpaintdevice_initpainter_callback = cb; }
	inline void setQPaintDevice_Redirected_Callback(QPaintDevice_Redirected_Callback cb) const { qpaintdevice_redirected_callback = cb; }
	inline void setQPaintDevice_SharedPainter_Callback(QPaintDevice_SharedPainter_Callback cb) const { qpaintdevice_sharedpainter_callback = cb; }
	inline void setQPaintDevice_GetDecodedMetricF_Callback(QPaintDevice_GetDecodedMetricF_Callback cb) const { qpaintdevice_getdecodedmetricf_callback = cb; }

// Base flag setters
	inline void setQPaintDevice_DevType_IsBase(bool value) const { qpaintdevice_devtype_isbase = value; }
	inline void setQPaintDevice_PaintEngine_IsBase(bool value) const { qpaintdevice_paintengine_isbase = value; }
	inline void setQPaintDevice_Metric_IsBase(bool value) const { qpaintdevice_metric_isbase = value; }
	inline void setQPaintDevice_InitPainter_IsBase(bool value) const { qpaintdevice_initpainter_isbase = value; }
	inline void setQPaintDevice_Redirected_IsBase(bool value) const { qpaintdevice_redirected_isbase = value; }
	inline void setQPaintDevice_SharedPainter_IsBase(bool value) const { qpaintdevice_sharedpainter_isbase = value; }
	inline void setQPaintDevice_GetDecodedMetricF_IsBase(bool value) const { qpaintdevice_getdecodedmetricf_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual int devType() const override {
		if (qpaintdevice_devtype_isbase) {
			qpaintdevice_devtype_isbase = false;
			return QPaintDevice::devType();
		} else if (qpaintdevice_devtype_callback != nullptr) {
			int callback_ret = qpaintdevice_devtype_callback();
			return callback_ret;
		} else {
			return QPaintDevice::devType();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPaintEngine* paintEngine() const override {
		if (qpaintdevice_paintengine_callback != nullptr) {
			QPaintEngine* callback_ret = qpaintdevice_paintengine_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int metric(PaintDeviceMetric metric) const override {
		if (qpaintdevice_metric_isbase) {
			qpaintdevice_metric_isbase = false;
			return QPaintDevice::metric(metric);
		} else if (qpaintdevice_metric_callback != nullptr) {
			int cbval1 = static_cast<int>(metric);
			int callback_ret = qpaintdevice_metric_callback(this, cbval1);
			return callback_ret;
		} else {
			return QPaintDevice::metric(metric);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initPainter(QPainter* painter) const override {
		if (qpaintdevice_initpainter_isbase) {
			qpaintdevice_initpainter_isbase = false;
			QPaintDevice::initPainter(painter);
		} else if (qpaintdevice_initpainter_callback != nullptr) {
			QPainter* cbval1 = painter;
			qpaintdevice_initpainter_callback(this, cbval1);
		} else {
			QPaintDevice::initPainter(painter);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (qpaintdevice_redirected_isbase) {
			qpaintdevice_redirected_isbase = false;
			return QPaintDevice::redirected(offset);
		} else if (qpaintdevice_redirected_callback != nullptr) {
			QPoint* cbval1 = offset;
			QPaintDevice* callback_ret = qpaintdevice_redirected_callback(this, cbval1);
			return callback_ret;
		} else {
			return QPaintDevice::redirected(offset);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainter* sharedPainter() const override {
		if (qpaintdevice_sharedpainter_isbase) {
			qpaintdevice_sharedpainter_isbase = false;
			return QPaintDevice::sharedPainter();
		} else if (qpaintdevice_sharedpainter_callback != nullptr) {
			QPainter* callback_ret = qpaintdevice_sharedpainter_callback();
			return callback_ret;
		} else {
			return QPaintDevice::sharedPainter();
		}
	}

	// Virtual method for C ABI access and custom callback
	double getDecodedMetricF(PaintDeviceMetric metricA, PaintDeviceMetric metricB) const {
		if (qpaintdevice_getdecodedmetricf_isbase) {
			qpaintdevice_getdecodedmetricf_isbase = false;
			return QPaintDevice::getDecodedMetricF(metricA, metricB);
		} else if (qpaintdevice_getdecodedmetricf_callback != nullptr) {
			int cbval1 = static_cast<int>(metricA);
			int cbval2 = static_cast<int>(metricB);
			double callback_ret = qpaintdevice_getdecodedmetricf_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QPaintDevice::getDecodedMetricF(metricA, metricB);
		}
	}

	// Friend functions
	friend int QPaintDevice_Metric(const QPaintDevice* self, int metric);
	friend int QPaintDevice_QBaseMetric(const QPaintDevice* self, int metric);
	friend void QPaintDevice_InitPainter(const QPaintDevice* self, QPainter* painter);
	friend void QPaintDevice_QBaseInitPainter(const QPaintDevice* self, QPainter* painter);
	friend QPaintDevice* QPaintDevice_Redirected(const QPaintDevice* self, QPoint* offset);
	friend QPaintDevice* QPaintDevice_QBaseRedirected(const QPaintDevice* self, QPoint* offset);
	friend QPainter* QPaintDevice_SharedPainter(const QPaintDevice* self);
	friend QPainter* QPaintDevice_QBaseSharedPainter(const QPaintDevice* self);
	friend double QPaintDevice_GetDecodedMetricF(const QPaintDevice* self, int metricA, int metricB);
	friend double QPaintDevice_QBaseGetDecodedMetricF(const QPaintDevice* self, int metricA, int metricB);
};

#endif


