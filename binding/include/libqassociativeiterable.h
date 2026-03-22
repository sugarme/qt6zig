#pragma once
#ifndef QASSOCIATIVEITERABLE_H_C_LIB
#define QASSOCIATIVEITERABLE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMetaAssociation QMetaAssociation;
typedef struct QMetaType QMetaType;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QVariant* QAssociativeIterator_Key(const QAssociativeIterator* self);
QVariantRef<QAssociativeIterator> QAssociativeIterator_Value(const QAssociativeIterator* self);
QVariantRef<QAssociativeIterator> QAssociativeIterator_OperatorMultiply(const QAssociativeIterator* self);
QVariantPointer<QAssociativeIterator> QAssociativeIterator_OperatorMinusGreater(const QAssociativeIterator* self);
void QAssociativeIterator_Delete(QAssociativeIterator* self);

QVariant* QAssociativeConstIterator_Key(const QAssociativeConstIterator* self);
QVariant* QAssociativeConstIterator_Value(const QAssociativeConstIterator* self);
QVariant* QAssociativeConstIterator_OperatorMultiply(const QAssociativeConstIterator* self);
void QAssociativeConstIterator_Delete(QAssociativeConstIterator* self);

QAssociativeIterable* QAssociativeIterable_new();
QAssociativeIterable* QAssociativeIterable_new2(const QMetaAssociation* metaAssociation, const QMetaType* metaType, void* iterable);
QAssociativeIterable* QAssociativeIterable_new3(const QMetaAssociation* metaAssociation, const QMetaType* metaType, const void* iterable);
void QAssociativeIterable_CopyAssign(QAssociativeIterable* self, QAssociativeIterable* other);
void QAssociativeIterable_MoveAssign(QAssociativeIterable* self, QAssociativeIterable* other);
QTaggedIterator<QAssociativeConstIterator, void> QAssociativeIterable_Begin(const QAssociativeIterable* self);
QTaggedIterator<QAssociativeConstIterator, void> QAssociativeIterable_End(const QAssociativeIterable* self);
QTaggedIterator<QAssociativeConstIterator, void> QAssociativeIterable_ConstBegin(const QAssociativeIterable* self);
QTaggedIterator<QAssociativeConstIterator, void> QAssociativeIterable_ConstEnd(const QAssociativeIterable* self);
QTaggedIterator<QAssociativeIterator, void> QAssociativeIterable_MutableBegin(QAssociativeIterable* self);
QTaggedIterator<QAssociativeIterator, void> QAssociativeIterable_MutableEnd(QAssociativeIterable* self);
QTaggedIterator<QAssociativeConstIterator, void> QAssociativeIterable_Find(const QAssociativeIterable* self, const QVariant* key);
QTaggedIterator<QAssociativeConstIterator, void> QAssociativeIterable_ConstFind(const QAssociativeIterable* self, const QVariant* key);
QTaggedIterator<QAssociativeIterator, void> QAssociativeIterable_MutableFind(QAssociativeIterable* self, const QVariant* key);
bool QAssociativeIterable_ContainsKey(QAssociativeIterable* self, const QVariant* key);
void QAssociativeIterable_InsertKey(QAssociativeIterable* self, const QVariant* key);
void QAssociativeIterable_RemoveKey(QAssociativeIterable* self, const QVariant* key);
QVariant* QAssociativeIterable_Value(const QAssociativeIterable* self, const QVariant* key);
void QAssociativeIterable_SetValue(QAssociativeIterable* self, const QVariant* key, const QVariant* mapped);
void QAssociativeIterable_Delete(QAssociativeIterable* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
