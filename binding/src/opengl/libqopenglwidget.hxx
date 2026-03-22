#pragma once
#ifndef QOPENGLWIDGET_H_C_LIBVIRTUAL
#define QOPENGLWIDGET_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QOpenGLWidget so that we can call protected methods
class VirtualQOpenGLWidget final : public QOpenGLWidget {

public:
	// Virtual class boolean flag
	bool isVirtualQOpenGLWidget= true;

	// Virtual class public types (including callbacks)
	using QOpenGLWidget_InitializeGL_Callback = void (*)();
	using QOpenGLWidget_ResizeGL_Callback = void (*)(QOpenGLWidget*, int, int);
	using QOpenGLWidget_PaintGL_Callback = void (*)();
	using QOpenGLWidget_PaintEvent_Callback = void (*)(QOpenGLWidget*, QPaintEvent*);
	using QOpenGLWidget_ResizeEvent_Callback = void (*)(QOpenGLWidget*, QResizeEvent*);
	using QOpenGLWidget_Event_Callback = bool (*)(QOpenGLWidget*, QEvent*);
	using QOpenGLWidget_Metric_Callback = int (*)(const QOpenGLWidget*, int);
	using QOpenGLWidget_Redirected_Callback = QPaintDevice* (*)(const QOpenGLWidget*, QPoint*);
	using QOpenGLWidget_PaintEngine_Callback = QPaintEngine* (*)();

protected:
	// Instance callback storage
	mutable QOpenGLWidget_InitializeGL_Callback qopenglwidget_initializegl_callback = nullptr;
	mutable QOpenGLWidget_ResizeGL_Callback qopenglwidget_resizegl_callback = nullptr;
	mutable QOpenGLWidget_PaintGL_Callback qopenglwidget_paintgl_callback = nullptr;
	mutable QOpenGLWidget_PaintEvent_Callback qopenglwidget_paintevent_callback = nullptr;
	mutable QOpenGLWidget_ResizeEvent_Callback qopenglwidget_resizeevent_callback = nullptr;
	mutable QOpenGLWidget_Event_Callback qopenglwidget_event_callback = nullptr;
	mutable QOpenGLWidget_Metric_Callback qopenglwidget_metric_callback = nullptr;
	mutable QOpenGLWidget_Redirected_Callback qopenglwidget_redirected_callback = nullptr;
	mutable QOpenGLWidget_PaintEngine_Callback qopenglwidget_paintengine_callback = nullptr;

	// Instance base flags
    mutable bool qopenglwidget_initializegl_isbase = false;
    mutable bool qopenglwidget_resizegl_isbase = false;
    mutable bool qopenglwidget_paintgl_isbase = false;
    mutable bool qopenglwidget_paintevent_isbase = false;
    mutable bool qopenglwidget_resizeevent_isbase = false;
    mutable bool qopenglwidget_event_isbase = false;
    mutable bool qopenglwidget_metric_isbase = false;
    mutable bool qopenglwidget_redirected_isbase = false;
    mutable bool qopenglwidget_paintengine_isbase = false;

public:
	VirtualQOpenGLWidget(QWidget* parent): QOpenGLWidget(parent) {};
	VirtualQOpenGLWidget(): QOpenGLWidget() {};
	VirtualQOpenGLWidget(QWidget* parent, Qt::WindowFlags f): QOpenGLWidget(parent, f) {};

	~VirtualQOpenGLWidget() {
		qopenglwidget_initializegl_callback = nullptr;
		qopenglwidget_resizegl_callback = nullptr;
		qopenglwidget_paintgl_callback = nullptr;
		qopenglwidget_paintevent_callback = nullptr;
		qopenglwidget_resizeevent_callback = nullptr;
		qopenglwidget_event_callback = nullptr;
		qopenglwidget_metric_callback = nullptr;
		qopenglwidget_redirected_callback = nullptr;
		qopenglwidget_paintengine_callback = nullptr;
	}

// Callback setters
	inline void setQOpenGLWidget_InitializeGL_Callback(QOpenGLWidget_InitializeGL_Callback cb) const { qopenglwidget_initializegl_callback = cb; }
	inline void setQOpenGLWidget_ResizeGL_Callback(QOpenGLWidget_ResizeGL_Callback cb) const { qopenglwidget_resizegl_callback = cb; }
	inline void setQOpenGLWidget_PaintGL_Callback(QOpenGLWidget_PaintGL_Callback cb) const { qopenglwidget_paintgl_callback = cb; }
	inline void setQOpenGLWidget_PaintEvent_Callback(QOpenGLWidget_PaintEvent_Callback cb) const { qopenglwidget_paintevent_callback = cb; }
	inline void setQOpenGLWidget_ResizeEvent_Callback(QOpenGLWidget_ResizeEvent_Callback cb) const { qopenglwidget_resizeevent_callback = cb; }
	inline void setQOpenGLWidget_Event_Callback(QOpenGLWidget_Event_Callback cb) const { qopenglwidget_event_callback = cb; }
	inline void setQOpenGLWidget_Metric_Callback(QOpenGLWidget_Metric_Callback cb) const { qopenglwidget_metric_callback = cb; }
	inline void setQOpenGLWidget_Redirected_Callback(QOpenGLWidget_Redirected_Callback cb) const { qopenglwidget_redirected_callback = cb; }
	inline void setQOpenGLWidget_PaintEngine_Callback(QOpenGLWidget_PaintEngine_Callback cb) const { qopenglwidget_paintengine_callback = cb; }

// Base flag setters
	inline void setQOpenGLWidget_InitializeGL_IsBase(bool value) const { qopenglwidget_initializegl_isbase = value; }
	inline void setQOpenGLWidget_ResizeGL_IsBase(bool value) const { qopenglwidget_resizegl_isbase = value; }
	inline void setQOpenGLWidget_PaintGL_IsBase(bool value) const { qopenglwidget_paintgl_isbase = value; }
	inline void setQOpenGLWidget_PaintEvent_IsBase(bool value) const { qopenglwidget_paintevent_isbase = value; }
	inline void setQOpenGLWidget_ResizeEvent_IsBase(bool value) const { qopenglwidget_resizeevent_isbase = value; }
	inline void setQOpenGLWidget_Event_IsBase(bool value) const { qopenglwidget_event_isbase = value; }
	inline void setQOpenGLWidget_Metric_IsBase(bool value) const { qopenglwidget_metric_isbase = value; }
	inline void setQOpenGLWidget_Redirected_IsBase(bool value) const { qopenglwidget_redirected_isbase = value; }
	inline void setQOpenGLWidget_PaintEngine_IsBase(bool value) const { qopenglwidget_paintengine_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void initializeGL() override {
		if (qopenglwidget_initializegl_isbase) {
			qopenglwidget_initializegl_isbase = false;
			QOpenGLWidget::initializeGL();
		} else if (qopenglwidget_initializegl_callback != nullptr) {
			qopenglwidget_initializegl_callback();
		} else {
			QOpenGLWidget::initializeGL();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeGL(int w, int h) override {
		if (qopenglwidget_resizegl_isbase) {
			qopenglwidget_resizegl_isbase = false;
			QOpenGLWidget::resizeGL(w, h);
		} else if (qopenglwidget_resizegl_callback != nullptr) {
			int cbval1 = w;
			int cbval2 = h;
			qopenglwidget_resizegl_callback(this, cbval1, cbval2);
		} else {
			QOpenGLWidget::resizeGL(w, h);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintGL() override {
		if (qopenglwidget_paintgl_isbase) {
			qopenglwidget_paintgl_isbase = false;
			QOpenGLWidget::paintGL();
		} else if (qopenglwidget_paintgl_callback != nullptr) {
			qopenglwidget_paintgl_callback();
		} else {
			QOpenGLWidget::paintGL();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* e) override {
		if (qopenglwidget_paintevent_isbase) {
			qopenglwidget_paintevent_isbase = false;
			QOpenGLWidget::paintEvent(e);
		} else if (qopenglwidget_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = e;
			qopenglwidget_paintevent_callback(this, cbval1);
		} else {
			QOpenGLWidget::paintEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* e) override {
		if (qopenglwidget_resizeevent_isbase) {
			qopenglwidget_resizeevent_isbase = false;
			QOpenGLWidget::resizeEvent(e);
		} else if (qopenglwidget_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = e;
			qopenglwidget_resizeevent_callback(this, cbval1);
		} else {
			QOpenGLWidget::resizeEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qopenglwidget_event_isbase) {
			qopenglwidget_event_isbase = false;
			return QOpenGLWidget::event(e);
		} else if (qopenglwidget_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qopenglwidget_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QOpenGLWidget::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
		if (qopenglwidget_metric_isbase) {
			qopenglwidget_metric_isbase = false;
			return QOpenGLWidget::metric(metric);
		} else if (qopenglwidget_metric_callback != nullptr) {
			int cbval1 = static_cast<int>(metric);
			int callback_ret = qopenglwidget_metric_callback(this, cbval1);
			return callback_ret;
		} else {
			return QOpenGLWidget::metric(metric);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPaintDevice* redirected(QPoint* p) const override {
		if (qopenglwidget_redirected_isbase) {
			qopenglwidget_redirected_isbase = false;
			return QOpenGLWidget::redirected(p);
		} else if (qopenglwidget_redirected_callback != nullptr) {
			QPoint* cbval1 = p;
			QPaintDevice* callback_ret = qopenglwidget_redirected_callback(this, cbval1);
			return callback_ret;
		} else {
			return QOpenGLWidget::redirected(p);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPaintEngine* paintEngine() const override {
		if (qopenglwidget_paintengine_isbase) {
			qopenglwidget_paintengine_isbase = false;
			return QOpenGLWidget::paintEngine();
		} else if (qopenglwidget_paintengine_callback != nullptr) {
			QPaintEngine* callback_ret = qopenglwidget_paintengine_callback();
			return callback_ret;
		} else {
			return QOpenGLWidget::paintEngine();
		}
	}

	// Friend functions
	friend void QOpenGLWidget_InitializeGL(QOpenGLWidget* self);
	friend void QOpenGLWidget_QBaseInitializeGL(QOpenGLWidget* self);
	friend void QOpenGLWidget_ResizeGL(QOpenGLWidget* self, int w, int h);
	friend void QOpenGLWidget_QBaseResizeGL(QOpenGLWidget* self, int w, int h);
	friend void QOpenGLWidget_PaintGL(QOpenGLWidget* self);
	friend void QOpenGLWidget_QBasePaintGL(QOpenGLWidget* self);
	friend void QOpenGLWidget_PaintEvent(QOpenGLWidget* self, QPaintEvent* e);
	friend void QOpenGLWidget_QBasePaintEvent(QOpenGLWidget* self, QPaintEvent* e);
	friend void QOpenGLWidget_ResizeEvent(QOpenGLWidget* self, QResizeEvent* e);
	friend void QOpenGLWidget_QBaseResizeEvent(QOpenGLWidget* self, QResizeEvent* e);
	friend bool QOpenGLWidget_Event(QOpenGLWidget* self, QEvent* e);
	friend bool QOpenGLWidget_QBaseEvent(QOpenGLWidget* self, QEvent* e);
	friend int QOpenGLWidget_Metric(const QOpenGLWidget* self, int metric);
	friend int QOpenGLWidget_QBaseMetric(const QOpenGLWidget* self, int metric);
	friend QPaintDevice* QOpenGLWidget_Redirected(const QOpenGLWidget* self, QPoint* p);
	friend QPaintDevice* QOpenGLWidget_QBaseRedirected(const QOpenGLWidget* self, QPoint* p);
	friend QPaintEngine* QOpenGLWidget_PaintEngine(const QOpenGLWidget* self);
	friend QPaintEngine* QOpenGLWidget_QBasePaintEngine(const QOpenGLWidget* self);
};

#endif


