#pragma once
#ifndef QFILEDEVICE_H_C_LIB
#define QFILEDEVICE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDateTime QDateTime;
typedef struct QFileDevice QFileDevice;
typedef struct QIODevice QIODevice;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



libqt_string QFileDevice_Tr(const char* s);
int QFileDevice_Error(const QFileDevice* self);
void QFileDevice_UnsetError(QFileDevice* self);
void QFileDevice_Close(QFileDevice* self);
bool QFileDevice_IsSequential(const QFileDevice* self);
int QFileDevice_Handle(const QFileDevice* self);
libqt_string QFileDevice_FileName(const QFileDevice* self);
long long QFileDevice_Pos(const QFileDevice* self);
bool QFileDevice_Seek(QFileDevice* self, long long offset);
bool QFileDevice_AtEnd(const QFileDevice* self);
bool QFileDevice_Flush(QFileDevice* self);
long long QFileDevice_Size(const QFileDevice* self);
bool QFileDevice_Resize(QFileDevice* self, long long sz);
int QFileDevice_Permissions(const QFileDevice* self);
bool QFileDevice_SetPermissions(QFileDevice* self, int permissionSpec);
unsigned char* QFileDevice_Map(QFileDevice* self, long long offset, long long size);
bool QFileDevice_Unmap(QFileDevice* self, unsigned char* address);
QDateTime* QFileDevice_FileTime(const QFileDevice* self, int time);
bool QFileDevice_SetFileTime(QFileDevice* self, const QDateTime* newDate, int fileTime);
long long QFileDevice_ReadData(QFileDevice* self, char* data, long long maxlen);
long long QFileDevice_WriteData(QFileDevice* self, const char* data, long long lenVal);
long long QFileDevice_ReadLineData(QFileDevice* self, char* data, long long maxlen);
libqt_string QFileDevice_Tr2(const char* s, const char* c);
libqt_string QFileDevice_Tr3(const char* s, const char* c, int n);
unsigned char* QFileDevice_Map3(QFileDevice* self, long long offset, long long size, int flags);
void QFileDevice_OnClose(QFileDevice* self, intptr_t slot);
void QFileDevice_QBaseClose(QFileDevice* self);
void QFileDevice_OnIsSequential(const QFileDevice* self, intptr_t slot);
bool QFileDevice_QBaseIsSequential(const QFileDevice* self);
void QFileDevice_OnFileName(const QFileDevice* self, intptr_t slot);
libqt_string QFileDevice_QBaseFileName(const QFileDevice* self);
void QFileDevice_OnPos(const QFileDevice* self, intptr_t slot);
long long QFileDevice_QBasePos(const QFileDevice* self);
void QFileDevice_OnSeek(QFileDevice* self, intptr_t slot);
bool QFileDevice_QBaseSeek(QFileDevice* self, long long offset);
void QFileDevice_OnAtEnd(const QFileDevice* self, intptr_t slot);
bool QFileDevice_QBaseAtEnd(const QFileDevice* self);
void QFileDevice_OnSize(const QFileDevice* self, intptr_t slot);
long long QFileDevice_QBaseSize(const QFileDevice* self);
void QFileDevice_OnResize(QFileDevice* self, intptr_t slot);
bool QFileDevice_QBaseResize(QFileDevice* self, long long sz);
void QFileDevice_OnPermissions(const QFileDevice* self, intptr_t slot);
int QFileDevice_QBasePermissions(const QFileDevice* self);
void QFileDevice_OnSetPermissions(QFileDevice* self, intptr_t slot);
bool QFileDevice_QBaseSetPermissions(QFileDevice* self, int permissionSpec);
void QFileDevice_OnReadData(QFileDevice* self, intptr_t slot);
long long QFileDevice_QBaseReadData(QFileDevice* self, char* data, long long maxlen);
void QFileDevice_OnWriteData(QFileDevice* self, intptr_t slot);
long long QFileDevice_QBaseWriteData(QFileDevice* self, const char* data, long long lenVal);
void QFileDevice_OnReadLineData(QFileDevice* self, intptr_t slot);
long long QFileDevice_QBaseReadLineData(QFileDevice* self, char* data, long long maxlen);
void QFileDevice_Delete(QFileDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
