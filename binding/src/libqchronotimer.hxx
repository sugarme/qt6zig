#pragma once
#ifndef QCHRONOTIMER_H_C_LIBVIRTUAL
#define QCHRONOTIMER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QChronoTimer so that we can call protected methods
class VirtualQChronoTimer final : public QChronoTimer {

public:
	// Virtual class boolean flag
	bool isVirtualQChronoTimer= true;

	// Virtual class public types (including callbacks)
	using QChronoTimer_TimerEvent_Callback = void (*)(QChronoTimer*, QTimerEvent*);

protected:
	// Instance callback storage
	mutable QChronoTimer_TimerEvent_Callback qchronotimer_timerevent_callback = nullptr;

	// Instance base flags
    mutable bool qchronotimer_timerevent_isbase = false;

public:
	VirtualQChronoTimer(): QChronoTimer() {};
	VirtualQChronoTimer(QObject* parent): QChronoTimer(parent) {};

	~VirtualQChronoTimer() {
		qchronotimer_timerevent_callback = nullptr;
	}

// Callback setters
	inline void setQChronoTimer_TimerEvent_Callback(QChronoTimer_TimerEvent_Callback cb) const { qchronotimer_timerevent_callback = cb; }

// Base flag setters
	inline void setQChronoTimer_TimerEvent_IsBase(bool value) const { qchronotimer_timerevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* param1) override {
		if (qchronotimer_timerevent_isbase) {
			qchronotimer_timerevent_isbase = false;
			QChronoTimer::timerEvent(param1);
		} else if (qchronotimer_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = param1;
			qchronotimer_timerevent_callback(this, cbval1);
		} else {
			QChronoTimer::timerEvent(param1);
		}
	}

	// Friend functions
	friend void QChronoTimer_TimerEvent(QChronoTimer* self, QTimerEvent* param1);
	friend void QChronoTimer_QBaseTimerEvent(QChronoTimer* self, QTimerEvent* param1);
};

#endif


