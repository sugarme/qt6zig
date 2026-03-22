#pragma once
#ifndef QFILE_H_C_LIB
#define QFILE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QFile QFile;
typedef struct QFileDevice QFileDevice;
typedef struct QNtfsPermissionCheckGuard QNtfsPermissionCheckGuard;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QNtfsPermissionCheckGuard* QNtfsPermissionCheckGuard_new();
void QNtfsPermissionCheckGuard_Delete(QNtfsPermissionCheckGuard* self);

QFile* QFile_new();
QFile* QFile_new2(const libqt_string name);
QFile* QFile_new3(QObject* parent);
QFile* QFile_new4(const libqt_string name, QObject* parent);
libqt_string QFile_Tr(const char* s);
libqt_string QFile_FileName(const QFile* self);
void QFile_SetFileName(QFile* self, const libqt_string name);
libqt_string QFile_EncodeName(const libqt_string fileName);
libqt_string QFile_DecodeName(const libqt_string localFileName);
libqt_string QFile_DecodeName2(const char* localFileName);
bool QFile_Exists(const QFile* self);
bool QFile_Exists2(const libqt_string fileName);
libqt_string QFile_SymLinkTarget(const QFile* self);
libqt_string QFile_SymLinkTarget2(const libqt_string fileName);
bool QFile_Remove(QFile* self);
bool QFile_Remove2(const libqt_string fileName);
bool QFile_MoveToTrash(QFile* self);
bool QFile_MoveToTrash2(const libqt_string fileName);
bool QFile_Rename(QFile* self, const libqt_string newName);
bool QFile_Rename2(const libqt_string oldName, const libqt_string newName);
bool QFile_Link(QFile* self, const libqt_string newName);
bool QFile_Link2(const libqt_string fileName, const libqt_string newName);
bool QFile_Copy(QFile* self, const libqt_string newName);
bool QFile_Copy2(const libqt_string fileName, const libqt_string newName);
bool QFile_Open(QFile* self, int flags);
bool QFile_Open2(QFile* self, int flags, int permissions);
bool QFile_Open4(QFile* self, int fd, int ioFlags);
long long QFile_Size(const QFile* self);
bool QFile_Resize(QFile* self, long long sz);
bool QFile_Resize2(const libqt_string filename, long long sz);
int QFile_Permissions(const QFile* self);
int QFile_Permissions2(const libqt_string filename);
bool QFile_SetPermissions(QFile* self, int permissionSpec);
bool QFile_SetPermissions2(const libqt_string filename, int permissionSpec);
libqt_string QFile_Tr2(const char* s, const char* c);
libqt_string QFile_Tr3(const char* s, const char* c, int n);
bool QFile_MoveToTrash22(const libqt_string fileName, libqt_string pathInTrash);
bool QFile_Open33(QFile* self, int fd, int ioFlags, int handleFlags);
void QFile_OnFileName(const QFile* self, intptr_t slot);
libqt_string QFile_QBaseFileName(const QFile* self);
void QFile_OnOpen(QFile* self, intptr_t slot);
bool QFile_QBaseOpen(QFile* self, int flags);
void QFile_OnSize(const QFile* self, intptr_t slot);
long long QFile_QBaseSize(const QFile* self);
void QFile_OnResize(QFile* self, intptr_t slot);
bool QFile_QBaseResize(QFile* self, long long sz);
void QFile_OnPermissions(const QFile* self, intptr_t slot);
int QFile_QBasePermissions(const QFile* self);
void QFile_OnSetPermissions(QFile* self, intptr_t slot);
bool QFile_QBaseSetPermissions(QFile* self, int permissionSpec);
void QFile_Delete(QFile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
