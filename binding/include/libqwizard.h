#pragma once
#ifndef QWIZARD_H_C_LIB
#define QWIZARD_H_C_LIB

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
typedef struct QDialog QDialog;
typedef struct QEvent QEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPixmap QPixmap;
typedef struct QResizeEvent QResizeEvent;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
typedef struct QWizard QWizard;
typedef struct QWizardPage QWizardPage;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QWizard* QWizard_new(QWidget* parent);
QWizard* QWizard_new2();
QWizard* QWizard_new3(QWidget* parent, int flags);
libqt_string QWizard_Tr(const char* s);
int QWizard_AddPage(QWizard* self, QWizardPage* page);
void QWizard_SetPage(QWizard* self, int id, QWizardPage* page);
void QWizard_RemovePage(QWizard* self, int id);
QWizardPage* QWizard_Page(const QWizard* self, int id);
bool QWizard_HasVisitedPage(const QWizard* self, int id);
libqt_list QWizard_VisitedIds(const QWizard* self);
libqt_list QWizard_PageIds(const QWizard* self);
void QWizard_SetStartId(QWizard* self, int id);
int QWizard_StartId(const QWizard* self);
QWizardPage* QWizard_CurrentPage(const QWizard* self);
int QWizard_CurrentId(const QWizard* self);
bool QWizard_ValidateCurrentPage(QWizard* self);
int QWizard_NextId(const QWizard* self);
void QWizard_SetField(QWizard* self, const libqt_string name, const QVariant* value);
QVariant* QWizard_Field(const QWizard* self, const libqt_string name);
void QWizard_SetWizardStyle(QWizard* self, int style);
int QWizard_WizardStyle(const QWizard* self);
void QWizard_SetOption(QWizard* self, int option);
bool QWizard_TestOption(const QWizard* self, int option);
void QWizard_SetOptions(QWizard* self, int options);
int QWizard_Options(const QWizard* self);
void QWizard_SetButtonText(QWizard* self, int which, const libqt_string text);
libqt_string QWizard_ButtonText(const QWizard* self, int which);
void QWizard_SetButtonLayout(QWizard* self, const libqt_list layout);
void QWizard_SetButton(QWizard* self, int which, QAbstractButton* button);
QAbstractButton* QWizard_Button(const QWizard* self, int which);
void QWizard_SetTitleFormat(QWizard* self, int format);
int QWizard_TitleFormat(const QWizard* self);
void QWizard_SetSubTitleFormat(QWizard* self, int format);
int QWizard_SubTitleFormat(const QWizard* self);
void QWizard_SetPixmap(QWizard* self, int which, const QPixmap* pixmap);
QPixmap* QWizard_Pixmap(const QWizard* self, int which);
void QWizard_SetSideWidget(QWizard* self, QWidget* widget);
QWidget* QWizard_SideWidget(const QWizard* self);
void QWizard_SetDefaultProperty(QWizard* self, const char* className, const char* property, const char* changedSignal);
void QWizard_SetVisible(QWizard* self, bool visible);
QSize* QWizard_SizeHint(const QWizard* self);
void QWizard_CurrentIdChanged(QWizard* self, int id);
void QWizard_Connect_CurrentIdChanged(QWizard* self, intptr_t slot);
void QWizard_HelpRequested(QWizard* self);
void QWizard_Connect_HelpRequested(QWizard* self, intptr_t slot);
void QWizard_CustomButtonClicked(QWizard* self, int which);
void QWizard_Connect_CustomButtonClicked(QWizard* self, intptr_t slot);
void QWizard_PageAdded(QWizard* self, int id);
void QWizard_Connect_PageAdded(QWizard* self, intptr_t slot);
void QWizard_PageRemoved(QWizard* self, int id);
void QWizard_Connect_PageRemoved(QWizard* self, intptr_t slot);
void QWizard_Back(QWizard* self);
void QWizard_Next(QWizard* self);
void QWizard_SetCurrentId(QWizard* self, int id);
void QWizard_Restart(QWizard* self);
bool QWizard_Event(QWizard* self, QEvent* event);
void QWizard_ResizeEvent(QWizard* self, QResizeEvent* event);
void QWizard_PaintEvent(QWizard* self, QPaintEvent* event);
bool QWizard_NativeEvent(QWizard* self, const libqt_string eventType, void* message, intptr_t* result);
void QWizard_Done(QWizard* self, int result);
void QWizard_InitializePage(QWizard* self, int id);
void QWizard_CleanupPage(QWizard* self, int id);
libqt_string QWizard_Tr2(const char* s, const char* c);
libqt_string QWizard_Tr3(const char* s, const char* c, int n);
void QWizard_SetOption2(QWizard* self, int option, bool on);
void QWizard_OnValidateCurrentPage(QWizard* self, intptr_t slot);
bool QWizard_QBaseValidateCurrentPage(QWizard* self);
void QWizard_OnNextId(const QWizard* self, intptr_t slot);
int QWizard_QBaseNextId(const QWizard* self);
void QWizard_OnSetVisible(QWizard* self, intptr_t slot);
void QWizard_QBaseSetVisible(QWizard* self, bool visible);
void QWizard_OnSizeHint(const QWizard* self, intptr_t slot);
QSize* QWizard_QBaseSizeHint(const QWizard* self);
void QWizard_OnEvent(QWizard* self, intptr_t slot);
bool QWizard_QBaseEvent(QWizard* self, QEvent* event);
void QWizard_OnResizeEvent(QWizard* self, intptr_t slot);
void QWizard_QBaseResizeEvent(QWizard* self, QResizeEvent* event);
void QWizard_OnPaintEvent(QWizard* self, intptr_t slot);
void QWizard_QBasePaintEvent(QWizard* self, QPaintEvent* event);
void QWizard_OnNativeEvent(QWizard* self, intptr_t slot);
bool QWizard_QBaseNativeEvent(QWizard* self, const libqt_string eventType, void* message, intptr_t* result);
void QWizard_OnDone(QWizard* self, intptr_t slot);
void QWizard_QBaseDone(QWizard* self, int result);
void QWizard_OnInitializePage(QWizard* self, intptr_t slot);
void QWizard_QBaseInitializePage(QWizard* self, int id);
void QWizard_OnCleanupPage(QWizard* self, intptr_t slot);
void QWizard_QBaseCleanupPage(QWizard* self, int id);
void QWizard_Delete(QWizard* self);

QWizardPage* QWizardPage_new(QWidget* parent);
QWizardPage* QWizardPage_new2();
libqt_string QWizardPage_Tr(const char* s);
void QWizardPage_SetTitle(QWizardPage* self, const libqt_string title);
libqt_string QWizardPage_Title(const QWizardPage* self);
void QWizardPage_SetSubTitle(QWizardPage* self, const libqt_string subTitle);
libqt_string QWizardPage_SubTitle(const QWizardPage* self);
void QWizardPage_SetPixmap(QWizardPage* self, int which, const QPixmap* pixmap);
QPixmap* QWizardPage_Pixmap(const QWizardPage* self, int which);
void QWizardPage_SetFinalPage(QWizardPage* self, bool finalPage);
bool QWizardPage_IsFinalPage(const QWizardPage* self);
void QWizardPage_SetCommitPage(QWizardPage* self, bool commitPage);
bool QWizardPage_IsCommitPage(const QWizardPage* self);
void QWizardPage_SetButtonText(QWizardPage* self, int which, const libqt_string text);
libqt_string QWizardPage_ButtonText(const QWizardPage* self, int which);
void QWizardPage_InitializePage(QWizardPage* self);
void QWizardPage_CleanupPage(QWizardPage* self);
bool QWizardPage_ValidatePage(QWizardPage* self);
bool QWizardPage_IsComplete(const QWizardPage* self);
int QWizardPage_NextId(const QWizardPage* self);
void QWizardPage_CompleteChanged(QWizardPage* self);
void QWizardPage_Connect_CompleteChanged(QWizardPage* self, intptr_t slot);
libqt_string QWizardPage_Tr2(const char* s, const char* c);
libqt_string QWizardPage_Tr3(const char* s, const char* c, int n);
void QWizardPage_OnInitializePage(QWizardPage* self, intptr_t slot);
void QWizardPage_QBaseInitializePage(QWizardPage* self);
void QWizardPage_OnCleanupPage(QWizardPage* self, intptr_t slot);
void QWizardPage_QBaseCleanupPage(QWizardPage* self);
void QWizardPage_OnValidatePage(QWizardPage* self, intptr_t slot);
bool QWizardPage_QBaseValidatePage(QWizardPage* self);
void QWizardPage_OnIsComplete(const QWizardPage* self, intptr_t slot);
bool QWizardPage_QBaseIsComplete(const QWizardPage* self);
void QWizardPage_OnNextId(const QWizardPage* self, intptr_t slot);
int QWizardPage_QBaseNextId(const QWizardPage* self);
void QWizardPage_SetField(QWizardPage* self, const libqt_string name, const QVariant* value);
void QWizardPage_OnSetField(QWizardPage* self, intptr_t slot);
void QWizardPage_QBaseSetField(QWizardPage* self, const libqt_string name, const QVariant* value);
QVariant* QWizardPage_Field(const QWizardPage* self, const libqt_string name);
void QWizardPage_OnField(const QWizardPage* self, intptr_t slot);
QVariant* QWizardPage_QBaseField(const QWizardPage* self, const libqt_string name);
void QWizardPage_RegisterField(QWizardPage* self, const libqt_string name, QWidget* widget);
void QWizardPage_OnRegisterField(QWizardPage* self, intptr_t slot);
void QWizardPage_QBaseRegisterField(QWizardPage* self, const libqt_string name, QWidget* widget);
QWizard* QWizardPage_Wizard(const QWizardPage* self);
void QWizardPage_OnWizard(const QWizardPage* self, intptr_t slot);
QWizard* QWizardPage_QBaseWizard(const QWizardPage* self);
void QWizardPage_RegisterField3(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property);
void QWizardPage_OnRegisterField3(QWizardPage* self, intptr_t slot);
void QWizardPage_QBaseRegisterField3(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property);
void QWizardPage_RegisterField4(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property, const char* changedSignal);
void QWizardPage_OnRegisterField4(QWizardPage* self, intptr_t slot);
void QWizardPage_QBaseRegisterField4(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property, const char* changedSignal);
void QWizardPage_Delete(QWizardPage* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
