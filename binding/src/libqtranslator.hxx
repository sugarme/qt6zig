#pragma once
#ifndef QTRANSLATOR_H_C_LIBVIRTUAL
#define QTRANSLATOR_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QTranslator so that we can call protected methods
class VirtualQTranslator final : public QTranslator {

public:
	// Virtual class boolean flag
	bool isVirtualQTranslator= true;

	// Virtual class public types (including callbacks)
	using QTranslator_Translate_Callback = const char* (*)(const QTranslator*, const char*, const char*, const char*, int);
	using QTranslator_IsEmpty_Callback = bool (*)();

protected:
	// Instance callback storage
	mutable QTranslator_Translate_Callback qtranslator_translate_callback = nullptr;
	mutable QTranslator_IsEmpty_Callback qtranslator_isempty_callback = nullptr;

	// Instance base flags
    mutable bool qtranslator_translate_isbase = false;
    mutable bool qtranslator_isempty_isbase = false;

public:
	VirtualQTranslator(): QTranslator() {};
	VirtualQTranslator(QObject* parent): QTranslator(parent) {};

	~VirtualQTranslator() {
		qtranslator_translate_callback = nullptr;
		qtranslator_isempty_callback = nullptr;
	}

// Callback setters
	inline void setQTranslator_Translate_Callback(QTranslator_Translate_Callback cb) const { qtranslator_translate_callback = cb; }
	inline void setQTranslator_IsEmpty_Callback(QTranslator_IsEmpty_Callback cb) const { qtranslator_isempty_callback = cb; }

// Base flag setters
	inline void setQTranslator_Translate_IsBase(bool value) const { qtranslator_translate_isbase = value; }
	inline void setQTranslator_IsEmpty_IsBase(bool value) const { qtranslator_isempty_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QString translate(const char* context, const char* sourceText, const char* disambiguation, int n) const override {
		if (qtranslator_translate_isbase) {
			qtranslator_translate_isbase = false;
			return QTranslator::translate(context, sourceText, disambiguation, n);
		} else if (qtranslator_translate_callback != nullptr) {
			const char* cbval1 = context;
			const char* cbval2 = sourceText;
			const char* cbval3 = disambiguation;
			int cbval4 = n;
			const char* callback_ret = qtranslator_translate_callback(this, cbval1, cbval2, cbval3, cbval4);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QTranslator::translate(context, sourceText, disambiguation, n);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isEmpty() const override {
		if (qtranslator_isempty_isbase) {
			qtranslator_isempty_isbase = false;
			return QTranslator::isEmpty();
		} else if (qtranslator_isempty_callback != nullptr) {
			bool callback_ret = qtranslator_isempty_callback();
			return callback_ret;
		} else {
			return QTranslator::isEmpty();
		}
	}
};

#endif


