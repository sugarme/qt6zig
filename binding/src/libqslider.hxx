#pragma once
#ifndef QSLIDER_H_C_LIBVIRTUAL
#define QSLIDER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QSlider so that we can call protected methods
class VirtualQSlider final : public QSlider {

public:
	// Virtual class boolean flag
	bool isVirtualQSlider= true;

	// Virtual class public types (including callbacks)
	using QSlider_SizeHint_Callback = QSize* (*)();
	using QSlider_MinimumSizeHint_Callback = QSize* (*)();
	using QSlider_Event_Callback = bool (*)(QSlider*, QEvent*);
	using QSlider_PaintEvent_Callback = void (*)(QSlider*, QPaintEvent*);
	using QSlider_MousePressEvent_Callback = void (*)(QSlider*, QMouseEvent*);
	using QSlider_MouseReleaseEvent_Callback = void (*)(QSlider*, QMouseEvent*);
	using QSlider_MouseMoveEvent_Callback = void (*)(QSlider*, QMouseEvent*);
	using QSlider_InitStyleOption_Callback = void (*)(const QSlider*, QStyleOptionSlider*);

protected:
	// Instance callback storage
	mutable QSlider_SizeHint_Callback qslider_sizehint_callback = nullptr;
	mutable QSlider_MinimumSizeHint_Callback qslider_minimumsizehint_callback = nullptr;
	mutable QSlider_Event_Callback qslider_event_callback = nullptr;
	mutable QSlider_PaintEvent_Callback qslider_paintevent_callback = nullptr;
	mutable QSlider_MousePressEvent_Callback qslider_mousepressevent_callback = nullptr;
	mutable QSlider_MouseReleaseEvent_Callback qslider_mousereleaseevent_callback = nullptr;
	mutable QSlider_MouseMoveEvent_Callback qslider_mousemoveevent_callback = nullptr;
	mutable QSlider_InitStyleOption_Callback qslider_initstyleoption_callback = nullptr;

	// Instance base flags
    mutable bool qslider_sizehint_isbase = false;
    mutable bool qslider_minimumsizehint_isbase = false;
    mutable bool qslider_event_isbase = false;
    mutable bool qslider_paintevent_isbase = false;
    mutable bool qslider_mousepressevent_isbase = false;
    mutable bool qslider_mousereleaseevent_isbase = false;
    mutable bool qslider_mousemoveevent_isbase = false;
    mutable bool qslider_initstyleoption_isbase = false;

public:
	VirtualQSlider(QWidget* parent): QSlider(parent) {};
	VirtualQSlider(): QSlider() {};
	VirtualQSlider(Qt::Orientation orientation): QSlider(orientation) {};
	VirtualQSlider(Qt::Orientation orientation, QWidget* parent): QSlider(orientation, parent) {};

	~VirtualQSlider() {
		qslider_sizehint_callback = nullptr;
		qslider_minimumsizehint_callback = nullptr;
		qslider_event_callback = nullptr;
		qslider_paintevent_callback = nullptr;
		qslider_mousepressevent_callback = nullptr;
		qslider_mousereleaseevent_callback = nullptr;
		qslider_mousemoveevent_callback = nullptr;
		qslider_initstyleoption_callback = nullptr;
	}

// Callback setters
	inline void setQSlider_SizeHint_Callback(QSlider_SizeHint_Callback cb) const { qslider_sizehint_callback = cb; }
	inline void setQSlider_MinimumSizeHint_Callback(QSlider_MinimumSizeHint_Callback cb) const { qslider_minimumsizehint_callback = cb; }
	inline void setQSlider_Event_Callback(QSlider_Event_Callback cb) const { qslider_event_callback = cb; }
	inline void setQSlider_PaintEvent_Callback(QSlider_PaintEvent_Callback cb) const { qslider_paintevent_callback = cb; }
	inline void setQSlider_MousePressEvent_Callback(QSlider_MousePressEvent_Callback cb) const { qslider_mousepressevent_callback = cb; }
	inline void setQSlider_MouseReleaseEvent_Callback(QSlider_MouseReleaseEvent_Callback cb) const { qslider_mousereleaseevent_callback = cb; }
	inline void setQSlider_MouseMoveEvent_Callback(QSlider_MouseMoveEvent_Callback cb) const { qslider_mousemoveevent_callback = cb; }
	inline void setQSlider_InitStyleOption_Callback(QSlider_InitStyleOption_Callback cb) const { qslider_initstyleoption_callback = cb; }

// Base flag setters
	inline void setQSlider_SizeHint_IsBase(bool value) const { qslider_sizehint_isbase = value; }
	inline void setQSlider_MinimumSizeHint_IsBase(bool value) const { qslider_minimumsizehint_isbase = value; }
	inline void setQSlider_Event_IsBase(bool value) const { qslider_event_isbase = value; }
	inline void setQSlider_PaintEvent_IsBase(bool value) const { qslider_paintevent_isbase = value; }
	inline void setQSlider_MousePressEvent_IsBase(bool value) const { qslider_mousepressevent_isbase = value; }
	inline void setQSlider_MouseReleaseEvent_IsBase(bool value) const { qslider_mousereleaseevent_isbase = value; }
	inline void setQSlider_MouseMoveEvent_IsBase(bool value) const { qslider_mousemoveevent_isbase = value; }
	inline void setQSlider_InitStyleOption_IsBase(bool value) const { qslider_initstyleoption_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qslider_sizehint_isbase) {
			qslider_sizehint_isbase = false;
			return QSlider::sizeHint();
		} else if (qslider_sizehint_callback != nullptr) {
			QSize* callback_ret = qslider_sizehint_callback();
			return *callback_ret;
		} else {
			return QSlider::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qslider_minimumsizehint_isbase) {
			qslider_minimumsizehint_isbase = false;
			return QSlider::minimumSizeHint();
		} else if (qslider_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qslider_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QSlider::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qslider_event_isbase) {
			qslider_event_isbase = false;
			return QSlider::event(event);
		} else if (qslider_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qslider_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSlider::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* ev) override {
		if (qslider_paintevent_isbase) {
			qslider_paintevent_isbase = false;
			QSlider::paintEvent(ev);
		} else if (qslider_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = ev;
			qslider_paintevent_callback(this, cbval1);
		} else {
			QSlider::paintEvent(ev);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* ev) override {
		if (qslider_mousepressevent_isbase) {
			qslider_mousepressevent_isbase = false;
			QSlider::mousePressEvent(ev);
		} else if (qslider_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = ev;
			qslider_mousepressevent_callback(this, cbval1);
		} else {
			QSlider::mousePressEvent(ev);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* ev) override {
		if (qslider_mousereleaseevent_isbase) {
			qslider_mousereleaseevent_isbase = false;
			QSlider::mouseReleaseEvent(ev);
		} else if (qslider_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = ev;
			qslider_mousereleaseevent_callback(this, cbval1);
		} else {
			QSlider::mouseReleaseEvent(ev);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* ev) override {
		if (qslider_mousemoveevent_isbase) {
			qslider_mousemoveevent_isbase = false;
			QSlider::mouseMoveEvent(ev);
		} else if (qslider_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = ev;
			qslider_mousemoveevent_callback(this, cbval1);
		} else {
			QSlider::mouseMoveEvent(ev);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionSlider* option) const override {
		if (qslider_initstyleoption_isbase) {
			qslider_initstyleoption_isbase = false;
			QSlider::initStyleOption(option);
		} else if (qslider_initstyleoption_callback != nullptr) {
			QStyleOptionSlider* cbval1 = option;
			qslider_initstyleoption_callback(this, cbval1);
		} else {
			QSlider::initStyleOption(option);
		}
	}

	// Friend functions
	friend void QSlider_PaintEvent(QSlider* self, QPaintEvent* ev);
	friend void QSlider_QBasePaintEvent(QSlider* self, QPaintEvent* ev);
	friend void QSlider_MousePressEvent(QSlider* self, QMouseEvent* ev);
	friend void QSlider_QBaseMousePressEvent(QSlider* self, QMouseEvent* ev);
	friend void QSlider_MouseReleaseEvent(QSlider* self, QMouseEvent* ev);
	friend void QSlider_QBaseMouseReleaseEvent(QSlider* self, QMouseEvent* ev);
	friend void QSlider_MouseMoveEvent(QSlider* self, QMouseEvent* ev);
	friend void QSlider_QBaseMouseMoveEvent(QSlider* self, QMouseEvent* ev);
	friend void QSlider_InitStyleOption(const QSlider* self, QStyleOptionSlider* option);
	friend void QSlider_QBaseInitStyleOption(const QSlider* self, QStyleOptionSlider* option);
};

#endif


