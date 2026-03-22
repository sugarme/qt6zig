#pragma once
#ifndef QFACTORYINTERFACE_H_C_LIB
#define QFACTORYINTERFACE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QFactoryInterface QFactoryInterface;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QFactoryInterface* QFactoryInterface_new();
libqt_list QFactoryInterface_Keys(const QFactoryInterface* self);
void QFactoryInterface_OnKeys(const QFactoryInterface* self, intptr_t slot);
libqt_list QFactoryInterface_QBaseKeys(const QFactoryInterface* self);
void QFactoryInterface_Delete(QFactoryInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
