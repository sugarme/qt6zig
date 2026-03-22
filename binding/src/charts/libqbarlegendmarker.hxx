#pragma once
#ifndef QBARLEGENDMARKER_H_C_LIBVIRTUAL
#define QBARLEGENDMARKER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QBarLegendMarker so that we can call protected methods
class VirtualQBarLegendMarker final : public QBarLegendMarker {

public:
	// Virtual class boolean flag
	bool isVirtualQBarLegendMarker= true;

	// Virtual class public types (including callbacks)
	using QBarLegendMarker_Type_Callback = int (*)();
	using QBarLegendMarker_Series_Callback = QAbstractBarSeries* (*)();

protected:
	// Instance callback storage
	mutable QBarLegendMarker_Type_Callback qbarlegendmarker_type_callback = nullptr;
	mutable QBarLegendMarker_Series_Callback qbarlegendmarker_series_callback = nullptr;

	// Instance base flags
    mutable bool qbarlegendmarker_type_isbase = false;
    mutable bool qbarlegendmarker_series_isbase = false;

public:
	VirtualQBarLegendMarker(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend): QBarLegendMarker(series, barset, legend) {};
	VirtualQBarLegendMarker(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend, QObject* parent): QBarLegendMarker(series, barset, legend, parent) {};

	~VirtualQBarLegendMarker() {
		qbarlegendmarker_type_callback = nullptr;
		qbarlegendmarker_series_callback = nullptr;
	}

// Callback setters
	inline void setQBarLegendMarker_Type_Callback(QBarLegendMarker_Type_Callback cb) const { qbarlegendmarker_type_callback = cb; }
	inline void setQBarLegendMarker_Series_Callback(QBarLegendMarker_Series_Callback cb) const { qbarlegendmarker_series_callback = cb; }

// Base flag setters
	inline void setQBarLegendMarker_Type_IsBase(bool value) const { qbarlegendmarker_type_isbase = value; }
	inline void setQBarLegendMarker_Series_IsBase(bool value) const { qbarlegendmarker_series_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual LegendMarkerType type() override {
		if (qbarlegendmarker_type_isbase) {
			qbarlegendmarker_type_isbase = false;
			return QBarLegendMarker::type();
		} else if (qbarlegendmarker_type_callback != nullptr) {
			int callback_ret = qbarlegendmarker_type_callback();
			return static_cast<QLegendMarker::LegendMarkerType>(callback_ret);
		} else {
			return QBarLegendMarker::type();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAbstractBarSeries* series() override {
		if (qbarlegendmarker_series_isbase) {
			qbarlegendmarker_series_isbase = false;
			return QBarLegendMarker::series();
		} else if (qbarlegendmarker_series_callback != nullptr) {
			QAbstractBarSeries* callback_ret = qbarlegendmarker_series_callback();
			return callback_ret;
		} else {
			return QBarLegendMarker::series();
		}
	}
};

#endif


