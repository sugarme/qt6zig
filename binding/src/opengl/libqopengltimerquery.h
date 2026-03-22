#pragma once
#ifndef QOPENGLTIMERQUERY_H_C_LIB
#define QOPENGLTIMERQUERY_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QObject QObject;
typedef struct QOpenGLTimeMonitor QOpenGLTimeMonitor;
typedef struct QOpenGLTimerQuery QOpenGLTimerQuery;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QOpenGLTimerQuery* QOpenGLTimerQuery_new();
QOpenGLTimerQuery* QOpenGLTimerQuery_new2(QObject* parent);
libqt_string QOpenGLTimerQuery_Tr(const char* s);
bool QOpenGLTimerQuery_Create(QOpenGLTimerQuery* self);
void QOpenGLTimerQuery_Destroy(QOpenGLTimerQuery* self);
bool QOpenGLTimerQuery_IsCreated(const QOpenGLTimerQuery* self);
uint32_t QOpenGLTimerQuery_ObjectId(const QOpenGLTimerQuery* self);
void QOpenGLTimerQuery_Begin(QOpenGLTimerQuery* self);
void QOpenGLTimerQuery_End(QOpenGLTimerQuery* self);
uint64_t QOpenGLTimerQuery_WaitForTimestamp(const QOpenGLTimerQuery* self);
void QOpenGLTimerQuery_RecordTimestamp(QOpenGLTimerQuery* self);
bool QOpenGLTimerQuery_IsResultAvailable(const QOpenGLTimerQuery* self);
uint64_t QOpenGLTimerQuery_WaitForResult(const QOpenGLTimerQuery* self);
libqt_string QOpenGLTimerQuery_Tr2(const char* s, const char* c);
libqt_string QOpenGLTimerQuery_Tr3(const char* s, const char* c, int n);
void QOpenGLTimerQuery_Delete(QOpenGLTimerQuery* self);

QOpenGLTimeMonitor* QOpenGLTimeMonitor_new();
QOpenGLTimeMonitor* QOpenGLTimeMonitor_new2(QObject* parent);
libqt_string QOpenGLTimeMonitor_Tr(const char* s);
void QOpenGLTimeMonitor_SetSampleCount(QOpenGLTimeMonitor* self, int sampleCount);
int QOpenGLTimeMonitor_SampleCount(const QOpenGLTimeMonitor* self);
bool QOpenGLTimeMonitor_Create(QOpenGLTimeMonitor* self);
void QOpenGLTimeMonitor_Destroy(QOpenGLTimeMonitor* self);
bool QOpenGLTimeMonitor_IsCreated(const QOpenGLTimeMonitor* self);
libqt_list QOpenGLTimeMonitor_ObjectIds(const QOpenGLTimeMonitor* self);
int QOpenGLTimeMonitor_RecordSample(QOpenGLTimeMonitor* self);
bool QOpenGLTimeMonitor_IsResultAvailable(const QOpenGLTimeMonitor* self);
libqt_list QOpenGLTimeMonitor_WaitForSamples(const QOpenGLTimeMonitor* self);
libqt_list QOpenGLTimeMonitor_WaitForIntervals(const QOpenGLTimeMonitor* self);
void QOpenGLTimeMonitor_Reset(QOpenGLTimeMonitor* self);
libqt_string QOpenGLTimeMonitor_Tr2(const char* s, const char* c);
libqt_string QOpenGLTimeMonitor_Tr3(const char* s, const char* c, int n);
void QOpenGLTimeMonitor_Delete(QOpenGLTimeMonitor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
