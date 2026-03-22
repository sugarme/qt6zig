#pragma once
#ifndef QLCDNUMBER_H_C_LIBVIRTUAL
#define QLCDNUMBER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QLCDNumber so that we can call protected methods
class VirtualQLCDNumber final : public QLCDNumber {

public:
	// Virtual class boolean flag
	bool isVirtualQLCDNumber= true;

	// Virtual class public types (including callbacks)
	using QLCDNumber_SizeHint_Callback = QSize* (*)();
	using QLCDNumber_Event_Callback = bool (*)(QLCDNumber*, QEvent*);
	using QLCDNumber_PaintEvent_Callback = void (*)(QLCDNumber*, QPaintEvent*);

protected:
	// Instance callback storage
	mutable QLCDNumber_SizeHint_Callback qlcdnumber_sizehint_callback = nullptr;
	mutable QLCDNumber_Event_Callback qlcdnumber_event_callback = nullptr;
	mutable QLCDNumber_PaintEvent_Callback qlcdnumber_paintevent_callback = nullptr;

	// Instance base flags
    mutable bool qlcdnumber_sizehint_isbase = false;
    mutable bool qlcdnumber_event_isbase = false;
    mutable bool qlcdnumber_paintevent_isbase = false;

public:
	VirtualQLCDNumber(QWidget* parent): QLCDNumber(parent) {};
	VirtualQLCDNumber(): QLCDNumber() {};
	VirtualQLCDNumber(uint numDigits): QLCDNumber(numDigits) {};
	VirtualQLCDNumber(uint numDigits, QWidget* parent): QLCDNumber(numDigits, parent) {};

	~VirtualQLCDNumber() {
		qlcdnumber_sizehint_callback = nullptr;
		qlcdnumber_event_callback = nullptr;
		qlcdnumber_paintevent_callback = nullptr;
	}

// Callback setters
	inline void setQLCDNumber_SizeHint_Callback(QLCDNumber_SizeHint_Callback cb) const { qlcdnumber_sizehint_callback = cb; }
	inline void setQLCDNumber_Event_Callback(QLCDNumber_Event_Callback cb) const { qlcdnumber_event_callback = cb; }
	inline void setQLCDNumber_PaintEvent_Callback(QLCDNumber_PaintEvent_Callback cb) const { qlcdnumber_paintevent_callback = cb; }

// Base flag setters
	inline void setQLCDNumber_SizeHint_IsBase(bool value) const { qlcdnumber_sizehint_isbase = value; }
	inline void setQLCDNumber_Event_IsBase(bool value) const { qlcdnumber_event_isbase = value; }
	inline void setQLCDNumber_PaintEvent_IsBase(bool value) const { qlcdnumber_paintevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qlcdnumber_sizehint_isbase) {
			qlcdnumber_sizehint_isbase = false;
			return QLCDNumber::sizeHint();
		} else if (qlcdnumber_sizehint_callback != nullptr) {
			QSize* callback_ret = qlcdnumber_sizehint_callback();
			return *callback_ret;
		} else {
			return QLCDNumber::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qlcdnumber_event_isbase) {
			qlcdnumber_event_isbase = false;
			return QLCDNumber::event(e);
		} else if (qlcdnumber_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qlcdnumber_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QLCDNumber::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qlcdnumber_paintevent_isbase) {
			qlcdnumber_paintevent_isbase = false;
			QLCDNumber::paintEvent(param1);
		} else if (qlcdnumber_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qlcdnumber_paintevent_callback(this, cbval1);
		} else {
			QLCDNumber::paintEvent(param1);
		}
	}

	// Friend functions
	friend bool QLCDNumber_Event(QLCDNumber* self, QEvent* e);
	friend bool QLCDNumber_QBaseEvent(QLCDNumber* self, QEvent* e);
	friend void QLCDNumber_PaintEvent(QLCDNumber* self, QPaintEvent* param1);
	friend void QLCDNumber_QBasePaintEvent(QLCDNumber* self, QPaintEvent* param1);
};

#endif


