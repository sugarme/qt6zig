#pragma once
#ifndef QBARSERIES_H_C_LIBVIRTUAL
#define QBARSERIES_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QBarSeries so that we can call protected methods
class VirtualQBarSeries final : public QBarSeries {

public:
	// Virtual class boolean flag
	bool isVirtualQBarSeries= true;

	// Virtual class public types (including callbacks)
	using QBarSeries_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QBarSeries_Type_Callback qbarseries_type_callback = nullptr;

	// Instance base flags
    mutable bool qbarseries_type_isbase = false;

public:
	VirtualQBarSeries(): QBarSeries() {};
	VirtualQBarSeries(QObject* parent): QBarSeries(parent) {};

	~VirtualQBarSeries() {
		qbarseries_type_callback = nullptr;
	}

// Callback setters
	inline void setQBarSeries_Type_Callback(QBarSeries_Type_Callback cb) const { qbarseries_type_callback = cb; }

// Base flag setters
	inline void setQBarSeries_Type_IsBase(bool value) const { qbarseries_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QAbstractSeries::SeriesType type() const override {
		if (qbarseries_type_isbase) {
			qbarseries_type_isbase = false;
			return QBarSeries::type();
		} else if (qbarseries_type_callback != nullptr) {
			int callback_ret = qbarseries_type_callback();
			return static_cast<QAbstractSeries::SeriesType>(callback_ret);
		} else {
			return QBarSeries::type();
		}
	}
};

#endif


