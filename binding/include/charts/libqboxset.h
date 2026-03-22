#pragma once
#ifndef QBOXSET_H_C_LIB
#define QBOXSET_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBoxSet QBoxSet;
typedef struct QBrush QBrush;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QBoxSet* QBoxSet_new();
QBoxSet* QBoxSet_new2(const double le, const double lq, const double m, const double uq, const double ue);
QBoxSet* QBoxSet_new3(const libqt_string label);
QBoxSet* QBoxSet_new4(const libqt_string label, QObject* parent);
QBoxSet* QBoxSet_new5(const double le, const double lq, const double m, const double uq, const double ue, const libqt_string label);
QBoxSet* QBoxSet_new6(const double le, const double lq, const double m, const double uq, const double ue, const libqt_string label, QObject* parent);
libqt_string QBoxSet_Tr(const char* s);
void QBoxSet_Append(QBoxSet* self, const double value);
void QBoxSet_Append2(QBoxSet* self, const libqt_list values);
void QBoxSet_Clear(QBoxSet* self);
void QBoxSet_SetLabel(QBoxSet* self, const libqt_string label);
libqt_string QBoxSet_Label(const QBoxSet* self);
QBoxSet* QBoxSet_OperatorShiftLeft(QBoxSet* self, const double* value);
void QBoxSet_SetValue(QBoxSet* self, const int index, const double value);
double QBoxSet_At(const QBoxSet* self, const int index);
double QBoxSet_OperatorSubscript(const QBoxSet* self, const int index);
int QBoxSet_Count(const QBoxSet* self);
void QBoxSet_SetPen(QBoxSet* self, const QPen* pen);
QPen* QBoxSet_Pen(const QBoxSet* self);
void QBoxSet_SetBrush(QBoxSet* self, const QBrush* brush);
QBrush* QBoxSet_Brush(const QBoxSet* self);
void QBoxSet_Clicked(QBoxSet* self);
void QBoxSet_Connect_Clicked(QBoxSet* self, intptr_t slot);
void QBoxSet_Hovered(QBoxSet* self, bool status);
void QBoxSet_Connect_Hovered(QBoxSet* self, intptr_t slot);
void QBoxSet_Pressed(QBoxSet* self);
void QBoxSet_Connect_Pressed(QBoxSet* self, intptr_t slot);
void QBoxSet_Released(QBoxSet* self);
void QBoxSet_Connect_Released(QBoxSet* self, intptr_t slot);
void QBoxSet_DoubleClicked(QBoxSet* self);
void QBoxSet_Connect_DoubleClicked(QBoxSet* self, intptr_t slot);
void QBoxSet_PenChanged(QBoxSet* self);
void QBoxSet_Connect_PenChanged(QBoxSet* self, intptr_t slot);
void QBoxSet_BrushChanged(QBoxSet* self);
void QBoxSet_Connect_BrushChanged(QBoxSet* self, intptr_t slot);
void QBoxSet_ValuesChanged(QBoxSet* self);
void QBoxSet_Connect_ValuesChanged(QBoxSet* self, intptr_t slot);
void QBoxSet_ValueChanged(QBoxSet* self, int index);
void QBoxSet_Connect_ValueChanged(QBoxSet* self, intptr_t slot);
void QBoxSet_Cleared(QBoxSet* self);
void QBoxSet_Connect_Cleared(QBoxSet* self, intptr_t slot);
libqt_string QBoxSet_Tr2(const char* s, const char* c);
libqt_string QBoxSet_Tr3(const char* s, const char* c, int n);
void QBoxSet_Delete(QBoxSet* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
