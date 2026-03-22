#pragma once
#ifndef QSCREENCAPTURE_H_C_LIB
#define QSCREENCAPTURE_H_C_LIB

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
typedef struct QScreen QScreen;
typedef struct QScreenCapture QScreenCapture;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QScreenCapture* QScreenCapture_new();
QScreenCapture* QScreenCapture_new2(QObject* parent);
libqt_string QScreenCapture_Tr(const char* s);
QMediaCaptureSession* QScreenCapture_CaptureSession(const QScreenCapture* self);
void QScreenCapture_SetScreen(QScreenCapture* self, QScreen* screen);
QScreen* QScreenCapture_Screen(const QScreenCapture* self);
bool QScreenCapture_IsActive(const QScreenCapture* self);
int QScreenCapture_Error(const QScreenCapture* self);
libqt_string QScreenCapture_ErrorString(const QScreenCapture* self);
void QScreenCapture_SetActive(QScreenCapture* self, bool active);
void QScreenCapture_Start(QScreenCapture* self);
void QScreenCapture_Stop(QScreenCapture* self);
void QScreenCapture_ActiveChanged(QScreenCapture* self, bool param1);
void QScreenCapture_Connect_ActiveChanged(QScreenCapture* self, intptr_t slot);
void QScreenCapture_ErrorChanged(QScreenCapture* self);
void QScreenCapture_Connect_ErrorChanged(QScreenCapture* self, intptr_t slot);
void QScreenCapture_ScreenChanged(QScreenCapture* self, QScreen* param1);
void QScreenCapture_Connect_ScreenChanged(QScreenCapture* self, intptr_t slot);
void QScreenCapture_ErrorOccurred(QScreenCapture* self, int errorVal, const libqt_string errorString);
void QScreenCapture_Connect_ErrorOccurred(QScreenCapture* self, intptr_t slot);
libqt_string QScreenCapture_Tr2(const char* s, const char* c);
libqt_string QScreenCapture_Tr3(const char* s, const char* c, int n);
void QScreenCapture_Delete(QScreenCapture* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
