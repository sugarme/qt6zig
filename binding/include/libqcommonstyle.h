#pragma once
#ifndef QCOMMONSTYLE_H_C_LIB
#define QCOMMONSTYLE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QApplication QApplication;
typedef struct QCommonStyle QCommonStyle;
typedef struct QIcon QIcon;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QStyle QStyle;
typedef struct QStyleHintReturn QStyleHintReturn;
typedef struct QStyleOption QStyleOption;
typedef struct QStyleOptionComplex QStyleOptionComplex;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QCommonStyle* QCommonStyle_new();
libqt_string QCommonStyle_Tr(const char* s);
void QCommonStyle_DrawPrimitive(const QCommonStyle* self, int pe, const QStyleOption* opt, QPainter* p, const QWidget* w);
void QCommonStyle_DrawControl(const QCommonStyle* self, int element, const QStyleOption* opt, QPainter* p, const QWidget* w);
QRect* QCommonStyle_SubElementRect(const QCommonStyle* self, int r, const QStyleOption* opt, const QWidget* widget);
void QCommonStyle_DrawComplexControl(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* w);
int QCommonStyle_HitTestComplexControl(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, const QPoint* pt, const QWidget* w);
QRect* QCommonStyle_SubControlRect(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, int sc, const QWidget* w);
QSize* QCommonStyle_SizeFromContents(const QCommonStyle* self, int ct, const QStyleOption* opt, const QSize* contentsSize, const QWidget* widget);
int QCommonStyle_PixelMetric(const QCommonStyle* self, int m, const QStyleOption* opt, const QWidget* widget);
int QCommonStyle_StyleHint(const QCommonStyle* self, int sh, const QStyleOption* opt, const QWidget* w, QStyleHintReturn* shret);
QIcon* QCommonStyle_StandardIcon(const QCommonStyle* self, int standardIcon, const QStyleOption* opt, const QWidget* widget);
QPixmap* QCommonStyle_StandardPixmap(const QCommonStyle* self, int sp, const QStyleOption* opt, const QWidget* widget);
QPixmap* QCommonStyle_GeneratedIconPixmap(const QCommonStyle* self, int iconMode, const QPixmap* pixmap, const QStyleOption* opt);
int QCommonStyle_LayoutSpacing(const QCommonStyle* self, int control1, int control2, int orientation, const QStyleOption* option, const QWidget* widget);
void QCommonStyle_Polish(QCommonStyle* self, QPalette* param1);
void QCommonStyle_Polish2(QCommonStyle* self, QApplication* app);
void QCommonStyle_Polish3(QCommonStyle* self, QWidget* widget);
void QCommonStyle_Unpolish(QCommonStyle* self, QWidget* widget);
void QCommonStyle_Unpolish2(QCommonStyle* self, QApplication* application);
libqt_string QCommonStyle_Tr2(const char* s, const char* c);
libqt_string QCommonStyle_Tr3(const char* s, const char* c, int n);
void QCommonStyle_OnDrawPrimitive(const QCommonStyle* self, intptr_t slot);
void QCommonStyle_QBaseDrawPrimitive(const QCommonStyle* self, int pe, const QStyleOption* opt, QPainter* p, const QWidget* w);
void QCommonStyle_OnDrawControl(const QCommonStyle* self, intptr_t slot);
void QCommonStyle_QBaseDrawControl(const QCommonStyle* self, int element, const QStyleOption* opt, QPainter* p, const QWidget* w);
void QCommonStyle_OnSubElementRect(const QCommonStyle* self, intptr_t slot);
QRect* QCommonStyle_QBaseSubElementRect(const QCommonStyle* self, int r, const QStyleOption* opt, const QWidget* widget);
void QCommonStyle_OnDrawComplexControl(const QCommonStyle* self, intptr_t slot);
void QCommonStyle_QBaseDrawComplexControl(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* w);
void QCommonStyle_OnHitTestComplexControl(const QCommonStyle* self, intptr_t slot);
int QCommonStyle_QBaseHitTestComplexControl(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, const QPoint* pt, const QWidget* w);
void QCommonStyle_OnSubControlRect(const QCommonStyle* self, intptr_t slot);
QRect* QCommonStyle_QBaseSubControlRect(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, int sc, const QWidget* w);
void QCommonStyle_OnSizeFromContents(const QCommonStyle* self, intptr_t slot);
QSize* QCommonStyle_QBaseSizeFromContents(const QCommonStyle* self, int ct, const QStyleOption* opt, const QSize* contentsSize, const QWidget* widget);
void QCommonStyle_OnPixelMetric(const QCommonStyle* self, intptr_t slot);
int QCommonStyle_QBasePixelMetric(const QCommonStyle* self, int m, const QStyleOption* opt, const QWidget* widget);
void QCommonStyle_OnStyleHint(const QCommonStyle* self, intptr_t slot);
int QCommonStyle_QBaseStyleHint(const QCommonStyle* self, int sh, const QStyleOption* opt, const QWidget* w, QStyleHintReturn* shret);
void QCommonStyle_OnStandardIcon(const QCommonStyle* self, intptr_t slot);
QIcon* QCommonStyle_QBaseStandardIcon(const QCommonStyle* self, int standardIcon, const QStyleOption* opt, const QWidget* widget);
void QCommonStyle_OnStandardPixmap(const QCommonStyle* self, intptr_t slot);
QPixmap* QCommonStyle_QBaseStandardPixmap(const QCommonStyle* self, int sp, const QStyleOption* opt, const QWidget* widget);
void QCommonStyle_OnGeneratedIconPixmap(const QCommonStyle* self, intptr_t slot);
QPixmap* QCommonStyle_QBaseGeneratedIconPixmap(const QCommonStyle* self, int iconMode, const QPixmap* pixmap, const QStyleOption* opt);
void QCommonStyle_OnLayoutSpacing(const QCommonStyle* self, intptr_t slot);
int QCommonStyle_QBaseLayoutSpacing(const QCommonStyle* self, int control1, int control2, int orientation, const QStyleOption* option, const QWidget* widget);
void QCommonStyle_OnPolish(QCommonStyle* self, intptr_t slot);
void QCommonStyle_QBasePolish(QCommonStyle* self, QPalette* param1);
void QCommonStyle_OnPolish2(QCommonStyle* self, intptr_t slot);
void QCommonStyle_QBasePolish2(QCommonStyle* self, QApplication* app);
void QCommonStyle_OnPolish3(QCommonStyle* self, intptr_t slot);
void QCommonStyle_QBasePolish3(QCommonStyle* self, QWidget* widget);
void QCommonStyle_OnUnpolish(QCommonStyle* self, intptr_t slot);
void QCommonStyle_QBaseUnpolish(QCommonStyle* self, QWidget* widget);
void QCommonStyle_OnUnpolish2(QCommonStyle* self, intptr_t slot);
void QCommonStyle_QBaseUnpolish2(QCommonStyle* self, QApplication* application);
void QCommonStyle_Delete(QCommonStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
