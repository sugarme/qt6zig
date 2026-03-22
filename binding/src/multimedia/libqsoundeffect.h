#pragma once
#ifndef QSOUNDEFFECT_H_C_LIB
#define QSOUNDEFFECT_H_C_LIB

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
typedef struct QObject QObject;
typedef struct QSoundEffect QSoundEffect;
typedef struct QUrl QUrl;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSoundEffect* QSoundEffect_new();
QSoundEffect* QSoundEffect_new2(const QAudioDevice* audioDevice);
QSoundEffect* QSoundEffect_new3(QObject* parent);
QSoundEffect* QSoundEffect_new4(const QAudioDevice* audioDevice, QObject* parent);
libqt_string QSoundEffect_Tr(const char* s);
libqt_list QSoundEffect_SupportedMimeTypes();
QUrl* QSoundEffect_Source(const QSoundEffect* self);
void QSoundEffect_SetSource(QSoundEffect* self, const QUrl* url);
int QSoundEffect_LoopCount(const QSoundEffect* self);
int QSoundEffect_LoopsRemaining(const QSoundEffect* self);
void QSoundEffect_SetLoopCount(QSoundEffect* self, int loopCount);
QAudioDevice* QSoundEffect_AudioDevice(QSoundEffect* self);
void QSoundEffect_SetAudioDevice(QSoundEffect* self, const QAudioDevice* device);
float QSoundEffect_Volume(const QSoundEffect* self);
void QSoundEffect_SetVolume(QSoundEffect* self, float volume);
bool QSoundEffect_IsMuted(const QSoundEffect* self);
void QSoundEffect_SetMuted(QSoundEffect* self, bool muted);
bool QSoundEffect_IsLoaded(const QSoundEffect* self);
bool QSoundEffect_IsPlaying(const QSoundEffect* self);
int QSoundEffect_Status(const QSoundEffect* self);
void QSoundEffect_SourceChanged(QSoundEffect* self);
void QSoundEffect_Connect_SourceChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_LoopCountChanged(QSoundEffect* self);
void QSoundEffect_Connect_LoopCountChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_LoopsRemainingChanged(QSoundEffect* self);
void QSoundEffect_Connect_LoopsRemainingChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_VolumeChanged(QSoundEffect* self);
void QSoundEffect_Connect_VolumeChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_MutedChanged(QSoundEffect* self);
void QSoundEffect_Connect_MutedChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_LoadedChanged(QSoundEffect* self);
void QSoundEffect_Connect_LoadedChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_PlayingChanged(QSoundEffect* self);
void QSoundEffect_Connect_PlayingChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_StatusChanged(QSoundEffect* self);
void QSoundEffect_Connect_StatusChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_AudioDeviceChanged(QSoundEffect* self);
void QSoundEffect_Connect_AudioDeviceChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_Play(QSoundEffect* self);
void QSoundEffect_Stop(QSoundEffect* self);
libqt_string QSoundEffect_Tr2(const char* s, const char* c);
libqt_string QSoundEffect_Tr3(const char* s, const char* c, int n);
void QSoundEffect_Delete(QSoundEffect* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
