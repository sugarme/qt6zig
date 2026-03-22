#pragma once
#ifndef QSYSTEMTRAYICON_H_C_LIBVIRTUAL
#define QSYSTEMTRAYICON_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QSystemTrayIcon so that we can call protected methods
class VirtualQSystemTrayIcon final : public QSystemTrayIcon {

public:
	// Virtual class boolean flag
	bool isVirtualQSystemTrayIcon= true;

	// Virtual class public types (including callbacks)
	using QSystemTrayIcon_Event_Callback = bool (*)(QSystemTrayIcon*, QEvent*);

protected:
	// Instance callback storage
	mutable QSystemTrayIcon_Event_Callback qsystemtrayicon_event_callback = nullptr;

	// Instance base flags
    mutable bool qsystemtrayicon_event_isbase = false;

public:
	VirtualQSystemTrayIcon(): QSystemTrayIcon() {};
	VirtualQSystemTrayIcon(const QIcon& icon): QSystemTrayIcon(icon) {};
	VirtualQSystemTrayIcon(QObject* parent): QSystemTrayIcon(parent) {};
	VirtualQSystemTrayIcon(const QIcon& icon, QObject* parent): QSystemTrayIcon(icon, parent) {};

	~VirtualQSystemTrayIcon() {
		qsystemtrayicon_event_callback = nullptr;
	}

// Callback setters
	inline void setQSystemTrayIcon_Event_Callback(QSystemTrayIcon_Event_Callback cb) const { qsystemtrayicon_event_callback = cb; }

// Base flag setters
	inline void setQSystemTrayIcon_Event_IsBase(bool value) const { qsystemtrayicon_event_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qsystemtrayicon_event_isbase) {
			qsystemtrayicon_event_isbase = false;
			return QSystemTrayIcon::event(event);
		} else if (qsystemtrayicon_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qsystemtrayicon_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSystemTrayIcon::event(event);
		}
	}

	// Friend functions
	friend bool QSystemTrayIcon_Event(QSystemTrayIcon* self, QEvent* event);
	friend bool QSystemTrayIcon_QBaseEvent(QSystemTrayIcon* self, QEvent* event);
};

#endif


