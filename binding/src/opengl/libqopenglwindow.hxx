#pragma once
#ifndef QOPENGLWINDOW_H_C_LIBVIRTUAL
#define QOPENGLWINDOW_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QOpenGLWindow so that we can call protected methods
class VirtualQOpenGLWindow final : public QOpenGLWindow {

public:
	// Virtual class boolean flag
	bool isVirtualQOpenGLWindow= true;

	// Virtual class public types (including callbacks)
	using QOpenGLWindow_InitializeGL_Callback = void (*)();
	using QOpenGLWindow_ResizeGL_Callback = void (*)(QOpenGLWindow*, int, int);
	using QOpenGLWindow_PaintGL_Callback = void (*)();
	using QOpenGLWindow_PaintUnderGL_Callback = void (*)();
	using QOpenGLWindow_PaintOverGL_Callback = void (*)();
	using QOpenGLWindow_PaintEvent_Callback = void (*)(QOpenGLWindow*, QPaintEvent*);
	using QOpenGLWindow_ResizeEvent_Callback = void (*)(QOpenGLWindow*, QResizeEvent*);
	using QOpenGLWindow_Metric_Callback = int (*)(const QOpenGLWindow*, int);
	using QOpenGLWindow_Redirected_Callback = QPaintDevice* (*)(const QOpenGLWindow*, QPoint*);

protected:
	// Instance callback storage
	mutable QOpenGLWindow_InitializeGL_Callback qopenglwindow_initializegl_callback = nullptr;
	mutable QOpenGLWindow_ResizeGL_Callback qopenglwindow_resizegl_callback = nullptr;
	mutable QOpenGLWindow_PaintGL_Callback qopenglwindow_paintgl_callback = nullptr;
	mutable QOpenGLWindow_PaintUnderGL_Callback qopenglwindow_paintundergl_callback = nullptr;
	mutable QOpenGLWindow_PaintOverGL_Callback qopenglwindow_paintovergl_callback = nullptr;
	mutable QOpenGLWindow_PaintEvent_Callback qopenglwindow_paintevent_callback = nullptr;
	mutable QOpenGLWindow_ResizeEvent_Callback qopenglwindow_resizeevent_callback = nullptr;
	mutable QOpenGLWindow_Metric_Callback qopenglwindow_metric_callback = nullptr;
	mutable QOpenGLWindow_Redirected_Callback qopenglwindow_redirected_callback = nullptr;

	// Instance base flags
    mutable bool qopenglwindow_initializegl_isbase = false;
    mutable bool qopenglwindow_resizegl_isbase = false;
    mutable bool qopenglwindow_paintgl_isbase = false;
    mutable bool qopenglwindow_paintundergl_isbase = false;
    mutable bool qopenglwindow_paintovergl_isbase = false;
    mutable bool qopenglwindow_paintevent_isbase = false;
    mutable bool qopenglwindow_resizeevent_isbase = false;
    mutable bool qopenglwindow_metric_isbase = false;
    mutable bool qopenglwindow_redirected_isbase = false;

public:
	VirtualQOpenGLWindow(): QOpenGLWindow() {};
	VirtualQOpenGLWindow(QOpenGLContext* shareContext): QOpenGLWindow(shareContext) {};
	VirtualQOpenGLWindow(UpdateBehavior updateBehavior): QOpenGLWindow(updateBehavior) {};
	VirtualQOpenGLWindow(UpdateBehavior updateBehavior, QWindow* parent): QOpenGLWindow(updateBehavior, parent) {};
	VirtualQOpenGLWindow(QOpenGLContext* shareContext, UpdateBehavior updateBehavior): QOpenGLWindow(shareContext, updateBehavior) {};
	VirtualQOpenGLWindow(QOpenGLContext* shareContext, UpdateBehavior updateBehavior, QWindow* parent): QOpenGLWindow(shareContext, updateBehavior, parent) {};

	~VirtualQOpenGLWindow() {
		qopenglwindow_initializegl_callback = nullptr;
		qopenglwindow_resizegl_callback = nullptr;
		qopenglwindow_paintgl_callback = nullptr;
		qopenglwindow_paintundergl_callback = nullptr;
		qopenglwindow_paintovergl_callback = nullptr;
		qopenglwindow_paintevent_callback = nullptr;
		qopenglwindow_resizeevent_callback = nullptr;
		qopenglwindow_metric_callback = nullptr;
		qopenglwindow_redirected_callback = nullptr;
	}

// Callback setters
	inline void setQOpenGLWindow_InitializeGL_Callback(QOpenGLWindow_InitializeGL_Callback cb) const { qopenglwindow_initializegl_callback = cb; }
	inline void setQOpenGLWindow_ResizeGL_Callback(QOpenGLWindow_ResizeGL_Callback cb) const { qopenglwindow_resizegl_callback = cb; }
	inline void setQOpenGLWindow_PaintGL_Callback(QOpenGLWindow_PaintGL_Callback cb) const { qopenglwindow_paintgl_callback = cb; }
	inline void setQOpenGLWindow_PaintUnderGL_Callback(QOpenGLWindow_PaintUnderGL_Callback cb) const { qopenglwindow_paintundergl_callback = cb; }
	inline void setQOpenGLWindow_PaintOverGL_Callback(QOpenGLWindow_PaintOverGL_Callback cb) const { qopenglwindow_paintovergl_callback = cb; }
	inline void setQOpenGLWindow_PaintEvent_Callback(QOpenGLWindow_PaintEvent_Callback cb) const { qopenglwindow_paintevent_callback = cb; }
	inline void setQOpenGLWindow_ResizeEvent_Callback(QOpenGLWindow_ResizeEvent_Callback cb) const { qopenglwindow_resizeevent_callback = cb; }
	inline void setQOpenGLWindow_Metric_Callback(QOpenGLWindow_Metric_Callback cb) const { qopenglwindow_metric_callback = cb; }
	inline void setQOpenGLWindow_Redirected_Callback(QOpenGLWindow_Redirected_Callback cb) const { qopenglwindow_redirected_callback = cb; }

// Base flag setters
	inline void setQOpenGLWindow_InitializeGL_IsBase(bool value) const { qopenglwindow_initializegl_isbase = value; }
	inline void setQOpenGLWindow_ResizeGL_IsBase(bool value) const { qopenglwindow_resizegl_isbase = value; }
	inline void setQOpenGLWindow_PaintGL_IsBase(bool value) const { qopenglwindow_paintgl_isbase = value; }
	inline void setQOpenGLWindow_PaintUnderGL_IsBase(bool value) const { qopenglwindow_paintundergl_isbase = value; }
	inline void setQOpenGLWindow_PaintOverGL_IsBase(bool value) const { qopenglwindow_paintovergl_isbase = value; }
	inline void setQOpenGLWindow_PaintEvent_IsBase(bool value) const { qopenglwindow_paintevent_isbase = value; }
	inline void setQOpenGLWindow_ResizeEvent_IsBase(bool value) const { qopenglwindow_resizeevent_isbase = value; }
	inline void setQOpenGLWindow_Metric_IsBase(bool value) const { qopenglwindow_metric_isbase = value; }
	inline void setQOpenGLWindow_Redirected_IsBase(bool value) const { qopenglwindow_redirected_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void initializeGL() override {
		if (qopenglwindow_initializegl_isbase) {
			qopenglwindow_initializegl_isbase = false;
			QOpenGLWindow::initializeGL();
		} else if (qopenglwindow_initializegl_callback != nullptr) {
			qopenglwindow_initializegl_callback();
		} else {
			QOpenGLWindow::initializeGL();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeGL(int w, int h) override {
		if (qopenglwindow_resizegl_isbase) {
			qopenglwindow_resizegl_isbase = false;
			QOpenGLWindow::resizeGL(w, h);
		} else if (qopenglwindow_resizegl_callback != nullptr) {
			int cbval1 = w;
			int cbval2 = h;
			qopenglwindow_resizegl_callback(this, cbval1, cbval2);
		} else {
			QOpenGLWindow::resizeGL(w, h);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintGL() override {
		if (qopenglwindow_paintgl_isbase) {
			qopenglwindow_paintgl_isbase = false;
			QOpenGLWindow::paintGL();
		} else if (qopenglwindow_paintgl_callback != nullptr) {
			qopenglwindow_paintgl_callback();
		} else {
			QOpenGLWindow::paintGL();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintUnderGL() override {
		if (qopenglwindow_paintundergl_isbase) {
			qopenglwindow_paintundergl_isbase = false;
			QOpenGLWindow::paintUnderGL();
		} else if (qopenglwindow_paintundergl_callback != nullptr) {
			qopenglwindow_paintundergl_callback();
		} else {
			QOpenGLWindow::paintUnderGL();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintOverGL() override {
		if (qopenglwindow_paintovergl_isbase) {
			qopenglwindow_paintovergl_isbase = false;
			QOpenGLWindow::paintOverGL();
		} else if (qopenglwindow_paintovergl_callback != nullptr) {
			qopenglwindow_paintovergl_callback();
		} else {
			QOpenGLWindow::paintOverGL();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* event) override {
		if (qopenglwindow_paintevent_isbase) {
			qopenglwindow_paintevent_isbase = false;
			QOpenGLWindow::paintEvent(event);
		} else if (qopenglwindow_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = event;
			qopenglwindow_paintevent_callback(this, cbval1);
		} else {
			QOpenGLWindow::paintEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* event) override {
		if (qopenglwindow_resizeevent_isbase) {
			qopenglwindow_resizeevent_isbase = false;
			QOpenGLWindow::resizeEvent(event);
		} else if (qopenglwindow_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = event;
			qopenglwindow_resizeevent_callback(this, cbval1);
		} else {
			QOpenGLWindow::resizeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int metric(PaintDeviceMetric metric) const override {
		if (qopenglwindow_metric_isbase) {
			qopenglwindow_metric_isbase = false;
			return QOpenGLWindow::metric(metric);
		} else if (qopenglwindow_metric_callback != nullptr) {
			int cbval1 = static_cast<int>(metric);
			int callback_ret = qopenglwindow_metric_callback(this, cbval1);
			return callback_ret;
		} else {
			return QOpenGLWindow::metric(metric);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPaintDevice* redirected(QPoint* param1) const override {
		if (qopenglwindow_redirected_isbase) {
			qopenglwindow_redirected_isbase = false;
			return QOpenGLWindow::redirected(param1);
		} else if (qopenglwindow_redirected_callback != nullptr) {
			QPoint* cbval1 = param1;
			QPaintDevice* callback_ret = qopenglwindow_redirected_callback(this, cbval1);
			return callback_ret;
		} else {
			return QOpenGLWindow::redirected(param1);
		}
	}

	// Friend functions
	friend void QOpenGLWindow_InitializeGL(QOpenGLWindow* self);
	friend void QOpenGLWindow_QBaseInitializeGL(QOpenGLWindow* self);
	friend void QOpenGLWindow_ResizeGL(QOpenGLWindow* self, int w, int h);
	friend void QOpenGLWindow_QBaseResizeGL(QOpenGLWindow* self, int w, int h);
	friend void QOpenGLWindow_PaintGL(QOpenGLWindow* self);
	friend void QOpenGLWindow_QBasePaintGL(QOpenGLWindow* self);
	friend void QOpenGLWindow_PaintUnderGL(QOpenGLWindow* self);
	friend void QOpenGLWindow_QBasePaintUnderGL(QOpenGLWindow* self);
	friend void QOpenGLWindow_PaintOverGL(QOpenGLWindow* self);
	friend void QOpenGLWindow_QBasePaintOverGL(QOpenGLWindow* self);
	friend void QOpenGLWindow_PaintEvent(QOpenGLWindow* self, QPaintEvent* event);
	friend void QOpenGLWindow_QBasePaintEvent(QOpenGLWindow* self, QPaintEvent* event);
	friend void QOpenGLWindow_ResizeEvent(QOpenGLWindow* self, QResizeEvent* event);
	friend void QOpenGLWindow_QBaseResizeEvent(QOpenGLWindow* self, QResizeEvent* event);
	friend int QOpenGLWindow_Metric(const QOpenGLWindow* self, int metric);
	friend int QOpenGLWindow_QBaseMetric(const QOpenGLWindow* self, int metric);
	friend QPaintDevice* QOpenGLWindow_Redirected(const QOpenGLWindow* self, QPoint* param1);
	friend QPaintDevice* QOpenGLWindow_QBaseRedirected(const QOpenGLWindow* self, QPoint* param1);
};

#endif


