#pragma once
#ifndef QSVGGENERATOR_H_C_LIBVIRTUAL
#define QSVGGENERATOR_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QSvgGenerator so that we can call protected methods
class VirtualQSvgGenerator final : public QSvgGenerator {

public:
	// Virtual class boolean flag
	bool isVirtualQSvgGenerator= true;

	// Virtual class public types (including callbacks)
	using QSvgGenerator_PaintEngine_Callback = QPaintEngine* (*)();
	using QSvgGenerator_Metric_Callback = int (*)(const QSvgGenerator*, int);

protected:
	// Instance callback storage
	mutable QSvgGenerator_PaintEngine_Callback qsvggenerator_paintengine_callback = nullptr;
	mutable QSvgGenerator_Metric_Callback qsvggenerator_metric_callback = nullptr;

	// Instance base flags
    mutable bool qsvggenerator_paintengine_isbase = false;
    mutable bool qsvggenerator_metric_isbase = false;

public:
	VirtualQSvgGenerator(): QSvgGenerator() {};
	VirtualQSvgGenerator(SvgVersion version): QSvgGenerator(version) {};

	~VirtualQSvgGenerator() {
		qsvggenerator_paintengine_callback = nullptr;
		qsvggenerator_metric_callback = nullptr;
	}

// Callback setters
	inline void setQSvgGenerator_PaintEngine_Callback(QSvgGenerator_PaintEngine_Callback cb) const { qsvggenerator_paintengine_callback = cb; }
	inline void setQSvgGenerator_Metric_Callback(QSvgGenerator_Metric_Callback cb) const { qsvggenerator_metric_callback = cb; }

// Base flag setters
	inline void setQSvgGenerator_PaintEngine_IsBase(bool value) const { qsvggenerator_paintengine_isbase = value; }
	inline void setQSvgGenerator_Metric_IsBase(bool value) const { qsvggenerator_metric_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QPaintEngine* paintEngine() const override {
		if (qsvggenerator_paintengine_isbase) {
			qsvggenerator_paintengine_isbase = false;
			return QSvgGenerator::paintEngine();
		} else if (qsvggenerator_paintengine_callback != nullptr) {
			QPaintEngine* callback_ret = qsvggenerator_paintengine_callback();
			return callback_ret;
		} else {
			return QSvgGenerator::paintEngine();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
		if (qsvggenerator_metric_isbase) {
			qsvggenerator_metric_isbase = false;
			return QSvgGenerator::metric(metric);
		} else if (qsvggenerator_metric_callback != nullptr) {
			int cbval1 = static_cast<int>(metric);
			int callback_ret = qsvggenerator_metric_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSvgGenerator::metric(metric);
		}
	}

	// Friend functions
	friend QPaintEngine* QSvgGenerator_PaintEngine(const QSvgGenerator* self);
	friend QPaintEngine* QSvgGenerator_QBasePaintEngine(const QSvgGenerator* self);
	friend int QSvgGenerator_Metric(const QSvgGenerator* self, int metric);
	friend int QSvgGenerator_QBaseMetric(const QSvgGenerator* self, int metric);
};

#endif


