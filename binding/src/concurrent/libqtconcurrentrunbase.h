#pragma once
#ifndef QTCONCURRENTRUNBASE_H_C_LIB
#define QTCONCURRENTRUNBASE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtConcurrent__TaskStartParameters)
typedef QtConcurrent::TaskStartParameters QtConcurrent__TaskStartParameters;
#endif
#else
typedef struct QThreadPool QThreadPool;
typedef struct QtConcurrent__TaskStartParameters QtConcurrent__TaskStartParameters;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QtConcurrent__TaskStartParameters* QtConcurrent__TaskStartParameters_new(const QtConcurrent__TaskStartParameters* other);
QtConcurrent__TaskStartParameters* QtConcurrent__TaskStartParameters_new2(QtConcurrent__TaskStartParameters* other);
void QtConcurrent__TaskStartParameters_CopyAssign(QtConcurrent__TaskStartParameters* self, QtConcurrent__TaskStartParameters* other);
void QtConcurrent__TaskStartParameters_MoveAssign(QtConcurrent__TaskStartParameters* self, QtConcurrent__TaskStartParameters* other);
QThreadPool* QtConcurrent__TaskStartParameters_ThreadPool(const QtConcurrent__TaskStartParameters* self);
void QtConcurrent__TaskStartParameters_SetThreadPool(QtConcurrent__TaskStartParameters* self, QThreadPool* threadPool);
int QtConcurrent__TaskStartParameters_Priority(const QtConcurrent__TaskStartParameters* self);
void QtConcurrent__TaskStartParameters_SetPriority(QtConcurrent__TaskStartParameters* self, int priority);
void QtConcurrent__TaskStartParameters_Delete(QtConcurrent__TaskStartParameters* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
