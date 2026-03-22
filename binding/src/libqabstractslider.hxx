#pragma once
#ifndef QABSTRACTSLIDER_H_C_LIBVIRTUAL
#define QABSTRACTSLIDER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QAbstractSlider so that we can call protected methods
class VirtualQAbstractSlider final : public QAbstractSlider {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractSlider= true;

	// Virtual class public types (including callbacks)
	using QAbstractSlider::SliderChange;
	using QAbstractSlider_Event_Callback = bool (*)(QAbstractSlider*, QEvent*);
	using QAbstractSlider_SliderChange_Callback = void (*)(QAbstractSlider*, int);
	using QAbstractSlider_KeyPressEvent_Callback = void (*)(QAbstractSlider*, QKeyEvent*);
	using QAbstractSlider_TimerEvent_Callback = void (*)(QAbstractSlider*, QTimerEvent*);
	using QAbstractSlider_WheelEvent_Callback = void (*)(QAbstractSlider*, QWheelEvent*);
	using QAbstractSlider_ChangeEvent_Callback = void (*)(QAbstractSlider*, QEvent*);
	using QAbstractSlider_SetRepeatAction_Callback = void (*)(QAbstractSlider*, int);
	using QAbstractSlider_RepeatAction_Callback = int (*)();
	using QAbstractSlider_SetRepeatAction2_Callback = void (*)(QAbstractSlider*, int, int);
	using QAbstractSlider_SetRepeatAction3_Callback = void (*)(QAbstractSlider*, int, int, int);

protected:
	// Instance callback storage
	mutable QAbstractSlider_Event_Callback qabstractslider_event_callback = nullptr;
	mutable QAbstractSlider_SliderChange_Callback qabstractslider_sliderchange_callback = nullptr;
	mutable QAbstractSlider_KeyPressEvent_Callback qabstractslider_keypressevent_callback = nullptr;
	mutable QAbstractSlider_TimerEvent_Callback qabstractslider_timerevent_callback = nullptr;
	mutable QAbstractSlider_WheelEvent_Callback qabstractslider_wheelevent_callback = nullptr;
	mutable QAbstractSlider_ChangeEvent_Callback qabstractslider_changeevent_callback = nullptr;
	mutable QAbstractSlider_SetRepeatAction_Callback qabstractslider_setrepeataction_callback = nullptr;
	mutable QAbstractSlider_RepeatAction_Callback qabstractslider_repeataction_callback = nullptr;
	mutable QAbstractSlider_SetRepeatAction2_Callback qabstractslider_setrepeataction2_callback = nullptr;
	mutable QAbstractSlider_SetRepeatAction3_Callback qabstractslider_setrepeataction3_callback = nullptr;

	// Instance base flags
    mutable bool qabstractslider_event_isbase = false;
    mutable bool qabstractslider_sliderchange_isbase = false;
    mutable bool qabstractslider_keypressevent_isbase = false;
    mutable bool qabstractslider_timerevent_isbase = false;
    mutable bool qabstractslider_wheelevent_isbase = false;
    mutable bool qabstractslider_changeevent_isbase = false;
    mutable bool qabstractslider_setrepeataction_isbase = false;
    mutable bool qabstractslider_repeataction_isbase = false;
    mutable bool qabstractslider_setrepeataction2_isbase = false;
    mutable bool qabstractslider_setrepeataction3_isbase = false;

public:
	VirtualQAbstractSlider(QWidget* parent): QAbstractSlider(parent) {};
	VirtualQAbstractSlider(): QAbstractSlider() {};

	~VirtualQAbstractSlider() {
		qabstractslider_event_callback = nullptr;
		qabstractslider_sliderchange_callback = nullptr;
		qabstractslider_keypressevent_callback = nullptr;
		qabstractslider_timerevent_callback = nullptr;
		qabstractslider_wheelevent_callback = nullptr;
		qabstractslider_changeevent_callback = nullptr;
		qabstractslider_setrepeataction_callback = nullptr;
		qabstractslider_repeataction_callback = nullptr;
		qabstractslider_setrepeataction2_callback = nullptr;
		qabstractslider_setrepeataction3_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractSlider_Event_Callback(QAbstractSlider_Event_Callback cb) const { qabstractslider_event_callback = cb; }
	inline void setQAbstractSlider_SliderChange_Callback(QAbstractSlider_SliderChange_Callback cb) const { qabstractslider_sliderchange_callback = cb; }
	inline void setQAbstractSlider_KeyPressEvent_Callback(QAbstractSlider_KeyPressEvent_Callback cb) const { qabstractslider_keypressevent_callback = cb; }
	inline void setQAbstractSlider_TimerEvent_Callback(QAbstractSlider_TimerEvent_Callback cb) const { qabstractslider_timerevent_callback = cb; }
	inline void setQAbstractSlider_WheelEvent_Callback(QAbstractSlider_WheelEvent_Callback cb) const { qabstractslider_wheelevent_callback = cb; }
	inline void setQAbstractSlider_ChangeEvent_Callback(QAbstractSlider_ChangeEvent_Callback cb) const { qabstractslider_changeevent_callback = cb; }
	inline void setQAbstractSlider_SetRepeatAction_Callback(QAbstractSlider_SetRepeatAction_Callback cb) const { qabstractslider_setrepeataction_callback = cb; }
	inline void setQAbstractSlider_RepeatAction_Callback(QAbstractSlider_RepeatAction_Callback cb) const { qabstractslider_repeataction_callback = cb; }
	inline void setQAbstractSlider_SetRepeatAction2_Callback(QAbstractSlider_SetRepeatAction2_Callback cb) const { qabstractslider_setrepeataction2_callback = cb; }
	inline void setQAbstractSlider_SetRepeatAction3_Callback(QAbstractSlider_SetRepeatAction3_Callback cb) const { qabstractslider_setrepeataction3_callback = cb; }

// Base flag setters
	inline void setQAbstractSlider_Event_IsBase(bool value) const { qabstractslider_event_isbase = value; }
	inline void setQAbstractSlider_SliderChange_IsBase(bool value) const { qabstractslider_sliderchange_isbase = value; }
	inline void setQAbstractSlider_KeyPressEvent_IsBase(bool value) const { qabstractslider_keypressevent_isbase = value; }
	inline void setQAbstractSlider_TimerEvent_IsBase(bool value) const { qabstractslider_timerevent_isbase = value; }
	inline void setQAbstractSlider_WheelEvent_IsBase(bool value) const { qabstractslider_wheelevent_isbase = value; }
	inline void setQAbstractSlider_ChangeEvent_IsBase(bool value) const { qabstractslider_changeevent_isbase = value; }
	inline void setQAbstractSlider_SetRepeatAction_IsBase(bool value) const { qabstractslider_setrepeataction_isbase = value; }
	inline void setQAbstractSlider_RepeatAction_IsBase(bool value) const { qabstractslider_repeataction_isbase = value; }
	inline void setQAbstractSlider_SetRepeatAction2_IsBase(bool value) const { qabstractslider_setrepeataction2_isbase = value; }
	inline void setQAbstractSlider_SetRepeatAction3_IsBase(bool value) const { qabstractslider_setrepeataction3_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qabstractslider_event_isbase) {
			qabstractslider_event_isbase = false;
			return QAbstractSlider::event(e);
		} else if (qabstractslider_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qabstractslider_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractSlider::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void sliderChange(SliderChange change) override {
		if (qabstractslider_sliderchange_isbase) {
			qabstractslider_sliderchange_isbase = false;
			QAbstractSlider::sliderChange(change);
		} else if (qabstractslider_sliderchange_callback != nullptr) {
			int cbval1 = static_cast<int>(change);
			qabstractslider_sliderchange_callback(this, cbval1);
		} else {
			QAbstractSlider::sliderChange(change);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* ev) override {
		if (qabstractslider_keypressevent_isbase) {
			qabstractslider_keypressevent_isbase = false;
			QAbstractSlider::keyPressEvent(ev);
		} else if (qabstractslider_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = ev;
			qabstractslider_keypressevent_callback(this, cbval1);
		} else {
			QAbstractSlider::keyPressEvent(ev);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* param1) override {
		if (qabstractslider_timerevent_isbase) {
			qabstractslider_timerevent_isbase = false;
			QAbstractSlider::timerEvent(param1);
		} else if (qabstractslider_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = param1;
			qabstractslider_timerevent_callback(this, cbval1);
		} else {
			QAbstractSlider::timerEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void wheelEvent(QWheelEvent* e) override {
		if (qabstractslider_wheelevent_isbase) {
			qabstractslider_wheelevent_isbase = false;
			QAbstractSlider::wheelEvent(e);
		} else if (qabstractslider_wheelevent_callback != nullptr) {
			QWheelEvent* cbval1 = e;
			qabstractslider_wheelevent_callback(this, cbval1);
		} else {
			QAbstractSlider::wheelEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* e) override {
		if (qabstractslider_changeevent_isbase) {
			qabstractslider_changeevent_isbase = false;
			QAbstractSlider::changeEvent(e);
		} else if (qabstractslider_changeevent_callback != nullptr) {
			QEvent* cbval1 = e;
			qabstractslider_changeevent_callback(this, cbval1);
		} else {
			QAbstractSlider::changeEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setRepeatAction(SliderAction action) {
		if (qabstractslider_setrepeataction_isbase) {
			qabstractslider_setrepeataction_isbase = false;
			QAbstractSlider::setRepeatAction(action);
		} else if (qabstractslider_setrepeataction_callback != nullptr) {
			int cbval1 = static_cast<int>(action);
			qabstractslider_setrepeataction_callback(this, cbval1);
		} else {
			QAbstractSlider::setRepeatAction(action);
		}
	}

	// Virtual method for C ABI access and custom callback
	SliderAction repeatAction() const {
		if (qabstractslider_repeataction_isbase) {
			qabstractslider_repeataction_isbase = false;
			return QAbstractSlider::repeatAction();
		} else if (qabstractslider_repeataction_callback != nullptr) {
			int callback_ret = qabstractslider_repeataction_callback();
			return static_cast<QAbstractSlider::SliderAction>(callback_ret);
		} else {
			return QAbstractSlider::repeatAction();
		}
	}

	// Virtual method for C ABI access and custom callback
	void setRepeatAction(SliderAction action, int thresholdTime) {
		if (qabstractslider_setrepeataction2_isbase) {
			qabstractslider_setrepeataction2_isbase = false;
			QAbstractSlider::setRepeatAction(action, thresholdTime);
		} else if (qabstractslider_setrepeataction2_callback != nullptr) {
			int cbval1 = static_cast<int>(action);
			int cbval2 = thresholdTime;
			qabstractslider_setrepeataction2_callback(this, cbval1, cbval2);
		} else {
			QAbstractSlider::setRepeatAction(action, thresholdTime);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setRepeatAction(SliderAction action, int thresholdTime, int repeatTime) {
		if (qabstractslider_setrepeataction3_isbase) {
			qabstractslider_setrepeataction3_isbase = false;
			QAbstractSlider::setRepeatAction(action, thresholdTime, repeatTime);
		} else if (qabstractslider_setrepeataction3_callback != nullptr) {
			int cbval1 = static_cast<int>(action);
			int cbval2 = thresholdTime;
			int cbval3 = repeatTime;
			qabstractslider_setrepeataction3_callback(this, cbval1, cbval2, cbval3);
		} else {
			QAbstractSlider::setRepeatAction(action, thresholdTime, repeatTime);
		}
	}

	// Friend functions
	friend bool QAbstractSlider_Event(QAbstractSlider* self, QEvent* e);
	friend bool QAbstractSlider_QBaseEvent(QAbstractSlider* self, QEvent* e);
	friend void QAbstractSlider_SliderChange(QAbstractSlider* self, int change);
	friend void QAbstractSlider_QBaseSliderChange(QAbstractSlider* self, int change);
	friend void QAbstractSlider_KeyPressEvent(QAbstractSlider* self, QKeyEvent* ev);
	friend void QAbstractSlider_QBaseKeyPressEvent(QAbstractSlider* self, QKeyEvent* ev);
	friend void QAbstractSlider_TimerEvent(QAbstractSlider* self, QTimerEvent* param1);
	friend void QAbstractSlider_QBaseTimerEvent(QAbstractSlider* self, QTimerEvent* param1);
	friend void QAbstractSlider_WheelEvent(QAbstractSlider* self, QWheelEvent* e);
	friend void QAbstractSlider_QBaseWheelEvent(QAbstractSlider* self, QWheelEvent* e);
	friend void QAbstractSlider_ChangeEvent(QAbstractSlider* self, QEvent* e);
	friend void QAbstractSlider_QBaseChangeEvent(QAbstractSlider* self, QEvent* e);
	friend void QAbstractSlider_SetRepeatAction(QAbstractSlider* self, int action);
	friend void QAbstractSlider_QBaseSetRepeatAction(QAbstractSlider* self, int action);
	friend int QAbstractSlider_RepeatAction(const QAbstractSlider* self);
	friend int QAbstractSlider_QBaseRepeatAction(const QAbstractSlider* self);
	friend void QAbstractSlider_SetRepeatAction2(QAbstractSlider* self, int action, int thresholdTime);
	friend void QAbstractSlider_QBaseSetRepeatAction2(QAbstractSlider* self, int action, int thresholdTime);
	friend void QAbstractSlider_SetRepeatAction3(QAbstractSlider* self, int action, int thresholdTime, int repeatTime);
	friend void QAbstractSlider_QBaseSetRepeatAction3(QAbstractSlider* self, int action, int thresholdTime, int repeatTime);
};

#endif


