#pragma once
#ifndef QHORIZONTALBARSERIES_H_C_LIBVIRTUAL
#define QHORIZONTALBARSERIES_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QHorizontalBarSeries so that we can call protected methods
class VirtualQHorizontalBarSeries final : public QHorizontalBarSeries {

public:
	// Virtual class boolean flag
	bool isVirtualQHorizontalBarSeries= true;

	// Virtual class public types (including callbacks)
	using QHorizontalBarSeries_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QHorizontalBarSeries_Type_Callback qhorizontalbarseries_type_callback = nullptr;

	// Instance base flags
    mutable bool qhorizontalbarseries_type_isbase = false;

public:
	VirtualQHorizontalBarSeries(): QHorizontalBarSeries() {};
	VirtualQHorizontalBarSeries(QObject* parent): QHorizontalBarSeries(parent) {};

	~VirtualQHorizontalBarSeries() {
		qhorizontalbarseries_type_callback = nullptr;
	}

// Callback setters
	inline void setQHorizontalBarSeries_Type_Callback(QHorizontalBarSeries_Type_Callback cb) const { qhorizontalbarseries_type_callback = cb; }

// Base flag setters
	inline void setQHorizontalBarSeries_Type_IsBase(bool value) const { qhorizontalbarseries_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QAbstractSeries::SeriesType type() const override {
		if (qhorizontalbarseries_type_isbase) {
			qhorizontalbarseries_type_isbase = false;
			return QHorizontalBarSeries::type();
		} else if (qhorizontalbarseries_type_callback != nullptr) {
			int callback_ret = qhorizontalbarseries_type_callback();
			return static_cast<QAbstractSeries::SeriesType>(callback_ret);
		} else {
			return QHorizontalBarSeries::type();
		}
	}
};

#endif


