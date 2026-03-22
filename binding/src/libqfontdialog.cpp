#include <QDialog>
#include <QEvent>
#include <QFont>
#include <QFontDialog>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <qfontdialog.h>
#include "libqfontdialog.h"
#include "libqfontdialog.hxx"

QFontDialog* QFontDialog_new(QWidget* parent) {
	 return new VirtualQFontDialog(parent);
}

QFontDialog* QFontDialog_new2() {
	 return new VirtualQFontDialog();
}

QFontDialog* QFontDialog_new3(const QFont* initial) {
	 return new VirtualQFontDialog(*initial);
}

QFontDialog* QFontDialog_new4(const QFont* initial, QWidget* parent) {
	 return new VirtualQFontDialog(*initial, parent);
}

libqt_string QFontDialog_Tr(const char* s) {
	QString _ret = QFontDialog::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFontDialog_SetCurrentFont(QFontDialog* self, const QFont* font) {
	self->setCurrentFont(*font);
}

QFont* QFontDialog_CurrentFont(const QFontDialog* self) {
	return new QFont(self->currentFont());
}

QFont* QFontDialog_SelectedFont(const QFontDialog* self) {
	return new QFont(self->selectedFont());
}

void QFontDialog_SetOption(QFontDialog* self, int option) {
	self->setOption(static_cast<QFontDialog::FontDialogOption>(option));
}

bool QFontDialog_TestOption(const QFontDialog* self, int option) {
	return self->testOption(static_cast<QFontDialog::FontDialogOption>(option));
}

void QFontDialog_SetOptions(QFontDialog* self, int options) {
	self->setOptions(static_cast<QFlags<QFontDialog::FontDialogOption>>(options));
}

int QFontDialog_Options(const QFontDialog* self) {
	return self->options();
}

void QFontDialog_Open(QFontDialog* self, QObject* receiver, const char* member) {
	self->open(receiver, member);
}

void QFontDialog_SetVisible(QFontDialog* self, bool visible) {
	self->setVisible(visible);
}

QFont* QFontDialog_GetFont(bool* ok) {
	return new QFont(QFontDialog::getFont(ok));
}

QFont* QFontDialog_GetFont2(bool* ok, const QFont* initial) {
	return new QFont(QFontDialog::getFont(ok, *initial));
}

void QFontDialog_CurrentFontChanged(QFontDialog* self, const QFont* font) {
	self->currentFontChanged(*font);
}

void QFontDialog_Connect_CurrentFontChanged(QFontDialog* self, intptr_t slot) {
    void (*slotFunc)(QFontDialog*, const QFont*) = reinterpret_cast<void (*)(QFontDialog*, const QFont*)>(slot);
    QFontDialog::connect(self, &QFontDialog::currentFontChanged, [self, slotFunc](const QFont& font) {
	slotFunc(self, font);
    });
}

void QFontDialog_FontSelected(QFontDialog* self, const QFont* font) {
	self->fontSelected(*font);
}

void QFontDialog_Connect_FontSelected(QFontDialog* self, intptr_t slot) {
    void (*slotFunc)(QFontDialog*, const QFont*) = reinterpret_cast<void (*)(QFontDialog*, const QFont*)>(slot);
    QFontDialog::connect(self, &QFontDialog::fontSelected, [self, slotFunc](const QFont& font) {
	slotFunc(self, font);
    });
}

libqt_string QFontDialog_Tr2(const char* s, const char* c) {
	QString _ret = QFontDialog::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFontDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFontDialog::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFontDialog_SetOption2(QFontDialog* self, int option, bool on) {
	self->setOption(static_cast<QFontDialog::FontDialogOption>(option), on);
}

QFont* QFontDialog_GetFont22(bool* ok, QWidget* parent) {
	return new QFont(QFontDialog::getFont(ok, parent));
}

QFont* QFontDialog_GetFont3(bool* ok, const QFont* initial, QWidget* parent) {
	return new QFont(QFontDialog::getFont(ok, *initial, parent));
}

QFont* QFontDialog_GetFont4(bool* ok, const QFont* initial, QWidget* parent, const libqt_string title) {
	return new QFont(QFontDialog::getFont(ok, *initial, parent, QString::fromUtf8(title.data, title.len)));
}

QFont* QFontDialog_GetFont5(bool* ok, const QFont* initial, QWidget* parent, const libqt_string title, int options) {
	return new QFont(QFontDialog::getFont(ok, *initial, parent, QString::fromUtf8(title.data, title.len), static_cast<QFlags<QFontDialog::FontDialogOption>>(options)));
}

// Base class handler implementation
void QFontDialog_QBaseSetVisible(QFontDialog* self, bool visible) {
	auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
	if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
vqfontdialog->setQFontDialog_SetVisible_IsBase(true);
	vqfontdialog->setVisible(visible);
}
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnSetVisible(QFontDialog* self, intptr_t slot) {
	auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
	if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
vqfontdialog->setQFontDialog_SetVisible_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_SetVisible_Callback>(slot));
}
}

void QFontDialog_Delete(QFontDialog* self) {
    delete self;
}

