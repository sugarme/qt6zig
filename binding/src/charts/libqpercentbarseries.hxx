#pragma once
#ifndef QPERCENTBARSERIES_H_C_LIBVIRTUAL
#define QPERCENTBARSERIES_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QPercentBarSeries so that we can call protected methods
class VirtualQPercentBarSeries final : public QPercentBarSeries {

public:
	// Virtual class boolean flag
	bool isVirtualQPercentBarSeries= true;

	// Virtual class public types (including callbacks)
	using QPercentBarSeries_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QPercentBarSeries_Type_Callback qpercentbarseries_type_callback = nullptr;

	// Instance base flags
    mutable bool qpercentbarseries_type_isbase = false;

public:
	VirtualQPercentBarSeries(): QPercentBarSeries() {};
	VirtualQPercentBarSeries(QObject* parent): QPercentBarSeries(parent) {};

	~VirtualQPercentBarSeries() {
		qpercentbarseries_type_callback = nullptr;
	}

// Callback setters
	inline void setQPercentBarSeries_Type_Callback(QPercentBarSeries_Type_Callback cb) const { qpercentbarseries_type_callback = cb; }

// Base flag setters
	inline void setQPercentBarSeries_Type_IsBase(bool value) const { qpercentbarseries_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QAbstractSeries::SeriesType type() const override {
		if (qpercentbarseries_type_isbase) {
			qpercentbarseries_type_isbase = false;
			return QPercentBarSeries::type();
		} else if (qpercentbarseries_type_callback != nullptr) {
			int callback_ret = qpercentbarseries_type_callback();
			return static_cast<QAbstractSeries::SeriesType>(callback_ret);
		} else {
			return QPercentBarSeries::type();
		}
	}
};

#endif


