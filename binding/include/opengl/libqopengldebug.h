#pragma once
#ifndef QOPENGLDEBUG_H_C_LIB
#define QOPENGLDEBUG_H_C_LIB

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
typedef struct QOpenGLDebugLogger QOpenGLDebugLogger;
typedef struct QOpenGLDebugMessage QOpenGLDebugMessage;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QOpenGLDebugMessage* QOpenGLDebugMessage_new();
QOpenGLDebugMessage* QOpenGLDebugMessage_new2(const QOpenGLDebugMessage* debugMessage);
void QOpenGLDebugMessage_OperatorAssign(QOpenGLDebugMessage* self, const QOpenGLDebugMessage* debugMessage);
void QOpenGLDebugMessage_Swap(QOpenGLDebugMessage* self, QOpenGLDebugMessage* other);
int QOpenGLDebugMessage_Source(const QOpenGLDebugMessage* self);
int QOpenGLDebugMessage_Type(const QOpenGLDebugMessage* self);
int QOpenGLDebugMessage_Severity(const QOpenGLDebugMessage* self);
uint32_t QOpenGLDebugMessage_Id(const QOpenGLDebugMessage* self);
libqt_string QOpenGLDebugMessage_Message(const QOpenGLDebugMessage* self);
QOpenGLDebugMessage* QOpenGLDebugMessage_CreateApplicationMessage(const libqt_string text);
QOpenGLDebugMessage* QOpenGLDebugMessage_CreateThirdPartyMessage(const libqt_string text);
bool QOpenGLDebugMessage_OperatorEqual(const QOpenGLDebugMessage* self, const QOpenGLDebugMessage* debugMessage);
bool QOpenGLDebugMessage_OperatorNotEqual(const QOpenGLDebugMessage* self, const QOpenGLDebugMessage* debugMessage);
QOpenGLDebugMessage* QOpenGLDebugMessage_CreateApplicationMessage2(const libqt_string text, uint32_t id);
QOpenGLDebugMessage* QOpenGLDebugMessage_CreateApplicationMessage3(const libqt_string text, uint32_t id, int severity);
QOpenGLDebugMessage* QOpenGLDebugMessage_CreateApplicationMessage4(const libqt_string text, uint32_t id, int severity, int typeVal);
QOpenGLDebugMessage* QOpenGLDebugMessage_CreateThirdPartyMessage2(const libqt_string text, uint32_t id);
QOpenGLDebugMessage* QOpenGLDebugMessage_CreateThirdPartyMessage3(const libqt_string text, uint32_t id, int severity);
QOpenGLDebugMessage* QOpenGLDebugMessage_CreateThirdPartyMessage4(const libqt_string text, uint32_t id, int severity, int typeVal);
void QOpenGLDebugMessage_Delete(QOpenGLDebugMessage* self);

QOpenGLDebugLogger* QOpenGLDebugLogger_new();
QOpenGLDebugLogger* QOpenGLDebugLogger_new2(QObject* parent);
libqt_string QOpenGLDebugLogger_Tr(const char* s);
bool QOpenGLDebugLogger_Initialize(QOpenGLDebugLogger* self);
bool QOpenGLDebugLogger_IsLogging(const QOpenGLDebugLogger* self);
int QOpenGLDebugLogger_LoggingMode(const QOpenGLDebugLogger* self);
long long QOpenGLDebugLogger_MaximumMessageLength(const QOpenGLDebugLogger* self);
void QOpenGLDebugLogger_PushGroup(QOpenGLDebugLogger* self, const libqt_string name);
void QOpenGLDebugLogger_PopGroup(QOpenGLDebugLogger* self);
void QOpenGLDebugLogger_EnableMessages(QOpenGLDebugLogger* self);
void QOpenGLDebugLogger_EnableMessages2(QOpenGLDebugLogger* self, const libqt_list ids);
void QOpenGLDebugLogger_DisableMessages(QOpenGLDebugLogger* self);
void QOpenGLDebugLogger_DisableMessages2(QOpenGLDebugLogger* self, const libqt_list ids);
libqt_list QOpenGLDebugLogger_LoggedMessages(const QOpenGLDebugLogger* self);
void QOpenGLDebugLogger_LogMessage(QOpenGLDebugLogger* self, const QOpenGLDebugMessage* debugMessage);
void QOpenGLDebugLogger_StartLogging(QOpenGLDebugLogger* self);
void QOpenGLDebugLogger_StopLogging(QOpenGLDebugLogger* self);
void QOpenGLDebugLogger_MessageLogged(QOpenGLDebugLogger* self, const QOpenGLDebugMessage* debugMessage);
void QOpenGLDebugLogger_Connect_MessageLogged(QOpenGLDebugLogger* self, intptr_t slot);
libqt_string QOpenGLDebugLogger_Tr2(const char* s, const char* c);
libqt_string QOpenGLDebugLogger_Tr3(const char* s, const char* c, int n);
void QOpenGLDebugLogger_PushGroup2(QOpenGLDebugLogger* self, const libqt_string name, uint32_t id);
void QOpenGLDebugLogger_PushGroup3(QOpenGLDebugLogger* self, const libqt_string name, uint32_t id, int source);
void QOpenGLDebugLogger_EnableMessages1(QOpenGLDebugLogger* self, int sources);
void QOpenGLDebugLogger_EnableMessages22(QOpenGLDebugLogger* self, int sources, int types);
void QOpenGLDebugLogger_EnableMessages3(QOpenGLDebugLogger* self, int sources, int types, int severities);
void QOpenGLDebugLogger_EnableMessages23(QOpenGLDebugLogger* self, const libqt_list ids, int sources);
void QOpenGLDebugLogger_EnableMessages32(QOpenGLDebugLogger* self, const libqt_list ids, int sources, int types);
void QOpenGLDebugLogger_DisableMessages1(QOpenGLDebugLogger* self, int sources);
void QOpenGLDebugLogger_DisableMessages22(QOpenGLDebugLogger* self, int sources, int types);
void QOpenGLDebugLogger_DisableMessages3(QOpenGLDebugLogger* self, int sources, int types, int severities);
void QOpenGLDebugLogger_DisableMessages23(QOpenGLDebugLogger* self, const libqt_list ids, int sources);
void QOpenGLDebugLogger_DisableMessages32(QOpenGLDebugLogger* self, const libqt_list ids, int sources, int types);
void QOpenGLDebugLogger_StartLogging1(QOpenGLDebugLogger* self, int loggingMode);
void QOpenGLDebugLogger_Delete(QOpenGLDebugLogger* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
