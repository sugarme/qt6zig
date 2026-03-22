#include <QByteArray>
#include <QIODevice>
#include <QSslKey>
#include <qsslkey.h>
#include "libqsslkey.h"
#include "libqsslkey.hxx"

QSslKey* QSslKey_new() {
	 return new QSslKey();
}

QSslKey* QSslKey_new2(const libqt_string encoded, int algorithm) {
	 return new QSslKey(QByteArray(encoded.data, encoded.len), static_cast<QSsl::KeyAlgorithm>(algorithm));
}

QSslKey* QSslKey_new3(QIODevice* device, int algorithm) {
	 return new QSslKey(device, static_cast<QSsl::KeyAlgorithm>(algorithm));
}

QSslKey* QSslKey_new4(void* handle) {
	 return new QSslKey(handle);
}

QSslKey* QSslKey_new5(const QSslKey* other) {
	 return new QSslKey(*other);
}

QSslKey* QSslKey_new6(const libqt_string encoded, int algorithm, int format) {
	 return new QSslKey(QByteArray(encoded.data, encoded.len), static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format));
}

QSslKey* QSslKey_new7(const libqt_string encoded, int algorithm, int format, int typeVal) {
	 return new QSslKey(QByteArray(encoded.data, encoded.len), static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), static_cast<QSsl::KeyType>(typeVal));
}

QSslKey* QSslKey_new8(const libqt_string encoded, int algorithm, int format, int typeVal, const libqt_string passPhrase) {
	 return new QSslKey(QByteArray(encoded.data, encoded.len), static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), static_cast<QSsl::KeyType>(typeVal), QByteArray(passPhrase.data, passPhrase.len));
}

QSslKey* QSslKey_new9(QIODevice* device, int algorithm, int format) {
	 return new QSslKey(device, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format));
}

QSslKey* QSslKey_new10(QIODevice* device, int algorithm, int format, int typeVal) {
	 return new QSslKey(device, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), static_cast<QSsl::KeyType>(typeVal));
}

QSslKey* QSslKey_new11(QIODevice* device, int algorithm, int format, int typeVal, const libqt_string passPhrase) {
	 return new QSslKey(device, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), static_cast<QSsl::KeyType>(typeVal), QByteArray(passPhrase.data, passPhrase.len));
}

QSslKey* QSslKey_new12(void* handle, int typeVal) {
	 return new QSslKey(handle, static_cast<QSsl::KeyType>(typeVal));
}

void QSslKey_OperatorAssign(QSslKey* self, const QSslKey* other) {
	self->operator=(*other);
}

void QSslKey_Swap(QSslKey* self, QSslKey* other) {
	self->swap(*other);
}

bool QSslKey_IsNull(const QSslKey* self) {
	return self->isNull();
}

void QSslKey_Clear(QSslKey* self) {
	self->clear();
}

int QSslKey_Length(const QSslKey* self) {
	return self->length();
}

int QSslKey_Type(const QSslKey* self) {
	return self->type();
}

int QSslKey_Algorithm(const QSslKey* self) {
	return self->algorithm();
}

libqt_string QSslKey_ToPem(const QSslKey* self) {
	QByteArray _qb = self->toPem();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSslKey_ToDer(const QSslKey* self) {
	QByteArray _qb = self->toDer();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void* QSslKey_Handle(const QSslKey* self) {
	return self->handle();
}

bool QSslKey_OperatorEqual(const QSslKey* self, const QSslKey* key) {
	return self->operator==(*key);
}

bool QSslKey_OperatorNotEqual(const QSslKey* self, const QSslKey* key) {
	return self->operator!=(*key);
}

libqt_string QSslKey_ToPem1(const QSslKey* self, const libqt_string passPhrase) {
	QByteArray _qb = self->toPem(QByteArray(passPhrase.data, passPhrase.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSslKey_ToDer1(const QSslKey* self, const libqt_string passPhrase) {
	QByteArray _qb = self->toDer(QByteArray(passPhrase.data, passPhrase.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSslKey_Delete(QSslKey* self) {
    delete self;
}

