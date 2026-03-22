#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextDocumentFragment>
#include <QTextStream>
#include <qtextdocumentfragment.h>
#include "libqtextdocumentfragment.h"
#include "libqtextdocumentfragment.hxx"

QTextDocumentFragment* QTextDocumentFragment_new() {
	 return new QTextDocumentFragment();
}

QTextDocumentFragment* QTextDocumentFragment_new2(const QTextDocument* document) {
	 return new QTextDocumentFragment(document);
}

QTextDocumentFragment* QTextDocumentFragment_new3(const QTextCursor* range) {
	 return new QTextDocumentFragment(*range);
}

QTextDocumentFragment* QTextDocumentFragment_new4(const QTextDocumentFragment* rhs) {
	 return new QTextDocumentFragment(*rhs);
}

void QTextDocumentFragment_OperatorAssign(QTextDocumentFragment* self, const QTextDocumentFragment* rhs) {
	self->operator=(*rhs);
}

bool QTextDocumentFragment_IsEmpty(const QTextDocumentFragment* self) {
	return self->isEmpty();
}

libqt_string QTextDocumentFragment_ToPlainText(const QTextDocumentFragment* self) {
	QString _ret = self->toPlainText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTextDocumentFragment_ToRawText(const QTextDocumentFragment* self) {
	QString _ret = self->toRawText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTextDocumentFragment_ToHtml(const QTextDocumentFragment* self) {
	QString _ret = self->toHtml();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTextDocumentFragment_ToMarkdown(const QTextDocumentFragment* self) {
	QString _ret = self->toMarkdown();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QTextDocumentFragment* QTextDocumentFragment_FromPlainText(const libqt_string plainText) {
	return new QTextDocumentFragment(QTextDocumentFragment::fromPlainText(QString::fromUtf8(plainText.data, plainText.len)));
}

QTextDocumentFragment* QTextDocumentFragment_FromHtml(const libqt_string html) {
	return new QTextDocumentFragment(QTextDocumentFragment::fromHtml(QString::fromUtf8(html.data, html.len)));
}

QTextDocumentFragment* QTextDocumentFragment_FromMarkdown(const libqt_string markdown) {
	return new QTextDocumentFragment(QTextDocumentFragment::fromMarkdown(QString::fromUtf8(markdown.data, markdown.len)));
}

libqt_string QTextDocumentFragment_ToMarkdown1(const QTextDocumentFragment* self, int features) {
	QString _ret = self->toMarkdown(static_cast<QFlags<QTextDocument::MarkdownFeature>>(features));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QTextDocumentFragment* QTextDocumentFragment_FromHtml2(const libqt_string html, const QTextDocument* resourceProvider) {
	return new QTextDocumentFragment(QTextDocumentFragment::fromHtml(QString::fromUtf8(html.data, html.len), resourceProvider));
}

QTextDocumentFragment* QTextDocumentFragment_FromMarkdown2(const libqt_string markdown, int features) {
	return new QTextDocumentFragment(QTextDocumentFragment::fromMarkdown(QString::fromUtf8(markdown.data, markdown.len), static_cast<QFlags<QTextDocument::MarkdownFeature>>(features)));
}

void QTextDocumentFragment_Delete(QTextDocumentFragment* self) {
    delete self;
}

