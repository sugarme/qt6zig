#pragma once
#ifndef QPROXYSTYLE_H_C_LIB
#define QPROXYSTYLE_H_C_LIB

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
typedef struct QEvent QEvent;
typedef struct QFontMetrics QFontMetrics;
typedef struct QIcon QIcon;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QProxyStyle QProxyStyle;
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



QProxyStyle* QProxyStyle_new();
QProxyStyle* QProxyStyle_new2(const libqt_string key);
QProxyStyle* QProxyStyle_new3(QStyle* style);
libqt_string QProxyStyle_Tr(const char* s);
QStyle* QProxyStyle_BaseStyle(const QProxyStyle* self);
void QProxyStyle_SetBaseStyle(QProxyStyle* self, QStyle* style);
void QProxyStyle_DrawPrimitive(const QProxyStyle* self, int element, const QStyleOption* option, QPainter* painter, const QWidget* widget);
void QProxyStyle_DrawControl(const QProxyStyle* self, int element, const QStyleOption* option, QPainter* painter, const QWidget* widget);
void QProxyStyle_DrawComplexControl(const QProxyStyle* self, int control, const QStyleOptionComplex* option, QPainter* painter, const QWidget* widget);
void QProxyStyle_DrawItemText(const QProxyStyle* self, QPainter* painter, const QRect* rect, int flags, const QPalette* pal, bool enabled, const libqt_string text, int textRole);
void QProxyStyle_DrawItemPixmap(const QProxyStyle* self, QPainter* painter, const QRect* rect, int alignment, const QPixmap* pixmap);
QSize* QProxyStyle_SizeFromContents(const QProxyStyle* self, int typeVal, const QStyleOption* option, const QSize* size, const QWidget* widget);
QRect* QProxyStyle_SubElementRect(const QProxyStyle* self, int element, const QStyleOption* option, const QWidget* widget);
QRect* QProxyStyle_SubControlRect(const QProxyStyle* self, int cc, const QStyleOptionComplex* opt, int sc, const QWidget* widget);
QRect* QProxyStyle_ItemTextRect(const QProxyStyle* self, const QFontMetrics* fm, const QRect* r, int flags, bool enabled, const libqt_string text);
QRect* QProxyStyle_ItemPixmapRect(const QProxyStyle* self, const QRect* r, int flags, const QPixmap* pixmap);
int QProxyStyle_HitTestComplexControl(const QProxyStyle* self, int control, const QStyleOptionComplex* option, const QPoint* pos, const QWidget* widget);
int QProxyStyle_StyleHint(const QProxyStyle* self, int hint, const QStyleOption* option, const QWidget* widget, QStyleHintReturn* returnData);
int QProxyStyle_PixelMetric(const QProxyStyle* self, int metric, const QStyleOption* option, const QWidget* widget);
int QProxyStyle_LayoutSpacing(const QProxyStyle* self, int control1, int control2, int orientation, const QStyleOption* option, const QWidget* widget);
QIcon* QProxyStyle_StandardIcon(const QProxyStyle* self, int standardIcon, const QStyleOption* option, const QWidget* widget);
QPixmap* QProxyStyle_StandardPixmap(const QProxyStyle* self, int standardPixmap, const QStyleOption* opt, const QWidget* widget);
QPixmap* QProxyStyle_GeneratedIconPixmap(const QProxyStyle* self, int iconMode, const QPixmap* pixmap, const QStyleOption* opt);
QPalette* QProxyStyle_StandardPalette(const QProxyStyle* self);
void QProxyStyle_Polish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_Polish2(QProxyStyle* self, QPalette* pal);
void QProxyStyle_Polish3(QProxyStyle* self, QApplication* app);
void QProxyStyle_Unpolish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_Unpolish2(QProxyStyle* self, QApplication* app);
bool QProxyStyle_Event(QProxyStyle* self, QEvent* e);
libqt_string QProxyStyle_Tr2(const char* s, const char* c);
libqt_string QProxyStyle_Tr3(const char* s, const char* c, int n);
void QProxyStyle_OnDrawPrimitive(const QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBaseDrawPrimitive(const QProxyStyle* self, int element, const QStyleOption* option, QPainter* painter, const QWidget* widget);
void QProxyStyle_OnDrawControl(const QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBaseDrawControl(const QProxyStyle* self, int element, const QStyleOption* option, QPainter* painter, const QWidget* widget);
void QProxyStyle_OnDrawComplexControl(const QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBaseDrawComplexControl(const QProxyStyle* self, int control, const QStyleOptionComplex* option, QPainter* painter, const QWidget* widget);
void QProxyStyle_OnDrawItemText(const QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBaseDrawItemText(const QProxyStyle* self, QPainter* painter, const QRect* rect, int flags, const QPalette* pal, bool enabled, const libqt_string text, int textRole);
void QProxyStyle_OnDrawItemPixmap(const QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBaseDrawItemPixmap(const QProxyStyle* self, QPainter* painter, const QRect* rect, int alignment, const QPixmap* pixmap);
void QProxyStyle_OnSizeFromContents(const QProxyStyle* self, intptr_t slot);
QSize* QProxyStyle_QBaseSizeFromContents(const QProxyStyle* self, int typeVal, const QStyleOption* option, const QSize* size, const QWidget* widget);
void QProxyStyle_OnSubElementRect(const QProxyStyle* self, intptr_t slot);
QRect* QProxyStyle_QBaseSubElementRect(const QProxyStyle* self, int element, const QStyleOption* option, const QWidget* widget);
void QProxyStyle_OnSubControlRect(const QProxyStyle* self, intptr_t slot);
QRect* QProxyStyle_QBaseSubControlRect(const QProxyStyle* self, int cc, const QStyleOptionComplex* opt, int sc, const QWidget* widget);
void QProxyStyle_OnItemTextRect(const QProxyStyle* self, intptr_t slot);
QRect* QProxyStyle_QBaseItemTextRect(const QProxyStyle* self, const QFontMetrics* fm, const QRect* r, int flags, bool enabled, const libqt_string text);
void QProxyStyle_OnItemPixmapRect(const QProxyStyle* self, intptr_t slot);
QRect* QProxyStyle_QBaseItemPixmapRect(const QProxyStyle* self, const QRect* r, int flags, const QPixmap* pixmap);
void QProxyStyle_OnHitTestComplexControl(const QProxyStyle* self, intptr_t slot);
int QProxyStyle_QBaseHitTestComplexControl(const QProxyStyle* self, int control, const QStyleOptionComplex* option, const QPoint* pos, const QWidget* widget);
void QProxyStyle_OnStyleHint(const QProxyStyle* self, intptr_t slot);
int QProxyStyle_QBaseStyleHint(const QProxyStyle* self, int hint, const QStyleOption* option, const QWidget* widget, QStyleHintReturn* returnData);
void QProxyStyle_OnPixelMetric(const QProxyStyle* self, intptr_t slot);
int QProxyStyle_QBasePixelMetric(const QProxyStyle* self, int metric, const QStyleOption* option, const QWidget* widget);
void QProxyStyle_OnLayoutSpacing(const QProxyStyle* self, intptr_t slot);
int QProxyStyle_QBaseLayoutSpacing(const QProxyStyle* self, int control1, int control2, int orientation, const QStyleOption* option, const QWidget* widget);
void QProxyStyle_OnStandardIcon(const QProxyStyle* self, intptr_t slot);
QIcon* QProxyStyle_QBaseStandardIcon(const QProxyStyle* self, int standardIcon, const QStyleOption* option, const QWidget* widget);
void QProxyStyle_OnStandardPixmap(const QProxyStyle* self, intptr_t slot);
QPixmap* QProxyStyle_QBaseStandardPixmap(const QProxyStyle* self, int standardPixmap, const QStyleOption* opt, const QWidget* widget);
void QProxyStyle_OnGeneratedIconPixmap(const QProxyStyle* self, intptr_t slot);
QPixmap* QProxyStyle_QBaseGeneratedIconPixmap(const QProxyStyle* self, int iconMode, const QPixmap* pixmap, const QStyleOption* opt);
void QProxyStyle_OnStandardPalette(const QProxyStyle* self, intptr_t slot);
QPalette* QProxyStyle_QBaseStandardPalette(const QProxyStyle* self);
void QProxyStyle_OnPolish(QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBasePolish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_OnPolish2(QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBasePolish2(QProxyStyle* self, QPalette* pal);
void QProxyStyle_OnPolish3(QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBasePolish3(QProxyStyle* self, QApplication* app);
void QProxyStyle_OnUnpolish(QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBaseUnpolish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_OnUnpolish2(QProxyStyle* self, intptr_t slot);
void QProxyStyle_QBaseUnpolish2(QProxyStyle* self, QApplication* app);
void QProxyStyle_OnEvent(QProxyStyle* self, intptr_t slot);
bool QProxyStyle_QBaseEvent(QProxyStyle* self, QEvent* e);
void QProxyStyle_Delete(QProxyStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
