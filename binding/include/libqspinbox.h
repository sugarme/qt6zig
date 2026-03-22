#pragma once
#ifndef QSPINBOX_H_C_LIB
#define QSPINBOX_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractSpinBox QAbstractSpinBox;
typedef struct QDoubleSpinBox QDoubleSpinBox;
typedef struct QEvent QEvent;
typedef struct QSpinBox QSpinBox;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSpinBox* QSpinBox_new(QWidget* parent);
QSpinBox* QSpinBox_new2();
libqt_string QSpinBox_Tr(const char* s);
int QSpinBox_Value(const QSpinBox* self);
libqt_string QSpinBox_Prefix(const QSpinBox* self);
void QSpinBox_SetPrefix(QSpinBox* self, const libqt_string prefix);
libqt_string QSpinBox_Suffix(const QSpinBox* self);
void QSpinBox_SetSuffix(QSpinBox* self, const libqt_string suffix);
libqt_string QSpinBox_CleanText(const QSpinBox* self);
int QSpinBox_SingleStep(const QSpinBox* self);
void QSpinBox_SetSingleStep(QSpinBox* self, int val);
int QSpinBox_Minimum(const QSpinBox* self);
void QSpinBox_SetMinimum(QSpinBox* self, int min);
int QSpinBox_Maximum(const QSpinBox* self);
void QSpinBox_SetMaximum(QSpinBox* self, int max);
void QSpinBox_SetRange(QSpinBox* self, int min, int max);
int QSpinBox_StepType(const QSpinBox* self);
void QSpinBox_SetStepType(QSpinBox* self, int stepType);
int QSpinBox_DisplayIntegerBase(const QSpinBox* self);
void QSpinBox_SetDisplayIntegerBase(QSpinBox* self, int base);
bool QSpinBox_Event(QSpinBox* self, QEvent* event);
int QSpinBox_Validate(const QSpinBox* self, libqt_string input, int* pos);
int QSpinBox_ValueFromText(const QSpinBox* self, const libqt_string text);
libqt_string QSpinBox_TextFromValue(const QSpinBox* self, int val);
void QSpinBox_Fixup(const QSpinBox* self, libqt_string str);
void QSpinBox_SetValue(QSpinBox* self, int val);
void QSpinBox_ValueChanged(QSpinBox* self, int param1);
void QSpinBox_Connect_ValueChanged(QSpinBox* self, intptr_t slot);
void QSpinBox_TextChanged(QSpinBox* self, const libqt_string param1);
void QSpinBox_Connect_TextChanged(QSpinBox* self, intptr_t slot);
libqt_string QSpinBox_Tr2(const char* s, const char* c);
libqt_string QSpinBox_Tr3(const char* s, const char* c, int n);
void QSpinBox_OnEvent(QSpinBox* self, intptr_t slot);
bool QSpinBox_QBaseEvent(QSpinBox* self, QEvent* event);
void QSpinBox_OnValidate(const QSpinBox* self, intptr_t slot);
int QSpinBox_QBaseValidate(const QSpinBox* self, libqt_string input, int* pos);
void QSpinBox_OnValueFromText(const QSpinBox* self, intptr_t slot);
int QSpinBox_QBaseValueFromText(const QSpinBox* self, const libqt_string text);
void QSpinBox_OnTextFromValue(const QSpinBox* self, intptr_t slot);
libqt_string QSpinBox_QBaseTextFromValue(const QSpinBox* self, int val);
void QSpinBox_OnFixup(const QSpinBox* self, intptr_t slot);
void QSpinBox_QBaseFixup(const QSpinBox* self, libqt_string str);
void QSpinBox_Delete(QSpinBox* self);

QDoubleSpinBox* QDoubleSpinBox_new(QWidget* parent);
QDoubleSpinBox* QDoubleSpinBox_new2();
libqt_string QDoubleSpinBox_Tr(const char* s);
double QDoubleSpinBox_Value(const QDoubleSpinBox* self);
libqt_string QDoubleSpinBox_Prefix(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetPrefix(QDoubleSpinBox* self, const libqt_string prefix);
libqt_string QDoubleSpinBox_Suffix(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetSuffix(QDoubleSpinBox* self, const libqt_string suffix);
libqt_string QDoubleSpinBox_CleanText(const QDoubleSpinBox* self);
double QDoubleSpinBox_SingleStep(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetSingleStep(QDoubleSpinBox* self, double val);
double QDoubleSpinBox_Minimum(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetMinimum(QDoubleSpinBox* self, double min);
double QDoubleSpinBox_Maximum(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetMaximum(QDoubleSpinBox* self, double max);
void QDoubleSpinBox_SetRange(QDoubleSpinBox* self, double min, double max);
int QDoubleSpinBox_StepType(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetStepType(QDoubleSpinBox* self, int stepType);
int QDoubleSpinBox_Decimals(const QDoubleSpinBox* self);
void QDoubleSpinBox_SetDecimals(QDoubleSpinBox* self, int prec);
int QDoubleSpinBox_Validate(const QDoubleSpinBox* self, libqt_string input, int* pos);
double QDoubleSpinBox_ValueFromText(const QDoubleSpinBox* self, const libqt_string text);
libqt_string QDoubleSpinBox_TextFromValue(const QDoubleSpinBox* self, double val);
void QDoubleSpinBox_Fixup(const QDoubleSpinBox* self, libqt_string str);
void QDoubleSpinBox_SetValue(QDoubleSpinBox* self, double val);
void QDoubleSpinBox_ValueChanged(QDoubleSpinBox* self, double param1);
void QDoubleSpinBox_Connect_ValueChanged(QDoubleSpinBox* self, intptr_t slot);
void QDoubleSpinBox_TextChanged(QDoubleSpinBox* self, const libqt_string param1);
void QDoubleSpinBox_Connect_TextChanged(QDoubleSpinBox* self, intptr_t slot);
libqt_string QDoubleSpinBox_Tr2(const char* s, const char* c);
libqt_string QDoubleSpinBox_Tr3(const char* s, const char* c, int n);
void QDoubleSpinBox_OnValidate(const QDoubleSpinBox* self, intptr_t slot);
int QDoubleSpinBox_QBaseValidate(const QDoubleSpinBox* self, libqt_string input, int* pos);
void QDoubleSpinBox_OnValueFromText(const QDoubleSpinBox* self, intptr_t slot);
double QDoubleSpinBox_QBaseValueFromText(const QDoubleSpinBox* self, const libqt_string text);
void QDoubleSpinBox_OnTextFromValue(const QDoubleSpinBox* self, intptr_t slot);
libqt_string QDoubleSpinBox_QBaseTextFromValue(const QDoubleSpinBox* self, double val);
void QDoubleSpinBox_OnFixup(const QDoubleSpinBox* self, intptr_t slot);
void QDoubleSpinBox_QBaseFixup(const QDoubleSpinBox* self, libqt_string str);
void QDoubleSpinBox_Delete(QDoubleSpinBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
