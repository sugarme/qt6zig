#include <QByteArray>
#include <QByteArrayView>
#include <QCryptographicHash>
#include <QIODevice>
#include <qcryptographichash.h>
#include "libqcryptographichash.h"
#include "libqcryptographichash.hxx"

QCryptographicHash* QCryptographicHash_new(int method) {
	 return new QCryptographicHash(static_cast<QCryptographicHash::Algorithm>(method));
}

void QCryptographicHash_Swap(QCryptographicHash* self, QCryptographicHash* other) {
	self->swap(*other);
}

void QCryptographicHash_Reset(QCryptographicHash* self) {
	self->reset();
}

int QCryptographicHash_Algorithm(const QCryptographicHash* self) {
	return self->algorithm();
}

void QCryptographicHash_AddData(QCryptographicHash* self, const char* data, ptrdiff_t length) {
	self->addData(data, length);
}

void QCryptographicHash_AddData2(QCryptographicHash* self, QByteArrayView* data) {
	self->addData(*data);
}

bool QCryptographicHash_AddData3(QCryptographicHash* self, QIODevice* device) {
	return self->addData(device);
}

libqt_string QCryptographicHash_Result(const QCryptographicHash* self) {
	QByteArray _qb = self->result();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QByteArrayView* QCryptographicHash_ResultView(const QCryptographicHash* self) {
	return new QByteArrayView(self->resultView());
}

libqt_string QCryptographicHash_Hash(QByteArrayView* data, int method) {
	QByteArray _qb = QCryptographicHash::hash(*data, static_cast<QCryptographicHash::Algorithm>(method));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QByteArrayView* QCryptographicHash_HashInto(libqt_list buffer, QByteArrayView* data, int method) {
	return new QByteArrayView(QCryptographicHash::hashInto(QSpan<char>(), *data, static_cast<QCryptographicHash::Algorithm>(method)));
}

QByteArrayView* QCryptographicHash_HashInto2(libqt_list buffer, QByteArrayView* data, int method) {
	return new QByteArrayView(QCryptographicHash::hashInto(QSpan<uchar>(), *data, static_cast<QCryptographicHash::Algorithm>(method)));
}

QByteArrayView* QCryptographicHash_HashInto3(libqt_list buffer, QByteArrayView* data, int method) {
	return new QByteArrayView(QCryptographicHash::hashInto(QSpan<std::byte>(), *data, static_cast<QCryptographicHash::Algorithm>(method)));
}

QByteArrayView* QCryptographicHash_HashInto4(libqt_list buffer, libqt_list data, int method) {
	return new QByteArrayView(QCryptographicHash::hashInto(QSpan<char>(), QSpan<const QByteArrayView>(), static_cast<QCryptographicHash::Algorithm>(method)));
}

QByteArrayView* QCryptographicHash_HashInto5(libqt_list buffer, libqt_list data, int method) {
	return new QByteArrayView(QCryptographicHash::hashInto(QSpan<uchar>(), QSpan<const QByteArrayView>(), static_cast<QCryptographicHash::Algorithm>(method)));
}

QByteArrayView* QCryptographicHash_HashInto6(libqt_list buffer, libqt_list data, int method) {
	return new QByteArrayView(QCryptographicHash::hashInto(QSpan<std::byte>(), QSpan<const QByteArrayView>(), static_cast<QCryptographicHash::Algorithm>(method)));
}

int QCryptographicHash_HashLength(int method) {
	return QCryptographicHash::hashLength(static_cast<QCryptographicHash::Algorithm>(method));
}

bool QCryptographicHash_SupportsAlgorithm(int method) {
	return QCryptographicHash::supportsAlgorithm(static_cast<QCryptographicHash::Algorithm>(method));
}

void QCryptographicHash_Delete(QCryptographicHash* self) {
    delete self;
}

