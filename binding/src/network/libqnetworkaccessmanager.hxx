#pragma once
#ifndef QNETWORKACCESSMANAGER_H_C_LIBVIRTUAL
#define QNETWORKACCESSMANAGER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QNetworkAccessManager so that we can call protected methods
class VirtualQNetworkAccessManager final : public QNetworkAccessManager {

public:
	// Virtual class boolean flag
	bool isVirtualQNetworkAccessManager= true;

	// Virtual class public types (including callbacks)
	using QNetworkAccessManager_SupportedSchemes_Callback = libqt_list (*)();
	using QNetworkAccessManager_CreateRequest_Callback = QNetworkReply* (*)(QNetworkAccessManager*, int, const QNetworkRequest*, QIODevice*);
	using QNetworkAccessManager_SupportedSchemesImplementation_Callback = libqt_list (*)();

protected:
	// Instance callback storage
	mutable QNetworkAccessManager_SupportedSchemes_Callback qnetworkaccessmanager_supportedschemes_callback = nullptr;
	mutable QNetworkAccessManager_CreateRequest_Callback qnetworkaccessmanager_createrequest_callback = nullptr;
	mutable QNetworkAccessManager_SupportedSchemesImplementation_Callback qnetworkaccessmanager_supportedschemesimplementation_callback = nullptr;

	// Instance base flags
    mutable bool qnetworkaccessmanager_supportedschemes_isbase = false;
    mutable bool qnetworkaccessmanager_createrequest_isbase = false;
    mutable bool qnetworkaccessmanager_supportedschemesimplementation_isbase = false;

public:
	VirtualQNetworkAccessManager(): QNetworkAccessManager() {};
	VirtualQNetworkAccessManager(QObject* parent): QNetworkAccessManager(parent) {};

	~VirtualQNetworkAccessManager() {
		qnetworkaccessmanager_supportedschemes_callback = nullptr;
		qnetworkaccessmanager_createrequest_callback = nullptr;
		qnetworkaccessmanager_supportedschemesimplementation_callback = nullptr;
	}

// Callback setters
	inline void setQNetworkAccessManager_SupportedSchemes_Callback(QNetworkAccessManager_SupportedSchemes_Callback cb) const { qnetworkaccessmanager_supportedschemes_callback = cb; }
	inline void setQNetworkAccessManager_CreateRequest_Callback(QNetworkAccessManager_CreateRequest_Callback cb) const { qnetworkaccessmanager_createrequest_callback = cb; }
	inline void setQNetworkAccessManager_SupportedSchemesImplementation_Callback(QNetworkAccessManager_SupportedSchemesImplementation_Callback cb) const { qnetworkaccessmanager_supportedschemesimplementation_callback = cb; }

// Base flag setters
	inline void setQNetworkAccessManager_SupportedSchemes_IsBase(bool value) const { qnetworkaccessmanager_supportedschemes_isbase = value; }
	inline void setQNetworkAccessManager_CreateRequest_IsBase(bool value) const { qnetworkaccessmanager_createrequest_isbase = value; }
	inline void setQNetworkAccessManager_SupportedSchemesImplementation_IsBase(bool value) const { qnetworkaccessmanager_supportedschemesimplementation_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QList<QString> supportedSchemes() const override {
		if (qnetworkaccessmanager_supportedschemes_isbase) {
			qnetworkaccessmanager_supportedschemes_isbase = false;
			return QNetworkAccessManager::supportedSchemes();
		} else if (qnetworkaccessmanager_supportedschemes_callback != nullptr) {
			libqt_list callback_ret = qnetworkaccessmanager_supportedschemes_callback();
			return QList<QString>();
		} else {
			return QNetworkAccessManager::supportedSchemes();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QNetworkReply* createRequest(Operation op, const QNetworkRequest& request, QIODevice* outgoingData) override {
		if (qnetworkaccessmanager_createrequest_isbase) {
			qnetworkaccessmanager_createrequest_isbase = false;
			return QNetworkAccessManager::createRequest(op, request, outgoingData);
		} else if (qnetworkaccessmanager_createrequest_callback != nullptr) {
			int cbval1 = static_cast<int>(op);
			const QNetworkRequest* cbval2 = (const QNetworkRequest*)&request;
			QIODevice* cbval3 = outgoingData;
			QNetworkReply* callback_ret = qnetworkaccessmanager_createrequest_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QNetworkAccessManager::createRequest(op, request, outgoingData);
		}
	}

	// Virtual method for C ABI access and custom callback
	QList<QString> supportedSchemesImplementation() const {
		if (qnetworkaccessmanager_supportedschemesimplementation_isbase) {
			qnetworkaccessmanager_supportedschemesimplementation_isbase = false;
			return QNetworkAccessManager::supportedSchemesImplementation();
		} else if (qnetworkaccessmanager_supportedschemesimplementation_callback != nullptr) {
			libqt_list callback_ret = qnetworkaccessmanager_supportedschemesimplementation_callback();
			return QList<QString>();
		} else {
			return QNetworkAccessManager::supportedSchemesImplementation();
		}
	}

	// Friend functions
	friend QNetworkReply* QNetworkAccessManager_CreateRequest(QNetworkAccessManager* self, int op, const QNetworkRequest* request, QIODevice* outgoingData);
	friend QNetworkReply* QNetworkAccessManager_QBaseCreateRequest(QNetworkAccessManager* self, int op, const QNetworkRequest* request, QIODevice* outgoingData);
	friend libqt_list QNetworkAccessManager_SupportedSchemesImplementation(const QNetworkAccessManager* self);
	friend libqt_list QNetworkAccessManager_QBaseSupportedSchemesImplementation(const QNetworkAccessManager* self);
};

#endif


