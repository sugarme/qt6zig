#pragma once
#ifndef QPROPERTYANIMATION_H_C_LIBVIRTUAL
#define QPROPERTYANIMATION_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QPropertyAnimation so that we can call protected methods
class VirtualQPropertyAnimation final : public QPropertyAnimation {

public:
	// Virtual class boolean flag
	bool isVirtualQPropertyAnimation= true;

	// Virtual class public types (including callbacks)
	using QPropertyAnimation_Event_Callback = bool (*)(QPropertyAnimation*, QEvent*);
	using QPropertyAnimation_UpdateCurrentValue_Callback = void (*)(QPropertyAnimation*, const QVariant*);
	using QPropertyAnimation_UpdateState_Callback = void (*)(QPropertyAnimation*, int, int);

protected:
	// Instance callback storage
	mutable QPropertyAnimation_Event_Callback qpropertyanimation_event_callback = nullptr;
	mutable QPropertyAnimation_UpdateCurrentValue_Callback qpropertyanimation_updatecurrentvalue_callback = nullptr;
	mutable QPropertyAnimation_UpdateState_Callback qpropertyanimation_updatestate_callback = nullptr;

	// Instance base flags
    mutable bool qpropertyanimation_event_isbase = false;
    mutable bool qpropertyanimation_updatecurrentvalue_isbase = false;
    mutable bool qpropertyanimation_updatestate_isbase = false;

public:
	VirtualQPropertyAnimation(): QPropertyAnimation() {};
	VirtualQPropertyAnimation(QObject* target, const QByteArray& propertyName): QPropertyAnimation(target, propertyName) {};
	VirtualQPropertyAnimation(QObject* parent): QPropertyAnimation(parent) {};
	VirtualQPropertyAnimation(QObject* target, const QByteArray& propertyName, QObject* parent): QPropertyAnimation(target, propertyName, parent) {};

	~VirtualQPropertyAnimation() {
		qpropertyanimation_event_callback = nullptr;
		qpropertyanimation_updatecurrentvalue_callback = nullptr;
		qpropertyanimation_updatestate_callback = nullptr;
	}

// Callback setters
	inline void setQPropertyAnimation_Event_Callback(QPropertyAnimation_Event_Callback cb) const { qpropertyanimation_event_callback = cb; }
	inline void setQPropertyAnimation_UpdateCurrentValue_Callback(QPropertyAnimation_UpdateCurrentValue_Callback cb) const { qpropertyanimation_updatecurrentvalue_callback = cb; }
	inline void setQPropertyAnimation_UpdateState_Callback(QPropertyAnimation_UpdateState_Callback cb) const { qpropertyanimation_updatestate_callback = cb; }

// Base flag setters
	inline void setQPropertyAnimation_Event_IsBase(bool value) const { qpropertyanimation_event_isbase = value; }
	inline void setQPropertyAnimation_UpdateCurrentValue_IsBase(bool value) const { qpropertyanimation_updatecurrentvalue_isbase = value; }
	inline void setQPropertyAnimation_UpdateState_IsBase(bool value) const { qpropertyanimation_updatestate_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qpropertyanimation_event_isbase) {
			qpropertyanimation_event_isbase = false;
			return QPropertyAnimation::event(event);
		} else if (qpropertyanimation_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qpropertyanimation_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QPropertyAnimation::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateCurrentValue(const QVariant& value) override {
		if (qpropertyanimation_updatecurrentvalue_isbase) {
			qpropertyanimation_updatecurrentvalue_isbase = false;
			QPropertyAnimation::updateCurrentValue(value);
		} else if (qpropertyanimation_updatecurrentvalue_callback != nullptr) {
			const QVariant* cbval1 = (const QVariant*)&value;
			qpropertyanimation_updatecurrentvalue_callback(this, cbval1);
		} else {
			QPropertyAnimation::updateCurrentValue(value);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
		if (qpropertyanimation_updatestate_isbase) {
			qpropertyanimation_updatestate_isbase = false;
			QPropertyAnimation::updateState(newState, oldState);
		} else if (qpropertyanimation_updatestate_callback != nullptr) {
			int cbval1 = static_cast<int>(newState);
			int cbval2 = static_cast<int>(oldState);
			qpropertyanimation_updatestate_callback(this, cbval1, cbval2);
		} else {
			QPropertyAnimation::updateState(newState, oldState);
		}
	}

	// Friend functions
	friend bool QPropertyAnimation_Event(QPropertyAnimation* self, QEvent* event);
	friend bool QPropertyAnimation_QBaseEvent(QPropertyAnimation* self, QEvent* event);
	friend void QPropertyAnimation_UpdateCurrentValue(QPropertyAnimation* self, const QVariant* value);
	friend void QPropertyAnimation_QBaseUpdateCurrentValue(QPropertyAnimation* self, const QVariant* value);
	friend void QPropertyAnimation_UpdateState(QPropertyAnimation* self, int newState, int oldState);
	friend void QPropertyAnimation_QBaseUpdateState(QPropertyAnimation* self, int newState, int oldState);
};

#endif


