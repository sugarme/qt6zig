#pragma once
#ifndef QSETTINGS_H_C_LIBVIRTUAL
#define QSETTINGS_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QSettings so that we can call protected methods
class VirtualQSettings final : public QSettings {

public:
	// Virtual class boolean flag
	bool isVirtualQSettings= true;

	// Virtual class public types (including callbacks)
	using QSettings_Event_Callback = bool (*)(QSettings*, QEvent*);

protected:
	// Instance callback storage
	mutable QSettings_Event_Callback qsettings_event_callback = nullptr;

	// Instance base flags
    mutable bool qsettings_event_isbase = false;

public:
	VirtualQSettings(const QString& organization): QSettings(organization) {};
	VirtualQSettings(Scope scope, const QString& organization): QSettings(scope, organization) {};
	VirtualQSettings(Format format, Scope scope, const QString& organization): QSettings(format, scope, organization) {};
	VirtualQSettings(const QString& fileName, Format format): QSettings(fileName, format) {};
	VirtualQSettings(): QSettings() {};
	VirtualQSettings(Scope scope): QSettings(scope) {};
	VirtualQSettings(const QString& organization, const QString& application): QSettings(organization, application) {};
	VirtualQSettings(const QString& organization, const QString& application, QObject* parent): QSettings(organization, application, parent) {};
	VirtualQSettings(Scope scope, const QString& organization, const QString& application): QSettings(scope, organization, application) {};
	VirtualQSettings(Scope scope, const QString& organization, const QString& application, QObject* parent): QSettings(scope, organization, application, parent) {};
	VirtualQSettings(Format format, Scope scope, const QString& organization, const QString& application): QSettings(format, scope, organization, application) {};
	VirtualQSettings(Format format, Scope scope, const QString& organization, const QString& application, QObject* parent): QSettings(format, scope, organization, application, parent) {};
	VirtualQSettings(const QString& fileName, Format format, QObject* parent): QSettings(fileName, format, parent) {};
	VirtualQSettings(QObject* parent): QSettings(parent) {};
	VirtualQSettings(Scope scope, QObject* parent): QSettings(scope, parent) {};

	~VirtualQSettings() {
		qsettings_event_callback = nullptr;
	}

// Callback setters
	inline void setQSettings_Event_Callback(QSettings_Event_Callback cb) const { qsettings_event_callback = cb; }

// Base flag setters
	inline void setQSettings_Event_IsBase(bool value) const { qsettings_event_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qsettings_event_isbase) {
			qsettings_event_isbase = false;
			return QSettings::event(event);
		} else if (qsettings_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qsettings_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSettings::event(event);
		}
	}

	// Friend functions
	friend bool QSettings_Event(QSettings* self, QEvent* event);
	friend bool QSettings_QBaseEvent(QSettings* self, QEvent* event);
};

#endif


