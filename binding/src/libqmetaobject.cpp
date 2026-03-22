#include <QByteArray>
#include <QMetaClassInfo>
#include <QMetaEnum>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMetaProperty>
#include <QMetaType>
#include <QObject>
#include <QUntypedBindable>
#include <QVariant>
#include <qmetaobject.h>
#include "libqmetaobject.h"
#include "libqmetaobject.hxx"

QMetaMethod* QMetaMethod_new(const QMetaMethod* other) {
	 return new QMetaMethod(*other);
}

QMetaMethod* QMetaMethod_new2(QMetaMethod* other) {
	 return new QMetaMethod(*other);
}

QMetaMethod* QMetaMethod_new3() {
	 return new QMetaMethod();
}

QMetaMethod* QMetaMethod_new4(const QMetaMethod* param1) {
	 return new QMetaMethod(*param1);
}

void QMetaMethod_CopyAssign(QMetaMethod* self, QMetaMethod* other) {
    *self = *other;
}

void QMetaMethod_MoveAssign(QMetaMethod* self, QMetaMethod* other) {
    *self = std::move(*other);
}

libqt_string QMetaMethod_MethodSignature(const QMetaMethod* self) {
	QByteArray _qb = self->methodSignature();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMetaMethod_Name(const QMetaMethod* self) {
	QByteArray _qb = self->name();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

const char* QMetaMethod_TypeName(const QMetaMethod* self) {
	return self->typeName();
}

int QMetaMethod_ReturnType(const QMetaMethod* self) {
	return self->returnType();
}

QMetaType* QMetaMethod_ReturnMetaType(const QMetaMethod* self) {
	return new QMetaType(self->returnMetaType());
}

int QMetaMethod_ParameterCount(const QMetaMethod* self) {
	return self->parameterCount();
}

int QMetaMethod_ParameterType(const QMetaMethod* self, int index) {
	return self->parameterType(index);
}

QMetaType* QMetaMethod_ParameterMetaType(const QMetaMethod* self, int index) {
	return new QMetaType(self->parameterMetaType(index));
}

void QMetaMethod_GetParameterTypes(const QMetaMethod* self, int* types) {
	self->getParameterTypes(types);
}

libqt_list QMetaMethod_ParameterTypes(const QMetaMethod* self) {
	return self->parameterTypes();
}

libqt_string QMetaMethod_ParameterTypeName(const QMetaMethod* self, int index) {
	QByteArray _qb = self->parameterTypeName(index);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QMetaMethod_ParameterNames(const QMetaMethod* self) {
	return self->parameterNames();
}

const char* QMetaMethod_Tag(const QMetaMethod* self) {
	return self->tag();
}

int QMetaMethod_Access(const QMetaMethod* self) {
	return self->access();
}

int QMetaMethod_MethodType(const QMetaMethod* self) {
	return self->methodType();
}

int QMetaMethod_Attributes(const QMetaMethod* self) {
	return self->attributes();
}

int QMetaMethod_MethodIndex(const QMetaMethod* self) {
	return self->methodIndex();
}

int QMetaMethod_RelativeMethodIndex(const QMetaMethod* self) {
	return self->relativeMethodIndex();
}

int QMetaMethod_Revision(const QMetaMethod* self) {
	return self->revision();
}

bool QMetaMethod_IsConst(const QMetaMethod* self) {
	return self->isConst();
}

const QMetaObject* QMetaMethod_EnclosingMetaObject(const QMetaMethod* self) {
	return self->enclosingMetaObject();
}

bool QMetaMethod_IsValid(const QMetaMethod* self) {
	return self->isValid();
}

void QMetaMethod_Delete(QMetaMethod* self) {
    delete self;
}

QMetaEnum* QMetaEnum_new(const QMetaEnum* other) {
	 return new QMetaEnum(*other);
}

QMetaEnum* QMetaEnum_new2(QMetaEnum* other) {
	 return new QMetaEnum(*other);
}

QMetaEnum* QMetaEnum_new3() {
	 return new QMetaEnum();
}

QMetaEnum* QMetaEnum_new4(const QMetaEnum* param1) {
	 return new QMetaEnum(*param1);
}

void QMetaEnum_CopyAssign(QMetaEnum* self, QMetaEnum* other) {
    *self = *other;
}

void QMetaEnum_MoveAssign(QMetaEnum* self, QMetaEnum* other) {
    *self = std::move(*other);
}

const char* QMetaEnum_Name(const QMetaEnum* self) {
	return self->name();
}

const char* QMetaEnum_EnumName(const QMetaEnum* self) {
	return self->enumName();
}

QMetaType* QMetaEnum_MetaType(const QMetaEnum* self) {
	return new QMetaType(self->metaType());
}

bool QMetaEnum_IsFlag(const QMetaEnum* self) {
	return self->isFlag();
}

bool QMetaEnum_IsScoped(const QMetaEnum* self) {
	return self->isScoped();
}

int QMetaEnum_KeyCount(const QMetaEnum* self) {
	return self->keyCount();
}

const char* QMetaEnum_Key(const QMetaEnum* self, int index) {
	return self->key(index);
}

int QMetaEnum_Value(const QMetaEnum* self, int index) {
	return self->value(index);
}

const char* QMetaEnum_Scope(const QMetaEnum* self) {
	return self->scope();
}

int QMetaEnum_KeyToValue(const QMetaEnum* self, const char* key) {
	return self->keyToValue(key);
}

const char* QMetaEnum_ValueToKey(const QMetaEnum* self, int value) {
	return self->valueToKey(value);
}

int QMetaEnum_KeysToValue(const QMetaEnum* self, const char* keys) {
	return self->keysToValue(keys);
}

libqt_string QMetaEnum_ValueToKeys(const QMetaEnum* self, int value) {
	QByteArray _qb = self->valueToKeys(value);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

const QMetaObject* QMetaEnum_EnclosingMetaObject(const QMetaEnum* self) {
	return self->enclosingMetaObject();
}

bool QMetaEnum_IsValid(const QMetaEnum* self) {
	return self->isValid();
}

int QMetaEnum_KeyToValue2(const QMetaEnum* self, const char* key, bool* ok) {
	return self->keyToValue(key, ok);
}

int QMetaEnum_KeysToValue2(const QMetaEnum* self, const char* keys, bool* ok) {
	return self->keysToValue(keys, ok);
}

void QMetaEnum_Delete(QMetaEnum* self) {
    delete self;
}

QMetaProperty* QMetaProperty_new(const QMetaProperty* other) {
	 return new QMetaProperty(*other);
}

QMetaProperty* QMetaProperty_new2(QMetaProperty* other) {
	 return new QMetaProperty(*other);
}

QMetaProperty* QMetaProperty_new3() {
	 return new QMetaProperty();
}

QMetaProperty* QMetaProperty_new4(const QMetaProperty* param1) {
	 return new QMetaProperty(*param1);
}

void QMetaProperty_CopyAssign(QMetaProperty* self, QMetaProperty* other) {
    *self = *other;
}

void QMetaProperty_MoveAssign(QMetaProperty* self, QMetaProperty* other) {
    *self = std::move(*other);
}

const char* QMetaProperty_Name(const QMetaProperty* self) {
	return self->name();
}

const char* QMetaProperty_TypeName(const QMetaProperty* self) {
	return self->typeName();
}

int QMetaProperty_Type(const QMetaProperty* self) {
	return self->type();
}

int QMetaProperty_UserType(const QMetaProperty* self) {
	return self->userType();
}

int QMetaProperty_TypeId(const QMetaProperty* self) {
	return self->typeId();
}

QMetaType* QMetaProperty_MetaType(const QMetaProperty* self) {
	return new QMetaType(self->metaType());
}

int QMetaProperty_PropertyIndex(const QMetaProperty* self) {
	return self->propertyIndex();
}

int QMetaProperty_RelativePropertyIndex(const QMetaProperty* self) {
	return self->relativePropertyIndex();
}

bool QMetaProperty_IsReadable(const QMetaProperty* self) {
	return self->isReadable();
}

bool QMetaProperty_IsWritable(const QMetaProperty* self) {
	return self->isWritable();
}

bool QMetaProperty_IsResettable(const QMetaProperty* self) {
	return self->isResettable();
}

bool QMetaProperty_IsDesignable(const QMetaProperty* self) {
	return self->isDesignable();
}

bool QMetaProperty_IsScriptable(const QMetaProperty* self) {
	return self->isScriptable();
}

bool QMetaProperty_IsStored(const QMetaProperty* self) {
	return self->isStored();
}

bool QMetaProperty_IsUser(const QMetaProperty* self) {
	return self->isUser();
}

bool QMetaProperty_IsConstant(const QMetaProperty* self) {
	return self->isConstant();
}

bool QMetaProperty_IsFinal(const QMetaProperty* self) {
	return self->isFinal();
}

bool QMetaProperty_IsRequired(const QMetaProperty* self) {
	return self->isRequired();
}

bool QMetaProperty_IsBindable(const QMetaProperty* self) {
	return self->isBindable();
}

bool QMetaProperty_IsFlagType(const QMetaProperty* self) {
	return self->isFlagType();
}

bool QMetaProperty_IsEnumType(const QMetaProperty* self) {
	return self->isEnumType();
}

QMetaEnum* QMetaProperty_Enumerator(const QMetaProperty* self) {
	return new QMetaEnum(self->enumerator());
}

bool QMetaProperty_HasNotifySignal(const QMetaProperty* self) {
	return self->hasNotifySignal();
}

QMetaMethod* QMetaProperty_NotifySignal(const QMetaProperty* self) {
	return new QMetaMethod(self->notifySignal());
}

int QMetaProperty_NotifySignalIndex(const QMetaProperty* self) {
	return self->notifySignalIndex();
}

int QMetaProperty_Revision(const QMetaProperty* self) {
	return self->revision();
}

QVariant* QMetaProperty_Read(const QMetaProperty* self, const QObject* obj) {
	return new QVariant(self->read(obj));
}

bool QMetaProperty_Write(const QMetaProperty* self, QObject* obj, const QVariant* value) {
	return self->write(obj, *value);
}

bool QMetaProperty_Reset(const QMetaProperty* self, QObject* obj) {
	return self->reset(obj);
}

QUntypedBindable* QMetaProperty_Bindable(const QMetaProperty* self, QObject* object) {
	return new QUntypedBindable(self->bindable(object));
}

QVariant* QMetaProperty_ReadOnGadget(const QMetaProperty* self, const void* gadget) {
	return new QVariant(self->readOnGadget(gadget));
}

bool QMetaProperty_WriteOnGadget(const QMetaProperty* self, void* gadget, const QVariant* value) {
	return self->writeOnGadget(gadget, *value);
}

bool QMetaProperty_ResetOnGadget(const QMetaProperty* self, void* gadget) {
	return self->resetOnGadget(gadget);
}

bool QMetaProperty_HasStdCppSet(const QMetaProperty* self) {
	return self->hasStdCppSet();
}

bool QMetaProperty_IsAlias(const QMetaProperty* self) {
	return self->isAlias();
}

bool QMetaProperty_IsValid(const QMetaProperty* self) {
	return self->isValid();
}

const QMetaObject* QMetaProperty_EnclosingMetaObject(const QMetaProperty* self) {
	return self->enclosingMetaObject();
}

void QMetaProperty_Delete(QMetaProperty* self) {
    delete self;
}

QMetaClassInfo* QMetaClassInfo_new(const QMetaClassInfo* other) {
	 return new QMetaClassInfo(*other);
}

QMetaClassInfo* QMetaClassInfo_new2(QMetaClassInfo* other) {
	 return new QMetaClassInfo(*other);
}

QMetaClassInfo* QMetaClassInfo_new3() {
	 return new QMetaClassInfo();
}

QMetaClassInfo* QMetaClassInfo_new4(const QMetaClassInfo* param1) {
	 return new QMetaClassInfo(*param1);
}

void QMetaClassInfo_CopyAssign(QMetaClassInfo* self, QMetaClassInfo* other) {
    *self = *other;
}

void QMetaClassInfo_MoveAssign(QMetaClassInfo* self, QMetaClassInfo* other) {
    *self = std::move(*other);
}

const char* QMetaClassInfo_Name(const QMetaClassInfo* self) {
	return self->name();
}

const char* QMetaClassInfo_Value(const QMetaClassInfo* self) {
	return self->value();
}

const QMetaObject* QMetaClassInfo_EnclosingMetaObject(const QMetaClassInfo* self) {
	return self->enclosingMetaObject();
}

void QMetaClassInfo_Delete(QMetaClassInfo* self) {
    delete self;
}

