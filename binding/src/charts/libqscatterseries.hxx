#pragma once
#ifndef QSCATTERSERIES_H_C_LIBVIRTUAL
#define QSCATTERSERIES_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QScatterSeries so that we can call protected methods
class VirtualQScatterSeries final : public QScatterSeries {

public:
	// Virtual class boolean flag
	bool isVirtualQScatterSeries= true;

	// Virtual class public types (including callbacks)
	using QScatterSeries_Type_Callback = int (*)();
	using QScatterSeries_SetPen_Callback = void (*)(QScatterSeries*, const QPen*);
	using QScatterSeries_SetBrush_Callback = void (*)(QScatterSeries*, const QBrush*);
	using QScatterSeries_SetColor_Callback = void (*)(QScatterSeries*, const QColor*);
	using QScatterSeries_Color_Callback = QColor* (*)();

protected:
	// Instance callback storage
	mutable QScatterSeries_Type_Callback qscatterseries_type_callback = nullptr;
	mutable QScatterSeries_SetPen_Callback qscatterseries_setpen_callback = nullptr;
	mutable QScatterSeries_SetBrush_Callback qscatterseries_setbrush_callback = nullptr;
	mutable QScatterSeries_SetColor_Callback qscatterseries_setcolor_callback = nullptr;
	mutable QScatterSeries_Color_Callback qscatterseries_color_callback = nullptr;

	// Instance base flags
    mutable bool qscatterseries_type_isbase = false;
    mutable bool qscatterseries_setpen_isbase = false;
    mutable bool qscatterseries_setbrush_isbase = false;
    mutable bool qscatterseries_setcolor_isbase = false;
    mutable bool qscatterseries_color_isbase = false;

public:
	VirtualQScatterSeries(): QScatterSeries() {};
	VirtualQScatterSeries(QObject* parent): QScatterSeries(parent) {};

	~VirtualQScatterSeries() {
		qscatterseries_type_callback = nullptr;
		qscatterseries_setpen_callback = nullptr;
		qscatterseries_setbrush_callback = nullptr;
		qscatterseries_setcolor_callback = nullptr;
		qscatterseries_color_callback = nullptr;
	}

// Callback setters
	inline void setQScatterSeries_Type_Callback(QScatterSeries_Type_Callback cb) const { qscatterseries_type_callback = cb; }
	inline void setQScatterSeries_SetPen_Callback(QScatterSeries_SetPen_Callback cb) const { qscatterseries_setpen_callback = cb; }
	inline void setQScatterSeries_SetBrush_Callback(QScatterSeries_SetBrush_Callback cb) const { qscatterseries_setbrush_callback = cb; }
	inline void setQScatterSeries_SetColor_Callback(QScatterSeries_SetColor_Callback cb) const { qscatterseries_setcolor_callback = cb; }
	inline void setQScatterSeries_Color_Callback(QScatterSeries_Color_Callback cb) const { qscatterseries_color_callback = cb; }

// Base flag setters
	inline void setQScatterSeries_Type_IsBase(bool value) const { qscatterseries_type_isbase = value; }
	inline void setQScatterSeries_SetPen_IsBase(bool value) const { qscatterseries_setpen_isbase = value; }
	inline void setQScatterSeries_SetBrush_IsBase(bool value) const { qscatterseries_setbrush_isbase = value; }
	inline void setQScatterSeries_SetColor_IsBase(bool value) const { qscatterseries_setcolor_isbase = value; }
	inline void setQScatterSeries_Color_IsBase(bool value) const { qscatterseries_color_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QAbstractSeries::SeriesType type() const override {
		if (qscatterseries_type_isbase) {
			qscatterseries_type_isbase = false;
			return QScatterSeries::type();
		} else if (qscatterseries_type_callback != nullptr) {
			int callback_ret = qscatterseries_type_callback();
			return static_cast<QAbstractSeries::SeriesType>(callback_ret);
		} else {
			return QScatterSeries::type();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setPen(const QPen& pen) override {
		if (qscatterseries_setpen_isbase) {
			qscatterseries_setpen_isbase = false;
			QScatterSeries::setPen(pen);
		} else if (qscatterseries_setpen_callback != nullptr) {
			const QPen* cbval1 = (const QPen*)&pen;
			qscatterseries_setpen_callback(this, cbval1);
		} else {
			QScatterSeries::setPen(pen);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setBrush(const QBrush& brush) override {
		if (qscatterseries_setbrush_isbase) {
			qscatterseries_setbrush_isbase = false;
			QScatterSeries::setBrush(brush);
		} else if (qscatterseries_setbrush_callback != nullptr) {
			const QBrush* cbval1 = (const QBrush*)&brush;
			qscatterseries_setbrush_callback(this, cbval1);
		} else {
			QScatterSeries::setBrush(brush);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setColor(const QColor& color) override {
		if (qscatterseries_setcolor_isbase) {
			qscatterseries_setcolor_isbase = false;
			QScatterSeries::setColor(color);
		} else if (qscatterseries_setcolor_callback != nullptr) {
			const QColor* cbval1 = (const QColor*)&color;
			qscatterseries_setcolor_callback(this, cbval1);
		} else {
			QScatterSeries::setColor(color);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QColor color() const override {
		if (qscatterseries_color_isbase) {
			qscatterseries_color_isbase = false;
			return QScatterSeries::color();
		} else if (qscatterseries_color_callback != nullptr) {
			QColor* callback_ret = qscatterseries_color_callback();
			return *callback_ret;
		} else {
			return QScatterSeries::color();
		}
	}
};

#endif


