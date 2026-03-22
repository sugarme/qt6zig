#pragma once
#ifndef QSEQUENTIALANIMATIONGROUP_H_C_LIBVIRTUAL
#define QSEQUENTIALANIMATIONGROUP_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QSequentialAnimationGroup so that we can call protected methods
class VirtualQSequentialAnimationGroup final : public QSequentialAnimationGroup {

public:
	// Virtual class boolean flag
	bool isVirtualQSequentialAnimationGroup= true;

	// Virtual class public types (including callbacks)
	using QSequentialAnimationGroup_Duration_Callback = int (*)();
	using QSequentialAnimationGroup_Event_Callback = bool (*)(QSequentialAnimationGroup*, QEvent*);
	using QSequentialAnimationGroup_UpdateCurrentTime_Callback = void (*)(QSequentialAnimationGroup*, int);
	using QSequentialAnimationGroup_UpdateState_Callback = void (*)(QSequentialAnimationGroup*, int, int);
	using QSequentialAnimationGroup_UpdateDirection_Callback = void (*)(QSequentialAnimationGroup*, int);

protected:
	// Instance callback storage
	mutable QSequentialAnimationGroup_Duration_Callback qsequentialanimationgroup_duration_callback = nullptr;
	mutable QSequentialAnimationGroup_Event_Callback qsequentialanimationgroup_event_callback = nullptr;
	mutable QSequentialAnimationGroup_UpdateCurrentTime_Callback qsequentialanimationgroup_updatecurrenttime_callback = nullptr;
	mutable QSequentialAnimationGroup_UpdateState_Callback qsequentialanimationgroup_updatestate_callback = nullptr;
	mutable QSequentialAnimationGroup_UpdateDirection_Callback qsequentialanimationgroup_updatedirection_callback = nullptr;

	// Instance base flags
    mutable bool qsequentialanimationgroup_duration_isbase = false;
    mutable bool qsequentialanimationgroup_event_isbase = false;
    mutable bool qsequentialanimationgroup_updatecurrenttime_isbase = false;
    mutable bool qsequentialanimationgroup_updatestate_isbase = false;
    mutable bool qsequentialanimationgroup_updatedirection_isbase = false;

public:
	VirtualQSequentialAnimationGroup(): QSequentialAnimationGroup() {};
	VirtualQSequentialAnimationGroup(QObject* parent): QSequentialAnimationGroup(parent) {};

	~VirtualQSequentialAnimationGroup() {
		qsequentialanimationgroup_duration_callback = nullptr;
		qsequentialanimationgroup_event_callback = nullptr;
		qsequentialanimationgroup_updatecurrenttime_callback = nullptr;
		qsequentialanimationgroup_updatestate_callback = nullptr;
		qsequentialanimationgroup_updatedirection_callback = nullptr;
	}

// Callback setters
	inline void setQSequentialAnimationGroup_Duration_Callback(QSequentialAnimationGroup_Duration_Callback cb) const { qsequentialanimationgroup_duration_callback = cb; }
	inline void setQSequentialAnimationGroup_Event_Callback(QSequentialAnimationGroup_Event_Callback cb) const { qsequentialanimationgroup_event_callback = cb; }
	inline void setQSequentialAnimationGroup_UpdateCurrentTime_Callback(QSequentialAnimationGroup_UpdateCurrentTime_Callback cb) const { qsequentialanimationgroup_updatecurrenttime_callback = cb; }
	inline void setQSequentialAnimationGroup_UpdateState_Callback(QSequentialAnimationGroup_UpdateState_Callback cb) const { qsequentialanimationgroup_updatestate_callback = cb; }
	inline void setQSequentialAnimationGroup_UpdateDirection_Callback(QSequentialAnimationGroup_UpdateDirection_Callback cb) const { qsequentialanimationgroup_updatedirection_callback = cb; }

// Base flag setters
	inline void setQSequentialAnimationGroup_Duration_IsBase(bool value) const { qsequentialanimationgroup_duration_isbase = value; }
	inline void setQSequentialAnimationGroup_Event_IsBase(bool value) const { qsequentialanimationgroup_event_isbase = value; }
	inline void setQSequentialAnimationGroup_UpdateCurrentTime_IsBase(bool value) const { qsequentialanimationgroup_updatecurrenttime_isbase = value; }
	inline void setQSequentialAnimationGroup_UpdateState_IsBase(bool value) const { qsequentialanimationgroup_updatestate_isbase = value; }
	inline void setQSequentialAnimationGroup_UpdateDirection_IsBase(bool value) const { qsequentialanimationgroup_updatedirection_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual int duration() const override {
		if (qsequentialanimationgroup_duration_isbase) {
			qsequentialanimationgroup_duration_isbase = false;
			return QSequentialAnimationGroup::duration();
		} else if (qsequentialanimationgroup_duration_callback != nullptr) {
			int callback_ret = qsequentialanimationgroup_duration_callback();
			return callback_ret;
		} else {
			return QSequentialAnimationGroup::duration();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qsequentialanimationgroup_event_isbase) {
			qsequentialanimationgroup_event_isbase = false;
			return QSequentialAnimationGroup::event(event);
		} else if (qsequentialanimationgroup_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qsequentialanimationgroup_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSequentialAnimationGroup::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateCurrentTime(int param1) override {
		if (qsequentialanimationgroup_updatecurrenttime_isbase) {
			qsequentialanimationgroup_updatecurrenttime_isbase = false;
			QSequentialAnimationGroup::updateCurrentTime(param1);
		} else if (qsequentialanimationgroup_updatecurrenttime_callback != nullptr) {
			int cbval1 = param1;
			qsequentialanimationgroup_updatecurrenttime_callback(this, cbval1);
		} else {
			QSequentialAnimationGroup::updateCurrentTime(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
		if (qsequentialanimationgroup_updatestate_isbase) {
			qsequentialanimationgroup_updatestate_isbase = false;
			QSequentialAnimationGroup::updateState(newState, oldState);
		} else if (qsequentialanimationgroup_updatestate_callback != nullptr) {
			int cbval1 = static_cast<int>(newState);
			int cbval2 = static_cast<int>(oldState);
			qsequentialanimationgroup_updatestate_callback(this, cbval1, cbval2);
		} else {
			QSequentialAnimationGroup::updateState(newState, oldState);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateDirection(QAbstractAnimation::Direction direction) override {
		if (qsequentialanimationgroup_updatedirection_isbase) {
			qsequentialanimationgroup_updatedirection_isbase = false;
			QSequentialAnimationGroup::updateDirection(direction);
		} else if (qsequentialanimationgroup_updatedirection_callback != nullptr) {
			int cbval1 = static_cast<int>(direction);
			qsequentialanimationgroup_updatedirection_callback(this, cbval1);
		} else {
			QSequentialAnimationGroup::updateDirection(direction);
		}
	}

	// Friend functions
	friend bool QSequentialAnimationGroup_Event(QSequentialAnimationGroup* self, QEvent* event);
	friend bool QSequentialAnimationGroup_QBaseEvent(QSequentialAnimationGroup* self, QEvent* event);
	friend void QSequentialAnimationGroup_UpdateCurrentTime(QSequentialAnimationGroup* self, int param1);
	friend void QSequentialAnimationGroup_QBaseUpdateCurrentTime(QSequentialAnimationGroup* self, int param1);
	friend void QSequentialAnimationGroup_UpdateState(QSequentialAnimationGroup* self, int newState, int oldState);
	friend void QSequentialAnimationGroup_QBaseUpdateState(QSequentialAnimationGroup* self, int newState, int oldState);
	friend void QSequentialAnimationGroup_UpdateDirection(QSequentialAnimationGroup* self, int direction);
	friend void QSequentialAnimationGroup_QBaseUpdateDirection(QSequentialAnimationGroup* self, int direction);
};

#endif


