#pragma once
#ifndef QLIBRARY_H_C_LIB
#define QLIBRARY_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QLibrary QLibrary;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QLibrary* QLibrary_new();
QLibrary* QLibrary_new2(const libqt_string fileName);
QLibrary* QLibrary_new3(const libqt_string fileName, int verNum);
QLibrary* QLibrary_new4(const libqt_string fileName, const libqt_string version);
QLibrary* QLibrary_new5(QObject* parent);
QLibrary* QLibrary_new6(const libqt_string fileName, QObject* parent);
QLibrary* QLibrary_new7(const libqt_string fileName, int verNum, QObject* parent);
QLibrary* QLibrary_new8(const libqt_string fileName, const libqt_string version, QObject* parent);
libqt_string QLibrary_Tr(const char* s);
bool QLibrary_Load(QLibrary* self);
bool QLibrary_Unload(QLibrary* self);
bool QLibrary_IsLoaded(const QLibrary* self);
bool QLibrary_IsLibrary(const libqt_string fileName);
void QLibrary_SetFileName(QLibrary* self, const libqt_string fileName);
libqt_string QLibrary_FileName(const QLibrary* self);
void QLibrary_SetFileNameAndVersion(QLibrary* self, const libqt_string fileName, int verNum);
void QLibrary_SetFileNameAndVersion2(QLibrary* self, const libqt_string fileName, const libqt_string version);
libqt_string QLibrary_ErrorString(const QLibrary* self);
void QLibrary_SetLoadHints(QLibrary* self, int hints);
int QLibrary_LoadHints(const QLibrary* self);
libqt_string QLibrary_Tr2(const char* s, const char* c);
libqt_string QLibrary_Tr3(const char* s, const char* c, int n);
void QLibrary_Delete(QLibrary* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
