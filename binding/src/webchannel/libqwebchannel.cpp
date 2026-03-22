#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWebChannel>
#include <QWebChannelAbstractTransport>
#include <qwebchannel.h>
#include "libqwebchannel.h"
#include "libqwebchannel.hxx"

QWebChannel* QWebChannel_new() {
	 return new QWebChannel();
}

QWebChannel* QWebChannel_new2(QObject* parent) {
	 return new QWebChannel(parent);
}

libqt_string QWebChannel_Tr(const char* s) {
	QString _ret = QWebChannel::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWebChannel_RegisterObjects(QWebChannel* self, const libqt_map objects) {
	self->registerObjects(QHash<QString, QObject *>());
}

libqt_map QWebChannel_RegisteredObjects(const QWebChannel* self) {
	auto _ret = self->registeredObjects();
	libqt_map _map;
	_map.len = _ret.size();
	_map.keys = nullptr;
	_map.values = nullptr;
	return _map;
}

void QWebChannel_RegisterObject(QWebChannel* self, const libqt_string id, QObject* object) {
	self->registerObject(QString::fromUtf8(id.data, id.len), object);
}

void QWebChannel_DeregisterObject(QWebChannel* self, QObject* object) {
	self->deregisterObject(object);
}

bool QWebChannel_BlockUpdates(const QWebChannel* self) {
	return self->blockUpdates();
}

void QWebChannel_SetBlockUpdates(QWebChannel* self, bool block) {
	self->setBlockUpdates(block);
}

int QWebChannel_PropertyUpdateInterval(const QWebChannel* self) {
	return self->propertyUpdateInterval();
}

void QWebChannel_SetPropertyUpdateInterval(QWebChannel* self, int ms) {
	self->setPropertyUpdateInterval(ms);
}

void QWebChannel_BlockUpdatesChanged(QWebChannel* self, bool block) {
	self->blockUpdatesChanged(block);
}

void QWebChannel_Connect_BlockUpdatesChanged(QWebChannel* self, intptr_t slot) {
    void (*slotFunc)(QWebChannel*, bool) = reinterpret_cast<void (*)(QWebChannel*, bool)>(slot);
    QWebChannel::connect(self, &QWebChannel::blockUpdatesChanged, [self, slotFunc](bool block) {
	slotFunc(self, block);
    });
}

void QWebChannel_ConnectTo(QWebChannel* self, QWebChannelAbstractTransport* transport) {
	self->connectTo(transport);
}

void QWebChannel_DisconnectFrom(QWebChannel* self, QWebChannelAbstractTransport* transport) {
	self->disconnectFrom(transport);
}

libqt_string QWebChannel_Tr2(const char* s, const char* c) {
	QString _ret = QWebChannel::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QWebChannel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebChannel::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWebChannel_Delete(QWebChannel* self) {
    delete self;
}

