#pragma once
#ifndef QSAVEFILE_H_C_LIB
#define QSAVEFILE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QFileDevice QFileDevice;
typedef struct QObject QObject;
typedef struct QSaveFile QSaveFile;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSaveFile* QSaveFile_new(const libqt_string name);
QSaveFile* QSaveFile_new2();
QSaveFile* QSaveFile_new3(const libqt_string name, QObject* parent);
QSaveFile* QSaveFile_new4(QObject* parent);
libqt_string QSaveFile_Tr(const char* s);
libqt_string QSaveFile_FileName(const QSaveFile* self);
void QSaveFile_SetFileName(QSaveFile* self, const libqt_string name);
bool QSaveFile_Open(QSaveFile* self, int flags);
bool QSaveFile_Commit(QSaveFile* self);
void QSaveFile_CancelWriting(QSaveFile* self);
void QSaveFile_SetDirectWriteFallback(QSaveFile* self, bool enabled);
bool QSaveFile_DirectWriteFallback(const QSaveFile* self);
long long QSaveFile_WriteData(QSaveFile* self, const char* data, long long lenVal);
libqt_string QSaveFile_Tr2(const char* s, const char* c);
libqt_string QSaveFile_Tr3(const char* s, const char* c, int n);
void QSaveFile_OnFileName(const QSaveFile* self, intptr_t slot);
libqt_string QSaveFile_QBaseFileName(const QSaveFile* self);
void QSaveFile_OnOpen(QSaveFile* self, intptr_t slot);
bool QSaveFile_QBaseOpen(QSaveFile* self, int flags);
void QSaveFile_OnWriteData(QSaveFile* self, intptr_t slot);
long long QSaveFile_QBaseWriteData(QSaveFile* self, const char* data, long long lenVal);
void QSaveFile_Delete(QSaveFile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
