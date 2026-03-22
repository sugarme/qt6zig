#pragma once
#ifndef QICONENGINEPLUGIN_H_C_LIB
#define QICONENGINEPLUGIN_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QIconEngine QIconEngine;
typedef struct QIconEnginePlugin QIconEnginePlugin;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QIconEnginePlugin* QIconEnginePlugin_new();
QIconEnginePlugin* QIconEnginePlugin_new2(QObject* parent);
libqt_string QIconEnginePlugin_Tr(const char* s);
QIconEngine* QIconEnginePlugin_Create(QIconEnginePlugin* self, const libqt_string filename);
libqt_string QIconEnginePlugin_Tr2(const char* s, const char* c);
libqt_string QIconEnginePlugin_Tr3(const char* s, const char* c, int n);
void QIconEnginePlugin_OnCreate(QIconEnginePlugin* self, intptr_t slot);
QIconEngine* QIconEnginePlugin_QBaseCreate(QIconEnginePlugin* self, const libqt_string filename);
void QIconEnginePlugin_Delete(QIconEnginePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
