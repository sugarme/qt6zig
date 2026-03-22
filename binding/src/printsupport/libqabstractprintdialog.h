#pragma once
#ifndef QABSTRACTPRINTDIALOG_H_C_LIB
#define QABSTRACTPRINTDIALOG_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractPrintDialog QAbstractPrintDialog;
typedef struct QDialog QDialog;
typedef struct QPrinter QPrinter;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAbstractPrintDialog* QAbstractPrintDialog_new(QPrinter* printer);
QAbstractPrintDialog* QAbstractPrintDialog_new2(QPrinter* printer, QWidget* parent);
libqt_string QAbstractPrintDialog_Tr(const char* s);
void QAbstractPrintDialog_SetOptionTabs(QAbstractPrintDialog* self, const libqt_list tabs);
void QAbstractPrintDialog_SetPrintRange(QAbstractPrintDialog* self, int range);
int QAbstractPrintDialog_PrintRange(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_SetMinMax(QAbstractPrintDialog* self, int min, int max);
int QAbstractPrintDialog_MinPage(const QAbstractPrintDialog* self);
int QAbstractPrintDialog_MaxPage(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_SetFromTo(QAbstractPrintDialog* self, int fromPage, int toPage);
int QAbstractPrintDialog_FromPage(const QAbstractPrintDialog* self);
int QAbstractPrintDialog_ToPage(const QAbstractPrintDialog* self);
QPrinter* QAbstractPrintDialog_Printer(const QAbstractPrintDialog* self);
libqt_string QAbstractPrintDialog_Tr2(const char* s, const char* c);
libqt_string QAbstractPrintDialog_Tr3(const char* s, const char* c, int n);
void QAbstractPrintDialog_Delete(QAbstractPrintDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
