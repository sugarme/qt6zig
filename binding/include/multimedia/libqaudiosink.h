#pragma once
#ifndef QAUDIOSINK_H_C_LIB
#define QAUDIOSINK_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAudioDevice QAudioDevice;
typedef struct QAudioFormat QAudioFormat;
typedef struct QAudioSink QAudioSink;
typedef struct QIODevice QIODevice;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAudioSink* QAudioSink_new();
QAudioSink* QAudioSink_new2(const QAudioDevice* audioDeviceInfo);
QAudioSink* QAudioSink_new3(const QAudioFormat* format);
QAudioSink* QAudioSink_new4(const QAudioFormat* format, QObject* parent);
QAudioSink* QAudioSink_new5(const QAudioDevice* audioDeviceInfo, const QAudioFormat* format);
QAudioSink* QAudioSink_new6(const QAudioDevice* audioDeviceInfo, const QAudioFormat* format, QObject* parent);
libqt_string QAudioSink_Tr(const char* s);
bool QAudioSink_IsNull(const QAudioSink* self);
QAudioFormat* QAudioSink_Format(const QAudioSink* self);
void QAudioSink_Start(QAudioSink* self, QIODevice* device);
QIODevice* QAudioSink_Start2(QAudioSink* self);
void QAudioSink_Stop(QAudioSink* self);
void QAudioSink_Reset(QAudioSink* self);
void QAudioSink_Suspend(QAudioSink* self);
void QAudioSink_Resume(QAudioSink* self);
void QAudioSink_SetBufferSize(QAudioSink* self, ptrdiff_t bytes);
ptrdiff_t QAudioSink_BufferSize(const QAudioSink* self);
ptrdiff_t QAudioSink_BytesFree(const QAudioSink* self);
long long QAudioSink_ProcessedUSecs(const QAudioSink* self);
long long QAudioSink_ElapsedUSecs(const QAudioSink* self);
int QAudioSink_Error(const QAudioSink* self);
int QAudioSink_State(const QAudioSink* self);
void QAudioSink_SetVolume(QAudioSink* self, double volume);
double QAudioSink_Volume(const QAudioSink* self);
void QAudioSink_StateChanged(QAudioSink* self, int state);
void QAudioSink_Connect_StateChanged(QAudioSink* self, intptr_t slot);
libqt_string QAudioSink_Tr2(const char* s, const char* c);
libqt_string QAudioSink_Tr3(const char* s, const char* c, int n);
void QAudioSink_Delete(QAudioSink* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
