#include <QNetworkInformation>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStringView>
#include <qnetworkinformation.h>
#include "libqnetworkinformation.h"
#include "libqnetworkinformation.hxx"

libqt_string QNetworkInformation_Tr(const char* s) {
	QString _ret = QNetworkInformation::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QNetworkInformation_Reachability(const QNetworkInformation* self) {
	return self->reachability();
}

bool QNetworkInformation_IsBehindCaptivePortal(const QNetworkInformation* self) {
	return self->isBehindCaptivePortal();
}

int QNetworkInformation_TransportMedium(const QNetworkInformation* self) {
	return self->transportMedium();
}

bool QNetworkInformation_IsMetered(const QNetworkInformation* self) {
	return self->isMetered();
}

libqt_string QNetworkInformation_BackendName(const QNetworkInformation* self) {
	QString _ret = self->backendName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QNetworkInformation_Supports(const QNetworkInformation* self, int features) {
	return self->supports(static_cast<QFlags<QNetworkInformation::Feature>>(features));
}

int QNetworkInformation_SupportedFeatures(const QNetworkInformation* self) {
	return self->supportedFeatures();
}

bool QNetworkInformation_LoadDefaultBackend() {
	return QNetworkInformation::loadDefaultBackend();
}

bool QNetworkInformation_LoadBackendByName(QStringView* backend) {
	return QNetworkInformation::loadBackendByName(*backend);
}

bool QNetworkInformation_LoadBackendByFeatures(int features) {
	return QNetworkInformation::loadBackendByFeatures(static_cast<QFlags<QNetworkInformation::Feature>>(features));
}

bool QNetworkInformation_Load(QStringView* backend) {
	return QNetworkInformation::load(*backend);
}

bool QNetworkInformation_Load2(int features) {
	return QNetworkInformation::load(static_cast<QFlags<QNetworkInformation::Feature>>(features));
}

libqt_list QNetworkInformation_AvailableBackends() {
	return QNetworkInformation::availableBackends();
}

QNetworkInformation* QNetworkInformation_Instance() {
	return QNetworkInformation::instance();
}

void QNetworkInformation_ReachabilityChanged(QNetworkInformation* self, int newReachability) {
	self->reachabilityChanged(static_cast<QNetworkInformation::Reachability>(newReachability));
}

void QNetworkInformation_Connect_ReachabilityChanged(QNetworkInformation* self, intptr_t slot) {
    void (*slotFunc)(QNetworkInformation*, int) = reinterpret_cast<void (*)(QNetworkInformation*, int)>(slot);
    QNetworkInformation::connect(self, &QNetworkInformation::reachabilityChanged, [self, slotFunc](QNetworkInformation::Reachability newReachability) {
	slotFunc(self, newReachability);
    });
}

void QNetworkInformation_IsBehindCaptivePortalChanged(QNetworkInformation* self, bool state) {
	self->isBehindCaptivePortalChanged(state);
}

void QNetworkInformation_Connect_IsBehindCaptivePortalChanged(QNetworkInformation* self, intptr_t slot) {
    void (*slotFunc)(QNetworkInformation*, bool) = reinterpret_cast<void (*)(QNetworkInformation*, bool)>(slot);
    QNetworkInformation::connect(self, &QNetworkInformation::isBehindCaptivePortalChanged, [self, slotFunc](bool state) {
	slotFunc(self, state);
    });
}

void QNetworkInformation_TransportMediumChanged(QNetworkInformation* self, int current) {
	self->transportMediumChanged(static_cast<QNetworkInformation::TransportMedium>(current));
}

void QNetworkInformation_Connect_TransportMediumChanged(QNetworkInformation* self, intptr_t slot) {
    void (*slotFunc)(QNetworkInformation*, int) = reinterpret_cast<void (*)(QNetworkInformation*, int)>(slot);
    QNetworkInformation::connect(self, &QNetworkInformation::transportMediumChanged, [self, slotFunc](QNetworkInformation::TransportMedium current) {
	slotFunc(self, current);
    });
}

void QNetworkInformation_IsMeteredChanged(QNetworkInformation* self, bool isMetered) {
	self->isMeteredChanged(isMetered);
}

void QNetworkInformation_Connect_IsMeteredChanged(QNetworkInformation* self, intptr_t slot) {
    void (*slotFunc)(QNetworkInformation*, bool) = reinterpret_cast<void (*)(QNetworkInformation*, bool)>(slot);
    QNetworkInformation::connect(self, &QNetworkInformation::isMeteredChanged, [self, slotFunc](bool isMetered) {
	slotFunc(self, isMetered);
    });
}

libqt_string QNetworkInformation_Tr2(const char* s, const char* c) {
	QString _ret = QNetworkInformation::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QNetworkInformation_Tr3(const char* s, const char* c, int n) {
	QString _ret = QNetworkInformation::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

