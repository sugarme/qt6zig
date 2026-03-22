#include <QByteArray>
#include <QDebug>
#include <QHttpMultiPart>
#include <QHttpPart>
#include <QIODevice>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qhttpmultipart.h>
#include "libqhttpmultipart.h"
#include "libqhttpmultipart.hxx"

QHttpPart* QHttpPart_new() {
	 return new QHttpPart();
}

QHttpPart* QHttpPart_new2(const QHttpPart* other) {
	 return new QHttpPart(*other);
}

void QHttpPart_OperatorAssign(QHttpPart* self, const QHttpPart* other) {
	self->operator=(*other);
}

void QHttpPart_Swap(QHttpPart* self, QHttpPart* other) {
	self->swap(*other);
}

bool QHttpPart_OperatorEqual(const QHttpPart* self, const QHttpPart* other) {
	return self->operator==(*other);
}

bool QHttpPart_OperatorNotEqual(const QHttpPart* self, const QHttpPart* other) {
	return self->operator!=(*other);
}

void QHttpPart_SetHeader(QHttpPart* self, int header, const QVariant* value) {
	self->setHeader(static_cast<QNetworkRequest::KnownHeaders>(header), *value);
}

void QHttpPart_SetRawHeader(QHttpPart* self, const libqt_string headerName, const libqt_string headerValue) {
	self->setRawHeader(QByteArray(headerName.data, headerName.len), QByteArray(headerValue.data, headerValue.len));
}

void QHttpPart_SetBody(QHttpPart* self, const libqt_string body) {
	self->setBody(QByteArray(body.data, body.len));
}

void QHttpPart_SetBodyDevice(QHttpPart* self, QIODevice* device) {
	self->setBodyDevice(device);
}

void QHttpPart_Delete(QHttpPart* self) {
    delete self;
}

QHttpMultiPart* QHttpMultiPart_new() {
	 return new QHttpMultiPart();
}

QHttpMultiPart* QHttpMultiPart_new2(int contentType) {
	 return new QHttpMultiPart(static_cast<QHttpMultiPart::ContentType>(contentType));
}

QHttpMultiPart* QHttpMultiPart_new3(QObject* parent) {
	 return new QHttpMultiPart(parent);
}

QHttpMultiPart* QHttpMultiPart_new4(int contentType, QObject* parent) {
	 return new QHttpMultiPart(static_cast<QHttpMultiPart::ContentType>(contentType), parent);
}

libqt_string QHttpMultiPart_Tr(const char* s) {
	QString _ret = QHttpMultiPart::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QHttpMultiPart_Append(QHttpMultiPart* self, const QHttpPart* httpPart) {
	self->append(*httpPart);
}

void QHttpMultiPart_SetContentType(QHttpMultiPart* self, int contentType) {
	self->setContentType(static_cast<QHttpMultiPart::ContentType>(contentType));
}

libqt_string QHttpMultiPart_Boundary(const QHttpMultiPart* self) {
	QByteArray _qb = self->boundary();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QHttpMultiPart_SetBoundary(QHttpMultiPart* self, const libqt_string boundary) {
	self->setBoundary(QByteArray(boundary.data, boundary.len));
}

libqt_string QHttpMultiPart_Tr2(const char* s, const char* c) {
	QString _ret = QHttpMultiPart::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QHttpMultiPart_Tr3(const char* s, const char* c, int n) {
	QString _ret = QHttpMultiPart::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QHttpMultiPart_Delete(QHttpMultiPart* self) {
    delete self;
}

