#include <QDebug>
#include <QJsonObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QJsonObject__const_iterator
#define WORKAROUND_INNER_CLASS_DEFINITION_QJsonObject__iterator
#include <QJsonValue>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStringView>
#include <qjsonobject.h>
#include "libqjsonobject.h"
#include "libqjsonobject.hxx"

QJsonObject* QJsonObject_new() {
	 return new QJsonObject();
}

QJsonObject* QJsonObject_new2(const QJsonObject* other) {
	 return new QJsonObject(*other);
}

void QJsonObject_OperatorAssign(QJsonObject* self, const QJsonObject* other) {
	self->operator=(*other);
}

void QJsonObject_Swap(QJsonObject* self, QJsonObject* other) {
	self->swap(*other);
}

QJsonObject* QJsonObject_FromVariantMap(const libqt_map mapVal) {
	return new QJsonObject(QJsonObject::fromVariantMap(*mapVal));
}

libqt_map QJsonObject_ToVariantMap(const QJsonObject* self) {
	return self->toVariantMap();
}

QJsonObject* QJsonObject_FromVariantHash(const libqt_map mapVal) {
	return new QJsonObject(QJsonObject::fromVariantHash(*mapVal));
}

libqt_map QJsonObject_ToVariantHash(const QJsonObject* self) {
	return self->toVariantHash();
}

libqt_list QJsonObject_Keys(const QJsonObject* self) {
	return self->keys();
}

ptrdiff_t QJsonObject_Size(const QJsonObject* self) {
	return self->size();
}

ptrdiff_t QJsonObject_Count(const QJsonObject* self) {
	return self->count();
}

ptrdiff_t QJsonObject_Length(const QJsonObject* self) {
	return self->length();
}

bool QJsonObject_IsEmpty(const QJsonObject* self) {
	return self->isEmpty();
}

QJsonValue* QJsonObject_Value(const QJsonObject* self, const libqt_string key) {
	return new QJsonValue(self->value(QString::fromUtf8(key.data, key.len)));
}

QJsonValue* QJsonObject_OperatorSubscript(const QJsonObject* self, const libqt_string key) {
	return new QJsonValue(self->operator[](QString::fromUtf8(key.data, key.len)));
}

QJsonValue* QJsonObject_Value2(const QJsonObject* self, QStringView* key) {
	return new QJsonValue(self->value(*key));
}

QJsonValue* QJsonObject_Value3(const QJsonObject* self, QLatin1StringView key) {
	return new QJsonValue(self->value(key));
}

QJsonValue* QJsonObject_OperatorSubscript3(const QJsonObject* self, QStringView* key) {
	return new QJsonValue(self->operator[](*key));
}

QJsonValue* QJsonObject_OperatorSubscript4(const QJsonObject* self, QLatin1StringView key) {
	return new QJsonValue(self->operator[](key));
}

void QJsonObject_Remove(QJsonObject* self, const libqt_string key) {
	self->remove(QString::fromUtf8(key.data, key.len));
}

QJsonValue* QJsonObject_Take(QJsonObject* self, const libqt_string key) {
	return new QJsonValue(self->take(QString::fromUtf8(key.data, key.len)));
}

bool QJsonObject_Contains(const QJsonObject* self, const libqt_string key) {
	return self->contains(QString::fromUtf8(key.data, key.len));
}

void QJsonObject_Remove2(QJsonObject* self, QStringView* key) {
	self->remove(*key);
}

void QJsonObject_Remove3(QJsonObject* self, QLatin1StringView key) {
	self->remove(key);
}

QJsonValue* QJsonObject_Take2(QJsonObject* self, QStringView* key) {
	return new QJsonValue(self->take(*key));
}

QJsonValue* QJsonObject_Take3(QJsonObject* self, QLatin1StringView key) {
	return new QJsonValue(self->take(key));
}

bool QJsonObject_Contains2(const QJsonObject* self, QStringView* key) {
	return self->contains(*key);
}

bool QJsonObject_Contains3(const QJsonObject* self, QLatin1StringView key) {
	return self->contains(key);
}

It::value_type* QJsonObject_Begin(QJsonObject* self) {
	return self->begin();
}

const QRect* QJsonObject_Begin2(const QJsonObject* self) {
	return self->begin();
}

const QRect* QJsonObject_ConstBegin(const QJsonObject* self) {
	return self->constBegin();
}

It::value_type* QJsonObject_End(QJsonObject* self) {
	return self->end();
}

const QRect* QJsonObject_End2(const QJsonObject* self) {
	return self->end();
}

const QRect* QJsonObject_ConstEnd(const QJsonObject* self) {
	return self->constEnd();
}

It::value_type* QJsonObject_Erase(QJsonObject* self, It::value_type* it) {
	return self->erase(it);
}

It::value_type* QJsonObject_Find(QJsonObject* self, const libqt_string key) {
	return self->find(QString::fromUtf8(key.data, key.len));
}

const QRect* QJsonObject_Find2(const QJsonObject* self, const libqt_string key) {
	return self->find(QString::fromUtf8(key.data, key.len));
}

const QRect* QJsonObject_ConstFind(const QJsonObject* self, const libqt_string key) {
	return self->constFind(QString::fromUtf8(key.data, key.len));
}

It::value_type* QJsonObject_Insert(QJsonObject* self, const libqt_string key, const QJsonValue* value) {
	return self->insert(QString::fromUtf8(key.data, key.len), *value);
}

It::value_type* QJsonObject_Find3(QJsonObject* self, QStringView* key) {
	return self->find(*key);
}

It::value_type* QJsonObject_Find4(QJsonObject* self, QLatin1StringView key) {
	return self->find(key);
}

const QRect* QJsonObject_Find5(const QJsonObject* self, QStringView* key) {
	return self->find(*key);
}

const QRect* QJsonObject_Find6(const QJsonObject* self, QLatin1StringView key) {
	return self->find(key);
}

const QRect* QJsonObject_ConstFind2(const QJsonObject* self, QStringView* key) {
	return self->constFind(*key);
}

const QRect* QJsonObject_ConstFind3(const QJsonObject* self, QLatin1StringView key) {
	return self->constFind(key);
}

It::value_type* QJsonObject_Insert2(QJsonObject* self, QStringView* key, const QJsonValue* value) {
	return self->insert(*key, *value);
}

It::value_type* QJsonObject_Insert3(QJsonObject* self, QLatin1StringView key, const QJsonValue* value) {
	return self->insert(key, *value);
}

bool QJsonObject_Empty(const QJsonObject* self) {
	return self->empty();
}

void QJsonObject_Delete(QJsonObject* self) {
    delete self;
}

QJsonObject__iterator* QJsonObject__iterator_new(const QJsonObject__iterator* other) {
	 return new QJsonObject::iterator(*other);
}

QJsonObject__iterator* QJsonObject__iterator_new2() {
	 return new QJsonObject::iterator();
}

QJsonObject__iterator* QJsonObject__iterator_new3(QJsonObject* obj, ptrdiff_t index) {
	 return new QJsonObject::iterator(obj, index);
}

QJsonObject__iterator* QJsonObject__iterator_new4(const QJsonObject__iterator* other) {
	 return new QJsonObject::iterator(*other);
}

void QJsonObject__iterator_OperatorAssign(QJsonObject__iterator* self, const QJsonObject__iterator* other) {
	self->operator=(*other);
}

libqt_string QJsonObject__iterator_Key(const QJsonObject__iterator* self) {
	QString _ret = self->key();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

It::value_type* QJsonObject__iterator_OperatorPlusPlus(QJsonObject__iterator* self) {
	return self->operator++();
}

It::value_type* QJsonObject__iterator_OperatorPlusPlus2(QJsonObject__iterator* self, int param1) {
	return self->operator++(param1);
}

It::value_type* QJsonObject__iterator_OperatorMinusMinus(QJsonObject__iterator* self) {
	return self->operator--();
}

It::value_type* QJsonObject__iterator_OperatorMinusMinus2(QJsonObject__iterator* self, int param1) {
	return self->operator--(param1);
}

It::value_type* QJsonObject__iterator_OperatorPlus(const QJsonObject__iterator* self, ptrdiff_t j) {
	return self->operator+(j);
}

It::value_type* QJsonObject__iterator_OperatorMinus(const QJsonObject__iterator* self, ptrdiff_t j) {
	return self->operator-(j);
}

It::value_type* QJsonObject__iterator_OperatorPlusAssign(QJsonObject__iterator* self, ptrdiff_t j) {
	return self->operator+=(j);
}

It::value_type* QJsonObject__iterator_OperatorMinusAssign(QJsonObject__iterator* self, ptrdiff_t j) {
	return self->operator-=(j);
}

ptrdiff_t QJsonObject__iterator_OperatorMinus2(const QJsonObject__iterator* self, QJsonObject__iterator* j) {
	return self->operator-(*j);
}

void QJsonObject__iterator_Delete(QJsonObject__iterator* self) {
    delete self;
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new(const QJsonObject__const_iterator* other) {
	 return new QJsonObject::const_iterator(*other);
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new2() {
	 return new QJsonObject::const_iterator();
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new3(const QJsonObject* obj, ptrdiff_t index) {
	 return new QJsonObject::const_iterator(obj, index);
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new4(const It::value_type* other) {
	 return new QJsonObject::const_iterator(other);
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new5(const QJsonObject__const_iterator* other) {
	 return new QJsonObject::const_iterator(*other);
}

void QJsonObject__const_iterator_OperatorAssign(QJsonObject__const_iterator* self, const QJsonObject__const_iterator* other) {
	self->operator=(*other);
}

libqt_string QJsonObject__const_iterator_Key(const QJsonObject__const_iterator* self) {
	QString _ret = self->key();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

const QRect* QJsonObject__const_iterator_OperatorPlusPlus(QJsonObject__const_iterator* self) {
	const_iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return const_cast<QRect*>(&_ret);
}

const QRect* QJsonObject__const_iterator_OperatorPlusPlus2(QJsonObject__const_iterator* self, int param1) {
	return self->operator++(param1);
}

const QRect* QJsonObject__const_iterator_OperatorMinusMinus(QJsonObject__const_iterator* self) {
	const_iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return const_cast<QRect*>(&_ret);
}

const QRect* QJsonObject__const_iterator_OperatorMinusMinus2(QJsonObject__const_iterator* self, int param1) {
	return self->operator--(param1);
}

const QRect* QJsonObject__const_iterator_OperatorPlus(const QJsonObject__const_iterator* self, ptrdiff_t j) {
	return self->operator+(j);
}

const QRect* QJsonObject__const_iterator_OperatorMinus(const QJsonObject__const_iterator* self, ptrdiff_t j) {
	return self->operator-(j);
}

const QRect* QJsonObject__const_iterator_OperatorPlusAssign(QJsonObject__const_iterator* self, ptrdiff_t j) {
	const_iterator& _ret = self->operator+=(j);
	// Cast returned reference into pointer
	return const_cast<QRect*>(&_ret);
}

const QRect* QJsonObject__const_iterator_OperatorMinusAssign(QJsonObject__const_iterator* self, ptrdiff_t j) {
	const_iterator& _ret = self->operator-=(j);
	// Cast returned reference into pointer
	return const_cast<QRect*>(&_ret);
}

ptrdiff_t QJsonObject__const_iterator_OperatorMinus2(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* j) {
	return self->operator-(*j);
}

void QJsonObject__const_iterator_Delete(QJsonObject__const_iterator* self) {
    delete self;
}

