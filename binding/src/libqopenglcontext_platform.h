#pragma once
#ifndef QOPENGLCONTEXT_PLATFORM_H_C_LIB
#define QOPENGLCONTEXT_PLATFORM_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QNativeInterface__QWGLContext)
typedef QNativeInterface::QWGLContext QNativeInterface__QWGLContext;
#endif
#else
typedef struct QNativeInterface__QWGLContext QNativeInterface__QWGLContext;
typedef struct QOpenGLContext QOpenGLContext;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QNativeInterface__QWGLContext* QNativeInterface__QWGLContext_new();
struct HINSTANCE__* QNativeInterface__QWGLContext_OpenGLModuleHandle();
QOpenGLContext* QNativeInterface__QWGLContext_FromNative(struct HGLRC__* context, struct HWND__* window);
struct HGLRC__* QNativeInterface__QWGLContext_NativeContext(const QNativeInterface__QWGLContext* self);
struct HGLRC__* QNativeInterface__QWGLContext_Connect_NativeContext(QNativeInterface__QWGLContext* self, intptr_t slot);
QOpenGLContext* QNativeInterface__QWGLContext_FromNative3(struct HGLRC__* context, struct HWND__* window, QOpenGLContext* shareContext);
void QNativeInterface__QWGLContext_OnNativeContext(const QNativeInterface__QWGLContext* self, intptr_t slot);
struct HGLRC__* QNativeInterface__QWGLContext_QBaseNativeContext(const QNativeInterface__QWGLContext* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
