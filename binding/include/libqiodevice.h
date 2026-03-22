#pragma once
#ifndef QIODEVICE_H_C_LIB
#define QIODEVICE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QIODevice* QIODevice_new();
QIODevice* QIODevice_new2(QObject* parent);
libqt_string QIODevice_Tr(const char* s);
int QIODevice_OpenMode(const QIODevice* self);
void QIODevice_SetTextModeEnabled(QIODevice* self, bool enabled);
bool QIODevice_IsTextModeEnabled(const QIODevice* self);
bool QIODevice_IsOpen(const QIODevice* self);
bool QIODevice_IsReadable(const QIODevice* self);
bool QIODevice_IsWritable(const QIODevice* self);
bool QIODevice_IsSequential(const QIODevice* self);
int QIODevice_ReadChannelCount(const QIODevice* self);
int QIODevice_WriteChannelCount(const QIODevice* self);
int QIODevice_CurrentReadChannel(const QIODevice* self);
void QIODevice_SetCurrentReadChannel(QIODevice* self, int channel);
int QIODevice_CurrentWriteChannel(const QIODevice* self);
void QIODevice_SetCurrentWriteChannel(QIODevice* self, int channel);
bool QIODevice_Open(QIODevice* self, int mode);
void QIODevice_Close(QIODevice* self);
long long QIODevice_Pos(const QIODevice* self);
long long QIODevice_Size(const QIODevice* self);
bool QIODevice_Seek(QIODevice* self, long long pos);
bool QIODevice_AtEnd(const QIODevice* self);
bool QIODevice_Reset(QIODevice* self);
long long QIODevice_BytesAvailable(const QIODevice* self);
long long QIODevice_BytesToWrite(const QIODevice* self);
long long QIODevice_Read(QIODevice* self, char* data, long long maxlen);
libqt_string QIODevice_Read2(QIODevice* self, long long maxlen);
libqt_string QIODevice_ReadAll(QIODevice* self);
long long QIODevice_ReadLine(QIODevice* self, char* data, long long maxlen);
libqt_string QIODevice_ReadLine2(QIODevice* self);
bool QIODevice_CanReadLine(const QIODevice* self);
void QIODevice_StartTransaction(QIODevice* self);
void QIODevice_CommitTransaction(QIODevice* self);
void QIODevice_RollbackTransaction(QIODevice* self);
bool QIODevice_IsTransactionStarted(const QIODevice* self);
long long QIODevice_Write(QIODevice* self, const char* data, long long lenVal);
long long QIODevice_Write2(QIODevice* self, const char* data);
long long QIODevice_Write3(QIODevice* self, const libqt_string data);
long long QIODevice_Peek(QIODevice* self, char* data, long long maxlen);
libqt_string QIODevice_Peek2(QIODevice* self, long long maxlen);
long long QIODevice_Skip(QIODevice* self, long long maxSize);
bool QIODevice_WaitForReadyRead(QIODevice* self, int msecs);
bool QIODevice_WaitForBytesWritten(QIODevice* self, int msecs);
void QIODevice_UngetChar(QIODevice* self, char c);
bool QIODevice_PutChar(QIODevice* self, char c);
bool QIODevice_GetChar(QIODevice* self, char* c);
libqt_string QIODevice_ErrorString(const QIODevice* self);
void QIODevice_ReadyRead(QIODevice* self);
void QIODevice_Connect_ReadyRead(QIODevice* self, intptr_t slot);
void QIODevice_ChannelReadyRead(QIODevice* self, int channel);
void QIODevice_Connect_ChannelReadyRead(QIODevice* self, intptr_t slot);
void QIODevice_BytesWritten(QIODevice* self, long long bytes);
void QIODevice_Connect_BytesWritten(QIODevice* self, intptr_t slot);
void QIODevice_ChannelBytesWritten(QIODevice* self, int channel, long long bytes);
void QIODevice_Connect_ChannelBytesWritten(QIODevice* self, intptr_t slot);
void QIODevice_AboutToClose(QIODevice* self);
void QIODevice_Connect_AboutToClose(QIODevice* self, intptr_t slot);
void QIODevice_ReadChannelFinished(QIODevice* self);
void QIODevice_Connect_ReadChannelFinished(QIODevice* self, intptr_t slot);
long long QIODevice_ReadData(QIODevice* self, char* data, long long maxlen);
long long QIODevice_ReadLineData(QIODevice* self, char* data, long long maxlen);
long long QIODevice_SkipData(QIODevice* self, long long maxSize);
long long QIODevice_WriteData(QIODevice* self, const char* data, long long lenVal);
libqt_string QIODevice_Tr2(const char* s, const char* c);
libqt_string QIODevice_Tr3(const char* s, const char* c, int n);
libqt_string QIODevice_ReadLine1(QIODevice* self, long long maxlen);
void QIODevice_OnIsSequential(const QIODevice* self, intptr_t slot);
bool QIODevice_QBaseIsSequential(const QIODevice* self);
void QIODevice_OnOpen(QIODevice* self, intptr_t slot);
bool QIODevice_QBaseOpen(QIODevice* self, int mode);
void QIODevice_OnClose(QIODevice* self, intptr_t slot);
void QIODevice_QBaseClose(QIODevice* self);
void QIODevice_OnPos(const QIODevice* self, intptr_t slot);
long long QIODevice_QBasePos(const QIODevice* self);
void QIODevice_OnSize(const QIODevice* self, intptr_t slot);
long long QIODevice_QBaseSize(const QIODevice* self);
void QIODevice_OnSeek(QIODevice* self, intptr_t slot);
bool QIODevice_QBaseSeek(QIODevice* self, long long pos);
void QIODevice_OnAtEnd(const QIODevice* self, intptr_t slot);
bool QIODevice_QBaseAtEnd(const QIODevice* self);
void QIODevice_OnReset(QIODevice* self, intptr_t slot);
bool QIODevice_QBaseReset(QIODevice* self);
void QIODevice_OnBytesAvailable(const QIODevice* self, intptr_t slot);
long long QIODevice_QBaseBytesAvailable(const QIODevice* self);
void QIODevice_OnBytesToWrite(const QIODevice* self, intptr_t slot);
long long QIODevice_QBaseBytesToWrite(const QIODevice* self);
void QIODevice_OnCanReadLine(const QIODevice* self, intptr_t slot);
bool QIODevice_QBaseCanReadLine(const QIODevice* self);
void QIODevice_OnWaitForReadyRead(QIODevice* self, intptr_t slot);
bool QIODevice_QBaseWaitForReadyRead(QIODevice* self, int msecs);
void QIODevice_OnWaitForBytesWritten(QIODevice* self, intptr_t slot);
bool QIODevice_QBaseWaitForBytesWritten(QIODevice* self, int msecs);
void QIODevice_OnReadData(QIODevice* self, intptr_t slot);
long long QIODevice_QBaseReadData(QIODevice* self, char* data, long long maxlen);
void QIODevice_OnReadLineData(QIODevice* self, intptr_t slot);
long long QIODevice_QBaseReadLineData(QIODevice* self, char* data, long long maxlen);
void QIODevice_OnSkipData(QIODevice* self, intptr_t slot);
long long QIODevice_QBaseSkipData(QIODevice* self, long long maxSize);
void QIODevice_OnWriteData(QIODevice* self, intptr_t slot);
long long QIODevice_QBaseWriteData(QIODevice* self, const char* data, long long lenVal);
void QIODevice_SetOpenMode(QIODevice* self, int openMode);
void QIODevice_OnSetOpenMode(QIODevice* self, intptr_t slot);
void QIODevice_QBaseSetOpenMode(QIODevice* self, int openMode);
void QIODevice_SetErrorString(QIODevice* self, const libqt_string errorString);
void QIODevice_OnSetErrorString(QIODevice* self, intptr_t slot);
void QIODevice_QBaseSetErrorString(QIODevice* self, const libqt_string errorString);
void QIODevice_Delete(QIODevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
