#pragma once
#ifndef QTABWIDGET_H_C_LIB
#define QTABWIDGET_H_C_LIB

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
typedef struct QIcon QIcon;
typedef struct QKeyEvent QKeyEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionTabWidgetFrame QStyleOptionTabWidgetFrame;
typedef struct QTabBar QTabBar;
typedef struct QTabWidget QTabWidget;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QTabWidget* QTabWidget_new(QWidget* parent);
QTabWidget* QTabWidget_new2();
libqt_string QTabWidget_Tr(const char* s);
int QTabWidget_AddTab(QTabWidget* self, QWidget* widget, const libqt_string param2);
int QTabWidget_AddTab2(QTabWidget* self, QWidget* widget, const QIcon* icon, const libqt_string label);
int QTabWidget_InsertTab(QTabWidget* self, int index, QWidget* widget, const libqt_string param3);
int QTabWidget_InsertTab2(QTabWidget* self, int index, QWidget* widget, const QIcon* icon, const libqt_string label);
void QTabWidget_RemoveTab(QTabWidget* self, int index);
bool QTabWidget_IsTabEnabled(const QTabWidget* self, int index);
void QTabWidget_SetTabEnabled(QTabWidget* self, int index, bool enabled);
bool QTabWidget_IsTabVisible(const QTabWidget* self, int index);
void QTabWidget_SetTabVisible(QTabWidget* self, int index, bool visible);
libqt_string QTabWidget_TabText(const QTabWidget* self, int index);
void QTabWidget_SetTabText(QTabWidget* self, int index, const libqt_string text);
QIcon* QTabWidget_TabIcon(const QTabWidget* self, int index);
void QTabWidget_SetTabIcon(QTabWidget* self, int index, const QIcon* icon);
void QTabWidget_SetTabToolTip(QTabWidget* self, int index, const libqt_string tip);
libqt_string QTabWidget_TabToolTip(const QTabWidget* self, int index);
void QTabWidget_SetTabWhatsThis(QTabWidget* self, int index, const libqt_string text);
libqt_string QTabWidget_TabWhatsThis(const QTabWidget* self, int index);
int QTabWidget_CurrentIndex(const QTabWidget* self);
QWidget* QTabWidget_CurrentWidget(const QTabWidget* self);
QWidget* QTabWidget_Widget(const QTabWidget* self, int index);
int QTabWidget_IndexOf(const QTabWidget* self, const QWidget* widget);
int QTabWidget_Count(const QTabWidget* self);
int QTabWidget_TabPosition(const QTabWidget* self);
void QTabWidget_SetTabPosition(QTabWidget* self, int position);
bool QTabWidget_TabsClosable(const QTabWidget* self);
void QTabWidget_SetTabsClosable(QTabWidget* self, bool closeable);
bool QTabWidget_IsMovable(const QTabWidget* self);
void QTabWidget_SetMovable(QTabWidget* self, bool movable);
int QTabWidget_TabShape(const QTabWidget* self);
void QTabWidget_SetTabShape(QTabWidget* self, int s);
QSize* QTabWidget_SizeHint(const QTabWidget* self);
QSize* QTabWidget_MinimumSizeHint(const QTabWidget* self);
int QTabWidget_HeightForWidth(const QTabWidget* self, int width);
bool QTabWidget_HasHeightForWidth(const QTabWidget* self);
void QTabWidget_SetCornerWidget(QTabWidget* self, QWidget* w);
QWidget* QTabWidget_CornerWidget(const QTabWidget* self);
int QTabWidget_ElideMode(const QTabWidget* self);
void QTabWidget_SetElideMode(QTabWidget* self, int mode);
QSize* QTabWidget_IconSize(const QTabWidget* self);
void QTabWidget_SetIconSize(QTabWidget* self, const QSize* size);
bool QTabWidget_UsesScrollButtons(const QTabWidget* self);
void QTabWidget_SetUsesScrollButtons(QTabWidget* self, bool useButtons);
bool QTabWidget_DocumentMode(const QTabWidget* self);
void QTabWidget_SetDocumentMode(QTabWidget* self, bool set);
bool QTabWidget_TabBarAutoHide(const QTabWidget* self);
void QTabWidget_SetTabBarAutoHide(QTabWidget* self, bool enabled);
void QTabWidget_Clear(QTabWidget* self);
QTabBar* QTabWidget_TabBar(const QTabWidget* self);
void QTabWidget_SetCurrentIndex(QTabWidget* self, int index);
void QTabWidget_SetCurrentWidget(QTabWidget* self, QWidget* widget);
void QTabWidget_CurrentChanged(QTabWidget* self, int index);
void QTabWidget_Connect_CurrentChanged(QTabWidget* self, intptr_t slot);
void QTabWidget_TabCloseRequested(QTabWidget* self, int index);
void QTabWidget_Connect_TabCloseRequested(QTabWidget* self, intptr_t slot);
void QTabWidget_TabBarClicked(QTabWidget* self, int index);
void QTabWidget_Connect_TabBarClicked(QTabWidget* self, intptr_t slot);
void QTabWidget_TabBarDoubleClicked(QTabWidget* self, int index);
void QTabWidget_Connect_TabBarDoubleClicked(QTabWidget* self, intptr_t slot);
void QTabWidget_TabInserted(QTabWidget* self, int index);
void QTabWidget_TabRemoved(QTabWidget* self, int index);
void QTabWidget_ShowEvent(QTabWidget* self, QShowEvent* param1);
void QTabWidget_ResizeEvent(QTabWidget* self, QResizeEvent* param1);
void QTabWidget_KeyPressEvent(QTabWidget* self, QKeyEvent* param1);
void QTabWidget_PaintEvent(QTabWidget* self, QPaintEvent* param1);
void QTabWidget_ChangeEvent(QTabWidget* self, QEvent* param1);
bool QTabWidget_Event(QTabWidget* self, QEvent* param1);
void QTabWidget_InitStyleOption(const QTabWidget* self, QStyleOptionTabWidgetFrame* option);
libqt_string QTabWidget_Tr2(const char* s, const char* c);
libqt_string QTabWidget_Tr3(const char* s, const char* c, int n);
void QTabWidget_SetCornerWidget2(QTabWidget* self, QWidget* w, int corner);
QWidget* QTabWidget_CornerWidget1(const QTabWidget* self, int corner);
void QTabWidget_OnSizeHint(const QTabWidget* self, intptr_t slot);
QSize* QTabWidget_QBaseSizeHint(const QTabWidget* self);
void QTabWidget_OnMinimumSizeHint(const QTabWidget* self, intptr_t slot);
QSize* QTabWidget_QBaseMinimumSizeHint(const QTabWidget* self);
void QTabWidget_OnHeightForWidth(const QTabWidget* self, intptr_t slot);
int QTabWidget_QBaseHeightForWidth(const QTabWidget* self, int width);
void QTabWidget_OnHasHeightForWidth(const QTabWidget* self, intptr_t slot);
bool QTabWidget_QBaseHasHeightForWidth(const QTabWidget* self);
void QTabWidget_OnTabInserted(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseTabInserted(QTabWidget* self, int index);
void QTabWidget_OnTabRemoved(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseTabRemoved(QTabWidget* self, int index);
void QTabWidget_OnShowEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseShowEvent(QTabWidget* self, QShowEvent* param1);
void QTabWidget_OnResizeEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseResizeEvent(QTabWidget* self, QResizeEvent* param1);
void QTabWidget_OnKeyPressEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseKeyPressEvent(QTabWidget* self, QKeyEvent* param1);
void QTabWidget_OnPaintEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBasePaintEvent(QTabWidget* self, QPaintEvent* param1);
void QTabWidget_OnChangeEvent(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseChangeEvent(QTabWidget* self, QEvent* param1);
void QTabWidget_OnEvent(QTabWidget* self, intptr_t slot);
bool QTabWidget_QBaseEvent(QTabWidget* self, QEvent* param1);
void QTabWidget_OnInitStyleOption(const QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseInitStyleOption(const QTabWidget* self, QStyleOptionTabWidgetFrame* option);
void QTabWidget_SetTabBar(QTabWidget* self, QTabBar* tabBar);
void QTabWidget_OnSetTabBar(QTabWidget* self, intptr_t slot);
void QTabWidget_QBaseSetTabBar(QTabWidget* self, QTabBar* tabBar);
void QTabWidget_Delete(QTabWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
