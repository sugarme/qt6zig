#include <QCborError>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qcborcommon.h>
#include "libqcborcommon.h"
#include "libqcborcommon.hxx"

QCborError* QCborError_new() {
	 return new QCborError();
}

QCborError* QCborError_new2(const QCborError* param1) {
	 return new QCborError(*param1);
}

int QCborError_C(const QCborError* self) {
	return self->c;
}

void QCborError_SetC(QCborError* self, int c) {
	self->c;
}

int QCborError_OperatorQCborError__Code(const QCborError* self) {
	return self->operator QCborError::Code();
}

libqt_string QCborError_ToString(const QCborError* self) {
	QString _ret = self->toString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCborError_OperatorAssign(QCborError* self, const QCborError* param1) {
	self->operator=(*param1);
}

void QCborError_Delete(QCborError* self) {
    delete self;
}

