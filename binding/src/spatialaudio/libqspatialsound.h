#pragma once
#ifndef QSPATIALSOUND_H_C_LIB
#define QSPATIALSOUND_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAudioEngine QAudioEngine;
typedef struct QObject QObject;
typedef struct QQuaternion QQuaternion;
typedef struct QSpatialSound QSpatialSound;
typedef struct QUrl QUrl;
typedef struct QVector3D QVector3D;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSpatialSound* QSpatialSound_new(QAudioEngine* engine);
libqt_string QSpatialSound_Tr(const char* s);
void QSpatialSound_SetSource(QSpatialSound* self, const QUrl* url);
QUrl* QSpatialSound_Source(const QSpatialSound* self);
int QSpatialSound_Loops(const QSpatialSound* self);
void QSpatialSound_SetLoops(QSpatialSound* self, int loops);
bool QSpatialSound_AutoPlay(const QSpatialSound* self);
void QSpatialSound_SetAutoPlay(QSpatialSound* self, bool autoPlay);
void QSpatialSound_SetPosition(QSpatialSound* self, QVector3D* pos);
QVector3D* QSpatialSound_Position(const QSpatialSound* self);
void QSpatialSound_SetRotation(QSpatialSound* self, const QQuaternion* q);
QQuaternion* QSpatialSound_Rotation(const QSpatialSound* self);
void QSpatialSound_SetVolume(QSpatialSound* self, float volume);
float QSpatialSound_Volume(const QSpatialSound* self);
void QSpatialSound_SetDistanceModel(QSpatialSound* self, int model);
int QSpatialSound_DistanceModel(const QSpatialSound* self);
void QSpatialSound_SetSize(QSpatialSound* self, float size);
float QSpatialSound_Size(const QSpatialSound* self);
void QSpatialSound_SetDistanceCutoff(QSpatialSound* self, float cutoff);
float QSpatialSound_DistanceCutoff(const QSpatialSound* self);
void QSpatialSound_SetManualAttenuation(QSpatialSound* self, float attenuation);
float QSpatialSound_ManualAttenuation(const QSpatialSound* self);
void QSpatialSound_SetOcclusionIntensity(QSpatialSound* self, float occlusion);
float QSpatialSound_OcclusionIntensity(const QSpatialSound* self);
void QSpatialSound_SetDirectivity(QSpatialSound* self, float alpha);
float QSpatialSound_Directivity(const QSpatialSound* self);
void QSpatialSound_SetDirectivityOrder(QSpatialSound* self, float alpha);
float QSpatialSound_DirectivityOrder(const QSpatialSound* self);
void QSpatialSound_SetNearFieldGain(QSpatialSound* self, float gain);
float QSpatialSound_NearFieldGain(const QSpatialSound* self);
QAudioEngine* QSpatialSound_Engine(const QSpatialSound* self);
void QSpatialSound_SourceChanged(QSpatialSound* self);
void QSpatialSound_Connect_SourceChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_LoopsChanged(QSpatialSound* self);
void QSpatialSound_Connect_LoopsChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_AutoPlayChanged(QSpatialSound* self);
void QSpatialSound_Connect_AutoPlayChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_PositionChanged(QSpatialSound* self);
void QSpatialSound_Connect_PositionChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_RotationChanged(QSpatialSound* self);
void QSpatialSound_Connect_RotationChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_VolumeChanged(QSpatialSound* self);
void QSpatialSound_Connect_VolumeChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_DistanceModelChanged(QSpatialSound* self);
void QSpatialSound_Connect_DistanceModelChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_SizeChanged(QSpatialSound* self);
void QSpatialSound_Connect_SizeChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_DistanceCutoffChanged(QSpatialSound* self);
void QSpatialSound_Connect_DistanceCutoffChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_ManualAttenuationChanged(QSpatialSound* self);
void QSpatialSound_Connect_ManualAttenuationChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_OcclusionIntensityChanged(QSpatialSound* self);
void QSpatialSound_Connect_OcclusionIntensityChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_DirectivityChanged(QSpatialSound* self);
void QSpatialSound_Connect_DirectivityChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_DirectivityOrderChanged(QSpatialSound* self);
void QSpatialSound_Connect_DirectivityOrderChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_NearFieldGainChanged(QSpatialSound* self);
void QSpatialSound_Connect_NearFieldGainChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_Play(QSpatialSound* self);
void QSpatialSound_Pause(QSpatialSound* self);
void QSpatialSound_Stop(QSpatialSound* self);
libqt_string QSpatialSound_Tr2(const char* s, const char* c);
libqt_string QSpatialSound_Tr3(const char* s, const char* c, int n);
void QSpatialSound_Delete(QSpatialSound* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
