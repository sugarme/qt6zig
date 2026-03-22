#pragma once
#ifndef QAUDIOENGINE_H_C_LIB
#define QAUDIOENGINE_H_C_LIB

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
typedef struct QAudioEngine QAudioEngine;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAudioEngine* QAudioEngine_new();
QAudioEngine* QAudioEngine_new2(QObject* parent);
QAudioEngine* QAudioEngine_new3(int sampleRate);
QAudioEngine* QAudioEngine_new4(int sampleRate, QObject* parent);
libqt_string QAudioEngine_Tr(const char* s);
void QAudioEngine_SetOutputMode(QAudioEngine* self, int mode);
int QAudioEngine_OutputMode(const QAudioEngine* self);
int QAudioEngine_SampleRate(const QAudioEngine* self);
void QAudioEngine_SetOutputDevice(QAudioEngine* self, const QAudioDevice* device);
QAudioDevice* QAudioEngine_OutputDevice(const QAudioEngine* self);
void QAudioEngine_SetMasterVolume(QAudioEngine* self, float volume);
float QAudioEngine_MasterVolume(const QAudioEngine* self);
void QAudioEngine_SetPaused(QAudioEngine* self, bool paused);
bool QAudioEngine_Paused(const QAudioEngine* self);
void QAudioEngine_SetRoomEffectsEnabled(QAudioEngine* self, bool enabled);
bool QAudioEngine_RoomEffectsEnabled(const QAudioEngine* self);
void QAudioEngine_SetDistanceScale(QAudioEngine* self, float scale);
float QAudioEngine_DistanceScale(const QAudioEngine* self);
void QAudioEngine_OutputModeChanged(QAudioEngine* self);
void QAudioEngine_Connect_OutputModeChanged(QAudioEngine* self, intptr_t slot);
void QAudioEngine_OutputDeviceChanged(QAudioEngine* self);
void QAudioEngine_Connect_OutputDeviceChanged(QAudioEngine* self, intptr_t slot);
void QAudioEngine_MasterVolumeChanged(QAudioEngine* self);
void QAudioEngine_Connect_MasterVolumeChanged(QAudioEngine* self, intptr_t slot);
void QAudioEngine_PausedChanged(QAudioEngine* self);
void QAudioEngine_Connect_PausedChanged(QAudioEngine* self, intptr_t slot);
void QAudioEngine_DistanceScaleChanged(QAudioEngine* self);
void QAudioEngine_Connect_DistanceScaleChanged(QAudioEngine* self, intptr_t slot);
void QAudioEngine_Start(QAudioEngine* self);
void QAudioEngine_Stop(QAudioEngine* self);
void QAudioEngine_Pause(QAudioEngine* self);
void QAudioEngine_Resume(QAudioEngine* self);
libqt_string QAudioEngine_Tr2(const char* s, const char* c);
libqt_string QAudioEngine_Tr3(const char* s, const char* c, int n);
void QAudioEngine_Delete(QAudioEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
