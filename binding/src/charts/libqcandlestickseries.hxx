#pragma once
#ifndef QCANDLESTICKSERIES_H_C_LIBVIRTUAL
#define QCANDLESTICKSERIES_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QCandlestickSeries so that we can call protected methods
class VirtualQCandlestickSeries final : public QCandlestickSeries {

public:
	// Virtual class boolean flag
	bool isVirtualQCandlestickSeries= true;

	// Virtual class public types (including callbacks)
	using QCandlestickSeries_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QCandlestickSeries_Type_Callback qcandlestickseries_type_callback = nullptr;

	// Instance base flags
    mutable bool qcandlestickseries_type_isbase = false;

public:
	VirtualQCandlestickSeries(): QCandlestickSeries() {};
	VirtualQCandlestickSeries(QObject* parent): QCandlestickSeries(parent) {};

	~VirtualQCandlestickSeries() {
		qcandlestickseries_type_callback = nullptr;
	}

// Callback setters
	inline void setQCandlestickSeries_Type_Callback(QCandlestickSeries_Type_Callback cb) const { qcandlestickseries_type_callback = cb; }

// Base flag setters
	inline void setQCandlestickSeries_Type_IsBase(bool value) const { qcandlestickseries_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QAbstractSeries::SeriesType type() const override {
		if (qcandlestickseries_type_isbase) {
			qcandlestickseries_type_isbase = false;
			return QCandlestickSeries::type();
		} else if (qcandlestickseries_type_callback != nullptr) {
			int callback_ret = qcandlestickseries_type_callback();
			return static_cast<QAbstractSeries::SeriesType>(callback_ret);
		} else {
			return QCandlestickSeries::type();
		}
	}
};

#endif


