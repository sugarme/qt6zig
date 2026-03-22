#pragma once
#ifndef QINPUTDIALOG_H_C_LIB
#define QINPUTDIALOG_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDialog QDialog;
typedef struct QInputDialog QInputDialog;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QInputDialog* QInputDialog_new(QWidget* parent);
QInputDialog* QInputDialog_new2();
QInputDialog* QInputDialog_new3(QWidget* parent, int flags);
libqt_string QInputDialog_Tr(const char* s);
void QInputDialog_SetInputMode(QInputDialog* self, int mode);
int QInputDialog_InputMode(const QInputDialog* self);
void QInputDialog_SetLabelText(QInputDialog* self, const libqt_string text);
libqt_string QInputDialog_LabelText(const QInputDialog* self);
void QInputDialog_SetOption(QInputDialog* self, int option);
bool QInputDialog_TestOption(const QInputDialog* self, int option);
void QInputDialog_SetOptions(QInputDialog* self, int options);
int QInputDialog_Options(const QInputDialog* self);
void QInputDialog_SetTextValue(QInputDialog* self, const libqt_string text);
libqt_string QInputDialog_TextValue(const QInputDialog* self);
void QInputDialog_SetTextEchoMode(QInputDialog* self, int mode);
int QInputDialog_TextEchoMode(const QInputDialog* self);
void QInputDialog_SetComboBoxEditable(QInputDialog* self, bool editable);
bool QInputDialog_IsComboBoxEditable(const QInputDialog* self);
void QInputDialog_SetComboBoxItems(QInputDialog* self, const libqt_list items);
libqt_list QInputDialog_ComboBoxItems(const QInputDialog* self);
void QInputDialog_SetIntValue(QInputDialog* self, int value);
int QInputDialog_IntValue(const QInputDialog* self);
void QInputDialog_SetIntMinimum(QInputDialog* self, int min);
int QInputDialog_IntMinimum(const QInputDialog* self);
void QInputDialog_SetIntMaximum(QInputDialog* self, int max);
int QInputDialog_IntMaximum(const QInputDialog* self);
void QInputDialog_SetIntRange(QInputDialog* self, int min, int max);
void QInputDialog_SetIntStep(QInputDialog* self, int step);
int QInputDialog_IntStep(const QInputDialog* self);
void QInputDialog_SetDoubleValue(QInputDialog* self, double value);
double QInputDialog_DoubleValue(const QInputDialog* self);
void QInputDialog_SetDoubleMinimum(QInputDialog* self, double min);
double QInputDialog_DoubleMinimum(const QInputDialog* self);
void QInputDialog_SetDoubleMaximum(QInputDialog* self, double max);
double QInputDialog_DoubleMaximum(const QInputDialog* self);
void QInputDialog_SetDoubleRange(QInputDialog* self, double min, double max);
void QInputDialog_SetDoubleDecimals(QInputDialog* self, int decimals);
int QInputDialog_DoubleDecimals(const QInputDialog* self);
void QInputDialog_SetOkButtonText(QInputDialog* self, const libqt_string text);
libqt_string QInputDialog_OkButtonText(const QInputDialog* self);
void QInputDialog_SetCancelButtonText(QInputDialog* self, const libqt_string text);
libqt_string QInputDialog_CancelButtonText(const QInputDialog* self);
void QInputDialog_Open(QInputDialog* self, QObject* receiver, const char* member);
QSize* QInputDialog_MinimumSizeHint(const QInputDialog* self);
QSize* QInputDialog_SizeHint(const QInputDialog* self);
void QInputDialog_SetVisible(QInputDialog* self, bool visible);
libqt_string QInputDialog_GetText(QWidget* parent, const libqt_string title, const libqt_string label);
libqt_string QInputDialog_GetMultiLineText(QWidget* parent, const libqt_string title, const libqt_string label);
libqt_string QInputDialog_GetItem(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list items);
int QInputDialog_GetInt(QWidget* parent, const libqt_string title, const libqt_string label);
double QInputDialog_GetDouble(QWidget* parent, const libqt_string title, const libqt_string label);
void QInputDialog_SetDoubleStep(QInputDialog* self, double step);
double QInputDialog_DoubleStep(const QInputDialog* self);
void QInputDialog_TextValueChanged(QInputDialog* self, const libqt_string text);
void QInputDialog_Connect_TextValueChanged(QInputDialog* self, intptr_t slot);
void QInputDialog_TextValueSelected(QInputDialog* self, const libqt_string text);
void QInputDialog_Connect_TextValueSelected(QInputDialog* self, intptr_t slot);
void QInputDialog_IntValueChanged(QInputDialog* self, int value);
void QInputDialog_Connect_IntValueChanged(QInputDialog* self, intptr_t slot);
void QInputDialog_IntValueSelected(QInputDialog* self, int value);
void QInputDialog_Connect_IntValueSelected(QInputDialog* self, intptr_t slot);
void QInputDialog_DoubleValueChanged(QInputDialog* self, double value);
void QInputDialog_Connect_DoubleValueChanged(QInputDialog* self, intptr_t slot);
void QInputDialog_DoubleValueSelected(QInputDialog* self, double value);
void QInputDialog_Connect_DoubleValueSelected(QInputDialog* self, intptr_t slot);
void QInputDialog_Done(QInputDialog* self, int result);
libqt_string QInputDialog_Tr2(const char* s, const char* c);
libqt_string QInputDialog_Tr3(const char* s, const char* c, int n);
void QInputDialog_SetOption2(QInputDialog* self, int option, bool on);
libqt_string QInputDialog_GetText4(QWidget* parent, const libqt_string title, const libqt_string label, int echo);
libqt_string QInputDialog_GetText5(QWidget* parent, const libqt_string title, const libqt_string label, int echo, const libqt_string text);
libqt_string QInputDialog_GetText6(QWidget* parent, const libqt_string title, const libqt_string label, int echo, const libqt_string text, bool* ok);
libqt_string QInputDialog_GetText7(QWidget* parent, const libqt_string title, const libqt_string label, int echo, const libqt_string text, bool* ok, int flags);
libqt_string QInputDialog_GetText8(QWidget* parent, const libqt_string title, const libqt_string label, int echo, const libqt_string text, bool* ok, int flags, int inputMethodHints);
libqt_string QInputDialog_GetMultiLineText4(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_string text);
libqt_string QInputDialog_GetMultiLineText5(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_string text, bool* ok);
libqt_string QInputDialog_GetMultiLineText6(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_string text, bool* ok, int flags);
libqt_string QInputDialog_GetMultiLineText7(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_string text, bool* ok, int flags, int inputMethodHints);
libqt_string QInputDialog_GetItem5(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list items, int current);
libqt_string QInputDialog_GetItem6(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list items, int current, bool editable);
libqt_string QInputDialog_GetItem7(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list items, int current, bool editable, bool* ok);
libqt_string QInputDialog_GetItem8(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list items, int current, bool editable, bool* ok, int flags);
libqt_string QInputDialog_GetItem9(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list items, int current, bool editable, bool* ok, int flags, int inputMethodHints);
int QInputDialog_GetInt4(QWidget* parent, const libqt_string title, const libqt_string label, int value);
int QInputDialog_GetInt5(QWidget* parent, const libqt_string title, const libqt_string label, int value, int minValue);
int QInputDialog_GetInt6(QWidget* parent, const libqt_string title, const libqt_string label, int value, int minValue, int maxValue);
int QInputDialog_GetInt7(QWidget* parent, const libqt_string title, const libqt_string label, int value, int minValue, int maxValue, int step);
int QInputDialog_GetInt8(QWidget* parent, const libqt_string title, const libqt_string label, int value, int minValue, int maxValue, int step, bool* ok);
int QInputDialog_GetInt9(QWidget* parent, const libqt_string title, const libqt_string label, int value, int minValue, int maxValue, int step, bool* ok, int flags);
double QInputDialog_GetDouble4(QWidget* parent, const libqt_string title, const libqt_string label, double value);
double QInputDialog_GetDouble5(QWidget* parent, const libqt_string title, const libqt_string label, double value, double minValue);
double QInputDialog_GetDouble6(QWidget* parent, const libqt_string title, const libqt_string label, double value, double minValue, double maxValue);
double QInputDialog_GetDouble7(QWidget* parent, const libqt_string title, const libqt_string label, double value, double minValue, double maxValue, int decimals);
double QInputDialog_GetDouble8(QWidget* parent, const libqt_string title, const libqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok);
double QInputDialog_GetDouble9(QWidget* parent, const libqt_string title, const libqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags);
double QInputDialog_GetDouble10(QWidget* parent, const libqt_string title, const libqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags, double step);
void QInputDialog_OnMinimumSizeHint(const QInputDialog* self, intptr_t slot);
QSize* QInputDialog_QBaseMinimumSizeHint(const QInputDialog* self);
void QInputDialog_OnSizeHint(const QInputDialog* self, intptr_t slot);
QSize* QInputDialog_QBaseSizeHint(const QInputDialog* self);
void QInputDialog_OnSetVisible(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseSetVisible(QInputDialog* self, bool visible);
void QInputDialog_OnDone(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseDone(QInputDialog* self, int result);
void QInputDialog_Delete(QInputDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
