#include <QByteArray>
#include <QByteArrayView>
#include <QIODevice>
#include <QMessageAuthenticationCode>
#include <qmessageauthenticationcode.h>
#include "libqmessageauthenticationcode.h"
#include "libqmessageauthenticationcode.hxx"

QMessageAuthenticationCode* QMessageAuthenticationCode_new(int method) {
	 return new QMessageAuthenticationCode(static_cast<QCryptographicHash::Algorithm>(method));
}

QMessageAuthenticationCode* QMessageAuthenticationCode_new2(int method, QByteArrayView* key) {
	 return new QMessageAuthenticationCode(static_cast<QCryptographicHash::Algorithm>(method), *key);
}

void QMessageAuthenticationCode_Swap(QMessageAuthenticationCode* self, QMessageAuthenticationCode* other) {
	self->swap(*other);
}

void QMessageAuthenticationCode_Reset(QMessageAuthenticationCode* self) {
	self->reset();
}

void QMessageAuthenticationCode_SetKey(QMessageAuthenticationCode* self, QByteArrayView* key) {
	self->setKey(*key);
}

void QMessageAuthenticationCode_AddData(QMessageAuthenticationCode* self, const char* data, ptrdiff_t length) {
	self->addData(data, length);
}

void QMessageAuthenticationCode_AddData2(QMessageAuthenticationCode* self, QByteArrayView* data) {
	self->addData(*data);
}

bool QMessageAuthenticationCode_AddData3(QMessageAuthenticationCode* self, QIODevice* device) {
	return self->addData(device);
}

QByteArrayView* QMessageAuthenticationCode_ResultView(const QMessageAuthenticationCode* self) {
	return new QByteArrayView(self->resultView());
}

libqt_string QMessageAuthenticationCode_Result(const QMessageAuthenticationCode* self) {
	QByteArray _qb = self->result();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMessageAuthenticationCode_Hash(QByteArrayView* message, QByteArrayView* key, int method) {
	QByteArray _qb = QMessageAuthenticationCode::hash(*message, *key, static_cast<QCryptographicHash::Algorithm>(method));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QByteArrayView* QMessageAuthenticationCode_HashInto(libqt_list buffer, QByteArrayView* message, QByteArrayView* key, int method) {
	return new QByteArrayView(QMessageAuthenticationCode::hashInto(buffer, *message, *key, static_cast<QCryptographicHash::Algorithm>(method)));
}

QByteArrayView* QMessageAuthenticationCode_HashInto2(libqt_list buffer, QByteArrayView* message, QByteArrayView* key, int method) {
	return new QByteArrayView(QMessageAuthenticationCode::hashInto(buffer, *message, *key, static_cast<QCryptographicHash::Algorithm>(method)));
}

QByteArrayView* QMessageAuthenticationCode_HashInto3(libqt_list buffer, QByteArrayView* message, QByteArrayView* key, int method) {
	return new QByteArrayView(QMessageAuthenticationCode::hashInto(buffer, *message, *key, static_cast<QCryptographicHash::Algorithm>(method)));
}

QByteArrayView* QMessageAuthenticationCode_HashInto4(libqt_list buffer, libqt_list messageParts, QByteArrayView* key, int method) {
	return new QByteArrayView(QMessageAuthenticationCode::hashInto(buffer, messageParts, *key, static_cast<QCryptographicHash::Algorithm>(method)));
}

QByteArrayView* QMessageAuthenticationCode_HashInto5(libqt_list buffer, libqt_list messageParts, QByteArrayView* key, int method) {
	return new QByteArrayView(QMessageAuthenticationCode::hashInto(buffer, messageParts, *key, static_cast<QCryptographicHash::Algorithm>(method)));
}

QByteArrayView* QMessageAuthenticationCode_HashInto6(libqt_list buffer, libqt_list message, QByteArrayView* key, int method) {
	return new QByteArrayView(QMessageAuthenticationCode::hashInto(buffer, message, *key, static_cast<QCryptographicHash::Algorithm>(method)));
}

void QMessageAuthenticationCode_Delete(QMessageAuthenticationCode* self) {
    delete self;
}

