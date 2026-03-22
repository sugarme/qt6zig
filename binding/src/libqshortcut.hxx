#pragma once
#ifndef QSHORTCUT_H_C_LIBVIRTUAL
#define QSHORTCUT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QShortcut so that we can call protected methods
class VirtualQShortcut final : public QShortcut {

public:
	// Virtual class boolean flag
	bool isVirtualQShortcut= true;

	// Virtual class public types (including callbacks)
	using QShortcut_Event_Callback = bool (*)(QShortcut*, QEvent*);

protected:
	// Instance callback storage
	mutable QShortcut_Event_Callback qshortcut_event_callback = nullptr;

	// Instance base flags
    mutable bool qshortcut_event_isbase = false;

public:
	VirtualQShortcut(QObject* parent): QShortcut(parent) {};
	VirtualQShortcut(const QKeySequence& key, QObject* parent): QShortcut(key, parent) {};
	VirtualQShortcut(QKeySequence::StandardKey key, QObject* parent): QShortcut(key, parent) {};
	VirtualQShortcut(const QKeySequence& key, QObject* parent, const char* member): QShortcut(key, parent, member) {};
	VirtualQShortcut(const QKeySequence& key, QObject* parent, const char* member, const char* ambiguousMember): QShortcut(key, parent, member, ambiguousMember) {};
	VirtualQShortcut(const QKeySequence& key, QObject* parent, const char* member, const char* ambiguousMember, Qt::ShortcutContext context): QShortcut(key, parent, member, ambiguousMember, context) {};
	VirtualQShortcut(QKeySequence::StandardKey key, QObject* parent, const char* member): QShortcut(key, parent, member) {};
	VirtualQShortcut(QKeySequence::StandardKey key, QObject* parent, const char* member, const char* ambiguousMember): QShortcut(key, parent, member, ambiguousMember) {};
	VirtualQShortcut(QKeySequence::StandardKey key, QObject* parent, const char* member, const char* ambiguousMember, Qt::ShortcutContext context): QShortcut(key, parent, member, ambiguousMember, context) {};

	~VirtualQShortcut() {
		qshortcut_event_callback = nullptr;
	}

// Callback setters
	inline void setQShortcut_Event_Callback(QShortcut_Event_Callback cb) const { qshortcut_event_callback = cb; }

// Base flag setters
	inline void setQShortcut_Event_IsBase(bool value) const { qshortcut_event_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qshortcut_event_isbase) {
			qshortcut_event_isbase = false;
			return QShortcut::event(e);
		} else if (qshortcut_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qshortcut_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QShortcut::event(e);
		}
	}

	// Friend functions
	friend bool QShortcut_Event(QShortcut* self, QEvent* e);
	friend bool QShortcut_QBaseEvent(QShortcut* self, QEvent* e);
};

#endif


