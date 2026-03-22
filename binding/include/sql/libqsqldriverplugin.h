#pragma once
#ifndef QSQLDRIVERPLUGIN_H_C_LIB
#define QSQLDRIVERPLUGIN_H_C_LIB

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
typedef struct QSqlDriver QSqlDriver;
typedef struct QSqlDriverPlugin QSqlDriverPlugin;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSqlDriverPlugin* QSqlDriverPlugin_new();
QSqlDriverPlugin* QSqlDriverPlugin_new2(QObject* parent);
libqt_string QSqlDriverPlugin_Tr(const char* s);
QSqlDriver* QSqlDriverPlugin_Create(QSqlDriverPlugin* self, const libqt_string key);
libqt_string QSqlDriverPlugin_Tr2(const char* s, const char* c);
libqt_string QSqlDriverPlugin_Tr3(const char* s, const char* c, int n);
void QSqlDriverPlugin_OnCreate(QSqlDriverPlugin* self, intptr_t slot);
QSqlDriver* QSqlDriverPlugin_QBaseCreate(QSqlDriverPlugin* self, const libqt_string key);
void QSqlDriverPlugin_Delete(QSqlDriverPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
