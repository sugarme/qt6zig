#include <QMetaSequence>
#include <QMetaType>
#include <QVariant>
#include <qsequentialiterable.h>
#include "libqsequentialiterable.h"
#include "libqsequentialiterable.hxx"

QVariantRef<QSequentialIterator> QSequentialIterator_OperatorMultiply(const QSequentialIterator* self) {
	return self->operator*();
}

QVariantPointer<QSequentialIterator> QSequentialIterator_OperatorMinusGreater(const QSequentialIterator* self) {
	return self->operator->();
}

void QSequentialIterator_OperatorAssign(QSequentialIterator* self, const QSequentialIterator* param1) {
	self->operator=(*param1);
}

void QSequentialIterator_Delete(QSequentialIterator* self) {
    delete self;
}

QVariant* QSequentialConstIterator_OperatorMultiply(const QSequentialConstIterator* self) {
	return new QVariant(self->operator*());
}

QVariantConstPointer* QSequentialConstIterator_OperatorMinusGreater(const QSequentialConstIterator* self) {
	return new QVariantConstPointer(self->operator->());
}

void QSequentialConstIterator_OperatorAssign(QSequentialConstIterator* self, const QSequentialConstIterator* param1) {
	self->operator=(*param1);
}

void QSequentialConstIterator_Delete(QSequentialConstIterator* self) {
    delete self;
}

QSequentialIterable* QSequentialIterable_new(const QSequentialIterable* other) {
	 return new QSequentialIterable(*other);
}

QSequentialIterable* QSequentialIterable_new2(QSequentialIterable* other) {
	 return new QSequentialIterable(*other);
}

QSequentialIterable* QSequentialIterable_new3() {
	 return new QSequentialIterable();
}

QSequentialIterable* QSequentialIterable_new4(const QMetaSequence* metaSequence, const QMetaType* metaType, void* iterable) {
	 return new QSequentialIterable(*metaSequence, *metaType, iterable);
}

QSequentialIterable* QSequentialIterable_new5(const QMetaSequence* metaSequence, const QMetaType* metaType, const void* iterable) {
	 return new QSequentialIterable(*metaSequence, *metaType, iterable);
}

QSequentialIterable* QSequentialIterable_new6(const QSequentialIterable* param1) {
	 return new QSequentialIterable(*param1);
}

void QSequentialIterable_CopyAssign(QSequentialIterable* self, QSequentialIterable* other) {
    *self = *other;
}

void QSequentialIterable_MoveAssign(QSequentialIterable* self, QSequentialIterable* other) {
    *self = std::move(*other);
}

QTaggedIterator<QSequentialConstIterator, void> QSequentialIterable_Begin(const QSequentialIterable* self) {
	return self->begin();
}

QTaggedIterator<QSequentialConstIterator, void> QSequentialIterable_End(const QSequentialIterable* self) {
	return self->end();
}

QTaggedIterator<QSequentialConstIterator, void> QSequentialIterable_ConstBegin(const QSequentialIterable* self) {
	return self->constBegin();
}

QTaggedIterator<QSequentialConstIterator, void> QSequentialIterable_ConstEnd(const QSequentialIterable* self) {
	return self->constEnd();
}

QTaggedIterator<QSequentialIterator, void> QSequentialIterable_MutableBegin(QSequentialIterable* self) {
	return self->mutableBegin();
}

QTaggedIterator<QSequentialIterator, void> QSequentialIterable_MutableEnd(QSequentialIterable* self) {
	return self->mutableEnd();
}

QVariant* QSequentialIterable_At(const QSequentialIterable* self, ptrdiff_t idx) {
	return new QVariant(self->at(idx));
}

void QSequentialIterable_Set(QSequentialIterable* self, ptrdiff_t idx, const QVariant* value) {
	self->set(idx, *value);
}

void QSequentialIterable_AddValue(QSequentialIterable* self, const QVariant* value) {
	self->addValue(*value);
}

void QSequentialIterable_RemoveValue(QSequentialIterable* self) {
	self->removeValue();
}

QMetaType* QSequentialIterable_ValueMetaType(const QSequentialIterable* self) {
	return new QMetaType(self->valueMetaType());
}

void QSequentialIterable_OperatorAssign(QSequentialIterable* self, const QSequentialIterable* param1) {
	self->operator=(*param1);
}

void QSequentialIterable_AddValue2(QSequentialIterable* self, const QVariant* value, int position) {
	self->addValue(*value, static_cast<QStyleOptionViewItem::Position>(position));
}

void QSequentialIterable_RemoveValue1(QSequentialIterable* self, int position) {
	self->removeValue(static_cast<QStyleOptionViewItem::Position>(position));
}

void QSequentialIterable_Delete(QSequentialIterable* self) {
    delete self;
}

