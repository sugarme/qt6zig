#pragma once
#ifndef QITEMEDITORFACTORY_H_C_LIBVIRTUAL
#define QITEMEDITORFACTORY_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QItemEditorCreatorBase so that we can call protected methods
class VirtualQItemEditorCreatorBase : public QItemEditorCreatorBase {

public:
	// Virtual class boolean flag
	bool isVirtualQItemEditorCreatorBase= true;

	// Virtual class public types (including callbacks)
	using QItemEditorCreatorBase_CreateWidget_Callback = QWidget* (*)(const QItemEditorCreatorBase*, QWidget*);
	using QItemEditorCreatorBase_ValuePropertyName_Callback = const char* (*)();

protected:
	// Instance callback storage
	mutable QItemEditorCreatorBase_CreateWidget_Callback qitemeditorcreatorbase_createwidget_callback = nullptr;
	mutable QItemEditorCreatorBase_ValuePropertyName_Callback qitemeditorcreatorbase_valuepropertyname_callback = nullptr;

	// Instance base flags
    mutable bool qitemeditorcreatorbase_createwidget_isbase = false;
    mutable bool qitemeditorcreatorbase_valuepropertyname_isbase = false;

public:
	VirtualQItemEditorCreatorBase(): QItemEditorCreatorBase() {};
	VirtualQItemEditorCreatorBase(const QItemEditorCreatorBase& param1): QItemEditorCreatorBase(param1) {};

	~VirtualQItemEditorCreatorBase() {
		qitemeditorcreatorbase_createwidget_callback = nullptr;
		qitemeditorcreatorbase_valuepropertyname_callback = nullptr;
	}

// Callback setters
	inline void setQItemEditorCreatorBase_CreateWidget_Callback(QItemEditorCreatorBase_CreateWidget_Callback cb) const { qitemeditorcreatorbase_createwidget_callback = cb; }
	inline void setQItemEditorCreatorBase_ValuePropertyName_Callback(QItemEditorCreatorBase_ValuePropertyName_Callback cb) const { qitemeditorcreatorbase_valuepropertyname_callback = cb; }

// Base flag setters
	inline void setQItemEditorCreatorBase_CreateWidget_IsBase(bool value) const { qitemeditorcreatorbase_createwidget_isbase = value; }
	inline void setQItemEditorCreatorBase_ValuePropertyName_IsBase(bool value) const { qitemeditorcreatorbase_valuepropertyname_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QWidget* createWidget(QWidget* parent) const override {
		if (qitemeditorcreatorbase_createwidget_callback != nullptr) {
			QWidget* cbval1 = parent;
			QWidget* callback_ret = qitemeditorcreatorbase_createwidget_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QByteArray valuePropertyName() const override {
		if (qitemeditorcreatorbase_valuepropertyname_callback != nullptr) {
			const char* callback_ret = qitemeditorcreatorbase_valuepropertyname_callback();
			return QByteArray::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return {};
		}
	}
};

// This class is a subclass of QItemEditorFactory so that we can call protected methods
class VirtualQItemEditorFactory final : public QItemEditorFactory {

public:
	// Virtual class boolean flag
	bool isVirtualQItemEditorFactory= true;

	// Virtual class public types (including callbacks)
	using QItemEditorFactory_CreateEditor_Callback = QWidget* (*)(const QItemEditorFactory*, int, QWidget*);
	using QItemEditorFactory_ValuePropertyName_Callback = const char* (*)(const QItemEditorFactory*, int);

protected:
	// Instance callback storage
	mutable QItemEditorFactory_CreateEditor_Callback qitemeditorfactory_createeditor_callback = nullptr;
	mutable QItemEditorFactory_ValuePropertyName_Callback qitemeditorfactory_valuepropertyname_callback = nullptr;

	// Instance base flags
    mutable bool qitemeditorfactory_createeditor_isbase = false;
    mutable bool qitemeditorfactory_valuepropertyname_isbase = false;

public:
	VirtualQItemEditorFactory(): QItemEditorFactory() {};
	VirtualQItemEditorFactory(const QItemEditorFactory& param1): QItemEditorFactory(param1) {};

	~VirtualQItemEditorFactory() {
		qitemeditorfactory_createeditor_callback = nullptr;
		qitemeditorfactory_valuepropertyname_callback = nullptr;
	}

// Callback setters
	inline void setQItemEditorFactory_CreateEditor_Callback(QItemEditorFactory_CreateEditor_Callback cb) const { qitemeditorfactory_createeditor_callback = cb; }
	inline void setQItemEditorFactory_ValuePropertyName_Callback(QItemEditorFactory_ValuePropertyName_Callback cb) const { qitemeditorfactory_valuepropertyname_callback = cb; }

// Base flag setters
	inline void setQItemEditorFactory_CreateEditor_IsBase(bool value) const { qitemeditorfactory_createeditor_isbase = value; }
	inline void setQItemEditorFactory_ValuePropertyName_IsBase(bool value) const { qitemeditorfactory_valuepropertyname_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QWidget* createEditor(int userType, QWidget* parent) const override {
		if (qitemeditorfactory_createeditor_isbase) {
			qitemeditorfactory_createeditor_isbase = false;
			return QItemEditorFactory::createEditor(userType, parent);
		} else if (qitemeditorfactory_createeditor_callback != nullptr) {
			int cbval1 = userType;
			QWidget* cbval2 = parent;
			QWidget* callback_ret = qitemeditorfactory_createeditor_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QItemEditorFactory::createEditor(userType, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QByteArray valuePropertyName(int userType) const override {
		if (qitemeditorfactory_valuepropertyname_isbase) {
			qitemeditorfactory_valuepropertyname_isbase = false;
			return QItemEditorFactory::valuePropertyName(userType);
		} else if (qitemeditorfactory_valuepropertyname_callback != nullptr) {
			int cbval1 = userType;
			const char* callback_ret = qitemeditorfactory_valuepropertyname_callback(this, cbval1);
			return QByteArray::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QItemEditorFactory::valuePropertyName(userType);
		}
	}
};

#endif


