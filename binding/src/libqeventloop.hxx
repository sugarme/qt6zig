#pragma once
#ifndef QEVENTLOOP_H_C_LIBVIRTUAL
#define QEVENTLOOP_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QEventLoop so that we can call protected methods
class VirtualQEventLoop final : public QEventLoop {

public:
	// Virtual class boolean flag
	bool isVirtualQEventLoop= true;

	// Virtual class public types (including callbacks)
	using QEventLoop_Event_Callback = bool (*)(QEventLoop*, QEvent*);

protected:
	// Instance callback storage
	mutable QEventLoop_Event_Callback qeventloop_event_callback = nullptr;

	// Instance base flags
    mutable bool qeventloop_event_isbase = false;

public:
	VirtualQEventLoop(): QEventLoop() {};
	VirtualQEventLoop(QObject* parent): QEventLoop(parent) {};

	~VirtualQEventLoop() {
		qeventloop_event_callback = nullptr;
	}

// Callback setters
	inline void setQEventLoop_Event_Callback(QEventLoop_Event_Callback cb) const { qeventloop_event_callback = cb; }

// Base flag setters
	inline void setQEventLoop_Event_IsBase(bool value) const { qeventloop_event_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qeventloop_event_isbase) {
			qeventloop_event_isbase = false;
			return QEventLoop::event(event);
		} else if (qeventloop_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qeventloop_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QEventLoop::event(event);
		}
	}
};

#endif


