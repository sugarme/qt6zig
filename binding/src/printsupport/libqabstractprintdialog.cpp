#include <QAbstractPrintDialog>
#include <QDialog>
#include <QPrinter>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qabstractprintdialog.h>
#include "libqabstractprintdialog.h"
#include "libqabstractprintdialog.hxx"

QAbstractPrintDialog* QAbstractPrintDialog_new(QPrinter* printer) {
	 return new QAbstractPrintDialog(printer);
}

QAbstractPrintDialog* QAbstractPrintDialog_new2(QPrinter* printer, QWidget* parent) {
	 return new QAbstractPrintDialog(printer, parent);
}

libqt_string QAbstractPrintDialog_Tr(const char* s) {
	QString _ret = QAbstractPrintDialog::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractPrintDialog_SetOptionTabs(QAbstractPrintDialog* self, const libqt_list tabs) {
	self->setOptionTabs(*tabs);
}

void QAbstractPrintDialog_SetPrintRange(QAbstractPrintDialog* self, int range) {
	self->setPrintRange(static_cast<QPrinter::PrintRange>(range));
}

int QAbstractPrintDialog_PrintRange(const QAbstractPrintDialog* self) {
	return self->printRange();
}

void QAbstractPrintDialog_SetMinMax(QAbstractPrintDialog* self, int min, int max) {
	self->setMinMax(min, max);
}

int QAbstractPrintDialog_MinPage(const QAbstractPrintDialog* self) {
	return self->minPage();
}

int QAbstractPrintDialog_MaxPage(const QAbstractPrintDialog* self) {
	return self->maxPage();
}

void QAbstractPrintDialog_SetFromTo(QAbstractPrintDialog* self, int fromPage, int toPage) {
	self->setFromTo(fromPage, toPage);
}

int QAbstractPrintDialog_FromPage(const QAbstractPrintDialog* self) {
	return self->fromPage();
}

int QAbstractPrintDialog_ToPage(const QAbstractPrintDialog* self) {
	return self->toPage();
}

QPrinter* QAbstractPrintDialog_Printer(const QAbstractPrintDialog* self) {
	return self->printer();
}

libqt_string QAbstractPrintDialog_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractPrintDialog::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractPrintDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractPrintDialog::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractPrintDialog_Delete(QAbstractPrintDialog* self) {
    delete self;
}

