#include <QByteArray>
#include <QByteArrayView>
#include <qbytearrayview.h>
#include "libqbytearrayview.h"
#include "libqbytearrayview.hxx"

QByteArrayView* QByteArrayView_new(const QByteArrayView* other) {
	 return new QByteArrayView(*other);
}

QByteArrayView* QByteArrayView_new2(QByteArrayView* other) {
	 return new QByteArrayView(*other);
}

QByteArrayView* QByteArrayView_new3() {
	 return new QByteArrayView();
}

QByteArrayView* QByteArrayView_new4(const QByteArrayView* param1) {
	 return new QByteArrayView(*param1);
}

void QByteArrayView_CopyAssign(QByteArrayView* self, QByteArrayView* other) {
    *self = *other;
}

void QByteArrayView_MoveAssign(QByteArrayView* self, QByteArrayView* other) {
    *self = std::move(*other);
}

libqt_string QByteArrayView_ToByteArray(const QByteArrayView* self) {
	QByteArray _qb = self->toByteArray();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

ptrdiff_t QByteArrayView_Size(const QByteArrayView* self) {
	return self->size();
}

It::value_type** QByteArrayView_Data(const QByteArrayView* self) {
	return self->data();
}

It::value_type** QByteArrayView_ConstData(const QByteArrayView* self) {
	return self->constData();
}

char QByteArrayView_OperatorSubscript(const QByteArrayView* self, ptrdiff_t n) {
	return self->operator[](n);
}

char QByteArrayView_At(const QByteArrayView* self, ptrdiff_t n) {
	return self->at(n);
}

QByteArrayView* QByteArrayView_First(const QByteArrayView* self, ptrdiff_t n) {
	return new QByteArrayView(self->first(n));
}

QByteArrayView* QByteArrayView_Last(const QByteArrayView* self, ptrdiff_t n) {
	return new QByteArrayView(self->last(n));
}

QByteArrayView* QByteArrayView_Sliced(const QByteArrayView* self, ptrdiff_t pos) {
	return new QByteArrayView(self->sliced(pos));
}

QByteArrayView* QByteArrayView_Sliced2(const QByteArrayView* self, ptrdiff_t pos, ptrdiff_t n) {
	return new QByteArrayView(self->sliced(pos, n));
}

QByteArrayView* QByteArrayView_Slice(QByteArrayView* self, ptrdiff_t pos) {
	return new QByteArrayView(self->slice(pos));
}

QByteArrayView* QByteArrayView_Slice2(QByteArrayView* self, ptrdiff_t pos, ptrdiff_t n) {
	return new QByteArrayView(self->slice(pos, n));
}

QByteArrayView* QByteArrayView_Chopped(const QByteArrayView* self, ptrdiff_t lenVal) {
	return new QByteArrayView(self->chopped(lenVal));
}

QByteArrayView* QByteArrayView_Left(const QByteArrayView* self, ptrdiff_t n) {
	return new QByteArrayView(self->left(n));
}

QByteArrayView* QByteArrayView_Right(const QByteArrayView* self, ptrdiff_t n) {
	return new QByteArrayView(self->right(n));
}

QByteArrayView* QByteArrayView_Mid(const QByteArrayView* self, ptrdiff_t pos) {
	return new QByteArrayView(self->mid(pos));
}

void QByteArrayView_Truncate(QByteArrayView* self, ptrdiff_t n) {
	self->truncate(n);
}

void QByteArrayView_Chop(QByteArrayView* self, ptrdiff_t n) {
	self->chop(n);
}

QByteArrayView* QByteArrayView_Trimmed(const QByteArrayView* self) {
	return new QByteArrayView(self->trimmed());
}

int16_t QByteArrayView_ToShort(const QByteArrayView* self) {
	return self->toShort();
}

uint16_t QByteArrayView_ToUShort(const QByteArrayView* self) {
	return self->toUShort();
}

int QByteArrayView_ToInt(const QByteArrayView* self) {
	return self->toInt();
}

unsigned int QByteArrayView_ToUInt(const QByteArrayView* self) {
	return self->toUInt();
}

long QByteArrayView_ToLong(const QByteArrayView* self) {
	return self->toLong();
}

unsigned long QByteArrayView_ToULong(const QByteArrayView* self) {
	return self->toULong();
}

long long QByteArrayView_ToLongLong(const QByteArrayView* self) {
	return self->toLongLong();
}

unsigned long long QByteArrayView_ToULongLong(const QByteArrayView* self) {
	return self->toULongLong();
}

float QByteArrayView_ToFloat(const QByteArrayView* self) {
	return self->toFloat();
}

double QByteArrayView_ToDouble(const QByteArrayView* self) {
	return self->toDouble();
}

bool QByteArrayView_StartsWith(const QByteArrayView* self, QByteArrayView* other) {
	return self->startsWith(*other);
}

bool QByteArrayView_StartsWith2(const QByteArrayView* self, char c) {
	return self->startsWith(c);
}

bool QByteArrayView_EndsWith(const QByteArrayView* self, QByteArrayView* other) {
	return self->endsWith(*other);
}

bool QByteArrayView_EndsWith2(const QByteArrayView* self, char c) {
	return self->endsWith(c);
}

ptrdiff_t QByteArrayView_IndexOf(const QByteArrayView* self, QByteArrayView* a) {
	return self->indexOf(*a);
}

ptrdiff_t QByteArrayView_IndexOf2(const QByteArrayView* self, char ch) {
	return self->indexOf(ch);
}

bool QByteArrayView_Contains(const QByteArrayView* self, QByteArrayView* a) {
	return self->contains(*a);
}

bool QByteArrayView_Contains2(const QByteArrayView* self, char c) {
	return self->contains(c);
}

ptrdiff_t QByteArrayView_LastIndexOf(const QByteArrayView* self, QByteArrayView* a) {
	return self->lastIndexOf(*a);
}

ptrdiff_t QByteArrayView_LastIndexOf2(const QByteArrayView* self, QByteArrayView* a, ptrdiff_t from) {
	return self->lastIndexOf(*a, from);
}

ptrdiff_t QByteArrayView_LastIndexOf3(const QByteArrayView* self, char ch) {
	return self->lastIndexOf(ch);
}

ptrdiff_t QByteArrayView_Count(const QByteArrayView* self, QByteArrayView* a) {
	return self->count(*a);
}

ptrdiff_t QByteArrayView_Count2(const QByteArrayView* self, char ch) {
	return self->count(ch);
}

int QByteArrayView_Compare(const QByteArrayView* self, QByteArrayView* a) {
	return self->compare(*a);
}

bool QByteArrayView_IsValidUtf8(const QByteArrayView* self) {
	return self->isValidUtf8();
}

It::value_type** QByteArrayView_Begin(const QByteArrayView* self) {
	return self->begin();
}

It::value_type** QByteArrayView_End(const QByteArrayView* self) {
	return self->end();
}

It::value_type** QByteArrayView_Cbegin(const QByteArrayView* self) {
	return self->cbegin();
}

It::value_type** QByteArrayView_Cend(const QByteArrayView* self) {
	return self->cend();
}

bool QByteArrayView_Empty(const QByteArrayView* self) {
	return self->empty();
}

char QByteArrayView_Front(const QByteArrayView* self) {
	return self->front();
}

char QByteArrayView_Back(const QByteArrayView* self) {
	return self->back();
}

ptrdiff_t QByteArrayView_MaxSize(const QByteArrayView* self) {
	return self->max_size();
}

bool QByteArrayView_IsNull(const QByteArrayView* self) {
	return self->isNull();
}

bool QByteArrayView_IsEmpty(const QByteArrayView* self) {
	return self->isEmpty();
}

ptrdiff_t QByteArrayView_Length(const QByteArrayView* self) {
	return self->length();
}

char QByteArrayView_First2(const QByteArrayView* self) {
	return self->first();
}

char QByteArrayView_Last2(const QByteArrayView* self) {
	return self->last();
}

ptrdiff_t QByteArrayView_MaxSize2() {
	return QByteArrayView::maxSize();
}

QByteArrayView* QByteArrayView_Mid2(const QByteArrayView* self, ptrdiff_t pos, ptrdiff_t n) {
	return new QByteArrayView(self->mid(pos, n));
}

int16_t QByteArrayView_ToShort1(const QByteArrayView* self, bool* ok) {
	return self->toShort(ok);
}

int16_t QByteArrayView_ToShort2(const QByteArrayView* self, bool* ok, int base) {
	return self->toShort(ok, base);
}

uint16_t QByteArrayView_ToUShort1(const QByteArrayView* self, bool* ok) {
	return self->toUShort(ok);
}

uint16_t QByteArrayView_ToUShort2(const QByteArrayView* self, bool* ok, int base) {
	return self->toUShort(ok, base);
}

int QByteArrayView_ToInt1(const QByteArrayView* self, bool* ok) {
	return self->toInt(ok);
}

int QByteArrayView_ToInt2(const QByteArrayView* self, bool* ok, int base) {
	return self->toInt(ok, base);
}

unsigned int QByteArrayView_ToUInt1(const QByteArrayView* self, bool* ok) {
	return self->toUInt(ok);
}

unsigned int QByteArrayView_ToUInt2(const QByteArrayView* self, bool* ok, int base) {
	return self->toUInt(ok, base);
}

long QByteArrayView_ToLong1(const QByteArrayView* self, bool* ok) {
	return self->toLong(ok);
}

long QByteArrayView_ToLong2(const QByteArrayView* self, bool* ok, int base) {
	return self->toLong(ok, base);
}

unsigned long QByteArrayView_ToULong1(const QByteArrayView* self, bool* ok) {
	return self->toULong(ok);
}

unsigned long QByteArrayView_ToULong2(const QByteArrayView* self, bool* ok, int base) {
	return self->toULong(ok, base);
}

long long QByteArrayView_ToLongLong1(const QByteArrayView* self, bool* ok) {
	return self->toLongLong(ok);
}

long long QByteArrayView_ToLongLong2(const QByteArrayView* self, bool* ok, int base) {
	return self->toLongLong(ok, base);
}

unsigned long long QByteArrayView_ToULongLong1(const QByteArrayView* self, bool* ok) {
	return self->toULongLong(ok);
}

unsigned long long QByteArrayView_ToULongLong2(const QByteArrayView* self, bool* ok, int base) {
	return self->toULongLong(ok, base);
}

float QByteArrayView_ToFloat1(const QByteArrayView* self, bool* ok) {
	return self->toFloat(ok);
}

double QByteArrayView_ToDouble1(const QByteArrayView* self, bool* ok) {
	return self->toDouble(ok);
}

ptrdiff_t QByteArrayView_IndexOf22(const QByteArrayView* self, QByteArrayView* a, ptrdiff_t from) {
	return self->indexOf(*a, from);
}

ptrdiff_t QByteArrayView_IndexOf23(const QByteArrayView* self, char ch, ptrdiff_t from) {
	return self->indexOf(ch, from);
}

ptrdiff_t QByteArrayView_LastIndexOf22(const QByteArrayView* self, char ch, ptrdiff_t from) {
	return self->lastIndexOf(ch, from);
}

int QByteArrayView_Compare2(const QByteArrayView* self, QByteArrayView* a, int cs) {
	return self->compare(*a, static_cast<Qt::CaseSensitivity>(cs));
}

void QByteArrayView_Delete(QByteArrayView* self) {
    delete self;
}

