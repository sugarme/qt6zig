#pragma once
#ifndef QJSONOBJECT_H_C_LIB
#define QJSONOBJECT_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QJsonObject__const_iterator)
typedef QJsonObject::const_iterator QJsonObject__const_iterator;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QJsonObject__iterator)
typedef QJsonObject::iterator QJsonObject__iterator;
#endif
#else
typedef struct QDebug QDebug;
typedef struct QJsonObject QJsonObject;
typedef struct QJsonObject__const_iterator QJsonObject__const_iterator;
typedef struct QJsonObject__iterator QJsonObject__iterator;
typedef struct QJsonValue QJsonValue;
typedef struct QRect QRect;
typedef struct QStringView QStringView;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QJsonObject* QJsonObject_new();
QJsonObject* QJsonObject_new2(const QJsonObject* other);
void QJsonObject_OperatorAssign(QJsonObject* self, const QJsonObject* other);
void QJsonObject_Swap(QJsonObject* self, QJsonObject* other);
QJsonObject* QJsonObject_FromVariantMap(const libqt_map mapVal);
libqt_map QJsonObject_ToVariantMap(const QJsonObject* self);
QJsonObject* QJsonObject_FromVariantHash(const libqt_map mapVal);
libqt_map QJsonObject_ToVariantHash(const QJsonObject* self);
libqt_list QJsonObject_Keys(const QJsonObject* self);
ptrdiff_t QJsonObject_Size(const QJsonObject* self);
ptrdiff_t QJsonObject_Count(const QJsonObject* self);
ptrdiff_t QJsonObject_Length(const QJsonObject* self);
bool QJsonObject_IsEmpty(const QJsonObject* self);
QJsonValue* QJsonObject_Value(const QJsonObject* self, const libqt_string key);
QJsonValue* QJsonObject_OperatorSubscript(const QJsonObject* self, const libqt_string key);
QJsonValue* QJsonObject_Value2(const QJsonObject* self, QStringView* key);
QJsonValue* QJsonObject_Value3(const QJsonObject* self, QLatin1StringView key);
QJsonValue* QJsonObject_OperatorSubscript3(const QJsonObject* self, QStringView* key);
QJsonValue* QJsonObject_OperatorSubscript4(const QJsonObject* self, QLatin1StringView key);
void QJsonObject_Remove(QJsonObject* self, const libqt_string key);
QJsonValue* QJsonObject_Take(QJsonObject* self, const libqt_string key);
bool QJsonObject_Contains(const QJsonObject* self, const libqt_string key);
void QJsonObject_Remove2(QJsonObject* self, QStringView* key);
void QJsonObject_Remove3(QJsonObject* self, QLatin1StringView key);
QJsonValue* QJsonObject_Take2(QJsonObject* self, QStringView* key);
QJsonValue* QJsonObject_Take3(QJsonObject* self, QLatin1StringView key);
bool QJsonObject_Contains2(const QJsonObject* self, QStringView* key);
bool QJsonObject_Contains3(const QJsonObject* self, QLatin1StringView key);
It::value_type* QJsonObject_Begin(QJsonObject* self);
const QRect* QJsonObject_Begin2(const QJsonObject* self);
const QRect* QJsonObject_ConstBegin(const QJsonObject* self);
It::value_type* QJsonObject_End(QJsonObject* self);
const QRect* QJsonObject_End2(const QJsonObject* self);
const QRect* QJsonObject_ConstEnd(const QJsonObject* self);
It::value_type* QJsonObject_Erase(QJsonObject* self, It::value_type* it);
It::value_type* QJsonObject_Find(QJsonObject* self, const libqt_string key);
const QRect* QJsonObject_Find2(const QJsonObject* self, const libqt_string key);
const QRect* QJsonObject_ConstFind(const QJsonObject* self, const libqt_string key);
It::value_type* QJsonObject_Insert(QJsonObject* self, const libqt_string key, const QJsonValue* value);
It::value_type* QJsonObject_Find3(QJsonObject* self, QStringView* key);
It::value_type* QJsonObject_Find4(QJsonObject* self, QLatin1StringView key);
const QRect* QJsonObject_Find5(const QJsonObject* self, QStringView* key);
const QRect* QJsonObject_Find6(const QJsonObject* self, QLatin1StringView key);
const QRect* QJsonObject_ConstFind2(const QJsonObject* self, QStringView* key);
const QRect* QJsonObject_ConstFind3(const QJsonObject* self, QLatin1StringView key);
It::value_type* QJsonObject_Insert2(QJsonObject* self, QStringView* key, const QJsonValue* value);
It::value_type* QJsonObject_Insert3(QJsonObject* self, QLatin1StringView key, const QJsonValue* value);
bool QJsonObject_Empty(const QJsonObject* self);
void QJsonObject_Delete(QJsonObject* self);

QJsonObject__iterator* QJsonObject__iterator_new(const QJsonObject__iterator* other);
QJsonObject__iterator* QJsonObject__iterator_new2();
QJsonObject__iterator* QJsonObject__iterator_new3(QJsonObject* obj, ptrdiff_t index);
QJsonObject__iterator* QJsonObject__iterator_new4(const QJsonObject__iterator* other);
void QJsonObject__iterator_OperatorAssign(QJsonObject__iterator* self, const QJsonObject__iterator* other);
libqt_string QJsonObject__iterator_Key(const QJsonObject__iterator* self);
It::value_type* QJsonObject__iterator_OperatorPlusPlus(QJsonObject__iterator* self);
It::value_type* QJsonObject__iterator_OperatorPlusPlus2(QJsonObject__iterator* self, int param1);
It::value_type* QJsonObject__iterator_OperatorMinusMinus(QJsonObject__iterator* self);
It::value_type* QJsonObject__iterator_OperatorMinusMinus2(QJsonObject__iterator* self, int param1);
It::value_type* QJsonObject__iterator_OperatorPlus(const QJsonObject__iterator* self, ptrdiff_t j);
It::value_type* QJsonObject__iterator_OperatorMinus(const QJsonObject__iterator* self, ptrdiff_t j);
It::value_type* QJsonObject__iterator_OperatorPlusAssign(QJsonObject__iterator* self, ptrdiff_t j);
It::value_type* QJsonObject__iterator_OperatorMinusAssign(QJsonObject__iterator* self, ptrdiff_t j);
ptrdiff_t QJsonObject__iterator_OperatorMinus2(const QJsonObject__iterator* self, QJsonObject__iterator* j);
void QJsonObject__iterator_Delete(QJsonObject__iterator* self);

QJsonObject__const_iterator* QJsonObject__const_iterator_new(const QJsonObject__const_iterator* other);
QJsonObject__const_iterator* QJsonObject__const_iterator_new2();
QJsonObject__const_iterator* QJsonObject__const_iterator_new3(const QJsonObject* obj, ptrdiff_t index);
QJsonObject__const_iterator* QJsonObject__const_iterator_new4(const It::value_type* other);
QJsonObject__const_iterator* QJsonObject__const_iterator_new5(const QJsonObject__const_iterator* other);
void QJsonObject__const_iterator_OperatorAssign(QJsonObject__const_iterator* self, const QJsonObject__const_iterator* other);
libqt_string QJsonObject__const_iterator_Key(const QJsonObject__const_iterator* self);
const QRect* QJsonObject__const_iterator_OperatorPlusPlus(QJsonObject__const_iterator* self);
const QRect* QJsonObject__const_iterator_OperatorPlusPlus2(QJsonObject__const_iterator* self, int param1);
const QRect* QJsonObject__const_iterator_OperatorMinusMinus(QJsonObject__const_iterator* self);
const QRect* QJsonObject__const_iterator_OperatorMinusMinus2(QJsonObject__const_iterator* self, int param1);
const QRect* QJsonObject__const_iterator_OperatorPlus(const QJsonObject__const_iterator* self, ptrdiff_t j);
const QRect* QJsonObject__const_iterator_OperatorMinus(const QJsonObject__const_iterator* self, ptrdiff_t j);
const QRect* QJsonObject__const_iterator_OperatorPlusAssign(QJsonObject__const_iterator* self, ptrdiff_t j);
const QRect* QJsonObject__const_iterator_OperatorMinusAssign(QJsonObject__const_iterator* self, ptrdiff_t j);
ptrdiff_t QJsonObject__const_iterator_OperatorMinus2(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* j);
void QJsonObject__const_iterator_Delete(QJsonObject__const_iterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
