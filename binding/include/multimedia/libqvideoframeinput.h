#pragma once
#ifndef QVIDEOFRAMEINPUT_H_C_LIB
#define QVIDEOFRAMEINPUT_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QObject QObject;
typedef struct QVideoFrame QVideoFrame;
typedef struct QVideoFrameFormat QVideoFrameFormat;
typedef struct QVideoFrameInput QVideoFrameInput;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QVideoFrameInput* QVideoFrameInput_new();
QVideoFrameInput* QVideoFrameInput_new2(const QVideoFrameFormat* format);
QVideoFrameInput* QVideoFrameInput_new3(QObject* parent);
QVideoFrameInput* QVideoFrameInput_new4(const QVideoFrameFormat* format, QObject* parent);
libqt_string QVideoFrameInput_Tr(const char* s);
bool QVideoFrameInput_SendVideoFrame(QVideoFrameInput* self, const QVideoFrame* frame);
QVideoFrameFormat* QVideoFrameInput_Format(const QVideoFrameInput* self);
QMediaCaptureSession* QVideoFrameInput_CaptureSession(const QVideoFrameInput* self);
void QVideoFrameInput_ReadyToSendVideoFrame(QVideoFrameInput* self);
void QVideoFrameInput_Connect_ReadyToSendVideoFrame(QVideoFrameInput* self, intptr_t slot);
libqt_string QVideoFrameInput_Tr2(const char* s, const char* c);
libqt_string QVideoFrameInput_Tr3(const char* s, const char* c, int n);
void QVideoFrameInput_Delete(QVideoFrameInput* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
