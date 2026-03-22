#pragma once
#ifndef QGRAPHICSSCENE_H_C_LIB
#define QGRAPHICSSCENE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBrush QBrush;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QGraphicsEllipseItem QGraphicsEllipseItem;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsItemGroup QGraphicsItemGroup;
typedef struct QGraphicsLineItem QGraphicsLineItem;
typedef struct QGraphicsPathItem QGraphicsPathItem;
typedef struct QGraphicsPixmapItem QGraphicsPixmapItem;
typedef struct QGraphicsPolygonItem QGraphicsPolygonItem;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QGraphicsRectItem QGraphicsRectItem;
typedef struct QGraphicsScene QGraphicsScene;
typedef struct QGraphicsSceneContextMenuEvent QGraphicsSceneContextMenuEvent;
typedef struct QGraphicsSceneDragDropEvent QGraphicsSceneDragDropEvent;
typedef struct QGraphicsSceneHelpEvent QGraphicsSceneHelpEvent;
typedef struct QGraphicsSceneMouseEvent QGraphicsSceneMouseEvent;
typedef struct QGraphicsSceneWheelEvent QGraphicsSceneWheelEvent;
typedef struct QGraphicsSimpleTextItem QGraphicsSimpleTextItem;
typedef struct QGraphicsTextItem QGraphicsTextItem;
typedef struct QGraphicsWidget QGraphicsWidget;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QLineF QLineF;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPalette QPalette;
typedef struct QPen QPen;
typedef struct QPixmap QPixmap;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QStyle QStyle;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif








QGraphicsScene* QGraphicsScene_new();
QGraphicsScene* QGraphicsScene_new2(const QRectF* sceneRect);
QGraphicsScene* QGraphicsScene_new3(double x, double y, double width, double height);
QGraphicsScene* QGraphicsScene_new4(QObject* parent);
QGraphicsScene* QGraphicsScene_new5(const QRectF* sceneRect, QObject* parent);
QGraphicsScene* QGraphicsScene_new6(double x, double y, double width, double height, QObject* parent);
libqt_string QGraphicsScene_Tr(const char* s);
QRectF* QGraphicsScene_SceneRect(const QGraphicsScene* self);
double QGraphicsScene_Width(const QGraphicsScene* self);
double QGraphicsScene_Height(const QGraphicsScene* self);
void QGraphicsScene_SetSceneRect(QGraphicsScene* self, const QRectF* rect);
void QGraphicsScene_SetSceneRect2(QGraphicsScene* self, double x, double y, double w, double h);
void QGraphicsScene_Render(QGraphicsScene* self, QPainter* painter);
int QGraphicsScene_ItemIndexMethod(const QGraphicsScene* self);
void QGraphicsScene_SetItemIndexMethod(QGraphicsScene* self, int method);
int QGraphicsScene_BspTreeDepth(const QGraphicsScene* self);
void QGraphicsScene_SetBspTreeDepth(QGraphicsScene* self, int depth);
QRectF* QGraphicsScene_ItemsBoundingRect(const QGraphicsScene* self);
libqt_list QGraphicsScene_Items(const QGraphicsScene* self);
libqt_list QGraphicsScene_Items2(const QGraphicsScene* self, const QPointF* pos);
libqt_list QGraphicsScene_Items3(const QGraphicsScene* self, const QRectF* rect);
libqt_list QGraphicsScene_Items4(const QGraphicsScene* self, const QPolygonF* polygon);
libqt_list QGraphicsScene_Items5(const QGraphicsScene* self, const QPainterPath* path);
libqt_list QGraphicsScene_Items6(const QGraphicsScene* self, double x, double y, double w, double h, int mode, int order);
libqt_list QGraphicsScene_CollidingItems(const QGraphicsScene* self, const QGraphicsItem* item);
QGraphicsItem* QGraphicsScene_ItemAt(const QGraphicsScene* self, const QPointF* pos, const QTransform* deviceTransform);
QGraphicsItem* QGraphicsScene_ItemAt2(const QGraphicsScene* self, double x, double y, const QTransform* deviceTransform);
libqt_list QGraphicsScene_SelectedItems(const QGraphicsScene* self);
QPainterPath* QGraphicsScene_SelectionArea(const QGraphicsScene* self);
void QGraphicsScene_SetSelectionArea(QGraphicsScene* self, const QPainterPath* path, const QTransform* deviceTransform);
void QGraphicsScene_SetSelectionArea2(QGraphicsScene* self, const QPainterPath* path);
QGraphicsItemGroup* QGraphicsScene_CreateItemGroup(QGraphicsScene* self, const libqt_list items);
void QGraphicsScene_DestroyItemGroup(QGraphicsScene* self, QGraphicsItemGroup* group);
void QGraphicsScene_AddItem(QGraphicsScene* self, QGraphicsItem* item);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse(QGraphicsScene* self, const QRectF* rect);
QGraphicsLineItem* QGraphicsScene_AddLine(QGraphicsScene* self, const QLineF* line);
QGraphicsPathItem* QGraphicsScene_AddPath(QGraphicsScene* self, const QPainterPath* path);
QGraphicsPixmapItem* QGraphicsScene_AddPixmap(QGraphicsScene* self, const QPixmap* pixmap);
QGraphicsPolygonItem* QGraphicsScene_AddPolygon(QGraphicsScene* self, const QPolygonF* polygon);
QGraphicsRectItem* QGraphicsScene_AddRect(QGraphicsScene* self, const QRectF* rect);
QGraphicsTextItem* QGraphicsScene_AddText(QGraphicsScene* self, const libqt_string text);
QGraphicsSimpleTextItem* QGraphicsScene_AddSimpleText(QGraphicsScene* self, const libqt_string text);
QGraphicsProxyWidget* QGraphicsScene_AddWidget(QGraphicsScene* self, QWidget* widget);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse2(QGraphicsScene* self, double x, double y, double w, double h);
QGraphicsLineItem* QGraphicsScene_AddLine2(QGraphicsScene* self, double x1, double y1, double x2, double y2);
QGraphicsRectItem* QGraphicsScene_AddRect2(QGraphicsScene* self, double x, double y, double w, double h);
void QGraphicsScene_RemoveItem(QGraphicsScene* self, QGraphicsItem* item);
QGraphicsItem* QGraphicsScene_FocusItem(const QGraphicsScene* self);
void QGraphicsScene_SetFocusItem(QGraphicsScene* self, QGraphicsItem* item);
bool QGraphicsScene_HasFocus(const QGraphicsScene* self);
void QGraphicsScene_SetFocus(QGraphicsScene* self);
void QGraphicsScene_ClearFocus(QGraphicsScene* self);
void QGraphicsScene_SetStickyFocus(QGraphicsScene* self, bool enabled);
bool QGraphicsScene_StickyFocus(const QGraphicsScene* self);
QGraphicsItem* QGraphicsScene_MouseGrabberItem(const QGraphicsScene* self);
QBrush* QGraphicsScene_BackgroundBrush(const QGraphicsScene* self);
void QGraphicsScene_SetBackgroundBrush(QGraphicsScene* self, const QBrush* brush);
QBrush* QGraphicsScene_ForegroundBrush(const QGraphicsScene* self);
void QGraphicsScene_SetForegroundBrush(QGraphicsScene* self, const QBrush* brush);
QVariant* QGraphicsScene_InputMethodQuery(const QGraphicsScene* self, int query);
libqt_list QGraphicsScene_Views(const QGraphicsScene* self);
void QGraphicsScene_Update(QGraphicsScene* self, double x, double y, double w, double h);
void QGraphicsScene_Invalidate(QGraphicsScene* self, double x, double y, double w, double h);
QStyle* QGraphicsScene_Style(const QGraphicsScene* self);
void QGraphicsScene_SetStyle(QGraphicsScene* self, QStyle* style);
QFont* QGraphicsScene_Font(const QGraphicsScene* self);
void QGraphicsScene_SetFont(QGraphicsScene* self, const QFont* font);
QPalette* QGraphicsScene_Palette(const QGraphicsScene* self);
void QGraphicsScene_SetPalette(QGraphicsScene* self, const QPalette* palette);
bool QGraphicsScene_IsActive(const QGraphicsScene* self);
QGraphicsItem* QGraphicsScene_ActivePanel(const QGraphicsScene* self);
void QGraphicsScene_SetActivePanel(QGraphicsScene* self, QGraphicsItem* item);
QGraphicsWidget* QGraphicsScene_ActiveWindow(const QGraphicsScene* self);
void QGraphicsScene_SetActiveWindow(QGraphicsScene* self, QGraphicsWidget* widget);
bool QGraphicsScene_SendEvent(QGraphicsScene* self, QGraphicsItem* item, QEvent* event);
double QGraphicsScene_MinimumRenderSize(const QGraphicsScene* self);
void QGraphicsScene_SetMinimumRenderSize(QGraphicsScene* self, double minSize);
bool QGraphicsScene_FocusOnTouch(const QGraphicsScene* self);
void QGraphicsScene_SetFocusOnTouch(QGraphicsScene* self, bool enabled);
void QGraphicsScene_Update2(QGraphicsScene* self);
void QGraphicsScene_Invalidate2(QGraphicsScene* self);
void QGraphicsScene_Advance(QGraphicsScene* self);
void QGraphicsScene_ClearSelection(QGraphicsScene* self);
void QGraphicsScene_Clear(QGraphicsScene* self);
bool QGraphicsScene_Event(QGraphicsScene* self, QEvent* event);
bool QGraphicsScene_EventFilter(QGraphicsScene* self, QObject* watched, QEvent* event);
void QGraphicsScene_ContextMenuEvent(QGraphicsScene* self, QGraphicsSceneContextMenuEvent* event);
void QGraphicsScene_DragEnterEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_DragMoveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_DragLeaveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_DropEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_FocusInEvent(QGraphicsScene* self, QFocusEvent* event);
void QGraphicsScene_FocusOutEvent(QGraphicsScene* self, QFocusEvent* event);
void QGraphicsScene_HelpEvent(QGraphicsScene* self, QGraphicsSceneHelpEvent* event);
void QGraphicsScene_KeyPressEvent(QGraphicsScene* self, QKeyEvent* event);
void QGraphicsScene_KeyReleaseEvent(QGraphicsScene* self, QKeyEvent* event);
void QGraphicsScene_MousePressEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_MouseMoveEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_MouseReleaseEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_MouseDoubleClickEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_WheelEvent(QGraphicsScene* self, QGraphicsSceneWheelEvent* event);
void QGraphicsScene_InputMethodEvent(QGraphicsScene* self, QInputMethodEvent* event);
void QGraphicsScene_DrawBackground(QGraphicsScene* self, QPainter* painter, const QRectF* rect);
void QGraphicsScene_DrawForeground(QGraphicsScene* self, QPainter* painter, const QRectF* rect);
void QGraphicsScene_DrawItems(QGraphicsScene* self, QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options, QWidget* widget);
bool QGraphicsScene_FocusNextPrevChild(QGraphicsScene* self, bool next);
void QGraphicsScene_Changed(QGraphicsScene* self, const libqt_list region);
void QGraphicsScene_Connect_Changed(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_SceneRectChanged(QGraphicsScene* self, const QRectF* rect);
void QGraphicsScene_Connect_SceneRectChanged(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_SelectionChanged(QGraphicsScene* self);
void QGraphicsScene_Connect_SelectionChanged(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_FocusItemChanged(QGraphicsScene* self, QGraphicsItem* newFocus, QGraphicsItem* oldFocus, int reason);
void QGraphicsScene_Connect_FocusItemChanged(QGraphicsScene* self, intptr_t slot);
libqt_string QGraphicsScene_Tr2(const char* s, const char* c);
libqt_string QGraphicsScene_Tr3(const char* s, const char* c, int n);
void QGraphicsScene_Render2(QGraphicsScene* self, QPainter* painter, const QRectF* target);
void QGraphicsScene_Render3(QGraphicsScene* self, QPainter* painter, const QRectF* target, const QRectF* source);
void QGraphicsScene_Render4(QGraphicsScene* self, QPainter* painter, const QRectF* target, const QRectF* source, int aspectRatioMode);
libqt_list QGraphicsScene_Items1(const QGraphicsScene* self, int order);
libqt_list QGraphicsScene_Items22(const QGraphicsScene* self, const QPointF* pos, int mode);
libqt_list QGraphicsScene_Items32(const QGraphicsScene* self, const QPointF* pos, int mode, int order);
libqt_list QGraphicsScene_Items42(const QGraphicsScene* self, const QPointF* pos, int mode, int order, const QTransform* deviceTransform);
libqt_list QGraphicsScene_Items23(const QGraphicsScene* self, const QRectF* rect, int mode);
libqt_list QGraphicsScene_Items33(const QGraphicsScene* self, const QRectF* rect, int mode, int order);
libqt_list QGraphicsScene_Items43(const QGraphicsScene* self, const QRectF* rect, int mode, int order, const QTransform* deviceTransform);
libqt_list QGraphicsScene_Items24(const QGraphicsScene* self, const QPolygonF* polygon, int mode);
libqt_list QGraphicsScene_Items34(const QGraphicsScene* self, const QPolygonF* polygon, int mode, int order);
libqt_list QGraphicsScene_Items44(const QGraphicsScene* self, const QPolygonF* polygon, int mode, int order, const QTransform* deviceTransform);
libqt_list QGraphicsScene_Items25(const QGraphicsScene* self, const QPainterPath* path, int mode);
libqt_list QGraphicsScene_Items35(const QGraphicsScene* self, const QPainterPath* path, int mode, int order);
libqt_list QGraphicsScene_Items45(const QGraphicsScene* self, const QPainterPath* path, int mode, int order, const QTransform* deviceTransform);
libqt_list QGraphicsScene_Items7(const QGraphicsScene* self, double x, double y, double w, double h, int mode, int order, const QTransform* deviceTransform);
libqt_list QGraphicsScene_CollidingItems2(const QGraphicsScene* self, const QGraphicsItem* item, int mode);
void QGraphicsScene_SetSelectionArea22(QGraphicsScene* self, const QPainterPath* path, int selectionOperation);
void QGraphicsScene_SetSelectionArea3(QGraphicsScene* self, const QPainterPath* path, int selectionOperation, int mode);
void QGraphicsScene_SetSelectionArea4(QGraphicsScene* self, const QPainterPath* path, int selectionOperation, int mode, const QTransform* deviceTransform);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse22(QGraphicsScene* self, const QRectF* rect, const QPen* pen);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse3(QGraphicsScene* self, const QRectF* rect, const QPen* pen, const QBrush* brush);
QGraphicsLineItem* QGraphicsScene_AddLine22(QGraphicsScene* self, const QLineF* line, const QPen* pen);
QGraphicsPathItem* QGraphicsScene_AddPath2(QGraphicsScene* self, const QPainterPath* path, const QPen* pen);
QGraphicsPathItem* QGraphicsScene_AddPath3(QGraphicsScene* self, const QPainterPath* path, const QPen* pen, const QBrush* brush);
QGraphicsPolygonItem* QGraphicsScene_AddPolygon2(QGraphicsScene* self, const QPolygonF* polygon, const QPen* pen);
QGraphicsPolygonItem* QGraphicsScene_AddPolygon3(QGraphicsScene* self, const QPolygonF* polygon, const QPen* pen, const QBrush* brush);
QGraphicsRectItem* QGraphicsScene_AddRect22(QGraphicsScene* self, const QRectF* rect, const QPen* pen);
QGraphicsRectItem* QGraphicsScene_AddRect3(QGraphicsScene* self, const QRectF* rect, const QPen* pen, const QBrush* brush);
QGraphicsTextItem* QGraphicsScene_AddText2(QGraphicsScene* self, const libqt_string text, const QFont* font);
QGraphicsSimpleTextItem* QGraphicsScene_AddSimpleText2(QGraphicsScene* self, const libqt_string text, const QFont* font);
QGraphicsProxyWidget* QGraphicsScene_AddWidget2(QGraphicsScene* self, QWidget* widget, int wFlags);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse5(QGraphicsScene* self, double x, double y, double w, double h, const QPen* pen);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse6(QGraphicsScene* self, double x, double y, double w, double h, const QPen* pen, const QBrush* brush);
QGraphicsLineItem* QGraphicsScene_AddLine5(QGraphicsScene* self, double x1, double y1, double x2, double y2, const QPen* pen);
QGraphicsRectItem* QGraphicsScene_AddRect5(QGraphicsScene* self, double x, double y, double w, double h, const QPen* pen);
QGraphicsRectItem* QGraphicsScene_AddRect6(QGraphicsScene* self, double x, double y, double w, double h, const QPen* pen, const QBrush* brush);
void QGraphicsScene_SetFocusItem2(QGraphicsScene* self, QGraphicsItem* item, int focusReason);
void QGraphicsScene_SetFocus1(QGraphicsScene* self, int focusReason);
void QGraphicsScene_Invalidate5(QGraphicsScene* self, double x, double y, double w, double h, int layers);
void QGraphicsScene_Update1(QGraphicsScene* self, const QRectF* rect);
void QGraphicsScene_Invalidate1(QGraphicsScene* self, const QRectF* rect);
void QGraphicsScene_Invalidate22(QGraphicsScene* self, const QRectF* rect, int layers);
void QGraphicsScene_OnInputMethodQuery(const QGraphicsScene* self, intptr_t slot);
QVariant* QGraphicsScene_QBaseInputMethodQuery(const QGraphicsScene* self, int query);
void QGraphicsScene_OnEvent(QGraphicsScene* self, intptr_t slot);
bool QGraphicsScene_QBaseEvent(QGraphicsScene* self, QEvent* event);
void QGraphicsScene_OnEventFilter(QGraphicsScene* self, intptr_t slot);
bool QGraphicsScene_QBaseEventFilter(QGraphicsScene* self, QObject* watched, QEvent* event);
void QGraphicsScene_OnContextMenuEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseContextMenuEvent(QGraphicsScene* self, QGraphicsSceneContextMenuEvent* event);
void QGraphicsScene_OnDragEnterEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseDragEnterEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_OnDragMoveEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseDragMoveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_OnDragLeaveEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseDragLeaveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_OnDropEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseDropEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_OnFocusInEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseFocusInEvent(QGraphicsScene* self, QFocusEvent* event);
void QGraphicsScene_OnFocusOutEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseFocusOutEvent(QGraphicsScene* self, QFocusEvent* event);
void QGraphicsScene_OnHelpEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseHelpEvent(QGraphicsScene* self, QGraphicsSceneHelpEvent* event);
void QGraphicsScene_OnKeyPressEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseKeyPressEvent(QGraphicsScene* self, QKeyEvent* event);
void QGraphicsScene_OnKeyReleaseEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseKeyReleaseEvent(QGraphicsScene* self, QKeyEvent* event);
void QGraphicsScene_OnMousePressEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseMousePressEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_OnMouseMoveEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseMouseMoveEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_OnMouseReleaseEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseMouseReleaseEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_OnMouseDoubleClickEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseMouseDoubleClickEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_OnWheelEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseWheelEvent(QGraphicsScene* self, QGraphicsSceneWheelEvent* event);
void QGraphicsScene_OnInputMethodEvent(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseInputMethodEvent(QGraphicsScene* self, QInputMethodEvent* event);
void QGraphicsScene_OnDrawBackground(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseDrawBackground(QGraphicsScene* self, QPainter* painter, const QRectF* rect);
void QGraphicsScene_OnDrawForeground(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseDrawForeground(QGraphicsScene* self, QPainter* painter, const QRectF* rect);
void QGraphicsScene_OnDrawItems(QGraphicsScene* self, intptr_t slot);
void QGraphicsScene_QBaseDrawItems(QGraphicsScene* self, QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options, QWidget* widget);
void QGraphicsScene_OnFocusNextPrevChild(QGraphicsScene* self, intptr_t slot);
bool QGraphicsScene_QBaseFocusNextPrevChild(QGraphicsScene* self, bool next);
void QGraphicsScene_Delete(QGraphicsScene* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
