#pragma once
#ifndef QCHECKBOX_H_C_LIBVIRTUAL
#define QCHECKBOX_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QCheckBox so that we can call protected methods
class VirtualQCheckBox final : public QCheckBox {

public:
	// Virtual class boolean flag
	bool isVirtualQCheckBox= true;

	// Virtual class public types (including callbacks)
	using QCheckBox_SizeHint_Callback = QSize* (*)();
	using QCheckBox_MinimumSizeHint_Callback = QSize* (*)();
	using QCheckBox_Event_Callback = bool (*)(QCheckBox*, QEvent*);
	using QCheckBox_HitButton_Callback = bool (*)(const QCheckBox*, const QPoint*);
	using QCheckBox_CheckStateSet_Callback = void (*)();
	using QCheckBox_NextCheckState_Callback = void (*)();
	using QCheckBox_PaintEvent_Callback = void (*)(QCheckBox*, QPaintEvent*);
	using QCheckBox_MouseMoveEvent_Callback = void (*)(QCheckBox*, QMouseEvent*);
	using QCheckBox_InitStyleOption_Callback = void (*)(const QCheckBox*, QStyleOptionButton*);

protected:
	// Instance callback storage
	mutable QCheckBox_SizeHint_Callback qcheckbox_sizehint_callback = nullptr;
	mutable QCheckBox_MinimumSizeHint_Callback qcheckbox_minimumsizehint_callback = nullptr;
	mutable QCheckBox_Event_Callback qcheckbox_event_callback = nullptr;
	mutable QCheckBox_HitButton_Callback qcheckbox_hitbutton_callback = nullptr;
	mutable QCheckBox_CheckStateSet_Callback qcheckbox_checkstateset_callback = nullptr;
	mutable QCheckBox_NextCheckState_Callback qcheckbox_nextcheckstate_callback = nullptr;
	mutable QCheckBox_PaintEvent_Callback qcheckbox_paintevent_callback = nullptr;
	mutable QCheckBox_MouseMoveEvent_Callback qcheckbox_mousemoveevent_callback = nullptr;
	mutable QCheckBox_InitStyleOption_Callback qcheckbox_initstyleoption_callback = nullptr;

	// Instance base flags
    mutable bool qcheckbox_sizehint_isbase = false;
    mutable bool qcheckbox_minimumsizehint_isbase = false;
    mutable bool qcheckbox_event_isbase = false;
    mutable bool qcheckbox_hitbutton_isbase = false;
    mutable bool qcheckbox_checkstateset_isbase = false;
    mutable bool qcheckbox_nextcheckstate_isbase = false;
    mutable bool qcheckbox_paintevent_isbase = false;
    mutable bool qcheckbox_mousemoveevent_isbase = false;
    mutable bool qcheckbox_initstyleoption_isbase = false;

public:
	VirtualQCheckBox(QWidget* parent): QCheckBox(parent) {};
	VirtualQCheckBox(): QCheckBox() {};
	VirtualQCheckBox(const QString& text): QCheckBox(text) {};
	VirtualQCheckBox(const QString& text, QWidget* parent): QCheckBox(text, parent) {};

	~VirtualQCheckBox() {
		qcheckbox_sizehint_callback = nullptr;
		qcheckbox_minimumsizehint_callback = nullptr;
		qcheckbox_event_callback = nullptr;
		qcheckbox_hitbutton_callback = nullptr;
		qcheckbox_checkstateset_callback = nullptr;
		qcheckbox_nextcheckstate_callback = nullptr;
		qcheckbox_paintevent_callback = nullptr;
		qcheckbox_mousemoveevent_callback = nullptr;
		qcheckbox_initstyleoption_callback = nullptr;
	}

// Callback setters
	inline void setQCheckBox_SizeHint_Callback(QCheckBox_SizeHint_Callback cb) const { qcheckbox_sizehint_callback = cb; }
	inline void setQCheckBox_MinimumSizeHint_Callback(QCheckBox_MinimumSizeHint_Callback cb) const { qcheckbox_minimumsizehint_callback = cb; }
	inline void setQCheckBox_Event_Callback(QCheckBox_Event_Callback cb) const { qcheckbox_event_callback = cb; }
	inline void setQCheckBox_HitButton_Callback(QCheckBox_HitButton_Callback cb) const { qcheckbox_hitbutton_callback = cb; }
	inline void setQCheckBox_CheckStateSet_Callback(QCheckBox_CheckStateSet_Callback cb) const { qcheckbox_checkstateset_callback = cb; }
	inline void setQCheckBox_NextCheckState_Callback(QCheckBox_NextCheckState_Callback cb) const { qcheckbox_nextcheckstate_callback = cb; }
	inline void setQCheckBox_PaintEvent_Callback(QCheckBox_PaintEvent_Callback cb) const { qcheckbox_paintevent_callback = cb; }
	inline void setQCheckBox_MouseMoveEvent_Callback(QCheckBox_MouseMoveEvent_Callback cb) const { qcheckbox_mousemoveevent_callback = cb; }
	inline void setQCheckBox_InitStyleOption_Callback(QCheckBox_InitStyleOption_Callback cb) const { qcheckbox_initstyleoption_callback = cb; }

// Base flag setters
	inline void setQCheckBox_SizeHint_IsBase(bool value) const { qcheckbox_sizehint_isbase = value; }
	inline void setQCheckBox_MinimumSizeHint_IsBase(bool value) const { qcheckbox_minimumsizehint_isbase = value; }
	inline void setQCheckBox_Event_IsBase(bool value) const { qcheckbox_event_isbase = value; }
	inline void setQCheckBox_HitButton_IsBase(bool value) const { qcheckbox_hitbutton_isbase = value; }
	inline void setQCheckBox_CheckStateSet_IsBase(bool value) const { qcheckbox_checkstateset_isbase = value; }
	inline void setQCheckBox_NextCheckState_IsBase(bool value) const { qcheckbox_nextcheckstate_isbase = value; }
	inline void setQCheckBox_PaintEvent_IsBase(bool value) const { qcheckbox_paintevent_isbase = value; }
	inline void setQCheckBox_MouseMoveEvent_IsBase(bool value) const { qcheckbox_mousemoveevent_isbase = value; }
	inline void setQCheckBox_InitStyleOption_IsBase(bool value) const { qcheckbox_initstyleoption_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qcheckbox_sizehint_isbase) {
			qcheckbox_sizehint_isbase = false;
			return QCheckBox::sizeHint();
		} else if (qcheckbox_sizehint_callback != nullptr) {
			QSize* callback_ret = qcheckbox_sizehint_callback();
			return *callback_ret;
		} else {
			return QCheckBox::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qcheckbox_minimumsizehint_isbase) {
			qcheckbox_minimumsizehint_isbase = false;
			return QCheckBox::minimumSizeHint();
		} else if (qcheckbox_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qcheckbox_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QCheckBox::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qcheckbox_event_isbase) {
			qcheckbox_event_isbase = false;
			return QCheckBox::event(e);
		} else if (qcheckbox_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qcheckbox_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QCheckBox::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool hitButton(const QPoint& pos) const override {
		if (qcheckbox_hitbutton_isbase) {
			qcheckbox_hitbutton_isbase = false;
			return QCheckBox::hitButton(pos);
		} else if (qcheckbox_hitbutton_callback != nullptr) {
			const QPoint* cbval1 = (const QPoint*)&pos;
			bool callback_ret = qcheckbox_hitbutton_callback(this, cbval1);
			return callback_ret;
		} else {
			return QCheckBox::hitButton(pos);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void checkStateSet() override {
		if (qcheckbox_checkstateset_isbase) {
			qcheckbox_checkstateset_isbase = false;
			QCheckBox::checkStateSet();
		} else if (qcheckbox_checkstateset_callback != nullptr) {
			qcheckbox_checkstateset_callback();
		} else {
			QCheckBox::checkStateSet();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void nextCheckState() override {
		if (qcheckbox_nextcheckstate_isbase) {
			qcheckbox_nextcheckstate_isbase = false;
			QCheckBox::nextCheckState();
		} else if (qcheckbox_nextcheckstate_callback != nullptr) {
			qcheckbox_nextcheckstate_callback();
		} else {
			QCheckBox::nextCheckState();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qcheckbox_paintevent_isbase) {
			qcheckbox_paintevent_isbase = false;
			QCheckBox::paintEvent(param1);
		} else if (qcheckbox_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qcheckbox_paintevent_callback(this, cbval1);
		} else {
			QCheckBox::paintEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (qcheckbox_mousemoveevent_isbase) {
			qcheckbox_mousemoveevent_isbase = false;
			QCheckBox::mouseMoveEvent(param1);
		} else if (qcheckbox_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qcheckbox_mousemoveevent_callback(this, cbval1);
		} else {
			QCheckBox::mouseMoveEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionButton* option) const override {
		if (qcheckbox_initstyleoption_isbase) {
			qcheckbox_initstyleoption_isbase = false;
			QCheckBox::initStyleOption(option);
		} else if (qcheckbox_initstyleoption_callback != nullptr) {
			QStyleOptionButton* cbval1 = option;
			qcheckbox_initstyleoption_callback(this, cbval1);
		} else {
			QCheckBox::initStyleOption(option);
		}
	}

	// Friend functions
	friend bool QCheckBox_Event(QCheckBox* self, QEvent* e);
	friend bool QCheckBox_QBaseEvent(QCheckBox* self, QEvent* e);
	friend bool QCheckBox_HitButton(const QCheckBox* self, const QPoint* pos);
	friend bool QCheckBox_QBaseHitButton(const QCheckBox* self, const QPoint* pos);
	friend void QCheckBox_CheckStateSet(QCheckBox* self);
	friend void QCheckBox_QBaseCheckStateSet(QCheckBox* self);
	friend void QCheckBox_NextCheckState(QCheckBox* self);
	friend void QCheckBox_QBaseNextCheckState(QCheckBox* self);
	friend void QCheckBox_PaintEvent(QCheckBox* self, QPaintEvent* param1);
	friend void QCheckBox_QBasePaintEvent(QCheckBox* self, QPaintEvent* param1);
	friend void QCheckBox_MouseMoveEvent(QCheckBox* self, QMouseEvent* param1);
	friend void QCheckBox_QBaseMouseMoveEvent(QCheckBox* self, QMouseEvent* param1);
	friend void QCheckBox_InitStyleOption(const QCheckBox* self, QStyleOptionButton* option);
	friend void QCheckBox_QBaseInitStyleOption(const QCheckBox* self, QStyleOptionButton* option);
};

#endif


