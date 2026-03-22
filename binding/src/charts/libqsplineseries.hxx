#pragma once
#ifndef QSPLINESERIES_H_C_LIBVIRTUAL
#define QSPLINESERIES_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QSplineSeries so that we can call protected methods
class VirtualQSplineSeries final : public QSplineSeries {

public:
	// Virtual class boolean flag
	bool isVirtualQSplineSeries= true;

	// Virtual class public types (including callbacks)
	using QSplineSeries_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QSplineSeries_Type_Callback qsplineseries_type_callback = nullptr;

	// Instance base flags
    mutable bool qsplineseries_type_isbase = false;

public:
	VirtualQSplineSeries(): QSplineSeries() {};
	VirtualQSplineSeries(QObject* parent): QSplineSeries(parent) {};

	~VirtualQSplineSeries() {
		qsplineseries_type_callback = nullptr;
	}

// Callback setters
	inline void setQSplineSeries_Type_Callback(QSplineSeries_Type_Callback cb) const { qsplineseries_type_callback = cb; }

// Base flag setters
	inline void setQSplineSeries_Type_IsBase(bool value) const { qsplineseries_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QAbstractSeries::SeriesType type() const override {
		if (qsplineseries_type_isbase) {
			qsplineseries_type_isbase = false;
			return QSplineSeries::type();
		} else if (qsplineseries_type_callback != nullptr) {
			int callback_ret = qsplineseries_type_callback();
			return static_cast<QAbstractSeries::SeriesType>(callback_ret);
		} else {
			return QSplineSeries::type();
		}
	}
};

#endif


