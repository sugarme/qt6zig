#pragma once
#ifndef QAREALEGENDMARKER_H_C_LIBVIRTUAL
#define QAREALEGENDMARKER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QAreaLegendMarker so that we can call protected methods
class VirtualQAreaLegendMarker final : public QAreaLegendMarker {

public:
	// Virtual class boolean flag
	bool isVirtualQAreaLegendMarker= true;

	// Virtual class public types (including callbacks)
	using QAreaLegendMarker_Type_Callback = int (*)();
	using QAreaLegendMarker_Series_Callback = QAreaSeries* (*)();

protected:
	// Instance callback storage
	mutable QAreaLegendMarker_Type_Callback qarealegendmarker_type_callback = nullptr;
	mutable QAreaLegendMarker_Series_Callback qarealegendmarker_series_callback = nullptr;

	// Instance base flags
    mutable bool qarealegendmarker_type_isbase = false;
    mutable bool qarealegendmarker_series_isbase = false;

public:
	VirtualQAreaLegendMarker(QAreaSeries* series, QLegend* legend): QAreaLegendMarker(series, legend) {};
	VirtualQAreaLegendMarker(QAreaSeries* series, QLegend* legend, QObject* parent): QAreaLegendMarker(series, legend, parent) {};

	~VirtualQAreaLegendMarker() {
		qarealegendmarker_type_callback = nullptr;
		qarealegendmarker_series_callback = nullptr;
	}

// Callback setters
	inline void setQAreaLegendMarker_Type_Callback(QAreaLegendMarker_Type_Callback cb) const { qarealegendmarker_type_callback = cb; }
	inline void setQAreaLegendMarker_Series_Callback(QAreaLegendMarker_Series_Callback cb) const { qarealegendmarker_series_callback = cb; }

// Base flag setters
	inline void setQAreaLegendMarker_Type_IsBase(bool value) const { qarealegendmarker_type_isbase = value; }
	inline void setQAreaLegendMarker_Series_IsBase(bool value) const { qarealegendmarker_series_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual LegendMarkerType type() override {
		if (qarealegendmarker_type_isbase) {
			qarealegendmarker_type_isbase = false;
			return QAreaLegendMarker::type();
		} else if (qarealegendmarker_type_callback != nullptr) {
			int callback_ret = qarealegendmarker_type_callback();
			return static_cast<QLegendMarker::LegendMarkerType>(callback_ret);
		} else {
			return QAreaLegendMarker::type();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAreaSeries* series() override {
		if (qarealegendmarker_series_isbase) {
			qarealegendmarker_series_isbase = false;
			return QAreaLegendMarker::series();
		} else if (qarealegendmarker_series_callback != nullptr) {
			QAreaSeries* callback_ret = qarealegendmarker_series_callback();
			return callback_ret;
		} else {
			return QAreaLegendMarker::series();
		}
	}
};

#endif


