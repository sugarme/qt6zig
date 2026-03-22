#include <QDialog>
#include <QObject>
#include <QPrintPreviewDialog>
#include <QPrinter>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qprintpreviewdialog.h>
#include "libqprintpreviewdialog.h"
#include "libqprintpreviewdialog.hxx"

QPrintPreviewDialog* QPrintPreviewDialog_new(QWidget* parent) {
	 return new VirtualQPrintPreviewDialog(parent);
}

QPrintPreviewDialog* QPrintPreviewDialog_new2() {
	 return new VirtualQPrintPreviewDialog();
}

QPrintPreviewDialog* QPrintPreviewDialog_new3(QPrinter* printer) {
	 return new VirtualQPrintPreviewDialog(printer);
}

QPrintPreviewDialog* QPrintPreviewDialog_new4(QWidget* parent, int flags) {
	 return new VirtualQPrintPreviewDialog(parent, static_cast<QFlags<Qt::WindowType>>(flags));
}

QPrintPreviewDialog* QPrintPreviewDialog_new5(QPrinter* printer, QWidget* parent) {
	 return new VirtualQPrintPreviewDialog(printer, parent);
}

QPrintPreviewDialog* QPrintPreviewDialog_new6(QPrinter* printer, QWidget* parent, int flags) {
	 return new VirtualQPrintPreviewDialog(printer, parent, static_cast<QFlags<Qt::WindowType>>(flags));
}

libqt_string QPrintPreviewDialog_Tr(const char* s) {
	QString _ret = QPrintPreviewDialog::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPrintPreviewDialog_Open(QPrintPreviewDialog* self, QObject* receiver, const char* member) {
	self->open(receiver, member);
}

QPrinter* QPrintPreviewDialog_Printer(QPrintPreviewDialog* self) {
	return self->printer();
}

void QPrintPreviewDialog_SetVisible(QPrintPreviewDialog* self, bool visible) {
	self->setVisible(visible);
}

void QPrintPreviewDialog_Done(QPrintPreviewDialog* self, int result) {
	self->done(result);
}

void QPrintPreviewDialog_PaintRequested(QPrintPreviewDialog* self, QPrinter* printer) {
	self->paintRequested(printer);
}

void QPrintPreviewDialog_Connect_PaintRequested(QPrintPreviewDialog* self, intptr_t slot) {
    void (*slotFunc)(QPrintPreviewDialog*, QPrinter*) = reinterpret_cast<void (*)(QPrintPreviewDialog*, QPrinter*)>(slot);
    QPrintPreviewDialog::connect(self, &QPrintPreviewDialog::paintRequested, [self, slotFunc](QPrinter* printer) {
	slotFunc(self, printer);
    });
}

libqt_string QPrintPreviewDialog_Tr2(const char* s, const char* c) {
	QString _ret = QPrintPreviewDialog::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPrintPreviewDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPrintPreviewDialog::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseSetVisible(QPrintPreviewDialog* self, bool visible) {
	auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
	if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
vqprintpreviewdialog->setQPrintPreviewDialog_SetVisible_IsBase(true);
	vqprintpreviewdialog->setVisible(visible);
}
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnSetVisible(QPrintPreviewDialog* self, intptr_t slot) {
	auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
	if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
vqprintpreviewdialog->setQPrintPreviewDialog_SetVisible_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_SetVisible_Callback>(slot));
}
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseDone(QPrintPreviewDialog* self, int result) {
	auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
	if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
vqprintpreviewdialog->setQPrintPreviewDialog_Done_IsBase(true);
	vqprintpreviewdialog->done(result);
}
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDone(QPrintPreviewDialog* self, intptr_t slot) {
	auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
	if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
vqprintpreviewdialog->setQPrintPreviewDialog_Done_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Done_Callback>(slot));
}
}

void QPrintPreviewDialog_Delete(QPrintPreviewDialog* self) {
    delete self;
}

