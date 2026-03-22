#include <QDebug>
#include <QJsonArray>
#define WORKAROUND_INNER_CLASS_DEFINITION_QJsonArray__const_iterator
#define WORKAROUND_INNER_CLASS_DEFINITION_QJsonArray__iterator
#include <QJsonValue>
#include <QRect>
#include <qjsonarray.h>
#include "libqjsonarray.h"
#include "libqjsonarray.hxx"

QJsonArray* QJsonArray_new() {
	 return new QJsonArray();
}

QJsonArray* QJsonArray_new2(const QJsonArray* other) {
	 return new QJsonArray(*other);
}

void QJsonArray_OperatorAssign(QJsonArray* self, const QJsonArray* other) {
	self->operator=(*other);
}

QJsonArray* QJsonArray_FromStringList(const libqt_list list) {
	return new QJsonArray(QJsonArray::fromStringList(QList<QString>()));
}

QJsonArray* QJsonArray_FromVariantList(const libqt_list list) {
	return new QJsonArray(QJsonArray::fromVariantList(QList<QVariant>()));
}

libqt_list QJsonArray_ToVariantList(const QJsonArray* self) {
	auto _ret = self->toVariantList();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

ptrdiff_t QJsonArray_Size(const QJsonArray* self) {
	return self->size();
}

ptrdiff_t QJsonArray_Count(const QJsonArray* self) {
	return self->count();
}

bool QJsonArray_IsEmpty(const QJsonArray* self) {
	return self->isEmpty();
}

QJsonValue* QJsonArray_At(const QJsonArray* self, ptrdiff_t i) {
	return new QJsonValue(self->at(i));
}

QJsonValue* QJsonArray_First(const QJsonArray* self) {
	return new QJsonValue(self->first());
}

QJsonValue* QJsonArray_Last(const QJsonArray* self) {
	return new QJsonValue(self->last());
}

void QJsonArray_Prepend(QJsonArray* self, const QJsonValue* value) {
	self->prepend(*value);
}

void QJsonArray_Append(QJsonArray* self, const QJsonValue* value) {
	self->append(*value);
}

void QJsonArray_RemoveAt(QJsonArray* self, ptrdiff_t i) {
	self->removeAt(i);
}

QJsonValue* QJsonArray_TakeAt(QJsonArray* self, ptrdiff_t i) {
	return new QJsonValue(self->takeAt(i));
}

void QJsonArray_RemoveFirst(QJsonArray* self) {
	self->removeFirst();
}

void QJsonArray_RemoveLast(QJsonArray* self) {
	self->removeLast();
}

void QJsonArray_Insert(QJsonArray* self, ptrdiff_t i, const QJsonValue* value) {
	self->insert(i, *value);
}

void QJsonArray_Replace(QJsonArray* self, ptrdiff_t i, const QJsonValue* value) {
	self->replace(i, *value);
}

bool QJsonArray_Contains(const QJsonArray* self, const QJsonValue* element) {
	return self->contains(*element);
}

QJsonValue* QJsonArray_OperatorSubscript2(const QJsonArray* self, ptrdiff_t i) {
	return new QJsonValue(self->operator[](i));
}

void QJsonArray_Swap(QJsonArray* self, QJsonArray* other) {
	self->swap(*other);
}

It::value_type* QJsonArray_Begin(QJsonArray* self) {
	return self->begin();
}

const QRect* QJsonArray_Begin2(const QJsonArray* self) {
	return self->begin();
}

const QRect* QJsonArray_ConstBegin(const QJsonArray* self) {
	return self->constBegin();
}

const QRect* QJsonArray_Cbegin(const QJsonArray* self) {
	return self->cbegin();
}

It::value_type* QJsonArray_End(QJsonArray* self) {
	return self->end();
}

const QRect* QJsonArray_End2(const QJsonArray* self) {
	return self->end();
}

const QRect* QJsonArray_ConstEnd(const QJsonArray* self) {
	return self->constEnd();
}

const QRect* QJsonArray_Cend(const QJsonArray* self) {
	return self->cend();
}

It::value_type* QJsonArray_Insert2(QJsonArray* self, It::value_type* before, const QJsonValue* value) {
	return self->insert(before, *value);
}

It::value_type* QJsonArray_Erase(QJsonArray* self, It::value_type* it) {
	return self->erase(it);
}

QJsonArray* QJsonArray_OperatorPlus(const QJsonArray* self, const QJsonValue* v) {
	return new QJsonArray(self->operator+(*v));
}

QJsonArray* QJsonArray_OperatorPlusAssign(QJsonArray* self, const QJsonValue* v) {
	return new QJsonArray(self->operator+=(*v));
}

QJsonArray* QJsonArray_OperatorShiftLeft(QJsonArray* self, const QJsonValue* v) {
	return new QJsonArray(self->operator<<(*v));
}

void QJsonArray_PushBack(QJsonArray* self, const QJsonValue* t) {
	self->push_back(*t);
}

void QJsonArray_PushFront(QJsonArray* self, const QJsonValue* t) {
	self->push_front(*t);
}

void QJsonArray_PopFront(QJsonArray* self) {
	self->pop_front();
}

void QJsonArray_PopBack(QJsonArray* self) {
	self->pop_back();
}

bool QJsonArray_Empty(const QJsonArray* self) {
	return self->empty();
}

void QJsonArray_Delete(QJsonArray* self) {
    delete self;
}

QJsonArray__iterator* QJsonArray__iterator_new() {
	 return new QJsonArray::iterator();
}

QJsonArray__iterator* QJsonArray__iterator_new2(QJsonArray* array, ptrdiff_t index) {
	 return new QJsonArray::iterator(array, index);
}

It::value_type* QJsonArray__iterator_OperatorPlusPlus(QJsonArray__iterator* self) {
	return self->operator++();
}

It::value_type* QJsonArray__iterator_OperatorPlusPlus2(QJsonArray__iterator* self, int param1) {
	return self->operator++(param1);
}

It::value_type* QJsonArray__iterator_OperatorMinusMinus(QJsonArray__iterator* self) {
	return self->operator--();
}

It::value_type* QJsonArray__iterator_OperatorMinusMinus2(QJsonArray__iterator* self, int param1) {
	return self->operator--(param1);
}

It::value_type* QJsonArray__iterator_OperatorPlusAssign(QJsonArray__iterator* self, ptrdiff_t j) {
	return self->operator+=(j);
}

It::value_type* QJsonArray__iterator_OperatorMinusAssign(QJsonArray__iterator* self, ptrdiff_t j) {
	return self->operator-=(j);
}

It::value_type* QJsonArray__iterator_OperatorPlus(const QJsonArray__iterator* self, ptrdiff_t j) {
	return self->operator+(j);
}

It::value_type* QJsonArray__iterator_OperatorMinus(const QJsonArray__iterator* self, ptrdiff_t j) {
	return self->operator-(j);
}

void QJsonArray__iterator_Delete(QJsonArray__iterator* self) {
    delete self;
}

QJsonArray__const_iterator* QJsonArray__const_iterator_new() {
	 return new QJsonArray::const_iterator();
}

QJsonArray__const_iterator* QJsonArray__const_iterator_new2(const QJsonArray* array, ptrdiff_t index) {
	 return new QJsonArray::const_iterator(array, index);
}

QJsonArray__const_iterator* QJsonArray__const_iterator_new3(const It::value_type* o) {
	 return new QJsonArray::const_iterator(o);
}

const QRect* QJsonArray__const_iterator_OperatorPlusPlus(QJsonArray__const_iterator* self) {
	const_iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return const_cast<QRect*>(&_ret);
}

const QRect* QJsonArray__const_iterator_OperatorPlusPlus2(QJsonArray__const_iterator* self, int param1) {
	return self->operator++(param1);
}

const QRect* QJsonArray__const_iterator_OperatorMinusMinus(QJsonArray__const_iterator* self) {
	const_iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return const_cast<QRect*>(&_ret);
}

const QRect* QJsonArray__const_iterator_OperatorMinusMinus2(QJsonArray__const_iterator* self, int param1) {
	return self->operator--(param1);
}

const QRect* QJsonArray__const_iterator_OperatorPlusAssign(QJsonArray__const_iterator* self, ptrdiff_t j) {
	const_iterator& _ret = self->operator+=(j);
	// Cast returned reference into pointer
	return const_cast<QRect*>(&_ret);
}

const QRect* QJsonArray__const_iterator_OperatorMinusAssign(QJsonArray__const_iterator* self, ptrdiff_t j) {
	const_iterator& _ret = self->operator-=(j);
	// Cast returned reference into pointer
	return const_cast<QRect*>(&_ret);
}

const QRect* QJsonArray__const_iterator_OperatorPlus(const QJsonArray__const_iterator* self, ptrdiff_t j) {
	return self->operator+(j);
}

const QRect* QJsonArray__const_iterator_OperatorMinus(const QJsonArray__const_iterator* self, ptrdiff_t j) {
	return self->operator-(j);
}

void QJsonArray__const_iterator_Delete(QJsonArray__const_iterator* self) {
    delete self;
}

