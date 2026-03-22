#pragma once
#ifndef QSOCKETNOTIFIER_H_C_LIBVIRTUAL
#define QSOCKETNOTIFIER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QSocketNotifier so that we can call protected methods
class VirtualQSocketNotifier final : public QSocketNotifier {

public:
	// Virtual class boolean flag
	bool isVirtualQSocketNotifier= true;

	// Virtual class public types (including callbacks)
	using QSocketNotifier_Event_Callback = bool (*)(QSocketNotifier*, QEvent*);

protected:
	// Instance callback storage
	mutable QSocketNotifier_Event_Callback qsocketnotifier_event_callback = nullptr;

	// Instance base flags
    mutable bool qsocketnotifier_event_isbase = false;

public:
	VirtualQSocketNotifier(QSocketNotifier::Type param1): QSocketNotifier(param1) {};
	VirtualQSocketNotifier(qintptr socket, QSocketNotifier::Type param2): QSocketNotifier(socket, param2) {};
	VirtualQSocketNotifier(QSocketNotifier::Type param1, QObject* parent): QSocketNotifier(param1, parent) {};
	VirtualQSocketNotifier(qintptr socket, QSocketNotifier::Type param2, QObject* parent): QSocketNotifier(socket, param2, parent) {};

	~VirtualQSocketNotifier() {
		qsocketnotifier_event_callback = nullptr;
	}

// Callback setters
	inline void setQSocketNotifier_Event_Callback(QSocketNotifier_Event_Callback cb) const { qsocketnotifier_event_callback = cb; }

// Base flag setters
	inline void setQSocketNotifier_Event_IsBase(bool value) const { qsocketnotifier_event_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* param1) override {
		if (qsocketnotifier_event_isbase) {
			qsocketnotifier_event_isbase = false;
			return QSocketNotifier::event(param1);
		} else if (qsocketnotifier_event_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qsocketnotifier_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSocketNotifier::event(param1);
		}
	}

	// Friend functions
	friend bool QSocketNotifier_Event(QSocketNotifier* self, QEvent* param1);
	friend bool QSocketNotifier_QBaseEvent(QSocketNotifier* self, QEvent* param1);
};

#endif


