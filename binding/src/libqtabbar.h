#pragma once
#ifndef QTABBAR_H_C_LIB
#define QTABBAR_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMouseEvent QMouseEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionTab QStyleOptionTab;
typedef struct QTabBar QTabBar;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QTabBar* QTabBar_new(QWidget* parent);
QTabBar* QTabBar_new2();
libqt_string QTabBar_Tr(const char* s);
int QTabBar_Shape(const QTabBar* self);
void QTabBar_SetShape(QTabBar* self, int shape);
int QTabBar_AddTab(QTabBar* self, const libqt_string text);
int QTabBar_AddTab2(QTabBar* self, const QIcon* icon, const libqt_string text);
int QTabBar_InsertTab(QTabBar* self, int index, const libqt_string text);
int QTabBar_InsertTab2(QTabBar* self, int index, const QIcon* icon, const libqt_string text);
void QTabBar_RemoveTab(QTabBar* self, int index);
void QTabBar_MoveTab(QTabBar* self, int from, int to);
bool QTabBar_IsTabEnabled(const QTabBar* self, int index);
void QTabBar_SetTabEnabled(QTabBar* self, int index, bool enabled);
bool QTabBar_IsTabVisible(const QTabBar* self, int index);
void QTabBar_SetTabVisible(QTabBar* self, int index, bool visible);
libqt_string QTabBar_TabText(const QTabBar* self, int index);
void QTabBar_SetTabText(QTabBar* self, int index, const libqt_string text);
QColor* QTabBar_TabTextColor(const QTabBar* self, int index);
void QTabBar_SetTabTextColor(QTabBar* self, int index, const QColor* color);
QIcon* QTabBar_TabIcon(const QTabBar* self, int index);
void QTabBar_SetTabIcon(QTabBar* self, int index, const QIcon* icon);
int QTabBar_ElideMode(const QTabBar* self);
void QTabBar_SetElideMode(QTabBar* self, int mode);
void QTabBar_SetTabToolTip(QTabBar* self, int index, const libqt_string tip);
libqt_string QTabBar_TabToolTip(const QTabBar* self, int index);
void QTabBar_SetTabWhatsThis(QTabBar* self, int index, const libqt_string text);
libqt_string QTabBar_TabWhatsThis(const QTabBar* self, int index);
void QTabBar_SetTabData(QTabBar* self, int index, const QVariant* data);
QVariant* QTabBar_TabData(const QTabBar* self, int index);
QRect* QTabBar_TabRect(const QTabBar* self, int index);
int QTabBar_TabAt(const QTabBar* self, const QPoint* pos);
int QTabBar_CurrentIndex(const QTabBar* self);
int QTabBar_Count(const QTabBar* self);
QSize* QTabBar_SizeHint(const QTabBar* self);
QSize* QTabBar_MinimumSizeHint(const QTabBar* self);
void QTabBar_SetDrawBase(QTabBar* self, bool drawTheBase);
bool QTabBar_DrawBase(const QTabBar* self);
QSize* QTabBar_IconSize(const QTabBar* self);
void QTabBar_SetIconSize(QTabBar* self, const QSize* size);
bool QTabBar_UsesScrollButtons(const QTabBar* self);
void QTabBar_SetUsesScrollButtons(QTabBar* self, bool useButtons);
bool QTabBar_TabsClosable(const QTabBar* self);
void QTabBar_SetTabsClosable(QTabBar* self, bool closable);
void QTabBar_SetTabButton(QTabBar* self, int index, int position, QWidget* widget);
QWidget* QTabBar_TabButton(const QTabBar* self, int index, int position);
int QTabBar_SelectionBehaviorOnRemove(const QTabBar* self);
void QTabBar_SetSelectionBehaviorOnRemove(QTabBar* self, int behavior);
bool QTabBar_Expanding(const QTabBar* self);
void QTabBar_SetExpanding(QTabBar* self, bool enabled);
bool QTabBar_IsMovable(const QTabBar* self);
void QTabBar_SetMovable(QTabBar* self, bool movable);
bool QTabBar_DocumentMode(const QTabBar* self);
void QTabBar_SetDocumentMode(QTabBar* self, bool set);
bool QTabBar_AutoHide(const QTabBar* self);
void QTabBar_SetAutoHide(QTabBar* self, bool hide);
bool QTabBar_ChangeCurrentOnDrag(const QTabBar* self);
void QTabBar_SetChangeCurrentOnDrag(QTabBar* self, bool change);
libqt_string QTabBar_AccessibleTabName(const QTabBar* self, int index);
void QTabBar_SetAccessibleTabName(QTabBar* self, int index, const libqt_string name);
void QTabBar_SetCurrentIndex(QTabBar* self, int index);
void QTabBar_CurrentChanged(QTabBar* self, int index);
void QTabBar_Connect_CurrentChanged(QTabBar* self, intptr_t slot);
void QTabBar_TabCloseRequested(QTabBar* self, int index);
void QTabBar_Connect_TabCloseRequested(QTabBar* self, intptr_t slot);
void QTabBar_TabMoved(QTabBar* self, int from, int to);
void QTabBar_Connect_TabMoved(QTabBar* self, intptr_t slot);
void QTabBar_TabBarClicked(QTabBar* self, int index);
void QTabBar_Connect_TabBarClicked(QTabBar* self, intptr_t slot);
void QTabBar_TabBarDoubleClicked(QTabBar* self, int index);
void QTabBar_Connect_TabBarDoubleClicked(QTabBar* self, intptr_t slot);
QSize* QTabBar_TabSizeHint(const QTabBar* self, int index);
QSize* QTabBar_MinimumTabSizeHint(const QTabBar* self, int index);
void QTabBar_TabInserted(QTabBar* self, int index);
void QTabBar_TabRemoved(QTabBar* self, int index);
void QTabBar_TabLayoutChange(QTabBar* self);
bool QTabBar_Event(QTabBar* self, QEvent* param1);
void QTabBar_ResizeEvent(QTabBar* self, QResizeEvent* param1);
void QTabBar_ShowEvent(QTabBar* self, QShowEvent* param1);
void QTabBar_HideEvent(QTabBar* self, QHideEvent* param1);
void QTabBar_PaintEvent(QTabBar* self, QPaintEvent* param1);
void QTabBar_MousePressEvent(QTabBar* self, QMouseEvent* param1);
void QTabBar_MouseMoveEvent(QTabBar* self, QMouseEvent* param1);
void QTabBar_MouseReleaseEvent(QTabBar* self, QMouseEvent* param1);
void QTabBar_MouseDoubleClickEvent(QTabBar* self, QMouseEvent* param1);
void QTabBar_WheelEvent(QTabBar* self, QWheelEvent* event);
void QTabBar_KeyPressEvent(QTabBar* self, QKeyEvent* param1);
void QTabBar_ChangeEvent(QTabBar* self, QEvent* param1);
void QTabBar_TimerEvent(QTabBar* self, QTimerEvent* event);
void QTabBar_InitStyleOption(const QTabBar* self, QStyleOptionTab* option, int tabIndex);
libqt_string QTabBar_Tr2(const char* s, const char* c);
libqt_string QTabBar_Tr3(const char* s, const char* c, int n);
void QTabBar_OnSizeHint(const QTabBar* self, intptr_t slot);
QSize* QTabBar_QBaseSizeHint(const QTabBar* self);
void QTabBar_OnMinimumSizeHint(const QTabBar* self, intptr_t slot);
QSize* QTabBar_QBaseMinimumSizeHint(const QTabBar* self);
void QTabBar_OnTabSizeHint(const QTabBar* self, intptr_t slot);
QSize* QTabBar_QBaseTabSizeHint(const QTabBar* self, int index);
void QTabBar_OnMinimumTabSizeHint(const QTabBar* self, intptr_t slot);
QSize* QTabBar_QBaseMinimumTabSizeHint(const QTabBar* self, int index);
void QTabBar_OnTabInserted(QTabBar* self, intptr_t slot);
void QTabBar_QBaseTabInserted(QTabBar* self, int index);
void QTabBar_OnTabRemoved(QTabBar* self, intptr_t slot);
void QTabBar_QBaseTabRemoved(QTabBar* self, int index);
void QTabBar_OnTabLayoutChange(QTabBar* self, intptr_t slot);
void QTabBar_QBaseTabLayoutChange(QTabBar* self);
void QTabBar_OnEvent(QTabBar* self, intptr_t slot);
bool QTabBar_QBaseEvent(QTabBar* self, QEvent* param1);
void QTabBar_OnResizeEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseResizeEvent(QTabBar* self, QResizeEvent* param1);
void QTabBar_OnShowEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseShowEvent(QTabBar* self, QShowEvent* param1);
void QTabBar_OnHideEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseHideEvent(QTabBar* self, QHideEvent* param1);
void QTabBar_OnPaintEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBasePaintEvent(QTabBar* self, QPaintEvent* param1);
void QTabBar_OnMousePressEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseMousePressEvent(QTabBar* self, QMouseEvent* param1);
void QTabBar_OnMouseMoveEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseMouseMoveEvent(QTabBar* self, QMouseEvent* param1);
void QTabBar_OnMouseReleaseEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseMouseReleaseEvent(QTabBar* self, QMouseEvent* param1);
void QTabBar_OnMouseDoubleClickEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseMouseDoubleClickEvent(QTabBar* self, QMouseEvent* param1);
void QTabBar_OnWheelEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseWheelEvent(QTabBar* self, QWheelEvent* event);
void QTabBar_OnKeyPressEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseKeyPressEvent(QTabBar* self, QKeyEvent* param1);
void QTabBar_OnChangeEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseChangeEvent(QTabBar* self, QEvent* param1);
void QTabBar_OnTimerEvent(QTabBar* self, intptr_t slot);
void QTabBar_QBaseTimerEvent(QTabBar* self, QTimerEvent* event);
void QTabBar_OnInitStyleOption(const QTabBar* self, intptr_t slot);
void QTabBar_QBaseInitStyleOption(const QTabBar* self, QStyleOptionTab* option, int tabIndex);
void QTabBar_Delete(QTabBar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
