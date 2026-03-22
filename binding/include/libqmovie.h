#pragma once
#ifndef QMOVIE_H_C_LIB
#define QMOVIE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QColor QColor;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QMovie QMovie;
typedef struct QObject QObject;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif









QMovie* QMovie_new();
QMovie* QMovie_new2(QIODevice* device);
QMovie* QMovie_new3(const libqt_string fileName);
QMovie* QMovie_new4(QObject* parent);
QMovie* QMovie_new5(QIODevice* device, const libqt_string format);
QMovie* QMovie_new6(QIODevice* device, const libqt_string format, QObject* parent);
QMovie* QMovie_new7(const libqt_string fileName, const libqt_string format);
QMovie* QMovie_new8(const libqt_string fileName, const libqt_string format, QObject* parent);
libqt_string QMovie_Tr(const char* s);
libqt_list QMovie_SupportedFormats();
void QMovie_SetDevice(QMovie* self, QIODevice* device);
QIODevice* QMovie_Device(const QMovie* self);
void QMovie_SetFileName(QMovie* self, const libqt_string fileName);
libqt_string QMovie_FileName(const QMovie* self);
void QMovie_SetFormat(QMovie* self, const libqt_string format);
libqt_string QMovie_Format(const QMovie* self);
void QMovie_SetBackgroundColor(QMovie* self, const QColor* color);
QColor* QMovie_BackgroundColor(const QMovie* self);
int QMovie_State(const QMovie* self);
QRect* QMovie_FrameRect(const QMovie* self);
QImage* QMovie_CurrentImage(const QMovie* self);
QPixmap* QMovie_CurrentPixmap(const QMovie* self);
bool QMovie_IsValid(const QMovie* self);
int QMovie_LastError(const QMovie* self);
libqt_string QMovie_LastErrorString(const QMovie* self);
bool QMovie_JumpToFrame(QMovie* self, int frameNumber);
int QMovie_LoopCount(const QMovie* self);
int QMovie_FrameCount(const QMovie* self);
int QMovie_NextFrameDelay(const QMovie* self);
int QMovie_CurrentFrameNumber(const QMovie* self);
int QMovie_Speed(const QMovie* self);
QSize* QMovie_ScaledSize(QMovie* self);
void QMovie_SetScaledSize(QMovie* self, const QSize* size);
int QMovie_CacheMode(const QMovie* self);
void QMovie_SetCacheMode(QMovie* self, int mode);
void QMovie_Started(QMovie* self);
void QMovie_Connect_Started(QMovie* self, intptr_t slot);
void QMovie_Resized(QMovie* self, const QSize* size);
void QMovie_Connect_Resized(QMovie* self, intptr_t slot);
void QMovie_Updated(QMovie* self, const QRect* rect);
void QMovie_Connect_Updated(QMovie* self, intptr_t slot);
void QMovie_StateChanged(QMovie* self, int state);
void QMovie_Connect_StateChanged(QMovie* self, intptr_t slot);
void QMovie_Error(QMovie* self, int errorVal);
void QMovie_Connect_Error(QMovie* self, intptr_t slot);
void QMovie_Finished(QMovie* self);
void QMovie_Connect_Finished(QMovie* self, intptr_t slot);
void QMovie_FrameChanged(QMovie* self, int frameNumber);
void QMovie_Connect_FrameChanged(QMovie* self, intptr_t slot);
void QMovie_Start(QMovie* self);
bool QMovie_JumpToNextFrame(QMovie* self);
void QMovie_SetPaused(QMovie* self, bool paused);
void QMovie_Stop(QMovie* self);
void QMovie_SetSpeed(QMovie* self, int percentSpeed);
libqt_string QMovie_Tr2(const char* s, const char* c);
libqt_string QMovie_Tr3(const char* s, const char* c, int n);
void QMovie_Delete(QMovie* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
