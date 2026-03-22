#include <QJsonObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWebChannelAbstractTransport>
#include <qwebchannelabstracttransport.h>
#include "libqwebchannelabstracttransport.h"
#include "libqwebchannelabstracttransport.hxx"

QWebChannelAbstractTransport* QWebChannelAbstractTransport_new() {
	 return new VirtualQWebChannelAbstractTransport();
}

QWebChannelAbstractTransport* QWebChannelAbstractTransport_new2(QObject* parent) {
	 return new VirtualQWebChannelAbstractTransport(parent);
}

libqt_string QWebChannelAbstractTransport_Tr(const char* s) {
	QString _ret = QWebChannelAbstractTransport::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWebChannelAbstractTransport_SendMessage(QWebChannelAbstractTransport* self, const QJsonObject* message) {
	self->sendMessage(*message);
}

void QWebChannelAbstractTransport_MessageReceived(QWebChannelAbstractTransport* self, const QJsonObject* message, QWebChannelAbstractTransport* transport) {
	self->messageReceived(*message, transport);
}

void QWebChannelAbstractTransport_Connect_MessageReceived(QWebChannelAbstractTransport* self, intptr_t slot) {
    void (*slotFunc)(QWebChannelAbstractTransport*, const QJsonObject*, QWebChannelAbstractTransport*) = reinterpret_cast<void (*)(QWebChannelAbstractTransport*, const QJsonObject*, QWebChannelAbstractTransport*)>(slot);
    QWebChannelAbstractTransport::connect(self, &QWebChannelAbstractTransport::messageReceived, [self, slotFunc](const QJsonObject& message, QWebChannelAbstractTransport* transport) {
	slotFunc(self, message, transport);
    });
}

libqt_string QWebChannelAbstractTransport_Tr2(const char* s, const char* c) {
	QString _ret = QWebChannelAbstractTransport::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QWebChannelAbstractTransport_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebChannelAbstractTransport::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QWebChannelAbstractTransport_QBaseSendMessage(QWebChannelAbstractTransport* self, const QJsonObject* message) {
	auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
	if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
vqwebchannelabstracttransport->setQWebChannelAbstractTransport_SendMessage_IsBase(true);
	vqwebchannelabstracttransport->sendMessage(*message);
}
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnSendMessage(QWebChannelAbstractTransport* self, intptr_t slot) {
	auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
	if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
vqwebchannelabstracttransport->setQWebChannelAbstractTransport_SendMessage_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_SendMessage_Callback>(slot));
}
}

void QWebChannelAbstractTransport_Delete(QWebChannelAbstractTransport* self) {
    delete self;
}

