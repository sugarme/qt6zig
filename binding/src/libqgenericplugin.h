#pragma once
#ifndef QGENERICPLUGIN_H_C_LIB
#define QGENERICPLUGIN_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QGenericPlugin QGenericPlugin;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QGenericPlugin* QGenericPlugin_new();
QGenericPlugin* QGenericPlugin_new2(QObject* parent);
libqt_string QGenericPlugin_Tr(const char* s);
QObject* QGenericPlugin_Create(QGenericPlugin* self, const libqt_string name, const libqt_string spec);
libqt_string QGenericPlugin_Tr2(const char* s, const char* c);
libqt_string QGenericPlugin_Tr3(const char* s, const char* c, int n);
void QGenericPlugin_OnCreate(QGenericPlugin* self, intptr_t slot);
QObject* QGenericPlugin_QBaseCreate(QGenericPlugin* self, const libqt_string name, const libqt_string spec);
void QGenericPlugin_Delete(QGenericPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
