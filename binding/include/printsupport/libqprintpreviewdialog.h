#pragma once
#ifndef QPRINTPREVIEWDIALOG_H_C_LIB
#define QPRINTPREVIEWDIALOG_H_C_LIB

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
typedef struct QObject QObject;
typedef struct QPrintPreviewDialog QPrintPreviewDialog;
typedef struct QPrinter QPrinter;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QPrintPreviewDialog* QPrintPreviewDialog_new(QWidget* parent);
QPrintPreviewDialog* QPrintPreviewDialog_new2();
QPrintPreviewDialog* QPrintPreviewDialog_new3(QPrinter* printer);
QPrintPreviewDialog* QPrintPreviewDialog_new4(QWidget* parent, int flags);
QPrintPreviewDialog* QPrintPreviewDialog_new5(QPrinter* printer, QWidget* parent);
QPrintPreviewDialog* QPrintPreviewDialog_new6(QPrinter* printer, QWidget* parent, int flags);
libqt_string QPrintPreviewDialog_Tr(const char* s);
void QPrintPreviewDialog_Open(QPrintPreviewDialog* self, QObject* receiver, const char* member);
QPrinter* QPrintPreviewDialog_Printer(QPrintPreviewDialog* self);
void QPrintPreviewDialog_SetVisible(QPrintPreviewDialog* self, bool visible);
void QPrintPreviewDialog_Done(QPrintPreviewDialog* self, int result);
void QPrintPreviewDialog_PaintRequested(QPrintPreviewDialog* self, QPrinter* printer);
void QPrintPreviewDialog_Connect_PaintRequested(QPrintPreviewDialog* self, intptr_t slot);
libqt_string QPrintPreviewDialog_Tr2(const char* s, const char* c);
libqt_string QPrintPreviewDialog_Tr3(const char* s, const char* c, int n);
void QPrintPreviewDialog_OnSetVisible(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseSetVisible(QPrintPreviewDialog* self, bool visible);
void QPrintPreviewDialog_OnDone(QPrintPreviewDialog* self, intptr_t slot);
void QPrintPreviewDialog_QBaseDone(QPrintPreviewDialog* self, int result);
void QPrintPreviewDialog_Delete(QPrintPreviewDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
