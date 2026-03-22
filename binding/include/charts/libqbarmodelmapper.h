#pragma once
#ifndef QBARMODELMAPPER_H_C_LIB
#define QBARMODELMAPPER_H_C_LIB

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
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QBarModelMapper QBarModelMapper;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



libqt_string QBarModelMapper_Tr(const char* s);
libqt_string QBarModelMapper_Tr2(const char* s, const char* c);
libqt_string QBarModelMapper_Tr3(const char* s, const char* c, int n);
void QBarModelMapper_Delete(QBarModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
