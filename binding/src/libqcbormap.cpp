#include <QCborMap>
#define WORKAROUND_INNER_CLASS_DEFINITION_QCborMap__ConstIterator
#define WORKAROUND_INNER_CLASS_DEFINITION_QCborMap__Iterator
#include <QCborValue>
#include <QCborValueConstRef>
#include <QCborValueRef>
#include <QChar>
#include <QDataStream>
#include <QJsonObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qcbormap.h>
#include "libqcbormap.h"
#include "libqcbormap.hxx"

QCborMap* QCborMap_new() {
	 return new QCborMap();
}

QCborMap* QCborMap_new2(const QCborMap* other) {
	 return new QCborMap(*other);
}

void QCborMap_OperatorAssign(QCborMap* self, const QCborMap* other) {
	self->operator=(*other);
}

void QCborMap_Swap(QCborMap* self, QCborMap* other) {
	self->swap(*other);
}

QCborValue* QCborMap_ToCborValue(const QCborMap* self) {
	return new QCborValue(self->toCborValue());
}

ptrdiff_t QCborMap_Size(const QCborMap* self) {
	return self->size();
}

bool QCborMap_IsEmpty(const QCborMap* self) {
	return self->isEmpty();
}

void QCborMap_Clear(QCborMap* self) {
	self->clear();
}

libqt_list QCborMap_Keys(const QCborMap* self) {
	auto _ret = self->keys();
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

QCborValue* QCborMap_Value(const QCborMap* self, long long key) {
	return new QCborValue(self->value(key));
}

QCborValue* QCborMap_Value3(const QCborMap* self, const libqt_string key) {
	return new QCborValue(self->value(QString::fromUtf8(key.data, key.len)));
}

QCborValue* QCborMap_Value4(const QCborMap* self, const QCborValue* key) {
	return new QCborValue(self->value(*key));
}

QCborValue* QCborMap_OperatorSubscript(const QCborMap* self, long long key) {
	return new QCborValue(self->operator[](key));
}

QCborValue* QCborMap_OperatorSubscript3(const QCborMap* self, const libqt_string key) {
	return new QCborValue(self->operator[](QString::fromUtf8(key.data, key.len)));
}

QCborValue* QCborMap_OperatorSubscript4(const QCborMap* self, const QCborValue* key) {
	return new QCborValue(self->operator[](*key));
}

QCborValueRef* QCborMap_OperatorSubscript5(QCborMap* self, long long key) {
	return new QCborValueRef(self->operator[](key));
}

QCborValueRef* QCborMap_OperatorSubscript7(QCborMap* self, const libqt_string key) {
	return new QCborValueRef(self->operator[](QString::fromUtf8(key.data, key.len)));
}

QCborValueRef* QCborMap_OperatorSubscript8(QCborMap* self, const QCborValue* key) {
	return new QCborValueRef(self->operator[](*key));
}

QCborValue* QCborMap_Take(QCborMap* self, long long key) {
	return new QCborValue(self->take(key));
}

QCborValue* QCborMap_Take3(QCborMap* self, const libqt_string key) {
	return new QCborValue(self->take(QString::fromUtf8(key.data, key.len)));
}

QCborValue* QCborMap_Take4(QCborMap* self, const QCborValue* key) {
	return new QCborValue(self->take(*key));
}

void QCborMap_Remove(QCborMap* self, long long key) {
	self->remove(key);
}

void QCborMap_Remove3(QCborMap* self, const libqt_string key) {
	self->remove(QString::fromUtf8(key.data, key.len));
}

void QCborMap_Remove4(QCborMap* self, const QCborValue* key) {
	self->remove(*key);
}

bool QCborMap_Contains(const QCborMap* self, long long key) {
	return self->contains(key);
}

bool QCborMap_Contains3(const QCborMap* self, const libqt_string key) {
	return self->contains(QString::fromUtf8(key.data, key.len));
}

bool QCborMap_Contains4(const QCborMap* self, const QCborValue* key) {
	return self->contains(*key);
}

int QCborMap_Compare(const QCborMap* self, const QCborMap* other) {
	return self->compare(*other);
}

QCborMap__Iterator* QCborMap_Begin(QCborMap* self) {
	return new QCborMap::Iterator(self->begin());
}

QCborMap__ConstIterator* QCborMap_ConstBegin(const QCborMap* self) {
	return new QCborMap::ConstIterator(self->constBegin());
}

QCborMap__ConstIterator* QCborMap_Begin2(const QCborMap* self) {
	return new QCborMap::ConstIterator(self->begin());
}

QCborMap__ConstIterator* QCborMap_Cbegin(const QCborMap* self) {
	return new QCborMap::ConstIterator(self->cbegin());
}

QCborMap__Iterator* QCborMap_End(QCborMap* self) {
	return new QCborMap::Iterator(self->end());
}

QCborMap__ConstIterator* QCborMap_ConstEnd(const QCborMap* self) {
	return new QCborMap::ConstIterator(self->constEnd());
}

QCborMap__ConstIterator* QCborMap_End2(const QCborMap* self) {
	return new QCborMap::ConstIterator(self->end());
}

QCborMap__ConstIterator* QCborMap_Cend(const QCborMap* self) {
	return new QCborMap::ConstIterator(self->cend());
}

QCborMap__Iterator* QCborMap_Erase(QCborMap* self, QCborMap__Iterator* it) {
	return new QCborMap::Iterator(self->erase(*it));
}

QCborMap__Iterator* QCborMap_Erase2(QCborMap* self, QCborMap__ConstIterator* it) {
	return new QCborMap::Iterator(self->erase(*it));
}

QCborValue* QCborMap_Extract(QCborMap* self, QCborMap__Iterator* it) {
	return new QCborValue(self->extract(*it));
}

QCborValue* QCborMap_Extract2(QCborMap* self, QCborMap__ConstIterator* it) {
	return new QCborValue(self->extract(*it));
}

bool QCborMap_Empty(const QCborMap* self) {
	return self->empty();
}

QCborMap__Iterator* QCborMap_Find(QCborMap* self, long long key) {
	return new QCborMap::Iterator(self->find(key));
}

QCborMap__Iterator* QCborMap_Find3(QCborMap* self, const libqt_string key) {
	return new QCborMap::Iterator(self->find(QString::fromUtf8(key.data, key.len)));
}

QCborMap__Iterator* QCborMap_Find4(QCborMap* self, const QCborValue* key) {
	return new QCborMap::Iterator(self->find(*key));
}

QCborMap__ConstIterator* QCborMap_ConstFind(const QCborMap* self, long long key) {
	return new QCborMap::ConstIterator(self->constFind(key));
}

QCborMap__ConstIterator* QCborMap_ConstFind3(const QCborMap* self, const libqt_string key) {
	return new QCborMap::ConstIterator(self->constFind(QString::fromUtf8(key.data, key.len)));
}

QCborMap__ConstIterator* QCborMap_ConstFind4(const QCborMap* self, const QCborValue* key) {
	return new QCborMap::ConstIterator(self->constFind(*key));
}

QCborMap__ConstIterator* QCborMap_Find5(const QCborMap* self, long long key) {
	return new QCborMap::ConstIterator(self->find(key));
}

QCborMap__ConstIterator* QCborMap_Find7(const QCborMap* self, const libqt_string key) {
	return new QCborMap::ConstIterator(self->find(QString::fromUtf8(key.data, key.len)));
}

QCborMap__ConstIterator* QCborMap_Find8(const QCborMap* self, const QCborValue* key) {
	return new QCborMap::ConstIterator(self->find(*key));
}

QCborMap__Iterator* QCborMap_Insert(QCborMap* self, long long key, const QCborValue* value_) {
	return new QCborMap::Iterator(self->insert(key, *value_));
}

QCborMap__Iterator* QCborMap_Insert3(QCborMap* self, const libqt_string key, const QCborValue* value_) {
	return new QCborMap::Iterator(self->insert(QString::fromUtf8(key.data, key.len), *value_));
}

QCborMap__Iterator* QCborMap_Insert4(QCborMap* self, const QCborValue* key, const QCborValue* value_) {
	return new QCborMap::Iterator(self->insert(*key, *value_));
}

QCborMap__Iterator* QCborMap_Insert5(QCborMap* self, libqt_pair v) {
	return new QCborMap::Iterator(self->insert(v));
}

QCborMap* QCborMap_FromVariantMap(const libqt_map mapVal) {
	return new QCborMap(QCborMap::fromVariantMap(QMap<QString, QVariant>()));
}

QCborMap* QCborMap_FromVariantHash(const libqt_map hash) {
	return new QCborMap(QCborMap::fromVariantHash(QHash<QString, QVariant>()));
}

QCborMap* QCborMap_FromJsonObject(const QJsonObject* o) {
	return new QCborMap(QCborMap::fromJsonObject(*o));
}

libqt_map QCborMap_ToVariantMap(const QCborMap* self) {
	auto _ret = self->toVariantMap();
	libqt_map _map;
	_map.len = _ret.size();
	_map.keys = nullptr;
	_map.values = nullptr;
	return _map;
}

libqt_map QCborMap_ToVariantHash(const QCborMap* self) {
	auto _ret = self->toVariantHash();
	libqt_map _map;
	_map.len = _ret.size();
	_map.keys = nullptr;
	_map.values = nullptr;
	return _map;
}

QJsonObject* QCborMap_ToJsonObject(const QCborMap* self) {
	return new QJsonObject(self->toJsonObject());
}

void QCborMap_Delete(QCborMap* self) {
    delete self;
}

QCborMap__Iterator* QCborMap__Iterator_new(const QCborMap__Iterator* other) {
	 return new QCborMap::Iterator(*other);
}

QCborMap__Iterator* QCborMap__Iterator_new2() {
	 return new QCborMap::Iterator();
}

QCborMap__Iterator* QCborMap__Iterator_new3(const QCborMap__Iterator* param1) {
	 return new QCborMap::Iterator(*param1);
}

void QCborMap__Iterator_OperatorAssign(QCborMap__Iterator* self, const QCborMap__Iterator* other) {
	self->operator=(*other);
}

libqt_pair QCborMap__Iterator_OperatorMultiply(const QCborMap__Iterator* self) {
	return self->operator*();
}

libqt_pair QCborMap__Iterator_OperatorSubscript(const QCborMap__Iterator* self, ptrdiff_t j) {
	return self->operator[](j);
}

QCborValueRef* QCborMap__Iterator_OperatorMinusGreater(QCborMap__Iterator* self) {
	return self->operator->();
}

const QCborValueConstRef* QCborMap__Iterator_OperatorMinusGreater2(const QCborMap__Iterator* self) {
	return self->operator->();
}

QCborValue* QCborMap__Iterator_Key(const QCborMap__Iterator* self) {
	return new QCborValue(self->key());
}

QCborValueRef* QCborMap__Iterator_Value(const QCborMap__Iterator* self) {
	return new QCborValueRef(self->value());
}

QTreeWidgetItemIterator::Iterator* QCborMap__Iterator_OperatorPlusPlus(QCborMap__Iterator* self) {
	return self->operator++();
}

QTreeWidgetItemIterator::Iterator QCborMap__Iterator_OperatorPlusPlus2(QCborMap__Iterator* self, int param1) {
	return self->operator++(param1);
}

QTreeWidgetItemIterator::Iterator* QCborMap__Iterator_OperatorMinusMinus(QCborMap__Iterator* self) {
	return self->operator--();
}

QTreeWidgetItemIterator::Iterator QCborMap__Iterator_OperatorMinusMinus2(QCborMap__Iterator* self, int param1) {
	return self->operator--(param1);
}

QTreeWidgetItemIterator::Iterator* QCborMap__Iterator_OperatorPlusAssign(QCborMap__Iterator* self, ptrdiff_t j) {
	return self->operator+=(j);
}

QTreeWidgetItemIterator::Iterator* QCborMap__Iterator_OperatorMinusAssign(QCborMap__Iterator* self, ptrdiff_t j) {
	return self->operator-=(j);
}

QTreeWidgetItemIterator::Iterator QCborMap__Iterator_OperatorPlus(const QCborMap__Iterator* self, ptrdiff_t j) {
	return self->operator+(j);
}

QTreeWidgetItemIterator::Iterator QCborMap__Iterator_OperatorMinus(const QCborMap__Iterator* self, ptrdiff_t j) {
	return self->operator-(j);
}

ptrdiff_t QCborMap__Iterator_OperatorMinus2(const QCborMap__Iterator* self, QCborMap__Iterator* j) {
	return self->operator-(*j);
}

void QCborMap__Iterator_Delete(QCborMap__Iterator* self) {
    delete self;
}

QCborMap__ConstIterator* QCborMap__ConstIterator_new(const QCborMap__ConstIterator* other) {
	 return new QCborMap::ConstIterator(*other);
}

QCborMap__ConstIterator* QCborMap__ConstIterator_new2() {
	 return new QCborMap::ConstIterator();
}

QCborMap__ConstIterator* QCborMap__ConstIterator_new3(const QCborMap__ConstIterator* param1) {
	 return new QCborMap::ConstIterator(*param1);
}

void QCborMap__ConstIterator_OperatorAssign(QCborMap__ConstIterator* self, const QCborMap__ConstIterator* other) {
	self->operator=(*other);
}

libqt_pair QCborMap__ConstIterator_OperatorMultiply(const QCborMap__ConstIterator* self) {
	return self->operator*();
}

libqt_pair QCborMap__ConstIterator_OperatorSubscript(const QCborMap__ConstIterator* self, ptrdiff_t j) {
	return self->operator[](j);
}

const QCborValueConstRef* QCborMap__ConstIterator_OperatorMinusGreater(const QCborMap__ConstIterator* self) {
	return self->operator->();
}

QCborValue* QCborMap__ConstIterator_Key(const QCborMap__ConstIterator* self) {
	return new QCborValue(self->key());
}

QCborValueConstRef* QCborMap__ConstIterator_Value(const QCborMap__ConstIterator* self) {
	return new QCborValueConstRef(self->value());
}

const QChar* QCborMap__ConstIterator_OperatorPlusPlus(QCborMap__ConstIterator* self) {
	ConstIterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return const_cast<QChar*>(&_ret);
}

const QChar* QCborMap__ConstIterator_OperatorPlusPlus2(QCborMap__ConstIterator* self, int param1) {
	return self->operator++(param1);
}

const QChar* QCborMap__ConstIterator_OperatorMinusMinus(QCborMap__ConstIterator* self) {
	ConstIterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return const_cast<QChar*>(&_ret);
}

const QChar* QCborMap__ConstIterator_OperatorMinusMinus2(QCborMap__ConstIterator* self, int param1) {
	return self->operator--(param1);
}

const QChar* QCborMap__ConstIterator_OperatorPlusAssign(QCborMap__ConstIterator* self, ptrdiff_t j) {
	ConstIterator& _ret = self->operator+=(j);
	// Cast returned reference into pointer
	return const_cast<QChar*>(&_ret);
}

const QChar* QCborMap__ConstIterator_OperatorMinusAssign(QCborMap__ConstIterator* self, ptrdiff_t j) {
	ConstIterator& _ret = self->operator-=(j);
	// Cast returned reference into pointer
	return const_cast<QChar*>(&_ret);
}

const QChar* QCborMap__ConstIterator_OperatorPlus(const QCborMap__ConstIterator* self, ptrdiff_t j) {
	return self->operator+(j);
}

const QChar* QCborMap__ConstIterator_OperatorMinus(const QCborMap__ConstIterator* self, ptrdiff_t j) {
	return self->operator-(j);
}

ptrdiff_t QCborMap__ConstIterator_OperatorMinus2(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* j) {
	return self->operator-(*j);
}

void QCborMap__ConstIterator_Delete(QCborMap__ConstIterator* self) {
    delete self;
}

