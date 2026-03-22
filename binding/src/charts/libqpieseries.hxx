#pragma once
#ifndef QPIESERIES_H_C_LIBVIRTUAL
#define QPIESERIES_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QPieSeries so that we can call protected methods
class VirtualQPieSeries final : public QPieSeries {

public:
	// Virtual class boolean flag
	bool isVirtualQPieSeries= true;

	// Virtual class public types (including callbacks)
	using QPieSeries_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QPieSeries_Type_Callback qpieseries_type_callback = nullptr;

	// Instance base flags
    mutable bool qpieseries_type_isbase = false;

public:
	VirtualQPieSeries(): QPieSeries() {};
	VirtualQPieSeries(QObject* parent): QPieSeries(parent) {};

	~VirtualQPieSeries() {
		qpieseries_type_callback = nullptr;
	}

// Callback setters
	inline void setQPieSeries_Type_Callback(QPieSeries_Type_Callback cb) const { qpieseries_type_callback = cb; }

// Base flag setters
	inline void setQPieSeries_Type_IsBase(bool value) const { qpieseries_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QAbstractSeries::SeriesType type() const override {
		if (qpieseries_type_isbase) {
			qpieseries_type_isbase = false;
			return QPieSeries::type();
		} else if (qpieseries_type_callback != nullptr) {
			int callback_ret = qpieseries_type_callback();
			return static_cast<QAbstractSeries::SeriesType>(callback_ret);
		} else {
			return QPieSeries::type();
		}
	}
};

#endif


