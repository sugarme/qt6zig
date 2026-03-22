#pragma once
#ifndef QMAINWINDOW_H_C_LIBVIRTUAL
#define QMAINWINDOW_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QMainWindow so that we can call protected methods
class VirtualQMainWindow final : public QMainWindow {

public:
	// Virtual class boolean flag
	bool isVirtualQMainWindow= true;

	// Virtual class public types (including callbacks)
	using QMainWindow_CreatePopupMenu_Callback = QMenu* (*)();
	using QMainWindow_ContextMenuEvent_Callback = void (*)(QMainWindow*, QContextMenuEvent*);
	using QMainWindow_Event_Callback = bool (*)(QMainWindow*, QEvent*);

protected:
	// Instance callback storage
	mutable QMainWindow_CreatePopupMenu_Callback qmainwindow_createpopupmenu_callback = nullptr;
	mutable QMainWindow_ContextMenuEvent_Callback qmainwindow_contextmenuevent_callback = nullptr;
	mutable QMainWindow_Event_Callback qmainwindow_event_callback = nullptr;

	// Instance base flags
    mutable bool qmainwindow_createpopupmenu_isbase = false;
    mutable bool qmainwindow_contextmenuevent_isbase = false;
    mutable bool qmainwindow_event_isbase = false;

public:
	VirtualQMainWindow(QWidget* parent): QMainWindow(parent) {};
	VirtualQMainWindow(): QMainWindow() {};
	VirtualQMainWindow(QWidget* parent, Qt::WindowFlags flags): QMainWindow(parent, flags) {};

	~VirtualQMainWindow() {
		qmainwindow_createpopupmenu_callback = nullptr;
		qmainwindow_contextmenuevent_callback = nullptr;
		qmainwindow_event_callback = nullptr;
	}

// Callback setters
	inline void setQMainWindow_CreatePopupMenu_Callback(QMainWindow_CreatePopupMenu_Callback cb) const { qmainwindow_createpopupmenu_callback = cb; }
	inline void setQMainWindow_ContextMenuEvent_Callback(QMainWindow_ContextMenuEvent_Callback cb) const { qmainwindow_contextmenuevent_callback = cb; }
	inline void setQMainWindow_Event_Callback(QMainWindow_Event_Callback cb) const { qmainwindow_event_callback = cb; }

// Base flag setters
	inline void setQMainWindow_CreatePopupMenu_IsBase(bool value) const { qmainwindow_createpopupmenu_isbase = value; }
	inline void setQMainWindow_ContextMenuEvent_IsBase(bool value) const { qmainwindow_contextmenuevent_isbase = value; }
	inline void setQMainWindow_Event_IsBase(bool value) const { qmainwindow_event_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QMenu* createPopupMenu() override {
		if (qmainwindow_createpopupmenu_isbase) {
			qmainwindow_createpopupmenu_isbase = false;
			return QMainWindow::createPopupMenu();
		} else if (qmainwindow_createpopupmenu_callback != nullptr) {
			QMenu* callback_ret = qmainwindow_createpopupmenu_callback();
			return callback_ret;
		} else {
			return QMainWindow::createPopupMenu();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (qmainwindow_contextmenuevent_isbase) {
			qmainwindow_contextmenuevent_isbase = false;
			QMainWindow::contextMenuEvent(event);
		} else if (qmainwindow_contextmenuevent_callback != nullptr) {
			QContextMenuEvent* cbval1 = event;
			qmainwindow_contextmenuevent_callback(this, cbval1);
		} else {
			QMainWindow::contextMenuEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qmainwindow_event_isbase) {
			qmainwindow_event_isbase = false;
			return QMainWindow::event(event);
		} else if (qmainwindow_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qmainwindow_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QMainWindow::event(event);
		}
	}

	// Friend functions
	friend void QMainWindow_ContextMenuEvent(QMainWindow* self, QContextMenuEvent* event);
	friend void QMainWindow_QBaseContextMenuEvent(QMainWindow* self, QContextMenuEvent* event);
	friend bool QMainWindow_Event(QMainWindow* self, QEvent* event);
	friend bool QMainWindow_QBaseEvent(QMainWindow* self, QEvent* event);
};

#endif


