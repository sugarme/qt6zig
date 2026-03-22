#pragma once
#ifndef QMDISUBWINDOW_H_C_LIB
#define QMDISUBWINDOW_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMdiArea QMdiArea;
typedef struct QMdiSubWindow QMdiSubWindow;
typedef struct QMenu QMenu;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintEvent QPaintEvent;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QMdiSubWindow* QMdiSubWindow_new(QWidget* parent);
QMdiSubWindow* QMdiSubWindow_new2();
QMdiSubWindow* QMdiSubWindow_new3(QWidget* parent, int flags);
libqt_string QMdiSubWindow_Tr(const char* s);
QSize* QMdiSubWindow_SizeHint(const QMdiSubWindow* self);
QSize* QMdiSubWindow_MinimumSizeHint(const QMdiSubWindow* self);
void QMdiSubWindow_SetWidget(QMdiSubWindow* self, QWidget* widget);
QWidget* QMdiSubWindow_Widget(const QMdiSubWindow* self);
QWidget* QMdiSubWindow_MaximizedButtonsWidget(const QMdiSubWindow* self);
QWidget* QMdiSubWindow_MaximizedSystemMenuIconWidget(const QMdiSubWindow* self);
bool QMdiSubWindow_IsShaded(const QMdiSubWindow* self);
void QMdiSubWindow_SetOption(QMdiSubWindow* self, int option);
bool QMdiSubWindow_TestOption(const QMdiSubWindow* self, int param1);
void QMdiSubWindow_SetKeyboardSingleStep(QMdiSubWindow* self, int step);
int QMdiSubWindow_KeyboardSingleStep(const QMdiSubWindow* self);
void QMdiSubWindow_SetKeyboardPageStep(QMdiSubWindow* self, int step);
int QMdiSubWindow_KeyboardPageStep(const QMdiSubWindow* self);
void QMdiSubWindow_SetSystemMenu(QMdiSubWindow* self, QMenu* systemMenu);
QMenu* QMdiSubWindow_SystemMenu(const QMdiSubWindow* self);
QMdiArea* QMdiSubWindow_MdiArea(const QMdiSubWindow* self);
void QMdiSubWindow_WindowStateChanged(QMdiSubWindow* self, int oldState, int newState);
void QMdiSubWindow_Connect_WindowStateChanged(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_AboutToActivate(QMdiSubWindow* self);
void QMdiSubWindow_Connect_AboutToActivate(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_ShowSystemMenu(QMdiSubWindow* self);
void QMdiSubWindow_ShowShaded(QMdiSubWindow* self);
bool QMdiSubWindow_EventFilter(QMdiSubWindow* self, QObject* object, QEvent* event);
bool QMdiSubWindow_Event(QMdiSubWindow* self, QEvent* event);
void QMdiSubWindow_ShowEvent(QMdiSubWindow* self, QShowEvent* showEvent);
void QMdiSubWindow_HideEvent(QMdiSubWindow* self, QHideEvent* hideEvent);
void QMdiSubWindow_ChangeEvent(QMdiSubWindow* self, QEvent* changeEvent);
void QMdiSubWindow_CloseEvent(QMdiSubWindow* self, QCloseEvent* closeEvent);
void QMdiSubWindow_LeaveEvent(QMdiSubWindow* self, QEvent* leaveEvent);
void QMdiSubWindow_ResizeEvent(QMdiSubWindow* self, QResizeEvent* resizeEvent);
void QMdiSubWindow_TimerEvent(QMdiSubWindow* self, QTimerEvent* timerEvent);
void QMdiSubWindow_MoveEvent(QMdiSubWindow* self, QMoveEvent* moveEvent);
void QMdiSubWindow_PaintEvent(QMdiSubWindow* self, QPaintEvent* paintEvent);
void QMdiSubWindow_MousePressEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_MouseDoubleClickEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_MouseReleaseEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_MouseMoveEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_KeyPressEvent(QMdiSubWindow* self, QKeyEvent* keyEvent);
void QMdiSubWindow_ContextMenuEvent(QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent);
void QMdiSubWindow_FocusInEvent(QMdiSubWindow* self, QFocusEvent* focusInEvent);
void QMdiSubWindow_FocusOutEvent(QMdiSubWindow* self, QFocusEvent* focusOutEvent);
void QMdiSubWindow_ChildEvent(QMdiSubWindow* self, QChildEvent* childEvent);
libqt_string QMdiSubWindow_Tr2(const char* s, const char* c);
libqt_string QMdiSubWindow_Tr3(const char* s, const char* c, int n);
void QMdiSubWindow_SetOption2(QMdiSubWindow* self, int option, bool on);
void QMdiSubWindow_OnSizeHint(const QMdiSubWindow* self, intptr_t slot);
QSize* QMdiSubWindow_QBaseSizeHint(const QMdiSubWindow* self);
void QMdiSubWindow_OnMinimumSizeHint(const QMdiSubWindow* self, intptr_t slot);
QSize* QMdiSubWindow_QBaseMinimumSizeHint(const QMdiSubWindow* self);
void QMdiSubWindow_OnEventFilter(QMdiSubWindow* self, intptr_t slot);
bool QMdiSubWindow_QBaseEventFilter(QMdiSubWindow* self, QObject* object, QEvent* event);
void QMdiSubWindow_OnEvent(QMdiSubWindow* self, intptr_t slot);
bool QMdiSubWindow_QBaseEvent(QMdiSubWindow* self, QEvent* event);
void QMdiSubWindow_OnShowEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseShowEvent(QMdiSubWindow* self, QShowEvent* showEvent);
void QMdiSubWindow_OnHideEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseHideEvent(QMdiSubWindow* self, QHideEvent* hideEvent);
void QMdiSubWindow_OnChangeEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseChangeEvent(QMdiSubWindow* self, QEvent* changeEvent);
void QMdiSubWindow_OnCloseEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseCloseEvent(QMdiSubWindow* self, QCloseEvent* closeEvent);
void QMdiSubWindow_OnLeaveEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseLeaveEvent(QMdiSubWindow* self, QEvent* leaveEvent);
void QMdiSubWindow_OnResizeEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseResizeEvent(QMdiSubWindow* self, QResizeEvent* resizeEvent);
void QMdiSubWindow_OnTimerEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseTimerEvent(QMdiSubWindow* self, QTimerEvent* timerEvent);
void QMdiSubWindow_OnMoveEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseMoveEvent(QMdiSubWindow* self, QMoveEvent* moveEvent);
void QMdiSubWindow_OnPaintEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBasePaintEvent(QMdiSubWindow* self, QPaintEvent* paintEvent);
void QMdiSubWindow_OnMousePressEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseMousePressEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_OnMouseDoubleClickEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseMouseDoubleClickEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_OnMouseReleaseEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseMouseReleaseEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_OnMouseMoveEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseMouseMoveEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_OnKeyPressEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseKeyPressEvent(QMdiSubWindow* self, QKeyEvent* keyEvent);
void QMdiSubWindow_OnContextMenuEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseContextMenuEvent(QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent);
void QMdiSubWindow_OnFocusInEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseFocusInEvent(QMdiSubWindow* self, QFocusEvent* focusInEvent);
void QMdiSubWindow_OnFocusOutEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseFocusOutEvent(QMdiSubWindow* self, QFocusEvent* focusOutEvent);
void QMdiSubWindow_OnChildEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseChildEvent(QMdiSubWindow* self, QChildEvent* childEvent);
void QMdiSubWindow_Delete(QMdiSubWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
