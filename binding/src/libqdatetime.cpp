#include <QCalendar>
#include <QDate>
#include <QDateTime>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTime>
#include <QTimeZone>
#include <qdatetime.h>
#include "libqdatetime.h"
#include "libqdatetime.hxx"

QDate* QDate_new(const QDate* other) {
	 return new QDate(*other);
}

QDate* QDate_new2(QDate* other) {
	 return new QDate(*other);
}

QDate* QDate_new3() {
	 return new QDate();
}

QDate* QDate_new4(int y, int m, int d) {
	 return new QDate(y, m, d);
}

QDate* QDate_new5(int y, int m, int d, QCalendar* cal) {
	 return new QDate(y, m, d, *cal);
}

QDate* QDate_new6(const QDate* param1) {
	 return new QDate(*param1);
}

void QDate_CopyAssign(QDate* self, QDate* other) {
    *self = *other;
}

void QDate_MoveAssign(QDate* self, QDate* other) {
    *self = std::move(*other);
}

bool QDate_IsNull(const QDate* self) {
	return self->isNull();
}

bool QDate_IsValid(const QDate* self) {
	return self->isValid();
}

int QDate_Year(const QDate* self) {
	return self->year();
}

int QDate_Month(const QDate* self) {
	return self->month();
}

int QDate_Day(const QDate* self) {
	return self->day();
}

int QDate_DayOfWeek(const QDate* self) {
	return self->dayOfWeek();
}

int QDate_DayOfYear(const QDate* self) {
	return self->dayOfYear();
}

int QDate_DaysInMonth(const QDate* self) {
	return self->daysInMonth();
}

int QDate_DaysInYear(const QDate* self) {
	return self->daysInYear();
}

int QDate_WeekNumber(const QDate* self) {
	return self->weekNumber();
}

int QDate_Year2(const QDate* self, QCalendar* cal) {
	return self->year(*cal);
}

int QDate_Month2(const QDate* self, QCalendar* cal) {
	return self->month(*cal);
}

int QDate_Day2(const QDate* self, QCalendar* cal) {
	return self->day(*cal);
}

int QDate_DayOfWeek2(const QDate* self, QCalendar* cal) {
	return self->dayOfWeek(*cal);
}

int QDate_DayOfYear2(const QDate* self, QCalendar* cal) {
	return self->dayOfYear(*cal);
}

int QDate_DaysInMonth2(const QDate* self, QCalendar* cal) {
	return self->daysInMonth(*cal);
}

int QDate_DaysInYear2(const QDate* self, QCalendar* cal) {
	return self->daysInYear(*cal);
}

QDateTime* QDate_StartOfDay(const QDate* self, int spec) {
	return new QDateTime(self->startOfDay(static_cast<Qt::TimeSpec>(spec)));
}

QDateTime* QDate_EndOfDay(const QDate* self, int spec) {
	return new QDateTime(self->endOfDay(static_cast<Qt::TimeSpec>(spec)));
}

QDateTime* QDate_StartOfDay2(const QDate* self, const QTimeZone* zone) {
	return new QDateTime(self->startOfDay(*zone));
}

QDateTime* QDate_EndOfDay2(const QDate* self, const QTimeZone* zone) {
	return new QDateTime(self->endOfDay(*zone));
}

QDateTime* QDate_StartOfDay3(const QDate* self) {
	return new QDateTime(self->startOfDay());
}

QDateTime* QDate_EndOfDay3(const QDate* self) {
	return new QDateTime(self->endOfDay());
}

libqt_string QDate_ToString(const QDate* self) {
	QString _ret = self->toString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDate_ToString2(const QDate* self, const libqt_string format) {
	QString _ret = self->toString(QString::fromUtf8(format.data, format.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDate_ToString3(const QDate* self, const libqt_string format, QCalendar* cal) {
	QString _ret = self->toString(QString::fromUtf8(format.data, format.len), *cal);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QDate_SetDate(QDate* self, int year, int month, int day) {
	return self->setDate(year, month, day);
}

bool QDate_SetDate2(QDate* self, int year, int month, int day, QCalendar* cal) {
	return self->setDate(year, month, day, *cal);
}

void QDate_GetDate(const QDate* self, int* year, int* month, int* day) {
	self->getDate(year, month, day);
}

QDate* QDate_AddDays(const QDate* self, long long days) {
	return new QDate(self->addDays(days));
}

QDate* QDate_AddMonths(const QDate* self, int months) {
	return new QDate(self->addMonths(months));
}

QDate* QDate_AddYears(const QDate* self, int years) {
	return new QDate(self->addYears(years));
}

QDate* QDate_AddMonths2(const QDate* self, int months, QCalendar* cal) {
	return new QDate(self->addMonths(months, *cal));
}

QDate* QDate_AddYears2(const QDate* self, int years, QCalendar* cal) {
	return new QDate(self->addYears(years, *cal));
}

long long QDate_DaysTo(const QDate* self, QDate* d) {
	return self->daysTo(*d);
}

QDate* QDate_CurrentDate() {
	return new QDate(QDate::currentDate());
}

QDate* QDate_FromString2(const libqt_string stringVal) {
	return new QDate(QDate::fromString(QString::fromUtf8(stringVal.data, stringVal.len)));
}

QDate* QDate_FromString5(const libqt_string stringVal, const libqt_string format, QCalendar* cal) {
	return new QDate(QDate::fromString(QString::fromUtf8(stringVal.data, stringVal.len), QString::fromUtf8(format.data, format.len), *cal));
}

QDate* QDate_FromString10(const libqt_string stringVal, const libqt_string format) {
	return new QDate(QDate::fromString(QString::fromUtf8(stringVal.data, stringVal.len), QString::fromUtf8(format.data, format.len)));
}

QDate* QDate_FromString11(const libqt_string stringVal, const libqt_string format, int baseYear, QCalendar* cal) {
	return new QDate(QDate::fromString(QString::fromUtf8(stringVal.data, stringVal.len), QString::fromUtf8(format.data, format.len), baseYear, *cal));
}

bool QDate_IsValid2(int y, int m, int d) {
	return QDate::isValid(y, m, d);
}

bool QDate_IsLeapYear(int year) {
	return QDate::isLeapYear(year);
}

QDate* QDate_FromJulianDay(long long jd_) {
	return new QDate(QDate::fromJulianDay(jd_));
}

long long QDate_ToJulianDay(const QDate* self) {
	return self->toJulianDay();
}

int QDate_WeekNumber1(const QDate* self, int* yearNum) {
	return self->weekNumber(yearNum);
}

QDateTime* QDate_StartOfDay22(const QDate* self, int spec, int offsetSeconds) {
	return new QDateTime(self->startOfDay(static_cast<Qt::TimeSpec>(spec), offsetSeconds));
}

QDateTime* QDate_EndOfDay22(const QDate* self, int spec, int offsetSeconds) {
	return new QDateTime(self->endOfDay(static_cast<Qt::TimeSpec>(spec), offsetSeconds));
}

libqt_string QDate_ToString1(const QDate* self, int format) {
	QString _ret = self->toString(static_cast<Qt::DateFormat>(format));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QDate* QDate_FromString23(const libqt_string stringVal, int format) {
	return new QDate(QDate::fromString(QString::fromUtf8(stringVal.data, stringVal.len), static_cast<Qt::DateFormat>(format)));
}

QDate* QDate_FromString34(const libqt_string stringVal, const libqt_string format, int baseYear) {
	return new QDate(QDate::fromString(QString::fromUtf8(stringVal.data, stringVal.len), QString::fromUtf8(format.data, format.len), baseYear));
}

void QDate_Delete(QDate* self) {
    delete self;
}

QTime* QTime_new(const QTime* other) {
	 return new QTime(*other);
}

QTime* QTime_new2(QTime* other) {
	 return new QTime(*other);
}

QTime* QTime_new3() {
	 return new QTime();
}

QTime* QTime_new4(int h, int m) {
	 return new QTime(h, m);
}

QTime* QTime_new5(const QTime* param1) {
	 return new QTime(*param1);
}

QTime* QTime_new6(int h, int m, int s) {
	 return new QTime(h, m, s);
}

QTime* QTime_new7(int h, int m, int s, int ms) {
	 return new QTime(h, m, s, ms);
}

void QTime_CopyAssign(QTime* self, QTime* other) {
    *self = *other;
}

void QTime_MoveAssign(QTime* self, QTime* other) {
    *self = std::move(*other);
}

bool QTime_IsNull(const QTime* self) {
	return self->isNull();
}

bool QTime_IsValid(const QTime* self) {
	return self->isValid();
}

int QTime_Hour(const QTime* self) {
	return self->hour();
}

int QTime_Minute(const QTime* self) {
	return self->minute();
}

int QTime_Second(const QTime* self) {
	return self->second();
}

int QTime_Msec(const QTime* self) {
	return self->msec();
}

libqt_string QTime_ToString(const QTime* self) {
	QString _ret = self->toString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTime_ToString2(const QTime* self, const libqt_string format) {
	QString _ret = self->toString(QString::fromUtf8(format.data, format.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QTime_SetHMS(QTime* self, int h, int m, int s) {
	return self->setHMS(h, m, s);
}

QTime* QTime_AddSecs(const QTime* self, int secs) {
	return new QTime(self->addSecs(secs));
}

int QTime_SecsTo(const QTime* self, QTime* t) {
	return self->secsTo(*t);
}

QTime* QTime_AddMSecs(const QTime* self, int ms) {
	return new QTime(self->addMSecs(ms));
}

int QTime_MsecsTo(const QTime* self, QTime* t) {
	return self->msecsTo(*t);
}

QTime* QTime_FromMSecsSinceStartOfDay(int msecs) {
	return new QTime(QTime::fromMSecsSinceStartOfDay(msecs));
}

int QTime_MsecsSinceStartOfDay(const QTime* self) {
	return self->msecsSinceStartOfDay();
}

QTime* QTime_CurrentTime() {
	return new QTime(QTime::currentTime());
}

QTime* QTime_FromString4(const libqt_string stringVal) {
	return new QTime(QTime::fromString(QString::fromUtf8(stringVal.data, stringVal.len)));
}

QTime* QTime_FromString5(const libqt_string stringVal, const libqt_string format) {
	return new QTime(QTime::fromString(QString::fromUtf8(stringVal.data, stringVal.len), QString::fromUtf8(format.data, format.len)));
}

bool QTime_IsValid2(int h, int m, int s) {
	return QTime::isValid(h, m, s);
}

libqt_string QTime_ToString1(const QTime* self, int f) {
	QString _ret = self->toString(static_cast<Qt::DateFormat>(f));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QTime_SetHMS4(QTime* self, int h, int m, int s, int ms) {
	return self->setHMS(h, m, s, ms);
}

QTime* QTime_FromString23(const libqt_string stringVal, int format) {
	return new QTime(QTime::fromString(QString::fromUtf8(stringVal.data, stringVal.len), static_cast<Qt::DateFormat>(format)));
}

bool QTime_IsValid4(int h, int m, int s, int ms) {
	return QTime::isValid(h, m, s, ms);
}

void QTime_Delete(QTime* self) {
    delete self;
}

QDateTime* QDateTime_new() {
	 return new QDateTime();
}

QDateTime* QDateTime_new2(QDate* date, QTime* time, int spec) {
	 return new QDateTime(*date, *time, static_cast<Qt::TimeSpec>(spec));
}

QDateTime* QDateTime_new3(QDate* date, QTime* time, const QTimeZone* timeZone) {
	 return new QDateTime(*date, *time, *timeZone);
}

QDateTime* QDateTime_new4(QDate* date, QTime* time) {
	 return new QDateTime(*date, *time);
}

QDateTime* QDateTime_new5(const QDateTime* other) {
	 return new QDateTime(*other);
}

QDateTime* QDateTime_new6(QDate* date, QTime* time, int spec, int offsetSeconds) {
	 return new QDateTime(*date, *time, static_cast<Qt::TimeSpec>(spec), offsetSeconds);
}

QDateTime* QDateTime_new7(QDate* date, QTime* time, const QTimeZone* timeZone, int resolve) {
	 return new QDateTime(*date, *time, *timeZone, static_cast<QDateTime::TransitionResolution>(resolve));
}

QDateTime* QDateTime_new8(QDate* date, QTime* time, int resolve) {
	 return new QDateTime(*date, *time, static_cast<QDateTime::TransitionResolution>(resolve));
}

void QDateTime_OperatorAssign(QDateTime* self, const QDateTime* other) {
	self->operator=(*other);
}

void QDateTime_Swap(QDateTime* self, QDateTime* other) {
	self->swap(*other);
}

bool QDateTime_IsNull(const QDateTime* self) {
	return self->isNull();
}

bool QDateTime_IsValid(const QDateTime* self) {
	return self->isValid();
}

QDate* QDateTime_Date(const QDateTime* self) {
	return new QDate(self->date());
}

QTime* QDateTime_Time(const QDateTime* self) {
	return new QTime(self->time());
}

int QDateTime_TimeSpec(const QDateTime* self) {
	return self->timeSpec();
}

int QDateTime_OffsetFromUtc(const QDateTime* self) {
	return self->offsetFromUtc();
}

QTimeZone* QDateTime_TimeRepresentation(const QDateTime* self) {
	return new QTimeZone(self->timeRepresentation());
}

QTimeZone* QDateTime_TimeZone(const QDateTime* self) {
	return new QTimeZone(self->timeZone());
}

libqt_string QDateTime_TimeZoneAbbreviation(const QDateTime* self) {
	QString _ret = self->timeZoneAbbreviation();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QDateTime_IsDaylightTime(const QDateTime* self) {
	return self->isDaylightTime();
}

long long QDateTime_ToMSecsSinceEpoch(const QDateTime* self) {
	return self->toMSecsSinceEpoch();
}

long long QDateTime_ToSecsSinceEpoch(const QDateTime* self) {
	return self->toSecsSinceEpoch();
}

void QDateTime_SetDate(QDateTime* self, QDate* date) {
	self->setDate(*date);
}

void QDateTime_SetTime(QDateTime* self, QTime* time) {
	self->setTime(*time);
}

void QDateTime_SetTimeSpec(QDateTime* self, int spec) {
	self->setTimeSpec(static_cast<Qt::TimeSpec>(spec));
}

void QDateTime_SetOffsetFromUtc(QDateTime* self, int offsetSeconds) {
	self->setOffsetFromUtc(offsetSeconds);
}

void QDateTime_SetTimeZone(QDateTime* self, const QTimeZone* toZone) {
	self->setTimeZone(*toZone);
}

void QDateTime_SetMSecsSinceEpoch(QDateTime* self, long long msecs) {
	self->setMSecsSinceEpoch(msecs);
}

void QDateTime_SetSecsSinceEpoch(QDateTime* self, long long secs) {
	self->setSecsSinceEpoch(secs);
}

libqt_string QDateTime_ToString(const QDateTime* self) {
	QString _ret = self->toString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDateTime_ToString2(const QDateTime* self, const libqt_string format) {
	QString _ret = self->toString(QString::fromUtf8(format.data, format.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDateTime_ToString3(const QDateTime* self, const libqt_string format, QCalendar* cal) {
	QString _ret = self->toString(QString::fromUtf8(format.data, format.len), *cal);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QDateTime* QDateTime_AddDays(const QDateTime* self, long long days) {
	return new QDateTime(self->addDays(days));
}

QDateTime* QDateTime_AddMonths(const QDateTime* self, int months) {
	return new QDateTime(self->addMonths(months));
}

QDateTime* QDateTime_AddYears(const QDateTime* self, int years) {
	return new QDateTime(self->addYears(years));
}

QDateTime* QDateTime_AddSecs(const QDateTime* self, long long secs) {
	return new QDateTime(self->addSecs(secs));
}

QDateTime* QDateTime_AddMSecs(const QDateTime* self, long long msecs) {
	return new QDateTime(self->addMSecs(msecs));
}

QDateTime* QDateTime_ToTimeSpec(const QDateTime* self, int spec) {
	return new QDateTime(self->toTimeSpec(static_cast<Qt::TimeSpec>(spec)));
}

QDateTime* QDateTime_ToLocalTime(const QDateTime* self) {
	return new QDateTime(self->toLocalTime());
}

QDateTime* QDateTime_ToUTC(const QDateTime* self) {
	return new QDateTime(self->toUTC());
}

QDateTime* QDateTime_ToOffsetFromUtc(const QDateTime* self, int offsetSeconds) {
	return new QDateTime(self->toOffsetFromUtc(offsetSeconds));
}

QDateTime* QDateTime_ToTimeZone(const QDateTime* self, const QTimeZone* toZone) {
	return new QDateTime(self->toTimeZone(*toZone));
}

long long QDateTime_DaysTo(const QDateTime* self, const QDateTime* param1) {
	return self->daysTo(*param1);
}

long long QDateTime_SecsTo(const QDateTime* self, const QDateTime* param1) {
	return self->secsTo(*param1);
}

long long QDateTime_MsecsTo(const QDateTime* self, const QDateTime* param1) {
	return self->msecsTo(*param1);
}

QDateTime* QDateTime_CurrentDateTime(const QTimeZone* zone) {
	return new QDateTime(QDateTime::currentDateTime(*zone));
}

QDateTime* QDateTime_CurrentDateTime2() {
	return new QDateTime(QDateTime::currentDateTime());
}

QDateTime* QDateTime_CurrentDateTimeUtc() {
	return new QDateTime(QDateTime::currentDateTimeUtc());
}

QDateTime* QDateTime_FromString2(const libqt_string stringVal) {
	return new QDateTime(QDateTime::fromString(QString::fromUtf8(stringVal.data, stringVal.len)));
}

QDateTime* QDateTime_FromString5(const libqt_string stringVal, const libqt_string format, QCalendar* cal) {
	return new QDateTime(QDateTime::fromString(QString::fromUtf8(stringVal.data, stringVal.len), QString::fromUtf8(format.data, format.len), *cal));
}

QDateTime* QDateTime_FromString10(const libqt_string stringVal, const libqt_string format) {
	return new QDateTime(QDateTime::fromString(QString::fromUtf8(stringVal.data, stringVal.len), QString::fromUtf8(format.data, format.len)));
}

QDateTime* QDateTime_FromString11(const libqt_string stringVal, const libqt_string format, int baseYear, QCalendar* cal) {
	return new QDateTime(QDateTime::fromString(QString::fromUtf8(stringVal.data, stringVal.len), QString::fromUtf8(format.data, format.len), baseYear, *cal));
}

QDateTime* QDateTime_FromMSecsSinceEpoch(long long msecs, int spec) {
	return new QDateTime(QDateTime::fromMSecsSinceEpoch(msecs, static_cast<Qt::TimeSpec>(spec)));
}

QDateTime* QDateTime_FromSecsSinceEpoch(long long secs, int spec) {
	return new QDateTime(QDateTime::fromSecsSinceEpoch(secs, static_cast<Qt::TimeSpec>(spec)));
}

QDateTime* QDateTime_FromMSecsSinceEpoch2(long long msecs, const QTimeZone* timeZone) {
	return new QDateTime(QDateTime::fromMSecsSinceEpoch(msecs, *timeZone));
}

QDateTime* QDateTime_FromSecsSinceEpoch2(long long secs, const QTimeZone* timeZone) {
	return new QDateTime(QDateTime::fromSecsSinceEpoch(secs, *timeZone));
}

QDateTime* QDateTime_FromMSecsSinceEpoch3(long long msecs) {
	return new QDateTime(QDateTime::fromMSecsSinceEpoch(msecs));
}

QDateTime* QDateTime_FromSecsSinceEpoch3(long long secs) {
	return new QDateTime(QDateTime::fromSecsSinceEpoch(secs));
}

long long QDateTime_CurrentMSecsSinceEpoch() {
	return QDateTime::currentMSecsSinceEpoch();
}

long long QDateTime_CurrentSecsSinceEpoch() {
	return QDateTime::currentSecsSinceEpoch();
}

void QDateTime_SetDate2(QDateTime* self, QDate* date, int resolve) {
	self->setDate(*date, static_cast<QDateTime::TransitionResolution>(resolve));
}

void QDateTime_SetTime2(QDateTime* self, QTime* time, int resolve) {
	self->setTime(*time, static_cast<QDateTime::TransitionResolution>(resolve));
}

void QDateTime_SetTimeZone2(QDateTime* self, const QTimeZone* toZone, int resolve) {
	self->setTimeZone(*toZone, static_cast<QDateTime::TransitionResolution>(resolve));
}

libqt_string QDateTime_ToString1(const QDateTime* self, int format) {
	QString _ret = self->toString(static_cast<Qt::DateFormat>(format));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QDateTime* QDateTime_FromString23(const libqt_string stringVal, int format) {
	return new QDateTime(QDateTime::fromString(QString::fromUtf8(stringVal.data, stringVal.len), static_cast<Qt::DateFormat>(format)));
}

QDateTime* QDateTime_FromString34(const libqt_string stringVal, const libqt_string format, int baseYear) {
	return new QDateTime(QDateTime::fromString(QString::fromUtf8(stringVal.data, stringVal.len), QString::fromUtf8(format.data, format.len), baseYear));
}

QDateTime* QDateTime_FromMSecsSinceEpoch32(long long msecs, int spec, int offsetFromUtc) {
	return new QDateTime(QDateTime::fromMSecsSinceEpoch(msecs, static_cast<Qt::TimeSpec>(spec), offsetFromUtc));
}

QDateTime* QDateTime_FromSecsSinceEpoch32(long long secs, int spec, int offsetFromUtc) {
	return new QDateTime(QDateTime::fromSecsSinceEpoch(secs, static_cast<Qt::TimeSpec>(spec), offsetFromUtc));
}

void QDateTime_Delete(QDateTime* self) {
    delete self;
}

