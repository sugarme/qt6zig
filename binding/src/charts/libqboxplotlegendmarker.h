#pragma once
#ifndef QBOXPLOTLEGENDMARKER_H_C_LIB
#define QBOXPLOTLEGENDMARKER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBoxPlotLegendMarker QBoxPlotLegendMarker;
typedef struct QBoxPlotSeries QBoxPlotSeries;
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QBoxPlotLegendMarker* QBoxPlotLegendMarker_new(QBoxPlotSeries* series, QLegend* legend);
QBoxPlotLegendMarker* QBoxPlotLegendMarker_new2(QBoxPlotSeries* series, QLegend* legend, QObject* parent);
libqt_string QBoxPlotLegendMarker_Tr(const char* s);
int QBoxPlotLegendMarker_Type(QBoxPlotLegendMarker* self);
QBoxPlotSeries* QBoxPlotLegendMarker_Series(QBoxPlotLegendMarker* self);
libqt_string QBoxPlotLegendMarker_Tr2(const char* s, const char* c);
libqt_string QBoxPlotLegendMarker_Tr3(const char* s, const char* c, int n);
void QBoxPlotLegendMarker_OnType(QBoxPlotLegendMarker* self, intptr_t slot);
int QBoxPlotLegendMarker_QBaseType(QBoxPlotLegendMarker* self);
void QBoxPlotLegendMarker_OnSeries(QBoxPlotLegendMarker* self, intptr_t slot);
QBoxPlotSeries* QBoxPlotLegendMarker_QBaseSeries(QBoxPlotLegendMarker* self);
void QBoxPlotLegendMarker_Delete(QBoxPlotLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
