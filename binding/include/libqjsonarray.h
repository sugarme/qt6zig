#pragma once
#ifndef QJSONARRAY_H_C_LIB
#define QJSONARRAY_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QJsonArray__const_iterator)
typedef QJsonArray::const_iterator QJsonArray__const_iterator;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QJsonArray__iterator)
typedef QJsonArray::iterator QJsonArray__iterator;
#endif
#else
typedef struct QDebug QDebug;
typedef struct QJsonArray QJsonArray;
typedef struct QJsonArray__const_iterator QJsonArray__const_iterator;
typedef struct QJsonArray__iterator QJsonArray__iterator;
typedef struct QJsonValue QJsonValue;
typedef struct QRect QRect;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QJsonArray* QJsonArray_new();
QJsonArray* QJsonArray_new2(const QJsonArray* other);
void QJsonArray_OperatorAssign(QJsonArray* self, const QJsonArray* other);
QJsonArray* QJsonArray_FromStringList(const libqt_list list);
QJsonArray* QJsonArray_FromVariantList(const libqt_list list);
libqt_list QJsonArray_ToVariantList(const QJsonArray* self);
ptrdiff_t QJsonArray_Size(const QJsonArray* self);
ptrdiff_t QJsonArray_Count(const QJsonArray* self);
bool QJsonArray_IsEmpty(const QJsonArray* self);
QJsonValue* QJsonArray_At(const QJsonArray* self, ptrdiff_t i);
QJsonValue* QJsonArray_First(const QJsonArray* self);
QJsonValue* QJsonArray_Last(const QJsonArray* self);
void QJsonArray_Prepend(QJsonArray* self, const QJsonValue* value);
void QJsonArray_Append(QJsonArray* self, const QJsonValue* value);
void QJsonArray_RemoveAt(QJsonArray* self, ptrdiff_t i);
QJsonValue* QJsonArray_TakeAt(QJsonArray* self, ptrdiff_t i);
void QJsonArray_RemoveFirst(QJsonArray* self);
void QJsonArray_RemoveLast(QJsonArray* self);
void QJsonArray_Insert(QJsonArray* self, ptrdiff_t i, const QJsonValue* value);
void QJsonArray_Replace(QJsonArray* self, ptrdiff_t i, const QJsonValue* value);
bool QJsonArray_Contains(const QJsonArray* self, const QJsonValue* element);
QJsonValue* QJsonArray_OperatorSubscript2(const QJsonArray* self, ptrdiff_t i);
void QJsonArray_Swap(QJsonArray* self, QJsonArray* other);
It::value_type* QJsonArray_Begin(QJsonArray* self);
const QRect* QJsonArray_Begin2(const QJsonArray* self);
const QRect* QJsonArray_ConstBegin(const QJsonArray* self);
const QRect* QJsonArray_Cbegin(const QJsonArray* self);
It::value_type* QJsonArray_End(QJsonArray* self);
const QRect* QJsonArray_End2(const QJsonArray* self);
const QRect* QJsonArray_ConstEnd(const QJsonArray* self);
const QRect* QJsonArray_Cend(const QJsonArray* self);
It::value_type* QJsonArray_Insert2(QJsonArray* self, It::value_type* before, const QJsonValue* value);
It::value_type* QJsonArray_Erase(QJsonArray* self, It::value_type* it);
QJsonArray* QJsonArray_OperatorPlus(const QJsonArray* self, const QJsonValue* v);
QJsonArray* QJsonArray_OperatorPlusAssign(QJsonArray* self, const QJsonValue* v);
QJsonArray* QJsonArray_OperatorShiftLeft(QJsonArray* self, const QJsonValue* v);
void QJsonArray_PushBack(QJsonArray* self, const QJsonValue* t);
void QJsonArray_PushFront(QJsonArray* self, const QJsonValue* t);
void QJsonArray_PopFront(QJsonArray* self);
void QJsonArray_PopBack(QJsonArray* self);
bool QJsonArray_Empty(const QJsonArray* self);
void QJsonArray_Delete(QJsonArray* self);

QJsonArray__iterator* QJsonArray__iterator_new();
QJsonArray__iterator* QJsonArray__iterator_new2(QJsonArray* array, ptrdiff_t index);
It::value_type* QJsonArray__iterator_OperatorPlusPlus(QJsonArray__iterator* self);
It::value_type* QJsonArray__iterator_OperatorPlusPlus2(QJsonArray__iterator* self, int param1);
It::value_type* QJsonArray__iterator_OperatorMinusMinus(QJsonArray__iterator* self);
It::value_type* QJsonArray__iterator_OperatorMinusMinus2(QJsonArray__iterator* self, int param1);
It::value_type* QJsonArray__iterator_OperatorPlusAssign(QJsonArray__iterator* self, ptrdiff_t j);
It::value_type* QJsonArray__iterator_OperatorMinusAssign(QJsonArray__iterator* self, ptrdiff_t j);
It::value_type* QJsonArray__iterator_OperatorPlus(const QJsonArray__iterator* self, ptrdiff_t j);
It::value_type* QJsonArray__iterator_OperatorMinus(const QJsonArray__iterator* self, ptrdiff_t j);
void QJsonArray__iterator_Delete(QJsonArray__iterator* self);

QJsonArray__const_iterator* QJsonArray__const_iterator_new();
QJsonArray__const_iterator* QJsonArray__const_iterator_new2(const QJsonArray* array, ptrdiff_t index);
QJsonArray__const_iterator* QJsonArray__const_iterator_new3(const It::value_type* o);
const QRect* QJsonArray__const_iterator_OperatorPlusPlus(QJsonArray__const_iterator* self);
const QRect* QJsonArray__const_iterator_OperatorPlusPlus2(QJsonArray__const_iterator* self, int param1);
const QRect* QJsonArray__const_iterator_OperatorMinusMinus(QJsonArray__const_iterator* self);
const QRect* QJsonArray__const_iterator_OperatorMinusMinus2(QJsonArray__const_iterator* self, int param1);
const QRect* QJsonArray__const_iterator_OperatorPlusAssign(QJsonArray__const_iterator* self, ptrdiff_t j);
const QRect* QJsonArray__const_iterator_OperatorMinusAssign(QJsonArray__const_iterator* self, ptrdiff_t j);
const QRect* QJsonArray__const_iterator_OperatorPlus(const QJsonArray__const_iterator* self, ptrdiff_t j);
const QRect* QJsonArray__const_iterator_OperatorMinus(const QJsonArray__const_iterator* self, ptrdiff_t j);
void QJsonArray__const_iterator_Delete(QJsonArray__const_iterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
