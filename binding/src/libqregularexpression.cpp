#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QRegularExpressionMatchIterator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
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
	auto _ret = self->namedCaptureGroups();
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

QRegularExpressionMatch* QRegularExpression_Match(const QRegularExpression* self, const libqt_string subject) {
	return new QRegularExpressionMatch(self->match(QString::fromUtf8(subject.data, subject.len)));
}

QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch(const QRegularExpression* self, const libqt_string subject) {
	return new QRegularExpressionMatchIterator(self->globalMatch(QString::fromUtf8(subject.data, subject.len)));
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

QRegularExpressionMatch* QRegularExpression_Match22(const QRegularExpression* self, const libqt_string subject, ptrdiff_t offset) {
	return new QRegularExpressionMatch(self->match(QString::fromUtf8(subject.data, subject.len), offset));
}

QRegularExpressionMatch* QRegularExpression_Match3(const QRegularExpression* self, const libqt_string subject, ptrdiff_t offset, int matchType) {
	return new QRegularExpressionMatch(self->match(QString::fromUtf8(subject.data, subject.len), offset, static_cast<QRegularExpression::MatchType>(matchType)));
}

QRegularExpressionMatch* QRegularExpression_Match4(const QRegularExpression* self, const libqt_string subject, ptrdiff_t offset, int matchType, int matchOptions) {
	return new QRegularExpressionMatch(self->match(QString::fromUtf8(subject.data, subject.len), offset, static_cast<QRegularExpression::MatchType>(matchType), static_cast<QFlags<QRegularExpression::MatchOption>>(matchOptions)));
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

libqt_list QRegularExpressionMatch_CapturedTexts(const QRegularExpressionMatch* self) {
	auto _ret = self->capturedTexts();
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

ptrdiff_t QRegularExpressionMatch_CapturedStart(const QRegularExpressionMatch* self) {
	return self->capturedStart();
}

ptrdiff_t QRegularExpressionMatch_CapturedLength(const QRegularExpressionMatch* self) {
	return self->capturedLength();
}

ptrdiff_t QRegularExpressionMatch_CapturedEnd(const QRegularExpressionMatch* self) {
	return self->capturedEnd();
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

