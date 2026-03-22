#pragma once
#ifndef QPDFWRITER_H_C_LIBVIRTUAL
#define QPDFWRITER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QPdfWriter so that we can call protected methods
class VirtualQPdfWriter final : public QPdfWriter {

public:
	// Virtual class boolean flag
	bool isVirtualQPdfWriter= true;

	// Virtual class public types (including callbacks)
	using QPdfWriter_NewPage_Callback = bool (*)();
	using QPdfWriter_PaintEngine_Callback = QPaintEngine* (*)();
	using QPdfWriter_Metric_Callback = int (*)(const QPdfWriter*, int);

protected:
	// Instance callback storage
	mutable QPdfWriter_NewPage_Callback qpdfwriter_newpage_callback = nullptr;
	mutable QPdfWriter_PaintEngine_Callback qpdfwriter_paintengine_callback = nullptr;
	mutable QPdfWriter_Metric_Callback qpdfwriter_metric_callback = nullptr;

	// Instance base flags
    mutable bool qpdfwriter_newpage_isbase = false;
    mutable bool qpdfwriter_paintengine_isbase = false;
    mutable bool qpdfwriter_metric_isbase = false;

public:
	VirtualQPdfWriter(const QString& filename): QPdfWriter(filename) {};
	VirtualQPdfWriter(QIODevice* device): QPdfWriter(device) {};

	~VirtualQPdfWriter() {
		qpdfwriter_newpage_callback = nullptr;
		qpdfwriter_paintengine_callback = nullptr;
		qpdfwriter_metric_callback = nullptr;
	}

// Callback setters
	inline void setQPdfWriter_NewPage_Callback(QPdfWriter_NewPage_Callback cb) const { qpdfwriter_newpage_callback = cb; }
	inline void setQPdfWriter_PaintEngine_Callback(QPdfWriter_PaintEngine_Callback cb) const { qpdfwriter_paintengine_callback = cb; }
	inline void setQPdfWriter_Metric_Callback(QPdfWriter_Metric_Callback cb) const { qpdfwriter_metric_callback = cb; }

// Base flag setters
	inline void setQPdfWriter_NewPage_IsBase(bool value) const { qpdfwriter_newpage_isbase = value; }
	inline void setQPdfWriter_PaintEngine_IsBase(bool value) const { qpdfwriter_paintengine_isbase = value; }
	inline void setQPdfWriter_Metric_IsBase(bool value) const { qpdfwriter_metric_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool newPage() override {
		if (qpdfwriter_newpage_isbase) {
			qpdfwriter_newpage_isbase = false;
			return QPdfWriter::newPage();
		} else if (qpdfwriter_newpage_callback != nullptr) {
			bool callback_ret = qpdfwriter_newpage_callback();
			return callback_ret;
		} else {
			return QPdfWriter::newPage();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPaintEngine* paintEngine() const override {
		if (qpdfwriter_paintengine_isbase) {
			qpdfwriter_paintengine_isbase = false;
			return QPdfWriter::paintEngine();
		} else if (qpdfwriter_paintengine_callback != nullptr) {
			QPaintEngine* callback_ret = qpdfwriter_paintengine_callback();
			return callback_ret;
		} else {
			return QPdfWriter::paintEngine();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int metric(PaintDeviceMetric id) const override {
		if (qpdfwriter_metric_isbase) {
			qpdfwriter_metric_isbase = false;
			return QPdfWriter::metric(id);
		} else if (qpdfwriter_metric_callback != nullptr) {
			int cbval1 = static_cast<int>(id);
			int callback_ret = qpdfwriter_metric_callback(this, cbval1);
			return callback_ret;
		} else {
			return QPdfWriter::metric(id);
		}
	}

	// Friend functions
	friend QPaintEngine* QPdfWriter_PaintEngine(const QPdfWriter* self);
	friend QPaintEngine* QPdfWriter_QBasePaintEngine(const QPdfWriter* self);
	friend int QPdfWriter_Metric(const QPdfWriter* self, int id);
	friend int QPdfWriter_QBaseMetric(const QPdfWriter* self, int id);
};

#endif


