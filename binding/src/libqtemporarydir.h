#pragma once
#ifndef QTEMPORARYDIR_H_C_LIB
#define QTEMPORARYDIR_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QTemporaryDir QTemporaryDir;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QTemporaryDir* QTemporaryDir_new();
QTemporaryDir* QTemporaryDir_new2(const libqt_string templateName);
void QTemporaryDir_Swap(QTemporaryDir* self, QTemporaryDir* other);
bool QTemporaryDir_IsValid(const QTemporaryDir* self);
libqt_string QTemporaryDir_ErrorString(const QTemporaryDir* self);
bool QTemporaryDir_AutoRemove(const QTemporaryDir* self);
void QTemporaryDir_SetAutoRemove(QTemporaryDir* self, bool b);
bool QTemporaryDir_Remove(QTemporaryDir* self);
libqt_string QTemporaryDir_Path(const QTemporaryDir* self);
libqt_string QTemporaryDir_FilePath(const QTemporaryDir* self, const libqt_string fileName);
void QTemporaryDir_Delete(QTemporaryDir* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
