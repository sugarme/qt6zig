#pragma once
#ifndef QSURFACE_H_C_LIB
#define QSURFACE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QSize QSize;
typedef struct QSurface QSurface;
typedef struct QSurfaceFormat QSurfaceFormat;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSurface* QSurface_new(const QSurface* param1);
int QSurface_SurfaceClass(const QSurface* self);
QSurfaceFormat* QSurface_Format(const QSurface* self);
int QSurface_SurfaceType(const QSurface* self);
bool QSurface_SupportsOpenGL(const QSurface* self);
QSize* QSurface_Size(const QSurface* self);
void QSurface_OnFormat(const QSurface* self, intptr_t slot);
QSurfaceFormat* QSurface_QBaseFormat(const QSurface* self);
void QSurface_OnSurfaceType(const QSurface* self, intptr_t slot);
int QSurface_QBaseSurfaceType(const QSurface* self);
void QSurface_OnSize(const QSurface* self, intptr_t slot);
QSize* QSurface_QBaseSize(const QSurface* self);
void QSurface_OperatorAssign(QSurface* self, const QSurface* param1);
void QSurface_OnOperatorAssign(QSurface* self, intptr_t slot);
void QSurface_QBaseOperatorAssign(QSurface* self, const QSurface* param1);
void QSurface_Delete(QSurface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
