#pragma once
#ifndef QTEMPORARYFILE_H_C_LIB
#define QTEMPORARYFILE_H_C_LIB

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
typedef struct QObject QObject;
typedef struct QTemporaryFile QTemporaryFile;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QTemporaryFile* QTemporaryFile_new();
QTemporaryFile* QTemporaryFile_new2(const libqt_string templateName);
QTemporaryFile* QTemporaryFile_new3(QObject* parent);
QTemporaryFile* QTemporaryFile_new4(const libqt_string templateName, QObject* parent);
libqt_string QTemporaryFile_Tr(const char* s);
bool QTemporaryFile_AutoRemove(const QTemporaryFile* self);
void QTemporaryFile_SetAutoRemove(QTemporaryFile* self, bool b);
bool QTemporaryFile_Open(QTemporaryFile* self);
libqt_string QTemporaryFile_FileName(const QTemporaryFile* self);
libqt_string QTemporaryFile_FileTemplate(const QTemporaryFile* self);
void QTemporaryFile_SetFileTemplate(QTemporaryFile* self, const libqt_string name);
bool QTemporaryFile_Rename(QTemporaryFile* self, const libqt_string newName);
QTemporaryFile* QTemporaryFile_CreateNativeFile(const libqt_string fileName);
QTemporaryFile* QTemporaryFile_CreateNativeFile2(QFile* file);
bool QTemporaryFile_Open2(QTemporaryFile* self, int flags);
libqt_string QTemporaryFile_Tr2(const char* s, const char* c);
libqt_string QTemporaryFile_Tr3(const char* s, const char* c, int n);
void QTemporaryFile_OnFileName(const QTemporaryFile* self, intptr_t slot);
libqt_string QTemporaryFile_QBaseFileName(const QTemporaryFile* self);
void QTemporaryFile_OnOpen2(QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_QBaseOpen2(QTemporaryFile* self, int flags);
void QTemporaryFile_Delete(QTemporaryFile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
