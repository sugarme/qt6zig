#include <QAnyStringView>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVersionNumber>
#include <qversionnumber.h>
#include "libqversionnumber.h"
#include "libqversionnumber.hxx"

QVersionNumber* QVersionNumber_new() {
	 return new QVersionNumber();
}

QVersionNumber* QVersionNumber_new2(libqt_list args) {
	 return new QVersionNumber(args);
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
	return self->segments();
}

int QVersionNumber_SegmentAt(const QVersionNumber* self, ptrdiff_t index) {
	return self->segmentAt(index);
}

ptrdiff_t QVersionNumber_SegmentCount(const QVersionNumber* self) {
	return self->segmentCount();
}

QVersionNumber::It QVersionNumber_Begin(const QVersionNumber* self) {
	return self->begin();
}

QVersionNumber::It QVersionNumber_End(const QVersionNumber* self) {
	return self->end();
}

QVersionNumber::It QVersionNumber_Cbegin(const QVersionNumber* self) {
	return self->cbegin();
}

QVersionNumber::It QVersionNumber_Cend(const QVersionNumber* self) {
	return self->cend();
}

std::reverse_iterator<QVersionNumber::It> QVersionNumber_Rbegin(const QVersionNumber* self) {
	return self->rbegin();
}

std::reverse_iterator<QVersionNumber::It> QVersionNumber_Rend(const QVersionNumber* self) {
	return self->rend();
}

std::reverse_iterator<QVersionNumber::It> QVersionNumber_Crbegin(const QVersionNumber* self) {
	return self->crbegin();
}

std::reverse_iterator<QVersionNumber::It> QVersionNumber_Crend(const QVersionNumber* self) {
	return self->crend();
}

QVersionNumber::It QVersionNumber_ConstBegin(const QVersionNumber* self) {
	return self->constBegin();
}

QVersionNumber::It QVersionNumber_ConstEnd(const QVersionNumber* self) {
	return self->constEnd();
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

QVersionNumber* QVersionNumber_FromString(libqt_string stringVal) {
	return new QVersionNumber(QVersionNumber::fromString(QAnyStringView(QString::fromUtf8(stringVal.data, stringVal.len))));
}

QVersionNumber* QVersionNumber_FromString2(libqt_string stringVal, ptrdiff_t* suffixIndex) {
	return new QVersionNumber(QVersionNumber::fromString(QAnyStringView(QString::fromUtf8(stringVal.data, stringVal.len)), suffixIndex));
}

void QVersionNumber_Delete(QVersionNumber* self) {
    delete self;
}

