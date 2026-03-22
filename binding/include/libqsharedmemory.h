#pragma once
#ifndef QSHAREDMEMORY_H_C_LIB
#define QSHAREDMEMORY_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QNativeIpcKey QNativeIpcKey;
typedef struct QObject QObject;
typedef struct QSharedMemory QSharedMemory;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSharedMemory* QSharedMemory_new();
QSharedMemory* QSharedMemory_new2(const QNativeIpcKey* key);
QSharedMemory* QSharedMemory_new3(const libqt_string key);
QSharedMemory* QSharedMemory_new4(QObject* parent);
QSharedMemory* QSharedMemory_new5(const QNativeIpcKey* key, QObject* parent);
QSharedMemory* QSharedMemory_new6(const libqt_string key, QObject* parent);
libqt_string QSharedMemory_Tr(const char* s);
void QSharedMemory_SetKey(QSharedMemory* self, const libqt_string key);
libqt_string QSharedMemory_Key(const QSharedMemory* self);
void QSharedMemory_SetNativeKey(QSharedMemory* self, const QNativeIpcKey* key);
void QSharedMemory_SetNativeKey2(QSharedMemory* self, const libqt_string key);
libqt_string QSharedMemory_NativeKey(const QSharedMemory* self);
QNativeIpcKey* QSharedMemory_NativeIpcKey(const QSharedMemory* self);
bool QSharedMemory_Create(QSharedMemory* self, ptrdiff_t size);
ptrdiff_t QSharedMemory_Size(const QSharedMemory* self);
bool QSharedMemory_Attach(QSharedMemory* self);
bool QSharedMemory_IsAttached(const QSharedMemory* self);
bool QSharedMemory_Detach(QSharedMemory* self);
void* QSharedMemory_Data(QSharedMemory* self);
const void* QSharedMemory_ConstData(const QSharedMemory* self);
const void* QSharedMemory_Data2(const QSharedMemory* self);
bool QSharedMemory_Lock(QSharedMemory* self);
bool QSharedMemory_Unlock(QSharedMemory* self);
int QSharedMemory_Error(const QSharedMemory* self);
libqt_string QSharedMemory_ErrorString(const QSharedMemory* self);
bool QSharedMemory_IsKeyTypeSupported(quint16 typeVal);
QNativeIpcKey* QSharedMemory_PlatformSafeKey(const libqt_string key);
QNativeIpcKey* QSharedMemory_LegacyNativeKey(const libqt_string key);
libqt_string QSharedMemory_Tr2(const char* s, const char* c);
libqt_string QSharedMemory_Tr3(const char* s, const char* c, int n);
void QSharedMemory_SetNativeKey22(QSharedMemory* self, const libqt_string key, quint16 typeVal);
bool QSharedMemory_Create2(QSharedMemory* self, ptrdiff_t size, int mode);
bool QSharedMemory_Attach1(QSharedMemory* self, int mode);
QNativeIpcKey* QSharedMemory_PlatformSafeKey2(const libqt_string key, quint16 typeVal);
QNativeIpcKey* QSharedMemory_LegacyNativeKey2(const libqt_string key, quint16 typeVal);
void QSharedMemory_Delete(QSharedMemory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
