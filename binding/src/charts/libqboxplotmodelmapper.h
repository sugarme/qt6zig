#pragma once
#ifndef QBOXPLOTMODELMAPPER_H_C_LIB
#define QBOXPLOTMODELMAPPER_H_C_LIB

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
typedef struct QBoxPlotModelMapper QBoxPlotModelMapper;
typedef struct QBoxPlotSeries QBoxPlotSeries;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



libqt_string QBoxPlotModelMapper_Tr(const char* s);
libqt_string QBoxPlotModelMapper_Tr2(const char* s, const char* c);
libqt_string QBoxPlotModelMapper_Tr3(const char* s, const char* c, int n);
void QBoxPlotModelMapper_Delete(QBoxPlotModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
