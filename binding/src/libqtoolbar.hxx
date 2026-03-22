#pragma once
#ifndef QTOOLBAR_H_C_LIBVIRTUAL
#define QTOOLBAR_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QToolBar so that we can call protected methods
class VirtualQToolBar final : public QToolBar {

public:
	// Virtual class boolean flag
	bool isVirtualQToolBar= true;

	// Virtual class public types (including callbacks)
	using QToolBar_ActionEvent_Callback = void (*)(QToolBar*, QActionEvent*);
	using QToolBar_ChangeEvent_Callback = void (*)(QToolBar*, QEvent*);
	using QToolBar_PaintEvent_Callback = void (*)(QToolBar*, QPaintEvent*);
	using QToolBar_Event_Callback = bool (*)(QToolBar*, QEvent*);
	using QToolBar_InitStyleOption_Callback = void (*)(const QToolBar*, QStyleOptionToolBar*);

protected:
	// Instance callback storage
	mutable QToolBar_ActionEvent_Callback qtoolbar_actionevent_callback = nullptr;
	mutable QToolBar_ChangeEvent_Callback qtoolbar_changeevent_callback = nullptr;
	mutable QToolBar_PaintEvent_Callback qtoolbar_paintevent_callback = nullptr;
	mutable QToolBar_Event_Callback qtoolbar_event_callback = nullptr;
	mutable QToolBar_InitStyleOption_Callback qtoolbar_initstyleoption_callback = nullptr;

	// Instance base flags
    mutable bool qtoolbar_actionevent_isbase = false;
    mutable bool qtoolbar_changeevent_isbase = false;
    mutable bool qtoolbar_paintevent_isbase = false;
    mutable bool qtoolbar_event_isbase = false;
    mutable bool qtoolbar_initstyleoption_isbase = false;

public:
	VirtualQToolBar(QWidget* parent): QToolBar(parent) {};
	VirtualQToolBar(const QString& title): QToolBar(title) {};
	VirtualQToolBar(): QToolBar() {};
	VirtualQToolBar(const QString& title, QWidget* parent): QToolBar(title, parent) {};

	~VirtualQToolBar() {
		qtoolbar_actionevent_callback = nullptr;
		qtoolbar_changeevent_callback = nullptr;
		qtoolbar_paintevent_callback = nullptr;
		qtoolbar_event_callback = nullptr;
		qtoolbar_initstyleoption_callback = nullptr;
	}

// Callback setters
	inline void setQToolBar_ActionEvent_Callback(QToolBar_ActionEvent_Callback cb) const { qtoolbar_actionevent_callback = cb; }
	inline void setQToolBar_ChangeEvent_Callback(QToolBar_ChangeEvent_Callback cb) const { qtoolbar_changeevent_callback = cb; }
	inline void setQToolBar_PaintEvent_Callback(QToolBar_PaintEvent_Callback cb) const { qtoolbar_paintevent_callback = cb; }
	inline void setQToolBar_Event_Callback(QToolBar_Event_Callback cb) const { qtoolbar_event_callback = cb; }
	inline void setQToolBar_InitStyleOption_Callback(QToolBar_InitStyleOption_Callback cb) const { qtoolbar_initstyleoption_callback = cb; }

// Base flag setters
	inline void setQToolBar_ActionEvent_IsBase(bool value) const { qtoolbar_actionevent_isbase = value; }
	inline void setQToolBar_ChangeEvent_IsBase(bool value) const { qtoolbar_changeevent_isbase = value; }
	inline void setQToolBar_PaintEvent_IsBase(bool value) const { qtoolbar_paintevent_isbase = value; }
	inline void setQToolBar_Event_IsBase(bool value) const { qtoolbar_event_isbase = value; }
	inline void setQToolBar_InitStyleOption_IsBase(bool value) const { qtoolbar_initstyleoption_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void actionEvent(QActionEvent* event) override {
		if (qtoolbar_actionevent_isbase) {
			qtoolbar_actionevent_isbase = false;
			QToolBar::actionEvent(event);
		} else if (qtoolbar_actionevent_callback != nullptr) {
			QActionEvent* cbval1 = event;
			qtoolbar_actionevent_callback(this, cbval1);
		} else {
			QToolBar::actionEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* event) override {
		if (qtoolbar_changeevent_isbase) {
			qtoolbar_changeevent_isbase = false;
			QToolBar::changeEvent(event);
		} else if (qtoolbar_changeevent_callback != nullptr) {
			QEvent* cbval1 = event;
			qtoolbar_changeevent_callback(this, cbval1);
		} else {
			QToolBar::changeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* event) override {
		if (qtoolbar_paintevent_isbase) {
			qtoolbar_paintevent_isbase = false;
			QToolBar::paintEvent(event);
		} else if (qtoolbar_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = event;
			qtoolbar_paintevent_callback(this, cbval1);
		} else {
			QToolBar::paintEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qtoolbar_event_isbase) {
			qtoolbar_event_isbase = false;
			return QToolBar::event(event);
		} else if (qtoolbar_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qtoolbar_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QToolBar::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionToolBar* option) const override {
		if (qtoolbar_initstyleoption_isbase) {
			qtoolbar_initstyleoption_isbase = false;
			QToolBar::initStyleOption(option);
		} else if (qtoolbar_initstyleoption_callback != nullptr) {
			QStyleOptionToolBar* cbval1 = option;
			qtoolbar_initstyleoption_callback(this, cbval1);
		} else {
			QToolBar::initStyleOption(option);
		}
	}

	// Friend functions
	friend void QToolBar_ActionEvent(QToolBar* self, QActionEvent* event);
	friend void QToolBar_QBaseActionEvent(QToolBar* self, QActionEvent* event);
	friend void QToolBar_ChangeEvent(QToolBar* self, QEvent* event);
	friend void QToolBar_QBaseChangeEvent(QToolBar* self, QEvent* event);
	friend void QToolBar_PaintEvent(QToolBar* self, QPaintEvent* event);
	friend void QToolBar_QBasePaintEvent(QToolBar* self, QPaintEvent* event);
	friend bool QToolBar_Event(QToolBar* self, QEvent* event);
	friend bool QToolBar_QBaseEvent(QToolBar* self, QEvent* event);
	friend void QToolBar_InitStyleOption(const QToolBar* self, QStyleOptionToolBar* option);
	friend void QToolBar_QBaseInitStyleOption(const QToolBar* self, QStyleOptionToolBar* option);
};

#endif


