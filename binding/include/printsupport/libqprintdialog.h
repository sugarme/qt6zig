#pragma once
#ifndef QPRINTDIALOG_H_C_LIB
#define QPRINTDIALOG_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractPrintDialog QAbstractPrintDialog;
typedef struct QObject QObject;
typedef struct QPrintDialog QPrintDialog;
typedef struct QPrinter QPrinter;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QPrintDialog* QPrintDialog_new(QWidget* parent);
QPrintDialog* QPrintDialog_new2(QPrinter* printer);
QPrintDialog* QPrintDialog_new3();
QPrintDialog* QPrintDialog_new4(QPrinter* printer, QWidget* parent);
libqt_string QPrintDialog_Tr(const char* s);
int QPrintDialog_Exec(QPrintDialog* self);
void QPrintDialog_Done(QPrintDialog* self, int result);
void QPrintDialog_SetOption(QPrintDialog* self, int option);
bool QPrintDialog_TestOption(const QPrintDialog* self, int option);
void QPrintDialog_SetOptions(QPrintDialog* self, int options);
int QPrintDialog_Options(const QPrintDialog* self);
void QPrintDialog_SetVisible(QPrintDialog* self, bool visible);
void QPrintDialog_Open(QPrintDialog* self, QObject* receiver, const char* member);
void QPrintDialog_Accepted(QPrintDialog* self, QPrinter* printer);
libqt_string QPrintDialog_Tr2(const char* s, const char* c);
libqt_string QPrintDialog_Tr3(const char* s, const char* c, int n);
void QPrintDialog_SetOption2(QPrintDialog* self, int option, bool on);
void QPrintDialog_OnExec(QPrintDialog* self, intptr_t slot);
int QPrintDialog_QBaseExec(QPrintDialog* self);
void QPrintDialog_OnDone(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseDone(QPrintDialog* self, int result);
void QPrintDialog_OnSetVisible(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseSetVisible(QPrintDialog* self, bool visible);
void QPrintDialog_Delete(QPrintDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
