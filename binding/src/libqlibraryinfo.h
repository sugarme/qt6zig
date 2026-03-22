#pragma once
#ifndef QLIBRARYINFO_H_C_LIB
#define QLIBRARYINFO_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QLibraryInfo QLibraryInfo;
typedef struct QVersionNumber QVersionNumber;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QLibraryInfo* QLibraryInfo_new(const QLibraryInfo* other);
QLibraryInfo* QLibraryInfo_new2(QLibraryInfo* other);
QLibraryInfo* QLibraryInfo_new3(const QLibraryInfo* param1);
void QLibraryInfo_CopyAssign(QLibraryInfo* self, QLibraryInfo* other);
void QLibraryInfo_MoveAssign(QLibraryInfo* self, QLibraryInfo* other);
const char* QLibraryInfo_Build();
bool QLibraryInfo_IsDebugBuild();
bool QLibraryInfo_IsSharedBuild();
QVersionNumber* QLibraryInfo_Version();
libqt_string QLibraryInfo_Path(int p);
libqt_list QLibraryInfo_Paths(int p);
libqt_string QLibraryInfo_Location(int location);
libqt_list QLibraryInfo_PlatformPluginArguments(const libqt_string platformName);
void QLibraryInfo_Delete(QLibraryInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
