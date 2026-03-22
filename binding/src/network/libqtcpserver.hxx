#pragma once
#ifndef QTCPSERVER_H_C_LIBVIRTUAL
#define QTCPSERVER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QTcpServer so that we can call protected methods
class VirtualQTcpServer final : public QTcpServer {

public:
	// Virtual class boolean flag
	bool isVirtualQTcpServer= true;

	// Virtual class public types (including callbacks)
	using QTcpServer_HasPendingConnections_Callback = bool (*)();
	using QTcpServer_NextPendingConnection_Callback = QTcpSocket* (*)();
	using QTcpServer_IncomingConnection_Callback = void (*)(QTcpServer*, intptr_t);
	using QTcpServer_AddPendingConnection_Callback = void (*)(QTcpServer*, QTcpSocket*);

protected:
	// Instance callback storage
	mutable QTcpServer_HasPendingConnections_Callback qtcpserver_haspendingconnections_callback = nullptr;
	mutable QTcpServer_NextPendingConnection_Callback qtcpserver_nextpendingconnection_callback = nullptr;
	mutable QTcpServer_IncomingConnection_Callback qtcpserver_incomingconnection_callback = nullptr;
	mutable QTcpServer_AddPendingConnection_Callback qtcpserver_addpendingconnection_callback = nullptr;

	// Instance base flags
    mutable bool qtcpserver_haspendingconnections_isbase = false;
    mutable bool qtcpserver_nextpendingconnection_isbase = false;
    mutable bool qtcpserver_incomingconnection_isbase = false;
    mutable bool qtcpserver_addpendingconnection_isbase = false;

public:
	VirtualQTcpServer(): QTcpServer() {};
	VirtualQTcpServer(QObject* parent): QTcpServer(parent) {};

	~VirtualQTcpServer() {
		qtcpserver_haspendingconnections_callback = nullptr;
		qtcpserver_nextpendingconnection_callback = nullptr;
		qtcpserver_incomingconnection_callback = nullptr;
		qtcpserver_addpendingconnection_callback = nullptr;
	}

// Callback setters
	inline void setQTcpServer_HasPendingConnections_Callback(QTcpServer_HasPendingConnections_Callback cb) const { qtcpserver_haspendingconnections_callback = cb; }
	inline void setQTcpServer_NextPendingConnection_Callback(QTcpServer_NextPendingConnection_Callback cb) const { qtcpserver_nextpendingconnection_callback = cb; }
	inline void setQTcpServer_IncomingConnection_Callback(QTcpServer_IncomingConnection_Callback cb) const { qtcpserver_incomingconnection_callback = cb; }
	inline void setQTcpServer_AddPendingConnection_Callback(QTcpServer_AddPendingConnection_Callback cb) const { qtcpserver_addpendingconnection_callback = cb; }

// Base flag setters
	inline void setQTcpServer_HasPendingConnections_IsBase(bool value) const { qtcpserver_haspendingconnections_isbase = value; }
	inline void setQTcpServer_NextPendingConnection_IsBase(bool value) const { qtcpserver_nextpendingconnection_isbase = value; }
	inline void setQTcpServer_IncomingConnection_IsBase(bool value) const { qtcpserver_incomingconnection_isbase = value; }
	inline void setQTcpServer_AddPendingConnection_IsBase(bool value) const { qtcpserver_addpendingconnection_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool hasPendingConnections() const override {
		if (qtcpserver_haspendingconnections_isbase) {
			qtcpserver_haspendingconnections_isbase = false;
			return QTcpServer::hasPendingConnections();
		} else if (qtcpserver_haspendingconnections_callback != nullptr) {
			bool callback_ret = qtcpserver_haspendingconnections_callback();
			return callback_ret;
		} else {
			return QTcpServer::hasPendingConnections();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QTcpSocket* nextPendingConnection() override {
		if (qtcpserver_nextpendingconnection_isbase) {
			qtcpserver_nextpendingconnection_isbase = false;
			return QTcpServer::nextPendingConnection();
		} else if (qtcpserver_nextpendingconnection_callback != nullptr) {
			QTcpSocket* callback_ret = qtcpserver_nextpendingconnection_callback();
			return callback_ret;
		} else {
			return QTcpServer::nextPendingConnection();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void incomingConnection(qintptr handle) override {
		if (qtcpserver_incomingconnection_isbase) {
			qtcpserver_incomingconnection_isbase = false;
			QTcpServer::incomingConnection(handle);
		} else if (qtcpserver_incomingconnection_callback != nullptr) {
			intptr_t cbval1 = handle;
			qtcpserver_incomingconnection_callback(this, cbval1);
		} else {
			QTcpServer::incomingConnection(handle);
		}
	}

	// Virtual method for C ABI access and custom callback
	void addPendingConnection(QTcpSocket* socket) {
		if (qtcpserver_addpendingconnection_isbase) {
			qtcpserver_addpendingconnection_isbase = false;
			QTcpServer::addPendingConnection(socket);
		} else if (qtcpserver_addpendingconnection_callback != nullptr) {
			QTcpSocket* cbval1 = socket;
			qtcpserver_addpendingconnection_callback(this, cbval1);
		} else {
			QTcpServer::addPendingConnection(socket);
		}
	}

	// Friend functions
	friend void QTcpServer_IncomingConnection(QTcpServer* self, intptr_t handle);
	friend void QTcpServer_QBaseIncomingConnection(QTcpServer* self, intptr_t handle);
	friend void QTcpServer_AddPendingConnection(QTcpServer* self, QTcpSocket* socket);
	friend void QTcpServer_QBaseAddPendingConnection(QTcpServer* self, QTcpSocket* socket);
};

#endif


