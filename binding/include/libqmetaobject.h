#pragma once
#ifndef QMETAOBJECT_H_C_LIB
#define QMETAOBJECT_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMetaClassInfo QMetaClassInfo;
typedef struct QMetaEnum QMetaEnum;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaProperty QMetaProperty;
typedef struct QMetaType QMetaType;
typedef struct QObject QObject;
typedef struct QUntypedBindable QUntypedBindable;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QMetaMethod* QMetaMethod_new(const QMetaMethod* other);
QMetaMethod* QMetaMethod_new2(QMetaMethod* other);
QMetaMethod* QMetaMethod_new3();
QMetaMethod* QMetaMethod_new4(const QMetaMethod* param1);
void QMetaMethod_CopyAssign(QMetaMethod* self, QMetaMethod* other);
void QMetaMethod_MoveAssign(QMetaMethod* self, QMetaMethod* other);
libqt_string QMetaMethod_MethodSignature(const QMetaMethod* self);
libqt_string QMetaMethod_Name(const QMetaMethod* self);
const char* QMetaMethod_TypeName(const QMetaMethod* self);
int QMetaMethod_ReturnType(const QMetaMethod* self);
QMetaType* QMetaMethod_ReturnMetaType(const QMetaMethod* self);
int QMetaMethod_ParameterCount(const QMetaMethod* self);
int QMetaMethod_ParameterType(const QMetaMethod* self, int index);
QMetaType* QMetaMethod_ParameterMetaType(const QMetaMethod* self, int index);
void QMetaMethod_GetParameterTypes(const QMetaMethod* self, int* types);
libqt_list QMetaMethod_ParameterTypes(const QMetaMethod* self);
libqt_string QMetaMethod_ParameterTypeName(const QMetaMethod* self, int index);
libqt_list QMetaMethod_ParameterNames(const QMetaMethod* self);
const char* QMetaMethod_Tag(const QMetaMethod* self);
int QMetaMethod_Access(const QMetaMethod* self);
int QMetaMethod_MethodType(const QMetaMethod* self);
int QMetaMethod_Attributes(const QMetaMethod* self);
int QMetaMethod_MethodIndex(const QMetaMethod* self);
int QMetaMethod_RelativeMethodIndex(const QMetaMethod* self);
int QMetaMethod_Revision(const QMetaMethod* self);
bool QMetaMethod_IsConst(const QMetaMethod* self);
const QMetaObject* QMetaMethod_EnclosingMetaObject(const QMetaMethod* self);
bool QMetaMethod_IsValid(const QMetaMethod* self);
void QMetaMethod_Delete(QMetaMethod* self);

QMetaEnum* QMetaEnum_new(const QMetaEnum* other);
QMetaEnum* QMetaEnum_new2(QMetaEnum* other);
QMetaEnum* QMetaEnum_new3();
QMetaEnum* QMetaEnum_new4(const QMetaEnum* param1);
void QMetaEnum_CopyAssign(QMetaEnum* self, QMetaEnum* other);
void QMetaEnum_MoveAssign(QMetaEnum* self, QMetaEnum* other);
const char* QMetaEnum_Name(const QMetaEnum* self);
const char* QMetaEnum_EnumName(const QMetaEnum* self);
QMetaType* QMetaEnum_MetaType(const QMetaEnum* self);
bool QMetaEnum_IsFlag(const QMetaEnum* self);
bool QMetaEnum_IsScoped(const QMetaEnum* self);
int QMetaEnum_KeyCount(const QMetaEnum* self);
const char* QMetaEnum_Key(const QMetaEnum* self, int index);
int QMetaEnum_Value(const QMetaEnum* self, int index);
const char* QMetaEnum_Scope(const QMetaEnum* self);
int QMetaEnum_KeyToValue(const QMetaEnum* self, const char* key);
const char* QMetaEnum_ValueToKey(const QMetaEnum* self, int value);
int QMetaEnum_KeysToValue(const QMetaEnum* self, const char* keys);
libqt_string QMetaEnum_ValueToKeys(const QMetaEnum* self, int value);
const QMetaObject* QMetaEnum_EnclosingMetaObject(const QMetaEnum* self);
bool QMetaEnum_IsValid(const QMetaEnum* self);
int QMetaEnum_KeyToValue2(const QMetaEnum* self, const char* key, bool* ok);
int QMetaEnum_KeysToValue2(const QMetaEnum* self, const char* keys, bool* ok);
void QMetaEnum_Delete(QMetaEnum* self);

QMetaProperty* QMetaProperty_new(const QMetaProperty* other);
QMetaProperty* QMetaProperty_new2(QMetaProperty* other);
QMetaProperty* QMetaProperty_new3();
QMetaProperty* QMetaProperty_new4(const QMetaProperty* param1);
void QMetaProperty_CopyAssign(QMetaProperty* self, QMetaProperty* other);
void QMetaProperty_MoveAssign(QMetaProperty* self, QMetaProperty* other);
const char* QMetaProperty_Name(const QMetaProperty* self);
const char* QMetaProperty_TypeName(const QMetaProperty* self);
int QMetaProperty_Type(const QMetaProperty* self);
int QMetaProperty_UserType(const QMetaProperty* self);
int QMetaProperty_TypeId(const QMetaProperty* self);
QMetaType* QMetaProperty_MetaType(const QMetaProperty* self);
int QMetaProperty_PropertyIndex(const QMetaProperty* self);
int QMetaProperty_RelativePropertyIndex(const QMetaProperty* self);
bool QMetaProperty_IsReadable(const QMetaProperty* self);
bool QMetaProperty_IsWritable(const QMetaProperty* self);
bool QMetaProperty_IsResettable(const QMetaProperty* self);
bool QMetaProperty_IsDesignable(const QMetaProperty* self);
bool QMetaProperty_IsScriptable(const QMetaProperty* self);
bool QMetaProperty_IsStored(const QMetaProperty* self);
bool QMetaProperty_IsUser(const QMetaProperty* self);
bool QMetaProperty_IsConstant(const QMetaProperty* self);
bool QMetaProperty_IsFinal(const QMetaProperty* self);
bool QMetaProperty_IsRequired(const QMetaProperty* self);
bool QMetaProperty_IsBindable(const QMetaProperty* self);
bool QMetaProperty_IsFlagType(const QMetaProperty* self);
bool QMetaProperty_IsEnumType(const QMetaProperty* self);
QMetaEnum* QMetaProperty_Enumerator(const QMetaProperty* self);
bool QMetaProperty_HasNotifySignal(const QMetaProperty* self);
QMetaMethod* QMetaProperty_NotifySignal(const QMetaProperty* self);
int QMetaProperty_NotifySignalIndex(const QMetaProperty* self);
int QMetaProperty_Revision(const QMetaProperty* self);
QVariant* QMetaProperty_Read(const QMetaProperty* self, const QObject* obj);
bool QMetaProperty_Write(const QMetaProperty* self, QObject* obj, const QVariant* value);
bool QMetaProperty_Reset(const QMetaProperty* self, QObject* obj);
QUntypedBindable* QMetaProperty_Bindable(const QMetaProperty* self, QObject* object);
QVariant* QMetaProperty_ReadOnGadget(const QMetaProperty* self, const void* gadget);
bool QMetaProperty_WriteOnGadget(const QMetaProperty* self, void* gadget, const QVariant* value);
bool QMetaProperty_ResetOnGadget(const QMetaProperty* self, void* gadget);
bool QMetaProperty_HasStdCppSet(const QMetaProperty* self);
bool QMetaProperty_IsAlias(const QMetaProperty* self);
bool QMetaProperty_IsValid(const QMetaProperty* self);
const QMetaObject* QMetaProperty_EnclosingMetaObject(const QMetaProperty* self);
void QMetaProperty_Delete(QMetaProperty* self);

QMetaClassInfo* QMetaClassInfo_new(const QMetaClassInfo* other);
QMetaClassInfo* QMetaClassInfo_new2(QMetaClassInfo* other);
QMetaClassInfo* QMetaClassInfo_new3();
QMetaClassInfo* QMetaClassInfo_new4(const QMetaClassInfo* param1);
void QMetaClassInfo_CopyAssign(QMetaClassInfo* self, QMetaClassInfo* other);
void QMetaClassInfo_MoveAssign(QMetaClassInfo* self, QMetaClassInfo* other);
const char* QMetaClassInfo_Name(const QMetaClassInfo* self);
const char* QMetaClassInfo_Value(const QMetaClassInfo* self);
const QMetaObject* QMetaClassInfo_EnclosingMetaObject(const QMetaClassInfo* self);
void QMetaClassInfo_Delete(QMetaClassInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
