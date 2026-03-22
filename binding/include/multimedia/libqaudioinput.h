#pragma once
#ifndef QAUDIOINPUT_H_C_LIB
#define QAUDIOINPUT_H_C_LIB

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
typedef struct QAudioInput QAudioInput;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAudioInput* QAudioInput_new();
QAudioInput* QAudioInput_new2(const QAudioDevice* deviceInfo);
QAudioInput* QAudioInput_new3(QObject* parent);
QAudioInput* QAudioInput_new4(const QAudioDevice* deviceInfo, QObject* parent);
libqt_string QAudioInput_Tr(const char* s);
QAudioDevice* QAudioInput_Device(const QAudioInput* self);
float QAudioInput_Volume(const QAudioInput* self);
bool QAudioInput_IsMuted(const QAudioInput* self);
void QAudioInput_SetDevice(QAudioInput* self, const QAudioDevice* device);
void QAudioInput_SetVolume(QAudioInput* self, float volume);
void QAudioInput_SetMuted(QAudioInput* self, bool muted);
void QAudioInput_DeviceChanged(QAudioInput* self);
void QAudioInput_Connect_DeviceChanged(QAudioInput* self, intptr_t slot);
void QAudioInput_VolumeChanged(QAudioInput* self, float volume);
void QAudioInput_Connect_VolumeChanged(QAudioInput* self, intptr_t slot);
void QAudioInput_MutedChanged(QAudioInput* self, bool muted);
void QAudioInput_Connect_MutedChanged(QAudioInput* self, intptr_t slot);
libqt_string QAudioInput_Tr2(const char* s, const char* c);
libqt_string QAudioInput_Tr3(const char* s, const char* c, int n);
void QAudioInput_Delete(QAudioInput* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
