#pragma once
#ifndef QTCPSOCKET_H_C_LIB
#define QTCPSOCKET_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractSocket QAbstractSocket;
typedef struct QObject QObject;
typedef struct QTcpSocket QTcpSocket;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QTcpSocket* QTcpSocket_new();
QTcpSocket* QTcpSocket_new2(QObject* parent);
libqt_string QTcpSocket_Tr(const char* s);
bool QTcpSocket_Bind(QTcpSocket* self, int addr);
libqt_string QTcpSocket_Tr2(const char* s, const char* c);
libqt_string QTcpSocket_Tr3(const char* s, const char* c, int n);
bool QTcpSocket_Bind2(QTcpSocket* self, int addr, uint16_t port);
bool QTcpSocket_Bind3(QTcpSocket* self, int addr, uint16_t port, int mode);
void QTcpSocket_Delete(QTcpSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
