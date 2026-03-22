#pragma once
#ifndef QVALIDATOR_H_C_LIB
#define QVALIDATOR_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDoubleValidator QDoubleValidator;
typedef struct QIntValidator QIntValidator;
typedef struct QLocale QLocale;
typedef struct QObject QObject;
typedef struct QRegularExpression QRegularExpression;
typedef struct QRegularExpressionValidator QRegularExpressionValidator;
typedef struct QValidator QValidator;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QValidator* QValidator_new();
QValidator* QValidator_new2(QObject* parent);
libqt_string QValidator_Tr(const char* s);
void QValidator_SetLocale(QValidator* self, const QLocale* locale);
QLocale* QValidator_Locale(const QValidator* self);
int QValidator_Validate(const QValidator* self, libqt_string param1, int* param2);
void QValidator_Fixup(const QValidator* self, libqt_string param1);
void QValidator_Changed(QValidator* self);
void QValidator_Connect_Changed(QValidator* self, intptr_t slot);
libqt_string QValidator_Tr2(const char* s, const char* c);
libqt_string QValidator_Tr3(const char* s, const char* c, int n);
void QValidator_OnValidate(const QValidator* self, intptr_t slot);
int QValidator_QBaseValidate(const QValidator* self, libqt_string param1, int* param2);
void QValidator_OnFixup(const QValidator* self, intptr_t slot);
void QValidator_QBaseFixup(const QValidator* self, libqt_string param1);
void QValidator_Delete(QValidator* self);

QIntValidator* QIntValidator_new();
QIntValidator* QIntValidator_new2(int bottom, int top);
QIntValidator* QIntValidator_new3(QObject* parent);
QIntValidator* QIntValidator_new4(int bottom, int top, QObject* parent);
libqt_string QIntValidator_Tr(const char* s);
int QIntValidator_Validate(const QIntValidator* self, libqt_string param1, int* param2);
void QIntValidator_Fixup(const QIntValidator* self, libqt_string input);
void QIntValidator_SetBottom(QIntValidator* self, int bottom);
void QIntValidator_SetTop(QIntValidator* self, int top);
void QIntValidator_SetRange(QIntValidator* self, int bottom, int top);
int QIntValidator_Bottom(const QIntValidator* self);
int QIntValidator_Top(const QIntValidator* self);
void QIntValidator_BottomChanged(QIntValidator* self, int bottom);
void QIntValidator_Connect_BottomChanged(QIntValidator* self, intptr_t slot);
void QIntValidator_TopChanged(QIntValidator* self, int top);
void QIntValidator_Connect_TopChanged(QIntValidator* self, intptr_t slot);
libqt_string QIntValidator_Tr2(const char* s, const char* c);
libqt_string QIntValidator_Tr3(const char* s, const char* c, int n);
void QIntValidator_OnValidate(const QIntValidator* self, intptr_t slot);
int QIntValidator_QBaseValidate(const QIntValidator* self, libqt_string param1, int* param2);
void QIntValidator_OnFixup(const QIntValidator* self, intptr_t slot);
void QIntValidator_QBaseFixup(const QIntValidator* self, libqt_string input);
void QIntValidator_Delete(QIntValidator* self);

QDoubleValidator* QDoubleValidator_new();
QDoubleValidator* QDoubleValidator_new2(double bottom, double top, int decimals);
QDoubleValidator* QDoubleValidator_new3(QObject* parent);
QDoubleValidator* QDoubleValidator_new4(double bottom, double top, int decimals, QObject* parent);
libqt_string QDoubleValidator_Tr(const char* s);
int QDoubleValidator_Validate(const QDoubleValidator* self, libqt_string param1, int* param2);
void QDoubleValidator_Fixup(const QDoubleValidator* self, libqt_string input);
void QDoubleValidator_SetRange(QDoubleValidator* self, double bottom, double top, int decimals);
void QDoubleValidator_SetRange2(QDoubleValidator* self, double bottom, double top);
void QDoubleValidator_SetBottom(QDoubleValidator* self, double bottom);
void QDoubleValidator_SetTop(QDoubleValidator* self, double top);
void QDoubleValidator_SetDecimals(QDoubleValidator* self, int decimals);
void QDoubleValidator_SetNotation(QDoubleValidator* self, int notation);
double QDoubleValidator_Bottom(const QDoubleValidator* self);
double QDoubleValidator_Top(const QDoubleValidator* self);
int QDoubleValidator_Decimals(const QDoubleValidator* self);
int QDoubleValidator_Notation(const QDoubleValidator* self);
void QDoubleValidator_BottomChanged(QDoubleValidator* self, double bottom);
void QDoubleValidator_Connect_BottomChanged(QDoubleValidator* self, intptr_t slot);
void QDoubleValidator_TopChanged(QDoubleValidator* self, double top);
void QDoubleValidator_Connect_TopChanged(QDoubleValidator* self, intptr_t slot);
void QDoubleValidator_DecimalsChanged(QDoubleValidator* self, int decimals);
void QDoubleValidator_Connect_DecimalsChanged(QDoubleValidator* self, intptr_t slot);
void QDoubleValidator_NotationChanged(QDoubleValidator* self, int notation);
void QDoubleValidator_Connect_NotationChanged(QDoubleValidator* self, intptr_t slot);
libqt_string QDoubleValidator_Tr2(const char* s, const char* c);
libqt_string QDoubleValidator_Tr3(const char* s, const char* c, int n);
void QDoubleValidator_OnValidate(const QDoubleValidator* self, intptr_t slot);
int QDoubleValidator_QBaseValidate(const QDoubleValidator* self, libqt_string param1, int* param2);
void QDoubleValidator_OnFixup(const QDoubleValidator* self, intptr_t slot);
void QDoubleValidator_QBaseFixup(const QDoubleValidator* self, libqt_string input);
void QDoubleValidator_Delete(QDoubleValidator* self);

QRegularExpressionValidator* QRegularExpressionValidator_new();
QRegularExpressionValidator* QRegularExpressionValidator_new2(const QRegularExpression* re);
QRegularExpressionValidator* QRegularExpressionValidator_new3(QObject* parent);
QRegularExpressionValidator* QRegularExpressionValidator_new4(const QRegularExpression* re, QObject* parent);
libqt_string QRegularExpressionValidator_Tr(const char* s);
int QRegularExpressionValidator_Validate(const QRegularExpressionValidator* self, libqt_string input, int* pos);
QRegularExpression* QRegularExpressionValidator_RegularExpression(const QRegularExpressionValidator* self);
void QRegularExpressionValidator_SetRegularExpression(QRegularExpressionValidator* self, const QRegularExpression* re);
void QRegularExpressionValidator_RegularExpressionChanged(QRegularExpressionValidator* self, const QRegularExpression* re);
void QRegularExpressionValidator_Connect_RegularExpressionChanged(QRegularExpressionValidator* self, intptr_t slot);
libqt_string QRegularExpressionValidator_Tr2(const char* s, const char* c);
libqt_string QRegularExpressionValidator_Tr3(const char* s, const char* c, int n);
void QRegularExpressionValidator_OnValidate(const QRegularExpressionValidator* self, intptr_t slot);
int QRegularExpressionValidator_QBaseValidate(const QRegularExpressionValidator* self, libqt_string input, int* pos);
void QRegularExpressionValidator_Delete(QRegularExpressionValidator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
