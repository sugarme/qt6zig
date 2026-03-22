#pragma once
#ifndef QAUDIOSOURCE_H_C_LIB
#define QAUDIOSOURCE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAudioDevice QAudioDevice;
typedef struct QAudioFormat QAudioFormat;
typedef struct QAudioSource QAudioSource;
typedef struct QIODevice QIODevice;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAudioSource* QAudioSource_new();
QAudioSource* QAudioSource_new2(const QAudioDevice* audioDeviceInfo);
QAudioSource* QAudioSource_new3(const QAudioFormat* format);
QAudioSource* QAudioSource_new4(const QAudioFormat* format, QObject* parent);
QAudioSource* QAudioSource_new5(const QAudioDevice* audioDeviceInfo, const QAudioFormat* format);
QAudioSource* QAudioSource_new6(const QAudioDevice* audioDeviceInfo, const QAudioFormat* format, QObject* parent);
libqt_string QAudioSource_Tr(const char* s);
bool QAudioSource_IsNull(const QAudioSource* self);
QAudioFormat* QAudioSource_Format(const QAudioSource* self);
void QAudioSource_Start(QAudioSource* self, QIODevice* device);
QIODevice* QAudioSource_Start2(QAudioSource* self);
void QAudioSource_Stop(QAudioSource* self);
void QAudioSource_Reset(QAudioSource* self);
void QAudioSource_Suspend(QAudioSource* self);
void QAudioSource_Resume(QAudioSource* self);
void QAudioSource_SetBufferSize(QAudioSource* self, ptrdiff_t bytes);
ptrdiff_t QAudioSource_BufferSize(const QAudioSource* self);
ptrdiff_t QAudioSource_BytesAvailable(const QAudioSource* self);
void QAudioSource_SetVolume(QAudioSource* self, double volume);
double QAudioSource_Volume(const QAudioSource* self);
long long QAudioSource_ProcessedUSecs(const QAudioSource* self);
long long QAudioSource_ElapsedUSecs(const QAudioSource* self);
int QAudioSource_Error(const QAudioSource* self);
int QAudioSource_State(const QAudioSource* self);
void QAudioSource_StateChanged(QAudioSource* self, int state);
void QAudioSource_Connect_StateChanged(QAudioSource* self, intptr_t slot);
libqt_string QAudioSource_Tr2(const char* s, const char* c);
libqt_string QAudioSource_Tr3(const char* s, const char* c, int n);
void QAudioSource_Delete(QAudioSource* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
