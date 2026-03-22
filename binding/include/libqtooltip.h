#pragma once
#ifndef QTOOLTIP_H_C_LIB
#define QTOOLTIP_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QFont QFont;
typedef struct QPalette QPalette;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QToolTip QToolTip;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QToolTip* QToolTip_new(const QToolTip* other);
QToolTip* QToolTip_new2(QToolTip* other);
QToolTip* QToolTip_new3(const QToolTip* param1);
void QToolTip_CopyAssign(QToolTip* self, QToolTip* other);
void QToolTip_MoveAssign(QToolTip* self, QToolTip* other);
void QToolTip_ShowText(const QPoint* pos, const libqt_string text);
void QToolTip_HideText();
bool QToolTip_IsVisible();
libqt_string QToolTip_Text();
QPalette* QToolTip_Palette();
void QToolTip_SetPalette(const QPalette* palette);
QFont* QToolTip_Font();
void QToolTip_SetFont(const QFont* font);
void QToolTip_OperatorAssign(QToolTip* self, const QToolTip* param1);
void QToolTip_ShowText3(const QPoint* pos, const libqt_string text, QWidget* w);
void QToolTip_ShowText4(const QPoint* pos, const libqt_string text, QWidget* w, const QRect* rect);
void QToolTip_ShowText5(const QPoint* pos, const libqt_string text, QWidget* w, const QRect* rect, int msecShowTime);
void QToolTip_Delete(QToolTip* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
