#pragma once
#ifndef QAPPLICATION_H_C_LIBVIRTUAL
#define QAPPLICATION_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QApplication so that we can call protected methods
class VirtualQApplication final : public QApplication {

public:
	// Virtual class boolean flag
	bool isVirtualQApplication= true;

	// Virtual class public types (including callbacks)
	using QApplication_Notify_Callback = bool (*)(QApplication*, QObject*, QEvent*);
	using QApplication_Event_Callback = bool (*)(QApplication*, QEvent*);
	using QApplication_CompressEvent_Callback = bool (*)(QApplication*, QEvent*, QObject*, QPostEventList*);
	using QApplication_ResolveInterface_Callback = void* (*)(const QApplication*, const char*, int);

protected:
	// Instance callback storage
	mutable QApplication_Notify_Callback qapplication_notify_callback = nullptr;
	mutable QApplication_Event_Callback qapplication_event_callback = nullptr;
	mutable QApplication_CompressEvent_Callback qapplication_compressevent_callback = nullptr;
	mutable QApplication_ResolveInterface_Callback qapplication_resolveinterface_callback = nullptr;

	// Instance base flags
    mutable bool qapplication_notify_isbase = false;
    mutable bool qapplication_event_isbase = false;
    mutable bool qapplication_compressevent_isbase = false;
    mutable bool qapplication_resolveinterface_isbase = false;

public:
	VirtualQApplication(int& argc, char** argv): QApplication(argc, argv) {};
	VirtualQApplication(int& argc, char** argv, int param3): QApplication(argc, argv, param3) {};

	~VirtualQApplication() {
		qapplication_notify_callback = nullptr;
		qapplication_event_callback = nullptr;
		qapplication_compressevent_callback = nullptr;
		qapplication_resolveinterface_callback = nullptr;
	}

// Callback setters
	inline void setQApplication_Notify_Callback(QApplication_Notify_Callback cb) const { qapplication_notify_callback = cb; }
	inline void setQApplication_Event_Callback(QApplication_Event_Callback cb) const { qapplication_event_callback = cb; }
	inline void setQApplication_CompressEvent_Callback(QApplication_CompressEvent_Callback cb) const { qapplication_compressevent_callback = cb; }
	inline void setQApplication_ResolveInterface_Callback(QApplication_ResolveInterface_Callback cb) const { qapplication_resolveinterface_callback = cb; }

// Base flag setters
	inline void setQApplication_Notify_IsBase(bool value) const { qapplication_notify_isbase = value; }
	inline void setQApplication_Event_IsBase(bool value) const { qapplication_event_isbase = value; }
	inline void setQApplication_CompressEvent_IsBase(bool value) const { qapplication_compressevent_isbase = value; }
	inline void setQApplication_ResolveInterface_IsBase(bool value) const { qapplication_resolveinterface_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool notify(QObject* param1, QEvent* param2) override {
		if (qapplication_notify_isbase) {
			qapplication_notify_isbase = false;
			return QApplication::notify(param1, param2);
		} else if (qapplication_notify_callback != nullptr) {
			QObject* cbval1 = param1;
			QEvent* cbval2 = param2;
			bool callback_ret = qapplication_notify_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QApplication::notify(param1, param2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* param1) override {
		if (qapplication_event_isbase) {
			qapplication_event_isbase = false;
			return QApplication::event(param1);
		} else if (qapplication_event_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qapplication_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QApplication::event(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool compressEvent(QEvent* param1, QObject* receiver, QPostEventList* param3) override {
		if (qapplication_compressevent_isbase) {
			qapplication_compressevent_isbase = false;
			return QApplication::compressEvent(param1, receiver, param3);
		} else if (qapplication_compressevent_callback != nullptr) {
			QEvent* cbval1 = param1;
			QObject* cbval2 = receiver;
			QPostEventList* cbval3 = param3;
			bool callback_ret = qapplication_compressevent_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QApplication::compressEvent(param1, receiver, param3);
		}
	}

	// Virtual method for C ABI access and custom callback
	void* resolveInterface(const char* name, int revision) const {
		if (qapplication_resolveinterface_isbase) {
			qapplication_resolveinterface_isbase = false;
			return QApplication::resolveInterface(name, revision);
		} else if (qapplication_resolveinterface_callback != nullptr) {
			const char* cbval1 = name;
			int cbval2 = revision;
			void* callback_ret = qapplication_resolveinterface_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QApplication::resolveInterface(name, revision);
		}
	}

	// Friend functions
	friend bool QApplication_Event(QApplication* self, QEvent* param1);
	friend bool QApplication_QBaseEvent(QApplication* self, QEvent* param1);
	friend bool QApplication_CompressEvent(QApplication* self, QEvent* param1, QObject* receiver, QPostEventList* param3);
	friend bool QApplication_QBaseCompressEvent(QApplication* self, QEvent* param1, QObject* receiver, QPostEventList* param3);
	friend void* QApplication_ResolveInterface(const QApplication* self, const char* name, int revision);
	friend void* QApplication_QBaseResolveInterface(const QApplication* self, const char* name, int revision);
};

#endif


