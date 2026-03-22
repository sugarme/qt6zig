#pragma once
#ifndef QACCESSIBLEPLUGIN_H_C_LIB
#define QACCESSIBLEPLUGIN_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QAccessiblePlugin QAccessiblePlugin;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QAccessiblePlugin* QAccessiblePlugin_new();
QAccessiblePlugin* QAccessiblePlugin_new2(QObject* parent);
libqt_string QAccessiblePlugin_Tr(const char* s);
QAccessibleInterface* QAccessiblePlugin_Create(QAccessiblePlugin* self, const libqt_string key, QObject* object);
libqt_string QAccessiblePlugin_Tr2(const char* s, const char* c);
libqt_string QAccessiblePlugin_Tr3(const char* s, const char* c, int n);
void QAccessiblePlugin_OnCreate(QAccessiblePlugin* self, intptr_t slot);
QAccessibleInterface* QAccessiblePlugin_QBaseCreate(QAccessiblePlugin* self, const libqt_string key, QObject* object);
void QAccessiblePlugin_Delete(QAccessiblePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
