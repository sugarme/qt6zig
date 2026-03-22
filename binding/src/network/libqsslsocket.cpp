#include <QByteArray>
#include <QObject>
#include <QSslCertificate>
#include <QSslCipher>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslKey>
#include <QSslPreSharedKeyAuthenticator>
#include <QSslSocket>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTcpSocket>
#include <QVariant>
#include <qsslsocket.h>
#include "libqsslsocket.h"
#include "libqsslsocket.hxx"

QSslSocket* QSslSocket_new() {
	 return new VirtualQSslSocket();
}

QSslSocket* QSslSocket_new2(QObject* parent) {
	 return new VirtualQSslSocket(parent);
}

libqt_string QSslSocket_Tr(const char* s) {
	QString _ret = QSslSocket::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSslSocket_Resume(QSslSocket* self) {
	self->resume();
}

void QSslSocket_ConnectToHostEncrypted(QSslSocket* self, const libqt_string hostName, uint16_t port) {
	self->connectToHostEncrypted(QString::fromUtf8(hostName.data, hostName.len), port);
}

void QSslSocket_ConnectToHostEncrypted2(QSslSocket* self, const libqt_string hostName, uint16_t port, const libqt_string sslPeerName) {
	self->connectToHostEncrypted(QString::fromUtf8(hostName.data, hostName.len), port, QString::fromUtf8(sslPeerName.data, sslPeerName.len));
}

bool QSslSocket_SetSocketDescriptor(QSslSocket* self, intptr_t socketDescriptor, int state, int openMode) {
	return self->setSocketDescriptor(socketDescriptor, static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

void QSslSocket_ConnectToHost(QSslSocket* self, const libqt_string hostName, uint16_t port, int openMode, int protocol) {
	self->connectToHost(QString::fromUtf8(hostName.data, hostName.len), port, static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

void QSslSocket_DisconnectFromHost(QSslSocket* self) {
	self->disconnectFromHost();
}

void QSslSocket_SetSocketOption(QSslSocket* self, int option, const QVariant* value) {
	self->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}

QVariant* QSslSocket_SocketOption(QSslSocket* self, int option) {
	return new QVariant(self->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}

int QSslSocket_Mode(const QSslSocket* self) {
	return self->mode();
}

bool QSslSocket_IsEncrypted(const QSslSocket* self) {
	return self->isEncrypted();
}

int QSslSocket_Protocol(const QSslSocket* self) {
	return self->protocol();
}

void QSslSocket_SetProtocol(QSslSocket* self, int protocol) {
	self->setProtocol(static_cast<QSsl::SslProtocol>(protocol));
}

int QSslSocket_PeerVerifyMode(const QSslSocket* self) {
	return self->peerVerifyMode();
}

void QSslSocket_SetPeerVerifyMode(QSslSocket* self, int mode) {
	self->setPeerVerifyMode(static_cast<QSslSocket::PeerVerifyMode>(mode));
}

int QSslSocket_PeerVerifyDepth(const QSslSocket* self) {
	return self->peerVerifyDepth();
}

void QSslSocket_SetPeerVerifyDepth(QSslSocket* self, int depth) {
	self->setPeerVerifyDepth(depth);
}

libqt_string QSslSocket_PeerVerifyName(const QSslSocket* self) {
	QString _ret = self->peerVerifyName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSslSocket_SetPeerVerifyName(QSslSocket* self, const libqt_string hostName) {
	self->setPeerVerifyName(QString::fromUtf8(hostName.data, hostName.len));
}

long long QSslSocket_BytesAvailable(const QSslSocket* self) {
	return self->bytesAvailable();
}

long long QSslSocket_BytesToWrite(const QSslSocket* self) {
	return self->bytesToWrite();
}

bool QSslSocket_CanReadLine(const QSslSocket* self) {
	return self->canReadLine();
}

void QSslSocket_Close(QSslSocket* self) {
	self->close();
}

bool QSslSocket_AtEnd(const QSslSocket* self) {
	return self->atEnd();
}

void QSslSocket_SetReadBufferSize(QSslSocket* self, long long size) {
	self->setReadBufferSize(size);
}

long long QSslSocket_EncryptedBytesAvailable(const QSslSocket* self) {
	return self->encryptedBytesAvailable();
}

long long QSslSocket_EncryptedBytesToWrite(const QSslSocket* self) {
	return self->encryptedBytesToWrite();
}

QSslConfiguration* QSslSocket_SslConfiguration(const QSslSocket* self) {
	return new QSslConfiguration(self->sslConfiguration());
}

void QSslSocket_SetSslConfiguration(QSslSocket* self, const QSslConfiguration* config) {
	self->setSslConfiguration(*config);
}

void QSslSocket_SetLocalCertificateChain(QSslSocket* self, const libqt_list localChain) {
	self->setLocalCertificateChain(QList<QSslCertificate>());
}

libqt_list QSslSocket_LocalCertificateChain(const QSslSocket* self) {
	auto _ret = self->localCertificateChain();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

void QSslSocket_SetLocalCertificate(QSslSocket* self, const QSslCertificate* certificate) {
	self->setLocalCertificate(*certificate);
}

void QSslSocket_SetLocalCertificate2(QSslSocket* self, const libqt_string fileName) {
	self->setLocalCertificate(QString::fromUtf8(fileName.data, fileName.len));
}

QSslCertificate* QSslSocket_LocalCertificate(const QSslSocket* self) {
	return new QSslCertificate(self->localCertificate());
}

QSslCertificate* QSslSocket_PeerCertificate(const QSslSocket* self) {
	return new QSslCertificate(self->peerCertificate());
}

libqt_list QSslSocket_PeerCertificateChain(const QSslSocket* self) {
	auto _ret = self->peerCertificateChain();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

QSslCipher* QSslSocket_SessionCipher(const QSslSocket* self) {
	return new QSslCipher(self->sessionCipher());
}

int QSslSocket_SessionProtocol(const QSslSocket* self) {
	return self->sessionProtocol();
}

libqt_list QSslSocket_OcspResponses(const QSslSocket* self) {
	auto _ret = self->ocspResponses();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

void QSslSocket_SetPrivateKey(QSslSocket* self, const QSslKey* key) {
	self->setPrivateKey(*key);
}

void QSslSocket_SetPrivateKey2(QSslSocket* self, const libqt_string fileName) {
	self->setPrivateKey(QString::fromUtf8(fileName.data, fileName.len));
}

QSslKey* QSslSocket_PrivateKey(const QSslSocket* self) {
	return new QSslKey(self->privateKey());
}

bool QSslSocket_WaitForConnected(QSslSocket* self, int msecs) {
	return self->waitForConnected(msecs);
}

bool QSslSocket_WaitForEncrypted(QSslSocket* self) {
	return self->waitForEncrypted();
}

bool QSslSocket_WaitForReadyRead(QSslSocket* self, int msecs) {
	return self->waitForReadyRead(msecs);
}

bool QSslSocket_WaitForBytesWritten(QSslSocket* self, int msecs) {
	return self->waitForBytesWritten(msecs);
}

bool QSslSocket_WaitForDisconnected(QSslSocket* self, int msecs) {
	return self->waitForDisconnected(msecs);
}

libqt_list QSslSocket_SslHandshakeErrors(const QSslSocket* self) {
	auto _ret = self->sslHandshakeErrors();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

bool QSslSocket_SupportsSsl() {
	return QSslSocket::supportsSsl();
}

long QSslSocket_SslLibraryVersionNumber() {
	return QSslSocket::sslLibraryVersionNumber();
}

libqt_string QSslSocket_SslLibraryVersionString() {
	QString _ret = QSslSocket::sslLibraryVersionString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

long QSslSocket_SslLibraryBuildVersionNumber() {
	return QSslSocket::sslLibraryBuildVersionNumber();
}

libqt_string QSslSocket_SslLibraryBuildVersionString() {
	QString _ret = QSslSocket::sslLibraryBuildVersionString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QSslSocket_AvailableBackends() {
	auto _ret = QSslSocket::availableBackends();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

libqt_string QSslSocket_ActiveBackend() {
	QString _ret = QSslSocket::activeBackend();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QSslSocket_SetActiveBackend(const libqt_string backendName) {
	return QSslSocket::setActiveBackend(QString::fromUtf8(backendName.data, backendName.len));
}

libqt_list QSslSocket_SupportedProtocols() {
	auto _ret = QSslSocket::supportedProtocols();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

bool QSslSocket_IsProtocolSupported(int protocol) {
	return QSslSocket::isProtocolSupported(static_cast<QSsl::SslProtocol>(protocol));
}

libqt_list QSslSocket_ImplementedClasses() {
	auto _ret = QSslSocket::implementedClasses();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

bool QSslSocket_IsClassImplemented(int cl) {
	return QSslSocket::isClassImplemented(static_cast<QSsl::ImplementedClass>(cl));
}

libqt_list QSslSocket_SupportedFeatures() {
	auto _ret = QSslSocket::supportedFeatures();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

bool QSslSocket_IsFeatureSupported(int feat) {
	return QSslSocket::isFeatureSupported(static_cast<QSsl::SupportedFeature>(feat));
}

void QSslSocket_IgnoreSslErrors(QSslSocket* self, const libqt_list errors) {
	self->ignoreSslErrors(QList<QSslError>());
}

void QSslSocket_ContinueInterruptedHandshake(QSslSocket* self) {
	self->continueInterruptedHandshake();
}

void QSslSocket_StartClientEncryption(QSslSocket* self) {
	self->startClientEncryption();
}

void QSslSocket_StartServerEncryption(QSslSocket* self) {
	self->startServerEncryption();
}

void QSslSocket_IgnoreSslErrors2(QSslSocket* self) {
	self->ignoreSslErrors();
}

void QSslSocket_Encrypted(QSslSocket* self) {
	self->encrypted();
}

void QSslSocket_Connect_Encrypted(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*) = reinterpret_cast<void (*)(QSslSocket*)>(slot);
    QSslSocket::connect(self, &QSslSocket::encrypted, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSslSocket_PeerVerifyError(QSslSocket* self, const QSslError* errorVal) {
	self->peerVerifyError(*errorVal);
}

void QSslSocket_Connect_PeerVerifyError(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, const QSslError*) = reinterpret_cast<void (*)(QSslSocket*, const QSslError*)>(slot);
    QSslSocket::connect(self, &QSslSocket::peerVerifyError, [self, slotFunc](const QSslError& errorVal) {
	slotFunc(self, errorVal);
    });
}

void QSslSocket_SslErrors(QSslSocket* self, const libqt_list errors) {
	self->sslErrors(QList<QSslError>());
}

void QSslSocket_Connect_SslErrors(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, libqt_list) = reinterpret_cast<void (*)(QSslSocket*, libqt_list)>(slot);
    QSslSocket::connect(self, &QSslSocket::sslErrors, [self, slotFunc](const QList<QSslError>& errors) {
	slotFunc(self, errors);
    });
}

void QSslSocket_ModeChanged(QSslSocket* self, int newMode) {
	self->modeChanged(static_cast<QSslSocket::SslMode>(newMode));
}

void QSslSocket_Connect_ModeChanged(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, int) = reinterpret_cast<void (*)(QSslSocket*, int)>(slot);
    QSslSocket::connect(self, &QSslSocket::modeChanged, [self, slotFunc](QSslSocket::SslMode newMode) {
	slotFunc(self, newMode);
    });
}

void QSslSocket_EncryptedBytesWritten(QSslSocket* self, long long totalBytes) {
	self->encryptedBytesWritten(totalBytes);
}

void QSslSocket_Connect_EncryptedBytesWritten(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, long long) = reinterpret_cast<void (*)(QSslSocket*, long long)>(slot);
    QSslSocket::connect(self, &QSslSocket::encryptedBytesWritten, [self, slotFunc](qint64 totalBytes) {
	slotFunc(self, totalBytes);
    });
}

void QSslSocket_PreSharedKeyAuthenticationRequired(QSslSocket* self, QSslPreSharedKeyAuthenticator* authenticator) {
	self->preSharedKeyAuthenticationRequired(authenticator);
}

void QSslSocket_Connect_PreSharedKeyAuthenticationRequired(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, QSslPreSharedKeyAuthenticator*) = reinterpret_cast<void (*)(QSslSocket*, QSslPreSharedKeyAuthenticator*)>(slot);
    QSslSocket::connect(self, &QSslSocket::preSharedKeyAuthenticationRequired, [self, slotFunc](QSslPreSharedKeyAuthenticator* authenticator) {
	slotFunc(self, authenticator);
    });
}

void QSslSocket_NewSessionTicketReceived(QSslSocket* self) {
	self->newSessionTicketReceived();
}

void QSslSocket_Connect_NewSessionTicketReceived(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*) = reinterpret_cast<void (*)(QSslSocket*)>(slot);
    QSslSocket::connect(self, &QSslSocket::newSessionTicketReceived, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSslSocket_AlertSent(QSslSocket* self, int level, int typeVal, const libqt_string description) {
	self->alertSent(static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(typeVal), QString::fromUtf8(description.data, description.len));
}

void QSslSocket_Connect_AlertSent(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, int, int, const char*) = reinterpret_cast<void (*)(QSslSocket*, int, int, const char*)>(slot);
    QSslSocket::connect(self, &QSslSocket::alertSent, [self, slotFunc](QSsl::AlertLevel level, QSsl::AlertType typeVal, const QString& description) {
	slotFunc(self, level, typeVal, description);
    });
}

void QSslSocket_AlertReceived(QSslSocket* self, int level, int typeVal, const libqt_string description) {
	self->alertReceived(static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(typeVal), QString::fromUtf8(description.data, description.len));
}

void QSslSocket_Connect_AlertReceived(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, int, int, const char*) = reinterpret_cast<void (*)(QSslSocket*, int, int, const char*)>(slot);
    QSslSocket::connect(self, &QSslSocket::alertReceived, [self, slotFunc](QSsl::AlertLevel level, QSsl::AlertType typeVal, const QString& description) {
	slotFunc(self, level, typeVal, description);
    });
}

void QSslSocket_HandshakeInterruptedOnError(QSslSocket* self, const QSslError* errorVal) {
	self->handshakeInterruptedOnError(*errorVal);
}

void QSslSocket_Connect_HandshakeInterruptedOnError(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, const QSslError*) = reinterpret_cast<void (*)(QSslSocket*, const QSslError*)>(slot);
    QSslSocket::connect(self, &QSslSocket::handshakeInterruptedOnError, [self, slotFunc](const QSslError& errorVal) {
	slotFunc(self, errorVal);
    });
}

libqt_string QSslSocket_Tr2(const char* s, const char* c) {
	QString _ret = QSslSocket::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSslSocket_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSslSocket::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSslSocket_ConnectToHostEncrypted3(QSslSocket* self, const libqt_string hostName, uint16_t port, int mode) {
	self->connectToHostEncrypted(QString::fromUtf8(hostName.data, hostName.len), port, static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode));
}

void QSslSocket_ConnectToHostEncrypted4(QSslSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol) {
	self->connectToHostEncrypted(QString::fromUtf8(hostName.data, hostName.len), port, static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

void QSslSocket_ConnectToHostEncrypted42(QSslSocket* self, const libqt_string hostName, uint16_t port, const libqt_string sslPeerName, int mode) {
	self->connectToHostEncrypted(QString::fromUtf8(hostName.data, hostName.len), port, QString::fromUtf8(sslPeerName.data, sslPeerName.len), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode));
}

void QSslSocket_ConnectToHostEncrypted5(QSslSocket* self, const libqt_string hostName, uint16_t port, const libqt_string sslPeerName, int mode, int protocol) {
	self->connectToHostEncrypted(QString::fromUtf8(hostName.data, hostName.len), port, QString::fromUtf8(sslPeerName.data, sslPeerName.len), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

void QSslSocket_SetLocalCertificate22(QSslSocket* self, const libqt_string fileName, int format) {
	self->setLocalCertificate(QString::fromUtf8(fileName.data, fileName.len), static_cast<QSsl::EncodingFormat>(format));
}

void QSslSocket_SetPrivateKey22(QSslSocket* self, const libqt_string fileName, int algorithm) {
	self->setPrivateKey(QString::fromUtf8(fileName.data, fileName.len), static_cast<QSsl::KeyAlgorithm>(algorithm));
}

void QSslSocket_SetPrivateKey3(QSslSocket* self, const libqt_string fileName, int algorithm, int format) {
	self->setPrivateKey(QString::fromUtf8(fileName.data, fileName.len), static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format));
}

void QSslSocket_SetPrivateKey4(QSslSocket* self, const libqt_string fileName, int algorithm, int format, const libqt_string passPhrase) {
	self->setPrivateKey(QString::fromUtf8(fileName.data, fileName.len), static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), QByteArray(passPhrase.data, passPhrase.len));
}

bool QSslSocket_WaitForEncrypted1(QSslSocket* self, int msecs) {
	return self->waitForEncrypted(msecs);
}

libqt_list QSslSocket_SupportedProtocols1(const libqt_string backendName) {
	auto _ret = QSslSocket::supportedProtocols(QString::fromUtf8(backendName.data, backendName.len));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

bool QSslSocket_IsProtocolSupported2(int protocol, const libqt_string backendName) {
	return QSslSocket::isProtocolSupported(static_cast<QSsl::SslProtocol>(protocol), QString::fromUtf8(backendName.data, backendName.len));
}

libqt_list QSslSocket_ImplementedClasses1(const libqt_string backendName) {
	auto _ret = QSslSocket::implementedClasses(QString::fromUtf8(backendName.data, backendName.len));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

bool QSslSocket_IsClassImplemented2(int cl, const libqt_string backendName) {
	return QSslSocket::isClassImplemented(static_cast<QSsl::ImplementedClass>(cl), QString::fromUtf8(backendName.data, backendName.len));
}

libqt_list QSslSocket_SupportedFeatures1(const libqt_string backendName) {
	auto _ret = QSslSocket::supportedFeatures(QString::fromUtf8(backendName.data, backendName.len));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

bool QSslSocket_IsFeatureSupported2(int feat, const libqt_string backendName) {
	return QSslSocket::isFeatureSupported(static_cast<QSsl::SupportedFeature>(feat), QString::fromUtf8(backendName.data, backendName.len));
}

// Base class handler implementation
void QSslSocket_QBaseResume(QSslSocket* self) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_Resume_IsBase(true);
	vqsslsocket->resume();
}
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnResume(QSslSocket* self, intptr_t slot) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_Resume_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_Resume_Callback>(slot));
}
}

// Base class handler implementation
bool QSslSocket_QBaseSetSocketDescriptor(QSslSocket* self, intptr_t socketDescriptor, int state, int openMode) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_SetSocketDescriptor_IsBase(true);
	return vqsslsocket->setSocketDescriptor(socketDescriptor, static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSetSocketDescriptor(QSslSocket* self, intptr_t slot) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_SetSocketDescriptor_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SetSocketDescriptor_Callback>(slot));
}
}

// Base class handler implementation
void QSslSocket_QBaseConnectToHost(QSslSocket* self, const libqt_string hostName, uint16_t port, int openMode, int protocol) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_ConnectToHost_IsBase(true);
	vqsslsocket->connectToHost(QString::fromUtf8(hostName.data, hostName.len), port, static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnConnectToHost(QSslSocket* self, intptr_t slot) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_ConnectToHost_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_ConnectToHost_Callback>(slot));
}
}

// Base class handler implementation
void QSslSocket_QBaseDisconnectFromHost(QSslSocket* self) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_DisconnectFromHost_IsBase(true);
	vqsslsocket->disconnectFromHost();
}
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnDisconnectFromHost(QSslSocket* self, intptr_t slot) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_DisconnectFromHost_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_DisconnectFromHost_Callback>(slot));
}
}

// Base class handler implementation
void QSslSocket_QBaseSetSocketOption(QSslSocket* self, int option, const QVariant* value) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_SetSocketOption_IsBase(true);
	vqsslsocket->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSetSocketOption(QSslSocket* self, intptr_t slot) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_SetSocketOption_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SetSocketOption_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QSslSocket_QBaseSocketOption(QSslSocket* self, int option) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_SocketOption_IsBase(true);
	return new QVariant(vqsslsocket->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSocketOption(QSslSocket* self, intptr_t slot) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_SocketOption_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SocketOption_Callback>(slot));
}
}

// Base class handler implementation
long long QSslSocket_QBaseBytesAvailable(const QSslSocket* self) {
	auto* vqsslsocket = dynamic_cast<const VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_BytesAvailable_IsBase(true);
	return vqsslsocket->bytesAvailable();
}
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnBytesAvailable(const QSslSocket* self, intptr_t slot) {
	auto* vqsslsocket = dynamic_cast<const VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_BytesAvailable_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_BytesAvailable_Callback>(slot));
}
}

// Base class handler implementation
long long QSslSocket_QBaseBytesToWrite(const QSslSocket* self) {
	auto* vqsslsocket = dynamic_cast<const VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_BytesToWrite_IsBase(true);
	return vqsslsocket->bytesToWrite();
}
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnBytesToWrite(const QSslSocket* self, intptr_t slot) {
	auto* vqsslsocket = dynamic_cast<const VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_BytesToWrite_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_BytesToWrite_Callback>(slot));
}
}

// Base class handler implementation
bool QSslSocket_QBaseCanReadLine(const QSslSocket* self) {
	auto* vqsslsocket = dynamic_cast<const VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_CanReadLine_IsBase(true);
	return vqsslsocket->canReadLine();
}
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnCanReadLine(const QSslSocket* self, intptr_t slot) {
	auto* vqsslsocket = dynamic_cast<const VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_CanReadLine_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_CanReadLine_Callback>(slot));
}
}

// Base class handler implementation
void QSslSocket_QBaseClose(QSslSocket* self) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_Close_IsBase(true);
	vqsslsocket->close();
}
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnClose(QSslSocket* self, intptr_t slot) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_Close_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_Close_Callback>(slot));
}
}

// Base class handler implementation
bool QSslSocket_QBaseAtEnd(const QSslSocket* self) {
	auto* vqsslsocket = dynamic_cast<const VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_AtEnd_IsBase(true);
	return vqsslsocket->atEnd();
}
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnAtEnd(const QSslSocket* self, intptr_t slot) {
	auto* vqsslsocket = dynamic_cast<const VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_AtEnd_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_AtEnd_Callback>(slot));
}
}

// Base class handler implementation
void QSslSocket_QBaseSetReadBufferSize(QSslSocket* self, long long size) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_SetReadBufferSize_IsBase(true);
	vqsslsocket->setReadBufferSize(size);
}
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSetReadBufferSize(QSslSocket* self, intptr_t slot) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_SetReadBufferSize_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SetReadBufferSize_Callback>(slot));
}
}

// Base class handler implementation
bool QSslSocket_QBaseWaitForConnected(QSslSocket* self, int msecs) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_WaitForConnected_IsBase(true);
	return vqsslsocket->waitForConnected(msecs);
}
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnWaitForConnected(QSslSocket* self, intptr_t slot) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_WaitForConnected_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_WaitForConnected_Callback>(slot));
}
}

// Base class handler implementation
bool QSslSocket_QBaseWaitForReadyRead(QSslSocket* self, int msecs) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_WaitForReadyRead_IsBase(true);
	return vqsslsocket->waitForReadyRead(msecs);
}
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnWaitForReadyRead(QSslSocket* self, intptr_t slot) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_WaitForReadyRead_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_WaitForReadyRead_Callback>(slot));
}
}

// Base class handler implementation
bool QSslSocket_QBaseWaitForBytesWritten(QSslSocket* self, int msecs) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_WaitForBytesWritten_IsBase(true);
	return vqsslsocket->waitForBytesWritten(msecs);
}
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnWaitForBytesWritten(QSslSocket* self, intptr_t slot) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_WaitForBytesWritten_Callback>(slot));
}
}

// Base class handler implementation
bool QSslSocket_QBaseWaitForDisconnected(QSslSocket* self, int msecs) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_WaitForDisconnected_IsBase(true);
	return vqsslsocket->waitForDisconnected(msecs);
}
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnWaitForDisconnected(QSslSocket* self, intptr_t slot) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_WaitForDisconnected_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_WaitForDisconnected_Callback>(slot));
}
}

// Derived class handler implementation
long long QSslSocket_ReadData(QSslSocket* self, char* data, long long maxlen) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
	return vqsslsocket->readData(data, maxlen);
	} else {
	return self->QSslSocket::readData(data, maxlen);
}
}

// Base class handler implementation
long long QSslSocket_QBaseReadData(QSslSocket* self, char* data, long long maxlen) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_ReadData_IsBase(true);
	return vqsslsocket->readData(data, maxlen);
}
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnReadData(QSslSocket* self, intptr_t slot) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_ReadData_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_ReadData_Callback>(slot));
}
}

// Derived class handler implementation
long long QSslSocket_SkipData(QSslSocket* self, long long maxSize) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
	return vqsslsocket->skipData(maxSize);
	} else {
	return self->QSslSocket::skipData(maxSize);
}
}

// Base class handler implementation
long long QSslSocket_QBaseSkipData(QSslSocket* self, long long maxSize) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_SkipData_IsBase(true);
	return vqsslsocket->skipData(maxSize);
}
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSkipData(QSslSocket* self, intptr_t slot) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_SkipData_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SkipData_Callback>(slot));
}
}

// Derived class handler implementation
long long QSslSocket_WriteData(QSslSocket* self, const char* data, long long lenVal) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
	return vqsslsocket->writeData(data, lenVal);
	} else {
	return self->QSslSocket::writeData(data, lenVal);
}
}

// Base class handler implementation
long long QSslSocket_QBaseWriteData(QSslSocket* self, const char* data, long long lenVal) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_WriteData_IsBase(true);
	return vqsslsocket->writeData(data, lenVal);
}
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnWriteData(QSslSocket* self, intptr_t slot) {
	auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
	if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
vqsslsocket->setQSslSocket_WriteData_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_WriteData_Callback>(slot));
}
}

void QSslSocket_Delete(QSslSocket* self) {
    delete self;
}

