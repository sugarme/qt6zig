#pragma once
#ifndef QABSTRACTSERIES_H_C_LIBVIRTUAL
#define QABSTRACTSERIES_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QAbstractSeries so that we can call protected methods
class VirtualQAbstractSeries : public QAbstractSeries {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractSeries= true;

	// Virtual class public types (including callbacks)
	using QAbstractSeries_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QAbstractSeries_Type_Callback qabstractseries_type_callback = nullptr;

	// Instance base flags
    mutable bool qabstractseries_type_isbase = false;

public:

	~VirtualQAbstractSeries() {
		qabstractseries_type_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractSeries_Type_Callback(QAbstractSeries_Type_Callback cb) const { qabstractseries_type_callback = cb; }

// Base flag setters
	inline void setQAbstractSeries_Type_IsBase(bool value) const { qabstractseries_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual SeriesType type() const override {
		if (qabstractseries_type_callback != nullptr) {
			int callback_ret = qabstractseries_type_callback();
			return static_cast<QAbstractSeries::SeriesType>(callback_ret);
		} else {
			return {};
		}
	}
};

#endif


