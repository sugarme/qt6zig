#pragma once
#ifndef QPIESERIES_H_C_LIB
#define QPIESERIES_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QObject QObject;
typedef struct QPieSeries QPieSeries;
typedef struct QPieSlice QPieSlice;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QPieSeries* QPieSeries_new();
QPieSeries* QPieSeries_new2(QObject* parent);
libqt_string QPieSeries_Tr(const char* s);
int QPieSeries_Type(const QPieSeries* self);
bool QPieSeries_Append(QPieSeries* self, QPieSlice* slice);
bool QPieSeries_Append2(QPieSeries* self, const libqt_list slices);
QPieSeries* QPieSeries_OperatorShiftLeft(QPieSeries* self, QPieSlice* slice);
QPieSlice* QPieSeries_Append3(QPieSeries* self, const libqt_string label, double value);
bool QPieSeries_Insert(QPieSeries* self, int index, QPieSlice* slice);
bool QPieSeries_Remove(QPieSeries* self, QPieSlice* slice);
bool QPieSeries_Take(QPieSeries* self, QPieSlice* slice);
void QPieSeries_Clear(QPieSeries* self);
libqt_list QPieSeries_Slices(const QPieSeries* self);
int QPieSeries_Count(const QPieSeries* self);
bool QPieSeries_IsEmpty(const QPieSeries* self);
double QPieSeries_Sum(const QPieSeries* self);
void QPieSeries_SetHoleSize(QPieSeries* self, double holeSize);
double QPieSeries_HoleSize(const QPieSeries* self);
void QPieSeries_SetHorizontalPosition(QPieSeries* self, double relativePosition);
double QPieSeries_HorizontalPosition(const QPieSeries* self);
void QPieSeries_SetVerticalPosition(QPieSeries* self, double relativePosition);
double QPieSeries_VerticalPosition(const QPieSeries* self);
void QPieSeries_SetPieSize(QPieSeries* self, double relativeSize);
double QPieSeries_PieSize(const QPieSeries* self);
void QPieSeries_SetPieStartAngle(QPieSeries* self, double startAngle);
double QPieSeries_PieStartAngle(const QPieSeries* self);
void QPieSeries_SetPieEndAngle(QPieSeries* self, double endAngle);
double QPieSeries_PieEndAngle(const QPieSeries* self);
void QPieSeries_SetLabelsVisible(QPieSeries* self);
void QPieSeries_SetLabelsPosition(QPieSeries* self, int position);
void QPieSeries_Added(QPieSeries* self, const libqt_list slices);
void QPieSeries_Connect_Added(QPieSeries* self, intptr_t slot);
void QPieSeries_Removed(QPieSeries* self, const libqt_list slices);
void QPieSeries_Connect_Removed(QPieSeries* self, intptr_t slot);
void QPieSeries_Clicked(QPieSeries* self, QPieSlice* slice);
void QPieSeries_Connect_Clicked(QPieSeries* self, intptr_t slot);
void QPieSeries_Hovered(QPieSeries* self, QPieSlice* slice, bool state);
void QPieSeries_Connect_Hovered(QPieSeries* self, intptr_t slot);
void QPieSeries_Pressed(QPieSeries* self, QPieSlice* slice);
void QPieSeries_Connect_Pressed(QPieSeries* self, intptr_t slot);
void QPieSeries_Released(QPieSeries* self, QPieSlice* slice);
void QPieSeries_Connect_Released(QPieSeries* self, intptr_t slot);
void QPieSeries_DoubleClicked(QPieSeries* self, QPieSlice* slice);
void QPieSeries_Connect_DoubleClicked(QPieSeries* self, intptr_t slot);
void QPieSeries_CountChanged(QPieSeries* self);
void QPieSeries_Connect_CountChanged(QPieSeries* self, intptr_t slot);
void QPieSeries_SumChanged(QPieSeries* self);
void QPieSeries_Connect_SumChanged(QPieSeries* self, intptr_t slot);
libqt_string QPieSeries_Tr2(const char* s, const char* c);
libqt_string QPieSeries_Tr3(const char* s, const char* c, int n);
void QPieSeries_SetLabelsVisible1(QPieSeries* self, bool visible);
void QPieSeries_OnType(const QPieSeries* self, intptr_t slot);
int QPieSeries_QBaseType(const QPieSeries* self);
void QPieSeries_Delete(QPieSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
