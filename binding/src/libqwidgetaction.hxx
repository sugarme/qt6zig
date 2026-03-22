#pragma once
#ifndef QWIDGETACTION_H_C_LIBVIRTUAL
#define QWIDGETACTION_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QWidgetAction so that we can call protected methods
class VirtualQWidgetAction final : public QWidgetAction {

public:
	// Virtual class boolean flag
	bool isVirtualQWidgetAction= true;

	// Virtual class public types (including callbacks)
	using QWidgetAction_Event_Callback = bool (*)(QWidgetAction*, QEvent*);
	using QWidgetAction_EventFilter_Callback = bool (*)(QWidgetAction*, QObject*, QEvent*);
	using QWidgetAction_CreateWidget_Callback = QWidget* (*)(QWidgetAction*, QWidget*);
	using QWidgetAction_DeleteWidget_Callback = void (*)(QWidgetAction*, QWidget*);
	using QWidgetAction_CreatedWidgets_Callback = libqt_list (*)();

protected:
	// Instance callback storage
	mutable QWidgetAction_Event_Callback qwidgetaction_event_callback = nullptr;
	mutable QWidgetAction_EventFilter_Callback qwidgetaction_eventfilter_callback = nullptr;
	mutable QWidgetAction_CreateWidget_Callback qwidgetaction_createwidget_callback = nullptr;
	mutable QWidgetAction_DeleteWidget_Callback qwidgetaction_deletewidget_callback = nullptr;
	mutable QWidgetAction_CreatedWidgets_Callback qwidgetaction_createdwidgets_callback = nullptr;

	// Instance base flags
    mutable bool qwidgetaction_event_isbase = false;
    mutable bool qwidgetaction_eventfilter_isbase = false;
    mutable bool qwidgetaction_createwidget_isbase = false;
    mutable bool qwidgetaction_deletewidget_isbase = false;
    mutable bool qwidgetaction_createdwidgets_isbase = false;

public:
	VirtualQWidgetAction(QObject* parent): QWidgetAction(parent) {};

	~VirtualQWidgetAction() {
		qwidgetaction_event_callback = nullptr;
		qwidgetaction_eventfilter_callback = nullptr;
		qwidgetaction_createwidget_callback = nullptr;
		qwidgetaction_deletewidget_callback = nullptr;
		qwidgetaction_createdwidgets_callback = nullptr;
	}

// Callback setters
	inline void setQWidgetAction_Event_Callback(QWidgetAction_Event_Callback cb) const { qwidgetaction_event_callback = cb; }
	inline void setQWidgetAction_EventFilter_Callback(QWidgetAction_EventFilter_Callback cb) const { qwidgetaction_eventfilter_callback = cb; }
	inline void setQWidgetAction_CreateWidget_Callback(QWidgetAction_CreateWidget_Callback cb) const { qwidgetaction_createwidget_callback = cb; }
	inline void setQWidgetAction_DeleteWidget_Callback(QWidgetAction_DeleteWidget_Callback cb) const { qwidgetaction_deletewidget_callback = cb; }
	inline void setQWidgetAction_CreatedWidgets_Callback(QWidgetAction_CreatedWidgets_Callback cb) const { qwidgetaction_createdwidgets_callback = cb; }

// Base flag setters
	inline void setQWidgetAction_Event_IsBase(bool value) const { qwidgetaction_event_isbase = value; }
	inline void setQWidgetAction_EventFilter_IsBase(bool value) const { qwidgetaction_eventfilter_isbase = value; }
	inline void setQWidgetAction_CreateWidget_IsBase(bool value) const { qwidgetaction_createwidget_isbase = value; }
	inline void setQWidgetAction_DeleteWidget_IsBase(bool value) const { qwidgetaction_deletewidget_isbase = value; }
	inline void setQWidgetAction_CreatedWidgets_IsBase(bool value) const { qwidgetaction_createdwidgets_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* param1) override {
		if (qwidgetaction_event_isbase) {
			qwidgetaction_event_isbase = false;
			return QWidgetAction::event(param1);
		} else if (qwidgetaction_event_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qwidgetaction_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QWidgetAction::event(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (qwidgetaction_eventfilter_isbase) {
			qwidgetaction_eventfilter_isbase = false;
			return QWidgetAction::eventFilter(param1, param2);
		} else if (qwidgetaction_eventfilter_callback != nullptr) {
			QObject* cbval1 = param1;
			QEvent* cbval2 = param2;
			bool callback_ret = qwidgetaction_eventfilter_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QWidgetAction::eventFilter(param1, param2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QWidget* createWidget(QWidget* parent) override {
		if (qwidgetaction_createwidget_isbase) {
			qwidgetaction_createwidget_isbase = false;
			return QWidgetAction::createWidget(parent);
		} else if (qwidgetaction_createwidget_callback != nullptr) {
			QWidget* cbval1 = parent;
			QWidget* callback_ret = qwidgetaction_createwidget_callback(this, cbval1);
			return callback_ret;
		} else {
			return QWidgetAction::createWidget(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void deleteWidget(QWidget* widget) override {
		if (qwidgetaction_deletewidget_isbase) {
			qwidgetaction_deletewidget_isbase = false;
			QWidgetAction::deleteWidget(widget);
		} else if (qwidgetaction_deletewidget_callback != nullptr) {
			QWidget* cbval1 = widget;
			qwidgetaction_deletewidget_callback(this, cbval1);
		} else {
			QWidgetAction::deleteWidget(widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	QList<QWidget *> createdWidgets() const {
		if (qwidgetaction_createdwidgets_isbase) {
			qwidgetaction_createdwidgets_isbase = false;
			return QWidgetAction::createdWidgets();
		} else if (qwidgetaction_createdwidgets_callback != nullptr) {
			libqt_list callback_ret = qwidgetaction_createdwidgets_callback();
			return QList<QWidget *>();
		} else {
			return QWidgetAction::createdWidgets();
		}
	}

	// Friend functions
	friend bool QWidgetAction_Event(QWidgetAction* self, QEvent* param1);
	friend bool QWidgetAction_QBaseEvent(QWidgetAction* self, QEvent* param1);
	friend bool QWidgetAction_EventFilter(QWidgetAction* self, QObject* param1, QEvent* param2);
	friend bool QWidgetAction_QBaseEventFilter(QWidgetAction* self, QObject* param1, QEvent* param2);
	friend QWidget* QWidgetAction_CreateWidget(QWidgetAction* self, QWidget* parent);
	friend QWidget* QWidgetAction_QBaseCreateWidget(QWidgetAction* self, QWidget* parent);
	friend void QWidgetAction_DeleteWidget(QWidgetAction* self, QWidget* widget);
	friend void QWidgetAction_QBaseDeleteWidget(QWidgetAction* self, QWidget* widget);
	friend libqt_list QWidgetAction_CreatedWidgets(const QWidgetAction* self);
	friend libqt_list QWidgetAction_QBaseCreatedWidgets(const QWidgetAction* self);
};

#endif


