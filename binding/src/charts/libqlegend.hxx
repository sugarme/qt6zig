#pragma once
#ifndef QLEGEND_H_C_LIBVIRTUAL
#define QLEGEND_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QLegend so that we can call protected methods
class VirtualQLegend final : public QLegend {

public:
	// Virtual class boolean flag
	bool isVirtualQLegend= true;

	// Virtual class public types (including callbacks)
	using QLegend_Paint_Callback = void (*)(QLegend*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
	using QLegend_HideEvent_Callback = void (*)(QLegend*, QHideEvent*);
	using QLegend_ShowEvent_Callback = void (*)(QLegend*, QShowEvent*);

protected:
	// Instance callback storage
	mutable QLegend_Paint_Callback qlegend_paint_callback = nullptr;
	mutable QLegend_HideEvent_Callback qlegend_hideevent_callback = nullptr;
	mutable QLegend_ShowEvent_Callback qlegend_showevent_callback = nullptr;

	// Instance base flags
    mutable bool qlegend_paint_isbase = false;
    mutable bool qlegend_hideevent_isbase = false;
    mutable bool qlegend_showevent_isbase = false;

public:

	~VirtualQLegend() {
		qlegend_paint_callback = nullptr;
		qlegend_hideevent_callback = nullptr;
		qlegend_showevent_callback = nullptr;
	}

// Callback setters
	inline void setQLegend_Paint_Callback(QLegend_Paint_Callback cb) const { qlegend_paint_callback = cb; }
	inline void setQLegend_HideEvent_Callback(QLegend_HideEvent_Callback cb) const { qlegend_hideevent_callback = cb; }
	inline void setQLegend_ShowEvent_Callback(QLegend_ShowEvent_Callback cb) const { qlegend_showevent_callback = cb; }

// Base flag setters
	inline void setQLegend_Paint_IsBase(bool value) const { qlegend_paint_isbase = value; }
	inline void setQLegend_HideEvent_IsBase(bool value) const { qlegend_hideevent_isbase = value; }
	inline void setQLegend_ShowEvent_IsBase(bool value) const { qlegend_showevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (qlegend_paint_isbase) {
			qlegend_paint_isbase = false;
			QLegend::paint(painter, option, widget);
		} else if (qlegend_paint_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionGraphicsItem* cbval2 = option;
			QWidget* cbval3 = widget;
			qlegend_paint_callback(this, cbval1, cbval2, cbval3);
		} else {
			QLegend::paint(painter, option, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hideEvent(QHideEvent* event) override {
		if (qlegend_hideevent_isbase) {
			qlegend_hideevent_isbase = false;
			QLegend::hideEvent(event);
		} else if (qlegend_hideevent_callback != nullptr) {
			QHideEvent* cbval1 = event;
			qlegend_hideevent_callback(this, cbval1);
		} else {
			QLegend::hideEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void showEvent(QShowEvent* event) override {
		if (qlegend_showevent_isbase) {
			qlegend_showevent_isbase = false;
			QLegend::showEvent(event);
		} else if (qlegend_showevent_callback != nullptr) {
			QShowEvent* cbval1 = event;
			qlegend_showevent_callback(this, cbval1);
		} else {
			QLegend::showEvent(event);
		}
	}

	// Friend functions
	friend void QLegend_HideEvent(QLegend* self, QHideEvent* event);
	friend void QLegend_QBaseHideEvent(QLegend* self, QHideEvent* event);
	friend void QLegend_ShowEvent(QLegend* self, QShowEvent* event);
	friend void QLegend_QBaseShowEvent(QLegend* self, QShowEvent* event);
};

#endif


