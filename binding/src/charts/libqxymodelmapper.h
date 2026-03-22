#pragma once
#ifndef QXYMODELMAPPER_H_C_LIB
#define QXYMODELMAPPER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QObject QObject;
typedef struct QXYModelMapper QXYModelMapper;
typedef struct QXYSeries QXYSeries;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



libqt_string QXYModelMapper_Tr(const char* s);
libqt_string QXYModelMapper_Tr2(const char* s, const char* c);
libqt_string QXYModelMapper_Tr3(const char* s, const char* c, int n);
void QXYModelMapper_Delete(QXYModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
