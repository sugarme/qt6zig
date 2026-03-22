#pragma once
#ifndef QOBJECTDEFS_H_C_LIB
#define QOBJECTDEFS_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Data)
typedef QMetaObject::Data QMetaObject__Data;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__SuperData)
typedef QMetaObject::SuperData QMetaObject__SuperData;
#endif
#else
typedef struct QGenericArgument QGenericArgument;
typedef struct QGenericReturnArgument QGenericReturnArgument;
typedef struct QMetaClassInfo QMetaClassInfo;
typedef struct QMetaEnum QMetaEnum;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaMethodArgument QMetaMethodArgument;
typedef struct QMetaMethodReturnArgument QMetaMethodReturnArgument;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QMetaObject__Data QMetaObject__Data;
typedef struct QMetaObject__SuperData QMetaObject__SuperData;
typedef struct QMetaProperty QMetaProperty;
typedef struct QMetaType QMetaType;
typedef struct QMethodRawArguments QMethodRawArguments;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QGenericArgument* QGenericArgument_new();
QGenericArgument* QGenericArgument_new2(const char* aName);
QGenericArgument* QGenericArgument_new3(const char* aName, const void* aData);
void QGenericArgument_CopyAssign(QGenericArgument* self, QGenericArgument* other);
void QGenericArgument_MoveAssign(QGenericArgument* self, QGenericArgument* other);
void* QGenericArgument_Data(const QGenericArgument* self);
const char* QGenericArgument_Name(const QGenericArgument* self);
void QGenericArgument_Delete(QGenericArgument* self);

QGenericReturnArgument* QGenericReturnArgument_new();
QGenericReturnArgument* QGenericReturnArgument_new2(const char* aName);
QGenericReturnArgument* QGenericReturnArgument_new3(const char* aName, void* aData);
void QGenericReturnArgument_CopyAssign(QGenericReturnArgument* self, QGenericReturnArgument* other);
void QGenericReturnArgument_MoveAssign(QGenericReturnArgument* self, QGenericReturnArgument* other);
void QGenericReturnArgument_Delete(QGenericReturnArgument* self);

const QtPrivate__QMetaTypeInterface* QMetaMethodArgument_MetaType(const QMetaMethodArgument* self);
void QMetaMethodArgument_SetMetaType(QMetaMethodArgument* self, const QtPrivate__QMetaTypeInterface* metaType);
const char* QMetaMethodArgument_Name(const QMetaMethodArgument* self);
void QMetaMethodArgument_SetName(QMetaMethodArgument* self, const char* name);
void QMetaMethodArgument_Delete(QMetaMethodArgument* self);

const QtPrivate__QMetaTypeInterface* QMetaMethodReturnArgument_MetaType(const QMetaMethodReturnArgument* self);
void QMetaMethodReturnArgument_SetMetaType(QMetaMethodReturnArgument* self, const QtPrivate__QMetaTypeInterface* metaType);
const char* QMetaMethodReturnArgument_Name(const QMetaMethodReturnArgument* self);
void QMetaMethodReturnArgument_SetName(QMetaMethodReturnArgument* self, const char* name);
void QMetaMethodReturnArgument_Delete(QMetaMethodReturnArgument* self);

QMetaObject* QMetaObject_new();
QMetaObject* QMetaObject_new2(const QMetaObject* param1);
const char* QMetaObject_ClassName(const QMetaObject* self);
const QMetaObject* QMetaObject_SuperClass(const QMetaObject* self);
bool QMetaObject_Inherits(const QMetaObject* self, const QMetaObject* metaObject);
QObject* QMetaObject_Cast(const QMetaObject* self, QObject* obj);
const QObject* QMetaObject_Cast2(const QMetaObject* self, const QObject* obj);
libqt_string QMetaObject_Tr(const QMetaObject* self, const char* s, const char* c);
QMetaType* QMetaObject_MetaType(const QMetaObject* self);
int QMetaObject_MethodOffset(const QMetaObject* self);
int QMetaObject_EnumeratorOffset(const QMetaObject* self);
int QMetaObject_PropertyOffset(const QMetaObject* self);
int QMetaObject_ClassInfoOffset(const QMetaObject* self);
int QMetaObject_ConstructorCount(const QMetaObject* self);
int QMetaObject_MethodCount(const QMetaObject* self);
int QMetaObject_EnumeratorCount(const QMetaObject* self);
int QMetaObject_PropertyCount(const QMetaObject* self);
int QMetaObject_ClassInfoCount(const QMetaObject* self);
int QMetaObject_IndexOfConstructor(const QMetaObject* self, const char* constructor);
int QMetaObject_IndexOfMethod(const QMetaObject* self, const char* method);
int QMetaObject_IndexOfSignal(const QMetaObject* self, const char* signal);
int QMetaObject_IndexOfSlot(const QMetaObject* self, const char* slot);
int QMetaObject_IndexOfEnumerator(const QMetaObject* self, const char* name);
int QMetaObject_IndexOfProperty(const QMetaObject* self, const char* name);
int QMetaObject_IndexOfClassInfo(const QMetaObject* self, const char* name);
QMetaMethod* QMetaObject_Constructor(const QMetaObject* self, int index);
QMetaMethod* QMetaObject_Method(const QMetaObject* self, int index);
QMetaEnum* QMetaObject_Enumerator(const QMetaObject* self, int index);
QMetaProperty* QMetaObject_Property(const QMetaObject* self, int index);
QMetaClassInfo* QMetaObject_ClassInfo(const QMetaObject* self, int index);
QMetaProperty* QMetaObject_UserProperty(const QMetaObject* self);
bool QMetaObject_CheckConnectArgs(const char* signal, const char* method);
bool QMetaObject_CheckConnectArgs2(const QMetaMethod* signal, const QMetaMethod* method);
libqt_string QMetaObject_NormalizedSignature(const char* method);
libqt_string QMetaObject_NormalizedType(const char* typeVal);
bool QMetaObject_Disconnect(const QObject* sender, int signal_index, const QObject* receiver, int method_index);
bool QMetaObject_DisconnectOne(const QObject* sender, int signal_index, const QObject* receiver, int method_index);
void QMetaObject_ConnectSlotsByName(QObject* o);
void QMetaObject_Activate(QObject* sender, int signal_index, void** argv);
void QMetaObject_Activate2(QObject* sender, const QMetaObject* param2, int local_signal_index, void** argv);
void QMetaObject_Activate3(QObject* sender, int signal_offset, int local_signal_index, void** argv);
int QMetaObject_StaticMetacall(const QMetaObject* self, int param1, int param2, void** param3);
int QMetaObject_Metacall(QObject* param1, int param2, int param3, void** param4);
QMetaObject__Data* QMetaObject_D(const QMetaObject* self);
void QMetaObject_SetD(QMetaObject* self, QMetaObject__Data* d);
libqt_string QMetaObject_Tr3(const QMetaObject* self, const char* s, const char* c, int n);
void QMetaObject_Delete(QMetaObject* self);

QMetaObject__Connection* QMetaObject__Connection_new();
void Connection::**** QMetaObject__Connection_OperatorvoidMultiplyConnection__Multiply(const QMetaObject__Connection* self);
void QMetaObject__Connection_Delete(QMetaObject__Connection* self);

QMetaObject__SuperData* QMetaObject__SuperData_new();
QMetaObject__SuperData* QMetaObject__SuperData_new2(const QMetaObject* mo);
QMetaObject__SuperData* QMetaObject__SuperData_new3(const QMetaObject__SuperData* param1);
const QMetaObject* QMetaObject__SuperData_Direct(const QMetaObject__SuperData* self);
void QMetaObject__SuperData_SetDirect(QMetaObject__SuperData* self, const QMetaObject* direct);
const QMetaObject* QMetaObject__SuperData_OperatorMinusGreater(const QMetaObject__SuperData* self);
const QMetaObject* QMetaObject__SuperData_OperatorconstQMetaObjectMultiply(const QMetaObject__SuperData* self);
void QMetaObject__SuperData_OperatorAssign(QMetaObject__SuperData* self, const QMetaObject__SuperData* param1);
void QMetaObject__SuperData_Delete(QMetaObject__SuperData* self);

QMetaObject__Data* QMetaObject__Data_new();
QMetaObject__Data* QMetaObject__Data_new2(const QMetaObject__Data* param1);
QMetaObject__SuperData* QMetaObject__Data_Superdata(const QMetaObject__Data* self);
void QMetaObject__Data_SetSuperdata(QMetaObject__Data* self, QMetaObject__SuperData* superdata);
const unsigned int* QMetaObject__Data_Stringdata(const QMetaObject__Data* self);
void QMetaObject__Data_SetStringdata(QMetaObject__Data* self, const unsigned int* stringdata);
const unsigned int* QMetaObject__Data_Data(const QMetaObject__Data* self);
void QMetaObject__Data_SetData(QMetaObject__Data* self, const unsigned int* data);
const QMetaObject__SuperData* QMetaObject__Data_RelatedMetaObjects(const QMetaObject__Data* self);
void QMetaObject__Data_SetRelatedMetaObjects(QMetaObject__Data* self, const QMetaObject__SuperData* relatedMetaObjects);
const QtPrivate__QMetaTypeInterface** QMetaObject__Data_MetaTypes(const QMetaObject__Data* self);
void QMetaObject__Data_SetMetaTypes(QMetaObject__Data* self, const QtPrivate__QMetaTypeInterface** metaTypes);
void QMetaObject__Data_OperatorAssign(QMetaObject__Data* self, const QMetaObject__Data* param1);
void QMetaObject__Data_Delete(QMetaObject__Data* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
