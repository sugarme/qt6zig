#pragma once
#ifndef QTIMELINE_H_C_LIBVIRTUAL
#define QTIMELINE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QTimeLine so that we can call protected methods
class VirtualQTimeLine final : public QTimeLine {

public:
	// Virtual class boolean flag
	bool isVirtualQTimeLine= true;

	// Virtual class public types (including callbacks)
	using QTimeLine_ValueForTime_Callback = double (*)(const QTimeLine*, int);
	using QTimeLine_TimerEvent_Callback = void (*)(QTimeLine*, QTimerEvent*);

protected:
	// Instance callback storage
	mutable QTimeLine_ValueForTime_Callback qtimeline_valuefortime_callback = nullptr;
	mutable QTimeLine_TimerEvent_Callback qtimeline_timerevent_callback = nullptr;

	// Instance base flags
    mutable bool qtimeline_valuefortime_isbase = false;
    mutable bool qtimeline_timerevent_isbase = false;

public:
	VirtualQTimeLine(): QTimeLine() {};
	VirtualQTimeLine(int duration): QTimeLine(duration) {};
	VirtualQTimeLine(int duration, QObject* parent): QTimeLine(duration, parent) {};

	~VirtualQTimeLine() {
		qtimeline_valuefortime_callback = nullptr;
		qtimeline_timerevent_callback = nullptr;
	}

// Callback setters
	inline void setQTimeLine_ValueForTime_Callback(QTimeLine_ValueForTime_Callback cb) const { qtimeline_valuefortime_callback = cb; }
	inline void setQTimeLine_TimerEvent_Callback(QTimeLine_TimerEvent_Callback cb) const { qtimeline_timerevent_callback = cb; }

// Base flag setters
	inline void setQTimeLine_ValueForTime_IsBase(bool value) const { qtimeline_valuefortime_isbase = value; }
	inline void setQTimeLine_TimerEvent_IsBase(bool value) const { qtimeline_timerevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual double valueForTime(int msec) const override {
		if (qtimeline_valuefortime_isbase) {
			qtimeline_valuefortime_isbase = false;
			return QTimeLine::valueForTime(msec);
		} else if (qtimeline_valuefortime_callback != nullptr) {
			int cbval1 = msec;
			double callback_ret = qtimeline_valuefortime_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTimeLine::valueForTime(msec);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* event) override {
		if (qtimeline_timerevent_isbase) {
			qtimeline_timerevent_isbase = false;
			QTimeLine::timerEvent(event);
		} else if (qtimeline_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = event;
			qtimeline_timerevent_callback(this, cbval1);
		} else {
			QTimeLine::timerEvent(event);
		}
	}

	// Friend functions
	friend void QTimeLine_TimerEvent(QTimeLine* self, QTimerEvent* event);
	friend void QTimeLine_QBaseTimerEvent(QTimeLine* self, QTimerEvent* event);
};

#endif


