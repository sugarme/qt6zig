#pragma once
#ifndef QPARALLELANIMATIONGROUP_H_C_LIBVIRTUAL
#define QPARALLELANIMATIONGROUP_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QParallelAnimationGroup so that we can call protected methods
class VirtualQParallelAnimationGroup final : public QParallelAnimationGroup {

public:
	// Virtual class boolean flag
	bool isVirtualQParallelAnimationGroup= true;

	// Virtual class public types (including callbacks)
	using QParallelAnimationGroup_Duration_Callback = int (*)();
	using QParallelAnimationGroup_Event_Callback = bool (*)(QParallelAnimationGroup*, QEvent*);
	using QParallelAnimationGroup_UpdateCurrentTime_Callback = void (*)(QParallelAnimationGroup*, int);
	using QParallelAnimationGroup_UpdateState_Callback = void (*)(QParallelAnimationGroup*, int, int);
	using QParallelAnimationGroup_UpdateDirection_Callback = void (*)(QParallelAnimationGroup*, int);

protected:
	// Instance callback storage
	mutable QParallelAnimationGroup_Duration_Callback qparallelanimationgroup_duration_callback = nullptr;
	mutable QParallelAnimationGroup_Event_Callback qparallelanimationgroup_event_callback = nullptr;
	mutable QParallelAnimationGroup_UpdateCurrentTime_Callback qparallelanimationgroup_updatecurrenttime_callback = nullptr;
	mutable QParallelAnimationGroup_UpdateState_Callback qparallelanimationgroup_updatestate_callback = nullptr;
	mutable QParallelAnimationGroup_UpdateDirection_Callback qparallelanimationgroup_updatedirection_callback = nullptr;

	// Instance base flags
    mutable bool qparallelanimationgroup_duration_isbase = false;
    mutable bool qparallelanimationgroup_event_isbase = false;
    mutable bool qparallelanimationgroup_updatecurrenttime_isbase = false;
    mutable bool qparallelanimationgroup_updatestate_isbase = false;
    mutable bool qparallelanimationgroup_updatedirection_isbase = false;

public:
	VirtualQParallelAnimationGroup(): QParallelAnimationGroup() {};
	VirtualQParallelAnimationGroup(QObject* parent): QParallelAnimationGroup(parent) {};

	~VirtualQParallelAnimationGroup() {
		qparallelanimationgroup_duration_callback = nullptr;
		qparallelanimationgroup_event_callback = nullptr;
		qparallelanimationgroup_updatecurrenttime_callback = nullptr;
		qparallelanimationgroup_updatestate_callback = nullptr;
		qparallelanimationgroup_updatedirection_callback = nullptr;
	}

// Callback setters
	inline void setQParallelAnimationGroup_Duration_Callback(QParallelAnimationGroup_Duration_Callback cb) const { qparallelanimationgroup_duration_callback = cb; }
	inline void setQParallelAnimationGroup_Event_Callback(QParallelAnimationGroup_Event_Callback cb) const { qparallelanimationgroup_event_callback = cb; }
	inline void setQParallelAnimationGroup_UpdateCurrentTime_Callback(QParallelAnimationGroup_UpdateCurrentTime_Callback cb) const { qparallelanimationgroup_updatecurrenttime_callback = cb; }
	inline void setQParallelAnimationGroup_UpdateState_Callback(QParallelAnimationGroup_UpdateState_Callback cb) const { qparallelanimationgroup_updatestate_callback = cb; }
	inline void setQParallelAnimationGroup_UpdateDirection_Callback(QParallelAnimationGroup_UpdateDirection_Callback cb) const { qparallelanimationgroup_updatedirection_callback = cb; }

// Base flag setters
	inline void setQParallelAnimationGroup_Duration_IsBase(bool value) const { qparallelanimationgroup_duration_isbase = value; }
	inline void setQParallelAnimationGroup_Event_IsBase(bool value) const { qparallelanimationgroup_event_isbase = value; }
	inline void setQParallelAnimationGroup_UpdateCurrentTime_IsBase(bool value) const { qparallelanimationgroup_updatecurrenttime_isbase = value; }
	inline void setQParallelAnimationGroup_UpdateState_IsBase(bool value) const { qparallelanimationgroup_updatestate_isbase = value; }
	inline void setQParallelAnimationGroup_UpdateDirection_IsBase(bool value) const { qparallelanimationgroup_updatedirection_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual int duration() const override {
		if (qparallelanimationgroup_duration_isbase) {
			qparallelanimationgroup_duration_isbase = false;
			return QParallelAnimationGroup::duration();
		} else if (qparallelanimationgroup_duration_callback != nullptr) {
			int callback_ret = qparallelanimationgroup_duration_callback();
			return callback_ret;
		} else {
			return QParallelAnimationGroup::duration();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qparallelanimationgroup_event_isbase) {
			qparallelanimationgroup_event_isbase = false;
			return QParallelAnimationGroup::event(event);
		} else if (qparallelanimationgroup_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qparallelanimationgroup_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QParallelAnimationGroup::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateCurrentTime(int currentTime) override {
		if (qparallelanimationgroup_updatecurrenttime_isbase) {
			qparallelanimationgroup_updatecurrenttime_isbase = false;
			QParallelAnimationGroup::updateCurrentTime(currentTime);
		} else if (qparallelanimationgroup_updatecurrenttime_callback != nullptr) {
			int cbval1 = currentTime;
			qparallelanimationgroup_updatecurrenttime_callback(this, cbval1);
		} else {
			QParallelAnimationGroup::updateCurrentTime(currentTime);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
		if (qparallelanimationgroup_updatestate_isbase) {
			qparallelanimationgroup_updatestate_isbase = false;
			QParallelAnimationGroup::updateState(newState, oldState);
		} else if (qparallelanimationgroup_updatestate_callback != nullptr) {
			int cbval1 = static_cast<int>(newState);
			int cbval2 = static_cast<int>(oldState);
			qparallelanimationgroup_updatestate_callback(this, cbval1, cbval2);
		} else {
			QParallelAnimationGroup::updateState(newState, oldState);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateDirection(QAbstractAnimation::Direction direction) override {
		if (qparallelanimationgroup_updatedirection_isbase) {
			qparallelanimationgroup_updatedirection_isbase = false;
			QParallelAnimationGroup::updateDirection(direction);
		} else if (qparallelanimationgroup_updatedirection_callback != nullptr) {
			int cbval1 = static_cast<int>(direction);
			qparallelanimationgroup_updatedirection_callback(this, cbval1);
		} else {
			QParallelAnimationGroup::updateDirection(direction);
		}
	}

	// Friend functions
	friend bool QParallelAnimationGroup_Event(QParallelAnimationGroup* self, QEvent* event);
	friend bool QParallelAnimationGroup_QBaseEvent(QParallelAnimationGroup* self, QEvent* event);
	friend void QParallelAnimationGroup_UpdateCurrentTime(QParallelAnimationGroup* self, int currentTime);
	friend void QParallelAnimationGroup_QBaseUpdateCurrentTime(QParallelAnimationGroup* self, int currentTime);
	friend void QParallelAnimationGroup_UpdateState(QParallelAnimationGroup* self, int newState, int oldState);
	friend void QParallelAnimationGroup_QBaseUpdateState(QParallelAnimationGroup* self, int newState, int oldState);
	friend void QParallelAnimationGroup_UpdateDirection(QParallelAnimationGroup* self, int direction);
	friend void QParallelAnimationGroup_QBaseUpdateDirection(QParallelAnimationGroup* self, int direction);
};

#endif


