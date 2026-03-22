#pragma once
#ifndef QSTACKEDBARSERIES_H_C_LIBVIRTUAL
#define QSTACKEDBARSERIES_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QStackedBarSeries so that we can call protected methods
class VirtualQStackedBarSeries final : public QStackedBarSeries {

public:
	// Virtual class boolean flag
	bool isVirtualQStackedBarSeries= true;

	// Virtual class public types (including callbacks)
	using QStackedBarSeries_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QStackedBarSeries_Type_Callback qstackedbarseries_type_callback = nullptr;

	// Instance base flags
    mutable bool qstackedbarseries_type_isbase = false;

public:
	VirtualQStackedBarSeries(): QStackedBarSeries() {};
	VirtualQStackedBarSeries(QObject* parent): QStackedBarSeries(parent) {};

	~VirtualQStackedBarSeries() {
		qstackedbarseries_type_callback = nullptr;
	}

// Callback setters
	inline void setQStackedBarSeries_Type_Callback(QStackedBarSeries_Type_Callback cb) const { qstackedbarseries_type_callback = cb; }

// Base flag setters
	inline void setQStackedBarSeries_Type_IsBase(bool value) const { qstackedbarseries_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QAbstractSeries::SeriesType type() const override {
		if (qstackedbarseries_type_isbase) {
			qstackedbarseries_type_isbase = false;
			return QStackedBarSeries::type();
		} else if (qstackedbarseries_type_callback != nullptr) {
			int callback_ret = qstackedbarseries_type_callback();
			return static_cast<QAbstractSeries::SeriesType>(callback_ret);
		} else {
			return QStackedBarSeries::type();
		}
	}
};

#endif


