#pragma once
#ifndef QRADIOBUTTON_H_C_LIBVIRTUAL
#define QRADIOBUTTON_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QRadioButton so that we can call protected methods
class VirtualQRadioButton final : public QRadioButton {

public:
	// Virtual class boolean flag
	bool isVirtualQRadioButton= true;

	// Virtual class public types (including callbacks)
	using QRadioButton_SizeHint_Callback = QSize* (*)();
	using QRadioButton_MinimumSizeHint_Callback = QSize* (*)();
	using QRadioButton_Event_Callback = bool (*)(QRadioButton*, QEvent*);
	using QRadioButton_HitButton_Callback = bool (*)(const QRadioButton*, const QPoint*);
	using QRadioButton_PaintEvent_Callback = void (*)(QRadioButton*, QPaintEvent*);
	using QRadioButton_MouseMoveEvent_Callback = void (*)(QRadioButton*, QMouseEvent*);
	using QRadioButton_InitStyleOption_Callback = void (*)(const QRadioButton*, QStyleOptionButton*);

protected:
	// Instance callback storage
	mutable QRadioButton_SizeHint_Callback qradiobutton_sizehint_callback = nullptr;
	mutable QRadioButton_MinimumSizeHint_Callback qradiobutton_minimumsizehint_callback = nullptr;
	mutable QRadioButton_Event_Callback qradiobutton_event_callback = nullptr;
	mutable QRadioButton_HitButton_Callback qradiobutton_hitbutton_callback = nullptr;
	mutable QRadioButton_PaintEvent_Callback qradiobutton_paintevent_callback = nullptr;
	mutable QRadioButton_MouseMoveEvent_Callback qradiobutton_mousemoveevent_callback = nullptr;
	mutable QRadioButton_InitStyleOption_Callback qradiobutton_initstyleoption_callback = nullptr;

	// Instance base flags
    mutable bool qradiobutton_sizehint_isbase = false;
    mutable bool qradiobutton_minimumsizehint_isbase = false;
    mutable bool qradiobutton_event_isbase = false;
    mutable bool qradiobutton_hitbutton_isbase = false;
    mutable bool qradiobutton_paintevent_isbase = false;
    mutable bool qradiobutton_mousemoveevent_isbase = false;
    mutable bool qradiobutton_initstyleoption_isbase = false;

public:
	VirtualQRadioButton(QWidget* parent): QRadioButton(parent) {};
	VirtualQRadioButton(): QRadioButton() {};
	VirtualQRadioButton(const QString& text): QRadioButton(text) {};
	VirtualQRadioButton(const QString& text, QWidget* parent): QRadioButton(text, parent) {};

	~VirtualQRadioButton() {
		qradiobutton_sizehint_callback = nullptr;
		qradiobutton_minimumsizehint_callback = nullptr;
		qradiobutton_event_callback = nullptr;
		qradiobutton_hitbutton_callback = nullptr;
		qradiobutton_paintevent_callback = nullptr;
		qradiobutton_mousemoveevent_callback = nullptr;
		qradiobutton_initstyleoption_callback = nullptr;
	}

// Callback setters
	inline void setQRadioButton_SizeHint_Callback(QRadioButton_SizeHint_Callback cb) const { qradiobutton_sizehint_callback = cb; }
	inline void setQRadioButton_MinimumSizeHint_Callback(QRadioButton_MinimumSizeHint_Callback cb) const { qradiobutton_minimumsizehint_callback = cb; }
	inline void setQRadioButton_Event_Callback(QRadioButton_Event_Callback cb) const { qradiobutton_event_callback = cb; }
	inline void setQRadioButton_HitButton_Callback(QRadioButton_HitButton_Callback cb) const { qradiobutton_hitbutton_callback = cb; }
	inline void setQRadioButton_PaintEvent_Callback(QRadioButton_PaintEvent_Callback cb) const { qradiobutton_paintevent_callback = cb; }
	inline void setQRadioButton_MouseMoveEvent_Callback(QRadioButton_MouseMoveEvent_Callback cb) const { qradiobutton_mousemoveevent_callback = cb; }
	inline void setQRadioButton_InitStyleOption_Callback(QRadioButton_InitStyleOption_Callback cb) const { qradiobutton_initstyleoption_callback = cb; }

// Base flag setters
	inline void setQRadioButton_SizeHint_IsBase(bool value) const { qradiobutton_sizehint_isbase = value; }
	inline void setQRadioButton_MinimumSizeHint_IsBase(bool value) const { qradiobutton_minimumsizehint_isbase = value; }
	inline void setQRadioButton_Event_IsBase(bool value) const { qradiobutton_event_isbase = value; }
	inline void setQRadioButton_HitButton_IsBase(bool value) const { qradiobutton_hitbutton_isbase = value; }
	inline void setQRadioButton_PaintEvent_IsBase(bool value) const { qradiobutton_paintevent_isbase = value; }
	inline void setQRadioButton_MouseMoveEvent_IsBase(bool value) const { qradiobutton_mousemoveevent_isbase = value; }
	inline void setQRadioButton_InitStyleOption_IsBase(bool value) const { qradiobutton_initstyleoption_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qradiobutton_sizehint_isbase) {
			qradiobutton_sizehint_isbase = false;
			return QRadioButton::sizeHint();
		} else if (qradiobutton_sizehint_callback != nullptr) {
			QSize* callback_ret = qradiobutton_sizehint_callback();
			return *callback_ret;
		} else {
			return QRadioButton::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qradiobutton_minimumsizehint_isbase) {
			qradiobutton_minimumsizehint_isbase = false;
			return QRadioButton::minimumSizeHint();
		} else if (qradiobutton_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qradiobutton_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QRadioButton::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qradiobutton_event_isbase) {
			qradiobutton_event_isbase = false;
			return QRadioButton::event(e);
		} else if (qradiobutton_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qradiobutton_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QRadioButton::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool hitButton(const QPoint& param1) const override {
		if (qradiobutton_hitbutton_isbase) {
			qradiobutton_hitbutton_isbase = false;
			return QRadioButton::hitButton(param1);
		} else if (qradiobutton_hitbutton_callback != nullptr) {
			const QPoint* cbval1 = (const QPoint*)&param1;
			bool callback_ret = qradiobutton_hitbutton_callback(this, cbval1);
			return callback_ret;
		} else {
			return QRadioButton::hitButton(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qradiobutton_paintevent_isbase) {
			qradiobutton_paintevent_isbase = false;
			QRadioButton::paintEvent(param1);
		} else if (qradiobutton_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qradiobutton_paintevent_callback(this, cbval1);
		} else {
			QRadioButton::paintEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (qradiobutton_mousemoveevent_isbase) {
			qradiobutton_mousemoveevent_isbase = false;
			QRadioButton::mouseMoveEvent(param1);
		} else if (qradiobutton_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qradiobutton_mousemoveevent_callback(this, cbval1);
		} else {
			QRadioButton::mouseMoveEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionButton* button) const override {
		if (qradiobutton_initstyleoption_isbase) {
			qradiobutton_initstyleoption_isbase = false;
			QRadioButton::initStyleOption(button);
		} else if (qradiobutton_initstyleoption_callback != nullptr) {
			QStyleOptionButton* cbval1 = button;
			qradiobutton_initstyleoption_callback(this, cbval1);
		} else {
			QRadioButton::initStyleOption(button);
		}
	}

	// Friend functions
	friend bool QRadioButton_Event(QRadioButton* self, QEvent* e);
	friend bool QRadioButton_QBaseEvent(QRadioButton* self, QEvent* e);
	friend bool QRadioButton_HitButton(const QRadioButton* self, const QPoint* param1);
	friend bool QRadioButton_QBaseHitButton(const QRadioButton* self, const QPoint* param1);
	friend void QRadioButton_PaintEvent(QRadioButton* self, QPaintEvent* param1);
	friend void QRadioButton_QBasePaintEvent(QRadioButton* self, QPaintEvent* param1);
	friend void QRadioButton_MouseMoveEvent(QRadioButton* self, QMouseEvent* param1);
	friend void QRadioButton_QBaseMouseMoveEvent(QRadioButton* self, QMouseEvent* param1);
	friend void QRadioButton_InitStyleOption(const QRadioButton* self, QStyleOptionButton* button);
	friend void QRadioButton_QBaseInitStyleOption(const QRadioButton* self, QStyleOptionButton* button);
};

#endif


