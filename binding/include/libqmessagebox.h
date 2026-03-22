#pragma once
#ifndef QMESSAGEBOX_H_C_LIB
#define QMESSAGEBOX_H_C_LIB

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
typedef struct QCheckBox QCheckBox;
typedef struct QCloseEvent QCloseEvent;
typedef struct QDialog QDialog;
typedef struct QEvent QEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMessageBox QMessageBox;
typedef struct QObject QObject;
typedef struct QPixmap QPixmap;
typedef struct QPushButton QPushButton;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QMessageBox* QMessageBox_new(QWidget* parent);
QMessageBox* QMessageBox_new2();
QMessageBox* QMessageBox_new3(int icon, const libqt_string title, const libqt_string text);
QMessageBox* QMessageBox_new4(const libqt_string title, const libqt_string text, int icon, int button0, int button1, int button2);
QMessageBox* QMessageBox_new5(int icon, const libqt_string title, const libqt_string text, int buttons);
QMessageBox* QMessageBox_new6(int icon, const libqt_string title, const libqt_string text, int buttons, QWidget* parent);
QMessageBox* QMessageBox_new7(int icon, const libqt_string title, const libqt_string text, int buttons, QWidget* parent, int flags);
QMessageBox* QMessageBox_new8(const libqt_string title, const libqt_string text, int icon, int button0, int button1, int button2, QWidget* parent);
QMessageBox* QMessageBox_new9(const libqt_string title, const libqt_string text, int icon, int button0, int button1, int button2, QWidget* parent, int f);
libqt_string QMessageBox_Tr(const char* s);
void QMessageBox_AddButton(QMessageBox* self, QAbstractButton* button, int role);
QPushButton* QMessageBox_AddButton2(QMessageBox* self, const libqt_string text, int role);
QPushButton* QMessageBox_AddButton3(QMessageBox* self, int button);
void QMessageBox_RemoveButton(QMessageBox* self, QAbstractButton* button);
void QMessageBox_Open(QMessageBox* self, QObject* receiver, const char* member);
libqt_list QMessageBox_Buttons(const QMessageBox* self);
int QMessageBox_ButtonRole(const QMessageBox* self, QAbstractButton* button);
void QMessageBox_SetStandardButtons(QMessageBox* self, int buttons);
int QMessageBox_StandardButtons(const QMessageBox* self);
int QMessageBox_StandardButton(const QMessageBox* self, QAbstractButton* button);
QAbstractButton* QMessageBox_Button(const QMessageBox* self, int which);
QPushButton* QMessageBox_DefaultButton(const QMessageBox* self);
void QMessageBox_SetDefaultButton(QMessageBox* self, QPushButton* button);
void QMessageBox_SetDefaultButton2(QMessageBox* self, int button);
QAbstractButton* QMessageBox_EscapeButton(const QMessageBox* self);
void QMessageBox_SetEscapeButton(QMessageBox* self, QAbstractButton* button);
void QMessageBox_SetEscapeButton2(QMessageBox* self, int button);
QAbstractButton* QMessageBox_ClickedButton(const QMessageBox* self);
libqt_string QMessageBox_Text(const QMessageBox* self);
void QMessageBox_SetText(QMessageBox* self, const libqt_string text);
int QMessageBox_Icon(const QMessageBox* self);
void QMessageBox_SetIcon(QMessageBox* self, int icon);
QPixmap* QMessageBox_IconPixmap(const QMessageBox* self);
void QMessageBox_SetIconPixmap(QMessageBox* self, const QPixmap* pixmap);
int QMessageBox_TextFormat(const QMessageBox* self);
void QMessageBox_SetTextFormat(QMessageBox* self, int format);
void QMessageBox_SetTextInteractionFlags(QMessageBox* self, int flags);
int QMessageBox_TextInteractionFlags(const QMessageBox* self);
void QMessageBox_SetCheckBox(QMessageBox* self, QCheckBox* cb);
QCheckBox* QMessageBox_CheckBox(const QMessageBox* self);
void QMessageBox_SetOption(QMessageBox* self, int option);
bool QMessageBox_TestOption(const QMessageBox* self, int option);
void QMessageBox_SetOptions(QMessageBox* self, int options);
int QMessageBox_Options(const QMessageBox* self);
int QMessageBox_Information(QWidget* parent, const libqt_string title, const libqt_string text);
int QMessageBox_Information2(QWidget* parent, const libqt_string title, const libqt_string text, int button0);
int QMessageBox_Question(QWidget* parent, const libqt_string title, const libqt_string text);
int QMessageBox_Question2(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1);
int QMessageBox_Warning(QWidget* parent, const libqt_string title, const libqt_string text);
int QMessageBox_Warning2(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1);
int QMessageBox_Critical(QWidget* parent, const libqt_string title, const libqt_string text);
int QMessageBox_Critical2(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1);
void QMessageBox_About(QWidget* parent, const libqt_string title, const libqt_string text);
void QMessageBox_AboutQt(QWidget* parent);
int QMessageBox_Information3(QWidget* parent, const libqt_string title, const libqt_string text, int button0);
int QMessageBox_Information4(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text);
int QMessageBox_Question3(QWidget* parent, const libqt_string title, const libqt_string text, int button0);
int QMessageBox_Question4(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text);
int QMessageBox_Warning3(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1);
int QMessageBox_Warning4(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text);
int QMessageBox_Critical3(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1);
int QMessageBox_Critical4(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text);
libqt_string QMessageBox_ButtonText(const QMessageBox* self, int button);
void QMessageBox_SetButtonText(QMessageBox* self, int button, const libqt_string text);
libqt_string QMessageBox_InformativeText(const QMessageBox* self);
void QMessageBox_SetInformativeText(QMessageBox* self, const libqt_string text);
libqt_string QMessageBox_DetailedText(const QMessageBox* self);
void QMessageBox_SetDetailedText(QMessageBox* self, const libqt_string text);
void QMessageBox_SetWindowTitle(QMessageBox* self, const libqt_string title);
void QMessageBox_SetWindowModality(QMessageBox* self, int windowModality);
QPixmap* QMessageBox_StandardIcon(int icon);
void QMessageBox_ButtonClicked(QMessageBox* self, QAbstractButton* button);
void QMessageBox_Connect_ButtonClicked(QMessageBox* self, intptr_t slot);
bool QMessageBox_Event(QMessageBox* self, QEvent* e);
void QMessageBox_ResizeEvent(QMessageBox* self, QResizeEvent* event);
void QMessageBox_ShowEvent(QMessageBox* self, QShowEvent* event);
void QMessageBox_CloseEvent(QMessageBox* self, QCloseEvent* event);
void QMessageBox_KeyPressEvent(QMessageBox* self, QKeyEvent* event);
void QMessageBox_ChangeEvent(QMessageBox* self, QEvent* event);
libqt_string QMessageBox_Tr2(const char* s, const char* c);
libqt_string QMessageBox_Tr3(const char* s, const char* c, int n);
void QMessageBox_SetOption2(QMessageBox* self, int option, bool on);
int QMessageBox_Information42(QWidget* parent, const libqt_string title, const libqt_string text, int buttons);
int QMessageBox_Information5(QWidget* parent, const libqt_string title, const libqt_string text, int buttons, int defaultButton);
int QMessageBox_Information52(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1);
int QMessageBox_Question42(QWidget* parent, const libqt_string title, const libqt_string text, int buttons);
int QMessageBox_Question5(QWidget* parent, const libqt_string title, const libqt_string text, int buttons, int defaultButton);
int QMessageBox_Warning42(QWidget* parent, const libqt_string title, const libqt_string text, int buttons);
int QMessageBox_Warning5(QWidget* parent, const libqt_string title, const libqt_string text, int buttons, int defaultButton);
int QMessageBox_Critical42(QWidget* parent, const libqt_string title, const libqt_string text, int buttons);
int QMessageBox_Critical5(QWidget* parent, const libqt_string title, const libqt_string text, int buttons, int defaultButton);
void QMessageBox_AboutQt2(QWidget* parent, const libqt_string title);
int QMessageBox_Information53(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1);
int QMessageBox_Information6(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1, int button2);
int QMessageBox_Information54(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text);
int QMessageBox_Information62(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text);
int QMessageBox_Information7(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber);
int QMessageBox_Information8(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber);
int QMessageBox_Question52(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1);
int QMessageBox_Question6(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1, int button2);
int QMessageBox_Question53(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text);
int QMessageBox_Question62(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text);
int QMessageBox_Question7(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber);
int QMessageBox_Question8(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber);
int QMessageBox_Warning6(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1, int button2);
int QMessageBox_Warning52(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text);
int QMessageBox_Warning62(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text);
int QMessageBox_Warning7(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber);
int QMessageBox_Warning8(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber);
int QMessageBox_Critical6(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1, int button2);
int QMessageBox_Critical52(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text);
int QMessageBox_Critical62(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text);
int QMessageBox_Critical7(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber);
int QMessageBox_Critical8(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber);
void QMessageBox_OnEvent(QMessageBox* self, intptr_t slot);
bool QMessageBox_QBaseEvent(QMessageBox* self, QEvent* e);
void QMessageBox_OnResizeEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseResizeEvent(QMessageBox* self, QResizeEvent* event);
void QMessageBox_OnShowEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseShowEvent(QMessageBox* self, QShowEvent* event);
void QMessageBox_OnCloseEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseCloseEvent(QMessageBox* self, QCloseEvent* event);
void QMessageBox_OnKeyPressEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseKeyPressEvent(QMessageBox* self, QKeyEvent* event);
void QMessageBox_OnChangeEvent(QMessageBox* self, intptr_t slot);
void QMessageBox_QBaseChangeEvent(QMessageBox* self, QEvent* event);
void QMessageBox_Delete(QMessageBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
