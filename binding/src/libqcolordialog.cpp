#include <QColor>
#include <QColorDialog>
#include <QDialog>
#include <QEvent>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qcolordialog.h>
#include "libqcolordialog.h"
#include "libqcolordialog.hxx"

QColorDialog* QColorDialog_new(QWidget* parent) {
	 return new VirtualQColorDialog(parent);
}

QColorDialog* QColorDialog_new2() {
	 return new VirtualQColorDialog();
}

QColorDialog* QColorDialog_new3(const QColor* initial) {
	 return new VirtualQColorDialog(*initial);
}

QColorDialog* QColorDialog_new4(const QColor* initial, QWidget* parent) {
	 return new VirtualQColorDialog(*initial, parent);
}

libqt_string QColorDialog_Tr(const char* s) {
	QString _ret = QColorDialog::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QColorDialog_SetCurrentColor(QColorDialog* self, const QColor* color) {
	self->setCurrentColor(*color);
}

QColor* QColorDialog_CurrentColor(const QColorDialog* self) {
	return new QColor(self->currentColor());
}

QColor* QColorDialog_SelectedColor(const QColorDialog* self) {
	return new QColor(self->selectedColor());
}

void QColorDialog_SetOption(QColorDialog* self, int option) {
	self->setOption(static_cast<QColorDialog::ColorDialogOption>(option));
}

bool QColorDialog_TestOption(const QColorDialog* self, int option) {
	return self->testOption(static_cast<QColorDialog::ColorDialogOption>(option));
}

void QColorDialog_SetOptions(QColorDialog* self, int options) {
	self->setOptions(static_cast<QFlags<QColorDialog::ColorDialogOption>>(options));
}

int QColorDialog_Options(const QColorDialog* self) {
	return self->options();
}

void QColorDialog_Open(QColorDialog* self, QObject* receiver, const char* member) {
	self->open(receiver, member);
}

void QColorDialog_SetVisible(QColorDialog* self, bool visible) {
	self->setVisible(visible);
}

QColor* QColorDialog_GetColor() {
	return new QColor(QColorDialog::getColor());
}

int QColorDialog_CustomCount() {
	return QColorDialog::customCount();
}

QColor* QColorDialog_CustomColor(int index) {
	return new QColor(QColorDialog::customColor(index));
}

void QColorDialog_SetCustomColor(int index, QColor* color) {
	QColorDialog::setCustomColor(index, *color);
}

QColor* QColorDialog_StandardColor(int index) {
	return new QColor(QColorDialog::standardColor(index));
}

void QColorDialog_SetStandardColor(int index, QColor* color) {
	QColorDialog::setStandardColor(index, *color);
}

void QColorDialog_CurrentColorChanged(QColorDialog* self, const QColor* color) {
	self->currentColorChanged(*color);
}

void QColorDialog_Connect_CurrentColorChanged(QColorDialog* self, intptr_t slot) {
    void (*slotFunc)(QColorDialog*, const QColor*) = reinterpret_cast<void (*)(QColorDialog*, const QColor*)>(slot);
    QColorDialog::connect(self, &QColorDialog::currentColorChanged, [self, slotFunc](const QColor& color) {
	slotFunc(self, color);
    });
}

void QColorDialog_ColorSelected(QColorDialog* self, const QColor* color) {
	self->colorSelected(*color);
}

void QColorDialog_Connect_ColorSelected(QColorDialog* self, intptr_t slot) {
    void (*slotFunc)(QColorDialog*, const QColor*) = reinterpret_cast<void (*)(QColorDialog*, const QColor*)>(slot);
    QColorDialog::connect(self, &QColorDialog::colorSelected, [self, slotFunc](const QColor& color) {
	slotFunc(self, color);
    });
}

libqt_string QColorDialog_Tr2(const char* s, const char* c) {
	QString _ret = QColorDialog::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QColorDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QColorDialog::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QColorDialog_SetOption2(QColorDialog* self, int option, bool on) {
	self->setOption(static_cast<QColorDialog::ColorDialogOption>(option), on);
}

QColor* QColorDialog_GetColor1(const QColor* initial) {
	return new QColor(QColorDialog::getColor(*initial));
}

QColor* QColorDialog_GetColor2(const QColor* initial, QWidget* parent) {
	return new QColor(QColorDialog::getColor(*initial, parent));
}

QColor* QColorDialog_GetColor3(const QColor* initial, QWidget* parent, const libqt_string title) {
	return new QColor(QColorDialog::getColor(*initial, parent, QString::fromUtf8(title.data, title.len)));
}

QColor* QColorDialog_GetColor4(const QColor* initial, QWidget* parent, const libqt_string title, int options) {
	return new QColor(QColorDialog::getColor(*initial, parent, QString::fromUtf8(title.data, title.len), static_cast<QFlags<QColorDialog::ColorDialogOption>>(options)));
}

// Base class handler implementation
void QColorDialog_QBaseSetVisible(QColorDialog* self, bool visible) {
	auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
	if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
vqcolordialog->setQColorDialog_SetVisible_IsBase(true);
	vqcolordialog->setVisible(visible);
}
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnSetVisible(QColorDialog* self, intptr_t slot) {
	auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
	if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
vqcolordialog->setQColorDialog_SetVisible_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_SetVisible_Callback>(slot));
}
}

// Derived class handler implementation
void QColorDialog_ChangeEvent(QColorDialog* self, QEvent* event) {
	auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
	if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
	vqcolordialog->changeEvent(event);
	} else {
	self->QColorDialog::changeEvent(event);
}
}

// Base class handler implementation
void QColorDialog_QBaseChangeEvent(QColorDialog* self, QEvent* event) {
	auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
	if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
vqcolordialog->setQColorDialog_ChangeEvent_IsBase(true);
	vqcolordialog->changeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnChangeEvent(QColorDialog* self, intptr_t slot) {
	auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
	if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
vqcolordialog->setQColorDialog_ChangeEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QColorDialog_Done(QColorDialog* self, int result) {
	auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
	if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
	vqcolordialog->done(result);
	} else {
	self->QColorDialog::done(result);
}
}

// Base class handler implementation
void QColorDialog_QBaseDone(QColorDialog* self, int result) {
	auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
	if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
vqcolordialog->setQColorDialog_Done_IsBase(true);
	vqcolordialog->done(result);
}
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnDone(QColorDialog* self, intptr_t slot) {
	auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
	if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
vqcolordialog->setQColorDialog_Done_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_Done_Callback>(slot));
}
}

void QColorDialog_Delete(QColorDialog* self) {
    delete self;
}

