#pragma once
#ifndef QMEDIARECORDER_H_C_LIB
#define QMEDIARECORDER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QIODevice QIODevice;
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QMediaFormat QMediaFormat;
typedef struct QMediaMetaData QMediaMetaData;
typedef struct QMediaRecorder QMediaRecorder;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QUrl QUrl;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QMediaRecorder* QMediaRecorder_new();
QMediaRecorder* QMediaRecorder_new2(QObject* parent);
libqt_string QMediaRecorder_Tr(const char* s);
bool QMediaRecorder_IsAvailable(const QMediaRecorder* self);
QUrl* QMediaRecorder_OutputLocation(const QMediaRecorder* self);
void QMediaRecorder_SetOutputLocation(QMediaRecorder* self, const QUrl* location);
void QMediaRecorder_SetOutputDevice(QMediaRecorder* self, QIODevice* device);
QIODevice* QMediaRecorder_OutputDevice(const QMediaRecorder* self);
QUrl* QMediaRecorder_ActualLocation(const QMediaRecorder* self);
int QMediaRecorder_RecorderState(const QMediaRecorder* self);
int QMediaRecorder_Error(const QMediaRecorder* self);
libqt_string QMediaRecorder_ErrorString(const QMediaRecorder* self);
long long QMediaRecorder_Duration(const QMediaRecorder* self);
QMediaFormat* QMediaRecorder_MediaFormat(const QMediaRecorder* self);
void QMediaRecorder_SetMediaFormat(QMediaRecorder* self, const QMediaFormat* format);
int QMediaRecorder_EncodingMode(const QMediaRecorder* self);
void QMediaRecorder_SetEncodingMode(QMediaRecorder* self, int encodingMode);
int QMediaRecorder_Quality(const QMediaRecorder* self);
void QMediaRecorder_SetQuality(QMediaRecorder* self, int quality);
QSize* QMediaRecorder_VideoResolution(const QMediaRecorder* self);
void QMediaRecorder_SetVideoResolution(QMediaRecorder* self, const QSize* videoResolution);
void QMediaRecorder_SetVideoResolution2(QMediaRecorder* self, int width, int height);
double QMediaRecorder_VideoFrameRate(const QMediaRecorder* self);
void QMediaRecorder_SetVideoFrameRate(QMediaRecorder* self, double frameRate);
int QMediaRecorder_VideoBitRate(const QMediaRecorder* self);
void QMediaRecorder_SetVideoBitRate(QMediaRecorder* self, int bitRate);
int QMediaRecorder_AudioBitRate(const QMediaRecorder* self);
void QMediaRecorder_SetAudioBitRate(QMediaRecorder* self, int bitRate);
int QMediaRecorder_AudioChannelCount(const QMediaRecorder* self);
void QMediaRecorder_SetAudioChannelCount(QMediaRecorder* self, int channels);
int QMediaRecorder_AudioSampleRate(const QMediaRecorder* self);
void QMediaRecorder_SetAudioSampleRate(QMediaRecorder* self, int sampleRate);
QMediaMetaData* QMediaRecorder_MetaData(const QMediaRecorder* self);
void QMediaRecorder_SetMetaData(QMediaRecorder* self, const QMediaMetaData* metaData);
void QMediaRecorder_AddMetaData(QMediaRecorder* self, const QMediaMetaData* metaData);
bool QMediaRecorder_AutoStop(const QMediaRecorder* self);
void QMediaRecorder_SetAutoStop(QMediaRecorder* self, bool autoStop);
QMediaCaptureSession* QMediaRecorder_CaptureSession(const QMediaRecorder* self);
QPlatformMediaRecorder* QMediaRecorder_PlatformRecoder(const QMediaRecorder* self);
void QMediaRecorder_Record(QMediaRecorder* self);
void QMediaRecorder_Pause(QMediaRecorder* self);
void QMediaRecorder_Stop(QMediaRecorder* self);
void QMediaRecorder_RecorderStateChanged(QMediaRecorder* self, int state);
void QMediaRecorder_Connect_RecorderStateChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_DurationChanged(QMediaRecorder* self, long long duration);
void QMediaRecorder_Connect_DurationChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_ActualLocationChanged(QMediaRecorder* self, const QUrl* location);
void QMediaRecorder_Connect_ActualLocationChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_EncoderSettingsChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_EncoderSettingsChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_ErrorOccurred(QMediaRecorder* self, int errorVal, const libqt_string errorString);
void QMediaRecorder_Connect_ErrorOccurred(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_ErrorChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_ErrorChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_MetaDataChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_MetaDataChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_MediaFormatChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_MediaFormatChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_EncodingModeChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_EncodingModeChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_QualityChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_QualityChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_VideoResolutionChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_VideoResolutionChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_VideoFrameRateChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_VideoFrameRateChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_VideoBitRateChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_VideoBitRateChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_AudioBitRateChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_AudioBitRateChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_AudioChannelCountChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_AudioChannelCountChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_AudioSampleRateChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_AudioSampleRateChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_AutoStopChanged(QMediaRecorder* self);
void QMediaRecorder_Connect_AutoStopChanged(QMediaRecorder* self, intptr_t slot);
libqt_string QMediaRecorder_Tr2(const char* s, const char* c);
libqt_string QMediaRecorder_Tr3(const char* s, const char* c, int n);
void QMediaRecorder_Delete(QMediaRecorder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
