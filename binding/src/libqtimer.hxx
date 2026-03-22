#pragma once
#ifndef QTIMER_H_C_LIBVIRTUAL
#define QTIMER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QTimer so that we can call protected methods
class VirtualQTimer final : public QTimer {

public:
	// Virtual class boolean flag
	bool isVirtualQTimer= true;

	// Virtual class public types (including callbacks)
	using QTimer_TimerEvent_Callback = void (*)(QTimer*, QTimerEvent*);

protected:
	// Instance callback storage
	mutable QTimer_TimerEvent_Callback qtimer_timerevent_callback = nullptr;

	// Instance base flags
    mutable bool qtimer_timerevent_isbase = false;

public:
	VirtualQTimer(): QTimer() {};
	VirtualQTimer(QObject* parent): QTimer(parent) {};

	~VirtualQTimer() {
		qtimer_timerevent_callback = nullptr;
	}

// Callback setters
	inline void setQTimer_TimerEvent_Callback(QTimer_TimerEvent_Callback cb) const { qtimer_timerevent_callback = cb; }

// Base flag setters
	inline void setQTimer_TimerEvent_IsBase(bool value) const { qtimer_timerevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* param1) override {
		if (qtimer_timerevent_isbase) {
			qtimer_timerevent_isbase = false;
			QTimer::timerEvent(param1);
		} else if (qtimer_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = param1;
			qtimer_timerevent_callback(this, cbval1);
		} else {
			QTimer::timerEvent(param1);
		}
	}

	// Friend functions
	friend void QTimer_TimerEvent(QTimer* self, QTimerEvent* param1);
	friend void QTimer_QBaseTimerEvent(QTimer* self, QTimerEvent* param1);
};

#endif


