#include <QColor>
#include <QFont>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QSyntaxHighlighter>
#include <QTextBlock>
#include <QTextBlockUserData>
#include <QTextCharFormat>
#include <QTextDocument>
#include <qsyntaxhighlighter.h>
#include "libqsyntaxhighlighter.h"
#include "libqsyntaxhighlighter.hxx"

QSyntaxHighlighter* QSyntaxHighlighter_new(QObject* parent) {
	 return new VirtualQSyntaxHighlighter(parent);
}

QSyntaxHighlighter* QSyntaxHighlighter_new2(QTextDocument* parent) {
	 return new VirtualQSyntaxHighlighter(parent);
}

libqt_string QSyntaxHighlighter_Tr(const char* s) {
	QString _ret = QSyntaxHighlighter::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSyntaxHighlighter_SetDocument(QSyntaxHighlighter* self, QTextDocument* doc) {
	self->setDocument(doc);
}

QTextDocument* QSyntaxHighlighter_Document(const QSyntaxHighlighter* self) {
	return self->document();
}

void QSyntaxHighlighter_Rehighlight(QSyntaxHighlighter* self) {
	self->rehighlight();
}

void QSyntaxHighlighter_RehighlightBlock(QSyntaxHighlighter* self, const QTextBlock* block) {
	self->rehighlightBlock(*block);
}

libqt_string QSyntaxHighlighter_Tr2(const char* s, const char* c) {
	QString _ret = QSyntaxHighlighter::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSyntaxHighlighter_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSyntaxHighlighter::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSyntaxHighlighter_Delete(QSyntaxHighlighter* self) {
    delete self;
}

