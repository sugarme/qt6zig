#include <QByteArray>
#include <QDateTime>
#include <QDebug>
#include <QIODevice>
#include <QSslCertificate>
#include <QSslKey>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsslcertificate.h>
#include "libqsslcertificate.h"
#include "libqsslcertificate.hxx"

QSslCertificate* QSslCertificate_new(QIODevice* device) {
	 return new QSslCertificate(device);
}

QSslCertificate* QSslCertificate_new2() {
	 return new QSslCertificate();
}

QSslCertificate* QSslCertificate_new3(const QSslCertificate* other) {
	 return new QSslCertificate(*other);
}

QSslCertificate* QSslCertificate_new4(QIODevice* device, int format) {
	 return new QSslCertificate(device, static_cast<QSsl::EncodingFormat>(format));
}

QSslCertificate* QSslCertificate_new5(const libqt_string data) {
	 return new QSslCertificate(QByteArray(data.data, data.len));
}

QSslCertificate* QSslCertificate_new6(const libqt_string data, int format) {
	 return new QSslCertificate(QByteArray(data.data, data.len), static_cast<QSsl::EncodingFormat>(format));
}

void QSslCertificate_OperatorAssign(QSslCertificate* self, const QSslCertificate* other) {
	self->operator=(*other);
}

void QSslCertificate_Swap(QSslCertificate* self, QSslCertificate* other) {
	self->swap(*other);
}

bool QSslCertificate_OperatorEqual(const QSslCertificate* self, const QSslCertificate* other) {
	return self->operator==(*other);
}

bool QSslCertificate_OperatorNotEqual(const QSslCertificate* self, const QSslCertificate* other) {
	return self->operator!=(*other);
}

bool QSslCertificate_IsNull(const QSslCertificate* self) {
	return self->isNull();
}

bool QSslCertificate_IsBlacklisted(const QSslCertificate* self) {
	return self->isBlacklisted();
}

bool QSslCertificate_IsSelfSigned(const QSslCertificate* self) {
	return self->isSelfSigned();
}

void QSslCertificate_Clear(QSslCertificate* self) {
	self->clear();
}

libqt_string QSslCertificate_Version(const QSslCertificate* self) {
	QByteArray _qb = self->version();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSslCertificate_SerialNumber(const QSslCertificate* self) {
	QByteArray _qb = self->serialNumber();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSslCertificate_Digest(const QSslCertificate* self) {
	QByteArray _qb = self->digest();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QSslCertificate_IssuerInfo(const QSslCertificate* self, int info) {
	return self->issuerInfo(static_cast<QSslCertificate::SubjectInfo>(info));
}

libqt_list QSslCertificate_IssuerInfo2(const QSslCertificate* self, const libqt_string attribute) {
	return self->issuerInfo(QByteArray(attribute.data, attribute.len));
}

libqt_list QSslCertificate_SubjectInfo(const QSslCertificate* self, int info) {
	return self->subjectInfo(static_cast<QSslCertificate::SubjectInfo>(info));
}

libqt_list QSslCertificate_SubjectInfo2(const QSslCertificate* self, const libqt_string attribute) {
	return self->subjectInfo(QByteArray(attribute.data, attribute.len));
}

libqt_string QSslCertificate_IssuerDisplayName(const QSslCertificate* self) {
	QString _ret = self->issuerDisplayName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSslCertificate_SubjectDisplayName(const QSslCertificate* self) {
	QString _ret = self->subjectDisplayName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QSslCertificate_SubjectInfoAttributes(const QSslCertificate* self) {
	return self->subjectInfoAttributes();
}

libqt_list QSslCertificate_IssuerInfoAttributes(const QSslCertificate* self) {
	return self->issuerInfoAttributes();
}

libqt_map QSslCertificate_SubjectAlternativeNames(const QSslCertificate* self) {
	return self->subjectAlternativeNames();
}

QDateTime* QSslCertificate_EffectiveDate(const QSslCertificate* self) {
	return new QDateTime(self->effectiveDate());
}

QDateTime* QSslCertificate_ExpiryDate(const QSslCertificate* self) {
	return new QDateTime(self->expiryDate());
}

QSslKey* QSslCertificate_PublicKey(const QSslCertificate* self) {
	return new QSslKey(self->publicKey());
}

libqt_list QSslCertificate_Extensions(const QSslCertificate* self) {
	return self->extensions();
}

libqt_string QSslCertificate_ToPem(const QSslCertificate* self) {
	QByteArray _qb = self->toPem();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSslCertificate_ToDer(const QSslCertificate* self) {
	QByteArray _qb = self->toDer();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSslCertificate_ToText(const QSslCertificate* self) {
	QString _ret = self->toText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QSslCertificate_FromPath(const libqt_string path) {
	return QSslCertificate::fromPath(QString::fromUtf8(path.data, path.len));
}

libqt_list QSslCertificate_FromDevice(QIODevice* device) {
	return QSslCertificate::fromDevice(device);
}

libqt_list QSslCertificate_FromData(const libqt_string data) {
	return QSslCertificate::fromData(QByteArray(data.data, data.len));
}

libqt_list QSslCertificate_Verify(const libqt_list certificateChain) {
	return QSslCertificate::verify(*certificateChain);
}

bool QSslCertificate_ImportPkcs12(QIODevice* device, QSslKey* key, QSslCertificate* cert) {
	return QSslCertificate::importPkcs12(device, key, cert);
}

void* QSslCertificate_Handle(const QSslCertificate* self) {
	return self->handle();
}

libqt_string QSslCertificate_Digest1(const QSslCertificate* self, int algorithm) {
	QByteArray _qb = self->digest(static_cast<QCryptographicHash::Algorithm>(algorithm));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QSslCertificate_FromPath2(const libqt_string path, int format) {
	return QSslCertificate::fromPath(QString::fromUtf8(path.data, path.len), static_cast<QSsl::EncodingFormat>(format));
}

libqt_list QSslCertificate_FromPath3(const libqt_string path, int format, int syntax) {
	return QSslCertificate::fromPath(QString::fromUtf8(path.data, path.len), static_cast<QSsl::EncodingFormat>(format), static_cast<QSslCertificate::PatternSyntax>(syntax));
}

libqt_list QSslCertificate_FromDevice2(QIODevice* device, int format) {
	return QSslCertificate::fromDevice(device, static_cast<QSsl::EncodingFormat>(format));
}

libqt_list QSslCertificate_FromData2(const libqt_string data, int format) {
	return QSslCertificate::fromData(QByteArray(data.data, data.len), static_cast<QSsl::EncodingFormat>(format));
}

libqt_list QSslCertificate_Verify2(const libqt_list certificateChain, const libqt_string hostName) {
	return QSslCertificate::verify(*certificateChain, QString::fromUtf8(hostName.data, hostName.len));
}

bool QSslCertificate_ImportPkcs124(QIODevice* device, QSslKey* key, QSslCertificate* cert, libqt_list caCertificates) {
	return QSslCertificate::importPkcs12(device, key, cert, caCertificates);
}

bool QSslCertificate_ImportPkcs125(QIODevice* device, QSslKey* key, QSslCertificate* cert, libqt_list caCertificates, const libqt_string passPhrase) {
	return QSslCertificate::importPkcs12(device, key, cert, caCertificates, QByteArray(passPhrase.data, passPhrase.len));
}

void QSslCertificate_Delete(QSslCertificate* self) {
    delete self;
}

