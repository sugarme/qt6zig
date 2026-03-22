#pragma once
#ifndef QAUDIODEVICE_H_C_LIB
#define QAUDIODEVICE_H_C_LIB

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
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAudioDevice* QAudioDevice_new();
QAudioDevice* QAudioDevice_new2(const QAudioDevice* other);
void QAudioDevice_Swap(QAudioDevice* self, QAudioDevice* other);
void QAudioDevice_OperatorAssign(QAudioDevice* self, const QAudioDevice* other);
bool QAudioDevice_OperatorEqual(const QAudioDevice* self, const QAudioDevice* other);
bool QAudioDevice_OperatorNotEqual(const QAudioDevice* self, const QAudioDevice* other);
bool QAudioDevice_IsNull(const QAudioDevice* self);
libqt_string QAudioDevice_Id(const QAudioDevice* self);
libqt_string QAudioDevice_Description(const QAudioDevice* self);
bool QAudioDevice_IsDefault(const QAudioDevice* self);
int QAudioDevice_Mode(const QAudioDevice* self);
bool QAudioDevice_IsFormatSupported(const QAudioDevice* self, const QAudioFormat* format);
QAudioFormat* QAudioDevice_PreferredFormat(const QAudioDevice* self);
int QAudioDevice_MinimumSampleRate(const QAudioDevice* self);
int QAudioDevice_MaximumSampleRate(const QAudioDevice* self);
int QAudioDevice_MinimumChannelCount(const QAudioDevice* self);
int QAudioDevice_MaximumChannelCount(const QAudioDevice* self);
libqt_list QAudioDevice_SupportedSampleFormats(const QAudioDevice* self);
quint32 QAudioDevice_ChannelConfiguration(const QAudioDevice* self);
void QAudioDevice_Delete(QAudioDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
