#pragma once
#ifndef QGENERICPLUGINFACTORY_H_C_LIB
#define QGENERICPLUGINFACTORY_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QGenericPluginFactory QGenericPluginFactory;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QGenericPluginFactory* QGenericPluginFactory_new(const QGenericPluginFactory* other);
QGenericPluginFactory* QGenericPluginFactory_new2(QGenericPluginFactory* other);
QGenericPluginFactory* QGenericPluginFactory_new3();
QGenericPluginFactory* QGenericPluginFactory_new4(const QGenericPluginFactory* param1);
void QGenericPluginFactory_CopyAssign(QGenericPluginFactory* self, QGenericPluginFactory* other);
void QGenericPluginFactory_MoveAssign(QGenericPluginFactory* self, QGenericPluginFactory* other);
libqt_list QGenericPluginFactory_Keys();
QObject* QGenericPluginFactory_Create(const libqt_string param1, const libqt_string param2);
void QGenericPluginFactory_OperatorAssign(QGenericPluginFactory* self, const QGenericPluginFactory* param1);
void QGenericPluginFactory_Delete(QGenericPluginFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
