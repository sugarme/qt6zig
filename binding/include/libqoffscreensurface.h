#pragma once
#ifndef QOFFSCREENSURFACE_H_C_LIB
#define QOFFSCREENSURFACE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QObject QObject;
typedef struct QOffscreenSurface QOffscreenSurface;
typedef struct QScreen QScreen;
typedef struct QSize QSize;
typedef struct QSurface QSurface;
typedef struct QSurfaceFormat QSurfaceFormat;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QOffscreenSurface* QOffscreenSurface_new();
QOffscreenSurface* QOffscreenSurface_new2(QScreen* screen);
QOffscreenSurface* QOffscreenSurface_new3(QScreen* screen, QObject* parent);
libqt_string QOffscreenSurface_Tr(const char* s);
int QOffscreenSurface_SurfaceType(const QOffscreenSurface* self);
void QOffscreenSurface_Create(QOffscreenSurface* self);
void QOffscreenSurface_Destroy(QOffscreenSurface* self);
bool QOffscreenSurface_IsValid(const QOffscreenSurface* self);
void QOffscreenSurface_SetFormat(QOffscreenSurface* self, const QSurfaceFormat* format);
QSurfaceFormat* QOffscreenSurface_Format(const QOffscreenSurface* self);
QSurfaceFormat* QOffscreenSurface_RequestedFormat(const QOffscreenSurface* self);
QSize* QOffscreenSurface_Size(const QOffscreenSurface* self);
QScreen* QOffscreenSurface_Screen(const QOffscreenSurface* self);
void QOffscreenSurface_SetScreen(QOffscreenSurface* self, QScreen* screen);
void QOffscreenSurface_ScreenChanged(QOffscreenSurface* self, QScreen* screen);
void QOffscreenSurface_Connect_ScreenChanged(QOffscreenSurface* self, intptr_t slot);
libqt_string QOffscreenSurface_Tr2(const char* s, const char* c);
libqt_string QOffscreenSurface_Tr3(const char* s, const char* c, int n);
void QOffscreenSurface_OnSurfaceType(const QOffscreenSurface* self, intptr_t slot);
int QOffscreenSurface_QBaseSurfaceType(const QOffscreenSurface* self);
void QOffscreenSurface_OnFormat(const QOffscreenSurface* self, intptr_t slot);
QSurfaceFormat* QOffscreenSurface_QBaseFormat(const QOffscreenSurface* self);
void QOffscreenSurface_OnSize(const QOffscreenSurface* self, intptr_t slot);
QSize* QOffscreenSurface_QBaseSize(const QOffscreenSurface* self);
void* QOffscreenSurface_ResolveInterface(const QOffscreenSurface* self, const char* name, int revision);
void QOffscreenSurface_OnResolveInterface(const QOffscreenSurface* self, intptr_t slot);
void* QOffscreenSurface_QBaseResolveInterface(const QOffscreenSurface* self, const char* name, int revision);
void QOffscreenSurface_Delete(QOffscreenSurface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
