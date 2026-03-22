#include <QCalendar>
#include <QCalendarWidget>
#include <QDate>
#include <QEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QObject>
#include <QPainter>
#include <QRect>
#include <QResizeEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextCharFormat>
#include <QWidget>
#include <qcalendarwidget.h>
#include "libqcalendarwidget.h"
#include "libqcalendarwidget.hxx"

QCalendarWidget* QCalendarWidget_new(QWidget* parent) {
	 return new VirtualQCalendarWidget(parent);
}

QCalendarWidget* QCalendarWidget_new2() {
	 return new VirtualQCalendarWidget();
}

libqt_string QCalendarWidget_Tr(const char* s) {
	QString _ret = QCalendarWidget::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSize* QCalendarWidget_SizeHint(const QCalendarWidget* self) {
	return new QSize(self->sizeHint());
}

QSize* QCalendarWidget_MinimumSizeHint(const QCalendarWidget* self) {
	return new QSize(self->minimumSizeHint());
}

QDate* QCalendarWidget_SelectedDate(const QCalendarWidget* self) {
	return new QDate(self->selectedDate());
}

int QCalendarWidget_YearShown(const QCalendarWidget* self) {
	return self->yearShown();
}

int QCalendarWidget_MonthShown(const QCalendarWidget* self) {
	return self->monthShown();
}

QDate* QCalendarWidget_MinimumDate(const QCalendarWidget* self) {
	return new QDate(self->minimumDate());
}

void QCalendarWidget_SetMinimumDate(QCalendarWidget* self, QDate* date) {
	self->setMinimumDate(*date);
}

void QCalendarWidget_ClearMinimumDate(QCalendarWidget* self) {
	self->clearMinimumDate();
}

QDate* QCalendarWidget_MaximumDate(const QCalendarWidget* self) {
	return new QDate(self->maximumDate());
}

void QCalendarWidget_SetMaximumDate(QCalendarWidget* self, QDate* date) {
	self->setMaximumDate(*date);
}

void QCalendarWidget_ClearMaximumDate(QCalendarWidget* self) {
	self->clearMaximumDate();
}

int QCalendarWidget_FirstDayOfWeek(const QCalendarWidget* self) {
	return self->firstDayOfWeek();
}

void QCalendarWidget_SetFirstDayOfWeek(QCalendarWidget* self, int dayOfWeek) {
	self->setFirstDayOfWeek(static_cast<Qt::DayOfWeek>(dayOfWeek));
}

bool QCalendarWidget_IsNavigationBarVisible(const QCalendarWidget* self) {
	return self->isNavigationBarVisible();
}

bool QCalendarWidget_IsGridVisible(const QCalendarWidget* self) {
	return self->isGridVisible();
}

QCalendar* QCalendarWidget_Calendar(const QCalendarWidget* self) {
	return new QCalendar(self->calendar());
}

void QCalendarWidget_SetCalendar(QCalendarWidget* self, QCalendar* calendar) {
	self->setCalendar(*calendar);
}

int QCalendarWidget_SelectionMode(const QCalendarWidget* self) {
	return self->selectionMode();
}

void QCalendarWidget_SetSelectionMode(QCalendarWidget* self, int mode) {
	self->setSelectionMode(static_cast<QCalendarWidget::SelectionMode>(mode));
}

int QCalendarWidget_HorizontalHeaderFormat(const QCalendarWidget* self) {
	return self->horizontalHeaderFormat();
}

void QCalendarWidget_SetHorizontalHeaderFormat(QCalendarWidget* self, int format) {
	self->setHorizontalHeaderFormat(static_cast<QCalendarWidget::HorizontalHeaderFormat>(format));
}

int QCalendarWidget_VerticalHeaderFormat(const QCalendarWidget* self) {
	return self->verticalHeaderFormat();
}

void QCalendarWidget_SetVerticalHeaderFormat(QCalendarWidget* self, int format) {
	self->setVerticalHeaderFormat(static_cast<QCalendarWidget::VerticalHeaderFormat>(format));
}

QTextCharFormat* QCalendarWidget_HeaderTextFormat(const QCalendarWidget* self) {
	return new QTextCharFormat(self->headerTextFormat());
}

void QCalendarWidget_SetHeaderTextFormat(QCalendarWidget* self, const QTextCharFormat* format) {
	self->setHeaderTextFormat(*format);
}

QTextCharFormat* QCalendarWidget_WeekdayTextFormat(const QCalendarWidget* self, int dayOfWeek) {
	return new QTextCharFormat(self->weekdayTextFormat(static_cast<Qt::DayOfWeek>(dayOfWeek)));
}

void QCalendarWidget_SetWeekdayTextFormat(QCalendarWidget* self, int dayOfWeek, const QTextCharFormat* format) {
	self->setWeekdayTextFormat(static_cast<Qt::DayOfWeek>(dayOfWeek), *format);
}

libqt_map QCalendarWidget_DateTextFormat(const QCalendarWidget* self) {
	return self->dateTextFormat();
}

QTextCharFormat* QCalendarWidget_DateTextFormat2(const QCalendarWidget* self, QDate* date) {
	return new QTextCharFormat(self->dateTextFormat(*date));
}

void QCalendarWidget_SetDateTextFormat(QCalendarWidget* self, QDate* date, const QTextCharFormat* format) {
	self->setDateTextFormat(*date, *format);
}

bool QCalendarWidget_IsDateEditEnabled(const QCalendarWidget* self) {
	return self->isDateEditEnabled();
}

void QCalendarWidget_SetDateEditEnabled(QCalendarWidget* self, bool enable) {
	self->setDateEditEnabled(enable);
}

int QCalendarWidget_DateEditAcceptDelay(const QCalendarWidget* self) {
	return self->dateEditAcceptDelay();
}

void QCalendarWidget_SetDateEditAcceptDelay(QCalendarWidget* self, int delay) {
	self->setDateEditAcceptDelay(delay);
}

void QCalendarWidget_SetSelectedDate(QCalendarWidget* self, QDate* date) {
	self->setSelectedDate(*date);
}

void QCalendarWidget_SetDateRange(QCalendarWidget* self, QDate* min, QDate* max) {
	self->setDateRange(*min, *max);
}

void QCalendarWidget_SetCurrentPage(QCalendarWidget* self, int year, int month) {
	self->setCurrentPage(year, month);
}

void QCalendarWidget_SetGridVisible(QCalendarWidget* self, bool show) {
	self->setGridVisible(show);
}

void QCalendarWidget_SetNavigationBarVisible(QCalendarWidget* self, bool visible) {
	self->setNavigationBarVisible(visible);
}

void QCalendarWidget_ShowNextMonth(QCalendarWidget* self) {
	self->showNextMonth();
}

void QCalendarWidget_ShowPreviousMonth(QCalendarWidget* self) {
	self->showPreviousMonth();
}

void QCalendarWidget_ShowNextYear(QCalendarWidget* self) {
	self->showNextYear();
}

void QCalendarWidget_ShowPreviousYear(QCalendarWidget* self) {
	self->showPreviousYear();
}

void QCalendarWidget_ShowSelectedDate(QCalendarWidget* self) {
	self->showSelectedDate();
}

void QCalendarWidget_ShowToday(QCalendarWidget* self) {
	self->showToday();
}

void QCalendarWidget_SelectionChanged(QCalendarWidget* self) {
	self->selectionChanged();
}

void QCalendarWidget_Connect_SelectionChanged(QCalendarWidget* self, intptr_t slot) {
    void (*slotFunc)(QCalendarWidget*) = reinterpret_cast<void (*)(QCalendarWidget*)>(slot);
    QCalendarWidget::connect(self, &QCalendarWidget::selectionChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCalendarWidget_Clicked(QCalendarWidget* self, QDate* date) {
	self->clicked(*date);
}

void QCalendarWidget_Connect_Clicked(QCalendarWidget* self, intptr_t slot) {
    void (*slotFunc)(QCalendarWidget*, QDate*) = reinterpret_cast<void (*)(QCalendarWidget*, QDate*)>(slot);
    QCalendarWidget::connect(self, &QCalendarWidget::clicked, [self, slotFunc](QDate date) {
	slotFunc(self, date);
    });
}

void QCalendarWidget_Activated(QCalendarWidget* self, QDate* date) {
	self->activated(*date);
}

void QCalendarWidget_Connect_Activated(QCalendarWidget* self, intptr_t slot) {
    void (*slotFunc)(QCalendarWidget*, QDate*) = reinterpret_cast<void (*)(QCalendarWidget*, QDate*)>(slot);
    QCalendarWidget::connect(self, &QCalendarWidget::activated, [self, slotFunc](QDate date) {
	slotFunc(self, date);
    });
}

void QCalendarWidget_CurrentPageChanged(QCalendarWidget* self, int year, int month) {
	self->currentPageChanged(year, month);
}

void QCalendarWidget_Connect_CurrentPageChanged(QCalendarWidget* self, intptr_t slot) {
    void (*slotFunc)(QCalendarWidget*, int, int) = reinterpret_cast<void (*)(QCalendarWidget*, int, int)>(slot);
    QCalendarWidget::connect(self, &QCalendarWidget::currentPageChanged, [self, slotFunc](int year, int month) {
	slotFunc(self, year, month);
    });
}

libqt_string QCalendarWidget_Tr2(const char* s, const char* c) {
	QString _ret = QCalendarWidget::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QCalendarWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCalendarWidget::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QCalendarWidget_QBaseSizeHint(const QCalendarWidget* self) {
	auto* vqcalendarwidget = dynamic_cast<const VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
vqcalendarwidget->setQCalendarWidget_SizeHint_IsBase(true);
	return new QSize(vqcalendarwidget->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnSizeHint(const QCalendarWidget* self, intptr_t slot) {
	auto* vqcalendarwidget = dynamic_cast<const VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
vqcalendarwidget->setQCalendarWidget_SizeHint_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QCalendarWidget_QBaseMinimumSizeHint(const QCalendarWidget* self) {
	auto* vqcalendarwidget = dynamic_cast<const VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
vqcalendarwidget->setQCalendarWidget_MinimumSizeHint_IsBase(true);
	return new QSize(vqcalendarwidget->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnMinimumSizeHint(const QCalendarWidget* self, intptr_t slot) {
	auto* vqcalendarwidget = dynamic_cast<const VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
vqcalendarwidget->setQCalendarWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_MinimumSizeHint_Callback>(slot));
}
}

// Derived class handler implementation
bool QCalendarWidget_Event(QCalendarWidget* self, QEvent* event) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
	return vqcalendarwidget->event(event);
	} else {
	return self->QCalendarWidget::event(event);
}
}

// Base class handler implementation
bool QCalendarWidget_QBaseEvent(QCalendarWidget* self, QEvent* event) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
vqcalendarwidget->setQCalendarWidget_Event_IsBase(true);
	return vqcalendarwidget->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnEvent(QCalendarWidget* self, intptr_t slot) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
vqcalendarwidget->setQCalendarWidget_Event_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_Event_Callback>(slot));
}
}

// Derived class handler implementation
bool QCalendarWidget_EventFilter(QCalendarWidget* self, QObject* watched, QEvent* event) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
	return vqcalendarwidget->eventFilter(watched, event);
	} else {
	return self->QCalendarWidget::eventFilter(watched, event);
}
}

// Base class handler implementation
bool QCalendarWidget_QBaseEventFilter(QCalendarWidget* self, QObject* watched, QEvent* event) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
vqcalendarwidget->setQCalendarWidget_EventFilter_IsBase(true);
	return vqcalendarwidget->eventFilter(watched, event);
}
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnEventFilter(QCalendarWidget* self, intptr_t slot) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
vqcalendarwidget->setQCalendarWidget_EventFilter_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_EventFilter_Callback>(slot));
}
}

// Derived class handler implementation
void QCalendarWidget_MousePressEvent(QCalendarWidget* self, QMouseEvent* event) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
	vqcalendarwidget->mousePressEvent(event);
	} else {
	self->QCalendarWidget::mousePressEvent(event);
}
}

// Base class handler implementation
void QCalendarWidget_QBaseMousePressEvent(QCalendarWidget* self, QMouseEvent* event) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
vqcalendarwidget->setQCalendarWidget_MousePressEvent_IsBase(true);
	vqcalendarwidget->mousePressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnMousePressEvent(QCalendarWidget* self, intptr_t slot) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
vqcalendarwidget->setQCalendarWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QCalendarWidget_ResizeEvent(QCalendarWidget* self, QResizeEvent* event) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
	vqcalendarwidget->resizeEvent(event);
	} else {
	self->QCalendarWidget::resizeEvent(event);
}
}

// Base class handler implementation
void QCalendarWidget_QBaseResizeEvent(QCalendarWidget* self, QResizeEvent* event) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
vqcalendarwidget->setQCalendarWidget_ResizeEvent_IsBase(true);
	vqcalendarwidget->resizeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnResizeEvent(QCalendarWidget* self, intptr_t slot) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
vqcalendarwidget->setQCalendarWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QCalendarWidget_KeyPressEvent(QCalendarWidget* self, QKeyEvent* event) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
	vqcalendarwidget->keyPressEvent(event);
	} else {
	self->QCalendarWidget::keyPressEvent(event);
}
}

// Base class handler implementation
void QCalendarWidget_QBaseKeyPressEvent(QCalendarWidget* self, QKeyEvent* event) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
vqcalendarwidget->setQCalendarWidget_KeyPressEvent_IsBase(true);
	vqcalendarwidget->keyPressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnKeyPressEvent(QCalendarWidget* self, intptr_t slot) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
vqcalendarwidget->setQCalendarWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QCalendarWidget_PaintCell(const QCalendarWidget* self, QPainter* painter, const QRect* rect, QDate* date) {
	auto* vqcalendarwidget = dynamic_cast<const VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
	vqcalendarwidget->paintCell(painter, *rect, *date);
	} else {
	self->QCalendarWidget::paintCell(painter, *rect, *date);
}
}

// Base class handler implementation
void QCalendarWidget_QBasePaintCell(const QCalendarWidget* self, QPainter* painter, const QRect* rect, QDate* date) {
	auto* vqcalendarwidget = dynamic_cast<const VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
vqcalendarwidget->setQCalendarWidget_PaintCell_IsBase(true);
	vqcalendarwidget->paintCell(painter, *rect, *date);
}
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnPaintCell(const QCalendarWidget* self, intptr_t slot) {
	auto* vqcalendarwidget = dynamic_cast<const VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
vqcalendarwidget->setQCalendarWidget_PaintCell_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_PaintCell_Callback>(slot));
}
}

// Derived class handler implementation
void QCalendarWidget_UpdateCell(QCalendarWidget* self, QDate* date) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
	vqcalendarwidget->updateCell(*date);
	} else {
	self->QCalendarWidget::updateCell(*date);
}
}

// Base class handler implementation
void QCalendarWidget_QBaseUpdateCell(QCalendarWidget* self, QDate* date) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
vqcalendarwidget->setQCalendarWidget_UpdateCell_IsBase(true);
	vqcalendarwidget->updateCell(*date);
}
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnUpdateCell(QCalendarWidget* self, intptr_t slot) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
vqcalendarwidget->setQCalendarWidget_UpdateCell_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_UpdateCell_Callback>(slot));
}
}

// Derived class handler implementation
void QCalendarWidget_UpdateCells(QCalendarWidget* self) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
	vqcalendarwidget->updateCells();
	} else {
	self->QCalendarWidget::updateCells();
}
}

// Base class handler implementation
void QCalendarWidget_QBaseUpdateCells(QCalendarWidget* self) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
vqcalendarwidget->setQCalendarWidget_UpdateCells_IsBase(true);
	vqcalendarwidget->updateCells();
}
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnUpdateCells(QCalendarWidget* self, intptr_t slot) {
	auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
	if (vqcalendarwidget && vqcalendarwidget->isVirtualQCalendarWidget) {
vqcalendarwidget->setQCalendarWidget_UpdateCells_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_UpdateCells_Callback>(slot));
}
}

void QCalendarWidget_Delete(QCalendarWidget* self) {
    delete self;
}

