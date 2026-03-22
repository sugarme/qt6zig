#pragma once
#ifndef QPIELEGENDMARKER_H_C_LIB
#define QPIELEGENDMARKER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QObject QObject;
typedef struct QPieLegendMarker QPieLegendMarker;
typedef struct QPieSeries QPieSeries;
typedef struct QPieSlice QPieSlice;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QPieLegendMarker* QPieLegendMarker_new(QPieSeries* series, QPieSlice* slice, QLegend* legend);
QPieLegendMarker* QPieLegendMarker_new2(QPieSeries* series, QPieSlice* slice, QLegend* legend, QObject* parent);
libqt_string QPieLegendMarker_Tr(const char* s);
int QPieLegendMarker_Type(QPieLegendMarker* self);
QPieSeries* QPieLegendMarker_Series(QPieLegendMarker* self);
QPieSlice* QPieLegendMarker_Slice(QPieLegendMarker* self);
libqt_string QPieLegendMarker_Tr2(const char* s, const char* c);
libqt_string QPieLegendMarker_Tr3(const char* s, const char* c, int n);
void QPieLegendMarker_OnType(QPieLegendMarker* self, intptr_t slot);
int QPieLegendMarker_QBaseType(QPieLegendMarker* self);
void QPieLegendMarker_OnSeries(QPieLegendMarker* self, intptr_t slot);
QPieSeries* QPieLegendMarker_QBaseSeries(QPieLegendMarker* self);
void QPieLegendMarker_Delete(QPieLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
