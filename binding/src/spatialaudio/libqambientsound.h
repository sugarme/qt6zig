#pragma once
#ifndef QAMBIENTSOUND_H_C_LIB
#define QAMBIENTSOUND_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAmbientSound QAmbientSound;
typedef struct QAudioEngine QAudioEngine;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAmbientSound* QAmbientSound_new(QAudioEngine* engine);
libqt_string QAmbientSound_Tr(const char* s);
void QAmbientSound_SetSource(QAmbientSound* self, const QUrl* url);
QUrl* QAmbientSound_Source(const QAmbientSound* self);
int QAmbientSound_Loops(const QAmbientSound* self);
void QAmbientSound_SetLoops(QAmbientSound* self, int loops);
bool QAmbientSound_AutoPlay(const QAmbientSound* self);
void QAmbientSound_SetAutoPlay(QAmbientSound* self, bool autoPlay);
void QAmbientSound_SetVolume(QAmbientSound* self, float volume);
float QAmbientSound_Volume(const QAmbientSound* self);
QAudioEngine* QAmbientSound_Engine(const QAmbientSound* self);
void QAmbientSound_SourceChanged(QAmbientSound* self);
void QAmbientSound_Connect_SourceChanged(QAmbientSound* self, intptr_t slot);
void QAmbientSound_LoopsChanged(QAmbientSound* self);
void QAmbientSound_Connect_LoopsChanged(QAmbientSound* self, intptr_t slot);
void QAmbientSound_AutoPlayChanged(QAmbientSound* self);
void QAmbientSound_Connect_AutoPlayChanged(QAmbientSound* self, intptr_t slot);
void QAmbientSound_VolumeChanged(QAmbientSound* self);
void QAmbientSound_Connect_VolumeChanged(QAmbientSound* self, intptr_t slot);
void QAmbientSound_Play(QAmbientSound* self);
void QAmbientSound_Pause(QAmbientSound* self);
void QAmbientSound_Stop(QAmbientSound* self);
libqt_string QAmbientSound_Tr2(const char* s, const char* c);
libqt_string QAmbientSound_Tr3(const char* s, const char* c, int n);
void QAmbientSound_Delete(QAmbientSound* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
