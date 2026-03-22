#pragma once
#ifndef QSTYLEDITEMDELEGATE_H_C_LIB
#define QSTYLEDITEMDELEGATE_H_C_LIB

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
typedef struct QEvent QEvent;
typedef struct QItemEditorFactory QItemEditorFactory;
typedef struct QLocale QLocale;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QStyledItemDelegate QStyledItemDelegate;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QStyledItemDelegate* QStyledItemDelegate_new();
QStyledItemDelegate* QStyledItemDelegate_new2(QObject* parent);
libqt_string QStyledItemDelegate_Tr(const char* s);
void QStyledItemDelegate_Paint(const QStyledItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index);
QSize* QStyledItemDelegate_SizeHint(const QStyledItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index);
QWidget* QStyledItemDelegate_CreateEditor(const QStyledItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index);
void QStyledItemDelegate_SetEditorData(const QStyledItemDelegate* self, QWidget* editor, const QModelIndex* index);
void QStyledItemDelegate_SetModelData(const QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index);
void QStyledItemDelegate_UpdateEditorGeometry(const QStyledItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index);
QItemEditorFactory* QStyledItemDelegate_ItemEditorFactory(const QStyledItemDelegate* self);
void QStyledItemDelegate_SetItemEditorFactory(QStyledItemDelegate* self, QItemEditorFactory* factory);
libqt_string QStyledItemDelegate_DisplayText(const QStyledItemDelegate* self, const QVariant* value, const QLocale* locale);
void QStyledItemDelegate_InitStyleOption(const QStyledItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index);
bool QStyledItemDelegate_EventFilter(QStyledItemDelegate* self, QObject* object, QEvent* event);
bool QStyledItemDelegate_EditorEvent(QStyledItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
libqt_string QStyledItemDelegate_Tr2(const char* s, const char* c);
libqt_string QStyledItemDelegate_Tr3(const char* s, const char* c, int n);
void QStyledItemDelegate_OnPaint(const QStyledItemDelegate* self, intptr_t slot);
void QStyledItemDelegate_QBasePaint(const QStyledItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index);
void QStyledItemDelegate_OnSizeHint(const QStyledItemDelegate* self, intptr_t slot);
QSize* QStyledItemDelegate_QBaseSizeHint(const QStyledItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index);
void QStyledItemDelegate_OnCreateEditor(const QStyledItemDelegate* self, intptr_t slot);
QWidget* QStyledItemDelegate_QBaseCreateEditor(const QStyledItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index);
void QStyledItemDelegate_OnSetEditorData(const QStyledItemDelegate* self, intptr_t slot);
void QStyledItemDelegate_QBaseSetEditorData(const QStyledItemDelegate* self, QWidget* editor, const QModelIndex* index);
void QStyledItemDelegate_OnSetModelData(const QStyledItemDelegate* self, intptr_t slot);
void QStyledItemDelegate_QBaseSetModelData(const QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index);
void QStyledItemDelegate_OnUpdateEditorGeometry(const QStyledItemDelegate* self, intptr_t slot);
void QStyledItemDelegate_QBaseUpdateEditorGeometry(const QStyledItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index);
void QStyledItemDelegate_OnDisplayText(const QStyledItemDelegate* self, intptr_t slot);
libqt_string QStyledItemDelegate_QBaseDisplayText(const QStyledItemDelegate* self, const QVariant* value, const QLocale* locale);
void QStyledItemDelegate_OnInitStyleOption(const QStyledItemDelegate* self, intptr_t slot);
void QStyledItemDelegate_QBaseInitStyleOption(const QStyledItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index);
void QStyledItemDelegate_OnEventFilter(QStyledItemDelegate* self, intptr_t slot);
bool QStyledItemDelegate_QBaseEventFilter(QStyledItemDelegate* self, QObject* object, QEvent* event);
void QStyledItemDelegate_OnEditorEvent(QStyledItemDelegate* self, intptr_t slot);
bool QStyledItemDelegate_QBaseEditorEvent(QStyledItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
void QStyledItemDelegate_Delete(QStyledItemDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
