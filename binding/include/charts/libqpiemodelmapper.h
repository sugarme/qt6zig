#pragma once
#ifndef QPIEMODELMAPPER_H_C_LIB
#define QPIEMODELMAPPER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QObject QObject;
typedef struct QPieModelMapper QPieModelMapper;
typedef struct QPieSeries QPieSeries;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



libqt_string QPieModelMapper_Tr(const char* s);
libqt_string QPieModelMapper_Tr2(const char* s, const char* c);
libqt_string QPieModelMapper_Tr3(const char* s, const char* c, int n);
void QPieModelMapper_Delete(QPieModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
