#pragma once
#ifndef QOPENGLVERSIONFUNCTIONSFACTORY_H_C_LIB
#define QOPENGLVERSIONFUNCTIONSFACTORY_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractOpenGLFunctions QAbstractOpenGLFunctions;
typedef struct QOpenGLContext QOpenGLContext;
typedef struct QOpenGLVersionFunctionsFactory QOpenGLVersionFunctionsFactory;
typedef struct QOpenGLVersionProfile QOpenGLVersionProfile;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QOpenGLVersionFunctionsFactory* QOpenGLVersionFunctionsFactory_new(const QOpenGLVersionFunctionsFactory* other);
QOpenGLVersionFunctionsFactory* QOpenGLVersionFunctionsFactory_new2(QOpenGLVersionFunctionsFactory* other);
QOpenGLVersionFunctionsFactory* QOpenGLVersionFunctionsFactory_new3();
QOpenGLVersionFunctionsFactory* QOpenGLVersionFunctionsFactory_new4(const QOpenGLVersionFunctionsFactory* param1);
void QOpenGLVersionFunctionsFactory_CopyAssign(QOpenGLVersionFunctionsFactory* self, QOpenGLVersionFunctionsFactory* other);
void QOpenGLVersionFunctionsFactory_MoveAssign(QOpenGLVersionFunctionsFactory* self, QOpenGLVersionFunctionsFactory* other);
QAbstractOpenGLFunctions* QOpenGLVersionFunctionsFactory_Get();
void QOpenGLVersionFunctionsFactory_OperatorAssign(QOpenGLVersionFunctionsFactory* self, const QOpenGLVersionFunctionsFactory* param1);
QAbstractOpenGLFunctions* QOpenGLVersionFunctionsFactory_Get1(const QOpenGLVersionProfile* versionProfile);
QAbstractOpenGLFunctions* QOpenGLVersionFunctionsFactory_Get2(const QOpenGLVersionProfile* versionProfile, QOpenGLContext* context);
void QOpenGLVersionFunctionsFactory_Delete(QOpenGLVersionFunctionsFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
