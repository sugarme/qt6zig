#pragma once
#ifndef QFOCUSFRAME_H_C_LIBVIRTUAL
#define QFOCUSFRAME_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QFocusFrame so that we can call protected methods
class VirtualQFocusFrame final : public QFocusFrame {

public:
	// Virtual class boolean flag
	bool isVirtualQFocusFrame= true;

	// Virtual class public types (including callbacks)
	using QFocusFrame_Event_Callback = bool (*)(QFocusFrame*, QEvent*);
	using QFocusFrame_EventFilter_Callback = bool (*)(QFocusFrame*, QObject*, QEvent*);
	using QFocusFrame_PaintEvent_Callback = void (*)(QFocusFrame*, QPaintEvent*);
	using QFocusFrame_InitStyleOption_Callback = void (*)(const QFocusFrame*, QStyleOption*);

protected:
	// Instance callback storage
	mutable QFocusFrame_Event_Callback qfocusframe_event_callback = nullptr;
	mutable QFocusFrame_EventFilter_Callback qfocusframe_eventfilter_callback = nullptr;
	mutable QFocusFrame_PaintEvent_Callback qfocusframe_paintevent_callback = nullptr;
	mutable QFocusFrame_InitStyleOption_Callback qfocusframe_initstyleoption_callback = nullptr;

	// Instance base flags
    mutable bool qfocusframe_event_isbase = false;
    mutable bool qfocusframe_eventfilter_isbase = false;
    mutable bool qfocusframe_paintevent_isbase = false;
    mutable bool qfocusframe_initstyleoption_isbase = false;

public:
	VirtualQFocusFrame(QWidget* parent): QFocusFrame(parent) {};
	VirtualQFocusFrame(): QFocusFrame() {};

	~VirtualQFocusFrame() {
		qfocusframe_event_callback = nullptr;
		qfocusframe_eventfilter_callback = nullptr;
		qfocusframe_paintevent_callback = nullptr;
		qfocusframe_initstyleoption_callback = nullptr;
	}

// Callback setters
	inline void setQFocusFrame_Event_Callback(QFocusFrame_Event_Callback cb) const { qfocusframe_event_callback = cb; }
	inline void setQFocusFrame_EventFilter_Callback(QFocusFrame_EventFilter_Callback cb) const { qfocusframe_eventfilter_callback = cb; }
	inline void setQFocusFrame_PaintEvent_Callback(QFocusFrame_PaintEvent_Callback cb) const { qfocusframe_paintevent_callback = cb; }
	inline void setQFocusFrame_InitStyleOption_Callback(QFocusFrame_InitStyleOption_Callback cb) const { qfocusframe_initstyleoption_callback = cb; }

// Base flag setters
	inline void setQFocusFrame_Event_IsBase(bool value) const { qfocusframe_event_isbase = value; }
	inline void setQFocusFrame_EventFilter_IsBase(bool value) const { qfocusframe_eventfilter_isbase = value; }
	inline void setQFocusFrame_PaintEvent_IsBase(bool value) const { qfocusframe_paintevent_isbase = value; }
	inline void setQFocusFrame_InitStyleOption_IsBase(bool value) const { qfocusframe_initstyleoption_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qfocusframe_event_isbase) {
			qfocusframe_event_isbase = false;
			return QFocusFrame::event(e);
		} else if (qfocusframe_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qfocusframe_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QFocusFrame::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (qfocusframe_eventfilter_isbase) {
			qfocusframe_eventfilter_isbase = false;
			return QFocusFrame::eventFilter(param1, param2);
		} else if (qfocusframe_eventfilter_callback != nullptr) {
			QObject* cbval1 = param1;
			QEvent* cbval2 = param2;
			bool callback_ret = qfocusframe_eventfilter_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QFocusFrame::eventFilter(param1, param2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qfocusframe_paintevent_isbase) {
			qfocusframe_paintevent_isbase = false;
			QFocusFrame::paintEvent(param1);
		} else if (qfocusframe_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qfocusframe_paintevent_callback(this, cbval1);
		} else {
			QFocusFrame::paintEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOption* option) const override {
		if (qfocusframe_initstyleoption_isbase) {
			qfocusframe_initstyleoption_isbase = false;
			QFocusFrame::initStyleOption(option);
		} else if (qfocusframe_initstyleoption_callback != nullptr) {
			QStyleOption* cbval1 = option;
			qfocusframe_initstyleoption_callback(this, cbval1);
		} else {
			QFocusFrame::initStyleOption(option);
		}
	}

	// Friend functions
	friend bool QFocusFrame_Event(QFocusFrame* self, QEvent* e);
	friend bool QFocusFrame_QBaseEvent(QFocusFrame* self, QEvent* e);
	friend bool QFocusFrame_EventFilter(QFocusFrame* self, QObject* param1, QEvent* param2);
	friend bool QFocusFrame_QBaseEventFilter(QFocusFrame* self, QObject* param1, QEvent* param2);
	friend void QFocusFrame_PaintEvent(QFocusFrame* self, QPaintEvent* param1);
	friend void QFocusFrame_QBasePaintEvent(QFocusFrame* self, QPaintEvent* param1);
	friend void QFocusFrame_InitStyleOption(const QFocusFrame* self, QStyleOption* option);
	friend void QFocusFrame_QBaseInitStyleOption(const QFocusFrame* self, QStyleOption* option);
};

#endif


