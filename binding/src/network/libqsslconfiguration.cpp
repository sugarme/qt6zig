#include <QByteArray>
#include <QSslCertificate>
#include <QSslCipher>
#include <QSslConfiguration>
#include <QSslDiffieHellmanParameters>
#include <QSslKey>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qsslconfiguration.h>
#include "libqsslconfiguration.h"
#include "libqsslconfiguration.hxx"

QSslConfiguration* QSslConfiguration_new() {
	 return new QSslConfiguration();
}

QSslConfiguration* QSslConfiguration_new2(const QSslConfiguration* other) {
	 return new QSslConfiguration(*other);
}

void QSslConfiguration_OperatorAssign(QSslConfiguration* self, const QSslConfiguration* other) {
	self->operator=(*other);
}

void QSslConfiguration_Swap(QSslConfiguration* self, QSslConfiguration* other) {
	self->swap(*other);
}

bool QSslConfiguration_OperatorEqual(const QSslConfiguration* self, const QSslConfiguration* other) {
	return self->operator==(*other);
}

bool QSslConfiguration_OperatorNotEqual(const QSslConfiguration* self, const QSslConfiguration* other) {
	return self->operator!=(*other);
}

bool QSslConfiguration_IsNull(const QSslConfiguration* self) {
	return self->isNull();
}

int QSslConfiguration_Protocol(const QSslConfiguration* self) {
	return self->protocol();
}

void QSslConfiguration_SetProtocol(QSslConfiguration* self, int protocol) {
	self->setProtocol(static_cast<QSsl::SslProtocol>(protocol));
}

int QSslConfiguration_PeerVerifyMode(const QSslConfiguration* self) {
	return self->peerVerifyMode();
}

void QSslConfiguration_SetPeerVerifyMode(QSslConfiguration* self, int mode) {
	self->setPeerVerifyMode(static_cast<QSslSocket::PeerVerifyMode>(mode));
}

int QSslConfiguration_PeerVerifyDepth(const QSslConfiguration* self) {
	return self->peerVerifyDepth();
}

void QSslConfiguration_SetPeerVerifyDepth(QSslConfiguration* self, int depth) {
	self->setPeerVerifyDepth(depth);
}

libqt_list QSslConfiguration_LocalCertificateChain(const QSslConfiguration* self) {
	return self->localCertificateChain();
}

void QSslConfiguration_SetLocalCertificateChain(QSslConfiguration* self, const libqt_list localChain) {
	self->setLocalCertificateChain(*localChain);
}

QSslCertificate* QSslConfiguration_LocalCertificate(const QSslConfiguration* self) {
	return new QSslCertificate(self->localCertificate());
}

void QSslConfiguration_SetLocalCertificate(QSslConfiguration* self, const QSslCertificate* certificate) {
	self->setLocalCertificate(*certificate);
}

QSslCertificate* QSslConfiguration_PeerCertificate(const QSslConfiguration* self) {
	return new QSslCertificate(self->peerCertificate());
}

libqt_list QSslConfiguration_PeerCertificateChain(const QSslConfiguration* self) {
	return self->peerCertificateChain();
}

QSslCipher* QSslConfiguration_SessionCipher(const QSslConfiguration* self) {
	return new QSslCipher(self->sessionCipher());
}

int QSslConfiguration_SessionProtocol(const QSslConfiguration* self) {
	return self->sessionProtocol();
}

QSslKey* QSslConfiguration_PrivateKey(const QSslConfiguration* self) {
	return new QSslKey(self->privateKey());
}

void QSslConfiguration_SetPrivateKey(QSslConfiguration* self, const QSslKey* key) {
	self->setPrivateKey(*key);
}

libqt_list QSslConfiguration_Ciphers(const QSslConfiguration* self) {
	return self->ciphers();
}

void QSslConfiguration_SetCiphers(QSslConfiguration* self, const libqt_list ciphers) {
	self->setCiphers(*ciphers);
}

void QSslConfiguration_SetCiphers2(QSslConfiguration* self, const libqt_string ciphers) {
	self->setCiphers(QString::fromUtf8(ciphers.data, ciphers.len));
}

libqt_list QSslConfiguration_SupportedCiphers() {
	return QSslConfiguration::supportedCiphers();
}

libqt_list QSslConfiguration_CaCertificates(const QSslConfiguration* self) {
	return self->caCertificates();
}

void QSslConfiguration_SetCaCertificates(QSslConfiguration* self, const libqt_list certificates) {
	self->setCaCertificates(*certificates);
}

bool QSslConfiguration_AddCaCertificates(QSslConfiguration* self, const libqt_string path) {
	return self->addCaCertificates(QString::fromUtf8(path.data, path.len));
}

void QSslConfiguration_AddCaCertificate(QSslConfiguration* self, const QSslCertificate* certificate) {
	self->addCaCertificate(*certificate);
}

void QSslConfiguration_AddCaCertificates2(QSslConfiguration* self, const libqt_list certificates) {
	self->addCaCertificates(*certificates);
}

libqt_list QSslConfiguration_SystemCaCertificates() {
	return QSslConfiguration::systemCaCertificates();
}

void QSslConfiguration_SetSslOption(QSslConfiguration* self, int option, bool on) {
	self->setSslOption(static_cast<QSsl::SslOption>(option), on);
}

bool QSslConfiguration_TestSslOption(const QSslConfiguration* self, int option) {
	return self->testSslOption(static_cast<QSsl::SslOption>(option));
}

libqt_string QSslConfiguration_SessionTicket(const QSslConfiguration* self) {
	QByteArray _qb = self->sessionTicket();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSslConfiguration_SetSessionTicket(QSslConfiguration* self, const libqt_string sessionTicket) {
	self->setSessionTicket(QByteArray(sessionTicket.data, sessionTicket.len));
}

int QSslConfiguration_SessionTicketLifeTimeHint(const QSslConfiguration* self) {
	return self->sessionTicketLifeTimeHint();
}

QSslKey* QSslConfiguration_EphemeralServerKey(const QSslConfiguration* self) {
	return new QSslKey(self->ephemeralServerKey());
}

libqt_list QSslConfiguration_EllipticCurves(const QSslConfiguration* self) {
	return self->ellipticCurves();
}

void QSslConfiguration_SetEllipticCurves(QSslConfiguration* self, const libqt_list curves) {
	self->setEllipticCurves(*curves);
}

libqt_list QSslConfiguration_SupportedEllipticCurves() {
	return QSslConfiguration::supportedEllipticCurves();
}

libqt_string QSslConfiguration_PreSharedKeyIdentityHint(const QSslConfiguration* self) {
	QByteArray _qb = self->preSharedKeyIdentityHint();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSslConfiguration_SetPreSharedKeyIdentityHint(QSslConfiguration* self, const libqt_string hint) {
	self->setPreSharedKeyIdentityHint(QByteArray(hint.data, hint.len));
}

QSslDiffieHellmanParameters* QSslConfiguration_DiffieHellmanParameters(const QSslConfiguration* self) {
	return new QSslDiffieHellmanParameters(self->diffieHellmanParameters());
}

void QSslConfiguration_SetDiffieHellmanParameters(QSslConfiguration* self, const QSslDiffieHellmanParameters* dhparams) {
	self->setDiffieHellmanParameters(*dhparams);
}

libqt_map QSslConfiguration_BackendConfiguration(const QSslConfiguration* self) {
	return self->backendConfiguration();
}

void QSslConfiguration_SetBackendConfigurationOption(QSslConfiguration* self, const libqt_string name, const QVariant* value) {
	self->setBackendConfigurationOption(QByteArray(name.data, name.len), *value);
}

void QSslConfiguration_SetBackendConfiguration(QSslConfiguration* self) {
	self->setBackendConfiguration();
}

QSslConfiguration* QSslConfiguration_DefaultConfiguration() {
	return new QSslConfiguration(QSslConfiguration::defaultConfiguration());
}

void QSslConfiguration_SetDefaultConfiguration(const QSslConfiguration* configuration) {
	QSslConfiguration::setDefaultConfiguration(*configuration);
}

bool QSslConfiguration_DtlsCookieVerificationEnabled(const QSslConfiguration* self) {
	return self->dtlsCookieVerificationEnabled();
}

void QSslConfiguration_SetDtlsCookieVerificationEnabled(QSslConfiguration* self, bool enable) {
	self->setDtlsCookieVerificationEnabled(enable);
}

QSslConfiguration* QSslConfiguration_DefaultDtlsConfiguration() {
	return new QSslConfiguration(QSslConfiguration::defaultDtlsConfiguration());
}

void QSslConfiguration_SetDefaultDtlsConfiguration(const QSslConfiguration* configuration) {
	QSslConfiguration::setDefaultDtlsConfiguration(*configuration);
}

bool QSslConfiguration_HandshakeMustInterruptOnError(const QSslConfiguration* self) {
	return self->handshakeMustInterruptOnError();
}

void QSslConfiguration_SetHandshakeMustInterruptOnError(QSslConfiguration* self, bool interrupt) {
	self->setHandshakeMustInterruptOnError(interrupt);
}

bool QSslConfiguration_MissingCertificateIsFatal(const QSslConfiguration* self) {
	return self->missingCertificateIsFatal();
}

void QSslConfiguration_SetMissingCertificateIsFatal(QSslConfiguration* self, bool cannotRecover) {
	self->setMissingCertificateIsFatal(cannotRecover);
}

void QSslConfiguration_SetOcspStaplingEnabled(QSslConfiguration* self, bool enable) {
	self->setOcspStaplingEnabled(enable);
}

bool QSslConfiguration_OcspStaplingEnabled(const QSslConfiguration* self) {
	return self->ocspStaplingEnabled();
}

void QSslConfiguration_SetAllowedNextProtocols(QSslConfiguration* self, const libqt_list protocols) {
	self->setAllowedNextProtocols(*protocols);
}

libqt_list QSslConfiguration_AllowedNextProtocols(const QSslConfiguration* self) {
	return self->allowedNextProtocols();
}

libqt_string QSslConfiguration_NextNegotiatedProtocol(const QSslConfiguration* self) {
	QByteArray _qb = self->nextNegotiatedProtocol();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QSslConfiguration_NextProtocolNegotiationStatus(const QSslConfiguration* self) {
	return self->nextProtocolNegotiationStatus();
}

bool QSslConfiguration_AddCaCertificates22(QSslConfiguration* self, const libqt_string path, int format) {
	return self->addCaCertificates(QString::fromUtf8(path.data, path.len), static_cast<QSsl::EncodingFormat>(format));
}

bool QSslConfiguration_AddCaCertificates3(QSslConfiguration* self, const libqt_string path, int format, int syntax) {
	return self->addCaCertificates(QString::fromUtf8(path.data, path.len), static_cast<QSsl::EncodingFormat>(format), static_cast<QSslCertificate::PatternSyntax>(syntax));
}

void QSslConfiguration_SetBackendConfiguration1(QSslConfiguration* self, const libqt_map backendConfiguration) {
	self->setBackendConfiguration(*backendConfiguration);
}

void QSslConfiguration_Delete(QSslConfiguration* self) {
    delete self;
}

