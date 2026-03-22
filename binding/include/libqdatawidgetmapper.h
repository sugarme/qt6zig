#pragma once
#ifndef QDATAWIDGETMAPPER_H_C_LIB
#define QDATAWIDGETMAPPER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QDataWidgetMapper QDataWidgetMapper;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QDataWidgetMapper* QDataWidgetMapper_new();
QDataWidgetMapper* QDataWidgetMapper_new2(QObject* parent);
libqt_string QDataWidgetMapper_Tr(const char* s);
void QDataWidgetMapper_SetModel(QDataWidgetMapper* self, QAbstractItemModel* model);
QAbstractItemModel* QDataWidgetMapper_Model(const QDataWidgetMapper* self);
void QDataWidgetMapper_SetItemDelegate(QDataWidgetMapper* self, QAbstractItemDelegate* delegate);
QAbstractItemDelegate* QDataWidgetMapper_ItemDelegate(const QDataWidgetMapper* self);
void QDataWidgetMapper_SetRootIndex(QDataWidgetMapper* self, const QModelIndex* index);
QModelIndex* QDataWidgetMapper_RootIndex(const QDataWidgetMapper* self);
void QDataWidgetMapper_SetOrientation(QDataWidgetMapper* self, int aOrientation);
int QDataWidgetMapper_Orientation(const QDataWidgetMapper* self);
void QDataWidgetMapper_SetSubmitPolicy(QDataWidgetMapper* self, int policy);
int QDataWidgetMapper_SubmitPolicy(const QDataWidgetMapper* self);
void QDataWidgetMapper_AddMapping(QDataWidgetMapper* self, QWidget* widget, int section);
void QDataWidgetMapper_AddMapping2(QDataWidgetMapper* self, QWidget* widget, int section, const libqt_string propertyName);
void QDataWidgetMapper_RemoveMapping(QDataWidgetMapper* self, QWidget* widget);
int QDataWidgetMapper_MappedSection(const QDataWidgetMapper* self, QWidget* widget);
libqt_string QDataWidgetMapper_MappedPropertyName(const QDataWidgetMapper* self, QWidget* widget);
QWidget* QDataWidgetMapper_MappedWidgetAt(const QDataWidgetMapper* self, int section);
void QDataWidgetMapper_ClearMapping(QDataWidgetMapper* self);
int QDataWidgetMapper_CurrentIndex(const QDataWidgetMapper* self);
void QDataWidgetMapper_Revert(QDataWidgetMapper* self);
bool QDataWidgetMapper_Submit(QDataWidgetMapper* self);
void QDataWidgetMapper_ToFirst(QDataWidgetMapper* self);
void QDataWidgetMapper_ToLast(QDataWidgetMapper* self);
void QDataWidgetMapper_ToNext(QDataWidgetMapper* self);
void QDataWidgetMapper_ToPrevious(QDataWidgetMapper* self);
void QDataWidgetMapper_SetCurrentIndex(QDataWidgetMapper* self, int index);
void QDataWidgetMapper_SetCurrentModelIndex(QDataWidgetMapper* self, const QModelIndex* index);
void QDataWidgetMapper_CurrentIndexChanged(QDataWidgetMapper* self, int index);
void QDataWidgetMapper_Connect_CurrentIndexChanged(QDataWidgetMapper* self, intptr_t slot);
libqt_string QDataWidgetMapper_Tr2(const char* s, const char* c);
libqt_string QDataWidgetMapper_Tr3(const char* s, const char* c, int n);
void QDataWidgetMapper_OnSetCurrentIndex(QDataWidgetMapper* self, intptr_t slot);
void QDataWidgetMapper_QBaseSetCurrentIndex(QDataWidgetMapper* self, int index);
void QDataWidgetMapper_Delete(QDataWidgetMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
