#include <QByteArray>
#include <QItemEditorCreatorBase>
#include <QItemEditorFactory>
#include <QWidget>
#include <qitemeditorfactory.h>
#include "libqitemeditorfactory.h"
#include "libqitemeditorfactory.hxx"

QItemEditorCreatorBase* QItemEditorCreatorBase_new() {
	 return new VirtualQItemEditorCreatorBase();
}

QItemEditorCreatorBase* QItemEditorCreatorBase_new2(const QItemEditorCreatorBase* param1) {
	 return new VirtualQItemEditorCreatorBase(*param1);
}

QWidget* QItemEditorCreatorBase_CreateWidget(const QItemEditorCreatorBase* self, QWidget* parent) {
	return self->createWidget(parent);
}

libqt_string QItemEditorCreatorBase_ValuePropertyName(const QItemEditorCreatorBase* self) {
	QByteArray _qb = self->valuePropertyName();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QItemEditorCreatorBase_OperatorAssign(QItemEditorCreatorBase* self, const QItemEditorCreatorBase* param1) {
	self->operator=(*param1);
}

// Base class handler implementation
QWidget* QItemEditorCreatorBase_QBaseCreateWidget(const QItemEditorCreatorBase* self, QWidget* parent) {
	auto* vqitemeditorcreatorbase = dynamic_cast<const VirtualQItemEditorCreatorBase*>(self);
	if (vqitemeditorcreatorbase && vqitemeditorcreatorbase->isVirtualQItemEditorCreatorBase) {
vqitemeditorcreatorbase->setQItemEditorCreatorBase_CreateWidget_IsBase(true);
	return vqitemeditorcreatorbase->createWidget(parent);
}
}

// Auxiliary method to allow providing re-implementation
void QItemEditorCreatorBase_OnCreateWidget(const QItemEditorCreatorBase* self, intptr_t slot) {
	auto* vqitemeditorcreatorbase = dynamic_cast<const VirtualQItemEditorCreatorBase*>(self);
	if (vqitemeditorcreatorbase && vqitemeditorcreatorbase->isVirtualQItemEditorCreatorBase) {
vqitemeditorcreatorbase->setQItemEditorCreatorBase_CreateWidget_Callback(reinterpret_cast<VirtualQItemEditorCreatorBase::QItemEditorCreatorBase_CreateWidget_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QItemEditorCreatorBase_QBaseValuePropertyName(const QItemEditorCreatorBase* self) {
	auto* vqitemeditorcreatorbase = dynamic_cast<const VirtualQItemEditorCreatorBase*>(self);
	if (vqitemeditorcreatorbase && vqitemeditorcreatorbase->isVirtualQItemEditorCreatorBase) {
vqitemeditorcreatorbase->setQItemEditorCreatorBase_ValuePropertyName_IsBase(true);
	QByteArray _qb = vqitemeditorcreatorbase->valuePropertyName();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}
}

// Auxiliary method to allow providing re-implementation
void QItemEditorCreatorBase_OnValuePropertyName(const QItemEditorCreatorBase* self, intptr_t slot) {
	auto* vqitemeditorcreatorbase = dynamic_cast<const VirtualQItemEditorCreatorBase*>(self);
	if (vqitemeditorcreatorbase && vqitemeditorcreatorbase->isVirtualQItemEditorCreatorBase) {
vqitemeditorcreatorbase->setQItemEditorCreatorBase_ValuePropertyName_Callback(reinterpret_cast<VirtualQItemEditorCreatorBase::QItemEditorCreatorBase_ValuePropertyName_Callback>(slot));
}
}

void QItemEditorCreatorBase_Delete(QItemEditorCreatorBase* self) {
    delete self;
}

QItemEditorFactory* QItemEditorFactory_new() {
	 return new VirtualQItemEditorFactory();
}

QItemEditorFactory* QItemEditorFactory_new2(const QItemEditorFactory* param1) {
	 return new VirtualQItemEditorFactory(*param1);
}

QWidget* QItemEditorFactory_CreateEditor(const QItemEditorFactory* self, int userType, QWidget* parent) {
	return self->createEditor(userType, parent);
}

libqt_string QItemEditorFactory_ValuePropertyName(const QItemEditorFactory* self, int userType) {
	QByteArray _qb = self->valuePropertyName(userType);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QItemEditorFactory_RegisterEditor(QItemEditorFactory* self, int userType, QItemEditorCreatorBase* creator) {
	self->registerEditor(userType, creator);
}

const QItemEditorFactory* QItemEditorFactory_DefaultFactory() {
	return QItemEditorFactory::defaultFactory();
}

void QItemEditorFactory_SetDefaultFactory(QItemEditorFactory* factory) {
	QItemEditorFactory::setDefaultFactory(factory);
}

// Base class handler implementation
QWidget* QItemEditorFactory_QBaseCreateEditor(const QItemEditorFactory* self, int userType, QWidget* parent) {
	auto* vqitemeditorfactory = dynamic_cast<const VirtualQItemEditorFactory*>(self);
	if (vqitemeditorfactory && vqitemeditorfactory->isVirtualQItemEditorFactory) {
vqitemeditorfactory->setQItemEditorFactory_CreateEditor_IsBase(true);
	return vqitemeditorfactory->createEditor(userType, parent);
}
}

// Auxiliary method to allow providing re-implementation
void QItemEditorFactory_OnCreateEditor(const QItemEditorFactory* self, intptr_t slot) {
	auto* vqitemeditorfactory = dynamic_cast<const VirtualQItemEditorFactory*>(self);
	if (vqitemeditorfactory && vqitemeditorfactory->isVirtualQItemEditorFactory) {
vqitemeditorfactory->setQItemEditorFactory_CreateEditor_Callback(reinterpret_cast<VirtualQItemEditorFactory::QItemEditorFactory_CreateEditor_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QItemEditorFactory_QBaseValuePropertyName(const QItemEditorFactory* self, int userType) {
	auto* vqitemeditorfactory = dynamic_cast<const VirtualQItemEditorFactory*>(self);
	if (vqitemeditorfactory && vqitemeditorfactory->isVirtualQItemEditorFactory) {
vqitemeditorfactory->setQItemEditorFactory_ValuePropertyName_IsBase(true);
	QByteArray _qb = vqitemeditorfactory->valuePropertyName(userType);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}
}

// Auxiliary method to allow providing re-implementation
void QItemEditorFactory_OnValuePropertyName(const QItemEditorFactory* self, intptr_t slot) {
	auto* vqitemeditorfactory = dynamic_cast<const VirtualQItemEditorFactory*>(self);
	if (vqitemeditorfactory && vqitemeditorfactory->isVirtualQItemEditorFactory) {
vqitemeditorfactory->setQItemEditorFactory_ValuePropertyName_Callback(reinterpret_cast<VirtualQItemEditorFactory::QItemEditorFactory_ValuePropertyName_Callback>(slot));
}
}

void QItemEditorFactory_Delete(QItemEditorFactory* self) {
    delete self;
}

