#pragma once
#ifndef QDIALOGBUTTONBOX_H_C_LIB
#define QDIALOGBUTTONBOX_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QDialogButtonBox QDialogButtonBox;
typedef struct QEvent QEvent;
typedef struct QPushButton QPushButton;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QDialogButtonBox* QDialogButtonBox_new(QWidget* parent);
QDialogButtonBox* QDialogButtonBox_new2();
QDialogButtonBox* QDialogButtonBox_new3(int orientation);
QDialogButtonBox* QDialogButtonBox_new4(int buttons);
QDialogButtonBox* QDialogButtonBox_new5(int buttons, int orientation);
QDialogButtonBox* QDialogButtonBox_new6(int orientation, QWidget* parent);
QDialogButtonBox* QDialogButtonBox_new7(int buttons, QWidget* parent);
QDialogButtonBox* QDialogButtonBox_new8(int buttons, int orientation, QWidget* parent);
libqt_string QDialogButtonBox_Tr(const char* s);
void QDialogButtonBox_SetOrientation(QDialogButtonBox* self, int orientation);
int QDialogButtonBox_Orientation(const QDialogButtonBox* self);
void QDialogButtonBox_AddButton(QDialogButtonBox* self, QAbstractButton* button, int role);
QPushButton* QDialogButtonBox_AddButton2(QDialogButtonBox* self, const libqt_string text, int role);
QPushButton* QDialogButtonBox_AddButton3(QDialogButtonBox* self, int button);
void QDialogButtonBox_RemoveButton(QDialogButtonBox* self, QAbstractButton* button);
void QDialogButtonBox_Clear(QDialogButtonBox* self);
libqt_list QDialogButtonBox_Buttons(const QDialogButtonBox* self);
int QDialogButtonBox_ButtonRole(const QDialogButtonBox* self, QAbstractButton* button);
void QDialogButtonBox_SetStandardButtons(QDialogButtonBox* self, int buttons);
int QDialogButtonBox_StandardButtons(const QDialogButtonBox* self);
int QDialogButtonBox_StandardButton(const QDialogButtonBox* self, QAbstractButton* button);
QPushButton* QDialogButtonBox_Button(const QDialogButtonBox* self, int which);
void QDialogButtonBox_SetCenterButtons(QDialogButtonBox* self, bool center);
bool QDialogButtonBox_CenterButtons(const QDialogButtonBox* self);
void QDialogButtonBox_Clicked(QDialogButtonBox* self, QAbstractButton* button);
void QDialogButtonBox_Connect_Clicked(QDialogButtonBox* self, intptr_t slot);
void QDialogButtonBox_Accepted(QDialogButtonBox* self);
void QDialogButtonBox_Connect_Accepted(QDialogButtonBox* self, intptr_t slot);
void QDialogButtonBox_HelpRequested(QDialogButtonBox* self);
void QDialogButtonBox_Connect_HelpRequested(QDialogButtonBox* self, intptr_t slot);
void QDialogButtonBox_Rejected(QDialogButtonBox* self);
void QDialogButtonBox_Connect_Rejected(QDialogButtonBox* self, intptr_t slot);
void QDialogButtonBox_ChangeEvent(QDialogButtonBox* self, QEvent* event);
bool QDialogButtonBox_Event(QDialogButtonBox* self, QEvent* event);
libqt_string QDialogButtonBox_Tr2(const char* s, const char* c);
libqt_string QDialogButtonBox_Tr3(const char* s, const char* c, int n);
void QDialogButtonBox_OnChangeEvent(QDialogButtonBox* self, intptr_t slot);
void QDialogButtonBox_QBaseChangeEvent(QDialogButtonBox* self, QEvent* event);
void QDialogButtonBox_OnEvent(QDialogButtonBox* self, intptr_t slot);
bool QDialogButtonBox_QBaseEvent(QDialogButtonBox* self, QEvent* event);
void QDialogButtonBox_Delete(QDialogButtonBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
