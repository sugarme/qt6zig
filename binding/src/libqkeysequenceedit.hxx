#pragma once
#ifndef QKEYSEQUENCEEDIT_H_C_LIBVIRTUAL
#define QKEYSEQUENCEEDIT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QKeySequenceEdit so that we can call protected methods
class VirtualQKeySequenceEdit final : public QKeySequenceEdit {

public:
	// Virtual class boolean flag
	bool isVirtualQKeySequenceEdit= true;

	// Virtual class public types (including callbacks)
	using QKeySequenceEdit_Event_Callback = bool (*)(QKeySequenceEdit*, QEvent*);
	using QKeySequenceEdit_KeyPressEvent_Callback = void (*)(QKeySequenceEdit*, QKeyEvent*);
	using QKeySequenceEdit_KeyReleaseEvent_Callback = void (*)(QKeySequenceEdit*, QKeyEvent*);
	using QKeySequenceEdit_TimerEvent_Callback = void (*)(QKeySequenceEdit*, QTimerEvent*);
	using QKeySequenceEdit_FocusOutEvent_Callback = void (*)(QKeySequenceEdit*, QFocusEvent*);

protected:
	// Instance callback storage
	mutable QKeySequenceEdit_Event_Callback qkeysequenceedit_event_callback = nullptr;
	mutable QKeySequenceEdit_KeyPressEvent_Callback qkeysequenceedit_keypressevent_callback = nullptr;
	mutable QKeySequenceEdit_KeyReleaseEvent_Callback qkeysequenceedit_keyreleaseevent_callback = nullptr;
	mutable QKeySequenceEdit_TimerEvent_Callback qkeysequenceedit_timerevent_callback = nullptr;
	mutable QKeySequenceEdit_FocusOutEvent_Callback qkeysequenceedit_focusoutevent_callback = nullptr;

	// Instance base flags
    mutable bool qkeysequenceedit_event_isbase = false;
    mutable bool qkeysequenceedit_keypressevent_isbase = false;
    mutable bool qkeysequenceedit_keyreleaseevent_isbase = false;
    mutable bool qkeysequenceedit_timerevent_isbase = false;
    mutable bool qkeysequenceedit_focusoutevent_isbase = false;

public:
	VirtualQKeySequenceEdit(QWidget* parent): QKeySequenceEdit(parent) {};
	VirtualQKeySequenceEdit(): QKeySequenceEdit() {};
	VirtualQKeySequenceEdit(const QKeySequence& keySequence): QKeySequenceEdit(keySequence) {};
	VirtualQKeySequenceEdit(const QKeySequence& keySequence, QWidget* parent): QKeySequenceEdit(keySequence, parent) {};

	~VirtualQKeySequenceEdit() {
		qkeysequenceedit_event_callback = nullptr;
		qkeysequenceedit_keypressevent_callback = nullptr;
		qkeysequenceedit_keyreleaseevent_callback = nullptr;
		qkeysequenceedit_timerevent_callback = nullptr;
		qkeysequenceedit_focusoutevent_callback = nullptr;
	}

// Callback setters
	inline void setQKeySequenceEdit_Event_Callback(QKeySequenceEdit_Event_Callback cb) const { qkeysequenceedit_event_callback = cb; }
	inline void setQKeySequenceEdit_KeyPressEvent_Callback(QKeySequenceEdit_KeyPressEvent_Callback cb) const { qkeysequenceedit_keypressevent_callback = cb; }
	inline void setQKeySequenceEdit_KeyReleaseEvent_Callback(QKeySequenceEdit_KeyReleaseEvent_Callback cb) const { qkeysequenceedit_keyreleaseevent_callback = cb; }
	inline void setQKeySequenceEdit_TimerEvent_Callback(QKeySequenceEdit_TimerEvent_Callback cb) const { qkeysequenceedit_timerevent_callback = cb; }
	inline void setQKeySequenceEdit_FocusOutEvent_Callback(QKeySequenceEdit_FocusOutEvent_Callback cb) const { qkeysequenceedit_focusoutevent_callback = cb; }

// Base flag setters
	inline void setQKeySequenceEdit_Event_IsBase(bool value) const { qkeysequenceedit_event_isbase = value; }
	inline void setQKeySequenceEdit_KeyPressEvent_IsBase(bool value) const { qkeysequenceedit_keypressevent_isbase = value; }
	inline void setQKeySequenceEdit_KeyReleaseEvent_IsBase(bool value) const { qkeysequenceedit_keyreleaseevent_isbase = value; }
	inline void setQKeySequenceEdit_TimerEvent_IsBase(bool value) const { qkeysequenceedit_timerevent_isbase = value; }
	inline void setQKeySequenceEdit_FocusOutEvent_IsBase(bool value) const { qkeysequenceedit_focusoutevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* param1) override {
		if (qkeysequenceedit_event_isbase) {
			qkeysequenceedit_event_isbase = false;
			return QKeySequenceEdit::event(param1);
		} else if (qkeysequenceedit_event_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qkeysequenceedit_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QKeySequenceEdit::event(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (qkeysequenceedit_keypressevent_isbase) {
			qkeysequenceedit_keypressevent_isbase = false;
			QKeySequenceEdit::keyPressEvent(param1);
		} else if (qkeysequenceedit_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = param1;
			qkeysequenceedit_keypressevent_callback(this, cbval1);
		} else {
			QKeySequenceEdit::keyPressEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyReleaseEvent(QKeyEvent* param1) override {
		if (qkeysequenceedit_keyreleaseevent_isbase) {
			qkeysequenceedit_keyreleaseevent_isbase = false;
			QKeySequenceEdit::keyReleaseEvent(param1);
		} else if (qkeysequenceedit_keyreleaseevent_callback != nullptr) {
			QKeyEvent* cbval1 = param1;
			qkeysequenceedit_keyreleaseevent_callback(this, cbval1);
		} else {
			QKeySequenceEdit::keyReleaseEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* param1) override {
		if (qkeysequenceedit_timerevent_isbase) {
			qkeysequenceedit_timerevent_isbase = false;
			QKeySequenceEdit::timerEvent(param1);
		} else if (qkeysequenceedit_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = param1;
			qkeysequenceedit_timerevent_callback(this, cbval1);
		} else {
			QKeySequenceEdit::timerEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (qkeysequenceedit_focusoutevent_isbase) {
			qkeysequenceedit_focusoutevent_isbase = false;
			QKeySequenceEdit::focusOutEvent(param1);
		} else if (qkeysequenceedit_focusoutevent_callback != nullptr) {
			QFocusEvent* cbval1 = param1;
			qkeysequenceedit_focusoutevent_callback(this, cbval1);
		} else {
			QKeySequenceEdit::focusOutEvent(param1);
		}
	}

	// Friend functions
	friend bool QKeySequenceEdit_Event(QKeySequenceEdit* self, QEvent* param1);
	friend bool QKeySequenceEdit_QBaseEvent(QKeySequenceEdit* self, QEvent* param1);
	friend void QKeySequenceEdit_KeyPressEvent(QKeySequenceEdit* self, QKeyEvent* param1);
	friend void QKeySequenceEdit_QBaseKeyPressEvent(QKeySequenceEdit* self, QKeyEvent* param1);
	friend void QKeySequenceEdit_KeyReleaseEvent(QKeySequenceEdit* self, QKeyEvent* param1);
	friend void QKeySequenceEdit_QBaseKeyReleaseEvent(QKeySequenceEdit* self, QKeyEvent* param1);
	friend void QKeySequenceEdit_TimerEvent(QKeySequenceEdit* self, QTimerEvent* param1);
	friend void QKeySequenceEdit_QBaseTimerEvent(QKeySequenceEdit* self, QTimerEvent* param1);
	friend void QKeySequenceEdit_FocusOutEvent(QKeySequenceEdit* self, QFocusEvent* param1);
	friend void QKeySequenceEdit_QBaseFocusOutEvent(QKeySequenceEdit* self, QFocusEvent* param1);
};

#endif


