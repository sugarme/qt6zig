#pragma once
#ifndef QABSTRACTVIDEOBUFFER_H_C_LIB
#define QABSTRACTVIDEOBUFFER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAbstractVideoBuffer__MapData)
typedef QAbstractVideoBuffer::MapData QAbstractVideoBuffer__MapData;
#endif
#else
typedef struct QAbstractVideoBuffer QAbstractVideoBuffer;
typedef struct QAbstractVideoBuffer__MapData QAbstractVideoBuffer__MapData;
typedef struct QVideoFrameFormat QVideoFrameFormat;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAbstractVideoBuffer* QAbstractVideoBuffer_new();
QAbstractVideoBuffer* QAbstractVideoBuffer_new2(const QAbstractVideoBuffer* param1);
QAbstractVideoBuffer__MapData* QAbstractVideoBuffer_Map(QAbstractVideoBuffer* self, int mode);
void QAbstractVideoBuffer_Unmap(QAbstractVideoBuffer* self);
QVideoFrameFormat* QAbstractVideoBuffer_Format(const QAbstractVideoBuffer* self);
void QAbstractVideoBuffer_OperatorAssign(QAbstractVideoBuffer* self, const QAbstractVideoBuffer* param1);
void QAbstractVideoBuffer_OnMap(QAbstractVideoBuffer* self, intptr_t slot);
QAbstractVideoBuffer__MapData* QAbstractVideoBuffer_QBaseMap(QAbstractVideoBuffer* self, int mode);
void QAbstractVideoBuffer_OnUnmap(QAbstractVideoBuffer* self, intptr_t slot);
void QAbstractVideoBuffer_QBaseUnmap(QAbstractVideoBuffer* self);
void QAbstractVideoBuffer_OnFormat(const QAbstractVideoBuffer* self, intptr_t slot);
QVideoFrameFormat* QAbstractVideoBuffer_QBaseFormat(const QAbstractVideoBuffer* self);
void QAbstractVideoBuffer_Delete(QAbstractVideoBuffer* self);

QAbstractVideoBuffer__MapData* QAbstractVideoBuffer__MapData_new(const QAbstractVideoBuffer__MapData* other);
QAbstractVideoBuffer__MapData* QAbstractVideoBuffer__MapData_new2(QAbstractVideoBuffer__MapData* other);
void QAbstractVideoBuffer__MapData_CopyAssign(QAbstractVideoBuffer__MapData* self, QAbstractVideoBuffer__MapData* other);
void QAbstractVideoBuffer__MapData_MoveAssign(QAbstractVideoBuffer__MapData* self, QAbstractVideoBuffer__MapData* other);
int QAbstractVideoBuffer__MapData_PlaneCount(const QAbstractVideoBuffer__MapData* self);
void QAbstractVideoBuffer__MapData_SetPlaneCount(QAbstractVideoBuffer__MapData* self, int planeCount);
void QAbstractVideoBuffer__MapData_Delete(QAbstractVideoBuffer__MapData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
