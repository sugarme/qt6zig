#include <QAbstractSpinBox>
#include <QCalendar>
#include <QCalendarWidget>
#include <QDate>
#include <QDateEdit>
#include <QDateTime>
#include <QDateTimeEdit>
#include <QEvent>
#include <QFocusEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionSpinBox>
#include <QTime>
#include <QTimeEdit>
#include <QTimeZone>
#include <QWheelEvent>
#include <QWidget>
#include <qdatetimeedit.h>
#include "libqdatetimeedit.h"
#include "libqdatetimeedit.hxx"

QDateTimeEdit* QDateTimeEdit_new(QWidget* parent) {
	 return new VirtualQDateTimeEdit(parent);
}

QDateTimeEdit* QDateTimeEdit_new2() {
	 return new VirtualQDateTimeEdit();
}

QDateTimeEdit* QDateTimeEdit_new3(const QDateTime* dt) {
	 return new VirtualQDateTimeEdit(*dt);
}

QDateTimeEdit* QDateTimeEdit_new4(QDate* d) {
	 return new VirtualQDateTimeEdit(*d);
}

QDateTimeEdit* QDateTimeEdit_new5(QTime* t) {
	 return new VirtualQDateTimeEdit(*t);
}

QDateTimeEdit* QDateTimeEdit_new6(const QDateTime* dt, QWidget* parent) {
	 return new VirtualQDateTimeEdit(*dt, parent);
}

QDateTimeEdit* QDateTimeEdit_new7(QDate* d, QWidget* parent) {
	 return new VirtualQDateTimeEdit(*d, parent);
}

QDateTimeEdit* QDateTimeEdit_new8(QTime* t, QWidget* parent) {
	 return new VirtualQDateTimeEdit(*t, parent);
}

libqt_string QDateTimeEdit_Tr(const char* s) {
	QString _ret = QDateTimeEdit::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QDateTime* QDateTimeEdit_DateTime(const QDateTimeEdit* self) {
	return new QDateTime(self->dateTime());
}

QDate* QDateTimeEdit_Date(const QDateTimeEdit* self) {
	return new QDate(self->date());
}

QTime* QDateTimeEdit_Time(const QDateTimeEdit* self) {
	return new QTime(self->time());
}

QCalendar* QDateTimeEdit_Calendar(const QDateTimeEdit* self) {
	return new QCalendar(self->calendar());
}

void QDateTimeEdit_SetCalendar(QDateTimeEdit* self, QCalendar* calendar) {
	self->setCalendar(*calendar);
}

QDateTime* QDateTimeEdit_MinimumDateTime(const QDateTimeEdit* self) {
	return new QDateTime(self->minimumDateTime());
}

void QDateTimeEdit_ClearMinimumDateTime(QDateTimeEdit* self) {
	self->clearMinimumDateTime();
}

void QDateTimeEdit_SetMinimumDateTime(QDateTimeEdit* self, const QDateTime* dt) {
	self->setMinimumDateTime(*dt);
}

QDateTime* QDateTimeEdit_MaximumDateTime(const QDateTimeEdit* self) {
	return new QDateTime(self->maximumDateTime());
}

void QDateTimeEdit_ClearMaximumDateTime(QDateTimeEdit* self) {
	self->clearMaximumDateTime();
}

void QDateTimeEdit_SetMaximumDateTime(QDateTimeEdit* self, const QDateTime* dt) {
	self->setMaximumDateTime(*dt);
}

void QDateTimeEdit_SetDateTimeRange(QDateTimeEdit* self, const QDateTime* min, const QDateTime* max) {
	self->setDateTimeRange(*min, *max);
}

QDate* QDateTimeEdit_MinimumDate(const QDateTimeEdit* self) {
	return new QDate(self->minimumDate());
}

void QDateTimeEdit_SetMinimumDate(QDateTimeEdit* self, QDate* min) {
	self->setMinimumDate(*min);
}

void QDateTimeEdit_ClearMinimumDate(QDateTimeEdit* self) {
	self->clearMinimumDate();
}

QDate* QDateTimeEdit_MaximumDate(const QDateTimeEdit* self) {
	return new QDate(self->maximumDate());
}

void QDateTimeEdit_SetMaximumDate(QDateTimeEdit* self, QDate* max) {
	self->setMaximumDate(*max);
}

void QDateTimeEdit_ClearMaximumDate(QDateTimeEdit* self) {
	self->clearMaximumDate();
}

void QDateTimeEdit_SetDateRange(QDateTimeEdit* self, QDate* min, QDate* max) {
	self->setDateRange(*min, *max);
}

QTime* QDateTimeEdit_MinimumTime(const QDateTimeEdit* self) {
	return new QTime(self->minimumTime());
}

void QDateTimeEdit_SetMinimumTime(QDateTimeEdit* self, QTime* min) {
	self->setMinimumTime(*min);
}

void QDateTimeEdit_ClearMinimumTime(QDateTimeEdit* self) {
	self->clearMinimumTime();
}

QTime* QDateTimeEdit_MaximumTime(const QDateTimeEdit* self) {
	return new QTime(self->maximumTime());
}

void QDateTimeEdit_SetMaximumTime(QDateTimeEdit* self, QTime* max) {
	self->setMaximumTime(*max);
}

void QDateTimeEdit_ClearMaximumTime(QDateTimeEdit* self) {
	self->clearMaximumTime();
}

void QDateTimeEdit_SetTimeRange(QDateTimeEdit* self, QTime* min, QTime* max) {
	self->setTimeRange(*min, *max);
}

int QDateTimeEdit_DisplayedSections(const QDateTimeEdit* self) {
	return self->displayedSections();
}

QString::Section QDateTimeEdit_CurrentSection(const QDateTimeEdit* self) {
	return self->currentSection();
}

QString::Section QDateTimeEdit_SectionAt(const QDateTimeEdit* self, int index) {
	return self->sectionAt(index);
}

void QDateTimeEdit_SetCurrentSection(QDateTimeEdit* self, QString::Section section) {
	self->setCurrentSection(section);
}

int QDateTimeEdit_CurrentSectionIndex(const QDateTimeEdit* self) {
	return self->currentSectionIndex();
}

void QDateTimeEdit_SetCurrentSectionIndex(QDateTimeEdit* self, int index) {
	self->setCurrentSectionIndex(index);
}

QCalendarWidget* QDateTimeEdit_CalendarWidget(const QDateTimeEdit* self) {
	return self->calendarWidget();
}

void QDateTimeEdit_SetCalendarWidget(QDateTimeEdit* self, QCalendarWidget* calendarWidget) {
	self->setCalendarWidget(calendarWidget);
}

int QDateTimeEdit_SectionCount(const QDateTimeEdit* self) {
	return self->sectionCount();
}

void QDateTimeEdit_SetSelectedSection(QDateTimeEdit* self, QString::Section section) {
	self->setSelectedSection(section);
}

libqt_string QDateTimeEdit_SectionText(const QDateTimeEdit* self, QString::Section section) {
	QString _ret = self->sectionText(section);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDateTimeEdit_DisplayFormat(const QDateTimeEdit* self) {
	QString _ret = self->displayFormat();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QDateTimeEdit_SetDisplayFormat(QDateTimeEdit* self, const libqt_string format) {
	self->setDisplayFormat(QString::fromUtf8(format.data, format.len));
}

bool QDateTimeEdit_CalendarPopup(const QDateTimeEdit* self) {
	return self->calendarPopup();
}

void QDateTimeEdit_SetCalendarPopup(QDateTimeEdit* self, bool enable) {
	self->setCalendarPopup(enable);
}

int QDateTimeEdit_TimeSpec(const QDateTimeEdit* self) {
	return self->timeSpec();
}

void QDateTimeEdit_SetTimeSpec(QDateTimeEdit* self, int spec) {
	self->setTimeSpec(static_cast<Qt::TimeSpec>(spec));
}

QTimeZone* QDateTimeEdit_TimeZone(const QDateTimeEdit* self) {
	return new QTimeZone(self->timeZone());
}

void QDateTimeEdit_SetTimeZone(QDateTimeEdit* self, const QTimeZone* zone) {
	self->setTimeZone(*zone);
}

QSize* QDateTimeEdit_SizeHint(const QDateTimeEdit* self) {
	return new QSize(self->sizeHint());
}

void QDateTimeEdit_Clear(QDateTimeEdit* self) {
	self->clear();
}

void QDateTimeEdit_StepBy(QDateTimeEdit* self, int steps) {
	self->stepBy(steps);
}

bool QDateTimeEdit_Event(QDateTimeEdit* self, QEvent* event) {
	return self->event(event);
}

void QDateTimeEdit_DateTimeChanged(QDateTimeEdit* self, const QDateTime* dateTime) {
	self->dateTimeChanged(*dateTime);
}

void QDateTimeEdit_Connect_DateTimeChanged(QDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeEdit*, const QDateTime*) = reinterpret_cast<void (*)(QDateTimeEdit*, const QDateTime*)>(slot);
    QDateTimeEdit::connect(self, &QDateTimeEdit::dateTimeChanged, [self, slotFunc](const QDateTime& dateTime) {
	slotFunc(self, dateTime);
    });
}

void QDateTimeEdit_TimeChanged(QDateTimeEdit* self, QTime* time) {
	self->timeChanged(*time);
}

void QDateTimeEdit_Connect_TimeChanged(QDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeEdit*, QTime*) = reinterpret_cast<void (*)(QDateTimeEdit*, QTime*)>(slot);
    QDateTimeEdit::connect(self, &QDateTimeEdit::timeChanged, [self, slotFunc](QTime time) {
	slotFunc(self, time);
    });
}

void QDateTimeEdit_DateChanged(QDateTimeEdit* self, QDate* date) {
	self->dateChanged(*date);
}

void QDateTimeEdit_Connect_DateChanged(QDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeEdit*, QDate*) = reinterpret_cast<void (*)(QDateTimeEdit*, QDate*)>(slot);
    QDateTimeEdit::connect(self, &QDateTimeEdit::dateChanged, [self, slotFunc](QDate date) {
	slotFunc(self, date);
    });
}

void QDateTimeEdit_SetDateTime(QDateTimeEdit* self, const QDateTime* dateTime) {
	self->setDateTime(*dateTime);
}

void QDateTimeEdit_SetDate(QDateTimeEdit* self, QDate* date) {
	self->setDate(*date);
}

void QDateTimeEdit_SetTime(QDateTimeEdit* self, QTime* time) {
	self->setTime(*time);
}

libqt_string QDateTimeEdit_Tr2(const char* s, const char* c) {
	QString _ret = QDateTimeEdit::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDateTimeEdit_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDateTimeEdit::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QDateTimeEdit_QBaseSizeHint(const QDateTimeEdit* self) {
	auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_SizeHint_IsBase(true);
	return new QSize(vqdatetimeedit->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnSizeHint(const QDateTimeEdit* self, intptr_t slot) {
	auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_SizeHint_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
void QDateTimeEdit_QBaseClear(QDateTimeEdit* self) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_Clear_IsBase(true);
	vqdatetimeedit->clear();
}
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnClear(QDateTimeEdit* self, intptr_t slot) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_Clear_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Clear_Callback>(slot));
}
}

// Base class handler implementation
void QDateTimeEdit_QBaseStepBy(QDateTimeEdit* self, int steps) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_StepBy_IsBase(true);
	vqdatetimeedit->stepBy(steps);
}
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnStepBy(QDateTimeEdit* self, intptr_t slot) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_StepBy_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_StepBy_Callback>(slot));
}
}

// Base class handler implementation
bool QDateTimeEdit_QBaseEvent(QDateTimeEdit* self, QEvent* event) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_Event_IsBase(true);
	return vqdatetimeedit->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnEvent(QDateTimeEdit* self, intptr_t slot) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_Event_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QDateTimeEdit_KeyPressEvent(QDateTimeEdit* self, QKeyEvent* event) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
	vqdatetimeedit->keyPressEvent(event);
	} else {
	self->QDateTimeEdit::keyPressEvent(event);
}
}

// Base class handler implementation
void QDateTimeEdit_QBaseKeyPressEvent(QDateTimeEdit* self, QKeyEvent* event) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_KeyPressEvent_IsBase(true);
	vqdatetimeedit->keyPressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnKeyPressEvent(QDateTimeEdit* self, intptr_t slot) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QDateTimeEdit_WheelEvent(QDateTimeEdit* self, QWheelEvent* event) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
	vqdatetimeedit->wheelEvent(event);
	} else {
	self->QDateTimeEdit::wheelEvent(event);
}
}

// Base class handler implementation
void QDateTimeEdit_QBaseWheelEvent(QDateTimeEdit* self, QWheelEvent* event) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_WheelEvent_IsBase(true);
	vqdatetimeedit->wheelEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnWheelEvent(QDateTimeEdit* self, intptr_t slot) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_WheelEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_WheelEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QDateTimeEdit_FocusInEvent(QDateTimeEdit* self, QFocusEvent* event) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
	vqdatetimeedit->focusInEvent(event);
	} else {
	self->QDateTimeEdit::focusInEvent(event);
}
}

// Base class handler implementation
void QDateTimeEdit_QBaseFocusInEvent(QDateTimeEdit* self, QFocusEvent* event) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_FocusInEvent_IsBase(true);
	vqdatetimeedit->focusInEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnFocusInEvent(QDateTimeEdit* self, intptr_t slot) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_FocusInEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_FocusInEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QDateTimeEdit_FocusNextPrevChild(QDateTimeEdit* self, bool next) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
	return vqdatetimeedit->focusNextPrevChild(next);
	} else {
	return self->QDateTimeEdit::focusNextPrevChild(next);
}
}

// Base class handler implementation
bool QDateTimeEdit_QBaseFocusNextPrevChild(QDateTimeEdit* self, bool next) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_FocusNextPrevChild_IsBase(true);
	return vqdatetimeedit->focusNextPrevChild(next);
}
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnFocusNextPrevChild(QDateTimeEdit* self, intptr_t slot) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_FocusNextPrevChild_Callback>(slot));
}
}

// Derived class handler implementation
int QDateTimeEdit_Validate(const QDateTimeEdit* self, libqt_string input, int* pos) {
	auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
	return vqdatetimeedit->validate(QString::fromUtf8(input.data, input.len), *pos);
	} else {
	return self->QDateTimeEdit::validate(QString::fromUtf8(input.data, input.len), *pos);
}
}

// Base class handler implementation
int QDateTimeEdit_QBaseValidate(const QDateTimeEdit* self, libqt_string input, int* pos) {
	auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_Validate_IsBase(true);
	return vqdatetimeedit->validate(QString::fromUtf8(input.data, input.len), *pos);
}
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnValidate(const QDateTimeEdit* self, intptr_t slot) {
	auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_Validate_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Validate_Callback>(slot));
}
}

// Derived class handler implementation
void QDateTimeEdit_Fixup(const QDateTimeEdit* self, libqt_string input) {
	auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
	vqdatetimeedit->fixup(QString::fromUtf8(input.data, input.len));
	} else {
	self->QDateTimeEdit::fixup(QString::fromUtf8(input.data, input.len));
}
}

// Base class handler implementation
void QDateTimeEdit_QBaseFixup(const QDateTimeEdit* self, libqt_string input) {
	auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_Fixup_IsBase(true);
	vqdatetimeedit->fixup(QString::fromUtf8(input.data, input.len));
}
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnFixup(const QDateTimeEdit* self, intptr_t slot) {
	auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_Fixup_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Fixup_Callback>(slot));
}
}

// Derived class handler implementation
QDateTime* QDateTimeEdit_DateTimeFromText(const QDateTimeEdit* self, const libqt_string text) {
	auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
	return new QDateTime(vqdatetimeedit->dateTimeFromText(QString::fromUtf8(text.data, text.len)));
	} else {
	return new QDateTime(self->QDateTimeEdit::dateTimeFromText(QString::fromUtf8(text.data, text.len)));
}
}

// Base class handler implementation
QDateTime* QDateTimeEdit_QBaseDateTimeFromText(const QDateTimeEdit* self, const libqt_string text) {
	auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_DateTimeFromText_IsBase(true);
	return new QDateTime(vqdatetimeedit->dateTimeFromText(QString::fromUtf8(text.data, text.len)));
}
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDateTimeFromText(const QDateTimeEdit* self, intptr_t slot) {
	auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_DateTimeFromText_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DateTimeFromText_Callback>(slot));
}
}

// Derived class handler implementation
libqt_string QDateTimeEdit_TextFromDateTime(const QDateTimeEdit* self, const QDateTime* dt) {
	auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
	QString _ret = vqdatetimeedit->textFromDateTime(*dt);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
	} else {
	QString _ret = self->QDateTimeEdit::textFromDateTime(*dt);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}
}

// Base class handler implementation
libqt_string QDateTimeEdit_QBaseTextFromDateTime(const QDateTimeEdit* self, const QDateTime* dt) {
	auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_TextFromDateTime_IsBase(true);
	QString _ret = vqdatetimeedit->textFromDateTime(*dt);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnTextFromDateTime(const QDateTimeEdit* self, intptr_t slot) {
	auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_TextFromDateTime_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_TextFromDateTime_Callback>(slot));
}
}

// Derived class handler implementation
int QDateTimeEdit_StepEnabled(const QDateTimeEdit* self) {
	auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
	return vqdatetimeedit->stepEnabled();
	} else {
	return self->QDateTimeEdit::stepEnabled();
}
}

// Base class handler implementation
int QDateTimeEdit_QBaseStepEnabled(const QDateTimeEdit* self) {
	auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_StepEnabled_IsBase(true);
	return vqdatetimeedit->stepEnabled();
}
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnStepEnabled(const QDateTimeEdit* self, intptr_t slot) {
	auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_StepEnabled_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_StepEnabled_Callback>(slot));
}
}

// Derived class handler implementation
void QDateTimeEdit_MousePressEvent(QDateTimeEdit* self, QMouseEvent* event) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
	vqdatetimeedit->mousePressEvent(event);
	} else {
	self->QDateTimeEdit::mousePressEvent(event);
}
}

// Base class handler implementation
void QDateTimeEdit_QBaseMousePressEvent(QDateTimeEdit* self, QMouseEvent* event) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_MousePressEvent_IsBase(true);
	vqdatetimeedit->mousePressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMousePressEvent(QDateTimeEdit* self, intptr_t slot) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_MousePressEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QDateTimeEdit_PaintEvent(QDateTimeEdit* self, QPaintEvent* event) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
	vqdatetimeedit->paintEvent(event);
	} else {
	self->QDateTimeEdit::paintEvent(event);
}
}

// Base class handler implementation
void QDateTimeEdit_QBasePaintEvent(QDateTimeEdit* self, QPaintEvent* event) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_PaintEvent_IsBase(true);
	vqdatetimeedit->paintEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnPaintEvent(QDateTimeEdit* self, intptr_t slot) {
	auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_PaintEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QDateTimeEdit_InitStyleOption(const QDateTimeEdit* self, QStyleOptionSpinBox* option) {
	auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
	vqdatetimeedit->initStyleOption(option);
	} else {
	self->QDateTimeEdit::initStyleOption(option);
}
}

// Base class handler implementation
void QDateTimeEdit_QBaseInitStyleOption(const QDateTimeEdit* self, QStyleOptionSpinBox* option) {
	auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_InitStyleOption_IsBase(true);
	vqdatetimeedit->initStyleOption(option);
}
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnInitStyleOption(const QDateTimeEdit* self, intptr_t slot) {
	auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
	if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
vqdatetimeedit->setQDateTimeEdit_InitStyleOption_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_InitStyleOption_Callback>(slot));
}
}

void QDateTimeEdit_Delete(QDateTimeEdit* self) {
    delete self;
}

QTimeEdit* QTimeEdit_new(QWidget* parent) {
	 return new QTimeEdit(parent);
}

QTimeEdit* QTimeEdit_new2() {
	 return new QTimeEdit();
}

QTimeEdit* QTimeEdit_new3(QTime* time) {
	 return new QTimeEdit(*time);
}

QTimeEdit* QTimeEdit_new4(QTime* time, QWidget* parent) {
	 return new QTimeEdit(*time, parent);
}

libqt_string QTimeEdit_Tr(const char* s) {
	QString _ret = QTimeEdit::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTimeEdit_UserTimeChanged(QTimeEdit* self, QTime* time) {
	self->userTimeChanged(*time);
}

void QTimeEdit_Connect_UserTimeChanged(QTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(QTimeEdit*, QTime*) = reinterpret_cast<void (*)(QTimeEdit*, QTime*)>(slot);
    QTimeEdit::connect(self, &QTimeEdit::userTimeChanged, [self, slotFunc](QTime time) {
	slotFunc(self, time);
    });
}

libqt_string QTimeEdit_Tr2(const char* s, const char* c) {
	QString _ret = QTimeEdit::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTimeEdit_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTimeEdit::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTimeEdit_Delete(QTimeEdit* self) {
    delete self;
}

QDateEdit* QDateEdit_new(QWidget* parent) {
	 return new QDateEdit(parent);
}

QDateEdit* QDateEdit_new2() {
	 return new QDateEdit();
}

QDateEdit* QDateEdit_new3(QDate* date) {
	 return new QDateEdit(*date);
}

QDateEdit* QDateEdit_new4(QDate* date, QWidget* parent) {
	 return new QDateEdit(*date, parent);
}

libqt_string QDateEdit_Tr(const char* s) {
	QString _ret = QDateEdit::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QDateEdit_UserDateChanged(QDateEdit* self, QDate* date) {
	self->userDateChanged(*date);
}

void QDateEdit_Connect_UserDateChanged(QDateEdit* self, intptr_t slot) {
    void (*slotFunc)(QDateEdit*, QDate*) = reinterpret_cast<void (*)(QDateEdit*, QDate*)>(slot);
    QDateEdit::connect(self, &QDateEdit::userDateChanged, [self, slotFunc](QDate date) {
	slotFunc(self, date);
    });
}

libqt_string QDateEdit_Tr2(const char* s, const char* c) {
	QString _ret = QDateEdit::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDateEdit_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDateEdit::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QDateEdit_Delete(QDateEdit* self) {
    delete self;
}

