#pragma once
#ifndef QABSTRACTSCROLLAREA_H_C_LIB
#define QABSTRACTSCROLLAREA_H_C_LIB

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
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFrame QFrame;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMargins QMargins;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintEvent QPaintEvent;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScrollBar QScrollBar;
typedef struct QSize QSize;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAbstractScrollArea* QAbstractScrollArea_new(QWidget* parent);
QAbstractScrollArea* QAbstractScrollArea_new2();
libqt_string QAbstractScrollArea_Tr(const char* s);
int QAbstractScrollArea_VerticalScrollBarPolicy(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetVerticalScrollBarPolicy(QAbstractScrollArea* self, int verticalScrollBarPolicy);
QScrollBar* QAbstractScrollArea_VerticalScrollBar(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetVerticalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar);
int QAbstractScrollArea_HorizontalScrollBarPolicy(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetHorizontalScrollBarPolicy(QAbstractScrollArea* self, int horizontalScrollBarPolicy);
QScrollBar* QAbstractScrollArea_HorizontalScrollBar(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetHorizontalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar);
QWidget* QAbstractScrollArea_CornerWidget(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetCornerWidget(QAbstractScrollArea* self, QWidget* widget);
void QAbstractScrollArea_AddScrollBarWidget(QAbstractScrollArea* self, QWidget* widget, int alignment);
libqt_list QAbstractScrollArea_ScrollBarWidgets(QAbstractScrollArea* self, int alignment);
QWidget* QAbstractScrollArea_Viewport(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetViewport(QAbstractScrollArea* self, QWidget* widget);
QSize* QAbstractScrollArea_MaximumViewportSize(const QAbstractScrollArea* self);
QSize* QAbstractScrollArea_MinimumSizeHint(const QAbstractScrollArea* self);
QSize* QAbstractScrollArea_SizeHint(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetupViewport(QAbstractScrollArea* self, QWidget* viewport);
int QAbstractScrollArea_SizeAdjustPolicy(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetSizeAdjustPolicy(QAbstractScrollArea* self, int policy);
bool QAbstractScrollArea_EventFilter(QAbstractScrollArea* self, QObject* param1, QEvent* param2);
bool QAbstractScrollArea_Event(QAbstractScrollArea* self, QEvent* param1);
bool QAbstractScrollArea_ViewportEvent(QAbstractScrollArea* self, QEvent* param1);
void QAbstractScrollArea_ResizeEvent(QAbstractScrollArea* self, QResizeEvent* param1);
void QAbstractScrollArea_PaintEvent(QAbstractScrollArea* self, QPaintEvent* param1);
void QAbstractScrollArea_MousePressEvent(QAbstractScrollArea* self, QMouseEvent* param1);
void QAbstractScrollArea_MouseReleaseEvent(QAbstractScrollArea* self, QMouseEvent* param1);
void QAbstractScrollArea_MouseDoubleClickEvent(QAbstractScrollArea* self, QMouseEvent* param1);
void QAbstractScrollArea_MouseMoveEvent(QAbstractScrollArea* self, QMouseEvent* param1);
void QAbstractScrollArea_WheelEvent(QAbstractScrollArea* self, QWheelEvent* param1);
void QAbstractScrollArea_ContextMenuEvent(QAbstractScrollArea* self, QContextMenuEvent* param1);
void QAbstractScrollArea_DragEnterEvent(QAbstractScrollArea* self, QDragEnterEvent* param1);
void QAbstractScrollArea_DragMoveEvent(QAbstractScrollArea* self, QDragMoveEvent* param1);
void QAbstractScrollArea_DragLeaveEvent(QAbstractScrollArea* self, QDragLeaveEvent* param1);
void QAbstractScrollArea_DropEvent(QAbstractScrollArea* self, QDropEvent* param1);
void QAbstractScrollArea_KeyPressEvent(QAbstractScrollArea* self, QKeyEvent* param1);
void QAbstractScrollArea_ScrollContentsBy(QAbstractScrollArea* self, int dx, int dy);
QSize* QAbstractScrollArea_ViewportSizeHint(const QAbstractScrollArea* self);
libqt_string QAbstractScrollArea_Tr2(const char* s, const char* c);
libqt_string QAbstractScrollArea_Tr3(const char* s, const char* c, int n);
void QAbstractScrollArea_OnMinimumSizeHint(const QAbstractScrollArea* self, intptr_t slot);
QSize* QAbstractScrollArea_QBaseMinimumSizeHint(const QAbstractScrollArea* self);
void QAbstractScrollArea_OnSizeHint(const QAbstractScrollArea* self, intptr_t slot);
QSize* QAbstractScrollArea_QBaseSizeHint(const QAbstractScrollArea* self);
void QAbstractScrollArea_OnSetupViewport(QAbstractScrollArea* self, intptr_t slot);
void QAbstractScrollArea_QBaseSetupViewport(QAbstractScrollArea* self, QWidget* viewport);
void QAbstractScrollArea_OnEventFilter(QAbstractScrollArea* self, intptr_t slot);
bool QAbstractScrollArea_QBaseEventFilter(QAbstractScrollArea* self, QObject* param1, QEvent* param2);
void QAbstractScrollArea_OnEvent(QAbstractScrollArea* self, intptr_t slot);
bool QAbstractScrollArea_QBaseEvent(QAbstractScrollArea* self, QEvent* param1);
void QAbstractScrollArea_OnViewportEvent(QAbstractScrollArea* self, intptr_t slot);
bool QAbstractScrollArea_QBaseViewportEvent(QAbstractScrollArea* self, QEvent* param1);
void QAbstractScrollArea_OnResizeEvent(QAbstractScrollArea* self, intptr_t slot);
void QAbstractScrollArea_QBaseResizeEvent(QAbstractScrollArea* self, QResizeEvent* param1);
void QAbstractScrollArea_OnPaintEvent(QAbstractScrollArea* self, intptr_t slot);
void QAbstractScrollArea_QBasePaintEvent(QAbstractScrollArea* self, QPaintEvent* param1);
void QAbstractScrollArea_OnMousePressEvent(QAbstractScrollArea* self, intptr_t slot);
void QAbstractScrollArea_QBaseMousePressEvent(QAbstractScrollArea* self, QMouseEvent* param1);
void QAbstractScrollArea_OnMouseReleaseEvent(QAbstractScrollArea* self, intptr_t slot);
void QAbstractScrollArea_QBaseMouseReleaseEvent(QAbstractScrollArea* self, QMouseEvent* param1);
void QAbstractScrollArea_OnMouseDoubleClickEvent(QAbstractScrollArea* self, intptr_t slot);
void QAbstractScrollArea_QBaseMouseDoubleClickEvent(QAbstractScrollArea* self, QMouseEvent* param1);
void QAbstractScrollArea_OnMouseMoveEvent(QAbstractScrollArea* self, intptr_t slot);
void QAbstractScrollArea_QBaseMouseMoveEvent(QAbstractScrollArea* self, QMouseEvent* param1);
void QAbstractScrollArea_OnWheelEvent(QAbstractScrollArea* self, intptr_t slot);
void QAbstractScrollArea_QBaseWheelEvent(QAbstractScrollArea* self, QWheelEvent* param1);
void QAbstractScrollArea_OnContextMenuEvent(QAbstractScrollArea* self, intptr_t slot);
void QAbstractScrollArea_QBaseContextMenuEvent(QAbstractScrollArea* self, QContextMenuEvent* param1);
void QAbstractScrollArea_OnDragEnterEvent(QAbstractScrollArea* self, intptr_t slot);
void QAbstractScrollArea_QBaseDragEnterEvent(QAbstractScrollArea* self, QDragEnterEvent* param1);
void QAbstractScrollArea_OnDragMoveEvent(QAbstractScrollArea* self, intptr_t slot);
void QAbstractScrollArea_QBaseDragMoveEvent(QAbstractScrollArea* self, QDragMoveEvent* param1);
void QAbstractScrollArea_OnDragLeaveEvent(QAbstractScrollArea* self, intptr_t slot);
void QAbstractScrollArea_QBaseDragLeaveEvent(QAbstractScrollArea* self, QDragLeaveEvent* param1);
void QAbstractScrollArea_OnDropEvent(QAbstractScrollArea* self, intptr_t slot);
void QAbstractScrollArea_QBaseDropEvent(QAbstractScrollArea* self, QDropEvent* param1);
void QAbstractScrollArea_OnKeyPressEvent(QAbstractScrollArea* self, intptr_t slot);
void QAbstractScrollArea_QBaseKeyPressEvent(QAbstractScrollArea* self, QKeyEvent* param1);
void QAbstractScrollArea_OnScrollContentsBy(QAbstractScrollArea* self, intptr_t slot);
void QAbstractScrollArea_QBaseScrollContentsBy(QAbstractScrollArea* self, int dx, int dy);
void QAbstractScrollArea_OnViewportSizeHint(const QAbstractScrollArea* self, intptr_t slot);
QSize* QAbstractScrollArea_QBaseViewportSizeHint(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetViewportMargins(QAbstractScrollArea* self, int left, int top, int right, int bottom);
void QAbstractScrollArea_OnSetViewportMargins(QAbstractScrollArea* self, intptr_t slot);
void QAbstractScrollArea_QBaseSetViewportMargins(QAbstractScrollArea* self, int left, int top, int right, int bottom);
void QAbstractScrollArea_SetViewportMargins2(QAbstractScrollArea* self, const QMargins* margins);
void QAbstractScrollArea_OnSetViewportMargins2(QAbstractScrollArea* self, intptr_t slot);
void QAbstractScrollArea_QBaseSetViewportMargins2(QAbstractScrollArea* self, const QMargins* margins);
QMargins* QAbstractScrollArea_ViewportMargins(const QAbstractScrollArea* self);
void QAbstractScrollArea_OnViewportMargins(const QAbstractScrollArea* self, intptr_t slot);
QMargins* QAbstractScrollArea_QBaseViewportMargins(const QAbstractScrollArea* self);
void QAbstractScrollArea_Delete(QAbstractScrollArea* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
