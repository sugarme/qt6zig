#pragma once
#ifndef QSSLSERVER_H_C_LIBVIRTUAL
#define QSSLSERVER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QSslServer so that we can call protected methods
class VirtualQSslServer final : public QSslServer {

public:
	// Virtual class boolean flag
	bool isVirtualQSslServer= true;

	// Virtual class public types (including callbacks)
	using QSslServer_IncomingConnection_Callback = void (*)(QSslServer*, intptr_t);

protected:
	// Instance callback storage
	mutable QSslServer_IncomingConnection_Callback qsslserver_incomingconnection_callback = nullptr;

	// Instance base flags
    mutable bool qsslserver_incomingconnection_isbase = false;

public:
	VirtualQSslServer(): QSslServer() {};
	VirtualQSslServer(QObject* parent): QSslServer(parent) {};

	~VirtualQSslServer() {
		qsslserver_incomingconnection_callback = nullptr;
	}

// Callback setters
	inline void setQSslServer_IncomingConnection_Callback(QSslServer_IncomingConnection_Callback cb) const { qsslserver_incomingconnection_callback = cb; }

// Base flag setters
	inline void setQSslServer_IncomingConnection_IsBase(bool value) const { qsslserver_incomingconnection_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void incomingConnection(qintptr socket) override {
		if (qsslserver_incomingconnection_isbase) {
			qsslserver_incomingconnection_isbase = false;
			QSslServer::incomingConnection(socket);
		} else if (qsslserver_incomingconnection_callback != nullptr) {
			intptr_t cbval1 = socket;
			qsslserver_incomingconnection_callback(this, cbval1);
		} else {
			QSslServer::incomingConnection(socket);
		}
	}

	// Friend functions
	friend void QSslServer_IncomingConnection(QSslServer* self, intptr_t socket);
	friend void QSslServer_QBaseIncomingConnection(QSslServer* self, intptr_t socket);
};

#endif


