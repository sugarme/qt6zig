#pragma once
#ifndef QWEBCHANNELABSTRACTTRANSPORT_H_C_LIB
#define QWEBCHANNELABSTRACTTRANSPORT_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QJsonObject QJsonObject;
typedef struct QObject QObject;
typedef struct QWebChannelAbstractTransport QWebChannelAbstractTransport;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QWebChannelAbstractTransport* QWebChannelAbstractTransport_new();
QWebChannelAbstractTransport* QWebChannelAbstractTransport_new2(QObject* parent);
libqt_string QWebChannelAbstractTransport_Tr(const char* s);
void QWebChannelAbstractTransport_SendMessage(QWebChannelAbstractTransport* self, const QJsonObject* message);
void QWebChannelAbstractTransport_MessageReceived(QWebChannelAbstractTransport* self, const QJsonObject* message, QWebChannelAbstractTransport* transport);
void QWebChannelAbstractTransport_Connect_MessageReceived(QWebChannelAbstractTransport* self, intptr_t slot);
libqt_string QWebChannelAbstractTransport_Tr2(const char* s, const char* c);
libqt_string QWebChannelAbstractTransport_Tr3(const char* s, const char* c, int n);
void QWebChannelAbstractTransport_OnSendMessage(QWebChannelAbstractTransport* self, intptr_t slot);
void QWebChannelAbstractTransport_QBaseSendMessage(QWebChannelAbstractTransport* self, const QJsonObject* message);
void QWebChannelAbstractTransport_Delete(QWebChannelAbstractTransport* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
