#pragma once
#ifndef QPRINTPREVIEWWIDGET_H_C_LIB
#define QPRINTPREVIEWWIDGET_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPrintPreviewWidget QPrintPreviewWidget;
typedef struct QPrinter QPrinter;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QPrintPreviewWidget* QPrintPreviewWidget_new(QWidget* parent);
QPrintPreviewWidget* QPrintPreviewWidget_new2(QPrinter* printer);
QPrintPreviewWidget* QPrintPreviewWidget_new3();
QPrintPreviewWidget* QPrintPreviewWidget_new4(QPrinter* printer, QWidget* parent);
QPrintPreviewWidget* QPrintPreviewWidget_new5(QPrinter* printer, QWidget* parent, int flags);
QPrintPreviewWidget* QPrintPreviewWidget_new6(QWidget* parent, int flags);
libqt_string QPrintPreviewWidget_Tr(const char* s);
double QPrintPreviewWidget_ZoomFactor(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_Orientation(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_ViewMode(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_ZoomMode(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_CurrentPage(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_PageCount(const QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetVisible(QPrintPreviewWidget* self, bool visible);
void QPrintPreviewWidget_Print(QPrintPreviewWidget* self);
void QPrintPreviewWidget_ZoomIn(QPrintPreviewWidget* self);
void QPrintPreviewWidget_ZoomOut(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetZoomFactor(QPrintPreviewWidget* self, double zoomFactor);
void QPrintPreviewWidget_SetOrientation(QPrintPreviewWidget* self, int orientation);
void QPrintPreviewWidget_SetViewMode(QPrintPreviewWidget* self, int viewMode);
void QPrintPreviewWidget_SetZoomMode(QPrintPreviewWidget* self, int zoomMode);
void QPrintPreviewWidget_SetCurrentPage(QPrintPreviewWidget* self, int pageNumber);
void QPrintPreviewWidget_FitToWidth(QPrintPreviewWidget* self);
void QPrintPreviewWidget_FitInView(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetLandscapeOrientation(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetPortraitOrientation(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetSinglePageViewMode(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetFacingPagesViewMode(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetAllPagesViewMode(QPrintPreviewWidget* self);
void QPrintPreviewWidget_UpdatePreview(QPrintPreviewWidget* self);
void QPrintPreviewWidget_PaintRequested(QPrintPreviewWidget* self, QPrinter* printer);
void QPrintPreviewWidget_Connect_PaintRequested(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_PreviewChanged(QPrintPreviewWidget* self);
void QPrintPreviewWidget_Connect_PreviewChanged(QPrintPreviewWidget* self, intptr_t slot);
libqt_string QPrintPreviewWidget_Tr2(const char* s, const char* c);
libqt_string QPrintPreviewWidget_Tr3(const char* s, const char* c, int n);
void QPrintPreviewWidget_ZoomIn1(QPrintPreviewWidget* self, double zoom);
void QPrintPreviewWidget_ZoomOut1(QPrintPreviewWidget* self, double zoom);
void QPrintPreviewWidget_OnSetVisible(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_QBaseSetVisible(QPrintPreviewWidget* self, bool visible);
void QPrintPreviewWidget_Delete(QPrintPreviewWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
