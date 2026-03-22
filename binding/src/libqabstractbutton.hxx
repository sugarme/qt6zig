#pragma once
#ifndef QABSTRACTBUTTON_H_C_LIBVIRTUAL
#define QABSTRACTBUTTON_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QAbstractButton so that we can call protected methods
class VirtualQAbstractButton : public QAbstractButton {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractButton= true;

	// Virtual class public types (including callbacks)
	using QAbstractButton_PaintEvent_Callback = void (*)(QAbstractButton*, QPaintEvent*);
	using QAbstractButton_HitButton_Callback = bool (*)(const QAbstractButton*, const QPoint*);
	using QAbstractButton_CheckStateSet_Callback = void (*)();
	using QAbstractButton_NextCheckState_Callback = void (*)();
	using QAbstractButton_Event_Callback = bool (*)(QAbstractButton*, QEvent*);
	using QAbstractButton_KeyPressEvent_Callback = void (*)(QAbstractButton*, QKeyEvent*);
	using QAbstractButton_KeyReleaseEvent_Callback = void (*)(QAbstractButton*, QKeyEvent*);
	using QAbstractButton_MousePressEvent_Callback = void (*)(QAbstractButton*, QMouseEvent*);
	using QAbstractButton_MouseReleaseEvent_Callback = void (*)(QAbstractButton*, QMouseEvent*);
	using QAbstractButton_MouseMoveEvent_Callback = void (*)(QAbstractButton*, QMouseEvent*);
	using QAbstractButton_FocusInEvent_Callback = void (*)(QAbstractButton*, QFocusEvent*);
	using QAbstractButton_FocusOutEvent_Callback = void (*)(QAbstractButton*, QFocusEvent*);
	using QAbstractButton_ChangeEvent_Callback = void (*)(QAbstractButton*, QEvent*);
	using QAbstractButton_TimerEvent_Callback = void (*)(QAbstractButton*, QTimerEvent*);

protected:
	// Instance callback storage
	mutable QAbstractButton_PaintEvent_Callback qabstractbutton_paintevent_callback = nullptr;
	mutable QAbstractButton_HitButton_Callback qabstractbutton_hitbutton_callback = nullptr;
	mutable QAbstractButton_CheckStateSet_Callback qabstractbutton_checkstateset_callback = nullptr;
	mutable QAbstractButton_NextCheckState_Callback qabstractbutton_nextcheckstate_callback = nullptr;
	mutable QAbstractButton_Event_Callback qabstractbutton_event_callback = nullptr;
	mutable QAbstractButton_KeyPressEvent_Callback qabstractbutton_keypressevent_callback = nullptr;
	mutable QAbstractButton_KeyReleaseEvent_Callback qabstractbutton_keyreleaseevent_callback = nullptr;
	mutable QAbstractButton_MousePressEvent_Callback qabstractbutton_mousepressevent_callback = nullptr;
	mutable QAbstractButton_MouseReleaseEvent_Callback qabstractbutton_mousereleaseevent_callback = nullptr;
	mutable QAbstractButton_MouseMoveEvent_Callback qabstractbutton_mousemoveevent_callback = nullptr;
	mutable QAbstractButton_FocusInEvent_Callback qabstractbutton_focusinevent_callback = nullptr;
	mutable QAbstractButton_FocusOutEvent_Callback qabstractbutton_focusoutevent_callback = nullptr;
	mutable QAbstractButton_ChangeEvent_Callback qabstractbutton_changeevent_callback = nullptr;
	mutable QAbstractButton_TimerEvent_Callback qabstractbutton_timerevent_callback = nullptr;

	// Instance base flags
    mutable bool qabstractbutton_paintevent_isbase = false;
    mutable bool qabstractbutton_hitbutton_isbase = false;
    mutable bool qabstractbutton_checkstateset_isbase = false;
    mutable bool qabstractbutton_nextcheckstate_isbase = false;
    mutable bool qabstractbutton_event_isbase = false;
    mutable bool qabstractbutton_keypressevent_isbase = false;
    mutable bool qabstractbutton_keyreleaseevent_isbase = false;
    mutable bool qabstractbutton_mousepressevent_isbase = false;
    mutable bool qabstractbutton_mousereleaseevent_isbase = false;
    mutable bool qabstractbutton_mousemoveevent_isbase = false;
    mutable bool qabstractbutton_focusinevent_isbase = false;
    mutable bool qabstractbutton_focusoutevent_isbase = false;
    mutable bool qabstractbutton_changeevent_isbase = false;
    mutable bool qabstractbutton_timerevent_isbase = false;

public:
	VirtualQAbstractButton(QWidget* parent): QAbstractButton(parent) {};
	VirtualQAbstractButton(): QAbstractButton() {};

	~VirtualQAbstractButton() {
		qabstractbutton_paintevent_callback = nullptr;
		qabstractbutton_hitbutton_callback = nullptr;
		qabstractbutton_checkstateset_callback = nullptr;
		qabstractbutton_nextcheckstate_callback = nullptr;
		qabstractbutton_event_callback = nullptr;
		qabstractbutton_keypressevent_callback = nullptr;
		qabstractbutton_keyreleaseevent_callback = nullptr;
		qabstractbutton_mousepressevent_callback = nullptr;
		qabstractbutton_mousereleaseevent_callback = nullptr;
		qabstractbutton_mousemoveevent_callback = nullptr;
		qabstractbutton_focusinevent_callback = nullptr;
		qabstractbutton_focusoutevent_callback = nullptr;
		qabstractbutton_changeevent_callback = nullptr;
		qabstractbutton_timerevent_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractButton_PaintEvent_Callback(QAbstractButton_PaintEvent_Callback cb) const { qabstractbutton_paintevent_callback = cb; }
	inline void setQAbstractButton_HitButton_Callback(QAbstractButton_HitButton_Callback cb) const { qabstractbutton_hitbutton_callback = cb; }
	inline void setQAbstractButton_CheckStateSet_Callback(QAbstractButton_CheckStateSet_Callback cb) const { qabstractbutton_checkstateset_callback = cb; }
	inline void setQAbstractButton_NextCheckState_Callback(QAbstractButton_NextCheckState_Callback cb) const { qabstractbutton_nextcheckstate_callback = cb; }
	inline void setQAbstractButton_Event_Callback(QAbstractButton_Event_Callback cb) const { qabstractbutton_event_callback = cb; }
	inline void setQAbstractButton_KeyPressEvent_Callback(QAbstractButton_KeyPressEvent_Callback cb) const { qabstractbutton_keypressevent_callback = cb; }
	inline void setQAbstractButton_KeyReleaseEvent_Callback(QAbstractButton_KeyReleaseEvent_Callback cb) const { qabstractbutton_keyreleaseevent_callback = cb; }
	inline void setQAbstractButton_MousePressEvent_Callback(QAbstractButton_MousePressEvent_Callback cb) const { qabstractbutton_mousepressevent_callback = cb; }
	inline void setQAbstractButton_MouseReleaseEvent_Callback(QAbstractButton_MouseReleaseEvent_Callback cb) const { qabstractbutton_mousereleaseevent_callback = cb; }
	inline void setQAbstractButton_MouseMoveEvent_Callback(QAbstractButton_MouseMoveEvent_Callback cb) const { qabstractbutton_mousemoveevent_callback = cb; }
	inline void setQAbstractButton_FocusInEvent_Callback(QAbstractButton_FocusInEvent_Callback cb) const { qabstractbutton_focusinevent_callback = cb; }
	inline void setQAbstractButton_FocusOutEvent_Callback(QAbstractButton_FocusOutEvent_Callback cb) const { qabstractbutton_focusoutevent_callback = cb; }
	inline void setQAbstractButton_ChangeEvent_Callback(QAbstractButton_ChangeEvent_Callback cb) const { qabstractbutton_changeevent_callback = cb; }
	inline void setQAbstractButton_TimerEvent_Callback(QAbstractButton_TimerEvent_Callback cb) const { qabstractbutton_timerevent_callback = cb; }

// Base flag setters
	inline void setQAbstractButton_PaintEvent_IsBase(bool value) const { qabstractbutton_paintevent_isbase = value; }
	inline void setQAbstractButton_HitButton_IsBase(bool value) const { qabstractbutton_hitbutton_isbase = value; }
	inline void setQAbstractButton_CheckStateSet_IsBase(bool value) const { qabstractbutton_checkstateset_isbase = value; }
	inline void setQAbstractButton_NextCheckState_IsBase(bool value) const { qabstractbutton_nextcheckstate_isbase = value; }
	inline void setQAbstractButton_Event_IsBase(bool value) const { qabstractbutton_event_isbase = value; }
	inline void setQAbstractButton_KeyPressEvent_IsBase(bool value) const { qabstractbutton_keypressevent_isbase = value; }
	inline void setQAbstractButton_KeyReleaseEvent_IsBase(bool value) const { qabstractbutton_keyreleaseevent_isbase = value; }
	inline void setQAbstractButton_MousePressEvent_IsBase(bool value) const { qabstractbutton_mousepressevent_isbase = value; }
	inline void setQAbstractButton_MouseReleaseEvent_IsBase(bool value) const { qabstractbutton_mousereleaseevent_isbase = value; }
	inline void setQAbstractButton_MouseMoveEvent_IsBase(bool value) const { qabstractbutton_mousemoveevent_isbase = value; }
	inline void setQAbstractButton_FocusInEvent_IsBase(bool value) const { qabstractbutton_focusinevent_isbase = value; }
	inline void setQAbstractButton_FocusOutEvent_IsBase(bool value) const { qabstractbutton_focusoutevent_isbase = value; }
	inline void setQAbstractButton_ChangeEvent_IsBase(bool value) const { qabstractbutton_changeevent_isbase = value; }
	inline void setQAbstractButton_TimerEvent_IsBase(bool value) const { qabstractbutton_timerevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* e) override {
		if (qabstractbutton_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = e;
			qabstractbutton_paintevent_callback(this, cbval1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool hitButton(const QPoint& pos) const override {
		if (qabstractbutton_hitbutton_isbase) {
			qabstractbutton_hitbutton_isbase = false;
			return QAbstractButton::hitButton(pos);
		} else if (qabstractbutton_hitbutton_callback != nullptr) {
			const QPoint* cbval1 = (const QPoint*)&pos;
			bool callback_ret = qabstractbutton_hitbutton_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractButton::hitButton(pos);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void checkStateSet() override {
		if (qabstractbutton_checkstateset_isbase) {
			qabstractbutton_checkstateset_isbase = false;
			QAbstractButton::checkStateSet();
		} else if (qabstractbutton_checkstateset_callback != nullptr) {
			qabstractbutton_checkstateset_callback();
		} else {
			QAbstractButton::checkStateSet();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void nextCheckState() override {
		if (qabstractbutton_nextcheckstate_isbase) {
			qabstractbutton_nextcheckstate_isbase = false;
			QAbstractButton::nextCheckState();
		} else if (qabstractbutton_nextcheckstate_callback != nullptr) {
			qabstractbutton_nextcheckstate_callback();
		} else {
			QAbstractButton::nextCheckState();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qabstractbutton_event_isbase) {
			qabstractbutton_event_isbase = false;
			return QAbstractButton::event(e);
		} else if (qabstractbutton_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qabstractbutton_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractButton::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (qabstractbutton_keypressevent_isbase) {
			qabstractbutton_keypressevent_isbase = false;
			QAbstractButton::keyPressEvent(e);
		} else if (qabstractbutton_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = e;
			qabstractbutton_keypressevent_callback(this, cbval1);
		} else {
			QAbstractButton::keyPressEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (qabstractbutton_keyreleaseevent_isbase) {
			qabstractbutton_keyreleaseevent_isbase = false;
			QAbstractButton::keyReleaseEvent(e);
		} else if (qabstractbutton_keyreleaseevent_callback != nullptr) {
			QKeyEvent* cbval1 = e;
			qabstractbutton_keyreleaseevent_callback(this, cbval1);
		} else {
			QAbstractButton::keyReleaseEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (qabstractbutton_mousepressevent_isbase) {
			qabstractbutton_mousepressevent_isbase = false;
			QAbstractButton::mousePressEvent(e);
		} else if (qabstractbutton_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = e;
			qabstractbutton_mousepressevent_callback(this, cbval1);
		} else {
			QAbstractButton::mousePressEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (qabstractbutton_mousereleaseevent_isbase) {
			qabstractbutton_mousereleaseevent_isbase = false;
			QAbstractButton::mouseReleaseEvent(e);
		} else if (qabstractbutton_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = e;
			qabstractbutton_mousereleaseevent_callback(this, cbval1);
		} else {
			QAbstractButton::mouseReleaseEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (qabstractbutton_mousemoveevent_isbase) {
			qabstractbutton_mousemoveevent_isbase = false;
			QAbstractButton::mouseMoveEvent(e);
		} else if (qabstractbutton_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = e;
			qabstractbutton_mousemoveevent_callback(this, cbval1);
		} else {
			QAbstractButton::mouseMoveEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusInEvent(QFocusEvent* e) override {
		if (qabstractbutton_focusinevent_isbase) {
			qabstractbutton_focusinevent_isbase = false;
			QAbstractButton::focusInEvent(e);
		} else if (qabstractbutton_focusinevent_callback != nullptr) {
			QFocusEvent* cbval1 = e;
			qabstractbutton_focusinevent_callback(this, cbval1);
		} else {
			QAbstractButton::focusInEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (qabstractbutton_focusoutevent_isbase) {
			qabstractbutton_focusoutevent_isbase = false;
			QAbstractButton::focusOutEvent(e);
		} else if (qabstractbutton_focusoutevent_callback != nullptr) {
			QFocusEvent* cbval1 = e;
			qabstractbutton_focusoutevent_callback(this, cbval1);
		} else {
			QAbstractButton::focusOutEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* e) override {
		if (qabstractbutton_changeevent_isbase) {
			qabstractbutton_changeevent_isbase = false;
			QAbstractButton::changeEvent(e);
		} else if (qabstractbutton_changeevent_callback != nullptr) {
			QEvent* cbval1 = e;
			qabstractbutton_changeevent_callback(this, cbval1);
		} else {
			QAbstractButton::changeEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* e) override {
		if (qabstractbutton_timerevent_isbase) {
			qabstractbutton_timerevent_isbase = false;
			QAbstractButton::timerEvent(e);
		} else if (qabstractbutton_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = e;
			qabstractbutton_timerevent_callback(this, cbval1);
		} else {
			QAbstractButton::timerEvent(e);
		}
	}

	// Friend functions
	friend void QAbstractButton_PaintEvent(QAbstractButton* self, QPaintEvent* e);
	friend void QAbstractButton_QBasePaintEvent(QAbstractButton* self, QPaintEvent* e);
	friend bool QAbstractButton_HitButton(const QAbstractButton* self, const QPoint* pos);
	friend bool QAbstractButton_QBaseHitButton(const QAbstractButton* self, const QPoint* pos);
	friend void QAbstractButton_CheckStateSet(QAbstractButton* self);
	friend void QAbstractButton_QBaseCheckStateSet(QAbstractButton* self);
	friend void QAbstractButton_NextCheckState(QAbstractButton* self);
	friend void QAbstractButton_QBaseNextCheckState(QAbstractButton* self);
	friend bool QAbstractButton_Event(QAbstractButton* self, QEvent* e);
	friend bool QAbstractButton_QBaseEvent(QAbstractButton* self, QEvent* e);
	friend void QAbstractButton_KeyPressEvent(QAbstractButton* self, QKeyEvent* e);
	friend void QAbstractButton_QBaseKeyPressEvent(QAbstractButton* self, QKeyEvent* e);
	friend void QAbstractButton_KeyReleaseEvent(QAbstractButton* self, QKeyEvent* e);
	friend void QAbstractButton_QBaseKeyReleaseEvent(QAbstractButton* self, QKeyEvent* e);
	friend void QAbstractButton_MousePressEvent(QAbstractButton* self, QMouseEvent* e);
	friend void QAbstractButton_QBaseMousePressEvent(QAbstractButton* self, QMouseEvent* e);
	friend void QAbstractButton_MouseReleaseEvent(QAbstractButton* self, QMouseEvent* e);
	friend void QAbstractButton_QBaseMouseReleaseEvent(QAbstractButton* self, QMouseEvent* e);
	friend void QAbstractButton_MouseMoveEvent(QAbstractButton* self, QMouseEvent* e);
	friend void QAbstractButton_QBaseMouseMoveEvent(QAbstractButton* self, QMouseEvent* e);
	friend void QAbstractButton_FocusInEvent(QAbstractButton* self, QFocusEvent* e);
	friend void QAbstractButton_QBaseFocusInEvent(QAbstractButton* self, QFocusEvent* e);
	friend void QAbstractButton_FocusOutEvent(QAbstractButton* self, QFocusEvent* e);
	friend void QAbstractButton_QBaseFocusOutEvent(QAbstractButton* self, QFocusEvent* e);
	friend void QAbstractButton_ChangeEvent(QAbstractButton* self, QEvent* e);
	friend void QAbstractButton_QBaseChangeEvent(QAbstractButton* self, QEvent* e);
	friend void QAbstractButton_TimerEvent(QAbstractButton* self, QTimerEvent* e);
	friend void QAbstractButton_QBaseTimerEvent(QAbstractButton* self, QTimerEvent* e);
};

#endif


