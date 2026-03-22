#pragma once
#ifndef QSTATUSBAR_H_C_LIB
#define QSTATUSBAR_H_C_LIB

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
typedef struct QPaintEvent QPaintEvent;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QStatusBar QStatusBar;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QStatusBar* QStatusBar_new(QWidget* parent);
QStatusBar* QStatusBar_new2();
libqt_string QStatusBar_Tr(const char* s);
void QStatusBar_AddWidget(QStatusBar* self, QWidget* widget);
int QStatusBar_InsertWidget(QStatusBar* self, int index, QWidget* widget);
void QStatusBar_AddPermanentWidget(QStatusBar* self, QWidget* widget);
int QStatusBar_InsertPermanentWidget(QStatusBar* self, int index, QWidget* widget);
void QStatusBar_RemoveWidget(QStatusBar* self, QWidget* widget);
void QStatusBar_SetSizeGripEnabled(QStatusBar* self, bool sizeGripEnabled);
bool QStatusBar_IsSizeGripEnabled(const QStatusBar* self);
libqt_string QStatusBar_CurrentMessage(const QStatusBar* self);
void QStatusBar_ShowMessage(QStatusBar* self, const libqt_string text);
void QStatusBar_ClearMessage(QStatusBar* self);
void QStatusBar_MessageChanged(QStatusBar* self, const libqt_string text);
void QStatusBar_Connect_MessageChanged(QStatusBar* self, intptr_t slot);
void QStatusBar_ShowEvent(QStatusBar* self, QShowEvent* param1);
void QStatusBar_PaintEvent(QStatusBar* self, QPaintEvent* param1);
void QStatusBar_ResizeEvent(QStatusBar* self, QResizeEvent* param1);
bool QStatusBar_Event(QStatusBar* self, QEvent* param1);
libqt_string QStatusBar_Tr2(const char* s, const char* c);
libqt_string QStatusBar_Tr3(const char* s, const char* c, int n);
void QStatusBar_AddWidget2(QStatusBar* self, QWidget* widget, int stretch);
int QStatusBar_InsertWidget3(QStatusBar* self, int index, QWidget* widget, int stretch);
void QStatusBar_AddPermanentWidget2(QStatusBar* self, QWidget* widget, int stretch);
int QStatusBar_InsertPermanentWidget3(QStatusBar* self, int index, QWidget* widget, int stretch);
void QStatusBar_ShowMessage2(QStatusBar* self, const libqt_string text, int timeout);
void QStatusBar_OnShowEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseShowEvent(QStatusBar* self, QShowEvent* param1);
void QStatusBar_OnPaintEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBasePaintEvent(QStatusBar* self, QPaintEvent* param1);
void QStatusBar_OnResizeEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseResizeEvent(QStatusBar* self, QResizeEvent* param1);
void QStatusBar_OnEvent(QStatusBar* self, intptr_t slot);
bool QStatusBar_QBaseEvent(QStatusBar* self, QEvent* param1);
void QStatusBar_Reformat(QStatusBar* self);
void QStatusBar_OnReformat(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseReformat(QStatusBar* self);
void QStatusBar_HideOrShow(QStatusBar* self);
void QStatusBar_OnHideOrShow(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseHideOrShow(QStatusBar* self);
void QStatusBar_Delete(QStatusBar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
