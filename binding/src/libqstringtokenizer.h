#pragma once
#ifndef QSTRINGTOKENIZER_H_C_LIB
#define QSTRINGTOKENIZER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QStringTokenizerBaseBase QStringTokenizerBaseBase;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QStringTokenizerBaseBase* QStringTokenizerBaseBase_new(const QStringTokenizerBaseBase* other);
QStringTokenizerBaseBase* QStringTokenizerBaseBase_new2(const QStringTokenizerBaseBase* param1);
void QStringTokenizerBaseBase_CopyAssign(QStringTokenizerBaseBase* self, QStringTokenizerBaseBase* other);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
