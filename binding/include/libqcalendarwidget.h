#pragma once
#ifndef QCALENDARWIDGET_H_C_LIB
#define QCALENDARWIDGET_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCalendar QCalendar;
typedef struct QCalendarWidget QCalendarWidget;
typedef struct QDate QDate;
typedef struct QEvent QEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QSize QSize;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QCalendarWidget* QCalendarWidget_new(QWidget* parent);
QCalendarWidget* QCalendarWidget_new2();
libqt_string QCalendarWidget_Tr(const char* s);
QSize* QCalendarWidget_SizeHint(const QCalendarWidget* self);
QSize* QCalendarWidget_MinimumSizeHint(const QCalendarWidget* self);
QDate* QCalendarWidget_SelectedDate(const QCalendarWidget* self);
int QCalendarWidget_YearShown(const QCalendarWidget* self);
int QCalendarWidget_MonthShown(const QCalendarWidget* self);
QDate* QCalendarWidget_MinimumDate(const QCalendarWidget* self);
void QCalendarWidget_SetMinimumDate(QCalendarWidget* self, QDate* date);
void QCalendarWidget_ClearMinimumDate(QCalendarWidget* self);
QDate* QCalendarWidget_MaximumDate(const QCalendarWidget* self);
void QCalendarWidget_SetMaximumDate(QCalendarWidget* self, QDate* date);
void QCalendarWidget_ClearMaximumDate(QCalendarWidget* self);
int QCalendarWidget_FirstDayOfWeek(const QCalendarWidget* self);
void QCalendarWidget_SetFirstDayOfWeek(QCalendarWidget* self, int dayOfWeek);
bool QCalendarWidget_IsNavigationBarVisible(const QCalendarWidget* self);
bool QCalendarWidget_IsGridVisible(const QCalendarWidget* self);
QCalendar* QCalendarWidget_Calendar(const QCalendarWidget* self);
void QCalendarWidget_SetCalendar(QCalendarWidget* self, QCalendar* calendar);
int QCalendarWidget_SelectionMode(const QCalendarWidget* self);
void QCalendarWidget_SetSelectionMode(QCalendarWidget* self, int mode);
int QCalendarWidget_HorizontalHeaderFormat(const QCalendarWidget* self);
void QCalendarWidget_SetHorizontalHeaderFormat(QCalendarWidget* self, int format);
int QCalendarWidget_VerticalHeaderFormat(const QCalendarWidget* self);
void QCalendarWidget_SetVerticalHeaderFormat(QCalendarWidget* self, int format);
QTextCharFormat* QCalendarWidget_HeaderTextFormat(const QCalendarWidget* self);
void QCalendarWidget_SetHeaderTextFormat(QCalendarWidget* self, const QTextCharFormat* format);
QTextCharFormat* QCalendarWidget_WeekdayTextFormat(const QCalendarWidget* self, int dayOfWeek);
void QCalendarWidget_SetWeekdayTextFormat(QCalendarWidget* self, int dayOfWeek, const QTextCharFormat* format);
libqt_map QCalendarWidget_DateTextFormat(const QCalendarWidget* self);
QTextCharFormat* QCalendarWidget_DateTextFormat2(const QCalendarWidget* self, QDate* date);
void QCalendarWidget_SetDateTextFormat(QCalendarWidget* self, QDate* date, const QTextCharFormat* format);
bool QCalendarWidget_IsDateEditEnabled(const QCalendarWidget* self);
void QCalendarWidget_SetDateEditEnabled(QCalendarWidget* self, bool enable);
int QCalendarWidget_DateEditAcceptDelay(const QCalendarWidget* self);
void QCalendarWidget_SetDateEditAcceptDelay(QCalendarWidget* self, int delay);
bool QCalendarWidget_Event(QCalendarWidget* self, QEvent* event);
bool QCalendarWidget_EventFilter(QCalendarWidget* self, QObject* watched, QEvent* event);
void QCalendarWidget_MousePressEvent(QCalendarWidget* self, QMouseEvent* event);
void QCalendarWidget_ResizeEvent(QCalendarWidget* self, QResizeEvent* event);
void QCalendarWidget_KeyPressEvent(QCalendarWidget* self, QKeyEvent* event);
void QCalendarWidget_PaintCell(const QCalendarWidget* self, QPainter* painter, const QRect* rect, QDate* date);
void QCalendarWidget_SetSelectedDate(QCalendarWidget* self, QDate* date);
void QCalendarWidget_SetDateRange(QCalendarWidget* self, QDate* min, QDate* max);
void QCalendarWidget_SetCurrentPage(QCalendarWidget* self, int year, int month);
void QCalendarWidget_SetGridVisible(QCalendarWidget* self, bool show);
void QCalendarWidget_SetNavigationBarVisible(QCalendarWidget* self, bool visible);
void QCalendarWidget_ShowNextMonth(QCalendarWidget* self);
void QCalendarWidget_ShowPreviousMonth(QCalendarWidget* self);
void QCalendarWidget_ShowNextYear(QCalendarWidget* self);
void QCalendarWidget_ShowPreviousYear(QCalendarWidget* self);
void QCalendarWidget_ShowSelectedDate(QCalendarWidget* self);
void QCalendarWidget_ShowToday(QCalendarWidget* self);
void QCalendarWidget_SelectionChanged(QCalendarWidget* self);
void QCalendarWidget_Connect_SelectionChanged(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_Clicked(QCalendarWidget* self, QDate* date);
void QCalendarWidget_Connect_Clicked(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_Activated(QCalendarWidget* self, QDate* date);
void QCalendarWidget_Connect_Activated(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_CurrentPageChanged(QCalendarWidget* self, int year, int month);
void QCalendarWidget_Connect_CurrentPageChanged(QCalendarWidget* self, intptr_t slot);
libqt_string QCalendarWidget_Tr2(const char* s, const char* c);
libqt_string QCalendarWidget_Tr3(const char* s, const char* c, int n);
void QCalendarWidget_OnSizeHint(const QCalendarWidget* self, intptr_t slot);
QSize* QCalendarWidget_QBaseSizeHint(const QCalendarWidget* self);
void QCalendarWidget_OnMinimumSizeHint(const QCalendarWidget* self, intptr_t slot);
QSize* QCalendarWidget_QBaseMinimumSizeHint(const QCalendarWidget* self);
void QCalendarWidget_OnEvent(QCalendarWidget* self, intptr_t slot);
bool QCalendarWidget_QBaseEvent(QCalendarWidget* self, QEvent* event);
void QCalendarWidget_OnEventFilter(QCalendarWidget* self, intptr_t slot);
bool QCalendarWidget_QBaseEventFilter(QCalendarWidget* self, QObject* watched, QEvent* event);
void QCalendarWidget_OnMousePressEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseMousePressEvent(QCalendarWidget* self, QMouseEvent* event);
void QCalendarWidget_OnResizeEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseResizeEvent(QCalendarWidget* self, QResizeEvent* event);
void QCalendarWidget_OnKeyPressEvent(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseKeyPressEvent(QCalendarWidget* self, QKeyEvent* event);
void QCalendarWidget_OnPaintCell(const QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBasePaintCell(const QCalendarWidget* self, QPainter* painter, const QRect* rect, QDate* date);
void QCalendarWidget_UpdateCell(QCalendarWidget* self, QDate* date);
void QCalendarWidget_OnUpdateCell(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseUpdateCell(QCalendarWidget* self, QDate* date);
void QCalendarWidget_UpdateCells(QCalendarWidget* self);
void QCalendarWidget_OnUpdateCells(QCalendarWidget* self, intptr_t slot);
void QCalendarWidget_QBaseUpdateCells(QCalendarWidget* self);
void QCalendarWidget_Delete(QCalendarWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
