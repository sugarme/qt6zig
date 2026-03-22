#pragma once
#ifndef QWINDOWCAPTURE_H_C_LIB
#define QWINDOWCAPTURE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCapturableWindow QCapturableWindow;
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QObject QObject;
typedef struct QWindowCapture QWindowCapture;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QWindowCapture* QWindowCapture_new();
QWindowCapture* QWindowCapture_new2(QObject* parent);
libqt_string QWindowCapture_Tr(const char* s);
libqt_list QWindowCapture_CapturableWindows();
QMediaCaptureSession* QWindowCapture_CaptureSession(const QWindowCapture* self);
void QWindowCapture_SetWindow(QWindowCapture* self, QCapturableWindow* window);
QCapturableWindow* QWindowCapture_Window(const QWindowCapture* self);
bool QWindowCapture_IsActive(const QWindowCapture* self);
int QWindowCapture_Error(const QWindowCapture* self);
libqt_string QWindowCapture_ErrorString(const QWindowCapture* self);
void QWindowCapture_SetActive(QWindowCapture* self, bool active);
void QWindowCapture_Start(QWindowCapture* self);
void QWindowCapture_Stop(QWindowCapture* self);
void QWindowCapture_ActiveChanged(QWindowCapture* self, bool param1);
void QWindowCapture_Connect_ActiveChanged(QWindowCapture* self, intptr_t slot);
void QWindowCapture_WindowChanged(QWindowCapture* self, QCapturableWindow* window);
void QWindowCapture_Connect_WindowChanged(QWindowCapture* self, intptr_t slot);
void QWindowCapture_ErrorChanged(QWindowCapture* self);
void QWindowCapture_Connect_ErrorChanged(QWindowCapture* self, intptr_t slot);
void QWindowCapture_ErrorOccurred(QWindowCapture* self, int errorVal, const libqt_string errorString);
void QWindowCapture_Connect_ErrorOccurred(QWindowCapture* self, intptr_t slot);
libqt_string QWindowCapture_Tr2(const char* s, const char* c);
libqt_string QWindowCapture_Tr3(const char* s, const char* c, int n);
void QWindowCapture_Delete(QWindowCapture* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
