#pragma once
#ifndef QSESSIONMANAGER_H_C_LIB
#define QSESSIONMANAGER_H_C_LIB

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
typedef struct QSessionManager QSessionManager;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



libqt_string QSessionManager_Tr(const char* s);
libqt_string QSessionManager_SessionId(const QSessionManager* self);
libqt_string QSessionManager_SessionKey(const QSessionManager* self);
bool QSessionManager_AllowsInteraction(QSessionManager* self);
bool QSessionManager_AllowsErrorInteraction(QSessionManager* self);
void QSessionManager_Release(QSessionManager* self);
void QSessionManager_Cancel(QSessionManager* self);
void QSessionManager_SetRestartHint(QSessionManager* self, int restartHint);
int QSessionManager_RestartHint(const QSessionManager* self);
void QSessionManager_SetRestartCommand(QSessionManager* self, const libqt_list restartCommand);
libqt_list QSessionManager_RestartCommand(const QSessionManager* self);
void QSessionManager_SetDiscardCommand(QSessionManager* self, const libqt_list discardCommand);
libqt_list QSessionManager_DiscardCommand(const QSessionManager* self);
void QSessionManager_SetManagerProperty(QSessionManager* self, const libqt_string name, const libqt_string value);
void QSessionManager_SetManagerProperty2(QSessionManager* self, const libqt_string name, const libqt_list value);
bool QSessionManager_IsPhase2(const QSessionManager* self);
void QSessionManager_RequestPhase2(QSessionManager* self);
libqt_string QSessionManager_Tr2(const char* s, const char* c);
libqt_string QSessionManager_Tr3(const char* s, const char* c, int n);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
