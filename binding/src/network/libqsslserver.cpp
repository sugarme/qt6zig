#include <QObject>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslPreSharedKeyAuthenticator>
#include <QSslServer>
#include <QSslSocket>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTcpServer>
#include <qsslserver.h>
#include "libqsslserver.h"
#include "libqsslserver.hxx"

QSslServer* QSslServer_new() {
	 return new VirtualQSslServer();
}

QSslServer* QSslServer_new2(QObject* parent) {
	 return new VirtualQSslServer(parent);
}

libqt_string QSslServer_Tr(const char* s) {
	QString _ret = QSslServer::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSslServer_SetSslConfiguration(QSslServer* self, const QSslConfiguration* sslConfiguration) {
	self->setSslConfiguration(*sslConfiguration);
}

QSslConfiguration* QSslServer_SslConfiguration(const QSslServer* self) {
	return new QSslConfiguration(self->sslConfiguration());
}

void QSslServer_SetHandshakeTimeout(QSslServer* self, int timeout) {
	self->setHandshakeTimeout(timeout);
}

int QSslServer_HandshakeTimeout(const QSslServer* self) {
	return self->handshakeTimeout();
}

void QSslServer_SslErrors(QSslServer* self, QSslSocket* socket, const libqt_list errors) {
	self->sslErrors(socket, QList<QSslError>());
}

void QSslServer_Connect_SslErrors(QSslServer* self, intptr_t slot) {
    void (*slotFunc)(QSslServer*, QSslSocket*, libqt_list) = reinterpret_cast<void (*)(QSslServer*, QSslSocket*, libqt_list)>(slot);
    QSslServer::connect(self, &QSslServer::sslErrors, [self, slotFunc](QSslSocket* socket, const QList<QSslError>& errors) {
	slotFunc(self, socket, errors);
    });
}

void QSslServer_PeerVerifyError(QSslServer* self, QSslSocket* socket, const QSslError* errorVal) {
	self->peerVerifyError(socket, *errorVal);
}

void QSslServer_Connect_PeerVerifyError(QSslServer* self, intptr_t slot) {
    void (*slotFunc)(QSslServer*, QSslSocket*, const QSslError*) = reinterpret_cast<void (*)(QSslServer*, QSslSocket*, const QSslError*)>(slot);
    QSslServer::connect(self, &QSslServer::peerVerifyError, [self, slotFunc](QSslSocket* socket, const QSslError& errorVal) {
	slotFunc(self, socket, errorVal);
    });
}

void QSslServer_ErrorOccurred(QSslServer* self, QSslSocket* socket, int errorVal) {
	self->errorOccurred(socket, static_cast<QAbstractSocket::SocketError>(errorVal));
}

void QSslServer_Connect_ErrorOccurred(QSslServer* self, intptr_t slot) {
    void (*slotFunc)(QSslServer*, QSslSocket*, int) = reinterpret_cast<void (*)(QSslServer*, QSslSocket*, int)>(slot);
    QSslServer::connect(self, &QSslServer::errorOccurred, [self, slotFunc](QSslSocket* socket, QAbstractSocket::SocketError errorVal) {
	slotFunc(self, socket, errorVal);
    });
}

void QSslServer_PreSharedKeyAuthenticationRequired(QSslServer* self, QSslSocket* socket, QSslPreSharedKeyAuthenticator* authenticator) {
	self->preSharedKeyAuthenticationRequired(socket, authenticator);
}

void QSslServer_Connect_PreSharedKeyAuthenticationRequired(QSslServer* self, intptr_t slot) {
    void (*slotFunc)(QSslServer*, QSslSocket*, QSslPreSharedKeyAuthenticator*) = reinterpret_cast<void (*)(QSslServer*, QSslSocket*, QSslPreSharedKeyAuthenticator*)>(slot);
    QSslServer::connect(self, &QSslServer::preSharedKeyAuthenticationRequired, [self, slotFunc](QSslSocket* socket, QSslPreSharedKeyAuthenticator* authenticator) {
	slotFunc(self, socket, authenticator);
    });
}

void QSslServer_AlertSent(QSslServer* self, QSslSocket* socket, int level, int typeVal, const libqt_string description) {
	self->alertSent(socket, static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(typeVal), QString::fromUtf8(description.data, description.len));
}

void QSslServer_Connect_AlertSent(QSslServer* self, intptr_t slot) {
    void (*slotFunc)(QSslServer*, QSslSocket*, int, int, const char*) = reinterpret_cast<void (*)(QSslServer*, QSslSocket*, int, int, const char*)>(slot);
    QSslServer::connect(self, &QSslServer::alertSent, [self, slotFunc](QSslSocket* socket, QSsl::AlertLevel level, QSsl::AlertType typeVal, const QString& description) {
	slotFunc(self, socket, level, typeVal, description);
    });
}

void QSslServer_AlertReceived(QSslServer* self, QSslSocket* socket, int level, int typeVal, const libqt_string description) {
	self->alertReceived(socket, static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(typeVal), QString::fromUtf8(description.data, description.len));
}

void QSslServer_Connect_AlertReceived(QSslServer* self, intptr_t slot) {
    void (*slotFunc)(QSslServer*, QSslSocket*, int, int, const char*) = reinterpret_cast<void (*)(QSslServer*, QSslSocket*, int, int, const char*)>(slot);
    QSslServer::connect(self, &QSslServer::alertReceived, [self, slotFunc](QSslSocket* socket, QSsl::AlertLevel level, QSsl::AlertType typeVal, const QString& description) {
	slotFunc(self, socket, level, typeVal, description);
    });
}

void QSslServer_HandshakeInterruptedOnError(QSslServer* self, QSslSocket* socket, const QSslError* errorVal) {
	self->handshakeInterruptedOnError(socket, *errorVal);
}

void QSslServer_Connect_HandshakeInterruptedOnError(QSslServer* self, intptr_t slot) {
    void (*slotFunc)(QSslServer*, QSslSocket*, const QSslError*) = reinterpret_cast<void (*)(QSslServer*, QSslSocket*, const QSslError*)>(slot);
    QSslServer::connect(self, &QSslServer::handshakeInterruptedOnError, [self, slotFunc](QSslSocket* socket, const QSslError& errorVal) {
	slotFunc(self, socket, errorVal);
    });
}

void QSslServer_StartedEncryptionHandshake(QSslServer* self, QSslSocket* socket) {
	self->startedEncryptionHandshake(socket);
}

void QSslServer_Connect_StartedEncryptionHandshake(QSslServer* self, intptr_t slot) {
    void (*slotFunc)(QSslServer*, QSslSocket*) = reinterpret_cast<void (*)(QSslServer*, QSslSocket*)>(slot);
    QSslServer::connect(self, &QSslServer::startedEncryptionHandshake, [self, slotFunc](QSslSocket* socket) {
	slotFunc(self, socket);
    });
}

libqt_string QSslServer_Tr2(const char* s, const char* c) {
	QString _ret = QSslServer::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSslServer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSslServer::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSslServer_Delete(QSslServer* self) {
    delete self;
}

