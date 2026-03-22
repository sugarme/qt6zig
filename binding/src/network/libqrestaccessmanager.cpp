#include <QByteArray>
#include <QDebug>
#include <QHttpMultiPart>
#include <QIODevice>
#include <QJsonDocument>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QObject>
#include <QRestAccessManager>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qrestaccessmanager.h>
#include "libqrestaccessmanager.h"
#include "libqrestaccessmanager.hxx"

QRestAccessManager* QRestAccessManager_new(QNetworkAccessManager* manager) {
	 return new QRestAccessManager(manager);
}

QRestAccessManager* QRestAccessManager_new2(QNetworkAccessManager* manager, QObject* parent) {
	 return new QRestAccessManager(manager, parent);
}

libqt_string QRestAccessManager_Tr(const char* s) {
	QString _ret = QRestAccessManager::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QNetworkAccessManager* QRestAccessManager_NetworkAccessManager(const QRestAccessManager* self) {
	return self->networkAccessManager();
}

QNetworkReply* QRestAccessManager_DeleteResource(QRestAccessManager* self, const QNetworkRequest* request) {
	return self->deleteResource(*request);
}

void QRestAccessManager_Connect_DeleteResource(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::deleteResource, [self, slotFunc](const QNetworkRequest& request) {
	slotFunc(self, request);
    });
}

QNetworkReply* QRestAccessManager_Head(QRestAccessManager* self, const QNetworkRequest* request) {
	return self->head(*request);
}

void QRestAccessManager_Connect_Head(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::head, [self, slotFunc](const QNetworkRequest& request) {
	slotFunc(self, request);
    });
}

QNetworkReply* QRestAccessManager_Get(QRestAccessManager* self, const QNetworkRequest* request) {
	return self->get(*request);
}

void QRestAccessManager_Connect_Get(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::get, [self, slotFunc](const QNetworkRequest& request) {
	slotFunc(self, request);
    });
}

QNetworkReply* QRestAccessManager_Get2(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string data) {
	return self->get(*request, QByteArray(data.data, data.len));
}

void QRestAccessManager_Connect_Get2(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*, const char*) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*, const char*)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::get, [self, slotFunc](const QNetworkRequest& request, const QByteArray& data) {
	slotFunc(self, request, data);
    });
}

QNetworkReply* QRestAccessManager_Get3(QRestAccessManager* self, const QNetworkRequest* request, const QJsonDocument* data) {
	return self->get(*request, *data);
}

void QRestAccessManager_Connect_Get3(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*, const QJsonDocument*) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*, const QJsonDocument*)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::get, [self, slotFunc](const QNetworkRequest& request, const QJsonDocument& data) {
	slotFunc(self, request, data);
    });
}

QNetworkReply* QRestAccessManager_Get4(QRestAccessManager* self, const QNetworkRequest* request, QIODevice* data) {
	return self->get(*request, data);
}

void QRestAccessManager_Connect_Get4(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*, QIODevice*) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*, QIODevice*)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::get, [self, slotFunc](const QNetworkRequest& request, QIODevice* data) {
	slotFunc(self, request, data);
    });
}

QNetworkReply* QRestAccessManager_Post(QRestAccessManager* self, const QNetworkRequest* request, const QJsonDocument* data) {
	return self->post(*request, *data);
}

void QRestAccessManager_Connect_Post(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*, const QJsonDocument*) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*, const QJsonDocument*)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::post, [self, slotFunc](const QNetworkRequest& request, const QJsonDocument& data) {
	slotFunc(self, request, data);
    });
}

QNetworkReply* QRestAccessManager_Post2(QRestAccessManager* self, const QNetworkRequest* request, const libqt_map data) {
	return self->post(*request, QMap<QString, QVariant>());
}

void QRestAccessManager_Connect_Post2(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*, libqt_map) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*, libqt_map)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::post, [self, slotFunc](const QNetworkRequest& request, const QMap<QString, QVariant>& data) {
	slotFunc(self, request, data);
    });
}

QNetworkReply* QRestAccessManager_Post3(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string data) {
	return self->post(*request, QByteArray(data.data, data.len));
}

void QRestAccessManager_Connect_Post3(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*, const char*) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*, const char*)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::post, [self, slotFunc](const QNetworkRequest& request, const QByteArray& data) {
	slotFunc(self, request, data);
    });
}

QNetworkReply* QRestAccessManager_Post4(QRestAccessManager* self, const QNetworkRequest* request, QHttpMultiPart* data) {
	return self->post(*request, data);
}

void QRestAccessManager_Connect_Post4(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*, QHttpMultiPart*) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*, QHttpMultiPart*)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::post, [self, slotFunc](const QNetworkRequest& request, QHttpMultiPart* data) {
	slotFunc(self, request, data);
    });
}

QNetworkReply* QRestAccessManager_Post5(QRestAccessManager* self, const QNetworkRequest* request, QIODevice* data) {
	return self->post(*request, data);
}

void QRestAccessManager_Connect_Post5(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*, QIODevice*) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*, QIODevice*)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::post, [self, slotFunc](const QNetworkRequest& request, QIODevice* data) {
	slotFunc(self, request, data);
    });
}

QNetworkReply* QRestAccessManager_Put(QRestAccessManager* self, const QNetworkRequest* request, const QJsonDocument* data) {
	return self->put(*request, *data);
}

void QRestAccessManager_Connect_Put(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*, const QJsonDocument*) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*, const QJsonDocument*)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::put, [self, slotFunc](const QNetworkRequest& request, const QJsonDocument& data) {
	slotFunc(self, request, data);
    });
}

QNetworkReply* QRestAccessManager_Put2(QRestAccessManager* self, const QNetworkRequest* request, const libqt_map data) {
	return self->put(*request, QMap<QString, QVariant>());
}

void QRestAccessManager_Connect_Put2(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*, libqt_map) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*, libqt_map)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::put, [self, slotFunc](const QNetworkRequest& request, const QMap<QString, QVariant>& data) {
	slotFunc(self, request, data);
    });
}

QNetworkReply* QRestAccessManager_Put3(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string data) {
	return self->put(*request, QByteArray(data.data, data.len));
}

void QRestAccessManager_Connect_Put3(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*, const char*) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*, const char*)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::put, [self, slotFunc](const QNetworkRequest& request, const QByteArray& data) {
	slotFunc(self, request, data);
    });
}

QNetworkReply* QRestAccessManager_Put4(QRestAccessManager* self, const QNetworkRequest* request, QHttpMultiPart* data) {
	return self->put(*request, data);
}

void QRestAccessManager_Connect_Put4(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*, QHttpMultiPart*) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*, QHttpMultiPart*)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::put, [self, slotFunc](const QNetworkRequest& request, QHttpMultiPart* data) {
	slotFunc(self, request, data);
    });
}

QNetworkReply* QRestAccessManager_Put5(QRestAccessManager* self, const QNetworkRequest* request, QIODevice* data) {
	return self->put(*request, data);
}

void QRestAccessManager_Connect_Put5(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*, QIODevice*) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*, QIODevice*)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::put, [self, slotFunc](const QNetworkRequest& request, QIODevice* data) {
	slotFunc(self, request, data);
    });
}

QNetworkReply* QRestAccessManager_Patch(QRestAccessManager* self, const QNetworkRequest* request, const QJsonDocument* data) {
	return self->patch(*request, *data);
}

void QRestAccessManager_Connect_Patch(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*, const QJsonDocument*) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*, const QJsonDocument*)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::patch, [self, slotFunc](const QNetworkRequest& request, const QJsonDocument& data) {
	slotFunc(self, request, data);
    });
}

QNetworkReply* QRestAccessManager_Patch2(QRestAccessManager* self, const QNetworkRequest* request, const libqt_map data) {
	return self->patch(*request, QMap<QString, QVariant>());
}

void QRestAccessManager_Connect_Patch2(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*, libqt_map) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*, libqt_map)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::patch, [self, slotFunc](const QNetworkRequest& request, const QMap<QString, QVariant>& data) {
	slotFunc(self, request, data);
    });
}

QNetworkReply* QRestAccessManager_Patch3(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string data) {
	return self->patch(*request, QByteArray(data.data, data.len));
}

void QRestAccessManager_Connect_Patch3(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*, const char*) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*, const char*)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::patch, [self, slotFunc](const QNetworkRequest& request, const QByteArray& data) {
	slotFunc(self, request, data);
    });
}

QNetworkReply* QRestAccessManager_Patch4(QRestAccessManager* self, const QNetworkRequest* request, QIODevice* data) {
	return self->patch(*request, data);
}

void QRestAccessManager_Connect_Patch4(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*, QIODevice*) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*, QIODevice*)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::patch, [self, slotFunc](const QNetworkRequest& request, QIODevice* data) {
	slotFunc(self, request, data);
    });
}

QNetworkReply* QRestAccessManager_SendCustomRequest(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string method, const libqt_string data) {
	return self->sendCustomRequest(*request, QByteArray(method.data, method.len), QByteArray(data.data, data.len));
}

void QRestAccessManager_Connect_SendCustomRequest(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*, const char*, const char*) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*, const char*, const char*)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::sendCustomRequest, [self, slotFunc](const QNetworkRequest& request, const QByteArray& method, const QByteArray& data) {
	slotFunc(self, request, method, data);
    });
}

QNetworkReply* QRestAccessManager_SendCustomRequest2(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string method, QIODevice* data) {
	return self->sendCustomRequest(*request, QByteArray(method.data, method.len), data);
}

void QRestAccessManager_Connect_SendCustomRequest2(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*, const char*, QIODevice*) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*, const char*, QIODevice*)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::sendCustomRequest, [self, slotFunc](const QNetworkRequest& request, const QByteArray& method, QIODevice* data) {
	slotFunc(self, request, method, data);
    });
}

QNetworkReply* QRestAccessManager_SendCustomRequest3(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string method, QHttpMultiPart* data) {
	return self->sendCustomRequest(*request, QByteArray(method.data, method.len), data);
}

void QRestAccessManager_Connect_SendCustomRequest3(QRestAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QRestAccessManager*, const QNetworkRequest*, const char*, QHttpMultiPart*) = reinterpret_cast<void (*)(QRestAccessManager*, const QNetworkRequest*, const char*, QHttpMultiPart*)>(slot);
    QRestAccessManager::connect(self, &QRestAccessManager::sendCustomRequest, [self, slotFunc](const QNetworkRequest& request, const QByteArray& method, QHttpMultiPart* data) {
	slotFunc(self, request, method, data);
    });
}

libqt_string QRestAccessManager_Tr2(const char* s, const char* c) {
	QString _ret = QRestAccessManager::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QRestAccessManager_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRestAccessManager::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QRestAccessManager_Delete(QRestAccessManager* self) {
    delete self;
}

