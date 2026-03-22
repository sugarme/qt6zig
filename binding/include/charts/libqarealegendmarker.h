#pragma once
#ifndef QAREALEGENDMARKER_H_C_LIB
#define QAREALEGENDMARKER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAreaLegendMarker QAreaLegendMarker;
typedef struct QAreaSeries QAreaSeries;
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAreaLegendMarker* QAreaLegendMarker_new(QAreaSeries* series, QLegend* legend);
QAreaLegendMarker* QAreaLegendMarker_new2(QAreaSeries* series, QLegend* legend, QObject* parent);
libqt_string QAreaLegendMarker_Tr(const char* s);
int QAreaLegendMarker_Type(QAreaLegendMarker* self);
QAreaSeries* QAreaLegendMarker_Series(QAreaLegendMarker* self);
libqt_string QAreaLegendMarker_Tr2(const char* s, const char* c);
libqt_string QAreaLegendMarker_Tr3(const char* s, const char* c, int n);
void QAreaLegendMarker_OnType(QAreaLegendMarker* self, intptr_t slot);
int QAreaLegendMarker_QBaseType(QAreaLegendMarker* self);
void QAreaLegendMarker_OnSeries(QAreaLegendMarker* self, intptr_t slot);
QAreaSeries* QAreaLegendMarker_QBaseSeries(QAreaLegendMarker* self);
void QAreaLegendMarker_Delete(QAreaLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
