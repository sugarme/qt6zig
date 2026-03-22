#pragma once
#ifndef QLEGENDMARKER_H_C_LIBVIRTUAL
#define QLEGENDMARKER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QLegendMarker so that we can call protected methods
class VirtualQLegendMarker : public QLegendMarker {

public:
	// Virtual class boolean flag
	bool isVirtualQLegendMarker= true;

	// Virtual class public types (including callbacks)
	using QLegendMarker_Type_Callback = int (*)();
	using QLegendMarker_Series_Callback = QAbstractSeries* (*)();

protected:
	// Instance callback storage
	mutable QLegendMarker_Type_Callback qlegendmarker_type_callback = nullptr;
	mutable QLegendMarker_Series_Callback qlegendmarker_series_callback = nullptr;

	// Instance base flags
    mutable bool qlegendmarker_type_isbase = false;
    mutable bool qlegendmarker_series_isbase = false;

public:

	~VirtualQLegendMarker() {
		qlegendmarker_type_callback = nullptr;
		qlegendmarker_series_callback = nullptr;
	}

// Callback setters
	inline void setQLegendMarker_Type_Callback(QLegendMarker_Type_Callback cb) const { qlegendmarker_type_callback = cb; }
	inline void setQLegendMarker_Series_Callback(QLegendMarker_Series_Callback cb) const { qlegendmarker_series_callback = cb; }

// Base flag setters
	inline void setQLegendMarker_Type_IsBase(bool value) const { qlegendmarker_type_isbase = value; }
	inline void setQLegendMarker_Series_IsBase(bool value) const { qlegendmarker_series_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual LegendMarkerType type() override {
		if (qlegendmarker_type_callback != nullptr) {
			int callback_ret = qlegendmarker_type_callback();
			return static_cast<QLegendMarker::LegendMarkerType>(callback_ret);
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAbstractSeries* series() override {
		if (qlegendmarker_series_callback != nullptr) {
			QAbstractSeries* callback_ret = qlegendmarker_series_callback();
			return callback_ret;
		} else {
			return {};
		}
	}
};

#endif


