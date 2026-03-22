#pragma once
#ifndef QPAUSEANIMATION_H_C_LIBVIRTUAL
#define QPAUSEANIMATION_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QPauseAnimation so that we can call protected methods
class VirtualQPauseAnimation final : public QPauseAnimation {

public:
	// Virtual class boolean flag
	bool isVirtualQPauseAnimation= true;

	// Virtual class public types (including callbacks)
	using QPauseAnimation_Duration_Callback = int (*)();
	using QPauseAnimation_Event_Callback = bool (*)(QPauseAnimation*, QEvent*);
	using QPauseAnimation_UpdateCurrentTime_Callback = void (*)(QPauseAnimation*, int);

protected:
	// Instance callback storage
	mutable QPauseAnimation_Duration_Callback qpauseanimation_duration_callback = nullptr;
	mutable QPauseAnimation_Event_Callback qpauseanimation_event_callback = nullptr;
	mutable QPauseAnimation_UpdateCurrentTime_Callback qpauseanimation_updatecurrenttime_callback = nullptr;

	// Instance base flags
    mutable bool qpauseanimation_duration_isbase = false;
    mutable bool qpauseanimation_event_isbase = false;
    mutable bool qpauseanimation_updatecurrenttime_isbase = false;

public:
	VirtualQPauseAnimation(): QPauseAnimation() {};
	VirtualQPauseAnimation(int msecs): QPauseAnimation(msecs) {};
	VirtualQPauseAnimation(QObject* parent): QPauseAnimation(parent) {};
	VirtualQPauseAnimation(int msecs, QObject* parent): QPauseAnimation(msecs, parent) {};

	~VirtualQPauseAnimation() {
		qpauseanimation_duration_callback = nullptr;
		qpauseanimation_event_callback = nullptr;
		qpauseanimation_updatecurrenttime_callback = nullptr;
	}

// Callback setters
	inline void setQPauseAnimation_Duration_Callback(QPauseAnimation_Duration_Callback cb) const { qpauseanimation_duration_callback = cb; }
	inline void setQPauseAnimation_Event_Callback(QPauseAnimation_Event_Callback cb) const { qpauseanimation_event_callback = cb; }
	inline void setQPauseAnimation_UpdateCurrentTime_Callback(QPauseAnimation_UpdateCurrentTime_Callback cb) const { qpauseanimation_updatecurrenttime_callback = cb; }

// Base flag setters
	inline void setQPauseAnimation_Duration_IsBase(bool value) const { qpauseanimation_duration_isbase = value; }
	inline void setQPauseAnimation_Event_IsBase(bool value) const { qpauseanimation_event_isbase = value; }
	inline void setQPauseAnimation_UpdateCurrentTime_IsBase(bool value) const { qpauseanimation_updatecurrenttime_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual int duration() const override {
		if (qpauseanimation_duration_isbase) {
			qpauseanimation_duration_isbase = false;
			return QPauseAnimation::duration();
		} else if (qpauseanimation_duration_callback != nullptr) {
			int callback_ret = qpauseanimation_duration_callback();
			return callback_ret;
		} else {
			return QPauseAnimation::duration();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qpauseanimation_event_isbase) {
			qpauseanimation_event_isbase = false;
			return QPauseAnimation::event(e);
		} else if (qpauseanimation_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qpauseanimation_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QPauseAnimation::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateCurrentTime(int param1) override {
		if (qpauseanimation_updatecurrenttime_isbase) {
			qpauseanimation_updatecurrenttime_isbase = false;
			QPauseAnimation::updateCurrentTime(param1);
		} else if (qpauseanimation_updatecurrenttime_callback != nullptr) {
			int cbval1 = param1;
			qpauseanimation_updatecurrenttime_callback(this, cbval1);
		} else {
			QPauseAnimation::updateCurrentTime(param1);
		}
	}

	// Friend functions
	friend bool QPauseAnimation_Event(QPauseAnimation* self, QEvent* e);
	friend bool QPauseAnimation_QBaseEvent(QPauseAnimation* self, QEvent* e);
	friend void QPauseAnimation_UpdateCurrentTime(QPauseAnimation* self, int param1);
	friend void QPauseAnimation_QBaseUpdateCurrentTime(QPauseAnimation* self, int param1);
};

#endif


