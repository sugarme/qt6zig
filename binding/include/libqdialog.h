#pragma once
#ifndef QDIALOG_H_C_LIB
#define QDIALOG_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDialog QDialog;
typedef struct QEvent QEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QObject QObject;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QDialog* QDialog_new(QWidget* parent);
QDialog* QDialog_new2();
QDialog* QDialog_new3(QWidget* parent, int f);
libqt_string QDialog_Tr(const char* s);
int QDialog_Result(const QDialog* self);
void QDialog_SetVisible(QDialog* self, bool visible);
QSize* QDialog_SizeHint(const QDialog* self);
QSize* QDialog_MinimumSizeHint(const QDialog* self);
void QDialog_SetSizeGripEnabled(QDialog* self, bool sizeGripEnabled);
bool QDialog_IsSizeGripEnabled(const QDialog* self);
void QDialog_SetModal(QDialog* self, bool modal);
void QDialog_SetResult(QDialog* self, int r);
void QDialog_Finished(QDialog* self, int result);
void QDialog_Connect_Finished(QDialog* self, intptr_t slot);
void QDialog_Accepted(QDialog* self);
void QDialog_Connect_Accepted(QDialog* self, intptr_t slot);
void QDialog_Rejected(QDialog* self);
void QDialog_Connect_Rejected(QDialog* self, intptr_t slot);
void QDialog_Open(QDialog* self);
int QDialog_Exec(QDialog* self);
void QDialog_Done(QDialog* self, int param1);
void QDialog_Accept(QDialog* self);
void QDialog_Reject(QDialog* self);
void QDialog_KeyPressEvent(QDialog* self, QKeyEvent* param1);
void QDialog_CloseEvent(QDialog* self, QCloseEvent* param1);
void QDialog_ShowEvent(QDialog* self, QShowEvent* param1);
void QDialog_ResizeEvent(QDialog* self, QResizeEvent* param1);
void QDialog_ContextMenuEvent(QDialog* self, QContextMenuEvent* param1);
bool QDialog_EventFilter(QDialog* self, QObject* param1, QEvent* param2);
libqt_string QDialog_Tr2(const char* s, const char* c);
libqt_string QDialog_Tr3(const char* s, const char* c, int n);
void QDialog_OnSetVisible(QDialog* self, intptr_t slot);
void QDialog_QBaseSetVisible(QDialog* self, bool visible);
void QDialog_OnSizeHint(const QDialog* self, intptr_t slot);
QSize* QDialog_QBaseSizeHint(const QDialog* self);
void QDialog_OnMinimumSizeHint(const QDialog* self, intptr_t slot);
QSize* QDialog_QBaseMinimumSizeHint(const QDialog* self);
void QDialog_OnOpen(QDialog* self, intptr_t slot);
void QDialog_QBaseOpen(QDialog* self);
void QDialog_OnExec(QDialog* self, intptr_t slot);
int QDialog_QBaseExec(QDialog* self);
void QDialog_OnDone(QDialog* self, intptr_t slot);
void QDialog_QBaseDone(QDialog* self, int param1);
void QDialog_OnAccept(QDialog* self, intptr_t slot);
void QDialog_QBaseAccept(QDialog* self);
void QDialog_OnReject(QDialog* self, intptr_t slot);
void QDialog_QBaseReject(QDialog* self);
void QDialog_OnKeyPressEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseKeyPressEvent(QDialog* self, QKeyEvent* param1);
void QDialog_OnCloseEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseCloseEvent(QDialog* self, QCloseEvent* param1);
void QDialog_OnShowEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseShowEvent(QDialog* self, QShowEvent* param1);
void QDialog_OnResizeEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseResizeEvent(QDialog* self, QResizeEvent* param1);
void QDialog_OnContextMenuEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseContextMenuEvent(QDialog* self, QContextMenuEvent* param1);
void QDialog_OnEventFilter(QDialog* self, intptr_t slot);
bool QDialog_QBaseEventFilter(QDialog* self, QObject* param1, QEvent* param2);
void QDialog_AdjustPosition(QDialog* self, QWidget* param1);
void QDialog_OnAdjustPosition(QDialog* self, intptr_t slot);
void QDialog_QBaseAdjustPosition(QDialog* self, QWidget* param1);
void QDialog_Delete(QDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
