#pragma once
#ifndef QSTYLEFACTORY_H_C_LIB
#define QSTYLEFACTORY_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QStyle QStyle;
typedef struct QStyleFactory QStyleFactory;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QStyleFactory* QStyleFactory_new(const QStyleFactory* other);
QStyleFactory* QStyleFactory_new2(QStyleFactory* other);
QStyleFactory* QStyleFactory_new3();
QStyleFactory* QStyleFactory_new4(const QStyleFactory* param1);
void QStyleFactory_CopyAssign(QStyleFactory* self, QStyleFactory* other);
void QStyleFactory_MoveAssign(QStyleFactory* self, QStyleFactory* other);
libqt_list QStyleFactory_Keys();
QStyle* QStyleFactory_Create(const libqt_string param1);
void QStyleFactory_OperatorAssign(QStyleFactory* self, const QStyleFactory* param1);
void QStyleFactory_Delete(QStyleFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
