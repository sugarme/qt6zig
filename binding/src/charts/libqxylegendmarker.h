#pragma once
#ifndef QXYLEGENDMARKER_H_C_LIB
#define QXYLEGENDMARKER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QObject QObject;
typedef struct QXYLegendMarker QXYLegendMarker;
typedef struct QXYSeries QXYSeries;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QXYLegendMarker* QXYLegendMarker_new(QXYSeries* series, QLegend* legend);
QXYLegendMarker* QXYLegendMarker_new2(QXYSeries* series, QLegend* legend, QObject* parent);
libqt_string QXYLegendMarker_Tr(const char* s);
int QXYLegendMarker_Type(QXYLegendMarker* self);
QXYSeries* QXYLegendMarker_Series(QXYLegendMarker* self);
libqt_string QXYLegendMarker_Tr2(const char* s, const char* c);
libqt_string QXYLegendMarker_Tr3(const char* s, const char* c, int n);
void QXYLegendMarker_OnType(QXYLegendMarker* self, intptr_t slot);
int QXYLegendMarker_QBaseType(QXYLegendMarker* self);
void QXYLegendMarker_OnSeries(QXYLegendMarker* self, intptr_t slot);
QXYSeries* QXYLegendMarker_QBaseSeries(QXYLegendMarker* self);
void QXYLegendMarker_Delete(QXYLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
