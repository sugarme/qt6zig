#pragma once
#ifndef QVIDEOSINK_H_C_LIB
#define QVIDEOSINK_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QVideoFrame QVideoFrame;
typedef struct QVideoSink QVideoSink;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QVideoSink* QVideoSink_new();
QVideoSink* QVideoSink_new2(QObject* parent);
libqt_string QVideoSink_Tr(const char* s);
QSize* QVideoSink_VideoSize(const QVideoSink* self);
libqt_string QVideoSink_SubtitleText(const QVideoSink* self);
void QVideoSink_SetSubtitleText(QVideoSink* self, const libqt_string subtitle);
void QVideoSink_SetVideoFrame(QVideoSink* self, const QVideoFrame* frame);
QVideoFrame* QVideoSink_VideoFrame(const QVideoSink* self);
void QVideoSink_VideoFrameChanged(const QVideoSink* self, const QVideoFrame* frame);
void QVideoSink_Connect_VideoFrameChanged(QVideoSink* self, intptr_t slot);
void QVideoSink_SubtitleTextChanged(const QVideoSink* self, const libqt_string subtitleText);
void QVideoSink_Connect_SubtitleTextChanged(QVideoSink* self, intptr_t slot);
void QVideoSink_VideoSizeChanged(QVideoSink* self);
void QVideoSink_Connect_VideoSizeChanged(QVideoSink* self, intptr_t slot);
libqt_string QVideoSink_Tr2(const char* s, const char* c);
libqt_string QVideoSink_Tr3(const char* s, const char* c, int n);
void QVideoSink_Delete(QVideoSink* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
