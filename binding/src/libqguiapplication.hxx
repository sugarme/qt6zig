#pragma once
#ifndef QGUIAPPLICATION_H_C_LIBVIRTUAL
#define QGUIAPPLICATION_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QGuiApplication so that we can call protected methods
class VirtualQGuiApplication final : public QGuiApplication {

public:
	// Virtual class boolean flag
	bool isVirtualQGuiApplication= true;

	// Virtual class public types (including callbacks)
	using QGuiApplication_Notify_Callback = bool (*)(QGuiApplication*, QObject*, QEvent*);
	using QGuiApplication_Event_Callback = bool (*)(QGuiApplication*, QEvent*);
	using QGuiApplication_ResolveInterface_Callback = void* (*)(const QGuiApplication*, const char*, int);

protected:
	// Instance callback storage
	mutable QGuiApplication_Notify_Callback qguiapplication_notify_callback = nullptr;
	mutable QGuiApplication_Event_Callback qguiapplication_event_callback = nullptr;
	mutable QGuiApplication_ResolveInterface_Callback qguiapplication_resolveinterface_callback = nullptr;

	// Instance base flags
    mutable bool qguiapplication_notify_isbase = false;
    mutable bool qguiapplication_event_isbase = false;
    mutable bool qguiapplication_resolveinterface_isbase = false;

public:
	VirtualQGuiApplication(int& argc, char** argv): QGuiApplication(argc, argv) {};
	VirtualQGuiApplication(int& argc, char** argv, int param3): QGuiApplication(argc, argv, param3) {};

	~VirtualQGuiApplication() {
		qguiapplication_notify_callback = nullptr;
		qguiapplication_event_callback = nullptr;
		qguiapplication_resolveinterface_callback = nullptr;
	}

// Callback setters
	inline void setQGuiApplication_Notify_Callback(QGuiApplication_Notify_Callback cb) const { qguiapplication_notify_callback = cb; }
	inline void setQGuiApplication_Event_Callback(QGuiApplication_Event_Callback cb) const { qguiapplication_event_callback = cb; }
	inline void setQGuiApplication_ResolveInterface_Callback(QGuiApplication_ResolveInterface_Callback cb) const { qguiapplication_resolveinterface_callback = cb; }

// Base flag setters
	inline void setQGuiApplication_Notify_IsBase(bool value) const { qguiapplication_notify_isbase = value; }
	inline void setQGuiApplication_Event_IsBase(bool value) const { qguiapplication_event_isbase = value; }
	inline void setQGuiApplication_ResolveInterface_IsBase(bool value) const { qguiapplication_resolveinterface_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool notify(QObject* param1, QEvent* param2) override {
		if (qguiapplication_notify_isbase) {
			qguiapplication_notify_isbase = false;
			return QGuiApplication::notify(param1, param2);
		} else if (qguiapplication_notify_callback != nullptr) {
			QObject* cbval1 = param1;
			QEvent* cbval2 = param2;
			bool callback_ret = qguiapplication_notify_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QGuiApplication::notify(param1, param2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* param1) override {
		if (qguiapplication_event_isbase) {
			qguiapplication_event_isbase = false;
			return QGuiApplication::event(param1);
		} else if (qguiapplication_event_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qguiapplication_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGuiApplication::event(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	void* resolveInterface(const char* name, int revision) const {
		if (qguiapplication_resolveinterface_isbase) {
			qguiapplication_resolveinterface_isbase = false;
			return QGuiApplication::resolveInterface(name, revision);
		} else if (qguiapplication_resolveinterface_callback != nullptr) {
			const char* cbval1 = name;
			int cbval2 = revision;
			void* callback_ret = qguiapplication_resolveinterface_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QGuiApplication::resolveInterface(name, revision);
		}
	}

	// Friend functions
	friend bool QGuiApplication_Event(QGuiApplication* self, QEvent* param1);
	friend bool QGuiApplication_QBaseEvent(QGuiApplication* self, QEvent* param1);
	friend void* QGuiApplication_ResolveInterface(const QGuiApplication* self, const char* name, int revision);
	friend void* QGuiApplication_QBaseResolveInterface(const QGuiApplication* self, const char* name, int revision);
};

#endif


