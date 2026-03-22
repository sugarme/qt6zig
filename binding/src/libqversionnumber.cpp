#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVersionNumber>
#include <qversionnumber.h>
#include "libqversionnumber.h"
#include "libqversionnumber.hxx"

QVersionNumber* QVersionNumber_new() {
	 return new QVersionNumber();
}

QVersionNumber* QVersionNumber_new2(libqt_list args) {
	 return new QVersionNumber(QSpan<const int>());
}

QVersionNumber* QVersionNumber_new3(int maj) {
	 return new QVersionNumber(maj);
}

QVersionNumber* QVersionNumber_new4(int maj, int min) {
	 return new QVersionNumber(maj, min);
}

QVersionNumber* QVersionNumber_new5(int maj, int min, int mic) {
	 return new QVersionNumber(maj, min, mic);
}

bool QVersionNumber_IsNull(const QVersionNumber* self) {
	return self->isNull();
}

bool QVersionNumber_IsNormalized(const QVersionNumber* self) {
	return self->isNormalized();
}

int QVersionNumber_MajorVersion(const QVersionNumber* self) {
	return self->majorVersion();
}

int QVersionNumber_MinorVersion(const QVersionNumber* self) {
	return self->minorVersion();
}

int QVersionNumber_MicroVersion(const QVersionNumber* self) {
	return self->microVersion();
}

QVersionNumber* QVersionNumber_Normalized(const QVersionNumber* self) {
	return new QVersionNumber(self->normalized());
}

libqt_list QVersionNumber_Segments(const QVersionNumber* self) {
	auto _ret = self->segments();
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

int QVersionNumber_SegmentAt(const QVersionNumber* self, ptrdiff_t index) {
	return self->segmentAt(index);
}

ptrdiff_t QVersionNumber_SegmentCount(const QVersionNumber* self) {
	return self->segmentCount();
}

bool QVersionNumber_IsPrefixOf(const QVersionNumber* self, const QVersionNumber* other) {
	return self->isPrefixOf(*other);
}

int QVersionNumber_Compare(const QVersionNumber* v1, const QVersionNumber* v2) {
	return QVersionNumber::compare(*v1, *v2);
}

QVersionNumber* QVersionNumber_CommonPrefix(const QVersionNumber* v1, const QVersionNumber* v2) {
	return new QVersionNumber(QVersionNumber::commonPrefix(*v1, *v2));
}

libqt_string QVersionNumber_ToString(const QVersionNumber* self) {
	QString _ret = self->toString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QVersionNumber_Delete(QVersionNumber* self) {
    delete self;
}

