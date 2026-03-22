#pragma once
#ifndef QIODEVICEBASE_H_C_LIB
#define QIODEVICEBASE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QIODeviceBase QIODeviceBase;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QIODeviceBase* QIODeviceBase_new(const QIODeviceBase* other);
void QIODeviceBase_CopyAssign(QIODeviceBase* self, QIODeviceBase* other);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
