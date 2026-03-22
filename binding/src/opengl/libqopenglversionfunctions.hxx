#pragma once
#ifndef QOPENGLVERSIONFUNCTIONS_H_C_LIBVIRTUAL
#define QOPENGLVERSIONFUNCTIONS_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QAbstractOpenGLFunctions so that we can call protected methods
class VirtualQAbstractOpenGLFunctions final : public QAbstractOpenGLFunctions {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractOpenGLFunctions= true;

	// Virtual class public types (including callbacks)
	using QAbstractOpenGLFunctions_InitializeOpenGLFunctions_Callback = bool (*)();
	using QAbstractOpenGLFunctions_IsInitialized_Callback = bool (*)();
	using QAbstractOpenGLFunctions_SetOwningContext_Callback = void (*)(QAbstractOpenGLFunctions*, const QOpenGLContext*);
	using QAbstractOpenGLFunctions_OwningContext_Callback = QOpenGLContext* (*)();

protected:
	// Instance callback storage
	mutable QAbstractOpenGLFunctions_InitializeOpenGLFunctions_Callback qabstractopenglfunctions_initializeopenglfunctions_callback = nullptr;
	mutable QAbstractOpenGLFunctions_IsInitialized_Callback qabstractopenglfunctions_isinitialized_callback = nullptr;
	mutable QAbstractOpenGLFunctions_SetOwningContext_Callback qabstractopenglfunctions_setowningcontext_callback = nullptr;
	mutable QAbstractOpenGLFunctions_OwningContext_Callback qabstractopenglfunctions_owningcontext_callback = nullptr;

	// Instance base flags
    mutable bool qabstractopenglfunctions_initializeopenglfunctions_isbase = false;
    mutable bool qabstractopenglfunctions_isinitialized_isbase = false;
    mutable bool qabstractopenglfunctions_setowningcontext_isbase = false;
    mutable bool qabstractopenglfunctions_owningcontext_isbase = false;

public:

	~VirtualQAbstractOpenGLFunctions() {
		qabstractopenglfunctions_initializeopenglfunctions_callback = nullptr;
		qabstractopenglfunctions_isinitialized_callback = nullptr;
		qabstractopenglfunctions_setowningcontext_callback = nullptr;
		qabstractopenglfunctions_owningcontext_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractOpenGLFunctions_InitializeOpenGLFunctions_Callback(QAbstractOpenGLFunctions_InitializeOpenGLFunctions_Callback cb) const { qabstractopenglfunctions_initializeopenglfunctions_callback = cb; }
	inline void setQAbstractOpenGLFunctions_IsInitialized_Callback(QAbstractOpenGLFunctions_IsInitialized_Callback cb) const { qabstractopenglfunctions_isinitialized_callback = cb; }
	inline void setQAbstractOpenGLFunctions_SetOwningContext_Callback(QAbstractOpenGLFunctions_SetOwningContext_Callback cb) const { qabstractopenglfunctions_setowningcontext_callback = cb; }
	inline void setQAbstractOpenGLFunctions_OwningContext_Callback(QAbstractOpenGLFunctions_OwningContext_Callback cb) const { qabstractopenglfunctions_owningcontext_callback = cb; }

// Base flag setters
	inline void setQAbstractOpenGLFunctions_InitializeOpenGLFunctions_IsBase(bool value) const { qabstractopenglfunctions_initializeopenglfunctions_isbase = value; }
	inline void setQAbstractOpenGLFunctions_IsInitialized_IsBase(bool value) const { qabstractopenglfunctions_isinitialized_isbase = value; }
	inline void setQAbstractOpenGLFunctions_SetOwningContext_IsBase(bool value) const { qabstractopenglfunctions_setowningcontext_isbase = value; }
	inline void setQAbstractOpenGLFunctions_OwningContext_IsBase(bool value) const { qabstractopenglfunctions_owningcontext_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool initializeOpenGLFunctions() override {
		if (qabstractopenglfunctions_initializeopenglfunctions_isbase) {
			qabstractopenglfunctions_initializeopenglfunctions_isbase = false;
			return QAbstractOpenGLFunctions::initializeOpenGLFunctions();
		} else if (qabstractopenglfunctions_initializeopenglfunctions_callback != nullptr) {
			bool callback_ret = qabstractopenglfunctions_initializeopenglfunctions_callback();
			return callback_ret;
		} else {
			return QAbstractOpenGLFunctions::initializeOpenGLFunctions();
		}
	}

	// Virtual method for C ABI access and custom callback
	bool isInitialized() const {
		if (qabstractopenglfunctions_isinitialized_isbase) {
			qabstractopenglfunctions_isinitialized_isbase = false;
			return QAbstractOpenGLFunctions::isInitialized();
		} else if (qabstractopenglfunctions_isinitialized_callback != nullptr) {
			bool callback_ret = qabstractopenglfunctions_isinitialized_callback();
			return callback_ret;
		} else {
			return QAbstractOpenGLFunctions::isInitialized();
		}
	}

	// Virtual method for C ABI access and custom callback
	void setOwningContext(const QOpenGLContext* context) {
		if (qabstractopenglfunctions_setowningcontext_isbase) {
			qabstractopenglfunctions_setowningcontext_isbase = false;
			QAbstractOpenGLFunctions::setOwningContext(context);
		} else if (qabstractopenglfunctions_setowningcontext_callback != nullptr) {
			const QOpenGLContext* cbval1 = context;
			qabstractopenglfunctions_setowningcontext_callback(this, cbval1);
		} else {
			QAbstractOpenGLFunctions::setOwningContext(context);
		}
	}

	// Virtual method for C ABI access and custom callback
	QOpenGLContext* owningContext() const {
		if (qabstractopenglfunctions_owningcontext_isbase) {
			qabstractopenglfunctions_owningcontext_isbase = false;
			return QAbstractOpenGLFunctions::owningContext();
		} else if (qabstractopenglfunctions_owningcontext_callback != nullptr) {
			QOpenGLContext* callback_ret = qabstractopenglfunctions_owningcontext_callback();
			return callback_ret;
		} else {
			return QAbstractOpenGLFunctions::owningContext();
		}
	}

	// Friend functions
	friend bool QAbstractOpenGLFunctions_IsInitialized(const QAbstractOpenGLFunctions* self);
	friend bool QAbstractOpenGLFunctions_QBaseIsInitialized(const QAbstractOpenGLFunctions* self);
	friend void QAbstractOpenGLFunctions_SetOwningContext(QAbstractOpenGLFunctions* self, const QOpenGLContext* context);
	friend void QAbstractOpenGLFunctions_QBaseSetOwningContext(QAbstractOpenGLFunctions* self, const QOpenGLContext* context);
	friend QOpenGLContext* QAbstractOpenGLFunctions_OwningContext(const QAbstractOpenGLFunctions* self);
	friend QOpenGLContext* QAbstractOpenGLFunctions_QBaseOwningContext(const QAbstractOpenGLFunctions* self);
};

#endif


