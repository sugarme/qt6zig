#pragma once
#ifndef QVARIANTANIMATION_H_C_LIBVIRTUAL
#define QVARIANTANIMATION_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QVariantAnimation so that we can call protected methods
class VirtualQVariantAnimation final : public QVariantAnimation {

public:
	// Virtual class boolean flag
	bool isVirtualQVariantAnimation= true;

	// Virtual class public types (including callbacks)
	using QVariantAnimation_Duration_Callback = int (*)();
	using QVariantAnimation_Event_Callback = bool (*)(QVariantAnimation*, QEvent*);
	using QVariantAnimation_UpdateCurrentTime_Callback = void (*)(QVariantAnimation*, int);
	using QVariantAnimation_UpdateState_Callback = void (*)(QVariantAnimation*, int, int);
	using QVariantAnimation_UpdateCurrentValue_Callback = void (*)(QVariantAnimation*, const QVariant*);
	using QVariantAnimation_Interpolated_Callback = QVariant* (*)(const QVariantAnimation*, const QVariant*, const QVariant*, double);

protected:
	// Instance callback storage
	mutable QVariantAnimation_Duration_Callback qvariantanimation_duration_callback = nullptr;
	mutable QVariantAnimation_Event_Callback qvariantanimation_event_callback = nullptr;
	mutable QVariantAnimation_UpdateCurrentTime_Callback qvariantanimation_updatecurrenttime_callback = nullptr;
	mutable QVariantAnimation_UpdateState_Callback qvariantanimation_updatestate_callback = nullptr;
	mutable QVariantAnimation_UpdateCurrentValue_Callback qvariantanimation_updatecurrentvalue_callback = nullptr;
	mutable QVariantAnimation_Interpolated_Callback qvariantanimation_interpolated_callback = nullptr;

	// Instance base flags
    mutable bool qvariantanimation_duration_isbase = false;
    mutable bool qvariantanimation_event_isbase = false;
    mutable bool qvariantanimation_updatecurrenttime_isbase = false;
    mutable bool qvariantanimation_updatestate_isbase = false;
    mutable bool qvariantanimation_updatecurrentvalue_isbase = false;
    mutable bool qvariantanimation_interpolated_isbase = false;

public:
	VirtualQVariantAnimation(): QVariantAnimation() {};
	VirtualQVariantAnimation(QObject* parent): QVariantAnimation(parent) {};

	~VirtualQVariantAnimation() {
		qvariantanimation_duration_callback = nullptr;
		qvariantanimation_event_callback = nullptr;
		qvariantanimation_updatecurrenttime_callback = nullptr;
		qvariantanimation_updatestate_callback = nullptr;
		qvariantanimation_updatecurrentvalue_callback = nullptr;
		qvariantanimation_interpolated_callback = nullptr;
	}

// Callback setters
	inline void setQVariantAnimation_Duration_Callback(QVariantAnimation_Duration_Callback cb) const { qvariantanimation_duration_callback = cb; }
	inline void setQVariantAnimation_Event_Callback(QVariantAnimation_Event_Callback cb) const { qvariantanimation_event_callback = cb; }
	inline void setQVariantAnimation_UpdateCurrentTime_Callback(QVariantAnimation_UpdateCurrentTime_Callback cb) const { qvariantanimation_updatecurrenttime_callback = cb; }
	inline void setQVariantAnimation_UpdateState_Callback(QVariantAnimation_UpdateState_Callback cb) const { qvariantanimation_updatestate_callback = cb; }
	inline void setQVariantAnimation_UpdateCurrentValue_Callback(QVariantAnimation_UpdateCurrentValue_Callback cb) const { qvariantanimation_updatecurrentvalue_callback = cb; }
	inline void setQVariantAnimation_Interpolated_Callback(QVariantAnimation_Interpolated_Callback cb) const { qvariantanimation_interpolated_callback = cb; }

// Base flag setters
	inline void setQVariantAnimation_Duration_IsBase(bool value) const { qvariantanimation_duration_isbase = value; }
	inline void setQVariantAnimation_Event_IsBase(bool value) const { qvariantanimation_event_isbase = value; }
	inline void setQVariantAnimation_UpdateCurrentTime_IsBase(bool value) const { qvariantanimation_updatecurrenttime_isbase = value; }
	inline void setQVariantAnimation_UpdateState_IsBase(bool value) const { qvariantanimation_updatestate_isbase = value; }
	inline void setQVariantAnimation_UpdateCurrentValue_IsBase(bool value) const { qvariantanimation_updatecurrentvalue_isbase = value; }
	inline void setQVariantAnimation_Interpolated_IsBase(bool value) const { qvariantanimation_interpolated_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual int duration() const override {
		if (qvariantanimation_duration_isbase) {
			qvariantanimation_duration_isbase = false;
			return QVariantAnimation::duration();
		} else if (qvariantanimation_duration_callback != nullptr) {
			int callback_ret = qvariantanimation_duration_callback();
			return callback_ret;
		} else {
			return QVariantAnimation::duration();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qvariantanimation_event_isbase) {
			qvariantanimation_event_isbase = false;
			return QVariantAnimation::event(event);
		} else if (qvariantanimation_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qvariantanimation_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QVariantAnimation::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateCurrentTime(int param1) override {
		if (qvariantanimation_updatecurrenttime_isbase) {
			qvariantanimation_updatecurrenttime_isbase = false;
			QVariantAnimation::updateCurrentTime(param1);
		} else if (qvariantanimation_updatecurrenttime_callback != nullptr) {
			int cbval1 = param1;
			qvariantanimation_updatecurrenttime_callback(this, cbval1);
		} else {
			QVariantAnimation::updateCurrentTime(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
		if (qvariantanimation_updatestate_isbase) {
			qvariantanimation_updatestate_isbase = false;
			QVariantAnimation::updateState(newState, oldState);
		} else if (qvariantanimation_updatestate_callback != nullptr) {
			int cbval1 = static_cast<int>(newState);
			int cbval2 = static_cast<int>(oldState);
			qvariantanimation_updatestate_callback(this, cbval1, cbval2);
		} else {
			QVariantAnimation::updateState(newState, oldState);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateCurrentValue(const QVariant& value) override {
		if (qvariantanimation_updatecurrentvalue_isbase) {
			qvariantanimation_updatecurrentvalue_isbase = false;
			QVariantAnimation::updateCurrentValue(value);
		} else if (qvariantanimation_updatecurrentvalue_callback != nullptr) {
			const QVariant* cbval1 = (const QVariant*)&value;
			qvariantanimation_updatecurrentvalue_callback(this, cbval1);
		} else {
			QVariantAnimation::updateCurrentValue(value);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant interpolated(const QVariant& from, const QVariant& to, qreal progress) const override {
		if (qvariantanimation_interpolated_isbase) {
			qvariantanimation_interpolated_isbase = false;
			return QVariantAnimation::interpolated(from, to, progress);
		} else if (qvariantanimation_interpolated_callback != nullptr) {
			const QVariant* cbval1 = (const QVariant*)&from;
			const QVariant* cbval2 = (const QVariant*)&to;
			double cbval3 = progress;
			QVariant* callback_ret = qvariantanimation_interpolated_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QVariantAnimation::interpolated(from, to, progress);
		}
	}

	// Friend functions
	friend bool QVariantAnimation_Event(QVariantAnimation* self, QEvent* event);
	friend bool QVariantAnimation_QBaseEvent(QVariantAnimation* self, QEvent* event);
	friend void QVariantAnimation_UpdateCurrentTime(QVariantAnimation* self, int param1);
	friend void QVariantAnimation_QBaseUpdateCurrentTime(QVariantAnimation* self, int param1);
	friend void QVariantAnimation_UpdateState(QVariantAnimation* self, int newState, int oldState);
	friend void QVariantAnimation_QBaseUpdateState(QVariantAnimation* self, int newState, int oldState);
	friend void QVariantAnimation_UpdateCurrentValue(QVariantAnimation* self, const QVariant* value);
	friend void QVariantAnimation_QBaseUpdateCurrentValue(QVariantAnimation* self, const QVariant* value);
	friend QVariant* QVariantAnimation_Interpolated(const QVariantAnimation* self, const QVariant* from, const QVariant* to, double progress);
	friend QVariant* QVariantAnimation_QBaseInterpolated(const QVariantAnimation* self, const QVariant* from, const QVariant* to, double progress);
};

#endif


