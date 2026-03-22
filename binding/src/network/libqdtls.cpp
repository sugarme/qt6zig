#include <QByteArray>
#include <QDtls>
#include <QDtlsClientVerifier>
#define WORKAROUND_INNER_CLASS_DEFINITION_QDtlsClientVerifier__GeneratorParameters
#include <QHostAddress>
#include <QObject>
#include <QSslCipher>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslPreSharedKeyAuthenticator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUdpSocket>
#include <qdtls.h>
#include "libqdtls.h"
#include "libqdtls.hxx"

QDtlsClientVerifier* QDtlsClientVerifier_new() {
	 return new QDtlsClientVerifier();
}

QDtlsClientVerifier* QDtlsClientVerifier_new2(QObject* parent) {
	 return new QDtlsClientVerifier(parent);
}

libqt_string QDtlsClientVerifier_Tr(const char* s) {
	QString _ret = QDtlsClientVerifier::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QDtlsClientVerifier_SetCookieGeneratorParameters(QDtlsClientVerifier* self, const QDtlsClientVerifier__GeneratorParameters* params) {
	return self->setCookieGeneratorParameters(*params);
}

QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier_CookieGeneratorParameters(const QDtlsClientVerifier* self) {
	return new QDtlsClientVerifier::GeneratorParameters(self->cookieGeneratorParameters());
}

bool QDtlsClientVerifier_VerifyClient(QDtlsClientVerifier* self, QUdpSocket* socket, const libqt_string dgram, const QHostAddress* address, uint16_t port) {
	return self->verifyClient(socket, QByteArray(dgram.data, dgram.len), *address, port);
}

libqt_string QDtlsClientVerifier_VerifiedHello(const QDtlsClientVerifier* self) {
	QByteArray _qb = self->verifiedHello();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

unsigned char QDtlsClientVerifier_DtlsError(const QDtlsClientVerifier* self) {
	return self->dtlsError();
}

libqt_string QDtlsClientVerifier_DtlsErrorString(const QDtlsClientVerifier* self) {
	QString _ret = self->dtlsErrorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDtlsClientVerifier_Tr2(const char* s, const char* c) {
	QString _ret = QDtlsClientVerifier::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDtlsClientVerifier_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDtlsClientVerifier::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QDtlsClientVerifier_Delete(QDtlsClientVerifier* self) {
    delete self;
}

QDtls* QDtls_new(int mode) {
	 return new QDtls(static_cast<QSslSocket::SslMode>(mode));
}

QDtls* QDtls_new2(int mode, QObject* parent) {
	 return new QDtls(static_cast<QSslSocket::SslMode>(mode), parent);
}

libqt_string QDtls_Tr(const char* s) {
	QString _ret = QDtls::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QDtls_SetPeer(QDtls* self, const QHostAddress* address, uint16_t port) {
	return self->setPeer(*address, port);
}

bool QDtls_SetPeerVerificationName(QDtls* self, const libqt_string name) {
	return self->setPeerVerificationName(QString::fromUtf8(name.data, name.len));
}

QHostAddress* QDtls_PeerAddress(const QDtls* self) {
	return new QHostAddress(self->peerAddress());
}

uint16_t QDtls_PeerPort(const QDtls* self) {
	return self->peerPort();
}

libqt_string QDtls_PeerVerificationName(const QDtls* self) {
	QString _ret = self->peerVerificationName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QDtls_SslMode(const QDtls* self) {
	return self->sslMode();
}

void QDtls_SetMtuHint(QDtls* self, uint16_t mtuHint) {
	self->setMtuHint(mtuHint);
}

uint16_t QDtls_MtuHint(const QDtls* self) {
	return self->mtuHint();
}

bool QDtls_SetCookieGeneratorParameters(QDtls* self, const QDtlsClientVerifier__GeneratorParameters* params) {
	return self->setCookieGeneratorParameters(*params);
}

QDtlsClientVerifier__GeneratorParameters* QDtls_CookieGeneratorParameters(const QDtls* self) {
	return new QDtlsClientVerifier::GeneratorParameters(self->cookieGeneratorParameters());
}

bool QDtls_SetDtlsConfiguration(QDtls* self, const QSslConfiguration* configuration) {
	return self->setDtlsConfiguration(*configuration);
}

QSslConfiguration* QDtls_DtlsConfiguration(const QDtls* self) {
	return new QSslConfiguration(self->dtlsConfiguration());
}

int QDtls_HandshakeState(const QDtls* self) {
	return self->handshakeState();
}

bool QDtls_DoHandshake(QDtls* self, QUdpSocket* socket) {
	return self->doHandshake(socket);
}

bool QDtls_HandleTimeout(QDtls* self, QUdpSocket* socket) {
	return self->handleTimeout(socket);
}

bool QDtls_ResumeHandshake(QDtls* self, QUdpSocket* socket) {
	return self->resumeHandshake(socket);
}

bool QDtls_AbortHandshake(QDtls* self, QUdpSocket* socket) {
	return self->abortHandshake(socket);
}

bool QDtls_Shutdown(QDtls* self, QUdpSocket* socket) {
	return self->shutdown(socket);
}

bool QDtls_IsConnectionEncrypted(const QDtls* self) {
	return self->isConnectionEncrypted();
}

QSslCipher* QDtls_SessionCipher(const QDtls* self) {
	return new QSslCipher(self->sessionCipher());
}

int QDtls_SessionProtocol(const QDtls* self) {
	return self->sessionProtocol();
}

long long QDtls_WriteDatagramEncrypted(QDtls* self, QUdpSocket* socket, const libqt_string dgram) {
	return self->writeDatagramEncrypted(socket, QByteArray(dgram.data, dgram.len));
}

libqt_string QDtls_DecryptDatagram(QDtls* self, QUdpSocket* socket, const libqt_string dgram) {
	QByteArray _qb = self->decryptDatagram(socket, QByteArray(dgram.data, dgram.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

unsigned char QDtls_DtlsError(const QDtls* self) {
	return self->dtlsError();
}

libqt_string QDtls_DtlsErrorString(const QDtls* self) {
	QString _ret = self->dtlsErrorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QDtls_PeerVerificationErrors(const QDtls* self) {
	return self->peerVerificationErrors();
}

void QDtls_IgnoreVerificationErrors(QDtls* self, const libqt_list errorsToIgnore) {
	self->ignoreVerificationErrors(*errorsToIgnore);
}

void QDtls_PskRequired(QDtls* self, QSslPreSharedKeyAuthenticator* authenticator) {
	self->pskRequired(authenticator);
}

void QDtls_Connect_PskRequired(QDtls* self, intptr_t slot) {
    void (*slotFunc)(QDtls*, QSslPreSharedKeyAuthenticator*) = reinterpret_cast<void (*)(QDtls*, QSslPreSharedKeyAuthenticator*)>(slot);
    QDtls::connect(self, &QDtls::pskRequired, [self, slotFunc](QSslPreSharedKeyAuthenticator* authenticator) {
	slotFunc(self, authenticator);
    });
}

void QDtls_HandshakeTimeout(QDtls* self) {
	self->handshakeTimeout();
}

void QDtls_Connect_HandshakeTimeout(QDtls* self, intptr_t slot) {
    void (*slotFunc)(QDtls*) = reinterpret_cast<void (*)(QDtls*)>(slot);
    QDtls::connect(self, &QDtls::handshakeTimeout, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QDtls_Tr2(const char* s, const char* c) {
	QString _ret = QDtls::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDtls_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDtls::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QDtls_SetPeer3(QDtls* self, const QHostAddress* address, uint16_t port, const libqt_string verificationName) {
	return self->setPeer(*address, port, QString::fromUtf8(verificationName.data, verificationName.len));
}

bool QDtls_DoHandshake2(QDtls* self, QUdpSocket* socket, const libqt_string dgram) {
	return self->doHandshake(socket, QByteArray(dgram.data, dgram.len));
}

void QDtls_Delete(QDtls* self) {
    delete self;
}

QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier__GeneratorParameters_new() {
	 return new QDtlsClientVerifier::GeneratorParameters();
}

QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier__GeneratorParameters_new2(int a, const libqt_string s) {
	 return new QDtlsClientVerifier::GeneratorParameters(static_cast<QCryptographicHash::Algorithm>(a), QByteArray(s.data, s.len));
}

QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier__GeneratorParameters_new3(const QDtlsClientVerifier__GeneratorParameters* param1) {
	 return new QDtlsClientVerifier::GeneratorParameters(*param1);
}

int QDtlsClientVerifier__GeneratorParameters_Hash(const QDtlsClientVerifier__GeneratorParameters* self) {
	return self->hash;
}

void QDtlsClientVerifier__GeneratorParameters_SetHash(QDtlsClientVerifier__GeneratorParameters* self, int hash) {
	self->hash;
}

libqt_string QDtlsClientVerifier__GeneratorParameters_Secret(const QDtlsClientVerifier__GeneratorParameters* self) {
	QByteArray _qb = self->secret;
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QDtlsClientVerifier__GeneratorParameters_SetSecret(QDtlsClientVerifier__GeneratorParameters* self, libqt_string secret) {
	self->secret;
}

void QDtlsClientVerifier__GeneratorParameters_OperatorAssign(QDtlsClientVerifier__GeneratorParameters* self, const QDtlsClientVerifier__GeneratorParameters* param1) {
	self->operator=(*param1);
}

void QDtlsClientVerifier__GeneratorParameters_Delete(QDtlsClientVerifier__GeneratorParameters* self) {
    delete self;
}

