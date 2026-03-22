#pragma once
#ifndef QCOREAPPLICATION_H_C_LIBVIRTUAL
#define QCOREAPPLICATION_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QCoreApplication so that we can call protected methods
class VirtualQCoreApplication final : public QCoreApplication {

public:
	// Virtual class boolean flag
	bool isVirtualQCoreApplication= true;

	// Virtual class public types (including callbacks)
	using QCoreApplication_Notify_Callback = bool (*)(QCoreApplication*, QObject*, QEvent*);
	using QCoreApplication_Event_Callback = bool (*)(QCoreApplication*, QEvent*);
	using QCoreApplication_CompressEvent_Callback = bool (*)(QCoreApplication*, QEvent*, QObject*, QPostEventList*);
	using QCoreApplication_ResolveInterface_Callback = void* (*)(const QCoreApplication*, const char*, int);

protected:
	// Instance callback storage
	mutable QCoreApplication_Notify_Callback qcoreapplication_notify_callback = nullptr;
	mutable QCoreApplication_Event_Callback qcoreapplication_event_callback = nullptr;
	mutable QCoreApplication_CompressEvent_Callback qcoreapplication_compressevent_callback = nullptr;
	mutable QCoreApplication_ResolveInterface_Callback qcoreapplication_resolveinterface_callback = nullptr;

	// Instance base flags
    mutable bool qcoreapplication_notify_isbase = false;
    mutable bool qcoreapplication_event_isbase = false;
    mutable bool qcoreapplication_compressevent_isbase = false;
    mutable bool qcoreapplication_resolveinterface_isbase = false;

public:
	VirtualQCoreApplication(int& argc, char** argv): QCoreApplication(argc, argv) {};
	VirtualQCoreApplication(int& argc, char** argv, int param3): QCoreApplication(argc, argv, param3) {};

	~VirtualQCoreApplication() {
		qcoreapplication_notify_callback = nullptr;
		qcoreapplication_event_callback = nullptr;
		qcoreapplication_compressevent_callback = nullptr;
		qcoreapplication_resolveinterface_callback = nullptr;
	}

// Callback setters
	inline void setQCoreApplication_Notify_Callback(QCoreApplication_Notify_Callback cb) const { qcoreapplication_notify_callback = cb; }
	inline void setQCoreApplication_Event_Callback(QCoreApplication_Event_Callback cb) const { qcoreapplication_event_callback = cb; }
	inline void setQCoreApplication_CompressEvent_Callback(QCoreApplication_CompressEvent_Callback cb) const { qcoreapplication_compressevent_callback = cb; }
	inline void setQCoreApplication_ResolveInterface_Callback(QCoreApplication_ResolveInterface_Callback cb) const { qcoreapplication_resolveinterface_callback = cb; }

// Base flag setters
	inline void setQCoreApplication_Notify_IsBase(bool value) const { qcoreapplication_notify_isbase = value; }
	inline void setQCoreApplication_Event_IsBase(bool value) const { qcoreapplication_event_isbase = value; }
	inline void setQCoreApplication_CompressEvent_IsBase(bool value) const { qcoreapplication_compressevent_isbase = value; }
	inline void setQCoreApplication_ResolveInterface_IsBase(bool value) const { qcoreapplication_resolveinterface_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool notify(QObject* param1, QEvent* param2) override {
		if (qcoreapplication_notify_isbase) {
			qcoreapplication_notify_isbase = false;
			return QCoreApplication::notify(param1, param2);
		} else if (qcoreapplication_notify_callback != nullptr) {
			QObject* cbval1 = param1;
			QEvent* cbval2 = param2;
			bool callback_ret = qcoreapplication_notify_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QCoreApplication::notify(param1, param2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* param1) override {
		if (qcoreapplication_event_isbase) {
			qcoreapplication_event_isbase = false;
			return QCoreApplication::event(param1);
		} else if (qcoreapplication_event_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qcoreapplication_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QCoreApplication::event(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool compressEvent(QEvent* param1, QObject* receiver, QPostEventList* param3) override {
		if (qcoreapplication_compressevent_isbase) {
			qcoreapplication_compressevent_isbase = false;
			return QCoreApplication::compressEvent(param1, receiver, param3);
		} else if (qcoreapplication_compressevent_callback != nullptr) {
			QEvent* cbval1 = param1;
			QObject* cbval2 = receiver;
			QPostEventList* cbval3 = param3;
			bool callback_ret = qcoreapplication_compressevent_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QCoreApplication::compressEvent(param1, receiver, param3);
		}
	}

	// Virtual method for C ABI access and custom callback
	void* resolveInterface(const char* name, int revision) const {
		if (qcoreapplication_resolveinterface_isbase) {
			qcoreapplication_resolveinterface_isbase = false;
			return QCoreApplication::resolveInterface(name, revision);
		} else if (qcoreapplication_resolveinterface_callback != nullptr) {
			const char* cbval1 = name;
			int cbval2 = revision;
			void* callback_ret = qcoreapplication_resolveinterface_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QCoreApplication::resolveInterface(name, revision);
		}
	}

	// Friend functions
	friend bool QCoreApplication_Event(QCoreApplication* self, QEvent* param1);
	friend bool QCoreApplication_QBaseEvent(QCoreApplication* self, QEvent* param1);
	friend bool QCoreApplication_CompressEvent(QCoreApplication* self, QEvent* param1, QObject* receiver, QPostEventList* param3);
	friend bool QCoreApplication_QBaseCompressEvent(QCoreApplication* self, QEvent* param1, QObject* receiver, QPostEventList* param3);
	friend void* QCoreApplication_ResolveInterface(const QCoreApplication* self, const char* name, int revision);
	friend void* QCoreApplication_QBaseResolveInterface(const QCoreApplication* self, const char* name, int revision);
};

#endif


