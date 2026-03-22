#pragma once
#ifndef QPROGRESSBAR_H_C_LIBVIRTUAL
#define QPROGRESSBAR_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QProgressBar so that we can call protected methods
class VirtualQProgressBar final : public QProgressBar {

public:
	// Virtual class boolean flag
	bool isVirtualQProgressBar= true;

	// Virtual class public types (including callbacks)
	using QProgressBar_Text_Callback = const char* (*)();
	using QProgressBar_SizeHint_Callback = QSize* (*)();
	using QProgressBar_MinimumSizeHint_Callback = QSize* (*)();
	using QProgressBar_Event_Callback = bool (*)(QProgressBar*, QEvent*);
	using QProgressBar_PaintEvent_Callback = void (*)(QProgressBar*, QPaintEvent*);
	using QProgressBar_InitStyleOption_Callback = void (*)(const QProgressBar*, QStyleOptionProgressBar*);

protected:
	// Instance callback storage
	mutable QProgressBar_Text_Callback qprogressbar_text_callback = nullptr;
	mutable QProgressBar_SizeHint_Callback qprogressbar_sizehint_callback = nullptr;
	mutable QProgressBar_MinimumSizeHint_Callback qprogressbar_minimumsizehint_callback = nullptr;
	mutable QProgressBar_Event_Callback qprogressbar_event_callback = nullptr;
	mutable QProgressBar_PaintEvent_Callback qprogressbar_paintevent_callback = nullptr;
	mutable QProgressBar_InitStyleOption_Callback qprogressbar_initstyleoption_callback = nullptr;

	// Instance base flags
    mutable bool qprogressbar_text_isbase = false;
    mutable bool qprogressbar_sizehint_isbase = false;
    mutable bool qprogressbar_minimumsizehint_isbase = false;
    mutable bool qprogressbar_event_isbase = false;
    mutable bool qprogressbar_paintevent_isbase = false;
    mutable bool qprogressbar_initstyleoption_isbase = false;

public:
	VirtualQProgressBar(QWidget* parent): QProgressBar(parent) {};
	VirtualQProgressBar(): QProgressBar() {};

	~VirtualQProgressBar() {
		qprogressbar_text_callback = nullptr;
		qprogressbar_sizehint_callback = nullptr;
		qprogressbar_minimumsizehint_callback = nullptr;
		qprogressbar_event_callback = nullptr;
		qprogressbar_paintevent_callback = nullptr;
		qprogressbar_initstyleoption_callback = nullptr;
	}

// Callback setters
	inline void setQProgressBar_Text_Callback(QProgressBar_Text_Callback cb) const { qprogressbar_text_callback = cb; }
	inline void setQProgressBar_SizeHint_Callback(QProgressBar_SizeHint_Callback cb) const { qprogressbar_sizehint_callback = cb; }
	inline void setQProgressBar_MinimumSizeHint_Callback(QProgressBar_MinimumSizeHint_Callback cb) const { qprogressbar_minimumsizehint_callback = cb; }
	inline void setQProgressBar_Event_Callback(QProgressBar_Event_Callback cb) const { qprogressbar_event_callback = cb; }
	inline void setQProgressBar_PaintEvent_Callback(QProgressBar_PaintEvent_Callback cb) const { qprogressbar_paintevent_callback = cb; }
	inline void setQProgressBar_InitStyleOption_Callback(QProgressBar_InitStyleOption_Callback cb) const { qprogressbar_initstyleoption_callback = cb; }

// Base flag setters
	inline void setQProgressBar_Text_IsBase(bool value) const { qprogressbar_text_isbase = value; }
	inline void setQProgressBar_SizeHint_IsBase(bool value) const { qprogressbar_sizehint_isbase = value; }
	inline void setQProgressBar_MinimumSizeHint_IsBase(bool value) const { qprogressbar_minimumsizehint_isbase = value; }
	inline void setQProgressBar_Event_IsBase(bool value) const { qprogressbar_event_isbase = value; }
	inline void setQProgressBar_PaintEvent_IsBase(bool value) const { qprogressbar_paintevent_isbase = value; }
	inline void setQProgressBar_InitStyleOption_IsBase(bool value) const { qprogressbar_initstyleoption_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QString text() const override {
		if (qprogressbar_text_isbase) {
			qprogressbar_text_isbase = false;
			return QProgressBar::text();
		} else if (qprogressbar_text_callback != nullptr) {
			const char* callback_ret = qprogressbar_text_callback();
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QProgressBar::text();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qprogressbar_sizehint_isbase) {
			qprogressbar_sizehint_isbase = false;
			return QProgressBar::sizeHint();
		} else if (qprogressbar_sizehint_callback != nullptr) {
			QSize* callback_ret = qprogressbar_sizehint_callback();
			return *callback_ret;
		} else {
			return QProgressBar::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qprogressbar_minimumsizehint_isbase) {
			qprogressbar_minimumsizehint_isbase = false;
			return QProgressBar::minimumSizeHint();
		} else if (qprogressbar_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qprogressbar_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QProgressBar::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qprogressbar_event_isbase) {
			qprogressbar_event_isbase = false;
			return QProgressBar::event(e);
		} else if (qprogressbar_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qprogressbar_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QProgressBar::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qprogressbar_paintevent_isbase) {
			qprogressbar_paintevent_isbase = false;
			QProgressBar::paintEvent(param1);
		} else if (qprogressbar_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qprogressbar_paintevent_callback(this, cbval1);
		} else {
			QProgressBar::paintEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionProgressBar* option) const override {
		if (qprogressbar_initstyleoption_isbase) {
			qprogressbar_initstyleoption_isbase = false;
			QProgressBar::initStyleOption(option);
		} else if (qprogressbar_initstyleoption_callback != nullptr) {
			QStyleOptionProgressBar* cbval1 = option;
			qprogressbar_initstyleoption_callback(this, cbval1);
		} else {
			QProgressBar::initStyleOption(option);
		}
	}

	// Friend functions
	friend bool QProgressBar_Event(QProgressBar* self, QEvent* e);
	friend bool QProgressBar_QBaseEvent(QProgressBar* self, QEvent* e);
	friend void QProgressBar_PaintEvent(QProgressBar* self, QPaintEvent* param1);
	friend void QProgressBar_QBasePaintEvent(QProgressBar* self, QPaintEvent* param1);
	friend void QProgressBar_InitStyleOption(const QProgressBar* self, QStyleOptionProgressBar* option);
	friend void QProgressBar_QBaseInitStyleOption(const QProgressBar* self, QStyleOptionProgressBar* option);
};

#endif


