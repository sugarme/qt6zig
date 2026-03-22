#pragma once
#ifndef QERRORMESSAGE_H_C_LIBVIRTUAL
#define QERRORMESSAGE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QErrorMessage so that we can call protected methods
class VirtualQErrorMessage final : public QErrorMessage {

public:
	// Virtual class boolean flag
	bool isVirtualQErrorMessage= true;

	// Virtual class public types (including callbacks)
	using QErrorMessage_Done_Callback = void (*)(QErrorMessage*, int);
	using QErrorMessage_ChangeEvent_Callback = void (*)(QErrorMessage*, QEvent*);

protected:
	// Instance callback storage
	mutable QErrorMessage_Done_Callback qerrormessage_done_callback = nullptr;
	mutable QErrorMessage_ChangeEvent_Callback qerrormessage_changeevent_callback = nullptr;

	// Instance base flags
    mutable bool qerrormessage_done_isbase = false;
    mutable bool qerrormessage_changeevent_isbase = false;

public:
	VirtualQErrorMessage(QWidget* parent): QErrorMessage(parent) {};
	VirtualQErrorMessage(): QErrorMessage() {};

	~VirtualQErrorMessage() {
		qerrormessage_done_callback = nullptr;
		qerrormessage_changeevent_callback = nullptr;
	}

// Callback setters
	inline void setQErrorMessage_Done_Callback(QErrorMessage_Done_Callback cb) const { qerrormessage_done_callback = cb; }
	inline void setQErrorMessage_ChangeEvent_Callback(QErrorMessage_ChangeEvent_Callback cb) const { qerrormessage_changeevent_callback = cb; }

// Base flag setters
	inline void setQErrorMessage_Done_IsBase(bool value) const { qerrormessage_done_isbase = value; }
	inline void setQErrorMessage_ChangeEvent_IsBase(bool value) const { qerrormessage_changeevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void done(int param1) override {
		if (qerrormessage_done_isbase) {
			qerrormessage_done_isbase = false;
			QErrorMessage::done(param1);
		} else if (qerrormessage_done_callback != nullptr) {
			int cbval1 = param1;
			qerrormessage_done_callback(this, cbval1);
		} else {
			QErrorMessage::done(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* e) override {
		if (qerrormessage_changeevent_isbase) {
			qerrormessage_changeevent_isbase = false;
			QErrorMessage::changeEvent(e);
		} else if (qerrormessage_changeevent_callback != nullptr) {
			QEvent* cbval1 = e;
			qerrormessage_changeevent_callback(this, cbval1);
		} else {
			QErrorMessage::changeEvent(e);
		}
	}

	// Friend functions
	friend void QErrorMessage_Done(QErrorMessage* self, int param1);
	friend void QErrorMessage_QBaseDone(QErrorMessage* self, int param1);
	friend void QErrorMessage_ChangeEvent(QErrorMessage* self, QEvent* e);
	friend void QErrorMessage_QBaseChangeEvent(QErrorMessage* self, QEvent* e);
};

#endif


