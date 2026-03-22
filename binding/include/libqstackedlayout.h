#pragma once
#ifndef QSTACKEDLAYOUT_H_C_LIB
#define QSTACKEDLAYOUT_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QStackedLayout QStackedLayout;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QStackedLayout* QStackedLayout_new(QWidget* parent);
QStackedLayout* QStackedLayout_new2();
QStackedLayout* QStackedLayout_new3(QLayout* parentLayout);
libqt_string QStackedLayout_Tr(const char* s);
int QStackedLayout_AddWidget(QStackedLayout* self, QWidget* w);
int QStackedLayout_InsertWidget(QStackedLayout* self, int index, QWidget* w);
QWidget* QStackedLayout_CurrentWidget(const QStackedLayout* self);
int QStackedLayout_CurrentIndex(const QStackedLayout* self);
QWidget* QStackedLayout_Widget(const QStackedLayout* self, int param1);
int QStackedLayout_Count(const QStackedLayout* self);
int QStackedLayout_StackingMode(const QStackedLayout* self);
void QStackedLayout_SetStackingMode(QStackedLayout* self, int stackingMode);
void QStackedLayout_AddItem(QStackedLayout* self, QLayoutItem* item);
QSize* QStackedLayout_SizeHint(const QStackedLayout* self);
QSize* QStackedLayout_MinimumSize(const QStackedLayout* self);
QLayoutItem* QStackedLayout_ItemAt(const QStackedLayout* self, int param1);
QLayoutItem* QStackedLayout_TakeAt(QStackedLayout* self, int param1);
void QStackedLayout_SetGeometry(QStackedLayout* self, const QRect* rect);
bool QStackedLayout_HasHeightForWidth(const QStackedLayout* self);
int QStackedLayout_HeightForWidth(const QStackedLayout* self, int width);
void QStackedLayout_WidgetRemoved(QStackedLayout* self, int index);
void QStackedLayout_Connect_WidgetRemoved(QStackedLayout* self, intptr_t slot);
void QStackedLayout_CurrentChanged(QStackedLayout* self, int index);
void QStackedLayout_Connect_CurrentChanged(QStackedLayout* self, intptr_t slot);
void QStackedLayout_SetCurrentIndex(QStackedLayout* self, int index);
void QStackedLayout_SetCurrentWidget(QStackedLayout* self, QWidget* w);
libqt_string QStackedLayout_Tr2(const char* s, const char* c);
libqt_string QStackedLayout_Tr3(const char* s, const char* c, int n);
void QStackedLayout_OnCount(const QStackedLayout* self, intptr_t slot);
int QStackedLayout_QBaseCount(const QStackedLayout* self);
void QStackedLayout_OnAddItem(QStackedLayout* self, intptr_t slot);
void QStackedLayout_QBaseAddItem(QStackedLayout* self, QLayoutItem* item);
void QStackedLayout_OnSizeHint(const QStackedLayout* self, intptr_t slot);
QSize* QStackedLayout_QBaseSizeHint(const QStackedLayout* self);
void QStackedLayout_OnMinimumSize(const QStackedLayout* self, intptr_t slot);
QSize* QStackedLayout_QBaseMinimumSize(const QStackedLayout* self);
void QStackedLayout_OnItemAt(const QStackedLayout* self, intptr_t slot);
QLayoutItem* QStackedLayout_QBaseItemAt(const QStackedLayout* self, int param1);
void QStackedLayout_OnTakeAt(QStackedLayout* self, intptr_t slot);
QLayoutItem* QStackedLayout_QBaseTakeAt(QStackedLayout* self, int param1);
void QStackedLayout_OnSetGeometry(QStackedLayout* self, intptr_t slot);
void QStackedLayout_QBaseSetGeometry(QStackedLayout* self, const QRect* rect);
void QStackedLayout_OnHasHeightForWidth(const QStackedLayout* self, intptr_t slot);
bool QStackedLayout_QBaseHasHeightForWidth(const QStackedLayout* self);
void QStackedLayout_OnHeightForWidth(const QStackedLayout* self, intptr_t slot);
int QStackedLayout_QBaseHeightForWidth(const QStackedLayout* self, int width);
void QStackedLayout_Delete(QStackedLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
