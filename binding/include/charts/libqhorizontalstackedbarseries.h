#pragma once
#ifndef QHORIZONTALSTACKEDBARSERIES_H_C_LIB
#define QHORIZONTALSTACKEDBARSERIES_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractBarSeries QAbstractBarSeries;
typedef struct QHorizontalStackedBarSeries QHorizontalStackedBarSeries;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QHorizontalStackedBarSeries* QHorizontalStackedBarSeries_new();
QHorizontalStackedBarSeries* QHorizontalStackedBarSeries_new2(QObject* parent);
libqt_string QHorizontalStackedBarSeries_Tr(const char* s);
int QHorizontalStackedBarSeries_Type(const QHorizontalStackedBarSeries* self);
libqt_string QHorizontalStackedBarSeries_Tr2(const char* s, const char* c);
libqt_string QHorizontalStackedBarSeries_Tr3(const char* s, const char* c, int n);
void QHorizontalStackedBarSeries_OnType(const QHorizontalStackedBarSeries* self, intptr_t slot);
int QHorizontalStackedBarSeries_QBaseType(const QHorizontalStackedBarSeries* self);
void QHorizontalStackedBarSeries_Delete(QHorizontalStackedBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
