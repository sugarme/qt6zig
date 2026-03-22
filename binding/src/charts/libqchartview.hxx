#pragma once
#ifndef QCHARTVIEW_H_C_LIBVIRTUAL
#define QCHARTVIEW_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QChartView so that we can call protected methods
class VirtualQChartView final : public QChartView {

public:
	// Virtual class boolean flag
	bool isVirtualQChartView= true;

	// Virtual class public types (including callbacks)
	using QChartView_ResizeEvent_Callback = void (*)(QChartView*, QResizeEvent*);
	using QChartView_MousePressEvent_Callback = void (*)(QChartView*, QMouseEvent*);
	using QChartView_MouseMoveEvent_Callback = void (*)(QChartView*, QMouseEvent*);
	using QChartView_MouseReleaseEvent_Callback = void (*)(QChartView*, QMouseEvent*);

protected:
	// Instance callback storage
	mutable QChartView_ResizeEvent_Callback qchartview_resizeevent_callback = nullptr;
	mutable QChartView_MousePressEvent_Callback qchartview_mousepressevent_callback = nullptr;
	mutable QChartView_MouseMoveEvent_Callback qchartview_mousemoveevent_callback = nullptr;
	mutable QChartView_MouseReleaseEvent_Callback qchartview_mousereleaseevent_callback = nullptr;

	// Instance base flags
    mutable bool qchartview_resizeevent_isbase = false;
    mutable bool qchartview_mousepressevent_isbase = false;
    mutable bool qchartview_mousemoveevent_isbase = false;
    mutable bool qchartview_mousereleaseevent_isbase = false;

public:
	VirtualQChartView(QWidget* parent): QChartView(parent) {};
	VirtualQChartView(): QChartView() {};
	VirtualQChartView(QChart* chart): QChartView(chart) {};
	VirtualQChartView(QChart* chart, QWidget* parent): QChartView(chart, parent) {};

	~VirtualQChartView() {
		qchartview_resizeevent_callback = nullptr;
		qchartview_mousepressevent_callback = nullptr;
		qchartview_mousemoveevent_callback = nullptr;
		qchartview_mousereleaseevent_callback = nullptr;
	}

// Callback setters
	inline void setQChartView_ResizeEvent_Callback(QChartView_ResizeEvent_Callback cb) const { qchartview_resizeevent_callback = cb; }
	inline void setQChartView_MousePressEvent_Callback(QChartView_MousePressEvent_Callback cb) const { qchartview_mousepressevent_callback = cb; }
	inline void setQChartView_MouseMoveEvent_Callback(QChartView_MouseMoveEvent_Callback cb) const { qchartview_mousemoveevent_callback = cb; }
	inline void setQChartView_MouseReleaseEvent_Callback(QChartView_MouseReleaseEvent_Callback cb) const { qchartview_mousereleaseevent_callback = cb; }

// Base flag setters
	inline void setQChartView_ResizeEvent_IsBase(bool value) const { qchartview_resizeevent_isbase = value; }
	inline void setQChartView_MousePressEvent_IsBase(bool value) const { qchartview_mousepressevent_isbase = value; }
	inline void setQChartView_MouseMoveEvent_IsBase(bool value) const { qchartview_mousemoveevent_isbase = value; }
	inline void setQChartView_MouseReleaseEvent_IsBase(bool value) const { qchartview_mousereleaseevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* event) override {
		if (qchartview_resizeevent_isbase) {
			qchartview_resizeevent_isbase = false;
			QChartView::resizeEvent(event);
		} else if (qchartview_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = event;
			qchartview_resizeevent_callback(this, cbval1);
		} else {
			QChartView::resizeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (qchartview_mousepressevent_isbase) {
			qchartview_mousepressevent_isbase = false;
			QChartView::mousePressEvent(event);
		} else if (qchartview_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qchartview_mousepressevent_callback(this, cbval1);
		} else {
			QChartView::mousePressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (qchartview_mousemoveevent_isbase) {
			qchartview_mousemoveevent_isbase = false;
			QChartView::mouseMoveEvent(event);
		} else if (qchartview_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qchartview_mousemoveevent_callback(this, cbval1);
		} else {
			QChartView::mouseMoveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (qchartview_mousereleaseevent_isbase) {
			qchartview_mousereleaseevent_isbase = false;
			QChartView::mouseReleaseEvent(event);
		} else if (qchartview_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qchartview_mousereleaseevent_callback(this, cbval1);
		} else {
			QChartView::mouseReleaseEvent(event);
		}
	}

	// Friend functions
	friend void QChartView_ResizeEvent(QChartView* self, QResizeEvent* event);
	friend void QChartView_QBaseResizeEvent(QChartView* self, QResizeEvent* event);
	friend void QChartView_MousePressEvent(QChartView* self, QMouseEvent* event);
	friend void QChartView_QBaseMousePressEvent(QChartView* self, QMouseEvent* event);
	friend void QChartView_MouseMoveEvent(QChartView* self, QMouseEvent* event);
	friend void QChartView_QBaseMouseMoveEvent(QChartView* self, QMouseEvent* event);
	friend void QChartView_MouseReleaseEvent(QChartView* self, QMouseEvent* event);
	friend void QChartView_QBaseMouseReleaseEvent(QChartView* self, QMouseEvent* event);
};

#endif


