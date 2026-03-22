#include <QByteArray>
#include <QIODevice>
#include <QSslDiffieHellmanParameters>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qssldiffiehellmanparameters.h>
#include "libqssldiffiehellmanparameters.h"
#include "libqssldiffiehellmanparameters.hxx"

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_new() {
	 return new QSslDiffieHellmanParameters();
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_new2(const QSslDiffieHellmanParameters* other) {
	 return new QSslDiffieHellmanParameters(*other);
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_DefaultParameters() {
	return new QSslDiffieHellmanParameters(QSslDiffieHellmanParameters::defaultParameters());
}

void QSslDiffieHellmanParameters_OperatorAssign(QSslDiffieHellmanParameters* self, const QSslDiffieHellmanParameters* other) {
	self->operator=(*other);
}

void QSslDiffieHellmanParameters_Swap(QSslDiffieHellmanParameters* self, QSslDiffieHellmanParameters* other) {
	self->swap(*other);
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_FromEncoded(const libqt_string encoded) {
	return new QSslDiffieHellmanParameters(QSslDiffieHellmanParameters::fromEncoded(QByteArray(encoded.data, encoded.len)));
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_FromEncoded2(QIODevice* device) {
	return new QSslDiffieHellmanParameters(QSslDiffieHellmanParameters::fromEncoded(device));
}

bool QSslDiffieHellmanParameters_IsEmpty(const QSslDiffieHellmanParameters* self) {
	return self->isEmpty();
}

bool QSslDiffieHellmanParameters_IsValid(const QSslDiffieHellmanParameters* self) {
	return self->isValid();
}

int QSslDiffieHellmanParameters_Error(const QSslDiffieHellmanParameters* self) {
	return self->error();
}

libqt_string QSslDiffieHellmanParameters_ErrorString(const QSslDiffieHellmanParameters* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_FromEncoded22(const libqt_string encoded, int format) {
	return new QSslDiffieHellmanParameters(QSslDiffieHellmanParameters::fromEncoded(QByteArray(encoded.data, encoded.len), static_cast<QSsl::EncodingFormat>(format)));
}

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_FromEncoded23(QIODevice* device, int format) {
	return new QSslDiffieHellmanParameters(QSslDiffieHellmanParameters::fromEncoded(device, static_cast<QSsl::EncodingFormat>(format)));
}

void QSslDiffieHellmanParameters_Delete(QSslDiffieHellmanParameters* self) {
    delete self;
}

