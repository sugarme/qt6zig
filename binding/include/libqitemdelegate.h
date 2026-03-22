#pragma once
#ifndef QITEMDELEGATE_H_C_LIB
#define QITEMDELEGATE_H_C_LIB

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
typedef struct QFont QFont;
typedef struct QItemDelegate QItemDelegate;
typedef struct QItemEditorFactory QItemEditorFactory;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QItemDelegate* QItemDelegate_new();
QItemDelegate* QItemDelegate_new2(QObject* parent);
libqt_string QItemDelegate_Tr(const char* s);
bool QItemDelegate_HasClipping(const QItemDelegate* self);
void QItemDelegate_SetClipping(QItemDelegate* self, bool clip);
void QItemDelegate_Paint(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index);
QSize* QItemDelegate_SizeHint(const QItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index);
QWidget* QItemDelegate_CreateEditor(const QItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index);
void QItemDelegate_SetEditorData(const QItemDelegate* self, QWidget* editor, const QModelIndex* index);
void QItemDelegate_SetModelData(const QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index);
void QItemDelegate_UpdateEditorGeometry(const QItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index);
QItemEditorFactory* QItemDelegate_ItemEditorFactory(const QItemDelegate* self);
void QItemDelegate_SetItemEditorFactory(QItemDelegate* self, QItemEditorFactory* factory);
void QItemDelegate_DrawDisplay(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const libqt_string text);
void QItemDelegate_DrawDecoration(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const QPixmap* pixmap);
void QItemDelegate_DrawFocus(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect);
void QItemDelegate_DrawCheck(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, int state);
bool QItemDelegate_EventFilter(QItemDelegate* self, QObject* object, QEvent* event);
bool QItemDelegate_EditorEvent(QItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
libqt_string QItemDelegate_Tr2(const char* s, const char* c);
libqt_string QItemDelegate_Tr3(const char* s, const char* c, int n);
void QItemDelegate_OnPaint(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBasePaint(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index);
void QItemDelegate_OnSizeHint(const QItemDelegate* self, intptr_t slot);
QSize* QItemDelegate_QBaseSizeHint(const QItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index);
void QItemDelegate_OnCreateEditor(const QItemDelegate* self, intptr_t slot);
QWidget* QItemDelegate_QBaseCreateEditor(const QItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index);
void QItemDelegate_OnSetEditorData(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseSetEditorData(const QItemDelegate* self, QWidget* editor, const QModelIndex* index);
void QItemDelegate_OnSetModelData(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseSetModelData(const QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index);
void QItemDelegate_OnUpdateEditorGeometry(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseUpdateEditorGeometry(const QItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index);
void QItemDelegate_OnDrawDisplay(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseDrawDisplay(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const libqt_string text);
void QItemDelegate_OnDrawDecoration(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseDrawDecoration(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const QPixmap* pixmap);
void QItemDelegate_OnDrawFocus(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseDrawFocus(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect);
void QItemDelegate_OnDrawCheck(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseDrawCheck(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, int state);
void QItemDelegate_OnEventFilter(QItemDelegate* self, intptr_t slot);
bool QItemDelegate_QBaseEventFilter(QItemDelegate* self, QObject* object, QEvent* event);
void QItemDelegate_OnEditorEvent(QItemDelegate* self, intptr_t slot);
bool QItemDelegate_QBaseEditorEvent(QItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
void QItemDelegate_DrawBackground(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index);
void QItemDelegate_OnDrawBackground(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseDrawBackground(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index);
void QItemDelegate_DoLayout(const QItemDelegate* self, const QStyleOptionViewItem* option, QRect* checkRect, QRect* iconRect, QRect* textRect, bool hint);
void QItemDelegate_OnDoLayout(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseDoLayout(const QItemDelegate* self, const QStyleOptionViewItem* option, QRect* checkRect, QRect* iconRect, QRect* textRect, bool hint);
QRect* QItemDelegate_Rect(const QItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index, int role);
void QItemDelegate_OnRect(const QItemDelegate* self, intptr_t slot);
QRect* QItemDelegate_QBaseRect(const QItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index, int role);
QStyleOptionViewItem* QItemDelegate_SetOptions(const QItemDelegate* self, const QModelIndex* index, const QStyleOptionViewItem* option);
void QItemDelegate_OnSetOptions(const QItemDelegate* self, intptr_t slot);
QStyleOptionViewItem* QItemDelegate_QBaseSetOptions(const QItemDelegate* self, const QModelIndex* index, const QStyleOptionViewItem* option);
QPixmap* QItemDelegate_Decoration(const QItemDelegate* self, const QStyleOptionViewItem* option, const QVariant* variant);
void QItemDelegate_OnDecoration(const QItemDelegate* self, intptr_t slot);
QPixmap* QItemDelegate_QBaseDecoration(const QItemDelegate* self, const QStyleOptionViewItem* option, const QVariant* variant);
QPixmap* QItemDelegate_SelectedPixmap(QItemDelegate* self, const QPixmap* pixmap, const QPalette* palette, bool enabled);
void QItemDelegate_OnSelectedPixmap(QItemDelegate* self, intptr_t slot);
QPixmap* QItemDelegate_QBaseSelectedPixmap(QItemDelegate* self, const QPixmap* pixmap, const QPalette* palette, bool enabled);
QRect* QItemDelegate_DoCheck(const QItemDelegate* self, const QStyleOptionViewItem* option, const QRect* bounding, const QVariant* variant);
void QItemDelegate_OnDoCheck(const QItemDelegate* self, intptr_t slot);
QRect* QItemDelegate_QBaseDoCheck(const QItemDelegate* self, const QStyleOptionViewItem* option, const QRect* bounding, const QVariant* variant);
QRect* QItemDelegate_TextRectangle(const QItemDelegate* self, QPainter* painter, const QRect* rect, const QFont* font, const libqt_string text);
void QItemDelegate_OnTextRectangle(const QItemDelegate* self, intptr_t slot);
QRect* QItemDelegate_QBaseTextRectangle(const QItemDelegate* self, QPainter* painter, const QRect* rect, const QFont* font, const libqt_string text);
void QItemDelegate_Delete(QItemDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
