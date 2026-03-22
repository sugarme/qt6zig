#include <QByteArray>
#include <QChar>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStringView>
#include <qstringview.h>
#include "libqstringview.h"
#include "libqstringview.hxx"

QStringView* QStringView_new(const QStringView* other) {
	 return new QStringView(*other);
}

QStringView* QStringView_new2(QStringView* other) {
	 return new QStringView(*other);
}

QStringView* QStringView_new3() {
	 return new QStringView();
}

QStringView* QStringView_new4(const QStringView* param1) {
	 return new QStringView(*param1);
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
	return self->toUcs4();
}

QChar* QStringView_At(const QStringView* self, ptrdiff_t n) {
	return new QChar(self->at(n));
}

QStringView* QStringView_Mid(const QStringView* self, ptrdiff_t pos) {
	return new QStringView(self->mid(pos));
}

QStringView* QStringView_Left(const QStringView* self, ptrdiff_t n) {
	return new QStringView(self->left(n));
}

QStringView* QStringView_Right(const QStringView* self, ptrdiff_t n) {
	return new QStringView(self->right(n));
}

QStringView* QStringView_First(const QStringView* self, ptrdiff_t n) {
	return new QStringView(self->first(n));
}

QStringView* QStringView_Last(const QStringView* self, ptrdiff_t n) {
	return new QStringView(self->last(n));
}

QStringView* QStringView_Sliced(const QStringView* self, ptrdiff_t pos) {
	return new QStringView(self->sliced(pos));
}

QStringView* QStringView_Sliced2(const QStringView* self, ptrdiff_t pos, ptrdiff_t n) {
	return new QStringView(self->sliced(pos, n));
}

QStringView* QStringView_Chopped(const QStringView* self, ptrdiff_t n) {
	return new QStringView(self->chopped(n));
}

void QStringView_Truncate(QStringView* self, ptrdiff_t n) {
	self->truncate(n);
}

void QStringView_Chop(QStringView* self, ptrdiff_t n) {
	self->chop(n);
}

QStringView* QStringView_Trimmed(const QStringView* self) {
	return new QStringView(self->trimmed());
}

QStringView* QStringView_Slice(QStringView* self, ptrdiff_t pos) {
	return new QStringView(self->slice(pos));
}

QStringView* QStringView_Slice2(QStringView* self, ptrdiff_t pos, ptrdiff_t n) {
	return new QStringView(self->slice(pos, n));
}

int QStringView_Compare(const QStringView* self, QStringView* other) {
	return self->compare(*other);
}

int QStringView_Compare2(const QStringView* self, QLatin1StringView other) {
	return self->compare(other);
}

int QStringView_Compare3(const QStringView* self, QUtf8StringView other) {
	return self->compare(other);
}

int QStringView_Compare4(const QStringView* self, QChar* c) {
	return self->compare(*c);
}

int QStringView_Compare5(const QStringView* self, QChar* c, int cs) {
	return self->compare(*c, static_cast<Qt::CaseSensitivity>(cs));
}

int QStringView_LocaleAwareCompare(const QStringView* self, QStringView* other) {
	return self->localeAwareCompare(*other);
}

bool QStringView_StartsWith(const QStringView* self, QStringView* s) {
	return self->startsWith(*s);
}

bool QStringView_StartsWith2(const QStringView* self, QLatin1StringView s) {
	return self->startsWith(s);
}

bool QStringView_StartsWith3(const QStringView* self, QChar* c) {
	return self->startsWith(*c);
}

bool QStringView_StartsWith4(const QStringView* self, QChar* c, int cs) {
	return self->startsWith(*c, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_EndsWith(const QStringView* self, QStringView* s) {
	return self->endsWith(*s);
}

bool QStringView_EndsWith2(const QStringView* self, QLatin1StringView s) {
	return self->endsWith(s);
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

ptrdiff_t QStringView_IndexOf2(const QStringView* self, QStringView* s) {
	return self->indexOf(*s);
}

ptrdiff_t QStringView_IndexOf3(const QStringView* self, QLatin1StringView s) {
	return self->indexOf(s);
}

bool QStringView_Contains(const QStringView* self, QChar* c) {
	return self->contains(*c);
}

bool QStringView_Contains2(const QStringView* self, QStringView* s) {
	return self->contains(*s);
}

bool QStringView_Contains3(const QStringView* self, QLatin1StringView s) {
	return self->contains(s);
}

ptrdiff_t QStringView_Count(const QStringView* self, QChar* c) {
	return self->count(*c);
}

ptrdiff_t QStringView_Count2(const QStringView* self, QStringView* s) {
	return self->count(*s);
}

ptrdiff_t QStringView_Count3(const QStringView* self, QLatin1StringView s) {
	return self->count(s);
}

ptrdiff_t QStringView_LastIndexOf(const QStringView* self, QChar* c) {
	return self->lastIndexOf(*c);
}

ptrdiff_t QStringView_LastIndexOf2(const QStringView* self, QChar* c, ptrdiff_t from) {
	return self->lastIndexOf(*c, from);
}

ptrdiff_t QStringView_LastIndexOf3(const QStringView* self, QStringView* s) {
	return self->lastIndexOf(*s);
}

ptrdiff_t QStringView_LastIndexOf4(const QStringView* self, QStringView* s, ptrdiff_t from) {
	return self->lastIndexOf(*s, from);
}

ptrdiff_t QStringView_LastIndexOf5(const QStringView* self, QLatin1StringView s) {
	return self->lastIndexOf(s);
}

ptrdiff_t QStringView_LastIndexOf6(const QStringView* self, QLatin1StringView s, ptrdiff_t from) {
	return self->lastIndexOf(s, from);
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

libqt_list QStringView_Split(const QStringView* self, QStringView* sep) {
	return self->split(*sep);
}

libqt_list QStringView_Split2(const QStringView* self, QChar* sep) {
	return self->split(*sep);
}

libqt_list QStringView_Split3(const QStringView* self, const QRegularExpression* sep) {
	return self->split(*sep);
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

std::reverse_iterator<const QChar *> QStringView_Rbegin(const QStringView* self) {
	return self->rbegin();
}

std::reverse_iterator<const QChar *> QStringView_Rend(const QStringView* self) {
	return self->rend();
}

std::reverse_iterator<const QChar *> QStringView_Crbegin(const QStringView* self) {
	return self->crbegin();
}

std::reverse_iterator<const QChar *> QStringView_Crend(const QStringView* self) {
	return self->crend();
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

std::u16string_view QStringView_OperatorbasicStringView(const QStringView* self) {
	return self->operator basic_string_view();
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

QStringView* QStringView_Mid2(const QStringView* self, ptrdiff_t pos, ptrdiff_t n) {
	return new QStringView(self->mid(pos, n));
}

int QStringView_Compare22(const QStringView* self, QStringView* other, int cs) {
	return self->compare(*other, static_cast<Qt::CaseSensitivity>(cs));
}

int QStringView_Compare23(const QStringView* self, QLatin1StringView other, int cs) {
	return self->compare(other, static_cast<Qt::CaseSensitivity>(cs));
}

int QStringView_Compare24(const QStringView* self, QUtf8StringView other, int cs) {
	return self->compare(other, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_StartsWith22(const QStringView* self, QStringView* s, int cs) {
	return self->startsWith(*s, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_StartsWith23(const QStringView* self, QLatin1StringView s, int cs) {
	return self->startsWith(s, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_EndsWith22(const QStringView* self, QStringView* s, int cs) {
	return self->endsWith(*s, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_EndsWith23(const QStringView* self, QLatin1StringView s, int cs) {
	return self->endsWith(s, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_IndexOf22(const QStringView* self, QChar* c, ptrdiff_t from) {
	return self->indexOf(*c, from);
}

ptrdiff_t QStringView_IndexOf32(const QStringView* self, QChar* c, ptrdiff_t from, int cs) {
	return self->indexOf(*c, from, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_IndexOf23(const QStringView* self, QStringView* s, ptrdiff_t from) {
	return self->indexOf(*s, from);
}

ptrdiff_t QStringView_IndexOf33(const QStringView* self, QStringView* s, ptrdiff_t from, int cs) {
	return self->indexOf(*s, from, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_IndexOf24(const QStringView* self, QLatin1StringView s, ptrdiff_t from) {
	return self->indexOf(s, from);
}

ptrdiff_t QStringView_IndexOf34(const QStringView* self, QLatin1StringView s, ptrdiff_t from, int cs) {
	return self->indexOf(s, from, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_Contains22(const QStringView* self, QChar* c, int cs) {
	return self->contains(*c, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_Contains23(const QStringView* self, QStringView* s, int cs) {
	return self->contains(*s, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_Contains24(const QStringView* self, QLatin1StringView s, int cs) {
	return self->contains(s, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_Count22(const QStringView* self, QChar* c, int cs) {
	return self->count(*c, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_Count23(const QStringView* self, QStringView* s, int cs) {
	return self->count(*s, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_Count24(const QStringView* self, QLatin1StringView s, int cs) {
	return self->count(s, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_LastIndexOf22(const QStringView* self, QChar* c, int cs) {
	return self->lastIndexOf(*c, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_LastIndexOf32(const QStringView* self, QChar* c, ptrdiff_t from, int cs) {
	return self->lastIndexOf(*c, from, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_LastIndexOf23(const QStringView* self, QStringView* s, int cs) {
	return self->lastIndexOf(*s, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_LastIndexOf33(const QStringView* self, QStringView* s, ptrdiff_t from, int cs) {
	return self->lastIndexOf(*s, from, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_LastIndexOf24(const QStringView* self, QLatin1StringView s, int cs) {
	return self->lastIndexOf(s, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_LastIndexOf34(const QStringView* self, QLatin1StringView s, ptrdiff_t from, int cs) {
	return self->lastIndexOf(s, from, static_cast<Qt::CaseSensitivity>(cs));
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

libqt_list QStringView_Split22(const QStringView* self, QStringView* sep, int behavior) {
	return self->split(*sep, static_cast<QFlags<Qt::SplitBehaviorFlags>>(behavior));
}

libqt_list QStringView_Split32(const QStringView* self, QStringView* sep, int behavior, int cs) {
	return self->split(*sep, static_cast<QFlags<Qt::SplitBehaviorFlags>>(behavior), static_cast<Qt::CaseSensitivity>(cs));
}

libqt_list QStringView_Split23(const QStringView* self, QChar* sep, int behavior) {
	return self->split(*sep, static_cast<QFlags<Qt::SplitBehaviorFlags>>(behavior));
}

libqt_list QStringView_Split33(const QStringView* self, QChar* sep, int behavior, int cs) {
	return self->split(*sep, static_cast<QFlags<Qt::SplitBehaviorFlags>>(behavior), static_cast<Qt::CaseSensitivity>(cs));
}

libqt_list QStringView_Split24(const QStringView* self, const QRegularExpression* sep, int behavior) {
	return self->split(*sep, static_cast<QFlags<Qt::SplitBehaviorFlags>>(behavior));
}

void QStringView_Delete(QStringView* self) {
    delete self;
}

