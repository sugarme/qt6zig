#include <QAnyStringView>
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

bool QHttpHeaders_Append(QHttpHeaders* self, libqt_string name, libqt_string value) {
	return self->append(QAnyStringView(QString::fromUtf8(name.data, name.len)), QAnyStringView(QString::fromUtf8(value.data, value.len)));
}

bool QHttpHeaders_Append2(QHttpHeaders* self, int name, libqt_string value) {
	return self->append(static_cast<QHttpHeaders::WellKnownHeader>(name), QAnyStringView(QString::fromUtf8(value.data, value.len)));
}

bool QHttpHeaders_Insert(QHttpHeaders* self, ptrdiff_t i, libqt_string name, libqt_string value) {
	return self->insert(i, QAnyStringView(QString::fromUtf8(name.data, name.len)), QAnyStringView(QString::fromUtf8(value.data, value.len)));
}

bool QHttpHeaders_Insert2(QHttpHeaders* self, ptrdiff_t i, int name, libqt_string value) {
	return self->insert(i, static_cast<QHttpHeaders::WellKnownHeader>(name), QAnyStringView(QString::fromUtf8(value.data, value.len)));
}

bool QHttpHeaders_Replace(QHttpHeaders* self, ptrdiff_t i, libqt_string name, libqt_string newValue) {
	return self->replace(i, QAnyStringView(QString::fromUtf8(name.data, name.len)), QAnyStringView(QString::fromUtf8(newValue.data, newValue.len)));
}

bool QHttpHeaders_Replace2(QHttpHeaders* self, ptrdiff_t i, int name, libqt_string newValue) {
	return self->replace(i, static_cast<QHttpHeaders::WellKnownHeader>(name), QAnyStringView(QString::fromUtf8(newValue.data, newValue.len)));
}

bool QHttpHeaders_ReplaceOrAppend(QHttpHeaders* self, libqt_string name, libqt_string newValue) {
	return self->replaceOrAppend(QAnyStringView(QString::fromUtf8(name.data, name.len)), QAnyStringView(QString::fromUtf8(newValue.data, newValue.len)));
}

bool QHttpHeaders_ReplaceOrAppend2(QHttpHeaders* self, int name, libqt_string newValue) {
	return self->replaceOrAppend(static_cast<QHttpHeaders::WellKnownHeader>(name), QAnyStringView(QString::fromUtf8(newValue.data, newValue.len)));
}

bool QHttpHeaders_Contains(const QHttpHeaders* self, libqt_string name) {
	return self->contains(QAnyStringView(QString::fromUtf8(name.data, name.len)));
}

bool QHttpHeaders_Contains2(const QHttpHeaders* self, int name) {
	return self->contains(static_cast<QHttpHeaders::WellKnownHeader>(name));
}

void QHttpHeaders_Clear(QHttpHeaders* self) {
	self->clear();
}

void QHttpHeaders_RemoveAll(QHttpHeaders* self, libqt_string name) {
	self->removeAll(QAnyStringView(QString::fromUtf8(name.data, name.len)));
}

void QHttpHeaders_RemoveAll2(QHttpHeaders* self, int name) {
	self->removeAll(static_cast<QHttpHeaders::WellKnownHeader>(name));
}

void QHttpHeaders_RemoveAt(QHttpHeaders* self, ptrdiff_t i) {
	self->removeAt(i);
}

QByteArrayView* QHttpHeaders_Value(const QHttpHeaders* self, libqt_string name) {
	return new QByteArrayView(self->value(QAnyStringView(QString::fromUtf8(name.data, name.len))));
}

QByteArrayView* QHttpHeaders_Value2(const QHttpHeaders* self, int name) {
	return new QByteArrayView(self->value(static_cast<QHttpHeaders::WellKnownHeader>(name)));
}

libqt_list QHttpHeaders_Values(const QHttpHeaders* self, libqt_string name) {
	return self->values(QAnyStringView(QString::fromUtf8(name.data, name.len)));
}

libqt_list QHttpHeaders_Values2(const QHttpHeaders* self, int name) {
	return self->values(static_cast<QHttpHeaders::WellKnownHeader>(name));
}

QByteArrayView* QHttpHeaders_ValueAt(const QHttpHeaders* self, ptrdiff_t i) {
	return new QByteArrayView(self->valueAt(i));
}

QLatin1StringView QHttpHeaders_NameAt(const QHttpHeaders* self, ptrdiff_t i) {
	return self->nameAt(i);
}

libqt_string QHttpHeaders_CombinedValue(const QHttpHeaders* self, libqt_string name) {
	QByteArray _qb = self->combinedValue(QAnyStringView(QString::fromUtf8(name.data, name.len)));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
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
	return new QHttpHeaders(QHttpHeaders::fromListOfPairs(*headers));
}

QHttpHeaders* QHttpHeaders_FromMultiMap(const libqt_map headers) {
	return new QHttpHeaders(QHttpHeaders::fromMultiMap(*headers));
}

QHttpHeaders* QHttpHeaders_FromMultiHash(const libqt_map headers) {
	return new QHttpHeaders(QHttpHeaders::fromMultiHash(*headers));
}

libqt_list QHttpHeaders_ToListOfPairs(const QHttpHeaders* self) {
	return self->toListOfPairs();
}

libqt_map QHttpHeaders_ToMultiMap(const QHttpHeaders* self) {
	return self->toMultiMap();
}

libqt_map QHttpHeaders_ToMultiHash(const QHttpHeaders* self) {
	return self->toMultiHash();
}

QByteArrayView* QHttpHeaders_Value22(const QHttpHeaders* self, libqt_string name, QByteArrayView* defaultValue) {
	return new QByteArrayView(self->value(QAnyStringView(QString::fromUtf8(name.data, name.len)), *defaultValue));
}

QByteArrayView* QHttpHeaders_Value23(const QHttpHeaders* self, int name, QByteArrayView* defaultValue) {
	return new QByteArrayView(self->value(static_cast<QHttpHeaders::WellKnownHeader>(name), *defaultValue));
}

void QHttpHeaders_Delete(QHttpHeaders* self) {
    delete self;
}

