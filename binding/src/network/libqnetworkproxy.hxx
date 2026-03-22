#pragma once
#ifndef QNETWORKPROXY_H_C_LIBVIRTUAL
#define QNETWORKPROXY_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QNetworkProxyFactory so that we can call protected methods
class VirtualQNetworkProxyFactory : public QNetworkProxyFactory {

public:
	// Virtual class boolean flag
	bool isVirtualQNetworkProxyFactory= true;

	// Virtual class public types (including callbacks)
	using QNetworkProxyFactory_QueryProxy_Callback = libqt_list (*)(QNetworkProxyFactory*, const QNetworkProxyQuery*);

protected:
	// Instance callback storage
	mutable QNetworkProxyFactory_QueryProxy_Callback qnetworkproxyfactory_queryproxy_callback = nullptr;

	// Instance base flags
    mutable bool qnetworkproxyfactory_queryproxy_isbase = false;

public:
	VirtualQNetworkProxyFactory(): QNetworkProxyFactory() {};
	VirtualQNetworkProxyFactory(const QNetworkProxyFactory& param1): QNetworkProxyFactory(param1) {};

	~VirtualQNetworkProxyFactory() {
		qnetworkproxyfactory_queryproxy_callback = nullptr;
	}

// Callback setters
	inline void setQNetworkProxyFactory_QueryProxy_Callback(QNetworkProxyFactory_QueryProxy_Callback cb) const { qnetworkproxyfactory_queryproxy_callback = cb; }

// Base flag setters
	inline void setQNetworkProxyFactory_QueryProxy_IsBase(bool value) const { qnetworkproxyfactory_queryproxy_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QList<QNetworkProxy> queryProxy(const QNetworkProxyQuery& query) override {
		if (qnetworkproxyfactory_queryproxy_callback != nullptr) {
			const QNetworkProxyQuery* cbval1 = (const QNetworkProxyQuery*)&query;
			libqt_list callback_ret = qnetworkproxyfactory_queryproxy_callback(this, cbval1);
			return QList<QNetworkProxy>();
		} else {
			return {};
		}
	}
};

#endif


