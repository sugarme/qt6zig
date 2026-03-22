#pragma once
#ifndef QMENU_H_C_LIB
#define QMENU_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QKeyEvent QKeyEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QMenu QMenu;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QStyleOptionMenuItem QStyleOptionMenuItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QMenu* QMenu_new(QWidget* parent);
QMenu* QMenu_new2();
QMenu* QMenu_new3(const libqt_string title);
QMenu* QMenu_new4(const libqt_string title, QWidget* parent);
libqt_string QMenu_Tr(const char* s);
QAction* QMenu_AddAction(QMenu* self, const libqt_string text, const QObject* receiver, const char* member, const QKeySequence* shortcut);
QAction* QMenu_AddAction2(QMenu* self, const QIcon* icon, const libqt_string text, const QObject* receiver, const char* member, const QKeySequence* shortcut);
QAction* QMenu_AddMenu(QMenu* self, QMenu* menu);
QMenu* QMenu_AddMenu2(QMenu* self, const libqt_string title);
QMenu* QMenu_AddMenu3(QMenu* self, const QIcon* icon, const libqt_string title);
QAction* QMenu_AddSeparator(QMenu* self);
QAction* QMenu_AddSection(QMenu* self, const libqt_string text);
QAction* QMenu_AddSection2(QMenu* self, const QIcon* icon, const libqt_string text);
QAction* QMenu_InsertMenu(QMenu* self, QAction* before, QMenu* menu);
QAction* QMenu_InsertSeparator(QMenu* self, QAction* before);
QAction* QMenu_InsertSection(QMenu* self, QAction* before, const libqt_string text);
QAction* QMenu_InsertSection2(QMenu* self, QAction* before, const QIcon* icon, const libqt_string text);
bool QMenu_IsEmpty(const QMenu* self);
void QMenu_Clear(QMenu* self);
void QMenu_SetTearOffEnabled(QMenu* self, bool tearOffEnabled);
bool QMenu_IsTearOffEnabled(const QMenu* self);
bool QMenu_IsTearOffMenuVisible(const QMenu* self);
void QMenu_ShowTearOffMenu(QMenu* self);
void QMenu_ShowTearOffMenu2(QMenu* self, const QPoint* pos);
void QMenu_HideTearOffMenu(QMenu* self);
void QMenu_SetDefaultAction(QMenu* self, QAction* defaultAction);
QAction* QMenu_DefaultAction(const QMenu* self);
void QMenu_SetActiveAction(QMenu* self, QAction* act);
QAction* QMenu_ActiveAction(const QMenu* self);
void QMenu_Popup(QMenu* self, const QPoint* pos);
QAction* QMenu_Exec(QMenu* self);
QAction* QMenu_Exec2(QMenu* self, const QPoint* pos);
QAction* QMenu_Exec3(const libqt_list actions, const QPoint* pos);
QSize* QMenu_SizeHint(const QMenu* self);
QRect* QMenu_ActionGeometry(const QMenu* self, QAction* param1);
QAction* QMenu_ActionAt(const QMenu* self, const QPoint* param1);
QAction* QMenu_MenuAction(const QMenu* self);
QMenu* QMenu_MenuInAction(const QAction* action);
libqt_string QMenu_Title(const QMenu* self);
void QMenu_SetTitle(QMenu* self, const libqt_string title);
QIcon* QMenu_Icon(const QMenu* self);
void QMenu_SetIcon(QMenu* self, const QIcon* icon);
void QMenu_SetNoReplayFor(QMenu* self, QWidget* widget);
bool QMenu_SeparatorsCollapsible(const QMenu* self);
void QMenu_SetSeparatorsCollapsible(QMenu* self, bool collapse);
bool QMenu_ToolTipsVisible(const QMenu* self);
void QMenu_SetToolTipsVisible(QMenu* self, bool visible);
void QMenu_AboutToShow(QMenu* self);
void QMenu_Connect_AboutToShow(QMenu* self, intptr_t slot);
void QMenu_AboutToHide(QMenu* self);
void QMenu_Connect_AboutToHide(QMenu* self, intptr_t slot);
void QMenu_Triggered(QMenu* self, QAction* action);
void QMenu_Connect_Triggered(QMenu* self, intptr_t slot);
void QMenu_Hovered(QMenu* self, QAction* action);
void QMenu_Connect_Hovered(QMenu* self, intptr_t slot);
void QMenu_ChangeEvent(QMenu* self, QEvent* param1);
void QMenu_KeyPressEvent(QMenu* self, QKeyEvent* param1);
void QMenu_MouseReleaseEvent(QMenu* self, QMouseEvent* param1);
void QMenu_MousePressEvent(QMenu* self, QMouseEvent* param1);
void QMenu_MouseMoveEvent(QMenu* self, QMouseEvent* param1);
void QMenu_WheelEvent(QMenu* self, QWheelEvent* param1);
void QMenu_EnterEvent(QMenu* self, QEnterEvent* param1);
void QMenu_LeaveEvent(QMenu* self, QEvent* param1);
void QMenu_HideEvent(QMenu* self, QHideEvent* param1);
void QMenu_PaintEvent(QMenu* self, QPaintEvent* param1);
void QMenu_ActionEvent(QMenu* self, QActionEvent* param1);
void QMenu_TimerEvent(QMenu* self, QTimerEvent* param1);
bool QMenu_Event(QMenu* self, QEvent* param1);
bool QMenu_FocusNextPrevChild(QMenu* self, bool next);
void QMenu_InitStyleOption(const QMenu* self, QStyleOptionMenuItem* option, const QAction* action);
libqt_string QMenu_Tr2(const char* s, const char* c);
libqt_string QMenu_Tr3(const char* s, const char* c, int n);
void QMenu_Popup2(QMenu* self, const QPoint* pos, QAction* at);
QAction* QMenu_Exec22(QMenu* self, const QPoint* pos, QAction* at);
QAction* QMenu_Exec32(const libqt_list actions, const QPoint* pos, QAction* at);
QAction* QMenu_Exec4(const libqt_list actions, const QPoint* pos, QAction* at, QWidget* parent);
void QMenu_OnSizeHint(const QMenu* self, intptr_t slot);
QSize* QMenu_QBaseSizeHint(const QMenu* self);
void QMenu_OnChangeEvent(QMenu* self, intptr_t slot);
void QMenu_QBaseChangeEvent(QMenu* self, QEvent* param1);
void QMenu_OnKeyPressEvent(QMenu* self, intptr_t slot);
void QMenu_QBaseKeyPressEvent(QMenu* self, QKeyEvent* param1);
void QMenu_OnMouseReleaseEvent(QMenu* self, intptr_t slot);
void QMenu_QBaseMouseReleaseEvent(QMenu* self, QMouseEvent* param1);
void QMenu_OnMousePressEvent(QMenu* self, intptr_t slot);
void QMenu_QBaseMousePressEvent(QMenu* self, QMouseEvent* param1);
void QMenu_OnMouseMoveEvent(QMenu* self, intptr_t slot);
void QMenu_QBaseMouseMoveEvent(QMenu* self, QMouseEvent* param1);
void QMenu_OnWheelEvent(QMenu* self, intptr_t slot);
void QMenu_QBaseWheelEvent(QMenu* self, QWheelEvent* param1);
void QMenu_OnEnterEvent(QMenu* self, intptr_t slot);
void QMenu_QBaseEnterEvent(QMenu* self, QEnterEvent* param1);
void QMenu_OnLeaveEvent(QMenu* self, intptr_t slot);
void QMenu_QBaseLeaveEvent(QMenu* self, QEvent* param1);
void QMenu_OnHideEvent(QMenu* self, intptr_t slot);
void QMenu_QBaseHideEvent(QMenu* self, QHideEvent* param1);
void QMenu_OnPaintEvent(QMenu* self, intptr_t slot);
void QMenu_QBasePaintEvent(QMenu* self, QPaintEvent* param1);
void QMenu_OnActionEvent(QMenu* self, intptr_t slot);
void QMenu_QBaseActionEvent(QMenu* self, QActionEvent* param1);
void QMenu_OnTimerEvent(QMenu* self, intptr_t slot);
void QMenu_QBaseTimerEvent(QMenu* self, QTimerEvent* param1);
void QMenu_OnEvent(QMenu* self, intptr_t slot);
bool QMenu_QBaseEvent(QMenu* self, QEvent* param1);
void QMenu_OnFocusNextPrevChild(QMenu* self, intptr_t slot);
bool QMenu_QBaseFocusNextPrevChild(QMenu* self, bool next);
void QMenu_OnInitStyleOption(const QMenu* self, intptr_t slot);
void QMenu_QBaseInitStyleOption(const QMenu* self, QStyleOptionMenuItem* option, const QAction* action);
int QMenu_ColumnCount(const QMenu* self);
void QMenu_OnColumnCount(const QMenu* self, intptr_t slot);
int QMenu_QBaseColumnCount(const QMenu* self);
void QMenu_Delete(QMenu* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
