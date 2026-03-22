#pragma once
#ifndef QLINESERIES_H_C_LIBVIRTUAL
#define QLINESERIES_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QLineSeries so that we can call protected methods
class VirtualQLineSeries final : public QLineSeries {

public:
	// Virtual class boolean flag
	bool isVirtualQLineSeries= true;

	// Virtual class public types (including callbacks)
	using QLineSeries_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QLineSeries_Type_Callback qlineseries_type_callback = nullptr;

	// Instance base flags
    mutable bool qlineseries_type_isbase = false;

public:
	VirtualQLineSeries(): QLineSeries() {};
	VirtualQLineSeries(QObject* parent): QLineSeries(parent) {};

	~VirtualQLineSeries() {
		qlineseries_type_callback = nullptr;
	}

// Callback setters
	inline void setQLineSeries_Type_Callback(QLineSeries_Type_Callback cb) const { qlineseries_type_callback = cb; }

// Base flag setters
	inline void setQLineSeries_Type_IsBase(bool value) const { qlineseries_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QAbstractSeries::SeriesType type() const override {
		if (qlineseries_type_isbase) {
			qlineseries_type_isbase = false;
			return QLineSeries::type();
		} else if (qlineseries_type_callback != nullptr) {
			int callback_ret = qlineseries_type_callback();
			return static_cast<QAbstractSeries::SeriesType>(callback_ret);
		} else {
			return QLineSeries::type();
		}
	}
};

#endif


