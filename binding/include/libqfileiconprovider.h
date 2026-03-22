#pragma once
#ifndef QFILEICONPROVIDER_H_C_LIB
#define QFILEICONPROVIDER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractFileIconProvider QAbstractFileIconProvider;
typedef struct QFileIconProvider QFileIconProvider;
typedef struct QFileInfo QFileInfo;
typedef struct QIcon QIcon;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QFileIconProvider* QFileIconProvider_new();
QIcon* QFileIconProvider_Icon(const QFileIconProvider* self, int typeVal);
QIcon* QFileIconProvider_Icon2(const QFileIconProvider* self, const QFileInfo* info);
void QFileIconProvider_OnIcon(const QFileIconProvider* self, intptr_t slot);
QIcon* QFileIconProvider_QBaseIcon(const QFileIconProvider* self, int typeVal);
void QFileIconProvider_OnIcon2(const QFileIconProvider* self, intptr_t slot);
QIcon* QFileIconProvider_QBaseIcon2(const QFileIconProvider* self, const QFileInfo* info);
void QFileIconProvider_Delete(QFileIconProvider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
