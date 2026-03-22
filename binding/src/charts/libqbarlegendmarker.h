#pragma once
#ifndef QBARLEGENDMARKER_H_C_LIB
#define QBARLEGENDMARKER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractBarSeries QAbstractBarSeries;
typedef struct QBarLegendMarker QBarLegendMarker;
typedef struct QBarSet QBarSet;
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QBarLegendMarker* QBarLegendMarker_new(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend);
QBarLegendMarker* QBarLegendMarker_new2(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend, QObject* parent);
libqt_string QBarLegendMarker_Tr(const char* s);
int QBarLegendMarker_Type(QBarLegendMarker* self);
QAbstractBarSeries* QBarLegendMarker_Series(QBarLegendMarker* self);
QBarSet* QBarLegendMarker_Barset(QBarLegendMarker* self);
libqt_string QBarLegendMarker_Tr2(const char* s, const char* c);
libqt_string QBarLegendMarker_Tr3(const char* s, const char* c, int n);
void QBarLegendMarker_OnType(QBarLegendMarker* self, intptr_t slot);
int QBarLegendMarker_QBaseType(QBarLegendMarker* self);
void QBarLegendMarker_OnSeries(QBarLegendMarker* self, intptr_t slot);
QAbstractBarSeries* QBarLegendMarker_QBaseSeries(QBarLegendMarker* self);
void QBarLegendMarker_Delete(QBarLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
