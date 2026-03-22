#pragma once
#ifndef QSTATUSBAR_H_C_LIBVIRTUAL
#define QSTATUSBAR_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QStatusBar so that we can call protected methods
class VirtualQStatusBar final : public QStatusBar {

public:
	// Virtual class boolean flag
	bool isVirtualQStatusBar= true;

	// Virtual class public types (including callbacks)
	using QStatusBar_ShowEvent_Callback = void (*)(QStatusBar*, QShowEvent*);
	using QStatusBar_PaintEvent_Callback = void (*)(QStatusBar*, QPaintEvent*);
	using QStatusBar_ResizeEvent_Callback = void (*)(QStatusBar*, QResizeEvent*);
	using QStatusBar_Event_Callback = bool (*)(QStatusBar*, QEvent*);
	using QStatusBar_Reformat_Callback = void (*)();
	using QStatusBar_HideOrShow_Callback = void (*)();

protected:
	// Instance callback storage
	mutable QStatusBar_ShowEvent_Callback qstatusbar_showevent_callback = nullptr;
	mutable QStatusBar_PaintEvent_Callback qstatusbar_paintevent_callback = nullptr;
	mutable QStatusBar_ResizeEvent_Callback qstatusbar_resizeevent_callback = nullptr;
	mutable QStatusBar_Event_Callback qstatusbar_event_callback = nullptr;
	mutable QStatusBar_Reformat_Callback qstatusbar_reformat_callback = nullptr;
	mutable QStatusBar_HideOrShow_Callback qstatusbar_hideorshow_callback = nullptr;

	// Instance base flags
    mutable bool qstatusbar_showevent_isbase = false;
    mutable bool qstatusbar_paintevent_isbase = false;
    mutable bool qstatusbar_resizeevent_isbase = false;
    mutable bool qstatusbar_event_isbase = false;
    mutable bool qstatusbar_reformat_isbase = false;
    mutable bool qstatusbar_hideorshow_isbase = false;

public:
	VirtualQStatusBar(QWidget* parent): QStatusBar(parent) {};
	VirtualQStatusBar(): QStatusBar() {};

	~VirtualQStatusBar() {
		qstatusbar_showevent_callback = nullptr;
		qstatusbar_paintevent_callback = nullptr;
		qstatusbar_resizeevent_callback = nullptr;
		qstatusbar_event_callback = nullptr;
		qstatusbar_reformat_callback = nullptr;
		qstatusbar_hideorshow_callback = nullptr;
	}

// Callback setters
	inline void setQStatusBar_ShowEvent_Callback(QStatusBar_ShowEvent_Callback cb) const { qstatusbar_showevent_callback = cb; }
	inline void setQStatusBar_PaintEvent_Callback(QStatusBar_PaintEvent_Callback cb) const { qstatusbar_paintevent_callback = cb; }
	inline void setQStatusBar_ResizeEvent_Callback(QStatusBar_ResizeEvent_Callback cb) const { qstatusbar_resizeevent_callback = cb; }
	inline void setQStatusBar_Event_Callback(QStatusBar_Event_Callback cb) const { qstatusbar_event_callback = cb; }
	inline void setQStatusBar_Reformat_Callback(QStatusBar_Reformat_Callback cb) const { qstatusbar_reformat_callback = cb; }
	inline void setQStatusBar_HideOrShow_Callback(QStatusBar_HideOrShow_Callback cb) const { qstatusbar_hideorshow_callback = cb; }

// Base flag setters
	inline void setQStatusBar_ShowEvent_IsBase(bool value) const { qstatusbar_showevent_isbase = value; }
	inline void setQStatusBar_PaintEvent_IsBase(bool value) const { qstatusbar_paintevent_isbase = value; }
	inline void setQStatusBar_ResizeEvent_IsBase(bool value) const { qstatusbar_resizeevent_isbase = value; }
	inline void setQStatusBar_Event_IsBase(bool value) const { qstatusbar_event_isbase = value; }
	inline void setQStatusBar_Reformat_IsBase(bool value) const { qstatusbar_reformat_isbase = value; }
	inline void setQStatusBar_HideOrShow_IsBase(bool value) const { qstatusbar_hideorshow_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void showEvent(QShowEvent* param1) override {
		if (qstatusbar_showevent_isbase) {
			qstatusbar_showevent_isbase = false;
			QStatusBar::showEvent(param1);
		} else if (qstatusbar_showevent_callback != nullptr) {
			QShowEvent* cbval1 = param1;
			qstatusbar_showevent_callback(this, cbval1);
		} else {
			QStatusBar::showEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qstatusbar_paintevent_isbase) {
			qstatusbar_paintevent_isbase = false;
			QStatusBar::paintEvent(param1);
		} else if (qstatusbar_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qstatusbar_paintevent_callback(this, cbval1);
		} else {
			QStatusBar::paintEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (qstatusbar_resizeevent_isbase) {
			qstatusbar_resizeevent_isbase = false;
			QStatusBar::resizeEvent(param1);
		} else if (qstatusbar_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = param1;
			qstatusbar_resizeevent_callback(this, cbval1);
		} else {
			QStatusBar::resizeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* param1) override {
		if (qstatusbar_event_isbase) {
			qstatusbar_event_isbase = false;
			return QStatusBar::event(param1);
		} else if (qstatusbar_event_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qstatusbar_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QStatusBar::event(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	void reformat() {
		if (qstatusbar_reformat_isbase) {
			qstatusbar_reformat_isbase = false;
			QStatusBar::reformat();
		} else if (qstatusbar_reformat_callback != nullptr) {
			qstatusbar_reformat_callback();
		} else {
			QStatusBar::reformat();
		}
	}

	// Virtual method for C ABI access and custom callback
	void hideOrShow() {
		if (qstatusbar_hideorshow_isbase) {
			qstatusbar_hideorshow_isbase = false;
			QStatusBar::hideOrShow();
		} else if (qstatusbar_hideorshow_callback != nullptr) {
			qstatusbar_hideorshow_callback();
		} else {
			QStatusBar::hideOrShow();
		}
	}

	// Friend functions
	friend void QStatusBar_ShowEvent(QStatusBar* self, QShowEvent* param1);
	friend void QStatusBar_QBaseShowEvent(QStatusBar* self, QShowEvent* param1);
	friend void QStatusBar_PaintEvent(QStatusBar* self, QPaintEvent* param1);
	friend void QStatusBar_QBasePaintEvent(QStatusBar* self, QPaintEvent* param1);
	friend void QStatusBar_ResizeEvent(QStatusBar* self, QResizeEvent* param1);
	friend void QStatusBar_QBaseResizeEvent(QStatusBar* self, QResizeEvent* param1);
	friend bool QStatusBar_Event(QStatusBar* self, QEvent* param1);
	friend bool QStatusBar_QBaseEvent(QStatusBar* self, QEvent* param1);
	friend void QStatusBar_Reformat(QStatusBar* self);
	friend void QStatusBar_QBaseReformat(QStatusBar* self);
	friend void QStatusBar_HideOrShow(QStatusBar* self);
	friend void QStatusBar_QBaseHideOrShow(QStatusBar* self);
};

#endif


