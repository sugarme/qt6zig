#pragma once
#ifndef QFILESYSTEMWATCHER_H_C_LIB
#define QFILESYSTEMWATCHER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QFileSystemWatcher QFileSystemWatcher;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QFileSystemWatcher* QFileSystemWatcher_new();
QFileSystemWatcher* QFileSystemWatcher_new2(const libqt_list paths);
QFileSystemWatcher* QFileSystemWatcher_new3(QObject* parent);
QFileSystemWatcher* QFileSystemWatcher_new4(const libqt_list paths, QObject* parent);
libqt_string QFileSystemWatcher_Tr(const char* s);
bool QFileSystemWatcher_AddPath(QFileSystemWatcher* self, const libqt_string file);
libqt_list QFileSystemWatcher_AddPaths(QFileSystemWatcher* self, const libqt_list files);
bool QFileSystemWatcher_RemovePath(QFileSystemWatcher* self, const libqt_string file);
libqt_list QFileSystemWatcher_RemovePaths(QFileSystemWatcher* self, const libqt_list files);
libqt_list QFileSystemWatcher_Files(const QFileSystemWatcher* self);
libqt_list QFileSystemWatcher_Directories(const QFileSystemWatcher* self);
libqt_string QFileSystemWatcher_Tr2(const char* s, const char* c);
libqt_string QFileSystemWatcher_Tr3(const char* s, const char* c, int n);
void QFileSystemWatcher_Connect_fileChanged(QFileSystemWatcher* self, intptr_t slot);
void QFileSystemWatcher_Connect_directoryChanged(QFileSystemWatcher* self, intptr_t slot);
void QFileSystemWatcher_Delete(QFileSystemWatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
