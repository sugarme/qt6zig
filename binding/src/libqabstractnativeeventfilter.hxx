#pragma once
#ifndef QABSTRACTNATIVEEVENTFILTER_H_C_LIBVIRTUAL
#define QABSTRACTNATIVEEVENTFILTER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QAbstractNativeEventFilter so that we can call protected methods
class VirtualQAbstractNativeEventFilter : public QAbstractNativeEventFilter {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractNativeEventFilter= true;

	// Virtual class public types (including callbacks)
	using QAbstractNativeEventFilter_NativeEventFilter_Callback = bool (*)(QAbstractNativeEventFilter*, libqt_string, void*, intptr_t*);

protected:
	// Instance callback storage
	mutable QAbstractNativeEventFilter_NativeEventFilter_Callback qabstractnativeeventfilter_nativeeventfilter_callback = nullptr;

	// Instance base flags
    mutable bool qabstractnativeeventfilter_nativeeventfilter_isbase = false;

public:
	VirtualQAbstractNativeEventFilter(): QAbstractNativeEventFilter() {};

	~VirtualQAbstractNativeEventFilter() {
		qabstractnativeeventfilter_nativeeventfilter_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractNativeEventFilter_NativeEventFilter_Callback(QAbstractNativeEventFilter_NativeEventFilter_Callback cb) const { qabstractnativeeventfilter_nativeeventfilter_callback = cb; }

// Base flag setters
	inline void setQAbstractNativeEventFilter_NativeEventFilter_IsBase(bool value) const { qabstractnativeeventfilter_nativeeventfilter_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool nativeEventFilter(const QByteArray& eventType, void* message, qintptr* result) override {
		if (qabstractnativeeventfilter_nativeeventfilter_callback != nullptr) {
			QByteArray eventType_qb = eventType.toUtf8();
			libqt_string cbval1;
			cbval1.len = eventType_qb.length();
			cbval1.data = static_cast<const char*>(eventType_qb.constData());
			void* cbval2 = message;
			intptr_t* cbval3 = result;
			bool callback_ret = qabstractnativeeventfilter_nativeeventfilter_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return {};
		}
	}
};

#endif


