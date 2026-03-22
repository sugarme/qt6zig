#pragma once
#ifndef QSTACKEDBARSERIES_H_C_LIB
#define QSTACKEDBARSERIES_H_C_LIB

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
typedef struct QObject QObject;
typedef struct QStackedBarSeries QStackedBarSeries;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QStackedBarSeries* QStackedBarSeries_new();
QStackedBarSeries* QStackedBarSeries_new2(QObject* parent);
libqt_string QStackedBarSeries_Tr(const char* s);
int QStackedBarSeries_Type(const QStackedBarSeries* self);
libqt_string QStackedBarSeries_Tr2(const char* s, const char* c);
libqt_string QStackedBarSeries_Tr3(const char* s, const char* c, int n);
void QStackedBarSeries_OnType(const QStackedBarSeries* self, intptr_t slot);
int QStackedBarSeries_QBaseType(const QStackedBarSeries* self);
void QStackedBarSeries_Delete(QStackedBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
