#pragma once
#ifndef QAUDIOLISTENER_H_C_LIB
#define QAUDIOLISTENER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAudioEngine QAudioEngine;
typedef struct QAudioListener QAudioListener;
typedef struct QObject QObject;
typedef struct QQuaternion QQuaternion;
typedef struct QVector3D QVector3D;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAudioListener* QAudioListener_new(QAudioEngine* engine);
void QAudioListener_SetPosition(QAudioListener* self, QVector3D* pos);
QVector3D* QAudioListener_Position(const QAudioListener* self);
void QAudioListener_SetRotation(QAudioListener* self, const QQuaternion* q);
QQuaternion* QAudioListener_Rotation(const QAudioListener* self);
QAudioEngine* QAudioListener_Engine(const QAudioListener* self);
void QAudioListener_Delete(QAudioListener* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
