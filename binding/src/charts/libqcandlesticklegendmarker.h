#pragma once
#ifndef QCANDLESTICKLEGENDMARKER_H_C_LIB
#define QCANDLESTICKLEGENDMARKER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCandlestickLegendMarker QCandlestickLegendMarker;
typedef struct QCandlestickSeries QCandlestickSeries;
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QCandlestickLegendMarker* QCandlestickLegendMarker_new(QCandlestickSeries* series, QLegend* legend);
QCandlestickLegendMarker* QCandlestickLegendMarker_new2(QCandlestickSeries* series, QLegend* legend, QObject* parent);
libqt_string QCandlestickLegendMarker_Tr(const char* s);
int QCandlestickLegendMarker_Type(QCandlestickLegendMarker* self);
QCandlestickSeries* QCandlestickLegendMarker_Series(QCandlestickLegendMarker* self);
libqt_string QCandlestickLegendMarker_Tr2(const char* s, const char* c);
libqt_string QCandlestickLegendMarker_Tr3(const char* s, const char* c, int n);
void QCandlestickLegendMarker_OnType(QCandlestickLegendMarker* self, intptr_t slot);
int QCandlestickLegendMarker_QBaseType(QCandlestickLegendMarker* self);
void QCandlestickLegendMarker_OnSeries(QCandlestickLegendMarker* self, intptr_t slot);
QCandlestickSeries* QCandlestickLegendMarker_QBaseSeries(QCandlestickLegendMarker* self);
void QCandlestickLegendMarker_Delete(QCandlestickLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
