#pragma once
#ifndef QFONTDIALOG_H_C_LIB
#define QFONTDIALOG_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDialog QDialog;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QFontDialog QFontDialog;
typedef struct QObject QObject;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QFontDialog* QFontDialog_new(QWidget* parent);
QFontDialog* QFontDialog_new2();
QFontDialog* QFontDialog_new3(const QFont* initial);
QFontDialog* QFontDialog_new4(const QFont* initial, QWidget* parent);
libqt_string QFontDialog_Tr(const char* s);
void QFontDialog_SetCurrentFont(QFontDialog* self, const QFont* font);
QFont* QFontDialog_CurrentFont(const QFontDialog* self);
QFont* QFontDialog_SelectedFont(const QFontDialog* self);
void QFontDialog_SetOption(QFontDialog* self, int option);
bool QFontDialog_TestOption(const QFontDialog* self, int option);
void QFontDialog_SetOptions(QFontDialog* self, int options);
int QFontDialog_Options(const QFontDialog* self);
void QFontDialog_Open(QFontDialog* self, QObject* receiver, const char* member);
void QFontDialog_SetVisible(QFontDialog* self, bool visible);
QFont* QFontDialog_GetFont(bool* ok);
QFont* QFontDialog_GetFont2(bool* ok, const QFont* initial);
void QFontDialog_CurrentFontChanged(QFontDialog* self, const QFont* font);
void QFontDialog_Connect_CurrentFontChanged(QFontDialog* self, intptr_t slot);
void QFontDialog_FontSelected(QFontDialog* self, const QFont* font);
void QFontDialog_Connect_FontSelected(QFontDialog* self, intptr_t slot);
void QFontDialog_ChangeEvent(QFontDialog* self, QEvent* event);
void QFontDialog_Done(QFontDialog* self, int result);
bool QFontDialog_EventFilter(QFontDialog* self, QObject* object, QEvent* event);
libqt_string QFontDialog_Tr2(const char* s, const char* c);
libqt_string QFontDialog_Tr3(const char* s, const char* c, int n);
void QFontDialog_SetOption2(QFontDialog* self, int option, bool on);
QFont* QFontDialog_GetFont22(bool* ok, QWidget* parent);
QFont* QFontDialog_GetFont3(bool* ok, const QFont* initial, QWidget* parent);
QFont* QFontDialog_GetFont4(bool* ok, const QFont* initial, QWidget* parent, const libqt_string title);
QFont* QFontDialog_GetFont5(bool* ok, const QFont* initial, QWidget* parent, const libqt_string title, int options);
void QFontDialog_OnSetVisible(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseSetVisible(QFontDialog* self, bool visible);
void QFontDialog_OnChangeEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseChangeEvent(QFontDialog* self, QEvent* event);
void QFontDialog_OnDone(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseDone(QFontDialog* self, int result);
void QFontDialog_OnEventFilter(QFontDialog* self, intptr_t slot);
bool QFontDialog_QBaseEventFilter(QFontDialog* self, QObject* object, QEvent* event);
void QFontDialog_Delete(QFontDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
