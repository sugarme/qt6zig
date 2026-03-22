#include <QMetaAssociation>
#include <QMetaType>
#include <QVariant>
#include <qassociativeiterable.h>
#include "libqassociativeiterable.h"
#include "libqassociativeiterable.hxx"

QVariant* QAssociativeIterator_Key(const QAssociativeIterator* self) {
	return new QVariant(self->key());
}

QVariantRef<QAssociativeIterator> QAssociativeIterator_Value(const QAssociativeIterator* self) {
	return self->value();
}

QVariantRef<QAssociativeIterator> QAssociativeIterator_OperatorMultiply(const QAssociativeIterator* self) {
	return self->operator*();
}

QVariantPointer<QAssociativeIterator> QAssociativeIterator_OperatorMinusGreater(const QAssociativeIterator* self) {
	return self->operator->();
}

void QAssociativeIterator_Delete(QAssociativeIterator* self) {
    delete self;
}

QVariant* QAssociativeConstIterator_Key(const QAssociativeConstIterator* self) {
	return new QVariant(self->key());
}

QVariant* QAssociativeConstIterator_Value(const QAssociativeConstIterator* self) {
	return new QVariant(self->value());
}

QVariant* QAssociativeConstIterator_OperatorMultiply(const QAssociativeConstIterator* self) {
	return new QVariant(self->operator*());
}

void QAssociativeConstIterator_Delete(QAssociativeConstIterator* self) {
    delete self;
}

QAssociativeIterable* QAssociativeIterable_new() {
	 return new QAssociativeIterable();
}

QAssociativeIterable* QAssociativeIterable_new2(const QMetaAssociation* metaAssociation, const QMetaType* metaType, void* iterable) {
	 return new QAssociativeIterable(*metaAssociation, *metaType, iterable);
}

QAssociativeIterable* QAssociativeIterable_new3(const QMetaAssociation* metaAssociation, const QMetaType* metaType, const void* iterable) {
	 return new QAssociativeIterable(*metaAssociation, *metaType, iterable);
}

void QAssociativeIterable_CopyAssign(QAssociativeIterable* self, QAssociativeIterable* other) {
    *self = *other;
}

void QAssociativeIterable_MoveAssign(QAssociativeIterable* self, QAssociativeIterable* other) {
    *self = std::move(*other);
}

QTaggedIterator<QAssociativeConstIterator, void> QAssociativeIterable_Begin(const QAssociativeIterable* self) {
	return self->begin();
}

QTaggedIterator<QAssociativeConstIterator, void> QAssociativeIterable_End(const QAssociativeIterable* self) {
	return self->end();
}

QTaggedIterator<QAssociativeConstIterator, void> QAssociativeIterable_ConstBegin(const QAssociativeIterable* self) {
	return self->constBegin();
}

QTaggedIterator<QAssociativeConstIterator, void> QAssociativeIterable_ConstEnd(const QAssociativeIterable* self) {
	return self->constEnd();
}

QTaggedIterator<QAssociativeIterator, void> QAssociativeIterable_MutableBegin(QAssociativeIterable* self) {
	return self->mutableBegin();
}

QTaggedIterator<QAssociativeIterator, void> QAssociativeIterable_MutableEnd(QAssociativeIterable* self) {
	return self->mutableEnd();
}

QTaggedIterator<QAssociativeConstIterator, void> QAssociativeIterable_Find(const QAssociativeIterable* self, const QVariant* key) {
	return self->find(*key);
}

QTaggedIterator<QAssociativeConstIterator, void> QAssociativeIterable_ConstFind(const QAssociativeIterable* self, const QVariant* key) {
	return self->constFind(*key);
}

QTaggedIterator<QAssociativeIterator, void> QAssociativeIterable_MutableFind(QAssociativeIterable* self, const QVariant* key) {
	return self->mutableFind(*key);
}

bool QAssociativeIterable_ContainsKey(QAssociativeIterable* self, const QVariant* key) {
	return self->containsKey(*key);
}

void QAssociativeIterable_InsertKey(QAssociativeIterable* self, const QVariant* key) {
	self->insertKey(*key);
}

void QAssociativeIterable_RemoveKey(QAssociativeIterable* self, const QVariant* key) {
	self->removeKey(*key);
}

QVariant* QAssociativeIterable_Value(const QAssociativeIterable* self, const QVariant* key) {
	return new QVariant(self->value(*key));
}

void QAssociativeIterable_SetValue(QAssociativeIterable* self, const QVariant* key, const QVariant* mapped) {
	self->setValue(*key, *mapped);
}

void QAssociativeIterable_Delete(QAssociativeIterable* self) {
    delete self;
}

