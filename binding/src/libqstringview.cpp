#include <QByteArray>
#include <QChar>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStringView>
#include <qstringview.h>
#include "libqstringview.h"
#include "libqstringview.hxx"

QStringView* QStringView_new() {
	 return new QStringView();
}

void QStringView_CopyAssign(QStringView* self, QStringView* other) {
    *self = *other;
}

void QStringView_MoveAssign(QStringView* self, QStringView* other) {
    *self = std::move(*other);
}

libqt_string QStringView_ToString(const QStringView* self) {
	QString _ret = self->toString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

ptrdiff_t QStringView_Size(const QStringView* self) {
	return self->size();
}

It::value_type** QStringView_Data(const QStringView* self) {
	return self->data();
}

It::value_type** QStringView_ConstData(const QStringView* self) {
	return self->constData();
}

QChar* QStringView_OperatorSubscript(const QStringView* self, ptrdiff_t n) {
	return new QChar(self->operator[](n));
}

libqt_string QStringView_ToLatin1(const QStringView* self) {
	QByteArray _qb = self->toLatin1();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QStringView_ToUtf8(const QStringView* self) {
	QByteArray _qb = self->toUtf8();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QStringView_ToLocal8Bit(const QStringView* self) {
	QByteArray _qb = self->toLocal8Bit();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QStringView_ToUcs4(const QStringView* self) {
	auto _ret = self->toUcs4();
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

QChar* QStringView_At(const QStringView* self, ptrdiff_t n) {
	return new QChar(self->at(n));
}

void QStringView_Truncate(QStringView* self, ptrdiff_t n) {
	self->truncate(n);
}

void QStringView_Chop(QStringView* self, ptrdiff_t n) {
	self->chop(n);
}

int QStringView_Compare4(const QStringView* self, QChar* c) {
	return self->compare(*c);
}

int QStringView_Compare5(const QStringView* self, QChar* c, int cs) {
	return self->compare(*c, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_StartsWith3(const QStringView* self, QChar* c) {
	return self->startsWith(*c);
}

bool QStringView_StartsWith4(const QStringView* self, QChar* c, int cs) {
	return self->startsWith(*c, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_EndsWith3(const QStringView* self, QChar* c) {
	return self->endsWith(*c);
}

bool QStringView_EndsWith4(const QStringView* self, QChar* c, int cs) {
	return self->endsWith(*c, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_IndexOf(const QStringView* self, QChar* c) {
	return self->indexOf(*c);
}

bool QStringView_Contains(const QStringView* self, QChar* c) {
	return self->contains(*c);
}

ptrdiff_t QStringView_Count(const QStringView* self, QChar* c) {
	return self->count(*c);
}

ptrdiff_t QStringView_LastIndexOf(const QStringView* self, QChar* c) {
	return self->lastIndexOf(*c);
}

ptrdiff_t QStringView_LastIndexOf2(const QStringView* self, QChar* c, ptrdiff_t from) {
	return self->lastIndexOf(*c, from);
}

ptrdiff_t QStringView_IndexOf4(const QStringView* self, const QRegularExpression* re) {
	return self->indexOf(*re);
}

ptrdiff_t QStringView_LastIndexOf7(const QStringView* self, const QRegularExpression* re, ptrdiff_t from) {
	return self->lastIndexOf(*re, from);
}

bool QStringView_Contains4(const QStringView* self, const QRegularExpression* re) {
	return self->contains(*re);
}

ptrdiff_t QStringView_Count4(const QStringView* self, const QRegularExpression* re) {
	return self->count(*re);
}

bool QStringView_IsRightToLeft(const QStringView* self) {
	return self->isRightToLeft();
}

bool QStringView_IsValidUtf16(const QStringView* self) {
	return self->isValidUtf16();
}

bool QStringView_IsUpper(const QStringView* self) {
	return self->isUpper();
}

bool QStringView_IsLower(const QStringView* self) {
	return self->isLower();
}

int16_t QStringView_ToShort(const QStringView* self) {
	return self->toShort();
}

uint16_t QStringView_ToUShort(const QStringView* self) {
	return self->toUShort();
}

int QStringView_ToInt(const QStringView* self) {
	return self->toInt();
}

unsigned int QStringView_ToUInt(const QStringView* self) {
	return self->toUInt();
}

long QStringView_ToLong(const QStringView* self) {
	return self->toLong();
}

unsigned long QStringView_ToULong(const QStringView* self) {
	return self->toULong();
}

long long QStringView_ToLongLong(const QStringView* self) {
	return self->toLongLong();
}

unsigned long long QStringView_ToULongLong(const QStringView* self) {
	return self->toULongLong();
}

float QStringView_ToFloat(const QStringView* self) {
	return self->toFloat();
}

double QStringView_ToDouble(const QStringView* self) {
	return self->toDouble();
}

libqt_list QStringView_Split2(const QStringView* self, QChar* sep) {
	auto _ret = self->split(*sep);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

libqt_list QStringView_Split3(const QStringView* self, const QRegularExpression* sep) {
	auto _ret = self->split(*sep);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

It::value_type** QStringView_Begin(const QStringView* self) {
	return self->begin();
}

It::value_type** QStringView_End(const QStringView* self) {
	return self->end();
}

It::value_type** QStringView_Cbegin(const QStringView* self) {
	return self->cbegin();
}

It::value_type** QStringView_Cend(const QStringView* self) {
	return self->cend();
}

bool QStringView_Empty(const QStringView* self) {
	return self->empty();
}

QChar* QStringView_Front(const QStringView* self) {
	return new QChar(self->front());
}

QChar* QStringView_Back(const QStringView* self) {
	return new QChar(self->back());
}

ptrdiff_t QStringView_MaxSize(const QStringView* self) {
	return self->max_size();
}

It::value_type** QStringView_ConstBegin(const QStringView* self) {
	return self->constBegin();
}

It::value_type** QStringView_ConstEnd(const QStringView* self) {
	return self->constEnd();
}

bool QStringView_IsNull(const QStringView* self) {
	return self->isNull();
}

bool QStringView_IsEmpty(const QStringView* self) {
	return self->isEmpty();
}

ptrdiff_t QStringView_Length(const QStringView* self) {
	return self->length();
}

QChar* QStringView_First2(const QStringView* self) {
	return new QChar(self->first());
}

QChar* QStringView_Last2(const QStringView* self) {
	return new QChar(self->last());
}

ptrdiff_t QStringView_MaxSize2() {
	return QStringView::maxSize();
}

ptrdiff_t QStringView_IndexOf22(const QStringView* self, QChar* c, ptrdiff_t from) {
	return self->indexOf(*c, from);
}

ptrdiff_t QStringView_IndexOf32(const QStringView* self, QChar* c, ptrdiff_t from, int cs) {
	return self->indexOf(*c, from, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_Contains22(const QStringView* self, QChar* c, int cs) {
	return self->contains(*c, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_Count22(const QStringView* self, QChar* c, int cs) {
	return self->count(*c, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_LastIndexOf22(const QStringView* self, QChar* c, int cs) {
	return self->lastIndexOf(*c, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_LastIndexOf32(const QStringView* self, QChar* c, ptrdiff_t from, int cs) {
	return self->lastIndexOf(*c, from, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_IndexOf25(const QStringView* self, const QRegularExpression* re, ptrdiff_t from) {
	return self->indexOf(*re, from);
}

ptrdiff_t QStringView_IndexOf35(const QStringView* self, const QRegularExpression* re, ptrdiff_t from, QRegularExpressionMatch* rmatch) {
	return self->indexOf(*re, from, rmatch);
}

ptrdiff_t QStringView_LastIndexOf35(const QStringView* self, const QRegularExpression* re, ptrdiff_t from, QRegularExpressionMatch* rmatch) {
	return self->lastIndexOf(*re, from, rmatch);
}

bool QStringView_Contains25(const QStringView* self, const QRegularExpression* re, QRegularExpressionMatch* rmatch) {
	return self->contains(*re, rmatch);
}

int16_t QStringView_ToShort1(const QStringView* self, bool* ok) {
	return self->toShort(ok);
}

int16_t QStringView_ToShort2(const QStringView* self, bool* ok, int base) {
	return self->toShort(ok, base);
}

uint16_t QStringView_ToUShort1(const QStringView* self, bool* ok) {
	return self->toUShort(ok);
}

uint16_t QStringView_ToUShort2(const QStringView* self, bool* ok, int base) {
	return self->toUShort(ok, base);
}

int QStringView_ToInt1(const QStringView* self, bool* ok) {
	return self->toInt(ok);
}

int QStringView_ToInt2(const QStringView* self, bool* ok, int base) {
	return self->toInt(ok, base);
}

unsigned int QStringView_ToUInt1(const QStringView* self, bool* ok) {
	return self->toUInt(ok);
}

unsigned int QStringView_ToUInt2(const QStringView* self, bool* ok, int base) {
	return self->toUInt(ok, base);
}

long QStringView_ToLong1(const QStringView* self, bool* ok) {
	return self->toLong(ok);
}

long QStringView_ToLong2(const QStringView* self, bool* ok, int base) {
	return self->toLong(ok, base);
}

unsigned long QStringView_ToULong1(const QStringView* self, bool* ok) {
	return self->toULong(ok);
}

unsigned long QStringView_ToULong2(const QStringView* self, bool* ok, int base) {
	return self->toULong(ok, base);
}

long long QStringView_ToLongLong1(const QStringView* self, bool* ok) {
	return self->toLongLong(ok);
}

long long QStringView_ToLongLong2(const QStringView* self, bool* ok, int base) {
	return self->toLongLong(ok, base);
}

unsigned long long QStringView_ToULongLong1(const QStringView* self, bool* ok) {
	return self->toULongLong(ok);
}

unsigned long long QStringView_ToULongLong2(const QStringView* self, bool* ok, int base) {
	return self->toULongLong(ok, base);
}

float QStringView_ToFloat1(const QStringView* self, bool* ok) {
	return self->toFloat(ok);
}

double QStringView_ToDouble1(const QStringView* self, bool* ok) {
	return self->toDouble(ok);
}

libqt_list QStringView_Split23(const QStringView* self, QChar* sep, int behavior) {
	auto _ret = self->split(*sep, static_cast<QFlags<Qt::SplitBehaviorFlags>>(behavior));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

libqt_list QStringView_Split33(const QStringView* self, QChar* sep, int behavior, int cs) {
	auto _ret = self->split(*sep, static_cast<QFlags<Qt::SplitBehaviorFlags>>(behavior), static_cast<Qt::CaseSensitivity>(cs));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

libqt_list QStringView_Split24(const QStringView* self, const QRegularExpression* sep, int behavior) {
	auto _ret = self->split(*sep, static_cast<QFlags<Qt::SplitBehaviorFlags>>(behavior));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

void QStringView_Delete(QStringView* self) {
    delete self;
}

