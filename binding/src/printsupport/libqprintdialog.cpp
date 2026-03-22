#include <QAbstractPrintDialog>
#include <QObject>
#include <QPrintDialog>
#include <QPrinter>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <qprintdialog.h>
#include "libqprintdialog.h"
#include "libqprintdialog.hxx"

QPrintDialog* QPrintDialog_new(QWidget* parent) {
	 return new VirtualQPrintDialog(parent);
}

QPrintDialog* QPrintDialog_new2(QPrinter* printer) {
	 return new VirtualQPrintDialog(printer);
}

QPrintDialog* QPrintDialog_new3() {
	 return new VirtualQPrintDialog();
}

QPrintDialog* QPrintDialog_new4(QPrinter* printer, QWidget* parent) {
	 return new VirtualQPrintDialog(printer, parent);
}

libqt_string QPrintDialog_Tr(const char* s) {
	QString _ret = QPrintDialog::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QPrintDialog_Exec(QPrintDialog* self) {
	return self->exec();
}

void QPrintDialog_Done(QPrintDialog* self, int result) {
	self->done(result);
}

void QPrintDialog_SetOption(QPrintDialog* self, int option) {
	self->setOption(static_cast<QAbstractPrintDialog::PrintDialogOption>(option));
}

bool QPrintDialog_TestOption(const QPrintDialog* self, int option) {
	return self->testOption(static_cast<QAbstractPrintDialog::PrintDialogOption>(option));
}

void QPrintDialog_SetOptions(QPrintDialog* self, int options) {
	self->setOptions(static_cast<QFlags<QAbstractPrintDialog::PrintDialogOption>>(options));
}

int QPrintDialog_Options(const QPrintDialog* self) {
	return self->options();
}

void QPrintDialog_SetVisible(QPrintDialog* self, bool visible) {
	self->setVisible(visible);
}

void QPrintDialog_Open(QPrintDialog* self, QObject* receiver, const char* member) {
	self->open(receiver, member);
}

void QPrintDialog_Accepted(QPrintDialog* self, QPrinter* printer) {
	self->accepted(printer);
}

libqt_string QPrintDialog_Tr2(const char* s, const char* c) {
	QString _ret = QPrintDialog::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPrintDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPrintDialog::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPrintDialog_SetOption2(QPrintDialog* self, int option, bool on) {
	self->setOption(static_cast<QAbstractPrintDialog::PrintDialogOption>(option), on);
}

// Base class handler implementation
int QPrintDialog_QBaseExec(QPrintDialog* self) {
	auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
	if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
vqprintdialog->setQPrintDialog_Exec_IsBase(true);
	return vqprintdialog->exec();
}
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnExec(QPrintDialog* self, intptr_t slot) {
	auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
	if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
vqprintdialog->setQPrintDialog_Exec_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Exec_Callback>(slot));
}
}

// Base class handler implementation
void QPrintDialog_QBaseDone(QPrintDialog* self, int result) {
	auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
	if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
vqprintdialog->setQPrintDialog_Done_IsBase(true);
	vqprintdialog->done(result);
}
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnDone(QPrintDialog* self, intptr_t slot) {
	auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
	if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
vqprintdialog->setQPrintDialog_Done_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Done_Callback>(slot));
}
}

// Base class handler implementation
void QPrintDialog_QBaseSetVisible(QPrintDialog* self, bool visible) {
	auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
	if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
vqprintdialog->setQPrintDialog_SetVisible_IsBase(true);
	vqprintdialog->setVisible(visible);
}
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnSetVisible(QPrintDialog* self, intptr_t slot) {
	auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
	if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
vqprintdialog->setQPrintDialog_SetVisible_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_SetVisible_Callback>(slot));
}
}

void QPrintDialog_Delete(QPrintDialog* self) {
    delete self;
}

