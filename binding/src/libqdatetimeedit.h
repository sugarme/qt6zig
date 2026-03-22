#pragma once
#ifndef QDATETIMEEDIT_H_C_LIB
#define QDATETIMEEDIT_H_C_LIB

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
typedef struct QCalendar QCalendar;
typedef struct QCalendarWidget QCalendarWidget;
typedef struct QDate QDate;
typedef struct QDateEdit QDateEdit;
typedef struct QDateTime QDateTime;
typedef struct QDateTimeEdit QDateTimeEdit;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMouseEvent QMouseEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionSpinBox QStyleOptionSpinBox;
typedef struct QTime QTime;
typedef struct QTimeEdit QTimeEdit;
typedef struct QTimeZone QTimeZone;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QDateTimeEdit* QDateTimeEdit_new(QWidget* parent);
QDateTimeEdit* QDateTimeEdit_new2();
QDateTimeEdit* QDateTimeEdit_new3(const QDateTime* dt);
QDateTimeEdit* QDateTimeEdit_new4(QDate* d);
QDateTimeEdit* QDateTimeEdit_new5(QTime* t);
QDateTimeEdit* QDateTimeEdit_new6(const QDateTime* dt, QWidget* parent);
QDateTimeEdit* QDateTimeEdit_new7(QDate* d, QWidget* parent);
QDateTimeEdit* QDateTimeEdit_new8(QTime* t, QWidget* parent);
libqt_string QDateTimeEdit_Tr(const char* s);
QDateTime* QDateTimeEdit_DateTime(const QDateTimeEdit* self);
QDate* QDateTimeEdit_Date(const QDateTimeEdit* self);
QTime* QDateTimeEdit_Time(const QDateTimeEdit* self);
QCalendar* QDateTimeEdit_Calendar(const QDateTimeEdit* self);
void QDateTimeEdit_SetCalendar(QDateTimeEdit* self, QCalendar* calendar);
QDateTime* QDateTimeEdit_MinimumDateTime(const QDateTimeEdit* self);
void QDateTimeEdit_ClearMinimumDateTime(QDateTimeEdit* self);
void QDateTimeEdit_SetMinimumDateTime(QDateTimeEdit* self, const QDateTime* dt);
QDateTime* QDateTimeEdit_MaximumDateTime(const QDateTimeEdit* self);
void QDateTimeEdit_ClearMaximumDateTime(QDateTimeEdit* self);
void QDateTimeEdit_SetMaximumDateTime(QDateTimeEdit* self, const QDateTime* dt);
void QDateTimeEdit_SetDateTimeRange(QDateTimeEdit* self, const QDateTime* min, const QDateTime* max);
QDate* QDateTimeEdit_MinimumDate(const QDateTimeEdit* self);
void QDateTimeEdit_SetMinimumDate(QDateTimeEdit* self, QDate* min);
void QDateTimeEdit_ClearMinimumDate(QDateTimeEdit* self);
QDate* QDateTimeEdit_MaximumDate(const QDateTimeEdit* self);
void QDateTimeEdit_SetMaximumDate(QDateTimeEdit* self, QDate* max);
void QDateTimeEdit_ClearMaximumDate(QDateTimeEdit* self);
void QDateTimeEdit_SetDateRange(QDateTimeEdit* self, QDate* min, QDate* max);
QTime* QDateTimeEdit_MinimumTime(const QDateTimeEdit* self);
void QDateTimeEdit_SetMinimumTime(QDateTimeEdit* self, QTime* min);
void QDateTimeEdit_ClearMinimumTime(QDateTimeEdit* self);
QTime* QDateTimeEdit_MaximumTime(const QDateTimeEdit* self);
void QDateTimeEdit_SetMaximumTime(QDateTimeEdit* self, QTime* max);
void QDateTimeEdit_ClearMaximumTime(QDateTimeEdit* self);
void QDateTimeEdit_SetTimeRange(QDateTimeEdit* self, QTime* min, QTime* max);
int QDateTimeEdit_DisplayedSections(const QDateTimeEdit* self);
QString::Section QDateTimeEdit_CurrentSection(const QDateTimeEdit* self);
QString::Section QDateTimeEdit_SectionAt(const QDateTimeEdit* self, int index);
void QDateTimeEdit_SetCurrentSection(QDateTimeEdit* self, QString::Section section);
int QDateTimeEdit_CurrentSectionIndex(const QDateTimeEdit* self);
void QDateTimeEdit_SetCurrentSectionIndex(QDateTimeEdit* self, int index);
QCalendarWidget* QDateTimeEdit_CalendarWidget(const QDateTimeEdit* self);
void QDateTimeEdit_SetCalendarWidget(QDateTimeEdit* self, QCalendarWidget* calendarWidget);
int QDateTimeEdit_SectionCount(const QDateTimeEdit* self);
void QDateTimeEdit_SetSelectedSection(QDateTimeEdit* self, QString::Section section);
libqt_string QDateTimeEdit_SectionText(const QDateTimeEdit* self, QString::Section section);
libqt_string QDateTimeEdit_DisplayFormat(const QDateTimeEdit* self);
void QDateTimeEdit_SetDisplayFormat(QDateTimeEdit* self, const libqt_string format);
bool QDateTimeEdit_CalendarPopup(const QDateTimeEdit* self);
void QDateTimeEdit_SetCalendarPopup(QDateTimeEdit* self, bool enable);
int QDateTimeEdit_TimeSpec(const QDateTimeEdit* self);
void QDateTimeEdit_SetTimeSpec(QDateTimeEdit* self, int spec);
QTimeZone* QDateTimeEdit_TimeZone(const QDateTimeEdit* self);
void QDateTimeEdit_SetTimeZone(QDateTimeEdit* self, const QTimeZone* zone);
QSize* QDateTimeEdit_SizeHint(const QDateTimeEdit* self);
void QDateTimeEdit_Clear(QDateTimeEdit* self);
void QDateTimeEdit_StepBy(QDateTimeEdit* self, int steps);
bool QDateTimeEdit_Event(QDateTimeEdit* self, QEvent* event);
void QDateTimeEdit_DateTimeChanged(QDateTimeEdit* self, const QDateTime* dateTime);
void QDateTimeEdit_Connect_DateTimeChanged(QDateTimeEdit* self, intptr_t slot);
void QDateTimeEdit_TimeChanged(QDateTimeEdit* self, QTime* time);
void QDateTimeEdit_Connect_TimeChanged(QDateTimeEdit* self, intptr_t slot);
void QDateTimeEdit_DateChanged(QDateTimeEdit* self, QDate* date);
void QDateTimeEdit_Connect_DateChanged(QDateTimeEdit* self, intptr_t slot);
void QDateTimeEdit_SetDateTime(QDateTimeEdit* self, const QDateTime* dateTime);
void QDateTimeEdit_SetDate(QDateTimeEdit* self, QDate* date);
void QDateTimeEdit_SetTime(QDateTimeEdit* self, QTime* time);
void QDateTimeEdit_KeyPressEvent(QDateTimeEdit* self, QKeyEvent* event);
void QDateTimeEdit_WheelEvent(QDateTimeEdit* self, QWheelEvent* event);
void QDateTimeEdit_FocusInEvent(QDateTimeEdit* self, QFocusEvent* event);
bool QDateTimeEdit_FocusNextPrevChild(QDateTimeEdit* self, bool next);
int QDateTimeEdit_Validate(const QDateTimeEdit* self, libqt_string input, int* pos);
void QDateTimeEdit_Fixup(const QDateTimeEdit* self, libqt_string input);
QDateTime* QDateTimeEdit_DateTimeFromText(const QDateTimeEdit* self, const libqt_string text);
libqt_string QDateTimeEdit_TextFromDateTime(const QDateTimeEdit* self, const QDateTime* dt);
int QDateTimeEdit_StepEnabled(const QDateTimeEdit* self);
void QDateTimeEdit_MousePressEvent(QDateTimeEdit* self, QMouseEvent* event);
void QDateTimeEdit_PaintEvent(QDateTimeEdit* self, QPaintEvent* event);
void QDateTimeEdit_InitStyleOption(const QDateTimeEdit* self, QStyleOptionSpinBox* option);
libqt_string QDateTimeEdit_Tr2(const char* s, const char* c);
libqt_string QDateTimeEdit_Tr3(const char* s, const char* c, int n);
void QDateTimeEdit_OnSizeHint(const QDateTimeEdit* self, intptr_t slot);
QSize* QDateTimeEdit_QBaseSizeHint(const QDateTimeEdit* self);
void QDateTimeEdit_OnClear(QDateTimeEdit* self, intptr_t slot);
void QDateTimeEdit_QBaseClear(QDateTimeEdit* self);
void QDateTimeEdit_OnStepBy(QDateTimeEdit* self, intptr_t slot);
void QDateTimeEdit_QBaseStepBy(QDateTimeEdit* self, int steps);
void QDateTimeEdit_OnEvent(QDateTimeEdit* self, intptr_t slot);
bool QDateTimeEdit_QBaseEvent(QDateTimeEdit* self, QEvent* event);
void QDateTimeEdit_OnKeyPressEvent(QDateTimeEdit* self, intptr_t slot);
void QDateTimeEdit_QBaseKeyPressEvent(QDateTimeEdit* self, QKeyEvent* event);
void QDateTimeEdit_OnWheelEvent(QDateTimeEdit* self, intptr_t slot);
void QDateTimeEdit_QBaseWheelEvent(QDateTimeEdit* self, QWheelEvent* event);
void QDateTimeEdit_OnFocusInEvent(QDateTimeEdit* self, intptr_t slot);
void QDateTimeEdit_QBaseFocusInEvent(QDateTimeEdit* self, QFocusEvent* event);
void QDateTimeEdit_OnFocusNextPrevChild(QDateTimeEdit* self, intptr_t slot);
bool QDateTimeEdit_QBaseFocusNextPrevChild(QDateTimeEdit* self, bool next);
void QDateTimeEdit_OnValidate(const QDateTimeEdit* self, intptr_t slot);
int QDateTimeEdit_QBaseValidate(const QDateTimeEdit* self, libqt_string input, int* pos);
void QDateTimeEdit_OnFixup(const QDateTimeEdit* self, intptr_t slot);
void QDateTimeEdit_QBaseFixup(const QDateTimeEdit* self, libqt_string input);
void QDateTimeEdit_OnDateTimeFromText(const QDateTimeEdit* self, intptr_t slot);
QDateTime* QDateTimeEdit_QBaseDateTimeFromText(const QDateTimeEdit* self, const libqt_string text);
void QDateTimeEdit_OnTextFromDateTime(const QDateTimeEdit* self, intptr_t slot);
libqt_string QDateTimeEdit_QBaseTextFromDateTime(const QDateTimeEdit* self, const QDateTime* dt);
void QDateTimeEdit_OnStepEnabled(const QDateTimeEdit* self, intptr_t slot);
int QDateTimeEdit_QBaseStepEnabled(const QDateTimeEdit* self);
void QDateTimeEdit_OnMousePressEvent(QDateTimeEdit* self, intptr_t slot);
void QDateTimeEdit_QBaseMousePressEvent(QDateTimeEdit* self, QMouseEvent* event);
void QDateTimeEdit_OnPaintEvent(QDateTimeEdit* self, intptr_t slot);
void QDateTimeEdit_QBasePaintEvent(QDateTimeEdit* self, QPaintEvent* event);
void QDateTimeEdit_OnInitStyleOption(const QDateTimeEdit* self, intptr_t slot);
void QDateTimeEdit_QBaseInitStyleOption(const QDateTimeEdit* self, QStyleOptionSpinBox* option);
void QDateTimeEdit_Delete(QDateTimeEdit* self);

QTimeEdit* QTimeEdit_new(QWidget* parent);
QTimeEdit* QTimeEdit_new2();
QTimeEdit* QTimeEdit_new3(QTime* time);
QTimeEdit* QTimeEdit_new4(QTime* time, QWidget* parent);
libqt_string QTimeEdit_Tr(const char* s);
void QTimeEdit_UserTimeChanged(QTimeEdit* self, QTime* time);
void QTimeEdit_Connect_UserTimeChanged(QTimeEdit* self, intptr_t slot);
libqt_string QTimeEdit_Tr2(const char* s, const char* c);
libqt_string QTimeEdit_Tr3(const char* s, const char* c, int n);
void QTimeEdit_Delete(QTimeEdit* self);

QDateEdit* QDateEdit_new(QWidget* parent);
QDateEdit* QDateEdit_new2();
QDateEdit* QDateEdit_new3(QDate* date);
QDateEdit* QDateEdit_new4(QDate* date, QWidget* parent);
libqt_string QDateEdit_Tr(const char* s);
void QDateEdit_UserDateChanged(QDateEdit* self, QDate* date);
void QDateEdit_Connect_UserDateChanged(QDateEdit* self, intptr_t slot);
libqt_string QDateEdit_Tr2(const char* s, const char* c);
libqt_string QDateEdit_Tr3(const char* s, const char* c, int n);
void QDateEdit_Delete(QDateEdit* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
