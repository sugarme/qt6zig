#pragma once
#ifndef QABSTRACTNATIVEEVENTFILTER_H_C_LIB
#define QABSTRACTNATIVEEVENTFILTER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractNativeEventFilter QAbstractNativeEventFilter;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAbstractNativeEventFilter* QAbstractNativeEventFilter_new();
bool QAbstractNativeEventFilter_NativeEventFilter(QAbstractNativeEventFilter* self, const libqt_string eventType, void* message, intptr_t* result);
void QAbstractNativeEventFilter_OnNativeEventFilter(QAbstractNativeEventFilter* self, intptr_t slot);
bool QAbstractNativeEventFilter_QBaseNativeEventFilter(QAbstractNativeEventFilter* self, const libqt_string eventType, void* message, intptr_t* result);
void QAbstractNativeEventFilter_Delete(QAbstractNativeEventFilter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
