#pragma once
#ifndef QPAGESETUPDIALOG_H_C_LIB
#define QPAGESETUPDIALOG_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDialog QDialog;
typedef struct QObject QObject;
typedef struct QPageSetupDialog QPageSetupDialog;
typedef struct QPrinter QPrinter;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QPageSetupDialog* QPageSetupDialog_new(QWidget* parent);
QPageSetupDialog* QPageSetupDialog_new2(QPrinter* printer);
QPageSetupDialog* QPageSetupDialog_new3();
QPageSetupDialog* QPageSetupDialog_new4(QPrinter* printer, QWidget* parent);
libqt_string QPageSetupDialog_Tr(const char* s);
void QPageSetupDialog_SetVisible(QPageSetupDialog* self, bool visible);
int QPageSetupDialog_Exec(QPageSetupDialog* self);
void QPageSetupDialog_Open(QPageSetupDialog* self, QObject* receiver, const char* member);
void QPageSetupDialog_Done(QPageSetupDialog* self, int result);
QPrinter* QPageSetupDialog_Printer(QPageSetupDialog* self);
libqt_string QPageSetupDialog_Tr2(const char* s, const char* c);
libqt_string QPageSetupDialog_Tr3(const char* s, const char* c, int n);
void QPageSetupDialog_OnSetVisible(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseSetVisible(QPageSetupDialog* self, bool visible);
void QPageSetupDialog_OnExec(QPageSetupDialog* self, intptr_t slot);
int QPageSetupDialog_QBaseExec(QPageSetupDialog* self);
void QPageSetupDialog_OnDone(QPageSetupDialog* self, intptr_t slot);
void QPageSetupDialog_QBaseDone(QPageSetupDialog* self, int result);
void QPageSetupDialog_Delete(QPageSetupDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
