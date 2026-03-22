#include <QByteArray>
#include <QByteArrayView>
#include <QDateTime>
#include <QLocale>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTimeZone>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTimeZone__OffsetData
#include <qtimezone.h>
#include "libqtimezone.h"
#include "libqtimezone.hxx"

QTimeZone* QTimeZone_new() {
	 return new QTimeZone();
}

QTimeZone* QTimeZone_new2(int spec) {
	 return new QTimeZone(static_cast<QTimeZone::Initialization>(spec));
}

QTimeZone* QTimeZone_new3(int offsetSeconds) {
	 return new QTimeZone(offsetSeconds);
}

QTimeZone* QTimeZone_new4(const libqt_string ianaId) {
	 return new QTimeZone(QByteArray(ianaId.data, ianaId.len));
}

QTimeZone* QTimeZone_new5(const libqt_string zoneId, int offsetSeconds, const libqt_string name, const libqt_string abbreviation) {
	 return new QTimeZone(QByteArray(zoneId.data, zoneId.len), offsetSeconds, QString::fromUtf8(name.data, name.len), QString::fromUtf8(abbreviation.data, abbreviation.len));
}

QTimeZone* QTimeZone_new6(const QTimeZone* other) {
	 return new QTimeZone(*other);
}

QTimeZone* QTimeZone_new7(const libqt_string zoneId, int offsetSeconds, const libqt_string name, const libqt_string abbreviation, ushort territory) {
	 return new QTimeZone(QByteArray(zoneId.data, zoneId.len), offsetSeconds, QString::fromUtf8(name.data, name.len), QString::fromUtf8(abbreviation.data, abbreviation.len), static_cast<QLocale::Country>(territory));
}

QTimeZone* QTimeZone_new8(const libqt_string zoneId, int offsetSeconds, const libqt_string name, const libqt_string abbreviation, ushort territory, const libqt_string comment) {
	 return new QTimeZone(QByteArray(zoneId.data, zoneId.len), offsetSeconds, QString::fromUtf8(name.data, name.len), QString::fromUtf8(abbreviation.data, abbreviation.len), static_cast<QLocale::Country>(territory), QString::fromUtf8(comment.data, comment.len));
}

void QTimeZone_OperatorAssign(QTimeZone* self, const QTimeZone* other) {
	self->operator=(*other);
}

void QTimeZone_Swap(QTimeZone* self, QTimeZone* other) {
	self->swap(*other);
}

bool QTimeZone_IsValid(const QTimeZone* self) {
	return self->isValid();
}

QTimeZone* QTimeZone_FromSecondsAheadOfUtc(int offset) {
	return new QTimeZone(QTimeZone::fromSecondsAheadOfUtc(offset));
}

int QTimeZone_TimeSpec(const QTimeZone* self) {
	return self->timeSpec();
}

int QTimeZone_FixedSecondsAheadOfUtc(const QTimeZone* self) {
	return self->fixedSecondsAheadOfUtc();
}

bool QTimeZone_IsUtcOrFixedOffset(int spec) {
	return QTimeZone::isUtcOrFixedOffset(static_cast<Qt::TimeSpec>(spec));
}

bool QTimeZone_IsUtcOrFixedOffset2(const QTimeZone* self) {
	return self->isUtcOrFixedOffset();
}

QTimeZone* QTimeZone_AsBackendZone(const QTimeZone* self) {
	return new QTimeZone(self->asBackendZone());
}

bool QTimeZone_HasAlternativeName(const QTimeZone* self, QByteArrayView* alias) {
	return self->hasAlternativeName(*alias);
}

libqt_string QTimeZone_Id(const QTimeZone* self) {
	QByteArray _qb = self->id();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

ushort QTimeZone_Territory(const QTimeZone* self) {
	return self->territory();
}

ushort QTimeZone_Country(const QTimeZone* self) {
	return self->country();
}

libqt_string QTimeZone_Comment(const QTimeZone* self) {
	QString _ret = self->comment();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTimeZone_DisplayName(const QTimeZone* self, const QDateTime* atDateTime) {
	QString _ret = self->displayName(*atDateTime);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTimeZone_DisplayName2(const QTimeZone* self, int timeType) {
	QString _ret = self->displayName(static_cast<QTimeZone::TimeType>(timeType));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTimeZone_Abbreviation(const QTimeZone* self, const QDateTime* atDateTime) {
	QString _ret = self->abbreviation(*atDateTime);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QTimeZone_OffsetFromUtc(const QTimeZone* self, const QDateTime* atDateTime) {
	return self->offsetFromUtc(*atDateTime);
}

int QTimeZone_StandardTimeOffset(const QTimeZone* self, const QDateTime* atDateTime) {
	return self->standardTimeOffset(*atDateTime);
}

int QTimeZone_DaylightTimeOffset(const QTimeZone* self, const QDateTime* atDateTime) {
	return self->daylightTimeOffset(*atDateTime);
}

bool QTimeZone_HasDaylightTime(const QTimeZone* self) {
	return self->hasDaylightTime();
}

bool QTimeZone_IsDaylightTime(const QTimeZone* self, const QDateTime* atDateTime) {
	return self->isDaylightTime(*atDateTime);
}

QTimeZone__OffsetData* QTimeZone_OffsetData(const QTimeZone* self, const QDateTime* forDateTime) {
	return new QTimeZone::OffsetData(self->offsetData(*forDateTime));
}

bool QTimeZone_HasTransitions(const QTimeZone* self) {
	return self->hasTransitions();
}

QTimeZone__OffsetData* QTimeZone_NextTransition(const QTimeZone* self, const QDateTime* afterDateTime) {
	return new QTimeZone::OffsetData(self->nextTransition(*afterDateTime));
}

QTimeZone__OffsetData* QTimeZone_PreviousTransition(const QTimeZone* self, const QDateTime* beforeDateTime) {
	return new QTimeZone::OffsetData(self->previousTransition(*beforeDateTime));
}

libqt_list QTimeZone_Transitions(const QTimeZone* self, const QDateTime* fromDateTime, const QDateTime* toDateTime) {
	auto _ret = self->transitions(*fromDateTime, *toDateTime);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_string QTimeZone_SystemTimeZoneId() {
	QByteArray _qb = QTimeZone::systemTimeZoneId();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QTimeZone* QTimeZone_SystemTimeZone() {
	return new QTimeZone(QTimeZone::systemTimeZone());
}

QTimeZone* QTimeZone_Utc() {
	return new QTimeZone(QTimeZone::utc());
}

bool QTimeZone_IsTimeZoneIdAvailable(const libqt_string ianaId) {
	return QTimeZone::isTimeZoneIdAvailable(QByteArray(ianaId.data, ianaId.len));
}

libqt_list QTimeZone_AvailableTimeZoneIds() {
	auto _ret = QTimeZone::availableTimeZoneIds();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_list QTimeZone_AvailableTimeZoneIds2(ushort territory) {
	auto _ret = QTimeZone::availableTimeZoneIds(static_cast<QLocale::Country>(territory));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_list QTimeZone_AvailableTimeZoneIds3(int offsetSeconds) {
	auto _ret = QTimeZone::availableTimeZoneIds(offsetSeconds);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_string QTimeZone_IanaIdToWindowsId(const libqt_string ianaId) {
	QByteArray _qb = QTimeZone::ianaIdToWindowsId(QByteArray(ianaId.data, ianaId.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTimeZone_WindowsIdToDefaultIanaId(const libqt_string windowsId) {
	QByteArray _qb = QTimeZone::windowsIdToDefaultIanaId(QByteArray(windowsId.data, windowsId.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTimeZone_WindowsIdToDefaultIanaId2(const libqt_string windowsId, ushort territory) {
	QByteArray _qb = QTimeZone::windowsIdToDefaultIanaId(QByteArray(windowsId.data, windowsId.len), static_cast<QLocale::Country>(territory));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QTimeZone_WindowsIdToIanaIds(const libqt_string windowsId) {
	auto _ret = QTimeZone::windowsIdToIanaIds(QByteArray(windowsId.data, windowsId.len));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_list QTimeZone_WindowsIdToIanaIds2(const libqt_string windowsId, ushort territory) {
	auto _ret = QTimeZone::windowsIdToIanaIds(QByteArray(windowsId.data, windowsId.len), static_cast<QLocale::Country>(territory));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_string QTimeZone_DisplayName22(const QTimeZone* self, const QDateTime* atDateTime, int nameType) {
	QString _ret = self->displayName(*atDateTime, static_cast<QTimeZone::NameType>(nameType));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTimeZone_DisplayName3(const QTimeZone* self, const QDateTime* atDateTime, int nameType, const QLocale* locale) {
	QString _ret = self->displayName(*atDateTime, static_cast<QTimeZone::NameType>(nameType), *locale);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTimeZone_DisplayName23(const QTimeZone* self, int timeType, int nameType) {
	QString _ret = self->displayName(static_cast<QTimeZone::TimeType>(timeType), static_cast<QTimeZone::NameType>(nameType));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTimeZone_DisplayName32(const QTimeZone* self, int timeType, int nameType, const QLocale* locale) {
	QString _ret = self->displayName(static_cast<QTimeZone::TimeType>(timeType), static_cast<QTimeZone::NameType>(nameType), *locale);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTimeZone_Delete(QTimeZone* self) {
    delete self;
}

QTimeZone__OffsetData* QTimeZone__OffsetData_new(const QTimeZone__OffsetData* param1) {
	 return new QTimeZone::OffsetData(*param1);
}

QTimeZone__OffsetData* QTimeZone__OffsetData_new2() {
	 return new QTimeZone::OffsetData();
}

libqt_string QTimeZone__OffsetData_Abbreviation(const QTimeZone__OffsetData* self) {
	QString _ret = self->abbreviation;
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTimeZone__OffsetData_SetAbbreviation(QTimeZone__OffsetData* self, libqt_string abbreviation) {
	self->abbreviation;
}

QDateTime* QTimeZone__OffsetData_AtUtc(const QTimeZone__OffsetData* self) {
	return new QDateTime(self->atUtc);
}

void QTimeZone__OffsetData_SetAtUtc(QTimeZone__OffsetData* self, QDateTime* atUtc) {
	self->atUtc;
}

int QTimeZone__OffsetData_OffsetFromUtc(const QTimeZone__OffsetData* self) {
	return self->offsetFromUtc;
}

void QTimeZone__OffsetData_SetOffsetFromUtc(QTimeZone__OffsetData* self, int offsetFromUtc) {
	self->offsetFromUtc;
}

int QTimeZone__OffsetData_StandardTimeOffset(const QTimeZone__OffsetData* self) {
	return self->standardTimeOffset;
}

void QTimeZone__OffsetData_SetStandardTimeOffset(QTimeZone__OffsetData* self, int standardTimeOffset) {
	self->standardTimeOffset;
}

int QTimeZone__OffsetData_DaylightTimeOffset(const QTimeZone__OffsetData* self) {
	return self->daylightTimeOffset;
}

void QTimeZone__OffsetData_SetDaylightTimeOffset(QTimeZone__OffsetData* self, int daylightTimeOffset) {
	self->daylightTimeOffset;
}

void QTimeZone__OffsetData_OperatorAssign(QTimeZone__OffsetData* self, const QTimeZone__OffsetData* param1) {
	self->operator=(*param1);
}

void QTimeZone__OffsetData_Delete(QTimeZone__OffsetData* self) {
    delete self;
}

