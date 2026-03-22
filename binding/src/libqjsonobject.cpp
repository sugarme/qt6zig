#include <QDebug>
#include <QJsonObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QJsonObject__const_iterator
#define WORKAROUND_INNER_CLASS_DEFINITION_QJsonObject__iterator
#include <QJsonValue>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
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
	return new QJsonObject(QJsonObject::fromVariantMap(QMap<QString, QVariant>()));
}

libqt_map QJsonObject_ToVariantMap(const QJsonObject* self) {
	auto _ret = self->toVariantMap();
	libqt_map _map;
	_map.len = _ret.size();
	_map.keys = nullptr;
	_map.values = nullptr;
	return _map;
}

QJsonObject* QJsonObject_FromVariantHash(const libqt_map mapVal) {
	return new QJsonObject(QJsonObject::fromVariantHash(QHash<QString, QVariant>()));
}

libqt_map QJsonObject_ToVariantHash(const QJsonObject* self) {
	auto _ret = self->toVariantHash();
	libqt_map _map;
	_map.len = _ret.size();
	_map.keys = nullptr;
	_map.values = nullptr;
	return _map;
}

libqt_list QJsonObject_Keys(const QJsonObject* self) {
	auto _ret = self->keys();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
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

void QJsonObject_Remove(QJsonObject* self, const libqt_string key) {
	self->remove(QString::fromUtf8(key.data, key.len));
}

QJsonValue* QJsonObject_Take(QJsonObject* self, const libqt_string key) {
	return new QJsonValue(self->take(QString::fromUtf8(key.data, key.len)));
}

bool QJsonObject_Contains(const QJsonObject* self, const libqt_string key) {
	return self->contains(QString::fromUtf8(key.data, key.len));
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

bool QJsonObject_Empty(const QJsonObject* self) {
	return self->empty();
}

void QJsonObject_Delete(QJsonObject* self) {
    delete self;
}

QJsonObject__iterator* QJsonObject__iterator_new() {
	 return new QJsonObject::iterator();
}

QJsonObject__iterator* QJsonObject__iterator_new2(QJsonObject* obj, ptrdiff_t index) {
	 return new QJsonObject::iterator(obj, index);
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

void QJsonObject__iterator_Delete(QJsonObject__iterator* self) {
    delete self;
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new() {
	 return new QJsonObject::const_iterator();
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new2(const QJsonObject* obj, ptrdiff_t index) {
	 return new QJsonObject::const_iterator(obj, index);
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new3(const It::value_type* other) {
	 return new QJsonObject::const_iterator(other);
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

void QJsonObject__const_iterator_Delete(QJsonObject__const_iterator* self) {
    delete self;
}

