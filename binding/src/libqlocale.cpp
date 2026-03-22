#include <QCalendar>
#include <QDataStream>
#include <QDate>
#include <QDateTime>
#include <QLocale>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStringView>
#include <QTextStream>
#include <QTime>
#include <QVariant>
#include <qlocale.h>
#include "libqlocale.h"
#include "libqlocale.hxx"

QLocale* QLocale_new() {
	 return new QLocale();
}

QLocale* QLocale_new2(const libqt_string name) {
	 return new QLocale(QString::fromUtf8(name.data, name.len));
}

QLocale* QLocale_new3(QStringView* name) {
	 return new QLocale(*name);
}

QLocale* QLocale_new4(ushort language, ushort territory) {
	 return new QLocale(static_cast<QLocale::Language>(language), static_cast<QLocale::Country>(territory));
}

QLocale* QLocale_new5(ushort language) {
	 return new QLocale(static_cast<QLocale::Language>(language));
}

QLocale* QLocale_new6(const QLocale* other) {
	 return new QLocale(*other);
}

QLocale* QLocale_new7(ushort language, ushort script) {
	 return new QLocale(static_cast<QLocale::Language>(language), static_cast<QLocale::Script>(script));
}

QLocale* QLocale_new8(ushort language, ushort script, ushort territory) {
	 return new QLocale(static_cast<QLocale::Language>(language), static_cast<QLocale::Script>(script), static_cast<QLocale::Country>(territory));
}

void QLocale_OperatorAssign(QLocale* self, const QLocale* other) {
	self->operator=(*other);
}

void QLocale_Swap(QLocale* self, QLocale* other) {
	self->swap(*other);
}

ushort QLocale_Language(const QLocale* self) {
	return self->language();
}

ushort QLocale_Script(const QLocale* self) {
	return self->script();
}

ushort QLocale_Territory(const QLocale* self) {
	return self->territory();
}

ushort QLocale_Country(const QLocale* self) {
	return self->country();
}

libqt_string QLocale_Name(const QLocale* self) {
	QString _ret = self->name();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_Bcp47Name(const QLocale* self) {
	QString _ret = self->bcp47Name();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_NativeLanguageName(const QLocale* self) {
	QString _ret = self->nativeLanguageName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_NativeTerritoryName(const QLocale* self) {
	QString _ret = self->nativeTerritoryName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_NativeCountryName(const QLocale* self) {
	QString _ret = self->nativeCountryName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int16_t QLocale_ToShort(const QLocale* self, const libqt_string s) {
	return self->toShort(QString::fromUtf8(s.data, s.len));
}

uint16_t QLocale_ToUShort(const QLocale* self, const libqt_string s) {
	return self->toUShort(QString::fromUtf8(s.data, s.len));
}

int QLocale_ToInt(const QLocale* self, const libqt_string s) {
	return self->toInt(QString::fromUtf8(s.data, s.len));
}

unsigned int QLocale_ToUInt(const QLocale* self, const libqt_string s) {
	return self->toUInt(QString::fromUtf8(s.data, s.len));
}

long QLocale_ToLong(const QLocale* self, const libqt_string s) {
	return self->toLong(QString::fromUtf8(s.data, s.len));
}

unsigned long QLocale_ToULong(const QLocale* self, const libqt_string s) {
	return self->toULong(QString::fromUtf8(s.data, s.len));
}

long long QLocale_ToLongLong(const QLocale* self, const libqt_string s) {
	return self->toLongLong(QString::fromUtf8(s.data, s.len));
}

unsigned long long QLocale_ToULongLong(const QLocale* self, const libqt_string s) {
	return self->toULongLong(QString::fromUtf8(s.data, s.len));
}

float QLocale_ToFloat(const QLocale* self, const libqt_string s) {
	return self->toFloat(QString::fromUtf8(s.data, s.len));
}

double QLocale_ToDouble(const QLocale* self, const libqt_string s) {
	return self->toDouble(QString::fromUtf8(s.data, s.len));
}

int16_t QLocale_ToShort2(const QLocale* self, QStringView* s) {
	return self->toShort(*s);
}

uint16_t QLocale_ToUShort2(const QLocale* self, QStringView* s) {
	return self->toUShort(*s);
}

int QLocale_ToInt2(const QLocale* self, QStringView* s) {
	return self->toInt(*s);
}

unsigned int QLocale_ToUInt2(const QLocale* self, QStringView* s) {
	return self->toUInt(*s);
}

long QLocale_ToLong2(const QLocale* self, QStringView* s) {
	return self->toLong(*s);
}

unsigned long QLocale_ToULong2(const QLocale* self, QStringView* s) {
	return self->toULong(*s);
}

long long QLocale_ToLongLong2(const QLocale* self, QStringView* s) {
	return self->toLongLong(*s);
}

unsigned long long QLocale_ToULongLong2(const QLocale* self, QStringView* s) {
	return self->toULongLong(*s);
}

float QLocale_ToFloat2(const QLocale* self, QStringView* s) {
	return self->toFloat(*s);
}

double QLocale_ToDouble2(const QLocale* self, QStringView* s) {
	return self->toDouble(*s);
}

libqt_string QLocale_ToString(const QLocale* self, long long i) {
	QString _ret = self->toString(i);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString2(const QLocale* self, unsigned long long i) {
	QString _ret = self->toString(i);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString3(const QLocale* self, long i) {
	QString _ret = self->toString(i);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString4(const QLocale* self, unsigned long i) {
	QString _ret = self->toString(i);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString5(const QLocale* self, int16_t i) {
	QString _ret = self->toString(i);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString6(const QLocale* self, uint16_t i) {
	QString _ret = self->toString(i);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString7(const QLocale* self, int i) {
	QString _ret = self->toString(i);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString8(const QLocale* self, unsigned int i) {
	QString _ret = self->toString(i);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString9(const QLocale* self, double f) {
	QString _ret = self->toString(f);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString10(const QLocale* self, float f) {
	QString _ret = self->toString(f);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString11(const QLocale* self, QDate* date, const libqt_string format) {
	QString _ret = self->toString(*date, QString::fromUtf8(format.data, format.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString12(const QLocale* self, QTime* time, const libqt_string format) {
	QString _ret = self->toString(*time, QString::fromUtf8(format.data, format.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString13(const QLocale* self, const QDateTime* dateTime, const libqt_string format) {
	QString _ret = self->toString(*dateTime, QString::fromUtf8(format.data, format.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString14(const QLocale* self, QDate* date, QStringView* format) {
	QString _ret = self->toString(*date, *format);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString15(const QLocale* self, QTime* time, QStringView* format) {
	QString _ret = self->toString(*time, *format);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString16(const QLocale* self, const QDateTime* dateTime, QStringView* format) {
	QString _ret = self->toString(*dateTime, *format);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString17(const QLocale* self, QDate* date) {
	QString _ret = self->toString(*date);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString18(const QLocale* self, QTime* time) {
	QString _ret = self->toString(*time);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString19(const QLocale* self, const QDateTime* dateTime) {
	QString _ret = self->toString(*dateTime);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString20(const QLocale* self, QDate* date, QStringView* format, QCalendar* cal) {
	QString _ret = self->toString(*date, *format, *cal);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString21(const QLocale* self, QDate* date, int format, QCalendar* cal) {
	QString _ret = self->toString(*date, static_cast<QTextFormat::FormatType>(format), *cal);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString22(const QLocale* self, const QDateTime* dateTime, int format, QCalendar* cal) {
	QString _ret = self->toString(*dateTime, static_cast<QTextFormat::FormatType>(format), *cal);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString23(const QLocale* self, const QDateTime* dateTime, QStringView* format, QCalendar* cal) {
	QString _ret = self->toString(*dateTime, *format, *cal);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_DateFormat(const QLocale* self) {
	QString _ret = self->dateFormat();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_TimeFormat(const QLocale* self) {
	QString _ret = self->timeFormat();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_DateTimeFormat(const QLocale* self) {
	QString _ret = self->dateTimeFormat();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QTime* QLocale_ToTime(const QLocale* self, const libqt_string stringVal) {
	return new QTime(self->toTime(QString::fromUtf8(stringVal.data, stringVal.len)));
}

QTime* QLocale_ToTime2(const QLocale* self, const libqt_string stringVal, const libqt_string format) {
	return new QTime(self->toTime(QString::fromUtf8(stringVal.data, stringVal.len), QString::fromUtf8(format.data, format.len)));
}

QDate* QLocale_ToDate(const QLocale* self, const libqt_string stringVal) {
	return new QDate(self->toDate(QString::fromUtf8(stringVal.data, stringVal.len)));
}

QDate* QLocale_ToDate2(const QLocale* self, const libqt_string stringVal, const libqt_string format) {
	return new QDate(self->toDate(QString::fromUtf8(stringVal.data, stringVal.len), QString::fromUtf8(format.data, format.len)));
}

QDateTime* QLocale_ToDateTime(const QLocale* self, const libqt_string stringVal) {
	return new QDateTime(self->toDateTime(QString::fromUtf8(stringVal.data, stringVal.len)));
}

QDateTime* QLocale_ToDateTime2(const QLocale* self, const libqt_string stringVal, const libqt_string format) {
	return new QDateTime(self->toDateTime(QString::fromUtf8(stringVal.data, stringVal.len), QString::fromUtf8(format.data, format.len)));
}

QDate* QLocale_ToDate3(const QLocale* self, const libqt_string stringVal, int format, QCalendar* cal) {
	return new QDate(self->toDate(QString::fromUtf8(stringVal.data, stringVal.len), static_cast<QTextFormat::FormatType>(format), *cal));
}

QDate* QLocale_ToDate4(const QLocale* self, const libqt_string stringVal, const libqt_string format, QCalendar* cal) {
	return new QDate(self->toDate(QString::fromUtf8(stringVal.data, stringVal.len), QString::fromUtf8(format.data, format.len), *cal));
}

QDateTime* QLocale_ToDateTime3(const QLocale* self, const libqt_string stringVal, int format, QCalendar* cal) {
	return new QDateTime(self->toDateTime(QString::fromUtf8(stringVal.data, stringVal.len), static_cast<QTextFormat::FormatType>(format), *cal));
}

QDateTime* QLocale_ToDateTime4(const QLocale* self, const libqt_string stringVal, const libqt_string format, QCalendar* cal) {
	return new QDateTime(self->toDateTime(QString::fromUtf8(stringVal.data, stringVal.len), QString::fromUtf8(format.data, format.len), *cal));
}

libqt_string QLocale_DecimalPoint(const QLocale* self) {
	QString _ret = self->decimalPoint();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_GroupSeparator(const QLocale* self) {
	QString _ret = self->groupSeparator();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_Percent(const QLocale* self) {
	QString _ret = self->percent();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ZeroDigit(const QLocale* self) {
	QString _ret = self->zeroDigit();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_NegativeSign(const QLocale* self) {
	QString _ret = self->negativeSign();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_PositiveSign(const QLocale* self) {
	QString _ret = self->positiveSign();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_Exponential(const QLocale* self) {
	QString _ret = self->exponential();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_MonthName(const QLocale* self, int param1) {
	QString _ret = self->monthName(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_StandaloneMonthName(const QLocale* self, int param1) {
	QString _ret = self->standaloneMonthName(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_DayName(const QLocale* self, int param1) {
	QString _ret = self->dayName(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_StandaloneDayName(const QLocale* self, int param1) {
	QString _ret = self->standaloneDayName(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QLocale_FirstDayOfWeek(const QLocale* self) {
	return self->firstDayOfWeek();
}

libqt_list QLocale_Weekdays(const QLocale* self) {
	return self->weekdays();
}

libqt_string QLocale_AmText(const QLocale* self) {
	QString _ret = self->amText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_PmText(const QLocale* self) {
	QString _ret = self->pmText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QLocale_MeasurementSystem(const QLocale* self) {
	return self->measurementSystem();
}

QLocale* QLocale_Collation(const QLocale* self) {
	return new QLocale(self->collation());
}

int QLocale_TextDirection(const QLocale* self) {
	return self->textDirection();
}

libqt_string QLocale_ToUpper(const QLocale* self, const libqt_string str) {
	QString _ret = self->toUpper(QString::fromUtf8(str.data, str.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToLower(const QLocale* self, const libqt_string str) {
	QString _ret = self->toLower(QString::fromUtf8(str.data, str.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_CurrencySymbol(const QLocale* self) {
	QString _ret = self->currencySymbol();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToCurrencyString(const QLocale* self, long long param1) {
	QString _ret = self->toCurrencyString(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToCurrencyString2(const QLocale* self, unsigned long long param1) {
	QString _ret = self->toCurrencyString(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToCurrencyString3(const QLocale* self, int16_t i) {
	QString _ret = self->toCurrencyString(i);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToCurrencyString4(const QLocale* self, uint16_t i) {
	QString _ret = self->toCurrencyString(i);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToCurrencyString5(const QLocale* self, int i) {
	QString _ret = self->toCurrencyString(i);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToCurrencyString6(const QLocale* self, unsigned int i) {
	QString _ret = self->toCurrencyString(i);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToCurrencyString7(const QLocale* self, double param1) {
	QString _ret = self->toCurrencyString(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToCurrencyString8(const QLocale* self, float i) {
	QString _ret = self->toCurrencyString(i);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_FormattedDataSize(const QLocale* self, long long bytes) {
	QString _ret = self->formattedDataSize(bytes);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QLocale_UiLanguages(const QLocale* self) {
	return self->uiLanguages();
}

libqt_string QLocale_LanguageToCode(ushort language) {
	QString _ret = QLocale::languageToCode(static_cast<QLocale::Language>(language));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

ushort QLocale_CodeToLanguage(QStringView* languageCode) {
	return QLocale::codeToLanguage(*languageCode);
}

libqt_string QLocale_TerritoryToCode(ushort territory) {
	QString _ret = QLocale::territoryToCode(static_cast<QLocale::Country>(territory));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

ushort QLocale_CodeToTerritory(QStringView* territoryCode) {
	return QLocale::codeToTerritory(*territoryCode);
}

libqt_string QLocale_CountryToCode(ushort country) {
	QString _ret = QLocale::countryToCode(static_cast<QLocale::Country>(country));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

ushort QLocale_CodeToCountry(QStringView* countryCode) {
	return QLocale::codeToCountry(*countryCode);
}

libqt_string QLocale_ScriptToCode(ushort script) {
	QString _ret = QLocale::scriptToCode(static_cast<QLocale::Script>(script));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

ushort QLocale_CodeToScript(QStringView* scriptCode) {
	return QLocale::codeToScript(*scriptCode);
}

libqt_string QLocale_LanguageToString(ushort language) {
	QString _ret = QLocale::languageToString(static_cast<QLocale::Language>(language));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_TerritoryToString(ushort territory) {
	QString _ret = QLocale::territoryToString(static_cast<QLocale::Country>(territory));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_CountryToString(ushort country) {
	QString _ret = QLocale::countryToString(static_cast<QLocale::Country>(country));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ScriptToString(ushort script) {
	QString _ret = QLocale::scriptToString(static_cast<QLocale::Script>(script));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QLocale_SetDefault(const QLocale* locale) {
	QLocale::setDefault(*locale);
}

QLocale* QLocale_C() {
	return new QLocale(QLocale::c());
}

QLocale* QLocale_System() {
	return new QLocale(QLocale::system());
}

libqt_list QLocale_MatchingLocales(ushort language, ushort script, ushort territory) {
	return QLocale::matchingLocales(static_cast<QLocale::Language>(language), static_cast<QLocale::Script>(script), static_cast<QLocale::Country>(territory));
}

libqt_list QLocale_CountriesForLanguage(ushort lang) {
	return QLocale::countriesForLanguage(static_cast<QLocale::Language>(lang));
}

void QLocale_SetNumberOptions(QLocale* self, int options) {
	self->setNumberOptions(static_cast<QFlags<QLocale::NumberOption>>(options));
}

int QLocale_NumberOptions(const QLocale* self) {
	return self->numberOptions();
}

libqt_string QLocale_QuoteString(const QLocale* self, const libqt_string str) {
	QString _ret = self->quoteString(QString::fromUtf8(str.data, str.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_QuoteString2(const QLocale* self, QStringView* str) {
	QString _ret = self->quoteString(*str);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_CreateSeparatedList(const QLocale* self, const libqt_list strl) {
	QString _ret = self->createSeparatedList(*strl);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_Name1(const QLocale* self, char separator) {
	QString _ret = self->name(static_cast<QLocale::TagSeparator>(separator));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_Bcp47Name1(const QLocale* self, char separator) {
	QString _ret = self->bcp47Name(static_cast<QLocale::TagSeparator>(separator));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int16_t QLocale_ToShort22(const QLocale* self, const libqt_string s, bool* ok) {
	return self->toShort(QString::fromUtf8(s.data, s.len), ok);
}

uint16_t QLocale_ToUShort22(const QLocale* self, const libqt_string s, bool* ok) {
	return self->toUShort(QString::fromUtf8(s.data, s.len), ok);
}

int QLocale_ToInt22(const QLocale* self, const libqt_string s, bool* ok) {
	return self->toInt(QString::fromUtf8(s.data, s.len), ok);
}

unsigned int QLocale_ToUInt22(const QLocale* self, const libqt_string s, bool* ok) {
	return self->toUInt(QString::fromUtf8(s.data, s.len), ok);
}

long QLocale_ToLong22(const QLocale* self, const libqt_string s, bool* ok) {
	return self->toLong(QString::fromUtf8(s.data, s.len), ok);
}

unsigned long QLocale_ToULong22(const QLocale* self, const libqt_string s, bool* ok) {
	return self->toULong(QString::fromUtf8(s.data, s.len), ok);
}

long long QLocale_ToLongLong22(const QLocale* self, const libqt_string s, bool* ok) {
	return self->toLongLong(QString::fromUtf8(s.data, s.len), ok);
}

unsigned long long QLocale_ToULongLong22(const QLocale* self, const libqt_string s, bool* ok) {
	return self->toULongLong(QString::fromUtf8(s.data, s.len), ok);
}

float QLocale_ToFloat22(const QLocale* self, const libqt_string s, bool* ok) {
	return self->toFloat(QString::fromUtf8(s.data, s.len), ok);
}

double QLocale_ToDouble22(const QLocale* self, const libqt_string s, bool* ok) {
	return self->toDouble(QString::fromUtf8(s.data, s.len), ok);
}

int16_t QLocale_ToShort23(const QLocale* self, QStringView* s, bool* ok) {
	return self->toShort(*s, ok);
}

uint16_t QLocale_ToUShort23(const QLocale* self, QStringView* s, bool* ok) {
	return self->toUShort(*s, ok);
}

int QLocale_ToInt23(const QLocale* self, QStringView* s, bool* ok) {
	return self->toInt(*s, ok);
}

unsigned int QLocale_ToUInt23(const QLocale* self, QStringView* s, bool* ok) {
	return self->toUInt(*s, ok);
}

long QLocale_ToLong23(const QLocale* self, QStringView* s, bool* ok) {
	return self->toLong(*s, ok);
}

unsigned long QLocale_ToULong23(const QLocale* self, QStringView* s, bool* ok) {
	return self->toULong(*s, ok);
}

long long QLocale_ToLongLong23(const QLocale* self, QStringView* s, bool* ok) {
	return self->toLongLong(*s, ok);
}

unsigned long long QLocale_ToULongLong23(const QLocale* self, QStringView* s, bool* ok) {
	return self->toULongLong(*s, ok);
}

float QLocale_ToFloat23(const QLocale* self, QStringView* s, bool* ok) {
	return self->toFloat(*s, ok);
}

double QLocale_ToDouble23(const QLocale* self, QStringView* s, bool* ok) {
	return self->toDouble(*s, ok);
}

libqt_string QLocale_ToString24(const QLocale* self, double f, char format) {
	QString _ret = self->toString(f, format);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString32(const QLocale* self, double f, char format, int precision) {
	QString _ret = self->toString(f, format, precision);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString25(const QLocale* self, float f, char format) {
	QString _ret = self->toString(f, format);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString33(const QLocale* self, float f, char format, int precision) {
	QString _ret = self->toString(f, format, precision);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString26(const QLocale* self, QDate* date, int format) {
	QString _ret = self->toString(*date, static_cast<QTextFormat::FormatType>(format));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString27(const QLocale* self, QTime* time, int format) {
	QString _ret = self->toString(*time, static_cast<QTextFormat::FormatType>(format));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToString28(const QLocale* self, const QDateTime* dateTime, int format) {
	QString _ret = self->toString(*dateTime, static_cast<QTextFormat::FormatType>(format));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_DateFormat1(const QLocale* self, int format) {
	QString _ret = self->dateFormat(static_cast<QTextFormat::FormatType>(format));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_TimeFormat1(const QLocale* self, int format) {
	QString _ret = self->timeFormat(static_cast<QTextFormat::FormatType>(format));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_DateTimeFormat1(const QLocale* self, int format) {
	QString _ret = self->dateTimeFormat(static_cast<QTextFormat::FormatType>(format));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QTime* QLocale_ToTime22(const QLocale* self, const libqt_string stringVal, int param2) {
	return new QTime(self->toTime(QString::fromUtf8(stringVal.data, stringVal.len), static_cast<QLocale::FormatType>(param2)));
}

QDate* QLocale_ToDate22(const QLocale* self, const libqt_string stringVal, int param2) {
	return new QDate(self->toDate(QString::fromUtf8(stringVal.data, stringVal.len), static_cast<QLocale::FormatType>(param2)));
}

QDate* QLocale_ToDate32(const QLocale* self, const libqt_string stringVal, int param2, int baseYear) {
	return new QDate(self->toDate(QString::fromUtf8(stringVal.data, stringVal.len), static_cast<QLocale::FormatType>(param2), baseYear));
}

QDate* QLocale_ToDate33(const QLocale* self, const libqt_string stringVal, const libqt_string format, int baseYear) {
	return new QDate(self->toDate(QString::fromUtf8(stringVal.data, stringVal.len), QString::fromUtf8(format.data, format.len), baseYear));
}

QDateTime* QLocale_ToDateTime22(const QLocale* self, const libqt_string stringVal, int format) {
	return new QDateTime(self->toDateTime(QString::fromUtf8(stringVal.data, stringVal.len), static_cast<QTextFormat::FormatType>(format)));
}

QDateTime* QLocale_ToDateTime32(const QLocale* self, const libqt_string stringVal, int format, int baseYear) {
	return new QDateTime(self->toDateTime(QString::fromUtf8(stringVal.data, stringVal.len), static_cast<QTextFormat::FormatType>(format), baseYear));
}

QDateTime* QLocale_ToDateTime33(const QLocale* self, const libqt_string stringVal, const libqt_string format, int baseYear) {
	return new QDateTime(self->toDateTime(QString::fromUtf8(stringVal.data, stringVal.len), QString::fromUtf8(format.data, format.len), baseYear));
}

QDate* QLocale_ToDate42(const QLocale* self, const libqt_string stringVal, int format, QCalendar* cal, int baseYear) {
	return new QDate(self->toDate(QString::fromUtf8(stringVal.data, stringVal.len), static_cast<QTextFormat::FormatType>(format), *cal, baseYear));
}

QDate* QLocale_ToDate43(const QLocale* self, const libqt_string stringVal, const libqt_string format, QCalendar* cal, int baseYear) {
	return new QDate(self->toDate(QString::fromUtf8(stringVal.data, stringVal.len), QString::fromUtf8(format.data, format.len), *cal, baseYear));
}

QDateTime* QLocale_ToDateTime42(const QLocale* self, const libqt_string stringVal, int format, QCalendar* cal, int baseYear) {
	return new QDateTime(self->toDateTime(QString::fromUtf8(stringVal.data, stringVal.len), static_cast<QTextFormat::FormatType>(format), *cal, baseYear));
}

QDateTime* QLocale_ToDateTime43(const QLocale* self, const libqt_string stringVal, const libqt_string format, QCalendar* cal, int baseYear) {
	return new QDateTime(self->toDateTime(QString::fromUtf8(stringVal.data, stringVal.len), QString::fromUtf8(format.data, format.len), *cal, baseYear));
}

libqt_string QLocale_MonthName2(const QLocale* self, int param1, int format) {
	QString _ret = self->monthName(param1, static_cast<QTextFormat::FormatType>(format));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_StandaloneMonthName2(const QLocale* self, int param1, int format) {
	QString _ret = self->standaloneMonthName(param1, static_cast<QTextFormat::FormatType>(format));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_DayName2(const QLocale* self, int param1, int format) {
	QString _ret = self->dayName(param1, static_cast<QTextFormat::FormatType>(format));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_StandaloneDayName2(const QLocale* self, int param1, int format) {
	QString _ret = self->standaloneDayName(param1, static_cast<QTextFormat::FormatType>(format));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_CurrencySymbol1(const QLocale* self, int param1) {
	QString _ret = self->currencySymbol(static_cast<QLocale::CurrencySymbolFormat>(param1));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToCurrencyString22(const QLocale* self, long long param1, const libqt_string symbol) {
	QString _ret = self->toCurrencyString(param1, QString::fromUtf8(symbol.data, symbol.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToCurrencyString23(const QLocale* self, unsigned long long param1, const libqt_string symbol) {
	QString _ret = self->toCurrencyString(param1, QString::fromUtf8(symbol.data, symbol.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToCurrencyString24(const QLocale* self, int16_t i, const libqt_string symbol) {
	QString _ret = self->toCurrencyString(i, QString::fromUtf8(symbol.data, symbol.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToCurrencyString25(const QLocale* self, uint16_t i, const libqt_string symbol) {
	QString _ret = self->toCurrencyString(i, QString::fromUtf8(symbol.data, symbol.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToCurrencyString26(const QLocale* self, int i, const libqt_string symbol) {
	QString _ret = self->toCurrencyString(i, QString::fromUtf8(symbol.data, symbol.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToCurrencyString27(const QLocale* self, unsigned int i, const libqt_string symbol) {
	QString _ret = self->toCurrencyString(i, QString::fromUtf8(symbol.data, symbol.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToCurrencyString28(const QLocale* self, double param1, const libqt_string symbol) {
	QString _ret = self->toCurrencyString(param1, QString::fromUtf8(symbol.data, symbol.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToCurrencyString32(const QLocale* self, double param1, const libqt_string symbol, int precision) {
	QString _ret = self->toCurrencyString(param1, QString::fromUtf8(symbol.data, symbol.len), precision);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToCurrencyString29(const QLocale* self, float i, const libqt_string symbol) {
	QString _ret = self->toCurrencyString(i, QString::fromUtf8(symbol.data, symbol.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_ToCurrencyString33(const QLocale* self, float i, const libqt_string symbol, int precision) {
	QString _ret = self->toCurrencyString(i, QString::fromUtf8(symbol.data, symbol.len), precision);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_FormattedDataSize2(const QLocale* self, long long bytes, int precision) {
	QString _ret = self->formattedDataSize(bytes, precision);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_FormattedDataSize3(const QLocale* self, long long bytes, int precision, int format) {
	QString _ret = self->formattedDataSize(bytes, precision, static_cast<QFlags<QLocale::DataSizeFormat>>(format));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QLocale_UiLanguages1(const QLocale* self, char separator) {
	return self->uiLanguages(static_cast<QLocale::TagSeparator>(separator));
}

libqt_string QLocale_LanguageToCode2(ushort language, int codeTypes) {
	QString _ret = QLocale::languageToCode(static_cast<QLocale::Language>(language), static_cast<QFlags<QLocale::LanguageCodeType>>(codeTypes));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

ushort QLocale_CodeToLanguage2(QStringView* languageCode, int codeTypes) {
	return QLocale::codeToLanguage(*languageCode, static_cast<QFlags<QLocale::LanguageCodeType>>(codeTypes));
}

libqt_string QLocale_QuoteString22(const QLocale* self, const libqt_string str, int style) {
	QString _ret = self->quoteString(QString::fromUtf8(str.data, str.len), static_cast<QLocale::QuotationStyle>(style));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocale_QuoteString23(const QLocale* self, QStringView* str, int style) {
	QString _ret = self->quoteString(*str, static_cast<QLocale::QuotationStyle>(style));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QLocale_Delete(QLocale* self) {
    delete self;
}

