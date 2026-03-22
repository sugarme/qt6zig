#pragma once
#ifndef QERRORMESSAGE_H_C_LIB
#define QERRORMESSAGE_H_C_LIB

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
typedef struct QErrorMessage QErrorMessage;
typedef struct QEvent QEvent;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QErrorMessage* QErrorMessage_new(QWidget* parent);
QErrorMessage* QErrorMessage_new2();
libqt_string QErrorMessage_Tr(const char* s);
QErrorMessage* QErrorMessage_QtHandler();
void QErrorMessage_ShowMessage(QErrorMessage* self, const libqt_string message);
void QErrorMessage_ShowMessage2(QErrorMessage* self, const libqt_string message, const libqt_string typeVal);
void QErrorMessage_Done(QErrorMessage* self, int param1);
void QErrorMessage_ChangeEvent(QErrorMessage* self, QEvent* e);
libqt_string QErrorMessage_Tr2(const char* s, const char* c);
libqt_string QErrorMessage_Tr3(const char* s, const char* c, int n);
void QErrorMessage_OnDone(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseDone(QErrorMessage* self, int param1);
void QErrorMessage_OnChangeEvent(QErrorMessage* self, intptr_t slot);
void QErrorMessage_QBaseChangeEvent(QErrorMessage* self, QEvent* e);
void QErrorMessage_Delete(QErrorMessage* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
