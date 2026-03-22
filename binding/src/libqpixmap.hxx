#pragma once
#ifndef QPIXMAP_H_C_LIBVIRTUAL
#define QPIXMAP_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QPixmap so that we can call protected methods
class VirtualQPixmap final : public QPixmap {

public:
	// Virtual class boolean flag
	bool isVirtualQPixmap= true;

	// Virtual class public types (including callbacks)
	using QPixmap_DevType_Callback = int (*)();
	using QPixmap_PaintEngine_Callback = QPaintEngine* (*)();
	using QPixmap_Metric_Callback = int (*)(const QPixmap*, int);
	using QPixmap_FromImageInPlace_Callback = QPixmap* (*)(QPixmap*, QImage*);
	using QPixmap_FromImageInPlace2_Callback = QPixmap* (*)(QPixmap*, QImage*, int);

protected:
	// Instance callback storage
	mutable QPixmap_DevType_Callback qpixmap_devtype_callback = nullptr;
	mutable QPixmap_PaintEngine_Callback qpixmap_paintengine_callback = nullptr;
	mutable QPixmap_Metric_Callback qpixmap_metric_callback = nullptr;
	mutable QPixmap_FromImageInPlace_Callback qpixmap_fromimageinplace_callback = nullptr;
	mutable QPixmap_FromImageInPlace2_Callback qpixmap_fromimageinplace2_callback = nullptr;

	// Instance base flags
    mutable bool qpixmap_devtype_isbase = false;
    mutable bool qpixmap_paintengine_isbase = false;
    mutable bool qpixmap_metric_isbase = false;
    mutable bool qpixmap_fromimageinplace_isbase = false;
    mutable bool qpixmap_fromimageinplace2_isbase = false;

public:
	VirtualQPixmap(): QPixmap() {};
	VirtualQPixmap(int w, int h): QPixmap(w, h) {};
	VirtualQPixmap(const QSize& param1): QPixmap(param1) {};
	VirtualQPixmap(const QString& fileName): QPixmap(fileName) {};
	VirtualQPixmap(const char** xpm): QPixmap(xpm) {};
	VirtualQPixmap(const QPixmap& param1): QPixmap(param1) {};
	VirtualQPixmap(const QString& fileName, const char* format): QPixmap(fileName, format) {};
	VirtualQPixmap(const QString& fileName, const char* format, Qt::ImageConversionFlags flags): QPixmap(fileName, format, flags) {};

	~VirtualQPixmap() {
		qpixmap_devtype_callback = nullptr;
		qpixmap_paintengine_callback = nullptr;
		qpixmap_metric_callback = nullptr;
		qpixmap_fromimageinplace_callback = nullptr;
		qpixmap_fromimageinplace2_callback = nullptr;
	}

// Callback setters
	inline void setQPixmap_DevType_Callback(QPixmap_DevType_Callback cb) const { qpixmap_devtype_callback = cb; }
	inline void setQPixmap_PaintEngine_Callback(QPixmap_PaintEngine_Callback cb) const { qpixmap_paintengine_callback = cb; }
	inline void setQPixmap_Metric_Callback(QPixmap_Metric_Callback cb) const { qpixmap_metric_callback = cb; }
	inline void setQPixmap_FromImageInPlace_Callback(QPixmap_FromImageInPlace_Callback cb) const { qpixmap_fromimageinplace_callback = cb; }
	inline void setQPixmap_FromImageInPlace2_Callback(QPixmap_FromImageInPlace2_Callback cb) const { qpixmap_fromimageinplace2_callback = cb; }

// Base flag setters
	inline void setQPixmap_DevType_IsBase(bool value) const { qpixmap_devtype_isbase = value; }
	inline void setQPixmap_PaintEngine_IsBase(bool value) const { qpixmap_paintengine_isbase = value; }
	inline void setQPixmap_Metric_IsBase(bool value) const { qpixmap_metric_isbase = value; }
	inline void setQPixmap_FromImageInPlace_IsBase(bool value) const { qpixmap_fromimageinplace_isbase = value; }
	inline void setQPixmap_FromImageInPlace2_IsBase(bool value) const { qpixmap_fromimageinplace2_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual int devType() const override {
		if (qpixmap_devtype_isbase) {
			qpixmap_devtype_isbase = false;
			return QPixmap::devType();
		} else if (qpixmap_devtype_callback != nullptr) {
			int callback_ret = qpixmap_devtype_callback();
			return callback_ret;
		} else {
			return QPixmap::devType();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPaintEngine* paintEngine() const override {
		if (qpixmap_paintengine_isbase) {
			qpixmap_paintengine_isbase = false;
			return QPixmap::paintEngine();
		} else if (qpixmap_paintengine_callback != nullptr) {
			QPaintEngine* callback_ret = qpixmap_paintengine_callback();
			return callback_ret;
		} else {
			return QPixmap::paintEngine();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (qpixmap_metric_isbase) {
			qpixmap_metric_isbase = false;
			return QPixmap::metric(param1);
		} else if (qpixmap_metric_callback != nullptr) {
			int cbval1 = static_cast<int>(param1);
			int callback_ret = qpixmap_metric_callback(this, cbval1);
			return callback_ret;
		} else {
			return QPixmap::metric(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	QPixmap fromImageInPlace(QImage& image) {
		if (qpixmap_fromimageinplace_isbase) {
			qpixmap_fromimageinplace_isbase = false;
			return QPixmap::fromImageInPlace(image);
		} else if (qpixmap_fromimageinplace_callback != nullptr) {
			QImage* cbval1 = &image;
			QPixmap* callback_ret = qpixmap_fromimageinplace_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QPixmap::fromImageInPlace(image);
		}
	}

	// Virtual method for C ABI access and custom callback
	QPixmap fromImageInPlace(QImage& image, Qt::ImageConversionFlags flags) {
		if (qpixmap_fromimageinplace2_isbase) {
			qpixmap_fromimageinplace2_isbase = false;
			return QPixmap::fromImageInPlace(image, flags);
		} else if (qpixmap_fromimageinplace2_callback != nullptr) {
			QImage* cbval1 = &image;
			int cbval2 = static_cast<int>(flags);
			QPixmap* callback_ret = qpixmap_fromimageinplace2_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QPixmap::fromImageInPlace(image, flags);
		}
	}

	// Friend functions
	friend int QPixmap_Metric(const QPixmap* self, int param1);
	friend int QPixmap_QBaseMetric(const QPixmap* self, int param1);
	friend QPixmap* QPixmap_FromImageInPlace(QPixmap* self, QImage* image);
	friend QPixmap* QPixmap_QBaseFromImageInPlace(QPixmap* self, QImage* image);
	friend QPixmap* QPixmap_FromImageInPlace2(QPixmap* self, QImage* image, int flags);
	friend QPixmap* QPixmap_QBaseFromImageInPlace2(QPixmap* self, QImage* image, int flags);
};

#endif


