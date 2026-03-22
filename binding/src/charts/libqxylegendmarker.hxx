#pragma once
#ifndef QXYLEGENDMARKER_H_C_LIBVIRTUAL
#define QXYLEGENDMARKER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QXYLegendMarker so that we can call protected methods
class VirtualQXYLegendMarker final : public QXYLegendMarker {

public:
	// Virtual class boolean flag
	bool isVirtualQXYLegendMarker= true;

	// Virtual class public types (including callbacks)
	using QXYLegendMarker_Type_Callback = int (*)();
	using QXYLegendMarker_Series_Callback = QXYSeries* (*)();

protected:
	// Instance callback storage
	mutable QXYLegendMarker_Type_Callback qxylegendmarker_type_callback = nullptr;
	mutable QXYLegendMarker_Series_Callback qxylegendmarker_series_callback = nullptr;

	// Instance base flags
    mutable bool qxylegendmarker_type_isbase = false;
    mutable bool qxylegendmarker_series_isbase = false;

public:
	VirtualQXYLegendMarker(QXYSeries* series, QLegend* legend): QXYLegendMarker(series, legend) {};
	VirtualQXYLegendMarker(QXYSeries* series, QLegend* legend, QObject* parent): QXYLegendMarker(series, legend, parent) {};

	~VirtualQXYLegendMarker() {
		qxylegendmarker_type_callback = nullptr;
		qxylegendmarker_series_callback = nullptr;
	}

// Callback setters
	inline void setQXYLegendMarker_Type_Callback(QXYLegendMarker_Type_Callback cb) const { qxylegendmarker_type_callback = cb; }
	inline void setQXYLegendMarker_Series_Callback(QXYLegendMarker_Series_Callback cb) const { qxylegendmarker_series_callback = cb; }

// Base flag setters
	inline void setQXYLegendMarker_Type_IsBase(bool value) const { qxylegendmarker_type_isbase = value; }
	inline void setQXYLegendMarker_Series_IsBase(bool value) const { qxylegendmarker_series_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual LegendMarkerType type() override {
		if (qxylegendmarker_type_isbase) {
			qxylegendmarker_type_isbase = false;
			return QXYLegendMarker::type();
		} else if (qxylegendmarker_type_callback != nullptr) {
			int callback_ret = qxylegendmarker_type_callback();
			return static_cast<QLegendMarker::LegendMarkerType>(callback_ret);
		} else {
			return QXYLegendMarker::type();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QXYSeries* series() override {
		if (qxylegendmarker_series_isbase) {
			qxylegendmarker_series_isbase = false;
			return QXYLegendMarker::series();
		} else if (qxylegendmarker_series_callback != nullptr) {
			QXYSeries* callback_ret = qxylegendmarker_series_callback();
			return callback_ret;
		} else {
			return QXYLegendMarker::series();
		}
	}
};

#endif


