#include <QAnyStringView>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QRegularExpressionMatchIterator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStringView>
#include <qregularexpression.h>
#include "libqregularexpression.h"
#include "libqregularexpression.hxx"

QRegularExpression* QRegularExpression_new() {
	 return new QRegularExpression();
}

QRegularExpression* QRegularExpression_new2(const libqt_string pattern) {
	 return new QRegularExpression(QString::fromUtf8(pattern.data, pattern.len));
}

QRegularExpression* QRegularExpression_new3(const QRegularExpression* re) {
	 return new QRegularExpression(*re);
}

QRegularExpression* QRegularExpression_new4(const libqt_string pattern, int options) {
	 return new QRegularExpression(QString::fromUtf8(pattern.data, pattern.len), static_cast<QFlags<QRegularExpression::PatternOption>>(options));
}

int QRegularExpression_PatternOptions(const QRegularExpression* self) {
	return self->patternOptions();
}

void QRegularExpression_SetPatternOptions(QRegularExpression* self, int options) {
	self->setPatternOptions(static_cast<QFlags<QRegularExpression::PatternOption>>(options));
}

void QRegularExpression_OperatorAssign(QRegularExpression* self, const QRegularExpression* re) {
	self->operator=(*re);
}

void QRegularExpression_Swap(QRegularExpression* self, QRegularExpression* other) {
	self->swap(*other);
}

libqt_string QRegularExpression_Pattern(const QRegularExpression* self) {
	QString _ret = self->pattern();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QRegularExpression_SetPattern(QRegularExpression* self, const libqt_string pattern) {
	self->setPattern(QString::fromUtf8(pattern.data, pattern.len));
}

bool QRegularExpression_IsValid(const QRegularExpression* self) {
	return self->isValid();
}

ptrdiff_t QRegularExpression_PatternErrorOffset(const QRegularExpression* self) {
	return self->patternErrorOffset();
}

libqt_string QRegularExpression_ErrorString(const QRegularExpression* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QRegularExpression_CaptureCount(const QRegularExpression* self) {
	return self->captureCount();
}

libqt_list QRegularExpression_NamedCaptureGroups(const QRegularExpression* self) {
	return self->namedCaptureGroups();
}

QRegularExpressionMatch* QRegularExpression_Match(const QRegularExpression* self, const libqt_string subject) {
	return new QRegularExpressionMatch(self->match(QString::fromUtf8(subject.data, subject.len)));
}

QRegularExpressionMatch* QRegularExpression_Match2(const QRegularExpression* self, QStringView* subjectView) {
	return new QRegularExpressionMatch(self->match(*subjectView));
}

QRegularExpressionMatch* QRegularExpression_MatchView(const QRegularExpression* self, QStringView* subjectView) {
	return new QRegularExpressionMatch(self->matchView(*subjectView));
}

QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch(const QRegularExpression* self, const libqt_string subject) {
	return new QRegularExpressionMatchIterator(self->globalMatch(QString::fromUtf8(subject.data, subject.len)));
}

QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch2(const QRegularExpression* self, QStringView* subjectView) {
	return new QRegularExpressionMatchIterator(self->globalMatch(*subjectView));
}

QRegularExpressionMatchIterator* QRegularExpression_GlobalMatchView(const QRegularExpression* self, QStringView* subjectView) {
	return new QRegularExpressionMatchIterator(self->globalMatchView(*subjectView));
}

void QRegularExpression_Optimize(const QRegularExpression* self) {
	self->optimize();
}

libqt_string QRegularExpression_Escape(const libqt_string str) {
	QString _ret = QRegularExpression::escape(QString::fromUtf8(str.data, str.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QRegularExpression_WildcardToRegularExpression(const libqt_string str) {
	QString _ret = QRegularExpression::wildcardToRegularExpression(QString::fromUtf8(str.data, str.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QRegularExpression_AnchoredPattern(const libqt_string expression) {
	QString _ret = QRegularExpression::anchoredPattern(QString::fromUtf8(expression.data, expression.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QRegularExpression_Escape2(QStringView* str) {
	QString _ret = QRegularExpression::escape(*str);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QRegularExpression_WildcardToRegularExpression2(QStringView* str) {
	QString _ret = QRegularExpression::wildcardToRegularExpression(*str);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QRegularExpression_AnchoredPattern2(QStringView* expression) {
	QString _ret = QRegularExpression::anchoredPattern(*expression);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QRegularExpression* QRegularExpression_FromWildcard(QStringView* pattern) {
	return new QRegularExpression(QRegularExpression::fromWildcard(*pattern));
}

QRegularExpressionMatch* QRegularExpression_Match22(const QRegularExpression* self, const libqt_string subject, ptrdiff_t offset) {
	return new QRegularExpressionMatch(self->match(QString::fromUtf8(subject.data, subject.len), offset));
}

QRegularExpressionMatch* QRegularExpression_Match3(const QRegularExpression* self, const libqt_string subject, ptrdiff_t offset, int matchType) {
	return new QRegularExpressionMatch(self->match(QString::fromUtf8(subject.data, subject.len), offset, static_cast<QRegularExpression::MatchType>(matchType)));
}

QRegularExpressionMatch* QRegularExpression_Match4(const QRegularExpression* self, const libqt_string subject, ptrdiff_t offset, int matchType, int matchOptions) {
	return new QRegularExpressionMatch(self->match(QString::fromUtf8(subject.data, subject.len), offset, static_cast<QRegularExpression::MatchType>(matchType), static_cast<QFlags<QRegularExpression::MatchOption>>(matchOptions)));
}

QRegularExpressionMatch* QRegularExpression_Match23(const QRegularExpression* self, QStringView* subjectView, ptrdiff_t offset) {
	return new QRegularExpressionMatch(self->match(*subjectView, offset));
}

QRegularExpressionMatch* QRegularExpression_Match32(const QRegularExpression* self, QStringView* subjectView, ptrdiff_t offset, int matchType) {
	return new QRegularExpressionMatch(self->match(*subjectView, offset, static_cast<QRegularExpression::MatchType>(matchType)));
}

QRegularExpressionMatch* QRegularExpression_Match42(const QRegularExpression* self, QStringView* subjectView, ptrdiff_t offset, int matchType, int matchOptions) {
	return new QRegularExpressionMatch(self->match(*subjectView, offset, static_cast<QRegularExpression::MatchType>(matchType), static_cast<QFlags<QRegularExpression::MatchOption>>(matchOptions)));
}

QRegularExpressionMatch* QRegularExpression_MatchView2(const QRegularExpression* self, QStringView* subjectView, ptrdiff_t offset) {
	return new QRegularExpressionMatch(self->matchView(*subjectView, offset));
}

QRegularExpressionMatch* QRegularExpression_MatchView3(const QRegularExpression* self, QStringView* subjectView, ptrdiff_t offset, int matchType) {
	return new QRegularExpressionMatch(self->matchView(*subjectView, offset, static_cast<QRegularExpression::MatchType>(matchType)));
}

QRegularExpressionMatch* QRegularExpression_MatchView4(const QRegularExpression* self, QStringView* subjectView, ptrdiff_t offset, int matchType, int matchOptions) {
	return new QRegularExpressionMatch(self->matchView(*subjectView, offset, static_cast<QRegularExpression::MatchType>(matchType), static_cast<QFlags<QRegularExpression::MatchOption>>(matchOptions)));
}

QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch22(const QRegularExpression* self, const libqt_string subject, ptrdiff_t offset) {
	return new QRegularExpressionMatchIterator(self->globalMatch(QString::fromUtf8(subject.data, subject.len), offset));
}

QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch3(const QRegularExpression* self, const libqt_string subject, ptrdiff_t offset, int matchType) {
	return new QRegularExpressionMatchIterator(self->globalMatch(QString::fromUtf8(subject.data, subject.len), offset, static_cast<QRegularExpression::MatchType>(matchType)));
}

QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch4(const QRegularExpression* self, const libqt_string subject, ptrdiff_t offset, int matchType, int matchOptions) {
	return new QRegularExpressionMatchIterator(self->globalMatch(QString::fromUtf8(subject.data, subject.len), offset, static_cast<QRegularExpression::MatchType>(matchType), static_cast<QFlags<QRegularExpression::MatchOption>>(matchOptions)));
}

QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch23(const QRegularExpression* self, QStringView* subjectView, ptrdiff_t offset) {
	return new QRegularExpressionMatchIterator(self->globalMatch(*subjectView, offset));
}

QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch32(const QRegularExpression* self, QStringView* subjectView, ptrdiff_t offset, int matchType) {
	return new QRegularExpressionMatchIterator(self->globalMatch(*subjectView, offset, static_cast<QRegularExpression::MatchType>(matchType)));
}

QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch42(const QRegularExpression* self, QStringView* subjectView, ptrdiff_t offset, int matchType, int matchOptions) {
	return new QRegularExpressionMatchIterator(self->globalMatch(*subjectView, offset, static_cast<QRegularExpression::MatchType>(matchType), static_cast<QFlags<QRegularExpression::MatchOption>>(matchOptions)));
}

QRegularExpressionMatchIterator* QRegularExpression_GlobalMatchView2(const QRegularExpression* self, QStringView* subjectView, ptrdiff_t offset) {
	return new QRegularExpressionMatchIterator(self->globalMatchView(*subjectView, offset));
}

QRegularExpressionMatchIterator* QRegularExpression_GlobalMatchView3(const QRegularExpression* self, QStringView* subjectView, ptrdiff_t offset, int matchType) {
	return new QRegularExpressionMatchIterator(self->globalMatchView(*subjectView, offset, static_cast<QRegularExpression::MatchType>(matchType)));
}

QRegularExpressionMatchIterator* QRegularExpression_GlobalMatchView4(const QRegularExpression* self, QStringView* subjectView, ptrdiff_t offset, int matchType, int matchOptions) {
	return new QRegularExpressionMatchIterator(self->globalMatchView(*subjectView, offset, static_cast<QRegularExpression::MatchType>(matchType), static_cast<QFlags<QRegularExpression::MatchOption>>(matchOptions)));
}

libqt_string QRegularExpression_WildcardToRegularExpression22(const libqt_string str, int options) {
	QString _ret = QRegularExpression::wildcardToRegularExpression(QString::fromUtf8(str.data, str.len), static_cast<QFlags<QRegularExpression::WildcardConversionOption>>(options));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QRegularExpression_WildcardToRegularExpression23(QStringView* str, int options) {
	QString _ret = QRegularExpression::wildcardToRegularExpression(*str, static_cast<QFlags<QRegularExpression::WildcardConversionOption>>(options));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QRegularExpression* QRegularExpression_FromWildcard2(QStringView* pattern, int cs) {
	return new QRegularExpression(QRegularExpression::fromWildcard(*pattern, static_cast<Qt::CaseSensitivity>(cs)));
}

QRegularExpression* QRegularExpression_FromWildcard3(QStringView* pattern, int cs, int options) {
	return new QRegularExpression(QRegularExpression::fromWildcard(*pattern, static_cast<Qt::CaseSensitivity>(cs), static_cast<QFlags<QRegularExpression::WildcardConversionOption>>(options)));
}

void QRegularExpression_Delete(QRegularExpression* self) {
    delete self;
}

QRegularExpressionMatch* QRegularExpressionMatch_new() {
	 return new QRegularExpressionMatch();
}

QRegularExpressionMatch* QRegularExpressionMatch_new2(const QRegularExpressionMatch* match) {
	 return new QRegularExpressionMatch(*match);
}

void QRegularExpressionMatch_OperatorAssign(QRegularExpressionMatch* self, const QRegularExpressionMatch* match) {
	self->operator=(*match);
}

void QRegularExpressionMatch_Swap(QRegularExpressionMatch* self, QRegularExpressionMatch* other) {
	self->swap(*other);
}

QRegularExpression* QRegularExpressionMatch_RegularExpression(const QRegularExpressionMatch* self) {
	return new QRegularExpression(self->regularExpression());
}

int QRegularExpressionMatch_MatchType(const QRegularExpressionMatch* self) {
	return self->matchType();
}

int QRegularExpressionMatch_MatchOptions(const QRegularExpressionMatch* self) {
	return self->matchOptions();
}

bool QRegularExpressionMatch_HasMatch(const QRegularExpressionMatch* self) {
	return self->hasMatch();
}

bool QRegularExpressionMatch_HasPartialMatch(const QRegularExpressionMatch* self) {
	return self->hasPartialMatch();
}

bool QRegularExpressionMatch_IsValid(const QRegularExpressionMatch* self) {
	return self->isValid();
}

int QRegularExpressionMatch_LastCapturedIndex(const QRegularExpressionMatch* self) {
	return self->lastCapturedIndex();
}

bool QRegularExpressionMatch_HasCaptured(const QRegularExpressionMatch* self, libqt_string name) {
	return self->hasCaptured(QAnyStringView(QString::fromUtf8(name.data, name.len)));
}

bool QRegularExpressionMatch_HasCaptured2(const QRegularExpressionMatch* self, int nth) {
	return self->hasCaptured(nth);
}

libqt_string QRegularExpressionMatch_Captured(const QRegularExpressionMatch* self) {
	QString _ret = self->captured();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QStringView* QRegularExpressionMatch_CapturedView(const QRegularExpressionMatch* self) {
	return new QStringView(self->capturedView());
}

libqt_string QRegularExpressionMatch_Captured2(const QRegularExpressionMatch* self, libqt_string name) {
	QString _ret = self->captured(QAnyStringView(QString::fromUtf8(name.data, name.len)));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QStringView* QRegularExpressionMatch_CapturedView2(const QRegularExpressionMatch* self, libqt_string name) {
	return new QStringView(self->capturedView(QAnyStringView(QString::fromUtf8(name.data, name.len))));
}

libqt_list QRegularExpressionMatch_CapturedTexts(const QRegularExpressionMatch* self) {
	return self->capturedTexts();
}

ptrdiff_t QRegularExpressionMatch_CapturedStart(const QRegularExpressionMatch* self) {
	return self->capturedStart();
}

ptrdiff_t QRegularExpressionMatch_CapturedLength(const QRegularExpressionMatch* self) {
	return self->capturedLength();
}

ptrdiff_t QRegularExpressionMatch_CapturedEnd(const QRegularExpressionMatch* self) {
	return self->capturedEnd();
}

ptrdiff_t QRegularExpressionMatch_CapturedStart2(const QRegularExpressionMatch* self, libqt_string name) {
	return self->capturedStart(QAnyStringView(QString::fromUtf8(name.data, name.len)));
}

ptrdiff_t QRegularExpressionMatch_CapturedLength2(const QRegularExpressionMatch* self, libqt_string name) {
	return self->capturedLength(QAnyStringView(QString::fromUtf8(name.data, name.len)));
}

ptrdiff_t QRegularExpressionMatch_CapturedEnd2(const QRegularExpressionMatch* self, libqt_string name) {
	return self->capturedEnd(QAnyStringView(QString::fromUtf8(name.data, name.len)));
}

libqt_string QRegularExpressionMatch_Captured1(const QRegularExpressionMatch* self, int nth) {
	QString _ret = self->captured(nth);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QStringView* QRegularExpressionMatch_CapturedView1(const QRegularExpressionMatch* self, int nth) {
	return new QStringView(self->capturedView(nth));
}

ptrdiff_t QRegularExpressionMatch_CapturedStart1(const QRegularExpressionMatch* self, int nth) {
	return self->capturedStart(nth);
}

ptrdiff_t QRegularExpressionMatch_CapturedLength1(const QRegularExpressionMatch* self, int nth) {
	return self->capturedLength(nth);
}

ptrdiff_t QRegularExpressionMatch_CapturedEnd1(const QRegularExpressionMatch* self, int nth) {
	return self->capturedEnd(nth);
}

void QRegularExpressionMatch_Delete(QRegularExpressionMatch* self) {
    delete self;
}

QRegularExpressionMatchIterator* QRegularExpressionMatchIterator_new() {
	 return new QRegularExpressionMatchIterator();
}

QRegularExpressionMatchIterator* QRegularExpressionMatchIterator_new2(const QRegularExpressionMatchIterator* iterator) {
	 return new QRegularExpressionMatchIterator(*iterator);
}

void QRegularExpressionMatchIterator_OperatorAssign(QRegularExpressionMatchIterator* self, const QRegularExpressionMatchIterator* iterator) {
	self->operator=(*iterator);
}

void QRegularExpressionMatchIterator_Swap(QRegularExpressionMatchIterator* self, QRegularExpressionMatchIterator* other) {
	self->swap(*other);
}

bool QRegularExpressionMatchIterator_IsValid(const QRegularExpressionMatchIterator* self) {
	return self->isValid();
}

bool QRegularExpressionMatchIterator_HasNext(const QRegularExpressionMatchIterator* self) {
	return self->hasNext();
}

QRegularExpressionMatch* QRegularExpressionMatchIterator_Next(QRegularExpressionMatchIterator* self) {
	return new QRegularExpressionMatch(self->next());
}

QRegularExpressionMatch* QRegularExpressionMatchIterator_PeekNext(const QRegularExpressionMatchIterator* self) {
	return new QRegularExpressionMatch(self->peekNext());
}

QRegularExpression* QRegularExpressionMatchIterator_RegularExpression(const QRegularExpressionMatchIterator* self) {
	return new QRegularExpression(self->regularExpression());
}

int QRegularExpressionMatchIterator_MatchType(const QRegularExpressionMatchIterator* self) {
	return self->matchType();
}

int QRegularExpressionMatchIterator_MatchOptions(const QRegularExpressionMatchIterator* self) {
	return self->matchOptions();
}

void QRegularExpressionMatchIterator_Delete(QRegularExpressionMatchIterator* self) {
    delete self;
}

