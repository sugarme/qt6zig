#pragma once
#ifndef QCOMMANDLINKBUTTON_H_C_LIB
#define QCOMMANDLINKBUTTON_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCommandLinkButton QCommandLinkButton;
typedef struct QEvent QEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPushButton QPushButton;
typedef struct QSize QSize;
typedef struct QStyleOptionButton QStyleOptionButton;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QCommandLinkButton* QCommandLinkButton_new(QWidget* parent);
QCommandLinkButton* QCommandLinkButton_new2();
QCommandLinkButton* QCommandLinkButton_new3(const libqt_string text);
QCommandLinkButton* QCommandLinkButton_new4(const libqt_string text, const libqt_string description);
QCommandLinkButton* QCommandLinkButton_new5(const libqt_string text, QWidget* parent);
QCommandLinkButton* QCommandLinkButton_new6(const libqt_string text, const libqt_string description, QWidget* parent);
libqt_string QCommandLinkButton_Tr(const char* s);
libqt_string QCommandLinkButton_Description(const QCommandLinkButton* self);
void QCommandLinkButton_SetDescription(QCommandLinkButton* self, const libqt_string description);
QSize* QCommandLinkButton_SizeHint(const QCommandLinkButton* self);
int QCommandLinkButton_HeightForWidth(const QCommandLinkButton* self, int param1);
QSize* QCommandLinkButton_MinimumSizeHint(const QCommandLinkButton* self);
void QCommandLinkButton_InitStyleOption(const QCommandLinkButton* self, QStyleOptionButton* option);
bool QCommandLinkButton_Event(QCommandLinkButton* self, QEvent* e);
void QCommandLinkButton_PaintEvent(QCommandLinkButton* self, QPaintEvent* param1);
libqt_string QCommandLinkButton_Tr2(const char* s, const char* c);
libqt_string QCommandLinkButton_Tr3(const char* s, const char* c, int n);
void QCommandLinkButton_OnSizeHint(const QCommandLinkButton* self, intptr_t slot);
QSize* QCommandLinkButton_QBaseSizeHint(const QCommandLinkButton* self);
void QCommandLinkButton_OnHeightForWidth(const QCommandLinkButton* self, intptr_t slot);
int QCommandLinkButton_QBaseHeightForWidth(const QCommandLinkButton* self, int param1);
void QCommandLinkButton_OnMinimumSizeHint(const QCommandLinkButton* self, intptr_t slot);
QSize* QCommandLinkButton_QBaseMinimumSizeHint(const QCommandLinkButton* self);
void QCommandLinkButton_OnInitStyleOption(const QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBaseInitStyleOption(const QCommandLinkButton* self, QStyleOptionButton* option);
void QCommandLinkButton_OnEvent(QCommandLinkButton* self, intptr_t slot);
bool QCommandLinkButton_QBaseEvent(QCommandLinkButton* self, QEvent* e);
void QCommandLinkButton_OnPaintEvent(QCommandLinkButton* self, intptr_t slot);
void QCommandLinkButton_QBasePaintEvent(QCommandLinkButton* self, QPaintEvent* param1);
void QCommandLinkButton_Delete(QCommandLinkButton* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
