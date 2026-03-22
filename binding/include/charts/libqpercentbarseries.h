#pragma once
#ifndef QPERCENTBARSERIES_H_C_LIB
#define QPERCENTBARSERIES_H_C_LIB

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
typedef struct QPercentBarSeries QPercentBarSeries;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QPercentBarSeries* QPercentBarSeries_new();
QPercentBarSeries* QPercentBarSeries_new2(QObject* parent);
libqt_string QPercentBarSeries_Tr(const char* s);
int QPercentBarSeries_Type(const QPercentBarSeries* self);
libqt_string QPercentBarSeries_Tr2(const char* s, const char* c);
libqt_string QPercentBarSeries_Tr3(const char* s, const char* c, int n);
void QPercentBarSeries_OnType(const QPercentBarSeries* self, intptr_t slot);
int QPercentBarSeries_QBaseType(const QPercentBarSeries* self);
void QPercentBarSeries_Delete(QPercentBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
