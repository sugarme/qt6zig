#pragma once
#ifndef QPAINTDEVICEWINDOW_H_C_LIBVIRTUAL
#define QPAINTDEVICEWINDOW_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QPaintDeviceWindow so that we can call protected methods
class VirtualQPaintDeviceWindow final : public QPaintDeviceWindow {

public:
	// Virtual class boolean flag
	bool isVirtualQPaintDeviceWindow= true;

	// Virtual class public types (including callbacks)
	using QPaintDeviceWindow_ExposeEvent_Callback = void (*)(QPaintDeviceWindow*, QExposeEvent*);
	using QPaintDeviceWindow_PaintEvent_Callback = void (*)(QPaintDeviceWindow*, QPaintEvent*);
	using QPaintDeviceWindow_Metric_Callback = int (*)(const QPaintDeviceWindow*, int);
	using QPaintDeviceWindow_Event_Callback = bool (*)(QPaintDeviceWindow*, QEvent*);

protected:
	// Instance callback storage
	mutable QPaintDeviceWindow_ExposeEvent_Callback qpaintdevicewindow_exposeevent_callback = nullptr;
	mutable QPaintDeviceWindow_PaintEvent_Callback qpaintdevicewindow_paintevent_callback = nullptr;
	mutable QPaintDeviceWindow_Metric_Callback qpaintdevicewindow_metric_callback = nullptr;
	mutable QPaintDeviceWindow_Event_Callback qpaintdevicewindow_event_callback = nullptr;

	// Instance base flags
    mutable bool qpaintdevicewindow_exposeevent_isbase = false;
    mutable bool qpaintdevicewindow_paintevent_isbase = false;
    mutable bool qpaintdevicewindow_metric_isbase = false;
    mutable bool qpaintdevicewindow_event_isbase = false;

public:

	~VirtualQPaintDeviceWindow() {
		qpaintdevicewindow_exposeevent_callback = nullptr;
		qpaintdevicewindow_paintevent_callback = nullptr;
		qpaintdevicewindow_metric_callback = nullptr;
		qpaintdevicewindow_event_callback = nullptr;
	}

// Callback setters
	inline void setQPaintDeviceWindow_ExposeEvent_Callback(QPaintDeviceWindow_ExposeEvent_Callback cb) const { qpaintdevicewindow_exposeevent_callback = cb; }
	inline void setQPaintDeviceWindow_PaintEvent_Callback(QPaintDeviceWindow_PaintEvent_Callback cb) const { qpaintdevicewindow_paintevent_callback = cb; }
	inline void setQPaintDeviceWindow_Metric_Callback(QPaintDeviceWindow_Metric_Callback cb) const { qpaintdevicewindow_metric_callback = cb; }
	inline void setQPaintDeviceWindow_Event_Callback(QPaintDeviceWindow_Event_Callback cb) const { qpaintdevicewindow_event_callback = cb; }

// Base flag setters
	inline void setQPaintDeviceWindow_ExposeEvent_IsBase(bool value) const { qpaintdevicewindow_exposeevent_isbase = value; }
	inline void setQPaintDeviceWindow_PaintEvent_IsBase(bool value) const { qpaintdevicewindow_paintevent_isbase = value; }
	inline void setQPaintDeviceWindow_Metric_IsBase(bool value) const { qpaintdevicewindow_metric_isbase = value; }
	inline void setQPaintDeviceWindow_Event_IsBase(bool value) const { qpaintdevicewindow_event_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void exposeEvent(QExposeEvent* param1) override {
		if (qpaintdevicewindow_exposeevent_isbase) {
			qpaintdevicewindow_exposeevent_isbase = false;
			QPaintDeviceWindow::exposeEvent(param1);
		} else if (qpaintdevicewindow_exposeevent_callback != nullptr) {
			QExposeEvent* cbval1 = param1;
			qpaintdevicewindow_exposeevent_callback(this, cbval1);
		} else {
			QPaintDeviceWindow::exposeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* event) override {
		if (qpaintdevicewindow_paintevent_isbase) {
			qpaintdevicewindow_paintevent_isbase = false;
			QPaintDeviceWindow::paintEvent(event);
		} else if (qpaintdevicewindow_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = event;
			qpaintdevicewindow_paintevent_callback(this, cbval1);
		} else {
			QPaintDeviceWindow::paintEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int metric(PaintDeviceMetric metric) const override {
		if (qpaintdevicewindow_metric_isbase) {
			qpaintdevicewindow_metric_isbase = false;
			return QPaintDeviceWindow::metric(metric);
		} else if (qpaintdevicewindow_metric_callback != nullptr) {
			int cbval1 = static_cast<int>(metric);
			int callback_ret = qpaintdevicewindow_metric_callback(this, cbval1);
			return callback_ret;
		} else {
			return QPaintDeviceWindow::metric(metric);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qpaintdevicewindow_event_isbase) {
			qpaintdevicewindow_event_isbase = false;
			return QPaintDeviceWindow::event(event);
		} else if (qpaintdevicewindow_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qpaintdevicewindow_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QPaintDeviceWindow::event(event);
		}
	}

	// Friend functions
	friend void QPaintDeviceWindow_ExposeEvent(QPaintDeviceWindow* self, QExposeEvent* param1);
	friend void QPaintDeviceWindow_QBaseExposeEvent(QPaintDeviceWindow* self, QExposeEvent* param1);
	friend void QPaintDeviceWindow_PaintEvent(QPaintDeviceWindow* self, QPaintEvent* event);
	friend void QPaintDeviceWindow_QBasePaintEvent(QPaintDeviceWindow* self, QPaintEvent* event);
	friend int QPaintDeviceWindow_Metric(const QPaintDeviceWindow* self, int metric);
	friend int QPaintDeviceWindow_QBaseMetric(const QPaintDeviceWindow* self, int metric);
	friend bool QPaintDeviceWindow_Event(QPaintDeviceWindow* self, QEvent* event);
	friend bool QPaintDeviceWindow_QBaseEvent(QPaintDeviceWindow* self, QEvent* event);
};

#endif


