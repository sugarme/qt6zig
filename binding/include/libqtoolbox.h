#pragma once
#ifndef QTOOLBOX_H_C_LIB
#define QTOOLBOX_H_C_LIB

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
typedef struct QFrame QFrame;
typedef struct QIcon QIcon;
typedef struct QShowEvent QShowEvent;
typedef struct QToolBox QToolBox;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QToolBox* QToolBox_new(QWidget* parent);
QToolBox* QToolBox_new2();
QToolBox* QToolBox_new3(QWidget* parent, int f);
libqt_string QToolBox_Tr(const char* s);
int QToolBox_AddItem(QToolBox* self, QWidget* widget, const libqt_string text);
int QToolBox_AddItem2(QToolBox* self, QWidget* widget, const QIcon* icon, const libqt_string text);
int QToolBox_InsertItem(QToolBox* self, int index, QWidget* widget, const libqt_string text);
int QToolBox_InsertItem2(QToolBox* self, int index, QWidget* widget, const QIcon* icon, const libqt_string text);
void QToolBox_RemoveItem(QToolBox* self, int index);
void QToolBox_SetItemEnabled(QToolBox* self, int index, bool enabled);
bool QToolBox_IsItemEnabled(const QToolBox* self, int index);
void QToolBox_SetItemText(QToolBox* self, int index, const libqt_string text);
libqt_string QToolBox_ItemText(const QToolBox* self, int index);
void QToolBox_SetItemIcon(QToolBox* self, int index, const QIcon* icon);
QIcon* QToolBox_ItemIcon(const QToolBox* self, int index);
void QToolBox_SetItemToolTip(QToolBox* self, int index, const libqt_string toolTip);
libqt_string QToolBox_ItemToolTip(const QToolBox* self, int index);
int QToolBox_CurrentIndex(const QToolBox* self);
QWidget* QToolBox_CurrentWidget(const QToolBox* self);
QWidget* QToolBox_Widget(const QToolBox* self, int index);
int QToolBox_IndexOf(const QToolBox* self, const QWidget* widget);
int QToolBox_Count(const QToolBox* self);
void QToolBox_SetCurrentIndex(QToolBox* self, int index);
void QToolBox_SetCurrentWidget(QToolBox* self, QWidget* widget);
void QToolBox_CurrentChanged(QToolBox* self, int index);
void QToolBox_Connect_CurrentChanged(QToolBox* self, intptr_t slot);
bool QToolBox_Event(QToolBox* self, QEvent* e);
void QToolBox_ItemInserted(QToolBox* self, int index);
void QToolBox_ItemRemoved(QToolBox* self, int index);
void QToolBox_ShowEvent(QToolBox* self, QShowEvent* e);
void QToolBox_ChangeEvent(QToolBox* self, QEvent* param1);
libqt_string QToolBox_Tr2(const char* s, const char* c);
libqt_string QToolBox_Tr3(const char* s, const char* c, int n);
void QToolBox_OnEvent(QToolBox* self, intptr_t slot);
bool QToolBox_QBaseEvent(QToolBox* self, QEvent* e);
void QToolBox_OnItemInserted(QToolBox* self, intptr_t slot);
void QToolBox_QBaseItemInserted(QToolBox* self, int index);
void QToolBox_OnItemRemoved(QToolBox* self, intptr_t slot);
void QToolBox_QBaseItemRemoved(QToolBox* self, int index);
void QToolBox_OnShowEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseShowEvent(QToolBox* self, QShowEvent* e);
void QToolBox_OnChangeEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseChangeEvent(QToolBox* self, QEvent* param1);
void QToolBox_Delete(QToolBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
