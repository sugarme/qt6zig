#pragma once
#ifndef QDOCKWIDGET_H_C_LIBVIRTUAL
#define QDOCKWIDGET_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QDockWidget so that we can call protected methods
class VirtualQDockWidget final : public QDockWidget {

public:
	// Virtual class boolean flag
	bool isVirtualQDockWidget= true;

	// Virtual class public types (including callbacks)
	using QDockWidget_ChangeEvent_Callback = void (*)(QDockWidget*, QEvent*);
	using QDockWidget_CloseEvent_Callback = void (*)(QDockWidget*, QCloseEvent*);
	using QDockWidget_PaintEvent_Callback = void (*)(QDockWidget*, QPaintEvent*);
	using QDockWidget_Event_Callback = bool (*)(QDockWidget*, QEvent*);
	using QDockWidget_InitStyleOption_Callback = void (*)(const QDockWidget*, QStyleOptionDockWidget*);

protected:
	// Instance callback storage
	mutable QDockWidget_ChangeEvent_Callback qdockwidget_changeevent_callback = nullptr;
	mutable QDockWidget_CloseEvent_Callback qdockwidget_closeevent_callback = nullptr;
	mutable QDockWidget_PaintEvent_Callback qdockwidget_paintevent_callback = nullptr;
	mutable QDockWidget_Event_Callback qdockwidget_event_callback = nullptr;
	mutable QDockWidget_InitStyleOption_Callback qdockwidget_initstyleoption_callback = nullptr;

	// Instance base flags
    mutable bool qdockwidget_changeevent_isbase = false;
    mutable bool qdockwidget_closeevent_isbase = false;
    mutable bool qdockwidget_paintevent_isbase = false;
    mutable bool qdockwidget_event_isbase = false;
    mutable bool qdockwidget_initstyleoption_isbase = false;

public:
	VirtualQDockWidget(QWidget* parent): QDockWidget(parent) {};
	VirtualQDockWidget(const QString& title): QDockWidget(title) {};
	VirtualQDockWidget(): QDockWidget() {};
	VirtualQDockWidget(const QString& title, QWidget* parent): QDockWidget(title, parent) {};
	VirtualQDockWidget(const QString& title, QWidget* parent, Qt::WindowFlags flags): QDockWidget(title, parent, flags) {};
	VirtualQDockWidget(QWidget* parent, Qt::WindowFlags flags): QDockWidget(parent, flags) {};

	~VirtualQDockWidget() {
		qdockwidget_changeevent_callback = nullptr;
		qdockwidget_closeevent_callback = nullptr;
		qdockwidget_paintevent_callback = nullptr;
		qdockwidget_event_callback = nullptr;
		qdockwidget_initstyleoption_callback = nullptr;
	}

// Callback setters
	inline void setQDockWidget_ChangeEvent_Callback(QDockWidget_ChangeEvent_Callback cb) const { qdockwidget_changeevent_callback = cb; }
	inline void setQDockWidget_CloseEvent_Callback(QDockWidget_CloseEvent_Callback cb) const { qdockwidget_closeevent_callback = cb; }
	inline void setQDockWidget_PaintEvent_Callback(QDockWidget_PaintEvent_Callback cb) const { qdockwidget_paintevent_callback = cb; }
	inline void setQDockWidget_Event_Callback(QDockWidget_Event_Callback cb) const { qdockwidget_event_callback = cb; }
	inline void setQDockWidget_InitStyleOption_Callback(QDockWidget_InitStyleOption_Callback cb) const { qdockwidget_initstyleoption_callback = cb; }

// Base flag setters
	inline void setQDockWidget_ChangeEvent_IsBase(bool value) const { qdockwidget_changeevent_isbase = value; }
	inline void setQDockWidget_CloseEvent_IsBase(bool value) const { qdockwidget_closeevent_isbase = value; }
	inline void setQDockWidget_PaintEvent_IsBase(bool value) const { qdockwidget_paintevent_isbase = value; }
	inline void setQDockWidget_Event_IsBase(bool value) const { qdockwidget_event_isbase = value; }
	inline void setQDockWidget_InitStyleOption_IsBase(bool value) const { qdockwidget_initstyleoption_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* event) override {
		if (qdockwidget_changeevent_isbase) {
			qdockwidget_changeevent_isbase = false;
			QDockWidget::changeEvent(event);
		} else if (qdockwidget_changeevent_callback != nullptr) {
			QEvent* cbval1 = event;
			qdockwidget_changeevent_callback(this, cbval1);
		} else {
			QDockWidget::changeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void closeEvent(QCloseEvent* event) override {
		if (qdockwidget_closeevent_isbase) {
			qdockwidget_closeevent_isbase = false;
			QDockWidget::closeEvent(event);
		} else if (qdockwidget_closeevent_callback != nullptr) {
			QCloseEvent* cbval1 = event;
			qdockwidget_closeevent_callback(this, cbval1);
		} else {
			QDockWidget::closeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* event) override {
		if (qdockwidget_paintevent_isbase) {
			qdockwidget_paintevent_isbase = false;
			QDockWidget::paintEvent(event);
		} else if (qdockwidget_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = event;
			qdockwidget_paintevent_callback(this, cbval1);
		} else {
			QDockWidget::paintEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qdockwidget_event_isbase) {
			qdockwidget_event_isbase = false;
			return QDockWidget::event(event);
		} else if (qdockwidget_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qdockwidget_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QDockWidget::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionDockWidget* option) const override {
		if (qdockwidget_initstyleoption_isbase) {
			qdockwidget_initstyleoption_isbase = false;
			QDockWidget::initStyleOption(option);
		} else if (qdockwidget_initstyleoption_callback != nullptr) {
			QStyleOptionDockWidget* cbval1 = option;
			qdockwidget_initstyleoption_callback(this, cbval1);
		} else {
			QDockWidget::initStyleOption(option);
		}
	}

	// Friend functions
	friend void QDockWidget_ChangeEvent(QDockWidget* self, QEvent* event);
	friend void QDockWidget_QBaseChangeEvent(QDockWidget* self, QEvent* event);
	friend void QDockWidget_CloseEvent(QDockWidget* self, QCloseEvent* event);
	friend void QDockWidget_QBaseCloseEvent(QDockWidget* self, QCloseEvent* event);
	friend void QDockWidget_PaintEvent(QDockWidget* self, QPaintEvent* event);
	friend void QDockWidget_QBasePaintEvent(QDockWidget* self, QPaintEvent* event);
	friend bool QDockWidget_Event(QDockWidget* self, QEvent* event);
	friend bool QDockWidget_QBaseEvent(QDockWidget* self, QEvent* event);
	friend void QDockWidget_InitStyleOption(const QDockWidget* self, QStyleOptionDockWidget* option);
	friend void QDockWidget_QBaseInitStyleOption(const QDockWidget* self, QStyleOptionDockWidget* option);
};

#endif


