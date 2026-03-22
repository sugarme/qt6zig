#pragma once
#ifndef QPIELEGENDMARKER_H_C_LIBVIRTUAL
#define QPIELEGENDMARKER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QPieLegendMarker so that we can call protected methods
class VirtualQPieLegendMarker final : public QPieLegendMarker {

public:
	// Virtual class boolean flag
	bool isVirtualQPieLegendMarker= true;

	// Virtual class public types (including callbacks)
	using QPieLegendMarker_Type_Callback = int (*)();
	using QPieLegendMarker_Series_Callback = QPieSeries* (*)();

protected:
	// Instance callback storage
	mutable QPieLegendMarker_Type_Callback qpielegendmarker_type_callback = nullptr;
	mutable QPieLegendMarker_Series_Callback qpielegendmarker_series_callback = nullptr;

	// Instance base flags
    mutable bool qpielegendmarker_type_isbase = false;
    mutable bool qpielegendmarker_series_isbase = false;

public:
	VirtualQPieLegendMarker(QPieSeries* series, QPieSlice* slice, QLegend* legend): QPieLegendMarker(series, slice, legend) {};
	VirtualQPieLegendMarker(QPieSeries* series, QPieSlice* slice, QLegend* legend, QObject* parent): QPieLegendMarker(series, slice, legend, parent) {};

	~VirtualQPieLegendMarker() {
		qpielegendmarker_type_callback = nullptr;
		qpielegendmarker_series_callback = nullptr;
	}

// Callback setters
	inline void setQPieLegendMarker_Type_Callback(QPieLegendMarker_Type_Callback cb) const { qpielegendmarker_type_callback = cb; }
	inline void setQPieLegendMarker_Series_Callback(QPieLegendMarker_Series_Callback cb) const { qpielegendmarker_series_callback = cb; }

// Base flag setters
	inline void setQPieLegendMarker_Type_IsBase(bool value) const { qpielegendmarker_type_isbase = value; }
	inline void setQPieLegendMarker_Series_IsBase(bool value) const { qpielegendmarker_series_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual LegendMarkerType type() override {
		if (qpielegendmarker_type_isbase) {
			qpielegendmarker_type_isbase = false;
			return QPieLegendMarker::type();
		} else if (qpielegendmarker_type_callback != nullptr) {
			int callback_ret = qpielegendmarker_type_callback();
			return static_cast<QLegendMarker::LegendMarkerType>(callback_ret);
		} else {
			return QPieLegendMarker::type();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPieSeries* series() override {
		if (qpielegendmarker_series_isbase) {
			qpielegendmarker_series_isbase = false;
			return QPieLegendMarker::series();
		} else if (qpielegendmarker_series_callback != nullptr) {
			QPieSeries* callback_ret = qpielegendmarker_series_callback();
			return callback_ret;
		} else {
			return QPieLegendMarker::series();
		}
	}
};

#endif


