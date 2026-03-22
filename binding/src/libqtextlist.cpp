#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextBlock>
#include <QTextBlockGroup>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextList>
#include <QTextListFormat>
#include <qtextlist.h>
#include "libqtextlist.h"
#include "libqtextlist.hxx"

QTextList* QTextList_new(QTextDocument* doc) {
	 return new QTextList(doc);
}

libqt_string QTextList_Tr(const char* s) {
	QString _ret = QTextList::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QTextList_Count(const QTextList* self) {
	return self->count();
}

QTextBlock* QTextList_Item(const QTextList* self, int i) {
	return new QTextBlock(self->item(i));
}

int QTextList_ItemNumber(const QTextList* self, const QTextBlock* param1) {
	return self->itemNumber(*param1);
}

libqt_string QTextList_ItemText(const QTextList* self, const QTextBlock* param1) {
	QString _ret = self->itemText(*param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTextList_RemoveItem(QTextList* self, int i) {
	self->removeItem(i);
}

void QTextList_Remove(QTextList* self, const QTextBlock* param1) {
	self->remove(*param1);
}

void QTextList_Add(QTextList* self, const QTextBlock* block) {
	self->add(*block);
}

void QTextList_SetFormat(QTextList* self, const QTextListFormat* format) {
	self->setFormat(*format);
}

QTextListFormat* QTextList_Format(const QTextList* self) {
	return new QTextListFormat(self->format());
}

libqt_string QTextList_Tr2(const char* s, const char* c) {
	QString _ret = QTextList::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTextList_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextList::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTextList_Delete(QTextList* self) {
    delete self;
}

