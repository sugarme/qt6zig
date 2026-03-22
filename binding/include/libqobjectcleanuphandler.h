#pragma once
#ifndef QOBJECTCLEANUPHANDLER_H_C_LIB
#define QOBJECTCLEANUPHANDLER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QObject QObject;
typedef struct QObjectCleanupHandler QObjectCleanupHandler;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QObjectCleanupHandler* QObjectCleanupHandler_new();
libqt_string QObjectCleanupHandler_Tr(const char* s);
QObject* QObjectCleanupHandler_Add(QObjectCleanupHandler* self, QObject* object);
void QObjectCleanupHandler_Remove(QObjectCleanupHandler* self, QObject* object);
bool QObjectCleanupHandler_IsEmpty(const QObjectCleanupHandler* self);
void QObjectCleanupHandler_Clear(QObjectCleanupHandler* self);
libqt_string QObjectCleanupHandler_Tr2(const char* s, const char* c);
libqt_string QObjectCleanupHandler_Tr3(const char* s, const char* c, int n);
void QObjectCleanupHandler_Delete(QObjectCleanupHandler* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
