#pragma once
#ifndef QGRAPHICSEFFECT_H_C_LIB
#define QGRAPHICSEFFECT_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QGraphicsBlurEffect QGraphicsBlurEffect;
typedef struct QGraphicsColorizeEffect QGraphicsColorizeEffect;
typedef struct QGraphicsDropShadowEffect QGraphicsDropShadowEffect;
typedef struct QGraphicsEffect QGraphicsEffect;
typedef struct QGraphicsOpacityEffect QGraphicsOpacityEffect;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QGraphicsEffect* QGraphicsEffect_new();
QGraphicsEffect* QGraphicsEffect_new2(QObject* parent);
libqt_string QGraphicsEffect_Tr(const char* s);
QRectF* QGraphicsEffect_BoundingRectFor(const QGraphicsEffect* self, const QRectF* sourceRect);
QRectF* QGraphicsEffect_BoundingRect(const QGraphicsEffect* self);
bool QGraphicsEffect_IsEnabled(const QGraphicsEffect* self);
void QGraphicsEffect_SetEnabled(QGraphicsEffect* self, bool enable);
void QGraphicsEffect_Update(QGraphicsEffect* self);
void QGraphicsEffect_EnabledChanged(QGraphicsEffect* self, bool enabled);
void QGraphicsEffect_Connect_EnabledChanged(QGraphicsEffect* self, intptr_t slot);
void QGraphicsEffect_Draw(QGraphicsEffect* self, QPainter* painter);
void QGraphicsEffect_SourceChanged(QGraphicsEffect* self, int flags);
QGraphicsEffectSource* QGraphicsEffect_Source(const QGraphicsEffect* self);
libqt_string QGraphicsEffect_Tr2(const char* s, const char* c);
libqt_string QGraphicsEffect_Tr3(const char* s, const char* c, int n);
void QGraphicsEffect_OnBoundingRectFor(const QGraphicsEffect* self, intptr_t slot);
QRectF* QGraphicsEffect_QBaseBoundingRectFor(const QGraphicsEffect* self, const QRectF* sourceRect);
void QGraphicsEffect_OnDraw(QGraphicsEffect* self, intptr_t slot);
void QGraphicsEffect_QBaseDraw(QGraphicsEffect* self, QPainter* painter);
void QGraphicsEffect_OnSourceChanged(QGraphicsEffect* self, intptr_t slot);
void QGraphicsEffect_QBaseSourceChanged(QGraphicsEffect* self, int flags);
void QGraphicsEffect_UpdateBoundingRect(QGraphicsEffect* self);
void QGraphicsEffect_OnUpdateBoundingRect(QGraphicsEffect* self, intptr_t slot);
void QGraphicsEffect_QBaseUpdateBoundingRect(QGraphicsEffect* self);
bool QGraphicsEffect_SourceIsPixmap(const QGraphicsEffect* self);
void QGraphicsEffect_OnSourceIsPixmap(const QGraphicsEffect* self, intptr_t slot);
bool QGraphicsEffect_QBaseSourceIsPixmap(const QGraphicsEffect* self);
QRectF* QGraphicsEffect_SourceBoundingRect(const QGraphicsEffect* self);
void QGraphicsEffect_OnSourceBoundingRect(const QGraphicsEffect* self, intptr_t slot);
QRectF* QGraphicsEffect_QBaseSourceBoundingRect(const QGraphicsEffect* self);
void QGraphicsEffect_DrawSource(QGraphicsEffect* self, QPainter* painter);
void QGraphicsEffect_OnDrawSource(QGraphicsEffect* self, intptr_t slot);
void QGraphicsEffect_QBaseDrawSource(QGraphicsEffect* self, QPainter* painter);
QPixmap* QGraphicsEffect_SourcePixmap(const QGraphicsEffect* self);
void QGraphicsEffect_OnSourcePixmap(const QGraphicsEffect* self, intptr_t slot);
QPixmap* QGraphicsEffect_QBaseSourcePixmap(const QGraphicsEffect* self);
QRectF* QGraphicsEffect_SourceBoundingRect1(const QGraphicsEffect* self, int system);
void QGraphicsEffect_OnSourceBoundingRect1(const QGraphicsEffect* self, intptr_t slot);
QRectF* QGraphicsEffect_QBaseSourceBoundingRect1(const QGraphicsEffect* self, int system);
QPixmap* QGraphicsEffect_SourcePixmap1(const QGraphicsEffect* self, int system);
void QGraphicsEffect_OnSourcePixmap1(const QGraphicsEffect* self, intptr_t slot);
QPixmap* QGraphicsEffect_QBaseSourcePixmap1(const QGraphicsEffect* self, int system);
QPixmap* QGraphicsEffect_SourcePixmap2(const QGraphicsEffect* self, int system, QPoint* offset);
void QGraphicsEffect_OnSourcePixmap2(const QGraphicsEffect* self, intptr_t slot);
QPixmap* QGraphicsEffect_QBaseSourcePixmap2(const QGraphicsEffect* self, int system, QPoint* offset);
QPixmap* QGraphicsEffect_SourcePixmap3(const QGraphicsEffect* self, int system, QPoint* offset, int mode);
void QGraphicsEffect_OnSourcePixmap3(const QGraphicsEffect* self, intptr_t slot);
QPixmap* QGraphicsEffect_QBaseSourcePixmap3(const QGraphicsEffect* self, int system, QPoint* offset, int mode);
void QGraphicsEffect_Delete(QGraphicsEffect* self);

QGraphicsColorizeEffect* QGraphicsColorizeEffect_new();
QGraphicsColorizeEffect* QGraphicsColorizeEffect_new2(QObject* parent);
libqt_string QGraphicsColorizeEffect_Tr(const char* s);
QColor* QGraphicsColorizeEffect_Color(const QGraphicsColorizeEffect* self);
double QGraphicsColorizeEffect_Strength(const QGraphicsColorizeEffect* self);
void QGraphicsColorizeEffect_SetColor(QGraphicsColorizeEffect* self, const QColor* c);
void QGraphicsColorizeEffect_SetStrength(QGraphicsColorizeEffect* self, double strength);
void QGraphicsColorizeEffect_ColorChanged(QGraphicsColorizeEffect* self, const QColor* color);
void QGraphicsColorizeEffect_Connect_ColorChanged(QGraphicsColorizeEffect* self, intptr_t slot);
void QGraphicsColorizeEffect_StrengthChanged(QGraphicsColorizeEffect* self, double strength);
void QGraphicsColorizeEffect_Connect_StrengthChanged(QGraphicsColorizeEffect* self, intptr_t slot);
void QGraphicsColorizeEffect_Draw(QGraphicsColorizeEffect* self, QPainter* painter);
libqt_string QGraphicsColorizeEffect_Tr2(const char* s, const char* c);
libqt_string QGraphicsColorizeEffect_Tr3(const char* s, const char* c, int n);
void QGraphicsColorizeEffect_OnDraw(QGraphicsColorizeEffect* self, intptr_t slot);
void QGraphicsColorizeEffect_QBaseDraw(QGraphicsColorizeEffect* self, QPainter* painter);
void QGraphicsColorizeEffect_Delete(QGraphicsColorizeEffect* self);

QGraphicsBlurEffect* QGraphicsBlurEffect_new();
QGraphicsBlurEffect* QGraphicsBlurEffect_new2(QObject* parent);
libqt_string QGraphicsBlurEffect_Tr(const char* s);
QRectF* QGraphicsBlurEffect_BoundingRectFor(const QGraphicsBlurEffect* self, const QRectF* rect);
double QGraphicsBlurEffect_BlurRadius(const QGraphicsBlurEffect* self);
int QGraphicsBlurEffect_BlurHints(const QGraphicsBlurEffect* self);
void QGraphicsBlurEffect_SetBlurRadius(QGraphicsBlurEffect* self, double blurRadius);
void QGraphicsBlurEffect_SetBlurHints(QGraphicsBlurEffect* self, int hints);
void QGraphicsBlurEffect_BlurRadiusChanged(QGraphicsBlurEffect* self, double blurRadius);
void QGraphicsBlurEffect_Connect_BlurRadiusChanged(QGraphicsBlurEffect* self, intptr_t slot);
void QGraphicsBlurEffect_BlurHintsChanged(QGraphicsBlurEffect* self, int hints);
void QGraphicsBlurEffect_Connect_BlurHintsChanged(QGraphicsBlurEffect* self, intptr_t slot);
void QGraphicsBlurEffect_Draw(QGraphicsBlurEffect* self, QPainter* painter);
libqt_string QGraphicsBlurEffect_Tr2(const char* s, const char* c);
libqt_string QGraphicsBlurEffect_Tr3(const char* s, const char* c, int n);
void QGraphicsBlurEffect_OnBoundingRectFor(const QGraphicsBlurEffect* self, intptr_t slot);
QRectF* QGraphicsBlurEffect_QBaseBoundingRectFor(const QGraphicsBlurEffect* self, const QRectF* rect);
void QGraphicsBlurEffect_OnDraw(QGraphicsBlurEffect* self, intptr_t slot);
void QGraphicsBlurEffect_QBaseDraw(QGraphicsBlurEffect* self, QPainter* painter);
void QGraphicsBlurEffect_Delete(QGraphicsBlurEffect* self);

QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new();
QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new2(QObject* parent);
libqt_string QGraphicsDropShadowEffect_Tr(const char* s);
QRectF* QGraphicsDropShadowEffect_BoundingRectFor(const QGraphicsDropShadowEffect* self, const QRectF* rect);
QPointF* QGraphicsDropShadowEffect_Offset(const QGraphicsDropShadowEffect* self);
double QGraphicsDropShadowEffect_XOffset(const QGraphicsDropShadowEffect* self);
double QGraphicsDropShadowEffect_YOffset(const QGraphicsDropShadowEffect* self);
double QGraphicsDropShadowEffect_BlurRadius(const QGraphicsDropShadowEffect* self);
QColor* QGraphicsDropShadowEffect_Color(const QGraphicsDropShadowEffect* self);
void QGraphicsDropShadowEffect_SetOffset(QGraphicsDropShadowEffect* self, const QPointF* ofs);
void QGraphicsDropShadowEffect_SetOffset2(QGraphicsDropShadowEffect* self, double dx, double dy);
void QGraphicsDropShadowEffect_SetOffset3(QGraphicsDropShadowEffect* self, double d);
void QGraphicsDropShadowEffect_SetXOffset(QGraphicsDropShadowEffect* self, double dx);
void QGraphicsDropShadowEffect_SetYOffset(QGraphicsDropShadowEffect* self, double dy);
void QGraphicsDropShadowEffect_SetBlurRadius(QGraphicsDropShadowEffect* self, double blurRadius);
void QGraphicsDropShadowEffect_SetColor(QGraphicsDropShadowEffect* self, const QColor* color);
void QGraphicsDropShadowEffect_OffsetChanged(QGraphicsDropShadowEffect* self, const QPointF* offset);
void QGraphicsDropShadowEffect_Connect_OffsetChanged(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_BlurRadiusChanged(QGraphicsDropShadowEffect* self, double blurRadius);
void QGraphicsDropShadowEffect_Connect_BlurRadiusChanged(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_ColorChanged(QGraphicsDropShadowEffect* self, const QColor* color);
void QGraphicsDropShadowEffect_Connect_ColorChanged(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_Draw(QGraphicsDropShadowEffect* self, QPainter* painter);
libqt_string QGraphicsDropShadowEffect_Tr2(const char* s, const char* c);
libqt_string QGraphicsDropShadowEffect_Tr3(const char* s, const char* c, int n);
void QGraphicsDropShadowEffect_OnBoundingRectFor(const QGraphicsDropShadowEffect* self, intptr_t slot);
QRectF* QGraphicsDropShadowEffect_QBaseBoundingRectFor(const QGraphicsDropShadowEffect* self, const QRectF* rect);
void QGraphicsDropShadowEffect_OnDraw(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_QBaseDraw(QGraphicsDropShadowEffect* self, QPainter* painter);
void QGraphicsDropShadowEffect_Delete(QGraphicsDropShadowEffect* self);

QGraphicsOpacityEffect* QGraphicsOpacityEffect_new();
QGraphicsOpacityEffect* QGraphicsOpacityEffect_new2(QObject* parent);
libqt_string QGraphicsOpacityEffect_Tr(const char* s);
double QGraphicsOpacityEffect_Opacity(const QGraphicsOpacityEffect* self);
QBrush* QGraphicsOpacityEffect_OpacityMask(const QGraphicsOpacityEffect* self);
void QGraphicsOpacityEffect_SetOpacity(QGraphicsOpacityEffect* self, double opacity);
void QGraphicsOpacityEffect_SetOpacityMask(QGraphicsOpacityEffect* self, const QBrush* mask);
void QGraphicsOpacityEffect_OpacityChanged(QGraphicsOpacityEffect* self, double opacity);
void QGraphicsOpacityEffect_Connect_OpacityChanged(QGraphicsOpacityEffect* self, intptr_t slot);
void QGraphicsOpacityEffect_OpacityMaskChanged(QGraphicsOpacityEffect* self, const QBrush* mask);
void QGraphicsOpacityEffect_Connect_OpacityMaskChanged(QGraphicsOpacityEffect* self, intptr_t slot);
void QGraphicsOpacityEffect_Draw(QGraphicsOpacityEffect* self, QPainter* painter);
libqt_string QGraphicsOpacityEffect_Tr2(const char* s, const char* c);
libqt_string QGraphicsOpacityEffect_Tr3(const char* s, const char* c, int n);
void QGraphicsOpacityEffect_OnDraw(QGraphicsOpacityEffect* self, intptr_t slot);
void QGraphicsOpacityEffect_QBaseDraw(QGraphicsOpacityEffect* self, QPainter* painter);
void QGraphicsOpacityEffect_Delete(QGraphicsOpacityEffect* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
