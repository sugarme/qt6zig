#pragma once
#ifndef QIMAGECAPTURE_H_C_LIB
#define QIMAGECAPTURE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QImage QImage;
typedef struct QImageCapture QImageCapture;
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QMediaMetaData QMediaMetaData;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QVideoFrame QVideoFrame;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QImageCapture* QImageCapture_new();
QImageCapture* QImageCapture_new2(QObject* parent);
libqt_string QImageCapture_Tr(const char* s);
bool QImageCapture_IsAvailable(const QImageCapture* self);
QMediaCaptureSession* QImageCapture_CaptureSession(const QImageCapture* self);
int QImageCapture_Error(const QImageCapture* self);
libqt_string QImageCapture_ErrorString(const QImageCapture* self);
bool QImageCapture_IsReadyForCapture(const QImageCapture* self);
int QImageCapture_FileFormat(const QImageCapture* self);
void QImageCapture_SetFileFormat(QImageCapture* self, int format);
libqt_list QImageCapture_SupportedFormats();
libqt_string QImageCapture_FileFormatName(int c);
libqt_string QImageCapture_FileFormatDescription(int c);
QSize* QImageCapture_Resolution(const QImageCapture* self);
void QImageCapture_SetResolution(QImageCapture* self, const QSize* resolution);
void QImageCapture_SetResolution2(QImageCapture* self, int width, int height);
int QImageCapture_Quality(const QImageCapture* self);
void QImageCapture_SetQuality(QImageCapture* self, int quality);
QMediaMetaData* QImageCapture_MetaData(const QImageCapture* self);
void QImageCapture_SetMetaData(QImageCapture* self, const QMediaMetaData* metaData);
void QImageCapture_AddMetaData(QImageCapture* self, const QMediaMetaData* metaData);
int QImageCapture_CaptureToFile(QImageCapture* self);
int QImageCapture_Capture(QImageCapture* self);
void QImageCapture_ErrorChanged(QImageCapture* self);
void QImageCapture_Connect_ErrorChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_ErrorOccurred(QImageCapture* self, int id, int errorVal, const libqt_string errorString);
void QImageCapture_Connect_ErrorOccurred(QImageCapture* self, intptr_t slot);
void QImageCapture_ReadyForCaptureChanged(QImageCapture* self, bool ready);
void QImageCapture_Connect_ReadyForCaptureChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_MetaDataChanged(QImageCapture* self);
void QImageCapture_Connect_MetaDataChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_FileFormatChanged(QImageCapture* self);
void QImageCapture_Connect_FileFormatChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_QualityChanged(QImageCapture* self);
void QImageCapture_Connect_QualityChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_ResolutionChanged(QImageCapture* self);
void QImageCapture_Connect_ResolutionChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_ImageExposed(QImageCapture* self, int id);
void QImageCapture_Connect_ImageExposed(QImageCapture* self, intptr_t slot);
void QImageCapture_ImageCaptured(QImageCapture* self, int id, const QImage* preview);
void QImageCapture_Connect_ImageCaptured(QImageCapture* self, intptr_t slot);
void QImageCapture_ImageMetadataAvailable(QImageCapture* self, int id, const QMediaMetaData* metaData);
void QImageCapture_Connect_ImageMetadataAvailable(QImageCapture* self, intptr_t slot);
void QImageCapture_ImageAvailable(QImageCapture* self, int id, const QVideoFrame* frame);
void QImageCapture_Connect_ImageAvailable(QImageCapture* self, intptr_t slot);
void QImageCapture_ImageSaved(QImageCapture* self, int id, const libqt_string fileName);
void QImageCapture_Connect_ImageSaved(QImageCapture* self, intptr_t slot);
libqt_string QImageCapture_Tr2(const char* s, const char* c);
libqt_string QImageCapture_Tr3(const char* s, const char* c, int n);
int QImageCapture_CaptureToFile1(QImageCapture* self, const libqt_string location);
void QImageCapture_Delete(QImageCapture* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
