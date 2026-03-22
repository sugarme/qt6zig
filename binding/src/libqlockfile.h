#pragma once
#ifndef QLOCKFILE_H_C_LIB
#define QLOCKFILE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QLockFile QLockFile;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QLockFile* QLockFile_new(const libqt_string fileName);
libqt_string QLockFile_FileName(const QLockFile* self);
bool QLockFile_Lock(QLockFile* self);
bool QLockFile_TryLock(QLockFile* self, int timeout);
void QLockFile_Unlock(QLockFile* self);
void QLockFile_SetStaleLockTime(QLockFile* self, int staleLockTime);
int QLockFile_StaleLockTime(const QLockFile* self);
bool QLockFile_TryLock2(QLockFile* self);
bool QLockFile_IsLocked(const QLockFile* self);
bool QLockFile_GetLockInfo(const QLockFile* self, long long* pid, libqt_string hostname, libqt_string appname);
bool QLockFile_RemoveStaleLockFile(QLockFile* self);
int QLockFile_Error(const QLockFile* self);
void QLockFile_Delete(QLockFile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
