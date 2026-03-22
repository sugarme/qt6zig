#include <QAnyStringView>
#include <QByteArray>
#include <QByteArrayView>
#include <QChar>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStringView>
#include <qstring.h>
#include "libqstring.h"
#include "libqstring.hxx"

QString* QString_new() {
	 return new QString();
}

QString* QString_new2(const QChar* unicode) {
	 return new QString(unicode);
}

QString* QString_new3(QChar* c) {
	 return new QString(*c);
}

QString* QString_new4(ptrdiff_t size, QChar* c) {
	 return new QString(size, *c);
}

QString* QString_new5(QLatin1StringView latin1) {
	 return new QString(latin1);
}

QString* QString_new6(QStringView* sv) {
	 return new QString(*sv);
}

QString* QString_new7(const libqt_string param1) {
	 return new QString(QString::fromUtf8(param1.data, param1.len));
}

QString* QString_new8(const char* ch) {
	 return new QString(ch);
}

QString* QString_new9(const libqt_string a) {
	 return new QString(QByteArray(a.data, a.len));
}

QString* QString_new10(ptrdiff_t size, int param2) {
	 return new QString(size, static_cast<Qt::Initialization>(param2));
}

QString* QString_new11(const QChar* unicode, ptrdiff_t size) {
	 return new QString(unicode, size);
}

void QString_OperatorAssign(QString* self, QChar* c) {
	self->operator=(*c);
}

void QString_OperatorAssign2(QString* self, const libqt_string param1) {
	self->operator=(QString::fromUtf8(param1.data, param1.len));
}

void QString_OperatorAssign3(QString* self, QLatin1StringView latin1) {
	self->operator=(latin1);
}

void QString_Swap(QString* self, libqt_string other) {
	self->swap(QString::fromUtf8(other.data, other.len));
}

ptrdiff_t QString_MaxSize() {
	return QString::maxSize();
}

ptrdiff_t QString_Size(const QString* self) {
	return self->size();
}

ptrdiff_t QString_Count(const QString* self) {
	return self->count();
}

ptrdiff_t QString_Length(const QString* self) {
	return self->length();
}

bool QString_IsEmpty(const QString* self) {
	return self->isEmpty();
}

void QString_Resize(QString* self, ptrdiff_t size) {
	self->resize(size);
}

void QString_Resize2(QString* self, ptrdiff_t size, QChar* fillChar) {
	self->resize(size, *fillChar);
}

void QString_ResizeForOverwrite(QString* self, ptrdiff_t size) {
	self->resizeForOverwrite(size);
}

libqt_string QString_Fill(QString* self, QChar* c) {
	QString _ret = self->fill(*c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QString_Truncate(QString* self, ptrdiff_t pos) {
	self->truncate(pos);
}

void QString_Chop(QString* self, ptrdiff_t n) {
	self->chop(n);
}

libqt_string QString_Slice(QString* self, ptrdiff_t pos) {
	QString _ret = self->slice(pos);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Slice2(QString* self, ptrdiff_t pos, ptrdiff_t n) {
	QString _ret = self->slice(pos, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

ptrdiff_t QString_Capacity(const QString* self) {
	return self->capacity();
}

void QString_Reserve(QString* self, ptrdiff_t size) {
	self->reserve(size);
}

void QString_Squeeze(QString* self) {
	self->squeeze();
}

const QChar* QString_Unicode(const QString* self) {
	return self->unicode();
}

QChar* QString_Data(QString* self) {
	return self->data();
}

const QChar* QString_Data2(const QString* self) {
	return self->data();
}

const QChar* QString_ConstData(const QString* self) {
	return self->constData();
}

void QString_Detach(QString* self) {
	self->detach();
}

bool QString_IsDetached(const QString* self) {
	return self->isDetached();
}

bool QString_IsSharedWith(const QString* self, const libqt_string other) {
	return self->isSharedWith(QString::fromUtf8(other.data, other.len));
}

void QString_Clear(QString* self) {
	self->clear();
}

QChar* QString_At(const QString* self, ptrdiff_t i) {
	return new QChar(self->at(i));
}

QChar* QString_OperatorSubscript(const QString* self, ptrdiff_t i) {
	return new QChar(self->operator[](i));
}

QChar* QString_OperatorSubscript2(QString* self, ptrdiff_t i) {
	return new QChar(self->operator[](i));
}

QChar* QString_Front(const QString* self) {
	return new QChar(self->front());
}

QChar* QString_Front2(QString* self) {
	return new QChar(self->front());
}

QChar* QString_Back(const QString* self) {
	return new QChar(self->back());
}

QChar* QString_Back2(QString* self) {
	return new QChar(self->back());
}

libqt_string QString_Arg(const QString* self, long long a) {
	QString _ret = self->arg(a);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg2(const QString* self, unsigned long long a) {
	QString _ret = self->arg(a);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg3(const QString* self, long a) {
	QString _ret = self->arg(a);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg4(const QString* self, unsigned long a) {
	QString _ret = self->arg(a);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg5(const QString* self, int a) {
	QString _ret = self->arg(a);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg6(const QString* self, unsigned int a) {
	QString _ret = self->arg(a);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg7(const QString* self, int16_t a) {
	QString _ret = self->arg(a);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg8(const QString* self, uint16_t a) {
	QString _ret = self->arg(a);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg9(const QString* self, double a) {
	QString _ret = self->arg(a);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg10(const QString* self, char a) {
	QString _ret = self->arg(a);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg11(const QString* self, QChar* a) {
	QString _ret = self->arg(*a);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg12(const QString* self, const libqt_string a) {
	QString _ret = self->arg(QString::fromUtf8(a.data, a.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg13(const QString* self, QStringView* a) {
	QString _ret = self->arg(*a);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg14(const QString* self, QLatin1StringView a) {
	QString _ret = self->arg(a);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Asprintf(const char* format, ... ) {
	QString _ret = QString::asprintf(format, );
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

ptrdiff_t QString_IndexOf(const QString* self, QChar* c) {
	return self->indexOf(*c);
}

ptrdiff_t QString_IndexOf2(const QString* self, QLatin1StringView s) {
	return self->indexOf(s);
}

ptrdiff_t QString_IndexOf3(const QString* self, const libqt_string s) {
	return self->indexOf(QString::fromUtf8(s.data, s.len));
}

ptrdiff_t QString_IndexOf4(const QString* self, QStringView* s) {
	return self->indexOf(*s);
}

ptrdiff_t QString_LastIndexOf(const QString* self, QChar* c) {
	return self->lastIndexOf(*c);
}

ptrdiff_t QString_LastIndexOf2(const QString* self, QChar* c, ptrdiff_t from) {
	return self->lastIndexOf(*c, from);
}

ptrdiff_t QString_LastIndexOf3(const QString* self, QLatin1StringView s) {
	return self->lastIndexOf(s);
}

ptrdiff_t QString_LastIndexOf4(const QString* self, QLatin1StringView s, ptrdiff_t from) {
	return self->lastIndexOf(s, from);
}

ptrdiff_t QString_LastIndexOf5(const QString* self, const libqt_string s) {
	return self->lastIndexOf(QString::fromUtf8(s.data, s.len));
}

ptrdiff_t QString_LastIndexOf6(const QString* self, const libqt_string s, ptrdiff_t from) {
	return self->lastIndexOf(QString::fromUtf8(s.data, s.len), from);
}

ptrdiff_t QString_LastIndexOf7(const QString* self, QStringView* s) {
	return self->lastIndexOf(*s);
}

ptrdiff_t QString_LastIndexOf8(const QString* self, QStringView* s, ptrdiff_t from) {
	return self->lastIndexOf(*s, from);
}

bool QString_Contains(const QString* self, QChar* c) {
	return self->contains(*c);
}

bool QString_Contains2(const QString* self, const libqt_string s) {
	return self->contains(QString::fromUtf8(s.data, s.len));
}

bool QString_Contains3(const QString* self, QLatin1StringView s) {
	return self->contains(s);
}

bool QString_Contains4(const QString* self, QStringView* s) {
	return self->contains(*s);
}

ptrdiff_t QString_Count2(const QString* self, QChar* c) {
	return self->count(*c);
}

ptrdiff_t QString_Count3(const QString* self, const libqt_string s) {
	return self->count(QString::fromUtf8(s.data, s.len));
}

ptrdiff_t QString_Count4(const QString* self, QStringView* s) {
	return self->count(*s);
}

ptrdiff_t QString_IndexOf5(const QString* self, const QRegularExpression* re) {
	return self->indexOf(*re);
}

ptrdiff_t QString_LastIndexOf9(const QString* self, const QRegularExpression* re, ptrdiff_t from) {
	return self->lastIndexOf(*re, from);
}

bool QString_Contains5(const QString* self, const QRegularExpression* re) {
	return self->contains(*re);
}

ptrdiff_t QString_Count5(const QString* self, const QRegularExpression* re) {
	return self->count(*re);
}

libqt_string QString_Section(const QString* self, QChar* sep, ptrdiff_t start) {
	QString _ret = self->section(*sep, start);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Section2(const QString* self, const libqt_string in_sep, ptrdiff_t start) {
	QString _ret = self->section(QString::fromUtf8(in_sep.data, in_sep.len), start);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Section3(const QString* self, const QRegularExpression* re, ptrdiff_t start) {
	QString _ret = self->section(*re, start);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Left(const QString* self, ptrdiff_t n) {
	QString _ret = self->left(n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Right(const QString* self, ptrdiff_t n) {
	QString _ret = self->right(n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Mid(const QString* self, ptrdiff_t position) {
	QString _ret = self->mid(position);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_First(const QString* self, ptrdiff_t n) {
	QString _ret = self->first(n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Last(const QString* self, ptrdiff_t n) {
	QString _ret = self->last(n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Sliced(const QString* self, ptrdiff_t pos) {
	QString _ret = self->sliced(pos);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Sliced2(const QString* self, ptrdiff_t pos, ptrdiff_t n) {
	QString _ret = self->sliced(pos, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Chopped(const QString* self, ptrdiff_t n) {
	QString _ret = self->chopped(n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QString_StartsWith(const QString* self, const libqt_string s) {
	return self->startsWith(QString::fromUtf8(s.data, s.len));
}

bool QString_StartsWith2(const QString* self, QStringView* s) {
	return self->startsWith(*s);
}

bool QString_StartsWith3(const QString* self, QLatin1StringView s) {
	return self->startsWith(s);
}

bool QString_StartsWith4(const QString* self, QChar* c) {
	return self->startsWith(*c);
}

bool QString_EndsWith(const QString* self, const libqt_string s) {
	return self->endsWith(QString::fromUtf8(s.data, s.len));
}

bool QString_EndsWith2(const QString* self, QStringView* s) {
	return self->endsWith(*s);
}

bool QString_EndsWith3(const QString* self, QLatin1StringView s) {
	return self->endsWith(s);
}

bool QString_EndsWith4(const QString* self, QChar* c) {
	return self->endsWith(*c);
}

bool QString_IsUpper(const QString* self) {
	return self->isUpper();
}

bool QString_IsLower(const QString* self) {
	return self->isLower();
}

libqt_string QString_LeftJustified(const QString* self, ptrdiff_t width) {
	QString _ret = self->leftJustified(width);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_RightJustified(const QString* self, ptrdiff_t width) {
	QString _ret = self->rightJustified(width);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_ToLower(const QString* self) {
	QString _ret = self->toLower();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_ToUpper(const QString* self) {
	QString _ret = self->toUpper();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_ToCaseFolded(const QString* self) {
	QString _ret = self->toCaseFolded();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Trimmed(const QString* self) {
	QString _ret = self->trimmed();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Simplified(const QString* self) {
	QString _ret = self->simplified();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_ToHtmlEscaped(const QString* self) {
	QString _ret = self->toHtmlEscaped();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Insert(QString* self, ptrdiff_t i, QChar* c) {
	QString _ret = self->insert(i, *c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Insert2(QString* self, ptrdiff_t i, const QChar* uc, ptrdiff_t lenVal) {
	QString _ret = self->insert(i, uc, lenVal);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Insert3(QString* self, ptrdiff_t i, const libqt_string s) {
	QString _ret = self->insert(i, QString::fromUtf8(s.data, s.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Insert4(QString* self, ptrdiff_t i, QStringView* v) {
	QString _ret = self->insert(i, *v);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Insert5(QString* self, ptrdiff_t i, QLatin1StringView s) {
	QString _ret = self->insert(i, s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Insert6(QString* self, ptrdiff_t i, QUtf8StringView s) {
	QString _ret = self->insert(i, s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Append(QString* self, QChar* c) {
	QString _ret = self->append(*c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Append2(QString* self, const QChar* uc, ptrdiff_t lenVal) {
	QString _ret = self->append(uc, lenVal);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Append3(QString* self, const libqt_string s) {
	QString _ret = self->append(QString::fromUtf8(s.data, s.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Append4(QString* self, QStringView* v) {
	QString _ret = self->append(*v);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Append5(QString* self, QLatin1StringView s) {
	QString _ret = self->append(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Append6(QString* self, QUtf8StringView s) {
	QString _ret = self->append(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Prepend(QString* self, QChar* c) {
	QString _ret = self->prepend(*c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Prepend2(QString* self, const QChar* uc, ptrdiff_t lenVal) {
	QString _ret = self->prepend(uc, lenVal);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Prepend3(QString* self, const libqt_string s) {
	QString _ret = self->prepend(QString::fromUtf8(s.data, s.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Prepend4(QString* self, QStringView* v) {
	QString _ret = self->prepend(*v);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Prepend5(QString* self, QLatin1StringView s) {
	QString _ret = self->prepend(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Prepend6(QString* self, QUtf8StringView s) {
	QString _ret = self->prepend(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Assign(QString* self, libqt_string s) {
	QString _ret = self->assign(QAnyStringView(QString::fromUtf8(s.data, s.len)));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Assign2(QString* self, ptrdiff_t n, QChar* c) {
	QString _ret = self->assign(n, *c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_OperatorPlusAssign(QString* self, QChar* c) {
	QString _ret = self->operator+=(*c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_OperatorPlusAssign2(QString* self, const libqt_string s) {
	QString _ret = self->operator+=(QString::fromUtf8(s.data, s.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_OperatorPlusAssign3(QString* self, QStringView* v) {
	QString _ret = self->operator+=(*v);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_OperatorPlusAssign4(QString* self, QLatin1StringView s) {
	QString _ret = self->operator+=(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_OperatorPlusAssign5(QString* self, QUtf8StringView s) {
	QString _ret = self->operator+=(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Remove(QString* self, ptrdiff_t i, ptrdiff_t lenVal) {
	QString _ret = self->remove(i, lenVal);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Remove2(QString* self, QChar* c) {
	QString _ret = self->remove(*c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Remove3(QString* self, QLatin1StringView s) {
	QString _ret = self->remove(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Remove4(QString* self, const libqt_string s) {
	QString _ret = self->remove(QString::fromUtf8(s.data, s.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_RemoveAt(QString* self, ptrdiff_t pos) {
	QString _ret = self->removeAt(pos);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_RemoveFirst(QString* self) {
	QString _ret = self->removeFirst();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_RemoveLast(QString* self) {
	QString _ret = self->removeLast();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Replace(QString* self, ptrdiff_t i, ptrdiff_t lenVal, QChar* after) {
	QString _ret = self->replace(i, lenVal, *after);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Replace2(QString* self, ptrdiff_t i, ptrdiff_t lenVal, const QChar* s, ptrdiff_t slen) {
	QString _ret = self->replace(i, lenVal, s, slen);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Replace3(QString* self, ptrdiff_t i, ptrdiff_t lenVal, const libqt_string after) {
	QString _ret = self->replace(i, lenVal, QString::fromUtf8(after.data, after.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Replace4(QString* self, QChar* before, QChar* after) {
	QString _ret = self->replace(*before, *after);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Replace5(QString* self, const QChar* before, ptrdiff_t blen, const QChar* after, ptrdiff_t alen) {
	QString _ret = self->replace(before, blen, after, alen);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Replace6(QString* self, QLatin1StringView before, QLatin1StringView after) {
	QString _ret = self->replace(before, after);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Replace7(QString* self, QLatin1StringView before, const libqt_string after) {
	QString _ret = self->replace(before, QString::fromUtf8(after.data, after.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Replace8(QString* self, const libqt_string before, QLatin1StringView after) {
	QString _ret = self->replace(QString::fromUtf8(before.data, before.len), after);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Replace9(QString* self, const libqt_string before, const libqt_string after) {
	QString _ret = self->replace(QString::fromUtf8(before.data, before.len), QString::fromUtf8(after.data, after.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Replace10(QString* self, QChar* c, const libqt_string after) {
	QString _ret = self->replace(*c, QString::fromUtf8(after.data, after.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Replace11(QString* self, QChar* c, QLatin1StringView after) {
	QString _ret = self->replace(*c, after);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Replace12(QString* self, const QRegularExpression* re, const libqt_string after) {
	QString _ret = self->replace(*re, QString::fromUtf8(after.data, after.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Remove5(QString* self, const QRegularExpression* re) {
	QString _ret = self->remove(*re);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QString_Split(const QString* self, const libqt_string sep) {
	return self->split(QString::fromUtf8(sep.data, sep.len));
}

libqt_list QString_Split2(const QString* self, QChar* sep) {
	return self->split(*sep);
}

libqt_list QString_Split3(const QString* self, const QRegularExpression* sep) {
	return self->split(*sep);
}

libqt_string QString_Normalized(const QString* self, int mode) {
	QString _ret = self->normalized(static_cast<QString::NormalizationForm>(mode));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Repeated(const QString* self, ptrdiff_t times) {
	QString _ret = self->repeated(times);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

const uint16_t* QString_Utf16(const QString* self) {
	return self->utf16();
}

libqt_string QString_ToLatin1(const QString* self) {
	QByteArray _qb = self->toLatin1();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_ToUtf8(const QString* self) {
	QByteArray _qb = self->toUtf8();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_ToLocal8Bit(const QString* self) {
	QByteArray _qb = self->toLocal8Bit();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QString_ToUcs4(const QString* self) {
	return self->toUcs4();
}

libqt_string QString_FromLatin1(QByteArrayView* ba) {
	QString _ret = QString::fromLatin1(*ba);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_FromLatin12(const char* str, ptrdiff_t size) {
	QString _ret = QString::fromLatin1(str, size);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_FromUtf8(QByteArrayView* utf8) {
	QString _ret = QString::fromUtf8(*utf8);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_FromUtf82(const char* utf8, ptrdiff_t size) {
	QString _ret = QString::fromUtf8(utf8, size);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_FromLocal8Bit(QByteArrayView* ba) {
	QString _ret = QString::fromLocal8Bit(*ba);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_FromLocal8Bit2(const char* str, ptrdiff_t size) {
	QString _ret = QString::fromLocal8Bit(str, size);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_FromRawData(const QChar* param1, ptrdiff_t size) {
	QString _ret = QString::fromRawData(param1, size);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_FromUtf162(const uint16_t* str) {
	QString _ret = QString::fromUtf16(str);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_FromUcs42(const unsigned int* str) {
	QString _ret = QString::fromUcs4(str);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetRawData(QString* self, const QChar* unicode, ptrdiff_t size) {
	QString _ret = self->setRawData(unicode, size);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetUnicode(QString* self, const QChar* unicode, ptrdiff_t size) {
	QString _ret = self->setUnicode(unicode, size);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetUtf16(QString* self, const uint16_t* utf16, ptrdiff_t size) {
	QString _ret = self->setUtf16(utf16, size);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QString_Compare(const QString* self, const libqt_string s) {
	return self->compare(QString::fromUtf8(s.data, s.len));
}

int QString_Compare2(const QString* self, QLatin1StringView other) {
	return self->compare(other);
}

int QString_Compare3(const QString* self, QStringView* s) {
	return self->compare(*s);
}

int QString_Compare4(const QString* self, QChar* ch) {
	return self->compare(*ch);
}

int QString_Compare5(const libqt_string s1, const libqt_string s2) {
	return QString::compare(QString::fromUtf8(s1.data, s1.len), QString::fromUtf8(s2.data, s2.len));
}

int QString_Compare6(const libqt_string s1, QLatin1StringView s2) {
	return QString::compare(QString::fromUtf8(s1.data, s1.len), s2);
}

int QString_Compare7(QLatin1StringView s1, const libqt_string s2) {
	return QString::compare(s1, QString::fromUtf8(s2.data, s2.len));
}

int QString_Compare8(const libqt_string s1, QStringView* s2) {
	return QString::compare(QString::fromUtf8(s1.data, s1.len), *s2);
}

int QString_Compare9(QStringView* s1, const libqt_string s2) {
	return QString::compare(*s1, QString::fromUtf8(s2.data, s2.len));
}

int QString_LocaleAwareCompare(const QString* self, const libqt_string s) {
	return self->localeAwareCompare(QString::fromUtf8(s.data, s.len));
}

int QString_LocaleAwareCompare2(const QString* self, QStringView* s) {
	return self->localeAwareCompare(*s);
}

int QString_LocaleAwareCompare3(const libqt_string s1, const libqt_string s2) {
	return QString::localeAwareCompare(QString::fromUtf8(s1.data, s1.len), QString::fromUtf8(s2.data, s2.len));
}

int QString_LocaleAwareCompare4(QStringView* s1, QStringView* s2) {
	return QString::localeAwareCompare(*s1, *s2);
}

int16_t QString_ToShort(const QString* self) {
	return self->toShort();
}

uint16_t QString_ToUShort(const QString* self) {
	return self->toUShort();
}

int QString_ToInt(const QString* self) {
	return self->toInt();
}

unsigned int QString_ToUInt(const QString* self) {
	return self->toUInt();
}

long QString_ToLong(const QString* self) {
	return self->toLong();
}

unsigned long QString_ToULong(const QString* self) {
	return self->toULong();
}

long long QString_ToLongLong(const QString* self) {
	return self->toLongLong();
}

unsigned long long QString_ToULongLong(const QString* self) {
	return self->toULongLong();
}

float QString_ToFloat(const QString* self) {
	return self->toFloat();
}

double QString_ToDouble(const QString* self) {
	return self->toDouble();
}

libqt_string QString_SetNum(QString* self, int16_t param1) {
	QString _ret = self->setNum(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetNum2(QString* self, uint16_t param1) {
	QString _ret = self->setNum(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetNum3(QString* self, int param1) {
	QString _ret = self->setNum(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetNum4(QString* self, unsigned int param1) {
	QString _ret = self->setNum(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetNum5(QString* self, long param1) {
	QString _ret = self->setNum(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetNum6(QString* self, unsigned long param1) {
	QString _ret = self->setNum(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetNum7(QString* self, long long param1) {
	QString _ret = self->setNum(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetNum8(QString* self, unsigned long long param1) {
	QString _ret = self->setNum(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetNum9(QString* self, float param1) {
	QString _ret = self->setNum(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetNum10(QString* self, double param1) {
	QString _ret = self->setNum(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Number(int param1) {
	QString _ret = QString::number(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Number2(unsigned int param1) {
	QString _ret = QString::number(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Number3(long param1) {
	QString _ret = QString::number(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Number4(unsigned long param1) {
	QString _ret = QString::number(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Number5(long long param1) {
	QString _ret = QString::number(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Number6(unsigned long long param1) {
	QString _ret = QString::number(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Number7(double param1) {
	QString _ret = QString::number(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QString_OperatorAssign4(QString* self, const char* ch) {
	self->operator=(ch);
}

void QString_OperatorAssign5(QString* self, const libqt_string a) {
	self->operator=(QByteArray(a.data, a.len));
}

libqt_string QString_Prepend7(QString* self, const char* s) {
	QString _ret = self->prepend(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Prepend8(QString* self, const libqt_string s) {
	QString _ret = self->prepend(QByteArray(s.data, s.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Append7(QString* self, const char* s) {
	QString _ret = self->append(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Append8(QString* self, const libqt_string s) {
	QString _ret = self->append(QByteArray(s.data, s.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Insert7(QString* self, ptrdiff_t i, const char* s) {
	QString _ret = self->insert(i, s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Insert8(QString* self, ptrdiff_t i, const libqt_string s) {
	QString _ret = self->insert(i, QByteArray(s.data, s.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_OperatorPlusAssign6(QString* self, const char* s) {
	QString _ret = self->operator+=(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_OperatorPlusAssign7(QString* self, const libqt_string s) {
	QString _ret = self->operator+=(QByteArray(s.data, s.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QChar** QString_Begin(QString* self) {
	return self->begin();
}

const QChar** QString_Begin2(const QString* self) {
	return self->begin();
}

const QChar** QString_Cbegin(const QString* self) {
	return self->cbegin();
}

const QChar** QString_ConstBegin(const QString* self) {
	return self->constBegin();
}

QChar** QString_End(QString* self) {
	return self->end();
}

const QChar** QString_End2(const QString* self) {
	return self->end();
}

const QChar** QString_Cend(const QString* self) {
	return self->cend();
}

const QChar** QString_ConstEnd(const QString* self) {
	return self->constEnd();
}

std::reverse_iterator<QChar *> QString_Rbegin(QString* self) {
	return self->rbegin();
}

std::reverse_iterator<QChar *> QString_Rend(QString* self) {
	return self->rend();
}

std::reverse_iterator<const QChar *> QString_Rbegin2(const QString* self) {
	return self->rbegin();
}

std::reverse_iterator<const QChar *> QString_Rend2(const QString* self) {
	return self->rend();
}

std::reverse_iterator<const QChar *> QString_Crbegin(const QString* self) {
	return self->crbegin();
}

std::reverse_iterator<const QChar *> QString_Crend(const QString* self) {
	return self->crend();
}

void QString_PushBack(QString* self, QChar* c) {
	self->push_back(*c);
}

void QString_PushBack2(QString* self, const libqt_string s) {
	self->push_back(QString::fromUtf8(s.data, s.len));
}

void QString_PushFront(QString* self, QChar* c) {
	self->push_front(*c);
}

void QString_PushFront2(QString* self, const libqt_string s) {
	self->push_front(QString::fromUtf8(s.data, s.len));
}

void QString_ShrinkToFit(QString* self) {
	self->shrink_to_fit();
}

QChar** QString_Erase(QString* self, const QChar** first, const QChar** last) {
	return self->erase(first, last);
}

QChar** QString_Erase2(QString* self, const QChar** it) {
	return self->erase(it);
}

ptrdiff_t QString_MaxSize2(const QString* self) {
	return self->max_size();
}

libqt_string QString_FromStdWString(const std::wstring* s) {
	QString _ret = QString::fromStdWString(*s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

std::wstring QString_ToStdWString(const QString* self) {
	return self->toStdWString();
}

libqt_string QString_FromStdU16String(const std::u16string* s) {
	QString _ret = QString::fromStdU16String(*s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

std::u16string QString_ToStdU16String(const QString* self) {
	return self->toStdU16String();
}

libqt_string QString_FromStdU32String(const std::u32string* s) {
	QString _ret = QString::fromStdU32String(*s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

std::u32string QString_ToStdU32String(const QString* self) {
	return self->toStdU32String();
}

std::u16string_view QString_OperatorbasicStringView(const QString* self) {
	return self->operator basic_string_view();
}

bool QString_IsNull(const QString* self) {
	return self->isNull();
}

bool QString_IsRightToLeft(const QString* self) {
	return self->isRightToLeft();
}

bool QString_IsValidUtf16(const QString* self) {
	return self->isValidUtf16();
}

libqt_string QString_Fill2(QString* self, QChar* c, ptrdiff_t size) {
	QString _ret = self->fill(*c, size);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg22(const QString* self, long long a, int fieldwidth) {
	QString _ret = self->arg(a, fieldwidth);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg32(const QString* self, long long a, int fieldwidth, int base) {
	QString _ret = self->arg(a, fieldwidth, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg42(const QString* self, long long a, int fieldwidth, int base, QChar* fillChar) {
	QString _ret = self->arg(a, fieldwidth, base, *fillChar);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg23(const QString* self, unsigned long long a, int fieldwidth) {
	QString _ret = self->arg(a, fieldwidth);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg33(const QString* self, unsigned long long a, int fieldwidth, int base) {
	QString _ret = self->arg(a, fieldwidth, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg43(const QString* self, unsigned long long a, int fieldwidth, int base, QChar* fillChar) {
	QString _ret = self->arg(a, fieldwidth, base, *fillChar);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg24(const QString* self, long a, int fieldwidth) {
	QString _ret = self->arg(a, fieldwidth);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg34(const QString* self, long a, int fieldwidth, int base) {
	QString _ret = self->arg(a, fieldwidth, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg44(const QString* self, long a, int fieldwidth, int base, QChar* fillChar) {
	QString _ret = self->arg(a, fieldwidth, base, *fillChar);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg25(const QString* self, unsigned long a, int fieldwidth) {
	QString _ret = self->arg(a, fieldwidth);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg35(const QString* self, unsigned long a, int fieldwidth, int base) {
	QString _ret = self->arg(a, fieldwidth, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg45(const QString* self, unsigned long a, int fieldwidth, int base, QChar* fillChar) {
	QString _ret = self->arg(a, fieldwidth, base, *fillChar);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg26(const QString* self, int a, int fieldWidth) {
	QString _ret = self->arg(a, fieldWidth);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg36(const QString* self, int a, int fieldWidth, int base) {
	QString _ret = self->arg(a, fieldWidth, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg46(const QString* self, int a, int fieldWidth, int base, QChar* fillChar) {
	QString _ret = self->arg(a, fieldWidth, base, *fillChar);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg27(const QString* self, unsigned int a, int fieldWidth) {
	QString _ret = self->arg(a, fieldWidth);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg37(const QString* self, unsigned int a, int fieldWidth, int base) {
	QString _ret = self->arg(a, fieldWidth, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg47(const QString* self, unsigned int a, int fieldWidth, int base, QChar* fillChar) {
	QString _ret = self->arg(a, fieldWidth, base, *fillChar);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg28(const QString* self, int16_t a, int fieldWidth) {
	QString _ret = self->arg(a, fieldWidth);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg38(const QString* self, int16_t a, int fieldWidth, int base) {
	QString _ret = self->arg(a, fieldWidth, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg48(const QString* self, int16_t a, int fieldWidth, int base, QChar* fillChar) {
	QString _ret = self->arg(a, fieldWidth, base, *fillChar);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg29(const QString* self, uint16_t a, int fieldWidth) {
	QString _ret = self->arg(a, fieldWidth);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg39(const QString* self, uint16_t a, int fieldWidth, int base) {
	QString _ret = self->arg(a, fieldWidth, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg49(const QString* self, uint16_t a, int fieldWidth, int base, QChar* fillChar) {
	QString _ret = self->arg(a, fieldWidth, base, *fillChar);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg210(const QString* self, double a, int fieldWidth) {
	QString _ret = self->arg(a, fieldWidth);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg310(const QString* self, double a, int fieldWidth, char format) {
	QString _ret = self->arg(a, fieldWidth, format);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg410(const QString* self, double a, int fieldWidth, char format, int precision) {
	QString _ret = self->arg(a, fieldWidth, format, precision);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg52(const QString* self, double a, int fieldWidth, char format, int precision, QChar* fillChar) {
	QString _ret = self->arg(a, fieldWidth, format, precision, *fillChar);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg211(const QString* self, char a, int fieldWidth) {
	QString _ret = self->arg(a, fieldWidth);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg311(const QString* self, char a, int fieldWidth, QChar* fillChar) {
	QString _ret = self->arg(a, fieldWidth, *fillChar);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg212(const QString* self, QChar* a, int fieldWidth) {
	QString _ret = self->arg(*a, fieldWidth);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg312(const QString* self, QChar* a, int fieldWidth, QChar* fillChar) {
	QString _ret = self->arg(*a, fieldWidth, *fillChar);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg213(const QString* self, const libqt_string a, int fieldWidth) {
	QString _ret = self->arg(QString::fromUtf8(a.data, a.len), fieldWidth);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg313(const QString* self, const libqt_string a, int fieldWidth, QChar* fillChar) {
	QString _ret = self->arg(QString::fromUtf8(a.data, a.len), fieldWidth, *fillChar);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg214(const QString* self, QStringView* a, int fieldWidth) {
	QString _ret = self->arg(*a, fieldWidth);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg314(const QString* self, QStringView* a, int fieldWidth, QChar* fillChar) {
	QString _ret = self->arg(*a, fieldWidth, *fillChar);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg215(const QString* self, QLatin1StringView a, int fieldWidth) {
	QString _ret = self->arg(a, fieldWidth);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Arg315(const QString* self, QLatin1StringView a, int fieldWidth, QChar* fillChar) {
	QString _ret = self->arg(a, fieldWidth, *fillChar);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

ptrdiff_t QString_IndexOf22(const QString* self, QChar* c, ptrdiff_t from) {
	return self->indexOf(*c, from);
}

ptrdiff_t QString_IndexOf32(const QString* self, QChar* c, ptrdiff_t from, int cs) {
	return self->indexOf(*c, from, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QString_IndexOf23(const QString* self, QLatin1StringView s, ptrdiff_t from) {
	return self->indexOf(s, from);
}

ptrdiff_t QString_IndexOf33(const QString* self, QLatin1StringView s, ptrdiff_t from, int cs) {
	return self->indexOf(s, from, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QString_IndexOf24(const QString* self, const libqt_string s, ptrdiff_t from) {
	return self->indexOf(QString::fromUtf8(s.data, s.len), from);
}

ptrdiff_t QString_IndexOf34(const QString* self, const libqt_string s, ptrdiff_t from, int cs) {
	return self->indexOf(QString::fromUtf8(s.data, s.len), from, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QString_IndexOf25(const QString* self, QStringView* s, ptrdiff_t from) {
	return self->indexOf(*s, from);
}

ptrdiff_t QString_IndexOf35(const QString* self, QStringView* s, ptrdiff_t from, int cs) {
	return self->indexOf(*s, from, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QString_LastIndexOf22(const QString* self, QChar* c, int cs) {
	return self->lastIndexOf(*c, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QString_LastIndexOf32(const QString* self, QChar* c, ptrdiff_t from, int cs) {
	return self->lastIndexOf(*c, from, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QString_LastIndexOf23(const QString* self, QLatin1StringView s, int cs) {
	return self->lastIndexOf(s, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QString_LastIndexOf33(const QString* self, QLatin1StringView s, ptrdiff_t from, int cs) {
	return self->lastIndexOf(s, from, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QString_LastIndexOf24(const QString* self, const libqt_string s, int cs) {
	return self->lastIndexOf(QString::fromUtf8(s.data, s.len), static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QString_LastIndexOf34(const QString* self, const libqt_string s, ptrdiff_t from, int cs) {
	return self->lastIndexOf(QString::fromUtf8(s.data, s.len), from, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QString_LastIndexOf25(const QString* self, QStringView* s, int cs) {
	return self->lastIndexOf(*s, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QString_LastIndexOf35(const QString* self, QStringView* s, ptrdiff_t from, int cs) {
	return self->lastIndexOf(*s, from, static_cast<Qt::CaseSensitivity>(cs));
}

bool QString_Contains22(const QString* self, QChar* c, int cs) {
	return self->contains(*c, static_cast<Qt::CaseSensitivity>(cs));
}

bool QString_Contains23(const QString* self, const libqt_string s, int cs) {
	return self->contains(QString::fromUtf8(s.data, s.len), static_cast<Qt::CaseSensitivity>(cs));
}

bool QString_Contains24(const QString* self, QLatin1StringView s, int cs) {
	return self->contains(s, static_cast<Qt::CaseSensitivity>(cs));
}

bool QString_Contains25(const QString* self, QStringView* s, int cs) {
	return self->contains(*s, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QString_Count22(const QString* self, QChar* c, int cs) {
	return self->count(*c, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QString_Count23(const QString* self, const libqt_string s, int cs) {
	return self->count(QString::fromUtf8(s.data, s.len), static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QString_Count24(const QString* self, QStringView* s, int cs) {
	return self->count(*s, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QString_IndexOf26(const QString* self, const QRegularExpression* re, ptrdiff_t from) {
	return self->indexOf(*re, from);
}

ptrdiff_t QString_IndexOf36(const QString* self, const QRegularExpression* re, ptrdiff_t from, QRegularExpressionMatch* rmatch) {
	return self->indexOf(*re, from, rmatch);
}

ptrdiff_t QString_LastIndexOf36(const QString* self, const QRegularExpression* re, ptrdiff_t from, QRegularExpressionMatch* rmatch) {
	return self->lastIndexOf(*re, from, rmatch);
}

bool QString_Contains26(const QString* self, const QRegularExpression* re, QRegularExpressionMatch* rmatch) {
	return self->contains(*re, rmatch);
}

libqt_string QString_Section32(const QString* self, QChar* sep, ptrdiff_t start, ptrdiff_t end) {
	QString _ret = self->section(*sep, start, end);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Section4(const QString* self, QChar* sep, ptrdiff_t start, ptrdiff_t end, int flags) {
	QString _ret = self->section(*sep, start, end, static_cast<QFlags<QString::SectionFlag>>(flags));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Section33(const QString* self, const libqt_string in_sep, ptrdiff_t start, ptrdiff_t end) {
	QString _ret = self->section(QString::fromUtf8(in_sep.data, in_sep.len), start, end);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Section42(const QString* self, const libqt_string in_sep, ptrdiff_t start, ptrdiff_t end, int flags) {
	QString _ret = self->section(QString::fromUtf8(in_sep.data, in_sep.len), start, end, static_cast<QFlags<QString::SectionFlag>>(flags));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Section34(const QString* self, const QRegularExpression* re, ptrdiff_t start, ptrdiff_t end) {
	QString _ret = self->section(*re, start, end);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Section43(const QString* self, const QRegularExpression* re, ptrdiff_t start, ptrdiff_t end, int flags) {
	QString _ret = self->section(*re, start, end, static_cast<QFlags<QString::SectionFlag>>(flags));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Mid2(const QString* self, ptrdiff_t position, ptrdiff_t n) {
	QString _ret = self->mid(position, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QString_StartsWith22(const QString* self, const libqt_string s, int cs) {
	return self->startsWith(QString::fromUtf8(s.data, s.len), static_cast<Qt::CaseSensitivity>(cs));
}

bool QString_StartsWith23(const QString* self, QStringView* s, int cs) {
	return self->startsWith(*s, static_cast<Qt::CaseSensitivity>(cs));
}

bool QString_StartsWith24(const QString* self, QLatin1StringView s, int cs) {
	return self->startsWith(s, static_cast<Qt::CaseSensitivity>(cs));
}

bool QString_StartsWith25(const QString* self, QChar* c, int cs) {
	return self->startsWith(*c, static_cast<Qt::CaseSensitivity>(cs));
}

bool QString_EndsWith22(const QString* self, const libqt_string s, int cs) {
	return self->endsWith(QString::fromUtf8(s.data, s.len), static_cast<Qt::CaseSensitivity>(cs));
}

bool QString_EndsWith23(const QString* self, QStringView* s, int cs) {
	return self->endsWith(*s, static_cast<Qt::CaseSensitivity>(cs));
}

bool QString_EndsWith24(const QString* self, QLatin1StringView s, int cs) {
	return self->endsWith(s, static_cast<Qt::CaseSensitivity>(cs));
}

bool QString_EndsWith25(const QString* self, QChar* c, int cs) {
	return self->endsWith(*c, static_cast<Qt::CaseSensitivity>(cs));
}

libqt_string QString_LeftJustified2(const QString* self, ptrdiff_t width, QChar* fill) {
	QString _ret = self->leftJustified(width, *fill);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_LeftJustified3(const QString* self, ptrdiff_t width, QChar* fill, bool trunc) {
	QString _ret = self->leftJustified(width, *fill, trunc);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_RightJustified2(const QString* self, ptrdiff_t width, QChar* fill) {
	QString _ret = self->rightJustified(width, *fill);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_RightJustified3(const QString* self, ptrdiff_t width, QChar* fill, bool trunc) {
	QString _ret = self->rightJustified(width, *fill, trunc);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Remove22(QString* self, QChar* c, int cs) {
	QString _ret = self->remove(*c, static_cast<Qt::CaseSensitivity>(cs));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Remove23(QString* self, QLatin1StringView s, int cs) {
	QString _ret = self->remove(s, static_cast<Qt::CaseSensitivity>(cs));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Remove24(QString* self, const libqt_string s, int cs) {
	QString _ret = self->remove(QString::fromUtf8(s.data, s.len), static_cast<Qt::CaseSensitivity>(cs));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Replace32(QString* self, QChar* before, QChar* after, int cs) {
	QString _ret = self->replace(*before, *after, static_cast<Qt::CaseSensitivity>(cs));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Replace52(QString* self, const QChar* before, ptrdiff_t blen, const QChar* after, ptrdiff_t alen, int cs) {
	QString _ret = self->replace(before, blen, after, alen, static_cast<Qt::CaseSensitivity>(cs));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Replace33(QString* self, QLatin1StringView before, QLatin1StringView after, int cs) {
	QString _ret = self->replace(before, after, static_cast<Qt::CaseSensitivity>(cs));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Replace34(QString* self, QLatin1StringView before, const libqt_string after, int cs) {
	QString _ret = self->replace(before, QString::fromUtf8(after.data, after.len), static_cast<Qt::CaseSensitivity>(cs));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Replace35(QString* self, const libqt_string before, QLatin1StringView after, int cs) {
	QString _ret = self->replace(QString::fromUtf8(before.data, before.len), after, static_cast<Qt::CaseSensitivity>(cs));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Replace36(QString* self, const libqt_string before, const libqt_string after, int cs) {
	QString _ret = self->replace(QString::fromUtf8(before.data, before.len), QString::fromUtf8(after.data, after.len), static_cast<Qt::CaseSensitivity>(cs));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Replace37(QString* self, QChar* c, const libqt_string after, int cs) {
	QString _ret = self->replace(*c, QString::fromUtf8(after.data, after.len), static_cast<Qt::CaseSensitivity>(cs));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Replace38(QString* self, QChar* c, QLatin1StringView after, int cs) {
	QString _ret = self->replace(*c, after, static_cast<Qt::CaseSensitivity>(cs));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QString_Split22(const QString* self, const libqt_string sep, int behavior) {
	return self->split(QString::fromUtf8(sep.data, sep.len), static_cast<QFlags<Qt::SplitBehaviorFlags>>(behavior));
}

libqt_list QString_Split32(const QString* self, const libqt_string sep, int behavior, int cs) {
	return self->split(QString::fromUtf8(sep.data, sep.len), static_cast<QFlags<Qt::SplitBehaviorFlags>>(behavior), static_cast<Qt::CaseSensitivity>(cs));
}

libqt_list QString_Split23(const QString* self, QChar* sep, int behavior) {
	return self->split(*sep, static_cast<QFlags<Qt::SplitBehaviorFlags>>(behavior));
}

libqt_list QString_Split33(const QString* self, QChar* sep, int behavior, int cs) {
	return self->split(*sep, static_cast<QFlags<Qt::SplitBehaviorFlags>>(behavior), static_cast<Qt::CaseSensitivity>(cs));
}

libqt_list QString_Split24(const QString* self, const QRegularExpression* sep, int behavior) {
	return self->split(*sep, static_cast<QFlags<Qt::SplitBehaviorFlags>>(behavior));
}

libqt_string QString_Normalized2(const QString* self, int mode, int version) {
	QString _ret = self->normalized(static_cast<QString::NormalizationForm>(mode), static_cast<QChar::UnicodeVersion>(version));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_FromUtf1623(const uint16_t* str, ptrdiff_t size) {
	QString _ret = QString::fromUtf16(str, size);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_FromUcs423(const unsigned int* str, ptrdiff_t size) {
	QString _ret = QString::fromUcs4(str, size);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QString_Compare22(const QString* self, const libqt_string s, int cs) {
	return self->compare(QString::fromUtf8(s.data, s.len), static_cast<Qt::CaseSensitivity>(cs));
}

int QString_Compare23(const QString* self, QLatin1StringView other, int cs) {
	return self->compare(other, static_cast<Qt::CaseSensitivity>(cs));
}

int QString_Compare24(const QString* self, QStringView* s, int cs) {
	return self->compare(*s, static_cast<Qt::CaseSensitivity>(cs));
}

int QString_Compare25(const QString* self, QChar* ch, int cs) {
	return self->compare(*ch, static_cast<Qt::CaseSensitivity>(cs));
}

int QString_Compare32(const libqt_string s1, const libqt_string s2, int cs) {
	return QString::compare(QString::fromUtf8(s1.data, s1.len), QString::fromUtf8(s2.data, s2.len), static_cast<Qt::CaseSensitivity>(cs));
}

int QString_Compare33(const libqt_string s1, QLatin1StringView s2, int cs) {
	return QString::compare(QString::fromUtf8(s1.data, s1.len), s2, static_cast<Qt::CaseSensitivity>(cs));
}

int QString_Compare34(QLatin1StringView s1, const libqt_string s2, int cs) {
	return QString::compare(s1, QString::fromUtf8(s2.data, s2.len), static_cast<Qt::CaseSensitivity>(cs));
}

int QString_Compare35(const libqt_string s1, QStringView* s2, int cs) {
	return QString::compare(QString::fromUtf8(s1.data, s1.len), *s2, static_cast<Qt::CaseSensitivity>(cs));
}

int QString_Compare36(QStringView* s1, const libqt_string s2, int cs) {
	return QString::compare(*s1, QString::fromUtf8(s2.data, s2.len), static_cast<Qt::CaseSensitivity>(cs));
}

int16_t QString_ToShort1(const QString* self, bool* ok) {
	return self->toShort(ok);
}

int16_t QString_ToShort2(const QString* self, bool* ok, int base) {
	return self->toShort(ok, base);
}

uint16_t QString_ToUShort1(const QString* self, bool* ok) {
	return self->toUShort(ok);
}

uint16_t QString_ToUShort2(const QString* self, bool* ok, int base) {
	return self->toUShort(ok, base);
}

int QString_ToInt1(const QString* self, bool* ok) {
	return self->toInt(ok);
}

int QString_ToInt2(const QString* self, bool* ok, int base) {
	return self->toInt(ok, base);
}

unsigned int QString_ToUInt1(const QString* self, bool* ok) {
	return self->toUInt(ok);
}

unsigned int QString_ToUInt2(const QString* self, bool* ok, int base) {
	return self->toUInt(ok, base);
}

long QString_ToLong1(const QString* self, bool* ok) {
	return self->toLong(ok);
}

long QString_ToLong2(const QString* self, bool* ok, int base) {
	return self->toLong(ok, base);
}

unsigned long QString_ToULong1(const QString* self, bool* ok) {
	return self->toULong(ok);
}

unsigned long QString_ToULong2(const QString* self, bool* ok, int base) {
	return self->toULong(ok, base);
}

long long QString_ToLongLong1(const QString* self, bool* ok) {
	return self->toLongLong(ok);
}

long long QString_ToLongLong2(const QString* self, bool* ok, int base) {
	return self->toLongLong(ok, base);
}

unsigned long long QString_ToULongLong1(const QString* self, bool* ok) {
	return self->toULongLong(ok);
}

unsigned long long QString_ToULongLong2(const QString* self, bool* ok, int base) {
	return self->toULongLong(ok, base);
}

float QString_ToFloat1(const QString* self, bool* ok) {
	return self->toFloat(ok);
}

double QString_ToDouble1(const QString* self, bool* ok) {
	return self->toDouble(ok);
}

libqt_string QString_SetNum22(QString* self, int16_t param1, int base) {
	QString _ret = self->setNum(param1, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetNum23(QString* self, uint16_t param1, int base) {
	QString _ret = self->setNum(param1, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetNum24(QString* self, int param1, int base) {
	QString _ret = self->setNum(param1, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetNum25(QString* self, unsigned int param1, int base) {
	QString _ret = self->setNum(param1, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetNum26(QString* self, long param1, int base) {
	QString _ret = self->setNum(param1, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetNum27(QString* self, unsigned long param1, int base) {
	QString _ret = self->setNum(param1, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetNum28(QString* self, long long param1, int base) {
	QString _ret = self->setNum(param1, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetNum29(QString* self, unsigned long long param1, int base) {
	QString _ret = self->setNum(param1, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetNum210(QString* self, float param1, char format) {
	QString _ret = self->setNum(param1, format);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetNum32(QString* self, float param1, char format, int precision) {
	QString _ret = self->setNum(param1, format, precision);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetNum211(QString* self, double param1, char format) {
	QString _ret = self->setNum(param1, format);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_SetNum33(QString* self, double param1, char format, int precision) {
	QString _ret = self->setNum(param1, format, precision);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Number22(int param1, int base) {
	QString _ret = QString::number(param1, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Number23(unsigned int param1, int base) {
	QString _ret = QString::number(param1, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Number24(long param1, int base) {
	QString _ret = QString::number(param1, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Number25(unsigned long param1, int base) {
	QString _ret = QString::number(param1, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Number26(long long param1, int base) {
	QString _ret = QString::number(param1, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Number27(unsigned long long param1, int base) {
	QString _ret = QString::number(param1, base);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Number28(double param1, char format) {
	QString _ret = QString::number(param1, format);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QString_Number32(double param1, char format, int precision) {
	QString _ret = QString::number(param1, format, precision);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QString_Delete(QString* self) {
    delete self;
}

