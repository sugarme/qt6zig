#pragma once
#ifndef QAUDIOOUTPUT_H_C_LIB
#define QAUDIOOUTPUT_H_C_LIB

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
typedef struct QAudioOutput QAudioOutput;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAudioOutput* QAudioOutput_new();
QAudioOutput* QAudioOutput_new2(const QAudioDevice* device);
QAudioOutput* QAudioOutput_new3(QObject* parent);
QAudioOutput* QAudioOutput_new4(const QAudioDevice* device, QObject* parent);
libqt_string QAudioOutput_Tr(const char* s);
QAudioDevice* QAudioOutput_Device(const QAudioOutput* self);
float QAudioOutput_Volume(const QAudioOutput* self);
bool QAudioOutput_IsMuted(const QAudioOutput* self);
void QAudioOutput_SetDevice(QAudioOutput* self, const QAudioDevice* device);
void QAudioOutput_SetVolume(QAudioOutput* self, float volume);
void QAudioOutput_SetMuted(QAudioOutput* self, bool muted);
void QAudioOutput_DeviceChanged(QAudioOutput* self);
void QAudioOutput_Connect_DeviceChanged(QAudioOutput* self, intptr_t slot);
void QAudioOutput_VolumeChanged(QAudioOutput* self, float volume);
void QAudioOutput_Connect_VolumeChanged(QAudioOutput* self, intptr_t slot);
void QAudioOutput_MutedChanged(QAudioOutput* self, bool muted);
void QAudioOutput_Connect_MutedChanged(QAudioOutput* self, intptr_t slot);
libqt_string QAudioOutput_Tr2(const char* s, const char* c);
libqt_string QAudioOutput_Tr3(const char* s, const char* c, int n);
void QAudioOutput_Delete(QAudioOutput* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
