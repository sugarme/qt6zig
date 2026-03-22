#pragma once
#ifndef QGRAPHICSVIEW_H_C_LIB
#define QGRAPHICSVIEW_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QBrush QBrush;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsScene QGraphicsScene;
typedef struct QGraphicsView QGraphicsView;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMouseEvent QMouseEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QGraphicsView* QGraphicsView_new(QWidget* parent);
QGraphicsView* QGraphicsView_new2();
QGraphicsView* QGraphicsView_new3(QGraphicsScene* scene);
QGraphicsView* QGraphicsView_new4(QGraphicsScene* scene, QWidget* parent);
libqt_string QGraphicsView_Tr(const char* s);
QSize* QGraphicsView_SizeHint(const QGraphicsView* self);
int QGraphicsView_RenderHints(const QGraphicsView* self);
void QGraphicsView_SetRenderHint(QGraphicsView* self, int hint);
void QGraphicsView_SetRenderHints(QGraphicsView* self, int hints);
int QGraphicsView_Alignment(const QGraphicsView* self);
void QGraphicsView_SetAlignment(QGraphicsView* self, int alignment);
int QGraphicsView_TransformationAnchor(const QGraphicsView* self);
void QGraphicsView_SetTransformationAnchor(QGraphicsView* self, int anchor);
int QGraphicsView_ResizeAnchor(const QGraphicsView* self);
void QGraphicsView_SetResizeAnchor(QGraphicsView* self, int anchor);
int QGraphicsView_ViewportUpdateMode(const QGraphicsView* self);
void QGraphicsView_SetViewportUpdateMode(QGraphicsView* self, int mode);
int QGraphicsView_OptimizationFlags(const QGraphicsView* self);
void QGraphicsView_SetOptimizationFlag(QGraphicsView* self, int flag);
void QGraphicsView_SetOptimizationFlags(QGraphicsView* self, int flags);
int QGraphicsView_DragMode(const QGraphicsView* self);
void QGraphicsView_SetDragMode(QGraphicsView* self, int mode);
int QGraphicsView_RubberBandSelectionMode(const QGraphicsView* self);
void QGraphicsView_SetRubberBandSelectionMode(QGraphicsView* self, int mode);
QRect* QGraphicsView_RubberBandRect(const QGraphicsView* self);
int QGraphicsView_CacheMode(const QGraphicsView* self);
void QGraphicsView_SetCacheMode(QGraphicsView* self, int mode);
void QGraphicsView_ResetCachedContent(QGraphicsView* self);
bool QGraphicsView_IsInteractive(const QGraphicsView* self);
void QGraphicsView_SetInteractive(QGraphicsView* self, bool allowed);
QGraphicsScene* QGraphicsView_Scene(const QGraphicsView* self);
void QGraphicsView_SetScene(QGraphicsView* self, QGraphicsScene* scene);
QRectF* QGraphicsView_SceneRect(const QGraphicsView* self);
void QGraphicsView_SetSceneRect(QGraphicsView* self, const QRectF* rect);
void QGraphicsView_SetSceneRect2(QGraphicsView* self, double x, double y, double w, double h);
QTransform* QGraphicsView_Transform(const QGraphicsView* self);
QTransform* QGraphicsView_ViewportTransform(const QGraphicsView* self);
bool QGraphicsView_IsTransformed(const QGraphicsView* self);
void QGraphicsView_SetTransform(QGraphicsView* self, const QTransform* matrix);
void QGraphicsView_ResetTransform(QGraphicsView* self);
void QGraphicsView_Rotate(QGraphicsView* self, double angle);
void QGraphicsView_Scale(QGraphicsView* self, double sx, double sy);
void QGraphicsView_Shear(QGraphicsView* self, double sh, double sv);
void QGraphicsView_Translate(QGraphicsView* self, double dx, double dy);
void QGraphicsView_CenterOn(QGraphicsView* self, const QPointF* pos);
void QGraphicsView_CenterOn2(QGraphicsView* self, double x, double y);
void QGraphicsView_CenterOn3(QGraphicsView* self, const QGraphicsItem* item);
void QGraphicsView_EnsureVisible(QGraphicsView* self, const QRectF* rect);
void QGraphicsView_EnsureVisible2(QGraphicsView* self, double x, double y, double w, double h);
void QGraphicsView_EnsureVisible3(QGraphicsView* self, const QGraphicsItem* item);
void QGraphicsView_FitInView(QGraphicsView* self, const QRectF* rect);
void QGraphicsView_FitInView2(QGraphicsView* self, double x, double y, double w, double h);
void QGraphicsView_FitInView3(QGraphicsView* self, const QGraphicsItem* item);
void QGraphicsView_Render(QGraphicsView* self, QPainter* painter);
libqt_list QGraphicsView_Items(const QGraphicsView* self);
libqt_list QGraphicsView_Items2(const QGraphicsView* self, const QPoint* pos);
libqt_list QGraphicsView_Items3(const QGraphicsView* self, int x, int y);
libqt_list QGraphicsView_Items4(const QGraphicsView* self, const QRect* rect);
libqt_list QGraphicsView_Items5(const QGraphicsView* self, int x, int y, int w, int h);
libqt_list QGraphicsView_Items6(const QGraphicsView* self, const QPolygon* polygon);
libqt_list QGraphicsView_Items7(const QGraphicsView* self, const QPainterPath* path);
QGraphicsItem* QGraphicsView_ItemAt(const QGraphicsView* self, const QPoint* pos);
QGraphicsItem* QGraphicsView_ItemAt2(const QGraphicsView* self, int x, int y);
QPointF* QGraphicsView_MapToScene(const QGraphicsView* self, const QPoint* point);
QPolygonF* QGraphicsView_MapToScene2(const QGraphicsView* self, const QRect* rect);
QPolygonF* QGraphicsView_MapToScene3(const QGraphicsView* self, const QPolygon* polygon);
QPainterPath* QGraphicsView_MapToScene4(const QGraphicsView* self, const QPainterPath* path);
QPoint* QGraphicsView_MapFromScene(const QGraphicsView* self, const QPointF* point);
QPolygon* QGraphicsView_MapFromScene2(const QGraphicsView* self, const QRectF* rect);
QPolygon* QGraphicsView_MapFromScene3(const QGraphicsView* self, const QPolygonF* polygon);
QPainterPath* QGraphicsView_MapFromScene4(const QGraphicsView* self, const QPainterPath* path);
QPointF* QGraphicsView_MapToScene5(const QGraphicsView* self, int x, int y);
QPolygonF* QGraphicsView_MapToScene6(const QGraphicsView* self, int x, int y, int w, int h);
QPoint* QGraphicsView_MapFromScene5(const QGraphicsView* self, double x, double y);
QPolygon* QGraphicsView_MapFromScene6(const QGraphicsView* self, double x, double y, double w, double h);
QVariant* QGraphicsView_InputMethodQuery(const QGraphicsView* self, int query);
QBrush* QGraphicsView_BackgroundBrush(const QGraphicsView* self);
void QGraphicsView_SetBackgroundBrush(QGraphicsView* self, const QBrush* brush);
QBrush* QGraphicsView_ForegroundBrush(const QGraphicsView* self);
void QGraphicsView_SetForegroundBrush(QGraphicsView* self, const QBrush* brush);
void QGraphicsView_UpdateScene(QGraphicsView* self, const libqt_list rects);
void QGraphicsView_InvalidateScene(QGraphicsView* self);
void QGraphicsView_UpdateSceneRect(QGraphicsView* self, const QRectF* rect);
void QGraphicsView_RubberBandChanged(QGraphicsView* self, QRect* viewportRect, QPointF* fromScenePoint, QPointF* toScenePoint);
void QGraphicsView_Connect_RubberBandChanged(QGraphicsView* self, intptr_t slot);
void QGraphicsView_SetupViewport(QGraphicsView* self, QWidget* widget);
bool QGraphicsView_Event(QGraphicsView* self, QEvent* event);
bool QGraphicsView_ViewportEvent(QGraphicsView* self, QEvent* event);
void QGraphicsView_ContextMenuEvent(QGraphicsView* self, QContextMenuEvent* event);
void QGraphicsView_DragEnterEvent(QGraphicsView* self, QDragEnterEvent* event);
void QGraphicsView_DragLeaveEvent(QGraphicsView* self, QDragLeaveEvent* event);
void QGraphicsView_DragMoveEvent(QGraphicsView* self, QDragMoveEvent* event);
void QGraphicsView_DropEvent(QGraphicsView* self, QDropEvent* event);
void QGraphicsView_FocusInEvent(QGraphicsView* self, QFocusEvent* event);
bool QGraphicsView_FocusNextPrevChild(QGraphicsView* self, bool next);
void QGraphicsView_FocusOutEvent(QGraphicsView* self, QFocusEvent* event);
void QGraphicsView_KeyPressEvent(QGraphicsView* self, QKeyEvent* event);
void QGraphicsView_KeyReleaseEvent(QGraphicsView* self, QKeyEvent* event);
void QGraphicsView_MouseDoubleClickEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_MousePressEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_MouseMoveEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_MouseReleaseEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_WheelEvent(QGraphicsView* self, QWheelEvent* event);
void QGraphicsView_PaintEvent(QGraphicsView* self, QPaintEvent* event);
void QGraphicsView_ResizeEvent(QGraphicsView* self, QResizeEvent* event);
void QGraphicsView_ScrollContentsBy(QGraphicsView* self, int dx, int dy);
void QGraphicsView_ShowEvent(QGraphicsView* self, QShowEvent* event);
void QGraphicsView_InputMethodEvent(QGraphicsView* self, QInputMethodEvent* event);
void QGraphicsView_DrawBackground(QGraphicsView* self, QPainter* painter, const QRectF* rect);
void QGraphicsView_DrawForeground(QGraphicsView* self, QPainter* painter, const QRectF* rect);
void QGraphicsView_DrawItems(QGraphicsView* self, QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options);
libqt_string QGraphicsView_Tr2(const char* s, const char* c);
libqt_string QGraphicsView_Tr3(const char* s, const char* c, int n);
void QGraphicsView_SetRenderHint2(QGraphicsView* self, int hint, bool enabled);
void QGraphicsView_SetOptimizationFlag2(QGraphicsView* self, int flag, bool enabled);
void QGraphicsView_SetTransform2(QGraphicsView* self, const QTransform* matrix, bool combine);
void QGraphicsView_EnsureVisible22(QGraphicsView* self, const QRectF* rect, int xmargin);
void QGraphicsView_EnsureVisible32(QGraphicsView* self, const QRectF* rect, int xmargin, int ymargin);
void QGraphicsView_EnsureVisible5(QGraphicsView* self, double x, double y, double w, double h, int xmargin);
void QGraphicsView_EnsureVisible6(QGraphicsView* self, double x, double y, double w, double h, int xmargin, int ymargin);
void QGraphicsView_EnsureVisible23(QGraphicsView* self, const QGraphicsItem* item, int xmargin);
void QGraphicsView_EnsureVisible33(QGraphicsView* self, const QGraphicsItem* item, int xmargin, int ymargin);
void QGraphicsView_FitInView22(QGraphicsView* self, const QRectF* rect, int aspectRadioMode);
void QGraphicsView_FitInView5(QGraphicsView* self, double x, double y, double w, double h, int aspectRadioMode);
void QGraphicsView_FitInView23(QGraphicsView* self, const QGraphicsItem* item, int aspectRadioMode);
void QGraphicsView_Render2(QGraphicsView* self, QPainter* painter, const QRectF* target);
void QGraphicsView_Render3(QGraphicsView* self, QPainter* painter, const QRectF* target, const QRect* source);
void QGraphicsView_Render4(QGraphicsView* self, QPainter* painter, const QRectF* target, const QRect* source, int aspectRatioMode);
libqt_list QGraphicsView_Items22(const QGraphicsView* self, const QRect* rect, int mode);
libqt_list QGraphicsView_Items52(const QGraphicsView* self, int x, int y, int w, int h, int mode);
libqt_list QGraphicsView_Items23(const QGraphicsView* self, const QPolygon* polygon, int mode);
libqt_list QGraphicsView_Items24(const QGraphicsView* self, const QPainterPath* path, int mode);
void QGraphicsView_InvalidateScene1(QGraphicsView* self, const QRectF* rect);
void QGraphicsView_InvalidateScene2(QGraphicsView* self, const QRectF* rect, int layers);
void QGraphicsView_OnSizeHint(const QGraphicsView* self, intptr_t slot);
QSize* QGraphicsView_QBaseSizeHint(const QGraphicsView* self);
void QGraphicsView_OnInputMethodQuery(const QGraphicsView* self, intptr_t slot);
QVariant* QGraphicsView_QBaseInputMethodQuery(const QGraphicsView* self, int query);
void QGraphicsView_OnSetupViewport(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseSetupViewport(QGraphicsView* self, QWidget* widget);
void QGraphicsView_OnEvent(QGraphicsView* self, intptr_t slot);
bool QGraphicsView_QBaseEvent(QGraphicsView* self, QEvent* event);
void QGraphicsView_OnViewportEvent(QGraphicsView* self, intptr_t slot);
bool QGraphicsView_QBaseViewportEvent(QGraphicsView* self, QEvent* event);
void QGraphicsView_OnContextMenuEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseContextMenuEvent(QGraphicsView* self, QContextMenuEvent* event);
void QGraphicsView_OnDragEnterEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseDragEnterEvent(QGraphicsView* self, QDragEnterEvent* event);
void QGraphicsView_OnDragLeaveEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseDragLeaveEvent(QGraphicsView* self, QDragLeaveEvent* event);
void QGraphicsView_OnDragMoveEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseDragMoveEvent(QGraphicsView* self, QDragMoveEvent* event);
void QGraphicsView_OnDropEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseDropEvent(QGraphicsView* self, QDropEvent* event);
void QGraphicsView_OnFocusInEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseFocusInEvent(QGraphicsView* self, QFocusEvent* event);
void QGraphicsView_OnFocusNextPrevChild(QGraphicsView* self, intptr_t slot);
bool QGraphicsView_QBaseFocusNextPrevChild(QGraphicsView* self, bool next);
void QGraphicsView_OnFocusOutEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseFocusOutEvent(QGraphicsView* self, QFocusEvent* event);
void QGraphicsView_OnKeyPressEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseKeyPressEvent(QGraphicsView* self, QKeyEvent* event);
void QGraphicsView_OnKeyReleaseEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseKeyReleaseEvent(QGraphicsView* self, QKeyEvent* event);
void QGraphicsView_OnMouseDoubleClickEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseMouseDoubleClickEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_OnMousePressEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseMousePressEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_OnMouseMoveEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseMouseMoveEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_OnMouseReleaseEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseMouseReleaseEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_OnWheelEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseWheelEvent(QGraphicsView* self, QWheelEvent* event);
void QGraphicsView_OnPaintEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBasePaintEvent(QGraphicsView* self, QPaintEvent* event);
void QGraphicsView_OnResizeEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseResizeEvent(QGraphicsView* self, QResizeEvent* event);
void QGraphicsView_OnScrollContentsBy(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseScrollContentsBy(QGraphicsView* self, int dx, int dy);
void QGraphicsView_OnShowEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseShowEvent(QGraphicsView* self, QShowEvent* event);
void QGraphicsView_OnInputMethodEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseInputMethodEvent(QGraphicsView* self, QInputMethodEvent* event);
void QGraphicsView_OnDrawBackground(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseDrawBackground(QGraphicsView* self, QPainter* painter, const QRectF* rect);
void QGraphicsView_OnDrawForeground(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseDrawForeground(QGraphicsView* self, QPainter* painter, const QRectF* rect);
void QGraphicsView_OnDrawItems(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseDrawItems(QGraphicsView* self, QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options);
void QGraphicsView_Delete(QGraphicsView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
