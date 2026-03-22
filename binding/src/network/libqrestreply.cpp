#include <QByteArray>
#include <QDebug>
#include <QNetworkReply>
#include <QRestReply>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qrestreply.h>
#include "libqrestreply.h"
#include "libqrestreply.hxx"

QRestReply* QRestReply_new(QNetworkReply* reply) {
	 return new QRestReply(reply);
}

void QRestReply_Swap(QRestReply* self, QRestReply* other) {
	self->swap(*other);
}

QNetworkReply* QRestReply_NetworkReply(const QRestReply* self) {
	return self->networkReply();
}

libqt_string QRestReply_ReadBody(QRestReply* self) {
	QByteArray _qb = self->readBody();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QRestReply_ReadText(QRestReply* self) {
	QString _ret = self->readText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QRestReply_IsSuccess(const QRestReply* self) {
	return self->isSuccess();
}

int QRestReply_HttpStatus(const QRestReply* self) {
	return self->httpStatus();
}

bool QRestReply_IsHttpStatusSuccess(const QRestReply* self) {
	return self->isHttpStatusSuccess();
}

bool QRestReply_HasError(const QRestReply* self) {
	return self->hasError();
}

int QRestReply_Error(const QRestReply* self) {
	return self->error();
}

libqt_string QRestReply_ErrorString(const QRestReply* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QRestReply_Delete(QRestReply* self) {
    delete self;
}

