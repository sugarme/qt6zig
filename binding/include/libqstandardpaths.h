#pragma once
#ifndef QSTANDARDPATHS_H_C_LIB
#define QSTANDARDPATHS_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QStandardPaths QStandardPaths;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QStandardPaths* QStandardPaths_new(const QStandardPaths* other);
QStandardPaths* QStandardPaths_new2(const QStandardPaths* param1);
void QStandardPaths_CopyAssign(QStandardPaths* self, QStandardPaths* other);
libqt_string QStandardPaths_WritableLocation(int typeVal);
libqt_list QStandardPaths_StandardLocations(int typeVal);
libqt_string QStandardPaths_Locate(int typeVal, const libqt_string fileName);
libqt_list QStandardPaths_LocateAll(int typeVal, const libqt_string fileName);
libqt_string QStandardPaths_DisplayName(int typeVal);
libqt_string QStandardPaths_FindExecutable(const libqt_string executableName);
void QStandardPaths_SetTestModeEnabled(bool testMode);
bool QStandardPaths_IsTestModeEnabled();
libqt_string QStandardPaths_Locate3(int typeVal, const libqt_string fileName, int options);
libqt_list QStandardPaths_LocateAll3(int typeVal, const libqt_string fileName, int options);
libqt_string QStandardPaths_FindExecutable2(const libqt_string executableName, const libqt_list paths);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
