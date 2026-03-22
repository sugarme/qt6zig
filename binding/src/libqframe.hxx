#pragma once
#ifndef QFRAME_H_C_LIBVIRTUAL
#define QFRAME_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QFrame so that we can call protected methods
class VirtualQFrame final : public QFrame {

public:
	// Virtual class boolean flag
	bool isVirtualQFrame= true;

	// Virtual class public types (including callbacks)
	using QFrame_SizeHint_Callback = QSize* (*)();
	using QFrame_Event_Callback = bool (*)(QFrame*, QEvent*);
	using QFrame_PaintEvent_Callback = void (*)(QFrame*, QPaintEvent*);
	using QFrame_ChangeEvent_Callback = void (*)(QFrame*, QEvent*);
	using QFrame_InitStyleOption_Callback = void (*)(const QFrame*, QStyleOptionFrame*);
	using QFrame_DrawFrame_Callback = void (*)(QFrame*, QPainter*);

protected:
	// Instance callback storage
	mutable QFrame_SizeHint_Callback qframe_sizehint_callback = nullptr;
	mutable QFrame_Event_Callback qframe_event_callback = nullptr;
	mutable QFrame_PaintEvent_Callback qframe_paintevent_callback = nullptr;
	mutable QFrame_ChangeEvent_Callback qframe_changeevent_callback = nullptr;
	mutable QFrame_InitStyleOption_Callback qframe_initstyleoption_callback = nullptr;
	mutable QFrame_DrawFrame_Callback qframe_drawframe_callback = nullptr;

	// Instance base flags
    mutable bool qframe_sizehint_isbase = false;
    mutable bool qframe_event_isbase = false;
    mutable bool qframe_paintevent_isbase = false;
    mutable bool qframe_changeevent_isbase = false;
    mutable bool qframe_initstyleoption_isbase = false;
    mutable bool qframe_drawframe_isbase = false;

public:
	VirtualQFrame(QWidget* parent): QFrame(parent) {};
	VirtualQFrame(): QFrame() {};
	VirtualQFrame(QWidget* parent, Qt::WindowFlags f): QFrame(parent, f) {};

	~VirtualQFrame() {
		qframe_sizehint_callback = nullptr;
		qframe_event_callback = nullptr;
		qframe_paintevent_callback = nullptr;
		qframe_changeevent_callback = nullptr;
		qframe_initstyleoption_callback = nullptr;
		qframe_drawframe_callback = nullptr;
	}

// Callback setters
	inline void setQFrame_SizeHint_Callback(QFrame_SizeHint_Callback cb) const { qframe_sizehint_callback = cb; }
	inline void setQFrame_Event_Callback(QFrame_Event_Callback cb) const { qframe_event_callback = cb; }
	inline void setQFrame_PaintEvent_Callback(QFrame_PaintEvent_Callback cb) const { qframe_paintevent_callback = cb; }
	inline void setQFrame_ChangeEvent_Callback(QFrame_ChangeEvent_Callback cb) const { qframe_changeevent_callback = cb; }
	inline void setQFrame_InitStyleOption_Callback(QFrame_InitStyleOption_Callback cb) const { qframe_initstyleoption_callback = cb; }
	inline void setQFrame_DrawFrame_Callback(QFrame_DrawFrame_Callback cb) const { qframe_drawframe_callback = cb; }

// Base flag setters
	inline void setQFrame_SizeHint_IsBase(bool value) const { qframe_sizehint_isbase = value; }
	inline void setQFrame_Event_IsBase(bool value) const { qframe_event_isbase = value; }
	inline void setQFrame_PaintEvent_IsBase(bool value) const { qframe_paintevent_isbase = value; }
	inline void setQFrame_ChangeEvent_IsBase(bool value) const { qframe_changeevent_isbase = value; }
	inline void setQFrame_InitStyleOption_IsBase(bool value) const { qframe_initstyleoption_isbase = value; }
	inline void setQFrame_DrawFrame_IsBase(bool value) const { qframe_drawframe_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qframe_sizehint_isbase) {
			qframe_sizehint_isbase = false;
			return QFrame::sizeHint();
		} else if (qframe_sizehint_callback != nullptr) {
			QSize* callback_ret = qframe_sizehint_callback();
			return *callback_ret;
		} else {
			return QFrame::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qframe_event_isbase) {
			qframe_event_isbase = false;
			return QFrame::event(e);
		} else if (qframe_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qframe_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QFrame::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qframe_paintevent_isbase) {
			qframe_paintevent_isbase = false;
			QFrame::paintEvent(param1);
		} else if (qframe_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qframe_paintevent_callback(this, cbval1);
		} else {
			QFrame::paintEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* param1) override {
		if (qframe_changeevent_isbase) {
			qframe_changeevent_isbase = false;
			QFrame::changeEvent(param1);
		} else if (qframe_changeevent_callback != nullptr) {
			QEvent* cbval1 = param1;
			qframe_changeevent_callback(this, cbval1);
		} else {
			QFrame::changeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (qframe_initstyleoption_isbase) {
			qframe_initstyleoption_isbase = false;
			QFrame::initStyleOption(option);
		} else if (qframe_initstyleoption_callback != nullptr) {
			QStyleOptionFrame* cbval1 = option;
			qframe_initstyleoption_callback(this, cbval1);
		} else {
			QFrame::initStyleOption(option);
		}
	}

	// Virtual method for C ABI access and custom callback
	void drawFrame(QPainter* param1) {
		if (qframe_drawframe_isbase) {
			qframe_drawframe_isbase = false;
			QFrame::drawFrame(param1);
		} else if (qframe_drawframe_callback != nullptr) {
			QPainter* cbval1 = param1;
			qframe_drawframe_callback(this, cbval1);
		} else {
			QFrame::drawFrame(param1);
		}
	}

	// Friend functions
	friend bool QFrame_Event(QFrame* self, QEvent* e);
	friend bool QFrame_QBaseEvent(QFrame* self, QEvent* e);
	friend void QFrame_PaintEvent(QFrame* self, QPaintEvent* param1);
	friend void QFrame_QBasePaintEvent(QFrame* self, QPaintEvent* param1);
	friend void QFrame_ChangeEvent(QFrame* self, QEvent* param1);
	friend void QFrame_QBaseChangeEvent(QFrame* self, QEvent* param1);
	friend void QFrame_InitStyleOption(const QFrame* self, QStyleOptionFrame* option);
	friend void QFrame_QBaseInitStyleOption(const QFrame* self, QStyleOptionFrame* option);
	friend void QFrame_DrawFrame(QFrame* self, QPainter* param1);
	friend void QFrame_QBaseDrawFrame(QFrame* self, QPainter* param1);
};

#endif


