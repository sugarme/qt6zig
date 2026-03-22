#pragma once
#ifndef QPLUGINLOADER_H_C_LIB
#define QPLUGINLOADER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QJsonObject QJsonObject;
typedef struct QObject QObject;
typedef struct QPluginLoader QPluginLoader;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QPluginLoader* QPluginLoader_new();
QPluginLoader* QPluginLoader_new2(const libqt_string fileName);
QPluginLoader* QPluginLoader_new3(QObject* parent);
QPluginLoader* QPluginLoader_new4(const libqt_string fileName, QObject* parent);
libqt_string QPluginLoader_Tr(const char* s);
QObject* QPluginLoader_Instance(QPluginLoader* self);
QJsonObject* QPluginLoader_MetaData(const QPluginLoader* self);
libqt_list QPluginLoader_StaticInstances();
libqt_list QPluginLoader_StaticPlugins();
bool QPluginLoader_Load(QPluginLoader* self);
bool QPluginLoader_Unload(QPluginLoader* self);
bool QPluginLoader_IsLoaded(const QPluginLoader* self);
void QPluginLoader_SetFileName(QPluginLoader* self, const libqt_string fileName);
libqt_string QPluginLoader_FileName(const QPluginLoader* self);
libqt_string QPluginLoader_ErrorString(const QPluginLoader* self);
void QPluginLoader_SetLoadHints(QPluginLoader* self, int loadHints);
int QPluginLoader_LoadHints(const QPluginLoader* self);
libqt_string QPluginLoader_Tr2(const char* s, const char* c);
libqt_string QPluginLoader_Tr3(const char* s, const char* c, int n);
void QPluginLoader_Delete(QPluginLoader* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
