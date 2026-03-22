#include <QByteArray>
#include <QByteArrayView>
#include <QHttpHeaders>
#include <qhttpheaders.h>
#include "libqhttpheaders.h"
#include "libqhttpheaders.hxx"

QHttpHeaders* QHttpHeaders_new() {
	 return new QHttpHeaders();
}

QHttpHeaders* QHttpHeaders_new2(const QHttpHeaders* other) {
	 return new QHttpHeaders(*other);
}

void QHttpHeaders_OperatorAssign(QHttpHeaders* self, const QHttpHeaders* other) {
	self->operator=(*other);
}

void QHttpHeaders_Swap(QHttpHeaders* self, QHttpHeaders* other) {
	self->swap(*other);
}

bool QHttpHeaders_Contains2(const QHttpHeaders* self, int name) {
	return self->contains(static_cast<QHttpHeaders::WellKnownHeader>(name));
}

void QHttpHeaders_Clear(QHttpHeaders* self) {
	self->clear();
}

void QHttpHeaders_RemoveAll2(QHttpHeaders* self, int name) {
	self->removeAll(static_cast<QHttpHeaders::WellKnownHeader>(name));
}

void QHttpHeaders_RemoveAt(QHttpHeaders* self, ptrdiff_t i) {
	self->removeAt(i);
}

QByteArrayView* QHttpHeaders_Value2(const QHttpHeaders* self, int name) {
	return new QByteArrayView(self->value(static_cast<QHttpHeaders::WellKnownHeader>(name)));
}

libqt_list QHttpHeaders_Values2(const QHttpHeaders* self, int name) {
	auto _ret = self->values(static_cast<QHttpHeaders::WellKnownHeader>(name));
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

QByteArrayView* QHttpHeaders_ValueAt(const QHttpHeaders* self, ptrdiff_t i) {
	return new QByteArrayView(self->valueAt(i));
}

libqt_string QHttpHeaders_CombinedValue2(const QHttpHeaders* self, int name) {
	QByteArray _qb = self->combinedValue(static_cast<QHttpHeaders::WellKnownHeader>(name));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

ptrdiff_t QHttpHeaders_Size(const QHttpHeaders* self) {
	return self->size();
}

void QHttpHeaders_Reserve(QHttpHeaders* self, ptrdiff_t size) {
	self->reserve(size);
}

bool QHttpHeaders_IsEmpty(const QHttpHeaders* self) {
	return self->isEmpty();
}

QByteArrayView* QHttpHeaders_WellKnownHeaderName(int name) {
	return new QByteArrayView(QHttpHeaders::wellKnownHeaderName(static_cast<QHttpHeaders::WellKnownHeader>(name)));
}

QHttpHeaders* QHttpHeaders_FromListOfPairs(const libqt_list headers) {
	return new QHttpHeaders(QHttpHeaders::fromListOfPairs(QList<QPair<QByteArray, QByteArray>>()));
}

QHttpHeaders* QHttpHeaders_FromMultiMap(const libqt_map headers) {
	return new QHttpHeaders(QHttpHeaders::fromMultiMap(QMultiMap<QByteArray, QByteArray>()));
}

QHttpHeaders* QHttpHeaders_FromMultiHash(const libqt_map headers) {
	return new QHttpHeaders(QHttpHeaders::fromMultiHash(QMultiHash<QByteArray, QByteArray>()));
}

libqt_list QHttpHeaders_ToListOfPairs(const QHttpHeaders* self) {
	auto _ret = self->toListOfPairs();
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

libqt_map QHttpHeaders_ToMultiMap(const QHttpHeaders* self) {
	auto _ret = self->toMultiMap();
	libqt_map _map;
	_map.len = _ret.size();
	_map.keys = nullptr;
	_map.values = nullptr;
	return _map;
}

libqt_map QHttpHeaders_ToMultiHash(const QHttpHeaders* self) {
	auto _ret = self->toMultiHash();
	libqt_map _map;
	_map.len = _ret.size();
	_map.keys = nullptr;
	_map.values = nullptr;
	return _map;
}

QByteArrayView* QHttpHeaders_Value23(const QHttpHeaders* self, int name, QByteArrayView* defaultValue) {
	return new QByteArrayView(self->value(static_cast<QHttpHeaders::WellKnownHeader>(name), *defaultValue));
}

void QHttpHeaders_Delete(QHttpHeaders* self) {
    delete self;
}

