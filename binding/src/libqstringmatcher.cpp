#include <QChar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStringMatcher>
#include <qstringmatcher.h>
#include "libqstringmatcher.h"
#include "libqstringmatcher.hxx"

QStringMatcher* QStringMatcher_new() {
	 return new QStringMatcher();
}

QStringMatcher* QStringMatcher_new2(const libqt_string pattern) {
	 return new QStringMatcher(QString::fromUtf8(pattern.data, pattern.len));
}

QStringMatcher* QStringMatcher_new3(const QChar* uc, ptrdiff_t lenVal) {
	 return new QStringMatcher(uc, lenVal);
}

QStringMatcher* QStringMatcher_new4(const QStringMatcher* other) {
	 return new QStringMatcher(*other);
}

QStringMatcher* QStringMatcher_new5(const libqt_string pattern, int cs) {
	 return new QStringMatcher(QString::fromUtf8(pattern.data, pattern.len), static_cast<Qt::CaseSensitivity>(cs));
}

QStringMatcher* QStringMatcher_new6(const QChar* uc, ptrdiff_t lenVal, int cs) {
	 return new QStringMatcher(uc, lenVal, static_cast<Qt::CaseSensitivity>(cs));
}

void QStringMatcher_OperatorAssign(QStringMatcher* self, const QStringMatcher* other) {
	self->operator=(*other);
}

void QStringMatcher_SetPattern(QStringMatcher* self, const libqt_string pattern) {
	self->setPattern(QString::fromUtf8(pattern.data, pattern.len));
}

void QStringMatcher_SetCaseSensitivity(QStringMatcher* self, int cs) {
	self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringMatcher_IndexIn(const QStringMatcher* self, const libqt_string str) {
	return self->indexIn(QString::fromUtf8(str.data, str.len));
}

ptrdiff_t QStringMatcher_IndexIn2(const QStringMatcher* self, const QChar* str, ptrdiff_t length) {
	return self->indexIn(str, length);
}

libqt_string QStringMatcher_Pattern(const QStringMatcher* self) {
	QString _ret = self->pattern();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QStringMatcher_CaseSensitivity(const QStringMatcher* self) {
	return self->caseSensitivity();
}

ptrdiff_t QStringMatcher_IndexIn22(const QStringMatcher* self, const libqt_string str, ptrdiff_t from) {
	return self->indexIn(QString::fromUtf8(str.data, str.len), from);
}

ptrdiff_t QStringMatcher_IndexIn32(const QStringMatcher* self, const QChar* str, ptrdiff_t length, ptrdiff_t from) {
	return self->indexIn(str, length, from);
}

void QStringMatcher_Delete(QStringMatcher* self) {
    delete self;
}

