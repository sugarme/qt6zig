#pragma once
#ifndef QCOLORDIALOG_H_C_LIB
#define QCOLORDIALOG_H_C_LIB

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
typedef struct QColorDialog QColorDialog;
typedef struct QDialog QDialog;
typedef struct QEvent QEvent;
typedef struct QObject QObject;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QColorDialog* QColorDialog_new(QWidget* parent);
QColorDialog* QColorDialog_new2();
QColorDialog* QColorDialog_new3(const QColor* initial);
QColorDialog* QColorDialog_new4(const QColor* initial, QWidget* parent);
libqt_string QColorDialog_Tr(const char* s);
void QColorDialog_SetCurrentColor(QColorDialog* self, const QColor* color);
QColor* QColorDialog_CurrentColor(const QColorDialog* self);
QColor* QColorDialog_SelectedColor(const QColorDialog* self);
void QColorDialog_SetOption(QColorDialog* self, int option);
bool QColorDialog_TestOption(const QColorDialog* self, int option);
void QColorDialog_SetOptions(QColorDialog* self, int options);
int QColorDialog_Options(const QColorDialog* self);
void QColorDialog_Open(QColorDialog* self, QObject* receiver, const char* member);
void QColorDialog_SetVisible(QColorDialog* self, bool visible);
QColor* QColorDialog_GetColor();
int QColorDialog_CustomCount();
QColor* QColorDialog_CustomColor(int index);
void QColorDialog_SetCustomColor(int index, QColor* color);
QColor* QColorDialog_StandardColor(int index);
void QColorDialog_SetStandardColor(int index, QColor* color);
void QColorDialog_CurrentColorChanged(QColorDialog* self, const QColor* color);
void QColorDialog_Connect_CurrentColorChanged(QColorDialog* self, intptr_t slot);
void QColorDialog_ColorSelected(QColorDialog* self, const QColor* color);
void QColorDialog_Connect_ColorSelected(QColorDialog* self, intptr_t slot);
void QColorDialog_ChangeEvent(QColorDialog* self, QEvent* event);
void QColorDialog_Done(QColorDialog* self, int result);
libqt_string QColorDialog_Tr2(const char* s, const char* c);
libqt_string QColorDialog_Tr3(const char* s, const char* c, int n);
void QColorDialog_SetOption2(QColorDialog* self, int option, bool on);
QColor* QColorDialog_GetColor1(const QColor* initial);
QColor* QColorDialog_GetColor2(const QColor* initial, QWidget* parent);
QColor* QColorDialog_GetColor3(const QColor* initial, QWidget* parent, const libqt_string title);
QColor* QColorDialog_GetColor4(const QColor* initial, QWidget* parent, const libqt_string title, int options);
void QColorDialog_OnSetVisible(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseSetVisible(QColorDialog* self, bool visible);
void QColorDialog_OnChangeEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseChangeEvent(QColorDialog* self, QEvent* event);
void QColorDialog_OnDone(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseDone(QColorDialog* self, int result);
void QColorDialog_Delete(QColorDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
