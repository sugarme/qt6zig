#pragma once
#ifndef QHORIZONTALPERCENTBARSERIES_H_C_LIBVIRTUAL
#define QHORIZONTALPERCENTBARSERIES_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QHorizontalPercentBarSeries so that we can call protected methods
class VirtualQHorizontalPercentBarSeries final : public QHorizontalPercentBarSeries {

public:
	// Virtual class boolean flag
	bool isVirtualQHorizontalPercentBarSeries= true;

	// Virtual class public types (including callbacks)
	using QHorizontalPercentBarSeries_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QHorizontalPercentBarSeries_Type_Callback qhorizontalpercentbarseries_type_callback = nullptr;

	// Instance base flags
    mutable bool qhorizontalpercentbarseries_type_isbase = false;

public:
	VirtualQHorizontalPercentBarSeries(): QHorizontalPercentBarSeries() {};
	VirtualQHorizontalPercentBarSeries(QObject* parent): QHorizontalPercentBarSeries(parent) {};

	~VirtualQHorizontalPercentBarSeries() {
		qhorizontalpercentbarseries_type_callback = nullptr;
	}

// Callback setters
	inline void setQHorizontalPercentBarSeries_Type_Callback(QHorizontalPercentBarSeries_Type_Callback cb) const { qhorizontalpercentbarseries_type_callback = cb; }

// Base flag setters
	inline void setQHorizontalPercentBarSeries_Type_IsBase(bool value) const { qhorizontalpercentbarseries_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QAbstractSeries::SeriesType type() const override {
		if (qhorizontalpercentbarseries_type_isbase) {
			qhorizontalpercentbarseries_type_isbase = false;
			return QHorizontalPercentBarSeries::type();
		} else if (qhorizontalpercentbarseries_type_callback != nullptr) {
			int callback_ret = qhorizontalpercentbarseries_type_callback();
			return static_cast<QAbstractSeries::SeriesType>(callback_ret);
		} else {
			return QHorizontalPercentBarSeries::type();
		}
	}
};

#endif


