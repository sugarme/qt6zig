#include <QCloseEvent>
#include <QDialog>
#include <QEvent>
#include <QLabel>
#include <QObject>
#include <QProgressBar>
#include <QProgressDialog>
#include <QPushButton>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qprogressdialog.h>
#include "libqprogressdialog.h"
#include "libqprogressdialog.hxx"

QProgressDialog* QProgressDialog_new(QWidget* parent) {
	 return new VirtualQProgressDialog(parent);
}

QProgressDialog* QProgressDialog_new2() {
	 return new VirtualQProgressDialog();
}

QProgressDialog* QProgressDialog_new3(const libqt_string labelText, const libqt_string cancelButtonText, int minimum, int maximum) {
	 return new VirtualQProgressDialog(QString::fromUtf8(labelText.data, labelText.len), QString::fromUtf8(cancelButtonText.data, cancelButtonText.len), minimum, maximum);
}

QProgressDialog* QProgressDialog_new4(QWidget* parent, int flags) {
	 return new VirtualQProgressDialog(parent, static_cast<QFlags<Qt::WindowType>>(flags));
}

QProgressDialog* QProgressDialog_new5(const libqt_string labelText, const libqt_string cancelButtonText, int minimum, int maximum, QWidget* parent) {
	 return new VirtualQProgressDialog(QString::fromUtf8(labelText.data, labelText.len), QString::fromUtf8(cancelButtonText.data, cancelButtonText.len), minimum, maximum, parent);
}

QProgressDialog* QProgressDialog_new6(const libqt_string labelText, const libqt_string cancelButtonText, int minimum, int maximum, QWidget* parent, int flags) {
	 return new VirtualQProgressDialog(QString::fromUtf8(labelText.data, labelText.len), QString::fromUtf8(cancelButtonText.data, cancelButtonText.len), minimum, maximum, parent, static_cast<QFlags<Qt::WindowType>>(flags));
}

libqt_string QProgressDialog_Tr(const char* s) {
	QString _ret = QProgressDialog::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QProgressDialog_SetLabel(QProgressDialog* self, QLabel* label) {
	self->setLabel(label);
}

void QProgressDialog_SetCancelButton(QProgressDialog* self, QPushButton* button) {
	self->setCancelButton(button);
}

void QProgressDialog_SetBar(QProgressDialog* self, QProgressBar* bar) {
	self->setBar(bar);
}

bool QProgressDialog_WasCanceled(const QProgressDialog* self) {
	return self->wasCanceled();
}

int QProgressDialog_Minimum(const QProgressDialog* self) {
	return self->minimum();
}

int QProgressDialog_Maximum(const QProgressDialog* self) {
	return self->maximum();
}

int QProgressDialog_Value(const QProgressDialog* self) {
	return self->value();
}

QSize* QProgressDialog_SizeHint(const QProgressDialog* self) {
	return new QSize(self->sizeHint());
}

libqt_string QProgressDialog_LabelText(const QProgressDialog* self) {
	QString _ret = self->labelText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QProgressDialog_MinimumDuration(const QProgressDialog* self) {
	return self->minimumDuration();
}

void QProgressDialog_SetAutoReset(QProgressDialog* self, bool reset) {
	self->setAutoReset(reset);
}

bool QProgressDialog_AutoReset(const QProgressDialog* self) {
	return self->autoReset();
}

void QProgressDialog_SetAutoClose(QProgressDialog* self, bool close) {
	self->setAutoClose(close);
}

bool QProgressDialog_AutoClose(const QProgressDialog* self) {
	return self->autoClose();
}

void QProgressDialog_Open(QProgressDialog* self, QObject* receiver, const char* member) {
	self->open(receiver, member);
}

void QProgressDialog_Cancel(QProgressDialog* self) {
	self->cancel();
}

void QProgressDialog_Reset(QProgressDialog* self) {
	self->reset();
}

void QProgressDialog_SetMaximum(QProgressDialog* self, int maximum) {
	self->setMaximum(maximum);
}

void QProgressDialog_SetMinimum(QProgressDialog* self, int minimum) {
	self->setMinimum(minimum);
}

void QProgressDialog_SetRange(QProgressDialog* self, int minimum, int maximum) {
	self->setRange(minimum, maximum);
}

void QProgressDialog_SetValue(QProgressDialog* self, int progress) {
	self->setValue(progress);
}

void QProgressDialog_SetLabelText(QProgressDialog* self, const libqt_string text) {
	self->setLabelText(QString::fromUtf8(text.data, text.len));
}

void QProgressDialog_SetCancelButtonText(QProgressDialog* self, const libqt_string text) {
	self->setCancelButtonText(QString::fromUtf8(text.data, text.len));
}

void QProgressDialog_SetMinimumDuration(QProgressDialog* self, int ms) {
	self->setMinimumDuration(ms);
}

void QProgressDialog_Canceled(QProgressDialog* self) {
	self->canceled();
}

void QProgressDialog_Connect_Canceled(QProgressDialog* self, intptr_t slot) {
    void (*slotFunc)(QProgressDialog*) = reinterpret_cast<void (*)(QProgressDialog*)>(slot);
    QProgressDialog::connect(self, &QProgressDialog::canceled, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QProgressDialog_Tr2(const char* s, const char* c) {
	QString _ret = QProgressDialog::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QProgressDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QProgressDialog::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QProgressDialog_QBaseSizeHint(const QProgressDialog* self) {
	auto* vqprogressdialog = dynamic_cast<const VirtualQProgressDialog*>(self);
	if (vqprogressdialog && vqprogressdialog->isVirtualQProgressDialog) {
vqprogressdialog->setQProgressDialog_SizeHint_IsBase(true);
	return new QSize(vqprogressdialog->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnSizeHint(const QProgressDialog* self, intptr_t slot) {
	auto* vqprogressdialog = dynamic_cast<const VirtualQProgressDialog*>(self);
	if (vqprogressdialog && vqprogressdialog->isVirtualQProgressDialog) {
vqprogressdialog->setQProgressDialog_SizeHint_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_SizeHint_Callback>(slot));
}
}

// Derived class handler implementation
void QProgressDialog_ResizeEvent(QProgressDialog* self, QResizeEvent* event) {
	auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
	if (vqprogressdialog && vqprogressdialog->isVirtualQProgressDialog) {
	vqprogressdialog->resizeEvent(event);
	} else {
	self->QProgressDialog::resizeEvent(event);
}
}

// Base class handler implementation
void QProgressDialog_QBaseResizeEvent(QProgressDialog* self, QResizeEvent* event) {
	auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
	if (vqprogressdialog && vqprogressdialog->isVirtualQProgressDialog) {
vqprogressdialog->setQProgressDialog_ResizeEvent_IsBase(true);
	vqprogressdialog->resizeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnResizeEvent(QProgressDialog* self, intptr_t slot) {
	auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
	if (vqprogressdialog && vqprogressdialog->isVirtualQProgressDialog) {
vqprogressdialog->setQProgressDialog_ResizeEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QProgressDialog_CloseEvent(QProgressDialog* self, QCloseEvent* event) {
	auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
	if (vqprogressdialog && vqprogressdialog->isVirtualQProgressDialog) {
	vqprogressdialog->closeEvent(event);
	} else {
	self->QProgressDialog::closeEvent(event);
}
}

// Base class handler implementation
void QProgressDialog_QBaseCloseEvent(QProgressDialog* self, QCloseEvent* event) {
	auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
	if (vqprogressdialog && vqprogressdialog->isVirtualQProgressDialog) {
vqprogressdialog->setQProgressDialog_CloseEvent_IsBase(true);
	vqprogressdialog->closeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnCloseEvent(QProgressDialog* self, intptr_t slot) {
	auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
	if (vqprogressdialog && vqprogressdialog->isVirtualQProgressDialog) {
vqprogressdialog->setQProgressDialog_CloseEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_CloseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QProgressDialog_ChangeEvent(QProgressDialog* self, QEvent* event) {
	auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
	if (vqprogressdialog && vqprogressdialog->isVirtualQProgressDialog) {
	vqprogressdialog->changeEvent(event);
	} else {
	self->QProgressDialog::changeEvent(event);
}
}

// Base class handler implementation
void QProgressDialog_QBaseChangeEvent(QProgressDialog* self, QEvent* event) {
	auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
	if (vqprogressdialog && vqprogressdialog->isVirtualQProgressDialog) {
vqprogressdialog->setQProgressDialog_ChangeEvent_IsBase(true);
	vqprogressdialog->changeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnChangeEvent(QProgressDialog* self, intptr_t slot) {
	auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
	if (vqprogressdialog && vqprogressdialog->isVirtualQProgressDialog) {
vqprogressdialog->setQProgressDialog_ChangeEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QProgressDialog_ShowEvent(QProgressDialog* self, QShowEvent* event) {
	auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
	if (vqprogressdialog && vqprogressdialog->isVirtualQProgressDialog) {
	vqprogressdialog->showEvent(event);
	} else {
	self->QProgressDialog::showEvent(event);
}
}

// Base class handler implementation
void QProgressDialog_QBaseShowEvent(QProgressDialog* self, QShowEvent* event) {
	auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
	if (vqprogressdialog && vqprogressdialog->isVirtualQProgressDialog) {
vqprogressdialog->setQProgressDialog_ShowEvent_IsBase(true);
	vqprogressdialog->showEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnShowEvent(QProgressDialog* self, intptr_t slot) {
	auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
	if (vqprogressdialog && vqprogressdialog->isVirtualQProgressDialog) {
vqprogressdialog->setQProgressDialog_ShowEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_ShowEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QProgressDialog_ForceShow(QProgressDialog* self) {
	auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
	if (vqprogressdialog && vqprogressdialog->isVirtualQProgressDialog) {
	vqprogressdialog->forceShow();
	} else {
	self->QProgressDialog::forceShow();
}
}

// Base class handler implementation
void QProgressDialog_QBaseForceShow(QProgressDialog* self) {
	auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
	if (vqprogressdialog && vqprogressdialog->isVirtualQProgressDialog) {
vqprogressdialog->setQProgressDialog_ForceShow_IsBase(true);
	vqprogressdialog->forceShow();
}
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnForceShow(QProgressDialog* self, intptr_t slot) {
	auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
	if (vqprogressdialog && vqprogressdialog->isVirtualQProgressDialog) {
vqprogressdialog->setQProgressDialog_ForceShow_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_ForceShow_Callback>(slot));
}
}

void QProgressDialog_Delete(QProgressDialog* self) {
    delete self;
}

