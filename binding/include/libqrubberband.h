#pragma once
#ifndef QRUBBERBAND_H_C_LIB
#define QRUBBERBAND_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QEvent QEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QRubberBand QRubberBand;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionRubberBand QStyleOptionRubberBand;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QRubberBand* QRubberBand_new(int param1);
QRubberBand* QRubberBand_new2(int param1, QWidget* param2);
libqt_string QRubberBand_Tr(const char* s);
int QRubberBand_Shape(const QRubberBand* self);
void QRubberBand_SetGeometry(QRubberBand* self, const QRect* r);
void QRubberBand_SetGeometry2(QRubberBand* self, int x, int y, int w, int h);
void QRubberBand_Move(QRubberBand* self, int x, int y);
void QRubberBand_Move2(QRubberBand* self, const QPoint* p);
void QRubberBand_Resize(QRubberBand* self, int w, int h);
void QRubberBand_Resize2(QRubberBand* self, const QSize* s);
bool QRubberBand_Event(QRubberBand* self, QEvent* e);
void QRubberBand_PaintEvent(QRubberBand* self, QPaintEvent* param1);
void QRubberBand_ChangeEvent(QRubberBand* self, QEvent* param1);
void QRubberBand_ShowEvent(QRubberBand* self, QShowEvent* param1);
void QRubberBand_ResizeEvent(QRubberBand* self, QResizeEvent* param1);
void QRubberBand_MoveEvent(QRubberBand* self, QMoveEvent* param1);
void QRubberBand_InitStyleOption(const QRubberBand* self, QStyleOptionRubberBand* option);
libqt_string QRubberBand_Tr2(const char* s, const char* c);
libqt_string QRubberBand_Tr3(const char* s, const char* c, int n);
void QRubberBand_OnEvent(QRubberBand* self, intptr_t slot);
bool QRubberBand_QBaseEvent(QRubberBand* self, QEvent* e);
void QRubberBand_OnPaintEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBasePaintEvent(QRubberBand* self, QPaintEvent* param1);
void QRubberBand_OnChangeEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseChangeEvent(QRubberBand* self, QEvent* param1);
void QRubberBand_OnShowEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseShowEvent(QRubberBand* self, QShowEvent* param1);
void QRubberBand_OnResizeEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseResizeEvent(QRubberBand* self, QResizeEvent* param1);
void QRubberBand_OnMoveEvent(QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseMoveEvent(QRubberBand* self, QMoveEvent* param1);
void QRubberBand_OnInitStyleOption(const QRubberBand* self, intptr_t slot);
void QRubberBand_QBaseInitStyleOption(const QRubberBand* self, QStyleOptionRubberBand* option);
void QRubberBand_Delete(QRubberBand* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
