#pragma once
#ifndef QSVGWIDGET_H_C_LIB
#define QSVGWIDGET_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPaintEvent QPaintEvent;
typedef struct QSize QSize;
typedef struct QSvgRenderer QSvgRenderer;
typedef struct QSvgWidget QSvgWidget;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSvgWidget* QSvgWidget_new(QWidget* parent);
QSvgWidget* QSvgWidget_new2();
QSvgWidget* QSvgWidget_new3(const libqt_string file);
QSvgWidget* QSvgWidget_new4(const libqt_string file, QWidget* parent);
libqt_string QSvgWidget_Tr(const char* s);
QSvgRenderer* QSvgWidget_Renderer(const QSvgWidget* self);
QSize* QSvgWidget_SizeHint(const QSvgWidget* self);
quint32 QSvgWidget_Options(const QSvgWidget* self);
void QSvgWidget_SetOptions(QSvgWidget* self, quint32 options);
void QSvgWidget_Load(QSvgWidget* self, const libqt_string file);
void QSvgWidget_Load2(QSvgWidget* self, const libqt_string contents);
void QSvgWidget_PaintEvent(QSvgWidget* self, QPaintEvent* event);
libqt_string QSvgWidget_Tr2(const char* s, const char* c);
libqt_string QSvgWidget_Tr3(const char* s, const char* c, int n);
void QSvgWidget_OnSizeHint(const QSvgWidget* self, intptr_t slot);
QSize* QSvgWidget_QBaseSizeHint(const QSvgWidget* self);
void QSvgWidget_OnPaintEvent(QSvgWidget* self, intptr_t slot);
void QSvgWidget_QBasePaintEvent(QSvgWidget* self, QPaintEvent* event);
void QSvgWidget_Delete(QSvgWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
