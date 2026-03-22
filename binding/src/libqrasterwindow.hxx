#pragma once
#ifndef QRASTERWINDOW_H_C_LIBVIRTUAL
#define QRASTERWINDOW_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QRasterWindow so that we can call protected methods
class VirtualQRasterWindow final : public QRasterWindow {

public:
	// Virtual class boolean flag
	bool isVirtualQRasterWindow= true;

	// Virtual class public types (including callbacks)
	using QRasterWindow_Metric_Callback = int (*)(const QRasterWindow*, int);
	using QRasterWindow_Redirected_Callback = QPaintDevice* (*)(const QRasterWindow*, QPoint*);
	using QRasterWindow_ResizeEvent_Callback = void (*)(QRasterWindow*, QResizeEvent*);

protected:
	// Instance callback storage
	mutable QRasterWindow_Metric_Callback qrasterwindow_metric_callback = nullptr;
	mutable QRasterWindow_Redirected_Callback qrasterwindow_redirected_callback = nullptr;
	mutable QRasterWindow_ResizeEvent_Callback qrasterwindow_resizeevent_callback = nullptr;

	// Instance base flags
    mutable bool qrasterwindow_metric_isbase = false;
    mutable bool qrasterwindow_redirected_isbase = false;
    mutable bool qrasterwindow_resizeevent_isbase = false;

public:
	VirtualQRasterWindow(): QRasterWindow() {};
	VirtualQRasterWindow(QWindow* parent): QRasterWindow(parent) {};

	~VirtualQRasterWindow() {
		qrasterwindow_metric_callback = nullptr;
		qrasterwindow_redirected_callback = nullptr;
		qrasterwindow_resizeevent_callback = nullptr;
	}

// Callback setters
	inline void setQRasterWindow_Metric_Callback(QRasterWindow_Metric_Callback cb) const { qrasterwindow_metric_callback = cb; }
	inline void setQRasterWindow_Redirected_Callback(QRasterWindow_Redirected_Callback cb) const { qrasterwindow_redirected_callback = cb; }
	inline void setQRasterWindow_ResizeEvent_Callback(QRasterWindow_ResizeEvent_Callback cb) const { qrasterwindow_resizeevent_callback = cb; }

// Base flag setters
	inline void setQRasterWindow_Metric_IsBase(bool value) const { qrasterwindow_metric_isbase = value; }
	inline void setQRasterWindow_Redirected_IsBase(bool value) const { qrasterwindow_redirected_isbase = value; }
	inline void setQRasterWindow_ResizeEvent_IsBase(bool value) const { qrasterwindow_resizeevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual int metric(PaintDeviceMetric metric) const override {
		if (qrasterwindow_metric_isbase) {
			qrasterwindow_metric_isbase = false;
			return QRasterWindow::metric(metric);
		} else if (qrasterwindow_metric_callback != nullptr) {
			int cbval1 = static_cast<int>(metric);
			int callback_ret = qrasterwindow_metric_callback(this, cbval1);
			return callback_ret;
		} else {
			return QRasterWindow::metric(metric);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPaintDevice* redirected(QPoint* param1) const override {
		if (qrasterwindow_redirected_isbase) {
			qrasterwindow_redirected_isbase = false;
			return QRasterWindow::redirected(param1);
		} else if (qrasterwindow_redirected_callback != nullptr) {
			QPoint* cbval1 = param1;
			QPaintDevice* callback_ret = qrasterwindow_redirected_callback(this, cbval1);
			return callback_ret;
		} else {
			return QRasterWindow::redirected(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* event) override {
		if (qrasterwindow_resizeevent_isbase) {
			qrasterwindow_resizeevent_isbase = false;
			QRasterWindow::resizeEvent(event);
		} else if (qrasterwindow_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = event;
			qrasterwindow_resizeevent_callback(this, cbval1);
		} else {
			QRasterWindow::resizeEvent(event);
		}
	}

	// Friend functions
	friend int QRasterWindow_Metric(const QRasterWindow* self, int metric);
	friend int QRasterWindow_QBaseMetric(const QRasterWindow* self, int metric);
	friend QPaintDevice* QRasterWindow_Redirected(const QRasterWindow* self, QPoint* param1);
	friend QPaintDevice* QRasterWindow_QBaseRedirected(const QRasterWindow* self, QPoint* param1);
	friend void QRasterWindow_ResizeEvent(QRasterWindow* self, QResizeEvent* event);
	friend void QRasterWindow_QBaseResizeEvent(QRasterWindow* self, QResizeEvent* event);
};

#endif


