#pragma once
#ifndef QTOOLBUTTON_H_C_LIBVIRTUAL
#define QTOOLBUTTON_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QToolButton so that we can call protected methods
class VirtualQToolButton final : public QToolButton {

public:
	// Virtual class boolean flag
	bool isVirtualQToolButton= true;

	// Virtual class public types (including callbacks)
	using QToolButton_SizeHint_Callback = QSize* (*)();
	using QToolButton_MinimumSizeHint_Callback = QSize* (*)();
	using QToolButton_Event_Callback = bool (*)(QToolButton*, QEvent*);
	using QToolButton_MousePressEvent_Callback = void (*)(QToolButton*, QMouseEvent*);
	using QToolButton_MouseReleaseEvent_Callback = void (*)(QToolButton*, QMouseEvent*);
	using QToolButton_PaintEvent_Callback = void (*)(QToolButton*, QPaintEvent*);
	using QToolButton_ActionEvent_Callback = void (*)(QToolButton*, QActionEvent*);
	using QToolButton_EnterEvent_Callback = void (*)(QToolButton*, QEnterEvent*);
	using QToolButton_LeaveEvent_Callback = void (*)(QToolButton*, QEvent*);
	using QToolButton_TimerEvent_Callback = void (*)(QToolButton*, QTimerEvent*);
	using QToolButton_ChangeEvent_Callback = void (*)(QToolButton*, QEvent*);
	using QToolButton_HitButton_Callback = bool (*)(const QToolButton*, const QPoint*);
	using QToolButton_CheckStateSet_Callback = void (*)();
	using QToolButton_NextCheckState_Callback = void (*)();
	using QToolButton_InitStyleOption_Callback = void (*)(const QToolButton*, QStyleOptionToolButton*);

protected:
	// Instance callback storage
	mutable QToolButton_SizeHint_Callback qtoolbutton_sizehint_callback = nullptr;
	mutable QToolButton_MinimumSizeHint_Callback qtoolbutton_minimumsizehint_callback = nullptr;
	mutable QToolButton_Event_Callback qtoolbutton_event_callback = nullptr;
	mutable QToolButton_MousePressEvent_Callback qtoolbutton_mousepressevent_callback = nullptr;
	mutable QToolButton_MouseReleaseEvent_Callback qtoolbutton_mousereleaseevent_callback = nullptr;
	mutable QToolButton_PaintEvent_Callback qtoolbutton_paintevent_callback = nullptr;
	mutable QToolButton_ActionEvent_Callback qtoolbutton_actionevent_callback = nullptr;
	mutable QToolButton_EnterEvent_Callback qtoolbutton_enterevent_callback = nullptr;
	mutable QToolButton_LeaveEvent_Callback qtoolbutton_leaveevent_callback = nullptr;
	mutable QToolButton_TimerEvent_Callback qtoolbutton_timerevent_callback = nullptr;
	mutable QToolButton_ChangeEvent_Callback qtoolbutton_changeevent_callback = nullptr;
	mutable QToolButton_HitButton_Callback qtoolbutton_hitbutton_callback = nullptr;
	mutable QToolButton_CheckStateSet_Callback qtoolbutton_checkstateset_callback = nullptr;
	mutable QToolButton_NextCheckState_Callback qtoolbutton_nextcheckstate_callback = nullptr;
	mutable QToolButton_InitStyleOption_Callback qtoolbutton_initstyleoption_callback = nullptr;

	// Instance base flags
    mutable bool qtoolbutton_sizehint_isbase = false;
    mutable bool qtoolbutton_minimumsizehint_isbase = false;
    mutable bool qtoolbutton_event_isbase = false;
    mutable bool qtoolbutton_mousepressevent_isbase = false;
    mutable bool qtoolbutton_mousereleaseevent_isbase = false;
    mutable bool qtoolbutton_paintevent_isbase = false;
    mutable bool qtoolbutton_actionevent_isbase = false;
    mutable bool qtoolbutton_enterevent_isbase = false;
    mutable bool qtoolbutton_leaveevent_isbase = false;
    mutable bool qtoolbutton_timerevent_isbase = false;
    mutable bool qtoolbutton_changeevent_isbase = false;
    mutable bool qtoolbutton_hitbutton_isbase = false;
    mutable bool qtoolbutton_checkstateset_isbase = false;
    mutable bool qtoolbutton_nextcheckstate_isbase = false;
    mutable bool qtoolbutton_initstyleoption_isbase = false;

public:
	VirtualQToolButton(QWidget* parent): QToolButton(parent) {};
	VirtualQToolButton(): QToolButton() {};

	~VirtualQToolButton() {
		qtoolbutton_sizehint_callback = nullptr;
		qtoolbutton_minimumsizehint_callback = nullptr;
		qtoolbutton_event_callback = nullptr;
		qtoolbutton_mousepressevent_callback = nullptr;
		qtoolbutton_mousereleaseevent_callback = nullptr;
		qtoolbutton_paintevent_callback = nullptr;
		qtoolbutton_actionevent_callback = nullptr;
		qtoolbutton_enterevent_callback = nullptr;
		qtoolbutton_leaveevent_callback = nullptr;
		qtoolbutton_timerevent_callback = nullptr;
		qtoolbutton_changeevent_callback = nullptr;
		qtoolbutton_hitbutton_callback = nullptr;
		qtoolbutton_checkstateset_callback = nullptr;
		qtoolbutton_nextcheckstate_callback = nullptr;
		qtoolbutton_initstyleoption_callback = nullptr;
	}

// Callback setters
	inline void setQToolButton_SizeHint_Callback(QToolButton_SizeHint_Callback cb) const { qtoolbutton_sizehint_callback = cb; }
	inline void setQToolButton_MinimumSizeHint_Callback(QToolButton_MinimumSizeHint_Callback cb) const { qtoolbutton_minimumsizehint_callback = cb; }
	inline void setQToolButton_Event_Callback(QToolButton_Event_Callback cb) const { qtoolbutton_event_callback = cb; }
	inline void setQToolButton_MousePressEvent_Callback(QToolButton_MousePressEvent_Callback cb) const { qtoolbutton_mousepressevent_callback = cb; }
	inline void setQToolButton_MouseReleaseEvent_Callback(QToolButton_MouseReleaseEvent_Callback cb) const { qtoolbutton_mousereleaseevent_callback = cb; }
	inline void setQToolButton_PaintEvent_Callback(QToolButton_PaintEvent_Callback cb) const { qtoolbutton_paintevent_callback = cb; }
	inline void setQToolButton_ActionEvent_Callback(QToolButton_ActionEvent_Callback cb) const { qtoolbutton_actionevent_callback = cb; }
	inline void setQToolButton_EnterEvent_Callback(QToolButton_EnterEvent_Callback cb) const { qtoolbutton_enterevent_callback = cb; }
	inline void setQToolButton_LeaveEvent_Callback(QToolButton_LeaveEvent_Callback cb) const { qtoolbutton_leaveevent_callback = cb; }
	inline void setQToolButton_TimerEvent_Callback(QToolButton_TimerEvent_Callback cb) const { qtoolbutton_timerevent_callback = cb; }
	inline void setQToolButton_ChangeEvent_Callback(QToolButton_ChangeEvent_Callback cb) const { qtoolbutton_changeevent_callback = cb; }
	inline void setQToolButton_HitButton_Callback(QToolButton_HitButton_Callback cb) const { qtoolbutton_hitbutton_callback = cb; }
	inline void setQToolButton_CheckStateSet_Callback(QToolButton_CheckStateSet_Callback cb) const { qtoolbutton_checkstateset_callback = cb; }
	inline void setQToolButton_NextCheckState_Callback(QToolButton_NextCheckState_Callback cb) const { qtoolbutton_nextcheckstate_callback = cb; }
	inline void setQToolButton_InitStyleOption_Callback(QToolButton_InitStyleOption_Callback cb) const { qtoolbutton_initstyleoption_callback = cb; }

// Base flag setters
	inline void setQToolButton_SizeHint_IsBase(bool value) const { qtoolbutton_sizehint_isbase = value; }
	inline void setQToolButton_MinimumSizeHint_IsBase(bool value) const { qtoolbutton_minimumsizehint_isbase = value; }
	inline void setQToolButton_Event_IsBase(bool value) const { qtoolbutton_event_isbase = value; }
	inline void setQToolButton_MousePressEvent_IsBase(bool value) const { qtoolbutton_mousepressevent_isbase = value; }
	inline void setQToolButton_MouseReleaseEvent_IsBase(bool value) const { qtoolbutton_mousereleaseevent_isbase = value; }
	inline void setQToolButton_PaintEvent_IsBase(bool value) const { qtoolbutton_paintevent_isbase = value; }
	inline void setQToolButton_ActionEvent_IsBase(bool value) const { qtoolbutton_actionevent_isbase = value; }
	inline void setQToolButton_EnterEvent_IsBase(bool value) const { qtoolbutton_enterevent_isbase = value; }
	inline void setQToolButton_LeaveEvent_IsBase(bool value) const { qtoolbutton_leaveevent_isbase = value; }
	inline void setQToolButton_TimerEvent_IsBase(bool value) const { qtoolbutton_timerevent_isbase = value; }
	inline void setQToolButton_ChangeEvent_IsBase(bool value) const { qtoolbutton_changeevent_isbase = value; }
	inline void setQToolButton_HitButton_IsBase(bool value) const { qtoolbutton_hitbutton_isbase = value; }
	inline void setQToolButton_CheckStateSet_IsBase(bool value) const { qtoolbutton_checkstateset_isbase = value; }
	inline void setQToolButton_NextCheckState_IsBase(bool value) const { qtoolbutton_nextcheckstate_isbase = value; }
	inline void setQToolButton_InitStyleOption_IsBase(bool value) const { qtoolbutton_initstyleoption_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qtoolbutton_sizehint_isbase) {
			qtoolbutton_sizehint_isbase = false;
			return QToolButton::sizeHint();
		} else if (qtoolbutton_sizehint_callback != nullptr) {
			QSize* callback_ret = qtoolbutton_sizehint_callback();
			return *callback_ret;
		} else {
			return QToolButton::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qtoolbutton_minimumsizehint_isbase) {
			qtoolbutton_minimumsizehint_isbase = false;
			return QToolButton::minimumSizeHint();
		} else if (qtoolbutton_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qtoolbutton_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QToolButton::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qtoolbutton_event_isbase) {
			qtoolbutton_event_isbase = false;
			return QToolButton::event(e);
		} else if (qtoolbutton_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qtoolbutton_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QToolButton::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (qtoolbutton_mousepressevent_isbase) {
			qtoolbutton_mousepressevent_isbase = false;
			QToolButton::mousePressEvent(param1);
		} else if (qtoolbutton_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qtoolbutton_mousepressevent_callback(this, cbval1);
		} else {
			QToolButton::mousePressEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (qtoolbutton_mousereleaseevent_isbase) {
			qtoolbutton_mousereleaseevent_isbase = false;
			QToolButton::mouseReleaseEvent(param1);
		} else if (qtoolbutton_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qtoolbutton_mousereleaseevent_callback(this, cbval1);
		} else {
			QToolButton::mouseReleaseEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qtoolbutton_paintevent_isbase) {
			qtoolbutton_paintevent_isbase = false;
			QToolButton::paintEvent(param1);
		} else if (qtoolbutton_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qtoolbutton_paintevent_callback(this, cbval1);
		} else {
			QToolButton::paintEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void actionEvent(QActionEvent* param1) override {
		if (qtoolbutton_actionevent_isbase) {
			qtoolbutton_actionevent_isbase = false;
			QToolButton::actionEvent(param1);
		} else if (qtoolbutton_actionevent_callback != nullptr) {
			QActionEvent* cbval1 = param1;
			qtoolbutton_actionevent_callback(this, cbval1);
		} else {
			QToolButton::actionEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void enterEvent(QEnterEvent* param1) override {
		if (qtoolbutton_enterevent_isbase) {
			qtoolbutton_enterevent_isbase = false;
			QToolButton::enterEvent(param1);
		} else if (qtoolbutton_enterevent_callback != nullptr) {
			QEnterEvent* cbval1 = param1;
			qtoolbutton_enterevent_callback(this, cbval1);
		} else {
			QToolButton::enterEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void leaveEvent(QEvent* param1) override {
		if (qtoolbutton_leaveevent_isbase) {
			qtoolbutton_leaveevent_isbase = false;
			QToolButton::leaveEvent(param1);
		} else if (qtoolbutton_leaveevent_callback != nullptr) {
			QEvent* cbval1 = param1;
			qtoolbutton_leaveevent_callback(this, cbval1);
		} else {
			QToolButton::leaveEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* param1) override {
		if (qtoolbutton_timerevent_isbase) {
			qtoolbutton_timerevent_isbase = false;
			QToolButton::timerEvent(param1);
		} else if (qtoolbutton_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = param1;
			qtoolbutton_timerevent_callback(this, cbval1);
		} else {
			QToolButton::timerEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* param1) override {
		if (qtoolbutton_changeevent_isbase) {
			qtoolbutton_changeevent_isbase = false;
			QToolButton::changeEvent(param1);
		} else if (qtoolbutton_changeevent_callback != nullptr) {
			QEvent* cbval1 = param1;
			qtoolbutton_changeevent_callback(this, cbval1);
		} else {
			QToolButton::changeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool hitButton(const QPoint& pos) const override {
		if (qtoolbutton_hitbutton_isbase) {
			qtoolbutton_hitbutton_isbase = false;
			return QToolButton::hitButton(pos);
		} else if (qtoolbutton_hitbutton_callback != nullptr) {
			const QPoint* cbval1 = (const QPoint*)&pos;
			bool callback_ret = qtoolbutton_hitbutton_callback(this, cbval1);
			return callback_ret;
		} else {
			return QToolButton::hitButton(pos);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void checkStateSet() override {
		if (qtoolbutton_checkstateset_isbase) {
			qtoolbutton_checkstateset_isbase = false;
			QToolButton::checkStateSet();
		} else if (qtoolbutton_checkstateset_callback != nullptr) {
			qtoolbutton_checkstateset_callback();
		} else {
			QToolButton::checkStateSet();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void nextCheckState() override {
		if (qtoolbutton_nextcheckstate_isbase) {
			qtoolbutton_nextcheckstate_isbase = false;
			QToolButton::nextCheckState();
		} else if (qtoolbutton_nextcheckstate_callback != nullptr) {
			qtoolbutton_nextcheckstate_callback();
		} else {
			QToolButton::nextCheckState();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionToolButton* option) const override {
		if (qtoolbutton_initstyleoption_isbase) {
			qtoolbutton_initstyleoption_isbase = false;
			QToolButton::initStyleOption(option);
		} else if (qtoolbutton_initstyleoption_callback != nullptr) {
			QStyleOptionToolButton* cbval1 = option;
			qtoolbutton_initstyleoption_callback(this, cbval1);
		} else {
			QToolButton::initStyleOption(option);
		}
	}

	// Friend functions
	friend bool QToolButton_Event(QToolButton* self, QEvent* e);
	friend bool QToolButton_QBaseEvent(QToolButton* self, QEvent* e);
	friend void QToolButton_MousePressEvent(QToolButton* self, QMouseEvent* param1);
	friend void QToolButton_QBaseMousePressEvent(QToolButton* self, QMouseEvent* param1);
	friend void QToolButton_MouseReleaseEvent(QToolButton* self, QMouseEvent* param1);
	friend void QToolButton_QBaseMouseReleaseEvent(QToolButton* self, QMouseEvent* param1);
	friend void QToolButton_PaintEvent(QToolButton* self, QPaintEvent* param1);
	friend void QToolButton_QBasePaintEvent(QToolButton* self, QPaintEvent* param1);
	friend void QToolButton_ActionEvent(QToolButton* self, QActionEvent* param1);
	friend void QToolButton_QBaseActionEvent(QToolButton* self, QActionEvent* param1);
	friend void QToolButton_EnterEvent(QToolButton* self, QEnterEvent* param1);
	friend void QToolButton_QBaseEnterEvent(QToolButton* self, QEnterEvent* param1);
	friend void QToolButton_LeaveEvent(QToolButton* self, QEvent* param1);
	friend void QToolButton_QBaseLeaveEvent(QToolButton* self, QEvent* param1);
	friend void QToolButton_TimerEvent(QToolButton* self, QTimerEvent* param1);
	friend void QToolButton_QBaseTimerEvent(QToolButton* self, QTimerEvent* param1);
	friend void QToolButton_ChangeEvent(QToolButton* self, QEvent* param1);
	friend void QToolButton_QBaseChangeEvent(QToolButton* self, QEvent* param1);
	friend bool QToolButton_HitButton(const QToolButton* self, const QPoint* pos);
	friend bool QToolButton_QBaseHitButton(const QToolButton* self, const QPoint* pos);
	friend void QToolButton_CheckStateSet(QToolButton* self);
	friend void QToolButton_QBaseCheckStateSet(QToolButton* self);
	friend void QToolButton_NextCheckState(QToolButton* self);
	friend void QToolButton_QBaseNextCheckState(QToolButton* self);
	friend void QToolButton_InitStyleOption(const QToolButton* self, QStyleOptionToolButton* option);
	friend void QToolButton_QBaseInitStyleOption(const QToolButton* self, QStyleOptionToolButton* option);
};

#endif


