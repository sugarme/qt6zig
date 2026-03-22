#pragma once
#ifndef QMEDIADEVICES_H_C_LIB
#define QMEDIADEVICES_H_C_LIB

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
typedef struct QCameraDevice QCameraDevice;
typedef struct QMediaDevices QMediaDevices;
typedef struct QMetaMethod QMetaMethod;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QMediaDevices* QMediaDevices_new();
QMediaDevices* QMediaDevices_new2(QObject* parent);
libqt_string QMediaDevices_Tr(const char* s);
libqt_list QMediaDevices_AudioInputs();
libqt_list QMediaDevices_AudioOutputs();
libqt_list QMediaDevices_VideoInputs();
QAudioDevice* QMediaDevices_DefaultAudioInput();
QAudioDevice* QMediaDevices_DefaultAudioOutput();
QCameraDevice* QMediaDevices_DefaultVideoInput();
void QMediaDevices_AudioInputsChanged(QMediaDevices* self);
void QMediaDevices_Connect_AudioInputsChanged(QMediaDevices* self, intptr_t slot);
void QMediaDevices_AudioOutputsChanged(QMediaDevices* self);
void QMediaDevices_Connect_AudioOutputsChanged(QMediaDevices* self, intptr_t slot);
void QMediaDevices_VideoInputsChanged(QMediaDevices* self);
void QMediaDevices_Connect_VideoInputsChanged(QMediaDevices* self, intptr_t slot);
void QMediaDevices_ConnectNotify(QMediaDevices* self, const QMetaMethod* signal);
libqt_string QMediaDevices_Tr2(const char* s, const char* c);
libqt_string QMediaDevices_Tr3(const char* s, const char* c, int n);
void QMediaDevices_OnConnectNotify(QMediaDevices* self, intptr_t slot);
void QMediaDevices_QBaseConnectNotify(QMediaDevices* self, const QMetaMethod* signal);
void QMediaDevices_Delete(QMediaDevices* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
