#pragma once
#ifndef QACTION_H_C_LIBVIRTUAL
#define QACTION_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QAction so that we can call protected methods
class VirtualQAction final : public QAction {

public:
	// Virtual class boolean flag
	bool isVirtualQAction= true;

	// Virtual class public types (including callbacks)
	using QAction_Event_Callback = bool (*)(QAction*, QEvent*);

protected:
	// Instance callback storage
	mutable QAction_Event_Callback qaction_event_callback = nullptr;

	// Instance base flags
    mutable bool qaction_event_isbase = false;

public:
	VirtualQAction(): QAction() {};
	VirtualQAction(const QString& text): QAction(text) {};
	VirtualQAction(const QIcon& icon, const QString& text): QAction(icon, text) {};
	VirtualQAction(QObject* parent): QAction(parent) {};
	VirtualQAction(const QString& text, QObject* parent): QAction(text, parent) {};
	VirtualQAction(const QIcon& icon, const QString& text, QObject* parent): QAction(icon, text, parent) {};

	~VirtualQAction() {
		qaction_event_callback = nullptr;
	}

// Callback setters
	inline void setQAction_Event_Callback(QAction_Event_Callback cb) const { qaction_event_callback = cb; }

// Base flag setters
	inline void setQAction_Event_IsBase(bool value) const { qaction_event_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* param1) override {
		if (qaction_event_isbase) {
			qaction_event_isbase = false;
			return QAction::event(param1);
		} else if (qaction_event_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qaction_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAction::event(param1);
		}
	}

	// Friend functions
	friend bool QAction_Event(QAction* self, QEvent* param1);
	friend bool QAction_QBaseEvent(QAction* self, QEvent* param1);
};

#endif


