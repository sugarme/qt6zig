#pragma once
#ifndef QBACKINGSTORE_H_C_LIB
#define QBACKINGSTORE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBackingStore QBackingStore;
typedef struct QImage QImage;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QSize QSize;
typedef struct QWindow QWindow;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif






QBackingStore* QBackingStore_new(QWindow* window);
QWindow* QBackingStore_Window(const QBackingStore* self);
QPaintDevice* QBackingStore_PaintDevice(QBackingStore* self);
void QBackingStore_Flush(QBackingStore* self, const QRegion* region);
void QBackingStore_Resize(QBackingStore* self, const QSize* size);
QSize* QBackingStore_Size(const QBackingStore* self);
bool QBackingStore_Scroll(QBackingStore* self, const QRegion* area, int dx, int dy);
void QBackingStore_BeginPaint(QBackingStore* self, const QRegion* param1);
void QBackingStore_EndPaint(QBackingStore* self);
void QBackingStore_SetStaticContents(QBackingStore* self, const QRegion* region);
QRegion* QBackingStore_StaticContents(const QBackingStore* self);
bool QBackingStore_HasStaticContents(const QBackingStore* self);
void QBackingStore_Flush2(QBackingStore* self, const QRegion* region, QWindow* window);
void QBackingStore_Flush3(QBackingStore* self, const QRegion* region, QWindow* window, const QPoint* offset);
void QBackingStore_Delete(QBackingStore* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
