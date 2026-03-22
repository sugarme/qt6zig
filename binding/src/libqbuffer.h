#pragma once
#ifndef QBUFFER_H_C_LIB
#define QBUFFER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBuffer QBuffer;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QBuffer* QBuffer_new();
QBuffer* QBuffer_new2(libqt_string buf);
QBuffer* QBuffer_new3(QObject* parent);
QBuffer* QBuffer_new4(libqt_string buf, QObject* parent);
libqt_string QBuffer_Tr(const char* s);
libqt_string QBuffer_Buffer(QBuffer* self);
libqt_string QBuffer_Buffer2(const QBuffer* self);
void QBuffer_SetBuffer(QBuffer* self, libqt_string a);
void QBuffer_SetData(QBuffer* self, const libqt_string data);
void QBuffer_SetData2(QBuffer* self, const char* data, ptrdiff_t lenVal);
libqt_string QBuffer_Data(const QBuffer* self);
bool QBuffer_Open(QBuffer* self, int openMode);
void QBuffer_Close(QBuffer* self);
long long QBuffer_Size(const QBuffer* self);
long long QBuffer_Pos(const QBuffer* self);
bool QBuffer_Seek(QBuffer* self, long long off);
bool QBuffer_AtEnd(const QBuffer* self);
bool QBuffer_CanReadLine(const QBuffer* self);
void QBuffer_ConnectNotify(QBuffer* self, const QMetaMethod* param1);
void QBuffer_DisconnectNotify(QBuffer* self, const QMetaMethod* param1);
long long QBuffer_ReadData(QBuffer* self, char* data, long long maxlen);
long long QBuffer_WriteData(QBuffer* self, const char* data, long long lenVal);
libqt_string QBuffer_Tr2(const char* s, const char* c);
libqt_string QBuffer_Tr3(const char* s, const char* c, int n);
void QBuffer_OnOpen(QBuffer* self, intptr_t slot);
bool QBuffer_QBaseOpen(QBuffer* self, int openMode);
void QBuffer_OnClose(QBuffer* self, intptr_t slot);
void QBuffer_QBaseClose(QBuffer* self);
void QBuffer_OnSize(const QBuffer* self, intptr_t slot);
long long QBuffer_QBaseSize(const QBuffer* self);
void QBuffer_OnPos(const QBuffer* self, intptr_t slot);
long long QBuffer_QBasePos(const QBuffer* self);
void QBuffer_OnSeek(QBuffer* self, intptr_t slot);
bool QBuffer_QBaseSeek(QBuffer* self, long long off);
void QBuffer_OnAtEnd(const QBuffer* self, intptr_t slot);
bool QBuffer_QBaseAtEnd(const QBuffer* self);
void QBuffer_OnCanReadLine(const QBuffer* self, intptr_t slot);
bool QBuffer_QBaseCanReadLine(const QBuffer* self);
void QBuffer_OnConnectNotify(QBuffer* self, intptr_t slot);
void QBuffer_QBaseConnectNotify(QBuffer* self, const QMetaMethod* param1);
void QBuffer_OnDisconnectNotify(QBuffer* self, intptr_t slot);
void QBuffer_QBaseDisconnectNotify(QBuffer* self, const QMetaMethod* param1);
void QBuffer_OnReadData(QBuffer* self, intptr_t slot);
long long QBuffer_QBaseReadData(QBuffer* self, char* data, long long maxlen);
void QBuffer_OnWriteData(QBuffer* self, intptr_t slot);
long long QBuffer_QBaseWriteData(QBuffer* self, const char* data, long long lenVal);
void QBuffer_Delete(QBuffer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
