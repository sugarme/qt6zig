#include <QDialog>
#include <QObject>
#include <QPageSetupDialog>
#include <QPrinter>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qpagesetupdialog.h>
#include "libqpagesetupdialog.h"
#include "libqpagesetupdialog.hxx"

QPageSetupDialog* QPageSetupDialog_new(QWidget* parent) {
	 return new VirtualQPageSetupDialog(parent);
}

QPageSetupDialog* QPageSetupDialog_new2(QPrinter* printer) {
	 return new VirtualQPageSetupDialog(printer);
}

QPageSetupDialog* QPageSetupDialog_new3() {
	 return new VirtualQPageSetupDialog();
}

QPageSetupDialog* QPageSetupDialog_new4(QPrinter* printer, QWidget* parent) {
	 return new VirtualQPageSetupDialog(printer, parent);
}

libqt_string QPageSetupDialog_Tr(const char* s) {
	QString _ret = QPageSetupDialog::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPageSetupDialog_SetVisible(QPageSetupDialog* self, bool visible) {
	self->setVisible(visible);
}

int QPageSetupDialog_Exec(QPageSetupDialog* self) {
	return self->exec();
}

void QPageSetupDialog_Open(QPageSetupDialog* self, QObject* receiver, const char* member) {
	self->open(receiver, member);
}

void QPageSetupDialog_Done(QPageSetupDialog* self, int result) {
	self->done(result);
}

QPrinter* QPageSetupDialog_Printer(QPageSetupDialog* self) {
	return self->printer();
}

libqt_string QPageSetupDialog_Tr2(const char* s, const char* c) {
	QString _ret = QPageSetupDialog::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPageSetupDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPageSetupDialog::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QPageSetupDialog_QBaseSetVisible(QPageSetupDialog* self, bool visible) {
	auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
	if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
vqpagesetupdialog->setQPageSetupDialog_SetVisible_IsBase(true);
	vqpagesetupdialog->setVisible(visible);
}
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnSetVisible(QPageSetupDialog* self, intptr_t slot) {
	auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
	if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
vqpagesetupdialog->setQPageSetupDialog_SetVisible_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_SetVisible_Callback>(slot));
}
}

// Base class handler implementation
int QPageSetupDialog_QBaseExec(QPageSetupDialog* self) {
	auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
	if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
vqpagesetupdialog->setQPageSetupDialog_Exec_IsBase(true);
	return vqpagesetupdialog->exec();
}
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnExec(QPageSetupDialog* self, intptr_t slot) {
	auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
	if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
vqpagesetupdialog->setQPageSetupDialog_Exec_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Exec_Callback>(slot));
}
}

// Base class handler implementation
void QPageSetupDialog_QBaseDone(QPageSetupDialog* self, int result) {
	auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
	if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
vqpagesetupdialog->setQPageSetupDialog_Done_IsBase(true);
	vqpagesetupdialog->done(result);
}
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnDone(QPageSetupDialog* self, intptr_t slot) {
	auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
	if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
vqpagesetupdialog->setQPageSetupDialog_Done_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Done_Callback>(slot));
}
}

void QPageSetupDialog_Delete(QPageSetupDialog* self) {
    delete self;
}

