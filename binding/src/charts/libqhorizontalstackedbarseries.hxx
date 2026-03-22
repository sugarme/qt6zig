#pragma once
#ifndef QHORIZONTALSTACKEDBARSERIES_H_C_LIBVIRTUAL
#define QHORIZONTALSTACKEDBARSERIES_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QHorizontalStackedBarSeries so that we can call protected methods
class VirtualQHorizontalStackedBarSeries final : public QHorizontalStackedBarSeries {

public:
	// Virtual class boolean flag
	bool isVirtualQHorizontalStackedBarSeries= true;

	// Virtual class public types (including callbacks)
	using QHorizontalStackedBarSeries_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QHorizontalStackedBarSeries_Type_Callback qhorizontalstackedbarseries_type_callback = nullptr;

	// Instance base flags
    mutable bool qhorizontalstackedbarseries_type_isbase = false;

public:
	VirtualQHorizontalStackedBarSeries(): QHorizontalStackedBarSeries() {};
	VirtualQHorizontalStackedBarSeries(QObject* parent): QHorizontalStackedBarSeries(parent) {};

	~VirtualQHorizontalStackedBarSeries() {
		qhorizontalstackedbarseries_type_callback = nullptr;
	}

// Callback setters
	inline void setQHorizontalStackedBarSeries_Type_Callback(QHorizontalStackedBarSeries_Type_Callback cb) const { qhorizontalstackedbarseries_type_callback = cb; }

// Base flag setters
	inline void setQHorizontalStackedBarSeries_Type_IsBase(bool value) const { qhorizontalstackedbarseries_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QAbstractSeries::SeriesType type() const override {
		if (qhorizontalstackedbarseries_type_isbase) {
			qhorizontalstackedbarseries_type_isbase = false;
			return QHorizontalStackedBarSeries::type();
		} else if (qhorizontalstackedbarseries_type_callback != nullptr) {
			int callback_ret = qhorizontalstackedbarseries_type_callback();
			return static_cast<QAbstractSeries::SeriesType>(callback_ret);
		} else {
			return QHorizontalStackedBarSeries::type();
		}
	}
};

#endif


