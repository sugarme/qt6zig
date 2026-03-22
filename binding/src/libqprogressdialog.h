#pragma once
#ifndef QPROGRESSDIALOG_H_C_LIB
#define QPROGRESSDIALOG_H_C_LIB

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
typedef struct QDialog QDialog;
typedef struct QEvent QEvent;
typedef struct QLabel QLabel;
typedef struct QObject QObject;
typedef struct QProgressBar QProgressBar;
typedef struct QProgressDialog QProgressDialog;
typedef struct QPushButton QPushButton;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QProgressDialog* QProgressDialog_new(QWidget* parent);
QProgressDialog* QProgressDialog_new2();
QProgressDialog* QProgressDialog_new3(const libqt_string labelText, const libqt_string cancelButtonText, int minimum, int maximum);
QProgressDialog* QProgressDialog_new4(QWidget* parent, int flags);
QProgressDialog* QProgressDialog_new5(const libqt_string labelText, const libqt_string cancelButtonText, int minimum, int maximum, QWidget* parent);
QProgressDialog* QProgressDialog_new6(const libqt_string labelText, const libqt_string cancelButtonText, int minimum, int maximum, QWidget* parent, int flags);
libqt_string QProgressDialog_Tr(const char* s);
void QProgressDialog_SetLabel(QProgressDialog* self, QLabel* label);
void QProgressDialog_SetCancelButton(QProgressDialog* self, QPushButton* button);
void QProgressDialog_SetBar(QProgressDialog* self, QProgressBar* bar);
bool QProgressDialog_WasCanceled(const QProgressDialog* self);
int QProgressDialog_Minimum(const QProgressDialog* self);
int QProgressDialog_Maximum(const QProgressDialog* self);
int QProgressDialog_Value(const QProgressDialog* self);
QSize* QProgressDialog_SizeHint(const QProgressDialog* self);
libqt_string QProgressDialog_LabelText(const QProgressDialog* self);
int QProgressDialog_MinimumDuration(const QProgressDialog* self);
void QProgressDialog_SetAutoReset(QProgressDialog* self, bool reset);
bool QProgressDialog_AutoReset(const QProgressDialog* self);
void QProgressDialog_SetAutoClose(QProgressDialog* self, bool close);
bool QProgressDialog_AutoClose(const QProgressDialog* self);
void QProgressDialog_Open(QProgressDialog* self, QObject* receiver, const char* member);
void QProgressDialog_Cancel(QProgressDialog* self);
void QProgressDialog_Reset(QProgressDialog* self);
void QProgressDialog_SetMaximum(QProgressDialog* self, int maximum);
void QProgressDialog_SetMinimum(QProgressDialog* self, int minimum);
void QProgressDialog_SetRange(QProgressDialog* self, int minimum, int maximum);
void QProgressDialog_SetValue(QProgressDialog* self, int progress);
void QProgressDialog_SetLabelText(QProgressDialog* self, const libqt_string text);
void QProgressDialog_SetCancelButtonText(QProgressDialog* self, const libqt_string text);
void QProgressDialog_SetMinimumDuration(QProgressDialog* self, int ms);
void QProgressDialog_Canceled(QProgressDialog* self);
void QProgressDialog_Connect_Canceled(QProgressDialog* self, intptr_t slot);
void QProgressDialog_ResizeEvent(QProgressDialog* self, QResizeEvent* event);
void QProgressDialog_CloseEvent(QProgressDialog* self, QCloseEvent* event);
void QProgressDialog_ChangeEvent(QProgressDialog* self, QEvent* event);
void QProgressDialog_ShowEvent(QProgressDialog* self, QShowEvent* event);
libqt_string QProgressDialog_Tr2(const char* s, const char* c);
libqt_string QProgressDialog_Tr3(const char* s, const char* c, int n);
void QProgressDialog_OnSizeHint(const QProgressDialog* self, intptr_t slot);
QSize* QProgressDialog_QBaseSizeHint(const QProgressDialog* self);
void QProgressDialog_OnResizeEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseResizeEvent(QProgressDialog* self, QResizeEvent* event);
void QProgressDialog_OnCloseEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseCloseEvent(QProgressDialog* self, QCloseEvent* event);
void QProgressDialog_OnChangeEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseChangeEvent(QProgressDialog* self, QEvent* event);
void QProgressDialog_OnShowEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseShowEvent(QProgressDialog* self, QShowEvent* event);
void QProgressDialog_ForceShow(QProgressDialog* self);
void QProgressDialog_OnForceShow(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseForceShow(QProgressDialog* self);
void QProgressDialog_Delete(QProgressDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
