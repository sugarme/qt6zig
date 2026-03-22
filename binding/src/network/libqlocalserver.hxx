#pragma once
#ifndef QLOCALSERVER_H_C_LIBVIRTUAL
#define QLOCALSERVER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QLocalServer so that we can call protected methods
class VirtualQLocalServer final : public QLocalServer {

public:
	// Virtual class boolean flag
	bool isVirtualQLocalServer= true;

	// Virtual class public types (including callbacks)
	using QLocalServer_HasPendingConnections_Callback = bool (*)();
	using QLocalServer_NextPendingConnection_Callback = QLocalSocket* (*)();
	using QLocalServer_IncomingConnection_Callback = void (*)(QLocalServer*, uintptr_t);
	using QLocalServer_AddPendingConnection_Callback = void (*)(QLocalServer*, QLocalSocket*);

protected:
	// Instance callback storage
	mutable QLocalServer_HasPendingConnections_Callback qlocalserver_haspendingconnections_callback = nullptr;
	mutable QLocalServer_NextPendingConnection_Callback qlocalserver_nextpendingconnection_callback = nullptr;
	mutable QLocalServer_IncomingConnection_Callback qlocalserver_incomingconnection_callback = nullptr;
	mutable QLocalServer_AddPendingConnection_Callback qlocalserver_addpendingconnection_callback = nullptr;

	// Instance base flags
    mutable bool qlocalserver_haspendingconnections_isbase = false;
    mutable bool qlocalserver_nextpendingconnection_isbase = false;
    mutable bool qlocalserver_incomingconnection_isbase = false;
    mutable bool qlocalserver_addpendingconnection_isbase = false;

public:
	VirtualQLocalServer(): QLocalServer() {};
	VirtualQLocalServer(QObject* parent): QLocalServer(parent) {};

	~VirtualQLocalServer() {
		qlocalserver_haspendingconnections_callback = nullptr;
		qlocalserver_nextpendingconnection_callback = nullptr;
		qlocalserver_incomingconnection_callback = nullptr;
		qlocalserver_addpendingconnection_callback = nullptr;
	}

// Callback setters
	inline void setQLocalServer_HasPendingConnections_Callback(QLocalServer_HasPendingConnections_Callback cb) const { qlocalserver_haspendingconnections_callback = cb; }
	inline void setQLocalServer_NextPendingConnection_Callback(QLocalServer_NextPendingConnection_Callback cb) const { qlocalserver_nextpendingconnection_callback = cb; }
	inline void setQLocalServer_IncomingConnection_Callback(QLocalServer_IncomingConnection_Callback cb) const { qlocalserver_incomingconnection_callback = cb; }
	inline void setQLocalServer_AddPendingConnection_Callback(QLocalServer_AddPendingConnection_Callback cb) const { qlocalserver_addpendingconnection_callback = cb; }

// Base flag setters
	inline void setQLocalServer_HasPendingConnections_IsBase(bool value) const { qlocalserver_haspendingconnections_isbase = value; }
	inline void setQLocalServer_NextPendingConnection_IsBase(bool value) const { qlocalserver_nextpendingconnection_isbase = value; }
	inline void setQLocalServer_IncomingConnection_IsBase(bool value) const { qlocalserver_incomingconnection_isbase = value; }
	inline void setQLocalServer_AddPendingConnection_IsBase(bool value) const { qlocalserver_addpendingconnection_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool hasPendingConnections() const override {
		if (qlocalserver_haspendingconnections_isbase) {
			qlocalserver_haspendingconnections_isbase = false;
			return QLocalServer::hasPendingConnections();
		} else if (qlocalserver_haspendingconnections_callback != nullptr) {
			bool callback_ret = qlocalserver_haspendingconnections_callback();
			return callback_ret;
		} else {
			return QLocalServer::hasPendingConnections();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QLocalSocket* nextPendingConnection() override {
		if (qlocalserver_nextpendingconnection_isbase) {
			qlocalserver_nextpendingconnection_isbase = false;
			return QLocalServer::nextPendingConnection();
		} else if (qlocalserver_nextpendingconnection_callback != nullptr) {
			QLocalSocket* callback_ret = qlocalserver_nextpendingconnection_callback();
			return callback_ret;
		} else {
			return QLocalServer::nextPendingConnection();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void incomingConnection(quintptr socketDescriptor) override {
		if (qlocalserver_incomingconnection_isbase) {
			qlocalserver_incomingconnection_isbase = false;
			QLocalServer::incomingConnection(socketDescriptor);
		} else if (qlocalserver_incomingconnection_callback != nullptr) {
			uintptr_t cbval1 = socketDescriptor;
			qlocalserver_incomingconnection_callback(this, cbval1);
		} else {
			QLocalServer::incomingConnection(socketDescriptor);
		}
	}

	// Virtual method for C ABI access and custom callback
	void addPendingConnection(QLocalSocket* socket) {
		if (qlocalserver_addpendingconnection_isbase) {
			qlocalserver_addpendingconnection_isbase = false;
			QLocalServer::addPendingConnection(socket);
		} else if (qlocalserver_addpendingconnection_callback != nullptr) {
			QLocalSocket* cbval1 = socket;
			qlocalserver_addpendingconnection_callback(this, cbval1);
		} else {
			QLocalServer::addPendingConnection(socket);
		}
	}

	// Friend functions
	friend void QLocalServer_IncomingConnection(QLocalServer* self, uintptr_t socketDescriptor);
	friend void QLocalServer_QBaseIncomingConnection(QLocalServer* self, uintptr_t socketDescriptor);
	friend void QLocalServer_AddPendingConnection(QLocalServer* self, QLocalSocket* socket);
	friend void QLocalServer_QBaseAddPendingConnection(QLocalServer* self, QLocalSocket* socket);
};

#endif


