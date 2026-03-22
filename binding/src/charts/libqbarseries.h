#pragma once
#ifndef QBARSERIES_H_C_LIB
#define QBARSERIES_H_C_LIB

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
typedef struct QBarSeries QBarSeries;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QBarSeries* QBarSeries_new();
QBarSeries* QBarSeries_new2(QObject* parent);
libqt_string QBarSeries_Tr(const char* s);
int QBarSeries_Type(const QBarSeries* self);
libqt_string QBarSeries_Tr2(const char* s, const char* c);
libqt_string QBarSeries_Tr3(const char* s, const char* c, int n);
void QBarSeries_OnType(const QBarSeries* self, intptr_t slot);
int QBarSeries_QBaseType(const QBarSeries* self);
void QBarSeries_Delete(QBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
