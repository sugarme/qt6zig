#pragma once
#ifndef QBOXPLOTLEGENDMARKER_H_C_LIBVIRTUAL
#define QBOXPLOTLEGENDMARKER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QBoxPlotLegendMarker so that we can call protected methods
class VirtualQBoxPlotLegendMarker final : public QBoxPlotLegendMarker {

public:
	// Virtual class boolean flag
	bool isVirtualQBoxPlotLegendMarker= true;

	// Virtual class public types (including callbacks)
	using QBoxPlotLegendMarker_Type_Callback = int (*)();
	using QBoxPlotLegendMarker_Series_Callback = QBoxPlotSeries* (*)();

protected:
	// Instance callback storage
	mutable QBoxPlotLegendMarker_Type_Callback qboxplotlegendmarker_type_callback = nullptr;
	mutable QBoxPlotLegendMarker_Series_Callback qboxplotlegendmarker_series_callback = nullptr;

	// Instance base flags
    mutable bool qboxplotlegendmarker_type_isbase = false;
    mutable bool qboxplotlegendmarker_series_isbase = false;

public:
	VirtualQBoxPlotLegendMarker(QBoxPlotSeries* series, QLegend* legend): QBoxPlotLegendMarker(series, legend) {};
	VirtualQBoxPlotLegendMarker(QBoxPlotSeries* series, QLegend* legend, QObject* parent): QBoxPlotLegendMarker(series, legend, parent) {};

	~VirtualQBoxPlotLegendMarker() {
		qboxplotlegendmarker_type_callback = nullptr;
		qboxplotlegendmarker_series_callback = nullptr;
	}

// Callback setters
	inline void setQBoxPlotLegendMarker_Type_Callback(QBoxPlotLegendMarker_Type_Callback cb) const { qboxplotlegendmarker_type_callback = cb; }
	inline void setQBoxPlotLegendMarker_Series_Callback(QBoxPlotLegendMarker_Series_Callback cb) const { qboxplotlegendmarker_series_callback = cb; }

// Base flag setters
	inline void setQBoxPlotLegendMarker_Type_IsBase(bool value) const { qboxplotlegendmarker_type_isbase = value; }
	inline void setQBoxPlotLegendMarker_Series_IsBase(bool value) const { qboxplotlegendmarker_series_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual LegendMarkerType type() override {
		if (qboxplotlegendmarker_type_isbase) {
			qboxplotlegendmarker_type_isbase = false;
			return QBoxPlotLegendMarker::type();
		} else if (qboxplotlegendmarker_type_callback != nullptr) {
			int callback_ret = qboxplotlegendmarker_type_callback();
			return static_cast<QLegendMarker::LegendMarkerType>(callback_ret);
		} else {
			return QBoxPlotLegendMarker::type();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QBoxPlotSeries* series() override {
		if (qboxplotlegendmarker_series_isbase) {
			qboxplotlegendmarker_series_isbase = false;
			return QBoxPlotLegendMarker::series();
		} else if (qboxplotlegendmarker_series_callback != nullptr) {
			QBoxPlotSeries* callback_ret = qboxplotlegendmarker_series_callback();
			return callback_ret;
		} else {
			return QBoxPlotLegendMarker::series();
		}
	}
};

#endif


