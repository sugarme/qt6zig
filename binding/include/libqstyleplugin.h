#pragma once
#ifndef QSTYLEPLUGIN_H_C_LIB
#define QSTYLEPLUGIN_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QObject QObject;
typedef struct QStyle QStyle;
typedef struct QStylePlugin QStylePlugin;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QStylePlugin* QStylePlugin_new();
QStylePlugin* QStylePlugin_new2(QObject* parent);
libqt_string QStylePlugin_Tr(const char* s);
QStyle* QStylePlugin_Create(QStylePlugin* self, const libqt_string key);
libqt_string QStylePlugin_Tr2(const char* s, const char* c);
libqt_string QStylePlugin_Tr3(const char* s, const char* c, int n);
void QStylePlugin_OnCreate(QStylePlugin* self, intptr_t slot);
QStyle* QStylePlugin_QBaseCreate(QStylePlugin* self, const libqt_string key);
void QStylePlugin_Delete(QStylePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
