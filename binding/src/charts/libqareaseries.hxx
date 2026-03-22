#pragma once
#ifndef QAREASERIES_H_C_LIBVIRTUAL
#define QAREASERIES_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QAreaSeries so that we can call protected methods
class VirtualQAreaSeries final : public QAreaSeries {

public:
	// Virtual class boolean flag
	bool isVirtualQAreaSeries= true;

	// Virtual class public types (including callbacks)
	using QAreaSeries_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QAreaSeries_Type_Callback qareaseries_type_callback = nullptr;

	// Instance base flags
    mutable bool qareaseries_type_isbase = false;

public:
	VirtualQAreaSeries(): QAreaSeries() {};
	VirtualQAreaSeries(QLineSeries* upperSeries): QAreaSeries(upperSeries) {};
	VirtualQAreaSeries(QObject* parent): QAreaSeries(parent) {};
	VirtualQAreaSeries(QLineSeries* upperSeries, QLineSeries* lowerSeries): QAreaSeries(upperSeries, lowerSeries) {};

	~VirtualQAreaSeries() {
		qareaseries_type_callback = nullptr;
	}

// Callback setters
	inline void setQAreaSeries_Type_Callback(QAreaSeries_Type_Callback cb) const { qareaseries_type_callback = cb; }

// Base flag setters
	inline void setQAreaSeries_Type_IsBase(bool value) const { qareaseries_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QAbstractSeries::SeriesType type() const override {
		if (qareaseries_type_isbase) {
			qareaseries_type_isbase = false;
			return QAreaSeries::type();
		} else if (qareaseries_type_callback != nullptr) {
			int callback_ret = qareaseries_type_callback();
			return static_cast<QAbstractSeries::SeriesType>(callback_ret);
		} else {
			return QAreaSeries::type();
		}
	}
};

#endif


