#pragma once
#ifndef QGRAPHICSPROXYWIDGET_H_C_LIB
#define QGRAPHICSPROXYWIDGET_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QGraphicsSceneContextMenuEvent QGraphicsSceneContextMenuEvent;
typedef struct QGraphicsSceneDragDropEvent QGraphicsSceneDragDropEvent;
typedef struct QGraphicsSceneHoverEvent QGraphicsSceneHoverEvent;
typedef struct QGraphicsSceneMouseEvent QGraphicsSceneMouseEvent;
typedef struct QGraphicsSceneResizeEvent QGraphicsSceneResizeEvent;
typedef struct QGraphicsSceneWheelEvent QGraphicsSceneWheelEvent;
typedef struct QGraphicsWidget QGraphicsWidget;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QRectF QRectF;
typedef struct QShowEvent QShowEvent;
typedef struct QSizeF QSizeF;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QGraphicsProxyWidget* QGraphicsProxyWidget_new();
QGraphicsProxyWidget* QGraphicsProxyWidget_new2(QGraphicsItem* parent);
QGraphicsProxyWidget* QGraphicsProxyWidget_new3(QGraphicsItem* parent, int wFlags);
libqt_string QGraphicsProxyWidget_Tr(const char* s);
void QGraphicsProxyWidget_SetWidget(QGraphicsProxyWidget* self, QWidget* widget);
QWidget* QGraphicsProxyWidget_Widget(const QGraphicsProxyWidget* self);
QRectF* QGraphicsProxyWidget_SubWidgetRect(const QGraphicsProxyWidget* self, const QWidget* widget);
void QGraphicsProxyWidget_SetGeometry(QGraphicsProxyWidget* self, const QRectF* rect);
void QGraphicsProxyWidget_Paint(QGraphicsProxyWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
int QGraphicsProxyWidget_Type(const QGraphicsProxyWidget* self);
QGraphicsProxyWidget* QGraphicsProxyWidget_CreateProxyForChildWidget(QGraphicsProxyWidget* self, QWidget* child);
QVariant* QGraphicsProxyWidget_ItemChange(QGraphicsProxyWidget* self, int change, const QVariant* value);
bool QGraphicsProxyWidget_Event(QGraphicsProxyWidget* self, QEvent* event);
bool QGraphicsProxyWidget_EventFilter(QGraphicsProxyWidget* self, QObject* object, QEvent* event);
void QGraphicsProxyWidget_ShowEvent(QGraphicsProxyWidget* self, QShowEvent* event);
void QGraphicsProxyWidget_HideEvent(QGraphicsProxyWidget* self, QHideEvent* event);
void QGraphicsProxyWidget_ContextMenuEvent(QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event);
void QGraphicsProxyWidget_DragEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsProxyWidget_DragLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsProxyWidget_DragMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsProxyWidget_DropEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsProxyWidget_HoverEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsProxyWidget_HoverLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsProxyWidget_HoverMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsProxyWidget_GrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
void QGraphicsProxyWidget_UngrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
void QGraphicsProxyWidget_MouseMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsProxyWidget_MousePressEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsProxyWidget_MouseReleaseEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsProxyWidget_MouseDoubleClickEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsProxyWidget_WheelEvent(QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event);
void QGraphicsProxyWidget_KeyPressEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
void QGraphicsProxyWidget_KeyReleaseEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
void QGraphicsProxyWidget_FocusInEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
void QGraphicsProxyWidget_FocusOutEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
bool QGraphicsProxyWidget_FocusNextPrevChild(QGraphicsProxyWidget* self, bool next);
QVariant* QGraphicsProxyWidget_InputMethodQuery(const QGraphicsProxyWidget* self, int query);
void QGraphicsProxyWidget_InputMethodEvent(QGraphicsProxyWidget* self, QInputMethodEvent* event);
QSizeF* QGraphicsProxyWidget_SizeHint(const QGraphicsProxyWidget* self, int which, const QSizeF* constraint);
void QGraphicsProxyWidget_ResizeEvent(QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event);
libqt_string QGraphicsProxyWidget_Tr2(const char* s, const char* c);
libqt_string QGraphicsProxyWidget_Tr3(const char* s, const char* c, int n);
void QGraphicsProxyWidget_OnSetGeometry(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseSetGeometry(QGraphicsProxyWidget* self, const QRectF* rect);
void QGraphicsProxyWidget_OnPaint(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBasePaint(QGraphicsProxyWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsProxyWidget_OnType(const QGraphicsProxyWidget* self, intptr_t slot);
int QGraphicsProxyWidget_QBaseType(const QGraphicsProxyWidget* self);
void QGraphicsProxyWidget_OnItemChange(QGraphicsProxyWidget* self, intptr_t slot);
QVariant* QGraphicsProxyWidget_QBaseItemChange(QGraphicsProxyWidget* self, int change, const QVariant* value);
void QGraphicsProxyWidget_OnEvent(QGraphicsProxyWidget* self, intptr_t slot);
bool QGraphicsProxyWidget_QBaseEvent(QGraphicsProxyWidget* self, QEvent* event);
void QGraphicsProxyWidget_OnEventFilter(QGraphicsProxyWidget* self, intptr_t slot);
bool QGraphicsProxyWidget_QBaseEventFilter(QGraphicsProxyWidget* self, QObject* object, QEvent* event);
void QGraphicsProxyWidget_OnShowEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseShowEvent(QGraphicsProxyWidget* self, QShowEvent* event);
void QGraphicsProxyWidget_OnHideEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseHideEvent(QGraphicsProxyWidget* self, QHideEvent* event);
void QGraphicsProxyWidget_OnContextMenuEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseContextMenuEvent(QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event);
void QGraphicsProxyWidget_OnDragEnterEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseDragEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsProxyWidget_OnDragLeaveEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseDragLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsProxyWidget_OnDragMoveEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseDragMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsProxyWidget_OnDropEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseDropEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsProxyWidget_OnHoverEnterEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseHoverEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsProxyWidget_OnHoverLeaveEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseHoverLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsProxyWidget_OnHoverMoveEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseHoverMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsProxyWidget_OnGrabMouseEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseGrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
void QGraphicsProxyWidget_OnUngrabMouseEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseUngrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
void QGraphicsProxyWidget_OnMouseMoveEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseMouseMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsProxyWidget_OnMousePressEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseMousePressEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsProxyWidget_OnMouseReleaseEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseMouseReleaseEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsProxyWidget_OnMouseDoubleClickEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseMouseDoubleClickEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsProxyWidget_OnWheelEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseWheelEvent(QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event);
void QGraphicsProxyWidget_OnKeyPressEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseKeyPressEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
void QGraphicsProxyWidget_OnKeyReleaseEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseKeyReleaseEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
void QGraphicsProxyWidget_OnFocusInEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseFocusInEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
void QGraphicsProxyWidget_OnFocusOutEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseFocusOutEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
void QGraphicsProxyWidget_OnFocusNextPrevChild(QGraphicsProxyWidget* self, intptr_t slot);
bool QGraphicsProxyWidget_QBaseFocusNextPrevChild(QGraphicsProxyWidget* self, bool next);
void QGraphicsProxyWidget_OnInputMethodQuery(const QGraphicsProxyWidget* self, intptr_t slot);
QVariant* QGraphicsProxyWidget_QBaseInputMethodQuery(const QGraphicsProxyWidget* self, int query);
void QGraphicsProxyWidget_OnInputMethodEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseInputMethodEvent(QGraphicsProxyWidget* self, QInputMethodEvent* event);
void QGraphicsProxyWidget_OnSizeHint(const QGraphicsProxyWidget* self, intptr_t slot);
QSizeF* QGraphicsProxyWidget_QBaseSizeHint(const QGraphicsProxyWidget* self, int which, const QSizeF* constraint);
void QGraphicsProxyWidget_OnResizeEvent(QGraphicsProxyWidget* self, intptr_t slot);
void QGraphicsProxyWidget_QBaseResizeEvent(QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event);
QGraphicsProxyWidget* QGraphicsProxyWidget_NewProxyWidget(QGraphicsProxyWidget* self, const QWidget* param1);
void QGraphicsProxyWidget_OnNewProxyWidget(QGraphicsProxyWidget* self, intptr_t slot);
QGraphicsProxyWidget* QGraphicsProxyWidget_QBaseNewProxyWidget(QGraphicsProxyWidget* self, const QWidget* param1);
void QGraphicsProxyWidget_Delete(QGraphicsProxyWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
