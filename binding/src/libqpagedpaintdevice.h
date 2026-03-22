#pragma once
#ifndef QPAGEDPAINTDEVICE_H_C_LIB
#define QPAGEDPAINTDEVICE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMarginsF QMarginsF;
typedef struct QPageLayout QPageLayout;
typedef struct QPageRanges QPageRanges;
typedef struct QPageSize QPageSize;
typedef struct QPagedPaintDevice QPagedPaintDevice;
typedef struct QPaintDevice QPaintDevice;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



bool QPagedPaintDevice_NewPage(QPagedPaintDevice* self);
bool QPagedPaintDevice_SetPageLayout(QPagedPaintDevice* self, const QPageLayout* pageLayout);
bool QPagedPaintDevice_SetPageSize(QPagedPaintDevice* self, const QPageSize* pageSize);
bool QPagedPaintDevice_SetPageOrientation(QPagedPaintDevice* self, int orientation);
bool QPagedPaintDevice_SetPageMargins(QPagedPaintDevice* self, const QMarginsF* margins, int units);
QPageLayout* QPagedPaintDevice_PageLayout(const QPagedPaintDevice* self);
void QPagedPaintDevice_SetPageRanges(QPagedPaintDevice* self, const QPageRanges* ranges);
QPageRanges* QPagedPaintDevice_PageRanges(const QPagedPaintDevice* self);
void QPagedPaintDevice_OnNewPage(QPagedPaintDevice* self, intptr_t slot);
bool QPagedPaintDevice_QBaseNewPage(QPagedPaintDevice* self);
void QPagedPaintDevice_OnSetPageLayout(QPagedPaintDevice* self, intptr_t slot);
bool QPagedPaintDevice_QBaseSetPageLayout(QPagedPaintDevice* self, const QPageLayout* pageLayout);
void QPagedPaintDevice_OnSetPageSize(QPagedPaintDevice* self, intptr_t slot);
bool QPagedPaintDevice_QBaseSetPageSize(QPagedPaintDevice* self, const QPageSize* pageSize);
void QPagedPaintDevice_OnSetPageOrientation(QPagedPaintDevice* self, intptr_t slot);
bool QPagedPaintDevice_QBaseSetPageOrientation(QPagedPaintDevice* self, int orientation);
void QPagedPaintDevice_OnSetPageMargins(QPagedPaintDevice* self, intptr_t slot);
bool QPagedPaintDevice_QBaseSetPageMargins(QPagedPaintDevice* self, const QMarginsF* margins, int units);
void QPagedPaintDevice_OnSetPageRanges(QPagedPaintDevice* self, intptr_t slot);
void QPagedPaintDevice_QBaseSetPageRanges(QPagedPaintDevice* self, const QPageRanges* ranges);
QPagedPaintDevicePrivate* QPagedPaintDevice_Dd(QPagedPaintDevice* self);
void QPagedPaintDevice_OnDd(QPagedPaintDevice* self, intptr_t slot);
QPagedPaintDevicePrivate* QPagedPaintDevice_QBaseDd(QPagedPaintDevice* self);
void QPagedPaintDevice_Delete(QPagedPaintDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
