#pragma once
#ifndef QSEQUENTIALITERABLE_H_C_LIB
#define QSEQUENTIALITERABLE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMetaSequence QMetaSequence;
typedef struct QMetaType QMetaType;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QVariantRef<QSequentialIterator> QSequentialIterator_OperatorMultiply(const QSequentialIterator* self);
QVariantPointer<QSequentialIterator> QSequentialIterator_OperatorMinusGreater(const QSequentialIterator* self);
void QSequentialIterator_OperatorAssign(QSequentialIterator* self, const QSequentialIterator* param1);
void QSequentialIterator_Delete(QSequentialIterator* self);

QVariant* QSequentialConstIterator_OperatorMultiply(const QSequentialConstIterator* self);
QVariantConstPointer* QSequentialConstIterator_OperatorMinusGreater(const QSequentialConstIterator* self);
void QSequentialConstIterator_OperatorAssign(QSequentialConstIterator* self, const QSequentialConstIterator* param1);
void QSequentialConstIterator_Delete(QSequentialConstIterator* self);

QSequentialIterable* QSequentialIterable_new(const QSequentialIterable* other);
QSequentialIterable* QSequentialIterable_new2(QSequentialIterable* other);
QSequentialIterable* QSequentialIterable_new3();
QSequentialIterable* QSequentialIterable_new4(const QMetaSequence* metaSequence, const QMetaType* metaType, void* iterable);
QSequentialIterable* QSequentialIterable_new5(const QMetaSequence* metaSequence, const QMetaType* metaType, const void* iterable);
QSequentialIterable* QSequentialIterable_new6(const QSequentialIterable* param1);
void QSequentialIterable_CopyAssign(QSequentialIterable* self, QSequentialIterable* other);
void QSequentialIterable_MoveAssign(QSequentialIterable* self, QSequentialIterable* other);
QTaggedIterator<QSequentialConstIterator, void> QSequentialIterable_Begin(const QSequentialIterable* self);
QTaggedIterator<QSequentialConstIterator, void> QSequentialIterable_End(const QSequentialIterable* self);
QTaggedIterator<QSequentialConstIterator, void> QSequentialIterable_ConstBegin(const QSequentialIterable* self);
QTaggedIterator<QSequentialConstIterator, void> QSequentialIterable_ConstEnd(const QSequentialIterable* self);
QTaggedIterator<QSequentialIterator, void> QSequentialIterable_MutableBegin(QSequentialIterable* self);
QTaggedIterator<QSequentialIterator, void> QSequentialIterable_MutableEnd(QSequentialIterable* self);
QVariant* QSequentialIterable_At(const QSequentialIterable* self, ptrdiff_t idx);
void QSequentialIterable_Set(QSequentialIterable* self, ptrdiff_t idx, const QVariant* value);
void QSequentialIterable_AddValue(QSequentialIterable* self, const QVariant* value);
void QSequentialIterable_RemoveValue(QSequentialIterable* self);
QMetaType* QSequentialIterable_ValueMetaType(const QSequentialIterable* self);
void QSequentialIterable_OperatorAssign(QSequentialIterable* self, const QSequentialIterable* param1);
void QSequentialIterable_AddValue2(QSequentialIterable* self, const QVariant* value, int position);
void QSequentialIterable_RemoveValue1(QSequentialIterable* self, int position);
void QSequentialIterable_Delete(QSequentialIterable* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
