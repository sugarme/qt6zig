#pragma once
#ifndef QMEDIAMETADATA_H_C_LIB
#define QMEDIAMETADATA_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QPixmapCache__Key)
typedef QPixmapCache::Key QPixmapCache__Key;
#endif
#else
typedef struct QMediaMetaData QMediaMetaData;
typedef struct QMetaType QMetaType;
typedef struct QPixmapCache__Key QPixmapCache__Key;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QMediaMetaData* QMediaMetaData_new(const QMediaMetaData* param1);
QMediaMetaData* QMediaMetaData_new2();
QVariant* QMediaMetaData_Value(const QMediaMetaData* self, QPixmapCache__Key* k);
void QMediaMetaData_Insert(QMediaMetaData* self, QPixmapCache__Key* k, const QVariant* value);
void QMediaMetaData_Remove(QMediaMetaData* self, QPixmapCache__Key* k);
libqt_list QMediaMetaData_Keys(const QMediaMetaData* self);
QVariant* QMediaMetaData_OperatorSubscript(QMediaMetaData* self, QPixmapCache__Key* k);
void QMediaMetaData_Clear(QMediaMetaData* self);
bool QMediaMetaData_IsEmpty(const QMediaMetaData* self);
libqt_string QMediaMetaData_StringValue(const QMediaMetaData* self, QPixmapCache__Key* k);
libqt_string QMediaMetaData_MetaDataKeyToString(QPixmapCache__Key* k);
void QMediaMetaData_Delete(QMediaMetaData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
