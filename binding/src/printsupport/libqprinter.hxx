#pragma once
#ifndef QPRINTER_H_C_LIBVIRTUAL
#define QPRINTER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QPrinter so that we can call protected methods
class VirtualQPrinter final : public QPrinter {

public:
	// Virtual class boolean flag
	bool isVirtualQPrinter= true;

	// Virtual class public types (including callbacks)
	using QPrinter_DevType_Callback = int (*)();
	using QPrinter_NewPage_Callback = bool (*)();
	using QPrinter_PaintEngine_Callback = QPaintEngine* (*)();
	using QPrinter_Metric_Callback = int (*)(const QPrinter*, int);
	using QPrinter_SetEngines_Callback = void (*)(QPrinter*, QPrintEngine*, QPaintEngine*);

protected:
	// Instance callback storage
	mutable QPrinter_DevType_Callback qprinter_devtype_callback = nullptr;
	mutable QPrinter_NewPage_Callback qprinter_newpage_callback = nullptr;
	mutable QPrinter_PaintEngine_Callback qprinter_paintengine_callback = nullptr;
	mutable QPrinter_Metric_Callback qprinter_metric_callback = nullptr;
	mutable QPrinter_SetEngines_Callback qprinter_setengines_callback = nullptr;

	// Instance base flags
    mutable bool qprinter_devtype_isbase = false;
    mutable bool qprinter_newpage_isbase = false;
    mutable bool qprinter_paintengine_isbase = false;
    mutable bool qprinter_metric_isbase = false;
    mutable bool qprinter_setengines_isbase = false;

public:
	VirtualQPrinter(): QPrinter() {};
	VirtualQPrinter(const QPrinterInfo& printer): QPrinter(printer) {};
	VirtualQPrinter(PrinterMode mode): QPrinter(mode) {};
	VirtualQPrinter(const QPrinterInfo& printer, PrinterMode mode): QPrinter(printer, mode) {};

	~VirtualQPrinter() {
		qprinter_devtype_callback = nullptr;
		qprinter_newpage_callback = nullptr;
		qprinter_paintengine_callback = nullptr;
		qprinter_metric_callback = nullptr;
		qprinter_setengines_callback = nullptr;
	}

// Callback setters
	inline void setQPrinter_DevType_Callback(QPrinter_DevType_Callback cb) const { qprinter_devtype_callback = cb; }
	inline void setQPrinter_NewPage_Callback(QPrinter_NewPage_Callback cb) const { qprinter_newpage_callback = cb; }
	inline void setQPrinter_PaintEngine_Callback(QPrinter_PaintEngine_Callback cb) const { qprinter_paintengine_callback = cb; }
	inline void setQPrinter_Metric_Callback(QPrinter_Metric_Callback cb) const { qprinter_metric_callback = cb; }
	inline void setQPrinter_SetEngines_Callback(QPrinter_SetEngines_Callback cb) const { qprinter_setengines_callback = cb; }

// Base flag setters
	inline void setQPrinter_DevType_IsBase(bool value) const { qprinter_devtype_isbase = value; }
	inline void setQPrinter_NewPage_IsBase(bool value) const { qprinter_newpage_isbase = value; }
	inline void setQPrinter_PaintEngine_IsBase(bool value) const { qprinter_paintengine_isbase = value; }
	inline void setQPrinter_Metric_IsBase(bool value) const { qprinter_metric_isbase = value; }
	inline void setQPrinter_SetEngines_IsBase(bool value) const { qprinter_setengines_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual int devType() const override {
		if (qprinter_devtype_isbase) {
			qprinter_devtype_isbase = false;
			return QPrinter::devType();
		} else if (qprinter_devtype_callback != nullptr) {
			int callback_ret = qprinter_devtype_callback();
			return callback_ret;
		} else {
			return QPrinter::devType();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool newPage() override {
		if (qprinter_newpage_isbase) {
			qprinter_newpage_isbase = false;
			return QPrinter::newPage();
		} else if (qprinter_newpage_callback != nullptr) {
			bool callback_ret = qprinter_newpage_callback();
			return callback_ret;
		} else {
			return QPrinter::newPage();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPaintEngine* paintEngine() const override {
		if (qprinter_paintengine_isbase) {
			qprinter_paintengine_isbase = false;
			return QPrinter::paintEngine();
		} else if (qprinter_paintengine_callback != nullptr) {
			QPaintEngine* callback_ret = qprinter_paintengine_callback();
			return callback_ret;
		} else {
			return QPrinter::paintEngine();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (qprinter_metric_isbase) {
			qprinter_metric_isbase = false;
			return QPrinter::metric(param1);
		} else if (qprinter_metric_callback != nullptr) {
			int cbval1 = static_cast<int>(param1);
			int callback_ret = qprinter_metric_callback(this, cbval1);
			return callback_ret;
		} else {
			return QPrinter::metric(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setEngines(QPrintEngine* printEngine, QPaintEngine* paintEngine) {
		if (qprinter_setengines_isbase) {
			qprinter_setengines_isbase = false;
			QPrinter::setEngines(printEngine, paintEngine);
		} else if (qprinter_setengines_callback != nullptr) {
			QPrintEngine* cbval1 = printEngine;
			QPaintEngine* cbval2 = paintEngine;
			qprinter_setengines_callback(this, cbval1, cbval2);
		} else {
			QPrinter::setEngines(printEngine, paintEngine);
		}
	}

	// Friend functions
	friend int QPrinter_Metric(const QPrinter* self, int param1);
	friend int QPrinter_QBaseMetric(const QPrinter* self, int param1);
	friend void QPrinter_SetEngines(QPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine);
	friend void QPrinter_QBaseSetEngines(QPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine);
};

#endif


