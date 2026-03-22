#pragma once
#ifndef QHORIZONTALPERCENTBARSERIES_H_C_LIB
#define QHORIZONTALPERCENTBARSERIES_H_C_LIB

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
typedef struct QHorizontalPercentBarSeries QHorizontalPercentBarSeries;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QHorizontalPercentBarSeries* QHorizontalPercentBarSeries_new();
QHorizontalPercentBarSeries* QHorizontalPercentBarSeries_new2(QObject* parent);
libqt_string QHorizontalPercentBarSeries_Tr(const char* s);
int QHorizontalPercentBarSeries_Type(const QHorizontalPercentBarSeries* self);
libqt_string QHorizontalPercentBarSeries_Tr2(const char* s, const char* c);
libqt_string QHorizontalPercentBarSeries_Tr3(const char* s, const char* c, int n);
void QHorizontalPercentBarSeries_OnType(const QHorizontalPercentBarSeries* self, intptr_t slot);
int QHorizontalPercentBarSeries_QBaseType(const QHorizontalPercentBarSeries* self);
void QHorizontalPercentBarSeries_Delete(QHorizontalPercentBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
