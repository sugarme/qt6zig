#pragma once
#ifndef QWEBCHANNELABSTRACTTRANSPORT_H_C_LIBVIRTUAL
#define QWEBCHANNELABSTRACTTRANSPORT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QWebChannelAbstractTransport so that we can call protected methods
class VirtualQWebChannelAbstractTransport : public QWebChannelAbstractTransport {

public:
	// Virtual class boolean flag
	bool isVirtualQWebChannelAbstractTransport= true;

	// Virtual class public types (including callbacks)
	using QWebChannelAbstractTransport_SendMessage_Callback = void (*)(QWebChannelAbstractTransport*, const QJsonObject*);

protected:
	// Instance callback storage
	mutable QWebChannelAbstractTransport_SendMessage_Callback qwebchannelabstracttransport_sendmessage_callback = nullptr;

	// Instance base flags
    mutable bool qwebchannelabstracttransport_sendmessage_isbase = false;

public:
	VirtualQWebChannelAbstractTransport(): QWebChannelAbstractTransport() {};
	VirtualQWebChannelAbstractTransport(QObject* parent): QWebChannelAbstractTransport(parent) {};

	~VirtualQWebChannelAbstractTransport() {
		qwebchannelabstracttransport_sendmessage_callback = nullptr;
	}

// Callback setters
	inline void setQWebChannelAbstractTransport_SendMessage_Callback(QWebChannelAbstractTransport_SendMessage_Callback cb) const { qwebchannelabstracttransport_sendmessage_callback = cb; }

// Base flag setters
	inline void setQWebChannelAbstractTransport_SendMessage_IsBase(bool value) const { qwebchannelabstracttransport_sendmessage_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void sendMessage(const QJsonObject& message) override {
		if (qwebchannelabstracttransport_sendmessage_callback != nullptr) {
			const QJsonObject* cbval1 = (const QJsonObject*)&message;
			qwebchannelabstracttransport_sendmessage_callback(this, cbval1);
		}
	}
};

#endif


