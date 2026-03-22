#pragma once
#ifndef QWINEVENTNOTIFIER_H_C_LIBVIRTUAL
#define QWINEVENTNOTIFIER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QWinEventNotifier so that we can call protected methods
class VirtualQWinEventNotifier final : public QWinEventNotifier {

public:
	// Virtual class boolean flag
	bool isVirtualQWinEventNotifier= true;

	// Virtual class public types (including callbacks)
	using QWinEventNotifier_Event_Callback = bool (*)(QWinEventNotifier*, QEvent*);

protected:
	// Instance callback storage
	mutable QWinEventNotifier_Event_Callback qwineventnotifier_event_callback = nullptr;

	// Instance base flags
    mutable bool qwineventnotifier_event_isbase = false;

public:
	VirtualQWinEventNotifier(): QWinEventNotifier() {};
	VirtualQWinEventNotifier(void** hEvent): QWinEventNotifier(hEvent) {};
	VirtualQWinEventNotifier(QObject* parent): QWinEventNotifier(parent) {};
	VirtualQWinEventNotifier(void** hEvent, QObject* parent): QWinEventNotifier(hEvent, parent) {};

	~VirtualQWinEventNotifier() {
		qwineventnotifier_event_callback = nullptr;
	}

// Callback setters
	inline void setQWinEventNotifier_Event_Callback(QWinEventNotifier_Event_Callback cb) const { qwineventnotifier_event_callback = cb; }

// Base flag setters
	inline void setQWinEventNotifier_Event_IsBase(bool value) const { qwineventnotifier_event_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qwineventnotifier_event_isbase) {
			qwineventnotifier_event_isbase = false;
			return QWinEventNotifier::event(e);
		} else if (qwineventnotifier_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qwineventnotifier_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QWinEventNotifier::event(e);
		}
	}

	// Friend functions
	friend bool QWinEventNotifier_Event(QWinEventNotifier* self, QEvent* e);
	friend bool QWinEventNotifier_QBaseEvent(QWinEventNotifier* self, QEvent* e);
};

#endif


