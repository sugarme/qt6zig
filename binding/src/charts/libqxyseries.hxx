#pragma once
#ifndef QXYSERIES_H_C_LIBVIRTUAL
#define QXYSERIES_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QXYSeries so that we can call protected methods
class VirtualQXYSeries : public QXYSeries {

public:
	// Virtual class boolean flag
	bool isVirtualQXYSeries= true;

	// Virtual class public types (including callbacks)
	using QXYSeries_SetPen_Callback = void (*)(QXYSeries*, const QPen*);
	using QXYSeries_SetBrush_Callback = void (*)(QXYSeries*, const QBrush*);
	using QXYSeries_SetColor_Callback = void (*)(QXYSeries*, const QColor*);
	using QXYSeries_Color_Callback = QColor* (*)();

protected:
	// Instance callback storage
	mutable QXYSeries_SetPen_Callback qxyseries_setpen_callback = nullptr;
	mutable QXYSeries_SetBrush_Callback qxyseries_setbrush_callback = nullptr;
	mutable QXYSeries_SetColor_Callback qxyseries_setcolor_callback = nullptr;
	mutable QXYSeries_Color_Callback qxyseries_color_callback = nullptr;

	// Instance base flags
    mutable bool qxyseries_setpen_isbase = false;
    mutable bool qxyseries_setbrush_isbase = false;
    mutable bool qxyseries_setcolor_isbase = false;
    mutable bool qxyseries_color_isbase = false;

public:

	~VirtualQXYSeries() {
		qxyseries_setpen_callback = nullptr;
		qxyseries_setbrush_callback = nullptr;
		qxyseries_setcolor_callback = nullptr;
		qxyseries_color_callback = nullptr;
	}

// Callback setters
	inline void setQXYSeries_SetPen_Callback(QXYSeries_SetPen_Callback cb) const { qxyseries_setpen_callback = cb; }
	inline void setQXYSeries_SetBrush_Callback(QXYSeries_SetBrush_Callback cb) const { qxyseries_setbrush_callback = cb; }
	inline void setQXYSeries_SetColor_Callback(QXYSeries_SetColor_Callback cb) const { qxyseries_setcolor_callback = cb; }
	inline void setQXYSeries_Color_Callback(QXYSeries_Color_Callback cb) const { qxyseries_color_callback = cb; }

// Base flag setters
	inline void setQXYSeries_SetPen_IsBase(bool value) const { qxyseries_setpen_isbase = value; }
	inline void setQXYSeries_SetBrush_IsBase(bool value) const { qxyseries_setbrush_isbase = value; }
	inline void setQXYSeries_SetColor_IsBase(bool value) const { qxyseries_setcolor_isbase = value; }
	inline void setQXYSeries_Color_IsBase(bool value) const { qxyseries_color_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setPen(const QPen& pen) override {
		if (qxyseries_setpen_isbase) {
			qxyseries_setpen_isbase = false;
			QXYSeries::setPen(pen);
		} else if (qxyseries_setpen_callback != nullptr) {
			const QPen* cbval1 = (const QPen*)&pen;
			qxyseries_setpen_callback(this, cbval1);
		} else {
			QXYSeries::setPen(pen);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setBrush(const QBrush& brush) override {
		if (qxyseries_setbrush_isbase) {
			qxyseries_setbrush_isbase = false;
			QXYSeries::setBrush(brush);
		} else if (qxyseries_setbrush_callback != nullptr) {
			const QBrush* cbval1 = (const QBrush*)&brush;
			qxyseries_setbrush_callback(this, cbval1);
		} else {
			QXYSeries::setBrush(brush);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setColor(const QColor& color) override {
		if (qxyseries_setcolor_isbase) {
			qxyseries_setcolor_isbase = false;
			QXYSeries::setColor(color);
		} else if (qxyseries_setcolor_callback != nullptr) {
			const QColor* cbval1 = (const QColor*)&color;
			qxyseries_setcolor_callback(this, cbval1);
		} else {
			QXYSeries::setColor(color);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QColor color() const override {
		if (qxyseries_color_isbase) {
			qxyseries_color_isbase = false;
			return QXYSeries::color();
		} else if (qxyseries_color_callback != nullptr) {
			QColor* callback_ret = qxyseries_color_callback();
			return *callback_ret;
		} else {
			return QXYSeries::color();
		}
	}
};

#endif


