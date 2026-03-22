#pragma once
#ifndef QABSTRACTANIMATION_H_C_LIBVIRTUAL
#define QABSTRACTANIMATION_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QAbstractAnimation so that we can call protected methods
class VirtualQAbstractAnimation : public QAbstractAnimation {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractAnimation= true;

	// Virtual class public types (including callbacks)
	using QAbstractAnimation_Duration_Callback = int (*)();
	using QAbstractAnimation_Event_Callback = bool (*)(QAbstractAnimation*, QEvent*);
	using QAbstractAnimation_UpdateCurrentTime_Callback = void (*)(QAbstractAnimation*, int);
	using QAbstractAnimation_UpdateState_Callback = void (*)(QAbstractAnimation*, int, int);
	using QAbstractAnimation_UpdateDirection_Callback = void (*)(QAbstractAnimation*, int);

protected:
	// Instance callback storage
	mutable QAbstractAnimation_Duration_Callback qabstractanimation_duration_callback = nullptr;
	mutable QAbstractAnimation_Event_Callback qabstractanimation_event_callback = nullptr;
	mutable QAbstractAnimation_UpdateCurrentTime_Callback qabstractanimation_updatecurrenttime_callback = nullptr;
	mutable QAbstractAnimation_UpdateState_Callback qabstractanimation_updatestate_callback = nullptr;
	mutable QAbstractAnimation_UpdateDirection_Callback qabstractanimation_updatedirection_callback = nullptr;

	// Instance base flags
    mutable bool qabstractanimation_duration_isbase = false;
    mutable bool qabstractanimation_event_isbase = false;
    mutable bool qabstractanimation_updatecurrenttime_isbase = false;
    mutable bool qabstractanimation_updatestate_isbase = false;
    mutable bool qabstractanimation_updatedirection_isbase = false;

public:
	VirtualQAbstractAnimation(): QAbstractAnimation() {};
	VirtualQAbstractAnimation(QObject* parent): QAbstractAnimation(parent) {};

	~VirtualQAbstractAnimation() {
		qabstractanimation_duration_callback = nullptr;
		qabstractanimation_event_callback = nullptr;
		qabstractanimation_updatecurrenttime_callback = nullptr;
		qabstractanimation_updatestate_callback = nullptr;
		qabstractanimation_updatedirection_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractAnimation_Duration_Callback(QAbstractAnimation_Duration_Callback cb) const { qabstractanimation_duration_callback = cb; }
	inline void setQAbstractAnimation_Event_Callback(QAbstractAnimation_Event_Callback cb) const { qabstractanimation_event_callback = cb; }
	inline void setQAbstractAnimation_UpdateCurrentTime_Callback(QAbstractAnimation_UpdateCurrentTime_Callback cb) const { qabstractanimation_updatecurrenttime_callback = cb; }
	inline void setQAbstractAnimation_UpdateState_Callback(QAbstractAnimation_UpdateState_Callback cb) const { qabstractanimation_updatestate_callback = cb; }
	inline void setQAbstractAnimation_UpdateDirection_Callback(QAbstractAnimation_UpdateDirection_Callback cb) const { qabstractanimation_updatedirection_callback = cb; }

// Base flag setters
	inline void setQAbstractAnimation_Duration_IsBase(bool value) const { qabstractanimation_duration_isbase = value; }
	inline void setQAbstractAnimation_Event_IsBase(bool value) const { qabstractanimation_event_isbase = value; }
	inline void setQAbstractAnimation_UpdateCurrentTime_IsBase(bool value) const { qabstractanimation_updatecurrenttime_isbase = value; }
	inline void setQAbstractAnimation_UpdateState_IsBase(bool value) const { qabstractanimation_updatestate_isbase = value; }
	inline void setQAbstractAnimation_UpdateDirection_IsBase(bool value) const { qabstractanimation_updatedirection_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual int duration() const override {
		if (qabstractanimation_duration_callback != nullptr) {
			int callback_ret = qabstractanimation_duration_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qabstractanimation_event_isbase) {
			qabstractanimation_event_isbase = false;
			return QAbstractAnimation::event(event);
		} else if (qabstractanimation_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qabstractanimation_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractAnimation::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateCurrentTime(int currentTime) override {
		if (qabstractanimation_updatecurrenttime_callback != nullptr) {
			int cbval1 = currentTime;
			qabstractanimation_updatecurrenttime_callback(this, cbval1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
		if (qabstractanimation_updatestate_isbase) {
			qabstractanimation_updatestate_isbase = false;
			QAbstractAnimation::updateState(newState, oldState);
		} else if (qabstractanimation_updatestate_callback != nullptr) {
			int cbval1 = static_cast<int>(newState);
			int cbval2 = static_cast<int>(oldState);
			qabstractanimation_updatestate_callback(this, cbval1, cbval2);
		} else {
			QAbstractAnimation::updateState(newState, oldState);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateDirection(QAbstractAnimation::Direction direction) override {
		if (qabstractanimation_updatedirection_isbase) {
			qabstractanimation_updatedirection_isbase = false;
			QAbstractAnimation::updateDirection(direction);
		} else if (qabstractanimation_updatedirection_callback != nullptr) {
			int cbval1 = static_cast<int>(direction);
			qabstractanimation_updatedirection_callback(this, cbval1);
		} else {
			QAbstractAnimation::updateDirection(direction);
		}
	}

	// Friend functions
	friend bool QAbstractAnimation_Event(QAbstractAnimation* self, QEvent* event);
	friend bool QAbstractAnimation_QBaseEvent(QAbstractAnimation* self, QEvent* event);
	friend void QAbstractAnimation_UpdateCurrentTime(QAbstractAnimation* self, int currentTime);
	friend void QAbstractAnimation_QBaseUpdateCurrentTime(QAbstractAnimation* self, int currentTime);
	friend void QAbstractAnimation_UpdateState(QAbstractAnimation* self, int newState, int oldState);
	friend void QAbstractAnimation_QBaseUpdateState(QAbstractAnimation* self, int newState, int oldState);
	friend void QAbstractAnimation_UpdateDirection(QAbstractAnimation* self, int direction);
	friend void QAbstractAnimation_QBaseUpdateDirection(QAbstractAnimation* self, int direction);
};

// This class is a subclass of QAnimationDriver so that we can call protected methods
class VirtualQAnimationDriver final : public QAnimationDriver {

public:
	// Virtual class boolean flag
	bool isVirtualQAnimationDriver= true;

	// Virtual class public types (including callbacks)
	using QAnimationDriver_Advance_Callback = void (*)();
	using QAnimationDriver_Elapsed_Callback = long long (*)();
	using QAnimationDriver_Start_Callback = void (*)();
	using QAnimationDriver_Stop_Callback = void (*)();
	using QAnimationDriver_AdvanceAnimation_Callback = void (*)();

protected:
	// Instance callback storage
	mutable QAnimationDriver_Advance_Callback qanimationdriver_advance_callback = nullptr;
	mutable QAnimationDriver_Elapsed_Callback qanimationdriver_elapsed_callback = nullptr;
	mutable QAnimationDriver_Start_Callback qanimationdriver_start_callback = nullptr;
	mutable QAnimationDriver_Stop_Callback qanimationdriver_stop_callback = nullptr;
	mutable QAnimationDriver_AdvanceAnimation_Callback qanimationdriver_advanceanimation_callback = nullptr;

	// Instance base flags
    mutable bool qanimationdriver_advance_isbase = false;
    mutable bool qanimationdriver_elapsed_isbase = false;
    mutable bool qanimationdriver_start_isbase = false;
    mutable bool qanimationdriver_stop_isbase = false;
    mutable bool qanimationdriver_advanceanimation_isbase = false;

public:
	VirtualQAnimationDriver(): QAnimationDriver() {};
	VirtualQAnimationDriver(QObject* parent): QAnimationDriver(parent) {};

	~VirtualQAnimationDriver() {
		qanimationdriver_advance_callback = nullptr;
		qanimationdriver_elapsed_callback = nullptr;
		qanimationdriver_start_callback = nullptr;
		qanimationdriver_stop_callback = nullptr;
		qanimationdriver_advanceanimation_callback = nullptr;
	}

// Callback setters
	inline void setQAnimationDriver_Advance_Callback(QAnimationDriver_Advance_Callback cb) const { qanimationdriver_advance_callback = cb; }
	inline void setQAnimationDriver_Elapsed_Callback(QAnimationDriver_Elapsed_Callback cb) const { qanimationdriver_elapsed_callback = cb; }
	inline void setQAnimationDriver_Start_Callback(QAnimationDriver_Start_Callback cb) const { qanimationdriver_start_callback = cb; }
	inline void setQAnimationDriver_Stop_Callback(QAnimationDriver_Stop_Callback cb) const { qanimationdriver_stop_callback = cb; }
	inline void setQAnimationDriver_AdvanceAnimation_Callback(QAnimationDriver_AdvanceAnimation_Callback cb) const { qanimationdriver_advanceanimation_callback = cb; }

// Base flag setters
	inline void setQAnimationDriver_Advance_IsBase(bool value) const { qanimationdriver_advance_isbase = value; }
	inline void setQAnimationDriver_Elapsed_IsBase(bool value) const { qanimationdriver_elapsed_isbase = value; }
	inline void setQAnimationDriver_Start_IsBase(bool value) const { qanimationdriver_start_isbase = value; }
	inline void setQAnimationDriver_Stop_IsBase(bool value) const { qanimationdriver_stop_isbase = value; }
	inline void setQAnimationDriver_AdvanceAnimation_IsBase(bool value) const { qanimationdriver_advanceanimation_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void advance() override {
		if (qanimationdriver_advance_isbase) {
			qanimationdriver_advance_isbase = false;
			QAnimationDriver::advance();
		} else if (qanimationdriver_advance_callback != nullptr) {
			qanimationdriver_advance_callback();
		} else {
			QAnimationDriver::advance();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long elapsed() const override {
		if (qanimationdriver_elapsed_isbase) {
			qanimationdriver_elapsed_isbase = false;
			return QAnimationDriver::elapsed();
		} else if (qanimationdriver_elapsed_callback != nullptr) {
			long long callback_ret = qanimationdriver_elapsed_callback();
			return callback_ret;
		} else {
			return QAnimationDriver::elapsed();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void start() override {
		if (qanimationdriver_start_isbase) {
			qanimationdriver_start_isbase = false;
			QAnimationDriver::start();
		} else if (qanimationdriver_start_callback != nullptr) {
			qanimationdriver_start_callback();
		} else {
			QAnimationDriver::start();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void stop() override {
		if (qanimationdriver_stop_isbase) {
			qanimationdriver_stop_isbase = false;
			QAnimationDriver::stop();
		} else if (qanimationdriver_stop_callback != nullptr) {
			qanimationdriver_stop_callback();
		} else {
			QAnimationDriver::stop();
		}
	}

	// Virtual method for C ABI access and custom callback
	void advanceAnimation() {
		if (qanimationdriver_advanceanimation_isbase) {
			qanimationdriver_advanceanimation_isbase = false;
			QAnimationDriver::advanceAnimation();
		} else if (qanimationdriver_advanceanimation_callback != nullptr) {
			qanimationdriver_advanceanimation_callback();
		} else {
			QAnimationDriver::advanceAnimation();
		}
	}

	// Friend functions
	friend void QAnimationDriver_Start(QAnimationDriver* self);
	friend void QAnimationDriver_QBaseStart(QAnimationDriver* self);
	friend void QAnimationDriver_Stop(QAnimationDriver* self);
	friend void QAnimationDriver_QBaseStop(QAnimationDriver* self);
	friend void QAnimationDriver_AdvanceAnimation(QAnimationDriver* self);
	friend void QAnimationDriver_QBaseAdvanceAnimation(QAnimationDriver* self);
};

#endif


