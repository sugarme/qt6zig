#pragma once
#ifndef QPUSHBUTTON_H_C_LIBVIRTUAL
#define QPUSHBUTTON_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QPushButton so that we can call protected methods
class VirtualQPushButton final : public QPushButton {

public:
	// Virtual class boolean flag
	bool isVirtualQPushButton= true;

	// Virtual class public types (including callbacks)
	using QPushButton_SizeHint_Callback = QSize* (*)();
	using QPushButton_MinimumSizeHint_Callback = QSize* (*)();
	using QPushButton_Event_Callback = bool (*)(QPushButton*, QEvent*);
	using QPushButton_PaintEvent_Callback = void (*)(QPushButton*, QPaintEvent*);
	using QPushButton_KeyPressEvent_Callback = void (*)(QPushButton*, QKeyEvent*);
	using QPushButton_FocusInEvent_Callback = void (*)(QPushButton*, QFocusEvent*);
	using QPushButton_FocusOutEvent_Callback = void (*)(QPushButton*, QFocusEvent*);
	using QPushButton_MouseMoveEvent_Callback = void (*)(QPushButton*, QMouseEvent*);
	using QPushButton_InitStyleOption_Callback = void (*)(const QPushButton*, QStyleOptionButton*);
	using QPushButton_HitButton_Callback = bool (*)(const QPushButton*, const QPoint*);

protected:
	// Instance callback storage
	mutable QPushButton_SizeHint_Callback qpushbutton_sizehint_callback = nullptr;
	mutable QPushButton_MinimumSizeHint_Callback qpushbutton_minimumsizehint_callback = nullptr;
	mutable QPushButton_Event_Callback qpushbutton_event_callback = nullptr;
	mutable QPushButton_PaintEvent_Callback qpushbutton_paintevent_callback = nullptr;
	mutable QPushButton_KeyPressEvent_Callback qpushbutton_keypressevent_callback = nullptr;
	mutable QPushButton_FocusInEvent_Callback qpushbutton_focusinevent_callback = nullptr;
	mutable QPushButton_FocusOutEvent_Callback qpushbutton_focusoutevent_callback = nullptr;
	mutable QPushButton_MouseMoveEvent_Callback qpushbutton_mousemoveevent_callback = nullptr;
	mutable QPushButton_InitStyleOption_Callback qpushbutton_initstyleoption_callback = nullptr;
	mutable QPushButton_HitButton_Callback qpushbutton_hitbutton_callback = nullptr;

	// Instance base flags
    mutable bool qpushbutton_sizehint_isbase = false;
    mutable bool qpushbutton_minimumsizehint_isbase = false;
    mutable bool qpushbutton_event_isbase = false;
    mutable bool qpushbutton_paintevent_isbase = false;
    mutable bool qpushbutton_keypressevent_isbase = false;
    mutable bool qpushbutton_focusinevent_isbase = false;
    mutable bool qpushbutton_focusoutevent_isbase = false;
    mutable bool qpushbutton_mousemoveevent_isbase = false;
    mutable bool qpushbutton_initstyleoption_isbase = false;
    mutable bool qpushbutton_hitbutton_isbase = false;

public:
	VirtualQPushButton(QWidget* parent): QPushButton(parent) {};
	VirtualQPushButton(): QPushButton() {};
	VirtualQPushButton(const QString& text): QPushButton(text) {};
	VirtualQPushButton(const QIcon& icon, const QString& text): QPushButton(icon, text) {};
	VirtualQPushButton(const QString& text, QWidget* parent): QPushButton(text, parent) {};
	VirtualQPushButton(const QIcon& icon, const QString& text, QWidget* parent): QPushButton(icon, text, parent) {};

	~VirtualQPushButton() {
		qpushbutton_sizehint_callback = nullptr;
		qpushbutton_minimumsizehint_callback = nullptr;
		qpushbutton_event_callback = nullptr;
		qpushbutton_paintevent_callback = nullptr;
		qpushbutton_keypressevent_callback = nullptr;
		qpushbutton_focusinevent_callback = nullptr;
		qpushbutton_focusoutevent_callback = nullptr;
		qpushbutton_mousemoveevent_callback = nullptr;
		qpushbutton_initstyleoption_callback = nullptr;
		qpushbutton_hitbutton_callback = nullptr;
	}

// Callback setters
	inline void setQPushButton_SizeHint_Callback(QPushButton_SizeHint_Callback cb) const { qpushbutton_sizehint_callback = cb; }
	inline void setQPushButton_MinimumSizeHint_Callback(QPushButton_MinimumSizeHint_Callback cb) const { qpushbutton_minimumsizehint_callback = cb; }
	inline void setQPushButton_Event_Callback(QPushButton_Event_Callback cb) const { qpushbutton_event_callback = cb; }
	inline void setQPushButton_PaintEvent_Callback(QPushButton_PaintEvent_Callback cb) const { qpushbutton_paintevent_callback = cb; }
	inline void setQPushButton_KeyPressEvent_Callback(QPushButton_KeyPressEvent_Callback cb) const { qpushbutton_keypressevent_callback = cb; }
	inline void setQPushButton_FocusInEvent_Callback(QPushButton_FocusInEvent_Callback cb) const { qpushbutton_focusinevent_callback = cb; }
	inline void setQPushButton_FocusOutEvent_Callback(QPushButton_FocusOutEvent_Callback cb) const { qpushbutton_focusoutevent_callback = cb; }
	inline void setQPushButton_MouseMoveEvent_Callback(QPushButton_MouseMoveEvent_Callback cb) const { qpushbutton_mousemoveevent_callback = cb; }
	inline void setQPushButton_InitStyleOption_Callback(QPushButton_InitStyleOption_Callback cb) const { qpushbutton_initstyleoption_callback = cb; }
	inline void setQPushButton_HitButton_Callback(QPushButton_HitButton_Callback cb) const { qpushbutton_hitbutton_callback = cb; }

// Base flag setters
	inline void setQPushButton_SizeHint_IsBase(bool value) const { qpushbutton_sizehint_isbase = value; }
	inline void setQPushButton_MinimumSizeHint_IsBase(bool value) const { qpushbutton_minimumsizehint_isbase = value; }
	inline void setQPushButton_Event_IsBase(bool value) const { qpushbutton_event_isbase = value; }
	inline void setQPushButton_PaintEvent_IsBase(bool value) const { qpushbutton_paintevent_isbase = value; }
	inline void setQPushButton_KeyPressEvent_IsBase(bool value) const { qpushbutton_keypressevent_isbase = value; }
	inline void setQPushButton_FocusInEvent_IsBase(bool value) const { qpushbutton_focusinevent_isbase = value; }
	inline void setQPushButton_FocusOutEvent_IsBase(bool value) const { qpushbutton_focusoutevent_isbase = value; }
	inline void setQPushButton_MouseMoveEvent_IsBase(bool value) const { qpushbutton_mousemoveevent_isbase = value; }
	inline void setQPushButton_InitStyleOption_IsBase(bool value) const { qpushbutton_initstyleoption_isbase = value; }
	inline void setQPushButton_HitButton_IsBase(bool value) const { qpushbutton_hitbutton_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qpushbutton_sizehint_isbase) {
			qpushbutton_sizehint_isbase = false;
			return QPushButton::sizeHint();
		} else if (qpushbutton_sizehint_callback != nullptr) {
			QSize* callback_ret = qpushbutton_sizehint_callback();
			return *callback_ret;
		} else {
			return QPushButton::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qpushbutton_minimumsizehint_isbase) {
			qpushbutton_minimumsizehint_isbase = false;
			return QPushButton::minimumSizeHint();
		} else if (qpushbutton_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qpushbutton_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QPushButton::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qpushbutton_event_isbase) {
			qpushbutton_event_isbase = false;
			return QPushButton::event(e);
		} else if (qpushbutton_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qpushbutton_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QPushButton::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qpushbutton_paintevent_isbase) {
			qpushbutton_paintevent_isbase = false;
			QPushButton::paintEvent(param1);
		} else if (qpushbutton_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qpushbutton_paintevent_callback(this, cbval1);
		} else {
			QPushButton::paintEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (qpushbutton_keypressevent_isbase) {
			qpushbutton_keypressevent_isbase = false;
			QPushButton::keyPressEvent(param1);
		} else if (qpushbutton_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = param1;
			qpushbutton_keypressevent_callback(this, cbval1);
		} else {
			QPushButton::keyPressEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (qpushbutton_focusinevent_isbase) {
			qpushbutton_focusinevent_isbase = false;
			QPushButton::focusInEvent(param1);
		} else if (qpushbutton_focusinevent_callback != nullptr) {
			QFocusEvent* cbval1 = param1;
			qpushbutton_focusinevent_callback(this, cbval1);
		} else {
			QPushButton::focusInEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (qpushbutton_focusoutevent_isbase) {
			qpushbutton_focusoutevent_isbase = false;
			QPushButton::focusOutEvent(param1);
		} else if (qpushbutton_focusoutevent_callback != nullptr) {
			QFocusEvent* cbval1 = param1;
			qpushbutton_focusoutevent_callback(this, cbval1);
		} else {
			QPushButton::focusOutEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (qpushbutton_mousemoveevent_isbase) {
			qpushbutton_mousemoveevent_isbase = false;
			QPushButton::mouseMoveEvent(param1);
		} else if (qpushbutton_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qpushbutton_mousemoveevent_callback(this, cbval1);
		} else {
			QPushButton::mouseMoveEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionButton* option) const override {
		if (qpushbutton_initstyleoption_isbase) {
			qpushbutton_initstyleoption_isbase = false;
			QPushButton::initStyleOption(option);
		} else if (qpushbutton_initstyleoption_callback != nullptr) {
			QStyleOptionButton* cbval1 = option;
			qpushbutton_initstyleoption_callback(this, cbval1);
		} else {
			QPushButton::initStyleOption(option);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool hitButton(const QPoint& pos) const override {
		if (qpushbutton_hitbutton_isbase) {
			qpushbutton_hitbutton_isbase = false;
			return QPushButton::hitButton(pos);
		} else if (qpushbutton_hitbutton_callback != nullptr) {
			const QPoint* cbval1 = (const QPoint*)&pos;
			bool callback_ret = qpushbutton_hitbutton_callback(this, cbval1);
			return callback_ret;
		} else {
			return QPushButton::hitButton(pos);
		}
	}

	// Friend functions
	friend bool QPushButton_Event(QPushButton* self, QEvent* e);
	friend bool QPushButton_QBaseEvent(QPushButton* self, QEvent* e);
	friend void QPushButton_PaintEvent(QPushButton* self, QPaintEvent* param1);
	friend void QPushButton_QBasePaintEvent(QPushButton* self, QPaintEvent* param1);
	friend void QPushButton_KeyPressEvent(QPushButton* self, QKeyEvent* param1);
	friend void QPushButton_QBaseKeyPressEvent(QPushButton* self, QKeyEvent* param1);
	friend void QPushButton_FocusInEvent(QPushButton* self, QFocusEvent* param1);
	friend void QPushButton_QBaseFocusInEvent(QPushButton* self, QFocusEvent* param1);
	friend void QPushButton_FocusOutEvent(QPushButton* self, QFocusEvent* param1);
	friend void QPushButton_QBaseFocusOutEvent(QPushButton* self, QFocusEvent* param1);
	friend void QPushButton_MouseMoveEvent(QPushButton* self, QMouseEvent* param1);
	friend void QPushButton_QBaseMouseMoveEvent(QPushButton* self, QMouseEvent* param1);
	friend void QPushButton_InitStyleOption(const QPushButton* self, QStyleOptionButton* option);
	friend void QPushButton_QBaseInitStyleOption(const QPushButton* self, QStyleOptionButton* option);
	friend bool QPushButton_HitButton(const QPushButton* self, const QPoint* pos);
	friend bool QPushButton_QBaseHitButton(const QPushButton* self, const QPoint* pos);
};

#endif


