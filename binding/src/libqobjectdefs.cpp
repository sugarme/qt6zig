#include <QByteArray>
#include <QGenericArgument>
#include <QGenericReturnArgument>
#include <QMetaClassInfo>
#include <QMetaEnum>
#include <QMetaMethod>
#include <QMetaMethodArgument>
#include <QMetaMethodReturnArgument>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Data
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__SuperData
#include <QMetaProperty>
#include <QMetaType>
#include <QMethodRawArguments>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qobjectdefs.h>
#include "libqobjectdefs.h"
#include "libqobjectdefs.hxx"

QGenericArgument* QGenericArgument_new() {
	 return new QGenericArgument();
}

QGenericArgument* QGenericArgument_new2(const char* aName) {
	 return new QGenericArgument(aName);
}

QGenericArgument* QGenericArgument_new3(const char* aName, const void* aData) {
	 return new QGenericArgument(aName, aData);
}

void QGenericArgument_CopyAssign(QGenericArgument* self, QGenericArgument* other) {
    *self = *other;
}

void QGenericArgument_MoveAssign(QGenericArgument* self, QGenericArgument* other) {
    *self = std::move(*other);
}

void* QGenericArgument_Data(const QGenericArgument* self) {
	return self->data();
}

const char* QGenericArgument_Name(const QGenericArgument* self) {
	return self->name();
}

void QGenericArgument_Delete(QGenericArgument* self) {
    delete self;
}

QGenericReturnArgument* QGenericReturnArgument_new() {
	 return new QGenericReturnArgument();
}

QGenericReturnArgument* QGenericReturnArgument_new2(const char* aName) {
	 return new QGenericReturnArgument(aName);
}

QGenericReturnArgument* QGenericReturnArgument_new3(const char* aName, void* aData) {
	 return new QGenericReturnArgument(aName, aData);
}

void QGenericReturnArgument_CopyAssign(QGenericReturnArgument* self, QGenericReturnArgument* other) {
    *self = *other;
}

void QGenericReturnArgument_MoveAssign(QGenericReturnArgument* self, QGenericReturnArgument* other) {
    *self = std::move(*other);
}

void QGenericReturnArgument_Delete(QGenericReturnArgument* self) {
    delete self;
}

const QtPrivate__QMetaTypeInterface* QMetaMethodArgument_MetaType(const QMetaMethodArgument* self) {
	return self->metaType;
}

void QMetaMethodArgument_SetMetaType(QMetaMethodArgument* self, const QtPrivate__QMetaTypeInterface* metaType) {
	self->metaType;
}

const char* QMetaMethodArgument_Name(const QMetaMethodArgument* self) {
	return self->name;
}

void QMetaMethodArgument_SetName(QMetaMethodArgument* self, const char* name) {
	self->name;
}

void QMetaMethodArgument_Delete(QMetaMethodArgument* self) {
    delete self;
}

const QtPrivate__QMetaTypeInterface* QMetaMethodReturnArgument_MetaType(const QMetaMethodReturnArgument* self) {
	return self->metaType;
}

void QMetaMethodReturnArgument_SetMetaType(QMetaMethodReturnArgument* self, const QtPrivate__QMetaTypeInterface* metaType) {
	self->metaType;
}

const char* QMetaMethodReturnArgument_Name(const QMetaMethodReturnArgument* self) {
	return self->name;
}

void QMetaMethodReturnArgument_SetName(QMetaMethodReturnArgument* self, const char* name) {
	self->name;
}

void QMetaMethodReturnArgument_Delete(QMetaMethodReturnArgument* self) {
    delete self;
}

QMetaObject* QMetaObject_new() {
	 return new QMetaObject();
}

QMetaObject* QMetaObject_new2(const QMetaObject* param1) {
	 return new QMetaObject(*param1);
}

const char* QMetaObject_ClassName(const QMetaObject* self) {
	return self->className();
}

const QMetaObject* QMetaObject_SuperClass(const QMetaObject* self) {
	return self->superClass();
}

bool QMetaObject_Inherits(const QMetaObject* self, const QMetaObject* metaObject) {
	return self->inherits(metaObject);
}

QObject* QMetaObject_Cast(const QMetaObject* self, QObject* obj) {
	return self->cast(obj);
}

const QObject* QMetaObject_Cast2(const QMetaObject* self, const QObject* obj) {
	return self->cast(obj);
}

libqt_string QMetaObject_Tr(const QMetaObject* self, const char* s, const char* c) {
	QString _ret = self->tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QMetaType* QMetaObject_MetaType(const QMetaObject* self) {
	return new QMetaType(self->metaType());
}

int QMetaObject_MethodOffset(const QMetaObject* self) {
	return self->methodOffset();
}

int QMetaObject_EnumeratorOffset(const QMetaObject* self) {
	return self->enumeratorOffset();
}

int QMetaObject_PropertyOffset(const QMetaObject* self) {
	return self->propertyOffset();
}

int QMetaObject_ClassInfoOffset(const QMetaObject* self) {
	return self->classInfoOffset();
}

int QMetaObject_ConstructorCount(const QMetaObject* self) {
	return self->constructorCount();
}

int QMetaObject_MethodCount(const QMetaObject* self) {
	return self->methodCount();
}

int QMetaObject_EnumeratorCount(const QMetaObject* self) {
	return self->enumeratorCount();
}

int QMetaObject_PropertyCount(const QMetaObject* self) {
	return self->propertyCount();
}

int QMetaObject_ClassInfoCount(const QMetaObject* self) {
	return self->classInfoCount();
}

int QMetaObject_IndexOfConstructor(const QMetaObject* self, const char* constructor) {
	return self->indexOfConstructor(constructor);
}

int QMetaObject_IndexOfMethod(const QMetaObject* self, const char* method) {
	return self->indexOfMethod(method);
}

int QMetaObject_IndexOfSignal(const QMetaObject* self, const char* signal) {
	return self->indexOfSignal(signal);
}

int QMetaObject_IndexOfSlot(const QMetaObject* self, const char* slot) {
	return self->indexOfSlot(slot);
}

int QMetaObject_IndexOfEnumerator(const QMetaObject* self, const char* name) {
	return self->indexOfEnumerator(name);
}

int QMetaObject_IndexOfProperty(const QMetaObject* self, const char* name) {
	return self->indexOfProperty(name);
}

int QMetaObject_IndexOfClassInfo(const QMetaObject* self, const char* name) {
	return self->indexOfClassInfo(name);
}

QMetaMethod* QMetaObject_Constructor(const QMetaObject* self, int index) {
	return new QMetaMethod(self->constructor(index));
}

QMetaMethod* QMetaObject_Method(const QMetaObject* self, int index) {
	return new QMetaMethod(self->method(index));
}

QMetaEnum* QMetaObject_Enumerator(const QMetaObject* self, int index) {
	return new QMetaEnum(self->enumerator(index));
}

QMetaProperty* QMetaObject_Property(const QMetaObject* self, int index) {
	return new QMetaProperty(self->property(index));
}

QMetaClassInfo* QMetaObject_ClassInfo(const QMetaObject* self, int index) {
	return new QMetaClassInfo(self->classInfo(index));
}

QMetaProperty* QMetaObject_UserProperty(const QMetaObject* self) {
	return new QMetaProperty(self->userProperty());
}

bool QMetaObject_CheckConnectArgs(const char* signal, const char* method) {
	return QMetaObject::checkConnectArgs(signal, method);
}

bool QMetaObject_CheckConnectArgs2(const QMetaMethod* signal, const QMetaMethod* method) {
	return QMetaObject::checkConnectArgs(*signal, *method);
}

libqt_string QMetaObject_NormalizedSignature(const char* method) {
	QByteArray _qb = QMetaObject::normalizedSignature(method);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMetaObject_NormalizedType(const char* typeVal) {
	QByteArray _qb = QMetaObject::normalizedType(typeVal);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QMetaObject_Disconnect(const QObject* sender, int signal_index, const QObject* receiver, int method_index) {
	return QMetaObject::disconnect(sender, signal_index, receiver, method_index);
}

bool QMetaObject_DisconnectOne(const QObject* sender, int signal_index, const QObject* receiver, int method_index) {
	return QMetaObject::disconnectOne(sender, signal_index, receiver, method_index);
}

void QMetaObject_ConnectSlotsByName(QObject* o) {
	QMetaObject::connectSlotsByName(o);
}

void QMetaObject_Activate(QObject* sender, int signal_index, void** argv) {
	QMetaObject::activate(sender, signal_index, argv);
}

void QMetaObject_Activate2(QObject* sender, const QMetaObject* param2, int local_signal_index, void** argv) {
	QMetaObject::activate(sender, param2, local_signal_index, argv);
}

void QMetaObject_Activate3(QObject* sender, int signal_offset, int local_signal_index, void** argv) {
	QMetaObject::activate(sender, signal_offset, local_signal_index, argv);
}

int QMetaObject_StaticMetacall(const QMetaObject* self, int param1, int param2, void** param3) {
	return self->static_metacall(static_cast<QMetaObject::Call>(param1), param2, param3);
}

int QMetaObject_Metacall(QObject* param1, int param2, int param3, void** param4) {
	return QMetaObject::metacall(param1, static_cast<QMetaObject::Call>(param2), param3, param4);
}

QMetaObject__Data* QMetaObject_D(const QMetaObject* self) {
	return new QMetaObject::Data(self->d);
}

void QMetaObject_SetD(QMetaObject* self, QMetaObject__Data* d) {
	self->d;
}

libqt_string QMetaObject_Tr3(const QMetaObject* self, const char* s, const char* c, int n) {
	QString _ret = self->tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMetaObject_Delete(QMetaObject* self) {
    delete self;
}

QMetaObject__Connection* QMetaObject__Connection_new() {
	 return new QMetaObject::Connection();
}

void Connection::**** QMetaObject__Connection_OperatorvoidMultiplyConnection__Multiply(const QMetaObject__Connection* self) {
	return self->operator void *Connection::*();
}

void QMetaObject__Connection_Delete(QMetaObject__Connection* self) {
    delete self;
}

QMetaObject__SuperData* QMetaObject__SuperData_new() {
	 return new QMetaObject::SuperData();
}

QMetaObject__SuperData* QMetaObject__SuperData_new2(const QMetaObject* mo) {
	 return new QMetaObject::SuperData(mo);
}

QMetaObject__SuperData* QMetaObject__SuperData_new3(const QMetaObject__SuperData* param1) {
	 return new QMetaObject::SuperData(*param1);
}

const QMetaObject* QMetaObject__SuperData_Direct(const QMetaObject__SuperData* self) {
	return self->direct;
}

void QMetaObject__SuperData_SetDirect(QMetaObject__SuperData* self, const QMetaObject* direct) {
	self->direct;
}

const QMetaObject* QMetaObject__SuperData_OperatorMinusGreater(const QMetaObject__SuperData* self) {
	return self->operator->();
}

const QMetaObject* QMetaObject__SuperData_OperatorconstQMetaObjectMultiply(const QMetaObject__SuperData* self) {
	return self->operator const QMetaObject *();
}

void QMetaObject__SuperData_OperatorAssign(QMetaObject__SuperData* self, const QMetaObject__SuperData* param1) {
	self->operator=(*param1);
}

void QMetaObject__SuperData_Delete(QMetaObject__SuperData* self) {
    delete self;
}

QMetaObject__Data* QMetaObject__Data_new() {
	 return new QMetaObject::Data();
}

QMetaObject__Data* QMetaObject__Data_new2(const QMetaObject__Data* param1) {
	 return new QMetaObject::Data(*param1);
}

QMetaObject__SuperData* QMetaObject__Data_Superdata(const QMetaObject__Data* self) {
	return new QMetaObject::SuperData(self->superdata);
}

void QMetaObject__Data_SetSuperdata(QMetaObject__Data* self, QMetaObject__SuperData* superdata) {
	self->superdata;
}

const unsigned int* QMetaObject__Data_Stringdata(const QMetaObject__Data* self) {
	return self->stringdata;
}

void QMetaObject__Data_SetStringdata(QMetaObject__Data* self, const unsigned int* stringdata) {
	self->stringdata;
}

const unsigned int* QMetaObject__Data_Data(const QMetaObject__Data* self) {
	return self->data;
}

void QMetaObject__Data_SetData(QMetaObject__Data* self, const unsigned int* data) {
	self->data;
}

const QMetaObject__SuperData* QMetaObject__Data_RelatedMetaObjects(const QMetaObject__Data* self) {
	return self->relatedMetaObjects;
}

void QMetaObject__Data_SetRelatedMetaObjects(QMetaObject__Data* self, const QMetaObject__SuperData* relatedMetaObjects) {
	self->relatedMetaObjects;
}

const QtPrivate__QMetaTypeInterface** QMetaObject__Data_MetaTypes(const QMetaObject__Data* self) {
	return self->metaTypes;
}

void QMetaObject__Data_SetMetaTypes(QMetaObject__Data* self, const QtPrivate__QMetaTypeInterface** metaTypes) {
	self->metaTypes;
}

void QMetaObject__Data_OperatorAssign(QMetaObject__Data* self, const QMetaObject__Data* param1) {
	self->operator=(*param1);
}

void QMetaObject__Data_Delete(QMetaObject__Data* self) {
    delete self;
}

