#pragma once
#ifndef QPRINTENGINE_H_C_LIBVIRTUAL
#define QPRINTENGINE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QPrintEngine so that we can call protected methods
class VirtualQPrintEngine : public QPrintEngine {

public:
	// Virtual class boolean flag
	bool isVirtualQPrintEngine= true;

	// Virtual class public types (including callbacks)
	using QPrintEngine_SetProperty_Callback = void (*)(QPrintEngine*, int, const QVariant*);
	using QPrintEngine_Property_Callback = QVariant* (*)(const QPrintEngine*, int);
	using QPrintEngine_NewPage_Callback = bool (*)();
	using QPrintEngine_Abort_Callback = bool (*)();
	using QPrintEngine_Metric_Callback = int (*)(const QPrintEngine*, int);
	using QPrintEngine_PrinterState_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QPrintEngine_SetProperty_Callback qprintengine_setproperty_callback = nullptr;
	mutable QPrintEngine_Property_Callback qprintengine_property_callback = nullptr;
	mutable QPrintEngine_NewPage_Callback qprintengine_newpage_callback = nullptr;
	mutable QPrintEngine_Abort_Callback qprintengine_abort_callback = nullptr;
	mutable QPrintEngine_Metric_Callback qprintengine_metric_callback = nullptr;
	mutable QPrintEngine_PrinterState_Callback qprintengine_printerstate_callback = nullptr;

	// Instance base flags
    mutable bool qprintengine_setproperty_isbase = false;
    mutable bool qprintengine_property_isbase = false;
    mutable bool qprintengine_newpage_isbase = false;
    mutable bool qprintengine_abort_isbase = false;
    mutable bool qprintengine_metric_isbase = false;
    mutable bool qprintengine_printerstate_isbase = false;

public:
	VirtualQPrintEngine(): QPrintEngine() {};
	VirtualQPrintEngine(const QPrintEngine& param1): QPrintEngine(param1) {};

	~VirtualQPrintEngine() {
		qprintengine_setproperty_callback = nullptr;
		qprintengine_property_callback = nullptr;
		qprintengine_newpage_callback = nullptr;
		qprintengine_abort_callback = nullptr;
		qprintengine_metric_callback = nullptr;
		qprintengine_printerstate_callback = nullptr;
	}

// Callback setters
	inline void setQPrintEngine_SetProperty_Callback(QPrintEngine_SetProperty_Callback cb) const { qprintengine_setproperty_callback = cb; }
	inline void setQPrintEngine_Property_Callback(QPrintEngine_Property_Callback cb) const { qprintengine_property_callback = cb; }
	inline void setQPrintEngine_NewPage_Callback(QPrintEngine_NewPage_Callback cb) const { qprintengine_newpage_callback = cb; }
	inline void setQPrintEngine_Abort_Callback(QPrintEngine_Abort_Callback cb) const { qprintengine_abort_callback = cb; }
	inline void setQPrintEngine_Metric_Callback(QPrintEngine_Metric_Callback cb) const { qprintengine_metric_callback = cb; }
	inline void setQPrintEngine_PrinterState_Callback(QPrintEngine_PrinterState_Callback cb) const { qprintengine_printerstate_callback = cb; }

// Base flag setters
	inline void setQPrintEngine_SetProperty_IsBase(bool value) const { qprintengine_setproperty_isbase = value; }
	inline void setQPrintEngine_Property_IsBase(bool value) const { qprintengine_property_isbase = value; }
	inline void setQPrintEngine_NewPage_IsBase(bool value) const { qprintengine_newpage_isbase = value; }
	inline void setQPrintEngine_Abort_IsBase(bool value) const { qprintengine_abort_isbase = value; }
	inline void setQPrintEngine_Metric_IsBase(bool value) const { qprintengine_metric_isbase = value; }
	inline void setQPrintEngine_PrinterState_IsBase(bool value) const { qprintengine_printerstate_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setProperty(PrintEnginePropertyKey key, const QVariant& value) override {
		if (qprintengine_setproperty_callback != nullptr) {
			int cbval1 = static_cast<int>(key);
			const QVariant* cbval2 = (const QVariant*)&value;
			qprintengine_setproperty_callback(this, cbval1, cbval2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant property(PrintEnginePropertyKey key) const override {
		if (qprintengine_property_callback != nullptr) {
			int cbval1 = static_cast<int>(key);
			QVariant* callback_ret = qprintengine_property_callback(this, cbval1);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool newPage() override {
		if (qprintengine_newpage_callback != nullptr) {
			bool callback_ret = qprintengine_newpage_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool abort() override {
		if (qprintengine_abort_callback != nullptr) {
			bool callback_ret = qprintengine_abort_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (qprintengine_metric_callback != nullptr) {
			int cbval1 = static_cast<int>(param1);
			int callback_ret = qprintengine_metric_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPrinter::PrinterState printerState() const override {
		if (qprintengine_printerstate_callback != nullptr) {
			int callback_ret = qprintengine_printerstate_callback();
			return static_cast<QPrinter::PrinterState>(callback_ret);
		} else {
			return {};
		}
	}
};

#endif


