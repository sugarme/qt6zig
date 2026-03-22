#pragma once
#ifndef QTCONCURRENTITERATEKERNEL_H_C_LIB
#define QTCONCURRENTITERATEKERNEL_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtConcurrent__BlockSizeManager)
typedef QtConcurrent::BlockSizeManager QtConcurrent__BlockSizeManager;
#endif
#else
typedef struct QThreadPool QThreadPool;
typedef struct QtConcurrent__BlockSizeManager QtConcurrent__BlockSizeManager;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QtConcurrent__BlockSizeManager* QtConcurrent__BlockSizeManager_new(QThreadPool* pool, int iterationCount);
void QtConcurrent__BlockSizeManager_TimeBeforeUser(QtConcurrent__BlockSizeManager* self);
void QtConcurrent__BlockSizeManager_TimeAfterUser(QtConcurrent__BlockSizeManager* self);
int QtConcurrent__BlockSizeManager_BlockSize(QtConcurrent__BlockSizeManager* self);
void QtConcurrent__BlockSizeManager_Delete(QtConcurrent__BlockSizeManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
