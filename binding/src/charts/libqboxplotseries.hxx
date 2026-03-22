#pragma once
#ifndef QBOXPLOTSERIES_H_C_LIBVIRTUAL
#define QBOXPLOTSERIES_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QBoxPlotSeries so that we can call protected methods
class VirtualQBoxPlotSeries final : public QBoxPlotSeries {

public:
	// Virtual class boolean flag
	bool isVirtualQBoxPlotSeries= true;

	// Virtual class public types (including callbacks)
	using QBoxPlotSeries_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QBoxPlotSeries_Type_Callback qboxplotseries_type_callback = nullptr;

	// Instance base flags
    mutable bool qboxplotseries_type_isbase = false;

public:
	VirtualQBoxPlotSeries(): QBoxPlotSeries() {};
	VirtualQBoxPlotSeries(QObject* parent): QBoxPlotSeries(parent) {};

	~VirtualQBoxPlotSeries() {
		qboxplotseries_type_callback = nullptr;
	}

// Callback setters
	inline void setQBoxPlotSeries_Type_Callback(QBoxPlotSeries_Type_Callback cb) const { qboxplotseries_type_callback = cb; }

// Base flag setters
	inline void setQBoxPlotSeries_Type_IsBase(bool value) const { qboxplotseries_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QAbstractSeries::SeriesType type() const override {
		if (qboxplotseries_type_isbase) {
			qboxplotseries_type_isbase = false;
			return QBoxPlotSeries::type();
		} else if (qboxplotseries_type_callback != nullptr) {
			int callback_ret = qboxplotseries_type_callback();
			return static_cast<QAbstractSeries::SeriesType>(callback_ret);
		} else {
			return QBoxPlotSeries::type();
		}
	}
};

#endif


