#pragma once
#ifndef QCANDLESTICKLEGENDMARKER_H_C_LIBVIRTUAL
#define QCANDLESTICKLEGENDMARKER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QCandlestickLegendMarker so that we can call protected methods
class VirtualQCandlestickLegendMarker final : public QCandlestickLegendMarker {

public:
	// Virtual class boolean flag
	bool isVirtualQCandlestickLegendMarker= true;

	// Virtual class public types (including callbacks)
	using QCandlestickLegendMarker_Type_Callback = int (*)();
	using QCandlestickLegendMarker_Series_Callback = QCandlestickSeries* (*)();

protected:
	// Instance callback storage
	mutable QCandlestickLegendMarker_Type_Callback qcandlesticklegendmarker_type_callback = nullptr;
	mutable QCandlestickLegendMarker_Series_Callback qcandlesticklegendmarker_series_callback = nullptr;

	// Instance base flags
    mutable bool qcandlesticklegendmarker_type_isbase = false;
    mutable bool qcandlesticklegendmarker_series_isbase = false;

public:
	VirtualQCandlestickLegendMarker(QCandlestickSeries* series, QLegend* legend): QCandlestickLegendMarker(series, legend) {};
	VirtualQCandlestickLegendMarker(QCandlestickSeries* series, QLegend* legend, QObject* parent): QCandlestickLegendMarker(series, legend, parent) {};

	~VirtualQCandlestickLegendMarker() {
		qcandlesticklegendmarker_type_callback = nullptr;
		qcandlesticklegendmarker_series_callback = nullptr;
	}

// Callback setters
	inline void setQCandlestickLegendMarker_Type_Callback(QCandlestickLegendMarker_Type_Callback cb) const { qcandlesticklegendmarker_type_callback = cb; }
	inline void setQCandlestickLegendMarker_Series_Callback(QCandlestickLegendMarker_Series_Callback cb) const { qcandlesticklegendmarker_series_callback = cb; }

// Base flag setters
	inline void setQCandlestickLegendMarker_Type_IsBase(bool value) const { qcandlesticklegendmarker_type_isbase = value; }
	inline void setQCandlestickLegendMarker_Series_IsBase(bool value) const { qcandlesticklegendmarker_series_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual LegendMarkerType type() override {
		if (qcandlesticklegendmarker_type_isbase) {
			qcandlesticklegendmarker_type_isbase = false;
			return QCandlestickLegendMarker::type();
		} else if (qcandlesticklegendmarker_type_callback != nullptr) {
			int callback_ret = qcandlesticklegendmarker_type_callback();
			return static_cast<QLegendMarker::LegendMarkerType>(callback_ret);
		} else {
			return QCandlestickLegendMarker::type();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QCandlestickSeries* series() override {
		if (qcandlesticklegendmarker_series_isbase) {
			qcandlesticklegendmarker_series_isbase = false;
			return QCandlestickLegendMarker::series();
		} else if (qcandlesticklegendmarker_series_callback != nullptr) {
			QCandlestickSeries* callback_ret = qcandlesticklegendmarker_series_callback();
			return callback_ret;
		} else {
			return QCandlestickLegendMarker::series();
		}
	}
};

#endif


