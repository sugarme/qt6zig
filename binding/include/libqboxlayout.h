#pragma once
#ifndef QBOXLAYOUT_H_C_LIB
#define QBOXLAYOUT_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBoxLayout QBoxLayout;
typedef struct QHBoxLayout QHBoxLayout;
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSpacerItem QSpacerItem;
typedef struct QVBoxLayout QVBoxLayout;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QBoxLayout* QBoxLayout_new(int param1);
QBoxLayout* QBoxLayout_new2(int param1, QWidget* parent);
libqt_string QBoxLayout_Tr(const char* s);
int QBoxLayout_Direction(const QBoxLayout* self);
void QBoxLayout_SetDirection(QBoxLayout* self, int direction);
void QBoxLayout_AddSpacing(QBoxLayout* self, int size);
void QBoxLayout_AddStretch(QBoxLayout* self);
void QBoxLayout_AddSpacerItem(QBoxLayout* self, QSpacerItem* spacerItem);
void QBoxLayout_AddWidget(QBoxLayout* self, QWidget* param1);
void QBoxLayout_AddLayout(QBoxLayout* self, QLayout* layout);
void QBoxLayout_AddStrut(QBoxLayout* self, int param1);
void QBoxLayout_AddItem(QBoxLayout* self, QLayoutItem* param1);
void QBoxLayout_InsertSpacing(QBoxLayout* self, int index, int size);
void QBoxLayout_InsertStretch(QBoxLayout* self, int index);
void QBoxLayout_InsertSpacerItem(QBoxLayout* self, int index, QSpacerItem* spacerItem);
void QBoxLayout_InsertWidget(QBoxLayout* self, int index, QWidget* widget);
void QBoxLayout_InsertLayout(QBoxLayout* self, int index, QLayout* layout);
void QBoxLayout_InsertItem(QBoxLayout* self, int index, QLayoutItem* param2);
int QBoxLayout_Spacing(const QBoxLayout* self);
void QBoxLayout_SetSpacing(QBoxLayout* self, int spacing);
bool QBoxLayout_SetStretchFactor(QBoxLayout* self, QWidget* w, int stretch);
bool QBoxLayout_SetStretchFactor2(QBoxLayout* self, QLayout* l, int stretch);
void QBoxLayout_SetStretch(QBoxLayout* self, int index, int stretch);
int QBoxLayout_Stretch(const QBoxLayout* self, int index);
QSize* QBoxLayout_SizeHint(const QBoxLayout* self);
QSize* QBoxLayout_MinimumSize(const QBoxLayout* self);
QSize* QBoxLayout_MaximumSize(const QBoxLayout* self);
bool QBoxLayout_HasHeightForWidth(const QBoxLayout* self);
int QBoxLayout_HeightForWidth(const QBoxLayout* self, int param1);
int QBoxLayout_MinimumHeightForWidth(const QBoxLayout* self, int param1);
int QBoxLayout_ExpandingDirections(const QBoxLayout* self);
void QBoxLayout_Invalidate(QBoxLayout* self);
QLayoutItem* QBoxLayout_ItemAt(const QBoxLayout* self, int param1);
QLayoutItem* QBoxLayout_TakeAt(QBoxLayout* self, int param1);
int QBoxLayout_Count(const QBoxLayout* self);
void QBoxLayout_SetGeometry(QBoxLayout* self, const QRect* geometry);
libqt_string QBoxLayout_Tr2(const char* s, const char* c);
libqt_string QBoxLayout_Tr3(const char* s, const char* c, int n);
void QBoxLayout_AddStretch1(QBoxLayout* self, int stretch);
void QBoxLayout_AddWidget2(QBoxLayout* self, QWidget* param1, int stretch);
void QBoxLayout_AddWidget3(QBoxLayout* self, QWidget* param1, int stretch, int alignment);
void QBoxLayout_AddLayout2(QBoxLayout* self, QLayout* layout, int stretch);
void QBoxLayout_InsertStretch2(QBoxLayout* self, int index, int stretch);
void QBoxLayout_InsertWidget3(QBoxLayout* self, int index, QWidget* widget, int stretch);
void QBoxLayout_InsertWidget4(QBoxLayout* self, int index, QWidget* widget, int stretch, int alignment);
void QBoxLayout_InsertLayout3(QBoxLayout* self, int index, QLayout* layout, int stretch);
void QBoxLayout_OnAddItem(QBoxLayout* self, intptr_t slot);
void QBoxLayout_QBaseAddItem(QBoxLayout* self, QLayoutItem* param1);
void QBoxLayout_OnSpacing(const QBoxLayout* self, intptr_t slot);
int QBoxLayout_QBaseSpacing(const QBoxLayout* self);
void QBoxLayout_OnSetSpacing(QBoxLayout* self, intptr_t slot);
void QBoxLayout_QBaseSetSpacing(QBoxLayout* self, int spacing);
void QBoxLayout_OnSizeHint(const QBoxLayout* self, intptr_t slot);
QSize* QBoxLayout_QBaseSizeHint(const QBoxLayout* self);
void QBoxLayout_OnMinimumSize(const QBoxLayout* self, intptr_t slot);
QSize* QBoxLayout_QBaseMinimumSize(const QBoxLayout* self);
void QBoxLayout_OnMaximumSize(const QBoxLayout* self, intptr_t slot);
QSize* QBoxLayout_QBaseMaximumSize(const QBoxLayout* self);
void QBoxLayout_OnHasHeightForWidth(const QBoxLayout* self, intptr_t slot);
bool QBoxLayout_QBaseHasHeightForWidth(const QBoxLayout* self);
void QBoxLayout_OnHeightForWidth(const QBoxLayout* self, intptr_t slot);
int QBoxLayout_QBaseHeightForWidth(const QBoxLayout* self, int param1);
void QBoxLayout_OnMinimumHeightForWidth(const QBoxLayout* self, intptr_t slot);
int QBoxLayout_QBaseMinimumHeightForWidth(const QBoxLayout* self, int param1);
void QBoxLayout_OnExpandingDirections(const QBoxLayout* self, intptr_t slot);
int QBoxLayout_QBaseExpandingDirections(const QBoxLayout* self);
void QBoxLayout_OnInvalidate(QBoxLayout* self, intptr_t slot);
void QBoxLayout_QBaseInvalidate(QBoxLayout* self);
void QBoxLayout_OnItemAt(const QBoxLayout* self, intptr_t slot);
QLayoutItem* QBoxLayout_QBaseItemAt(const QBoxLayout* self, int param1);
void QBoxLayout_OnTakeAt(QBoxLayout* self, intptr_t slot);
QLayoutItem* QBoxLayout_QBaseTakeAt(QBoxLayout* self, int param1);
void QBoxLayout_OnCount(const QBoxLayout* self, intptr_t slot);
int QBoxLayout_QBaseCount(const QBoxLayout* self);
void QBoxLayout_OnSetGeometry(QBoxLayout* self, intptr_t slot);
void QBoxLayout_QBaseSetGeometry(QBoxLayout* self, const QRect* geometry);
void QBoxLayout_Delete(QBoxLayout* self);

QHBoxLayout* QHBoxLayout_new(QWidget* parent);
QHBoxLayout* QHBoxLayout_new2();
libqt_string QHBoxLayout_Tr(const char* s);
libqt_string QHBoxLayout_Tr2(const char* s, const char* c);
libqt_string QHBoxLayout_Tr3(const char* s, const char* c, int n);
void QHBoxLayout_Delete(QHBoxLayout* self);

QVBoxLayout* QVBoxLayout_new(QWidget* parent);
QVBoxLayout* QVBoxLayout_new2();
libqt_string QVBoxLayout_Tr(const char* s);
libqt_string QVBoxLayout_Tr2(const char* s, const char* c);
libqt_string QVBoxLayout_Tr3(const char* s, const char* c, int n);
void QVBoxLayout_Delete(QVBoxLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
