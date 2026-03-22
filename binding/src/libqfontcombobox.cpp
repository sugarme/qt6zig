#include <QComboBox>
#include <QEvent>
#include <QFont>
#include <QFontComboBox>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <qfontcombobox.h>
#include "libqfontcombobox.h"
#include "libqfontcombobox.hxx"

QFontComboBox* QFontComboBox_new(QWidget* parent) {
	 return new VirtualQFontComboBox(parent);
}

QFontComboBox* QFontComboBox_new2() {
	 return new VirtualQFontComboBox();
}

libqt_string QFontComboBox_Tr(const char* s) {
	QString _ret = QFontComboBox::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFontComboBox_SetWritingSystem(QFontComboBox* self, int writingSystem) {
	self->setWritingSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem));
}

int QFontComboBox_WritingSystem(const QFontComboBox* self) {
	return self->writingSystem();
}

void QFontComboBox_SetFontFilters(QFontComboBox* self, int filters) {
	self->setFontFilters(static_cast<QFlags<QFontComboBox::FontFilter>>(filters));
}

int QFontComboBox_FontFilters(const QFontComboBox* self) {
	return self->fontFilters();
}

QFont* QFontComboBox_CurrentFont(const QFontComboBox* self) {
	return new QFont(self->currentFont());
}

QSize* QFontComboBox_SizeHint(const QFontComboBox* self) {
	return new QSize(self->sizeHint());
}

void QFontComboBox_SetSampleTextForSystem(QFontComboBox* self, int writingSystem, const libqt_string sampleText) {
	self->setSampleTextForSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem), QString::fromUtf8(sampleText.data, sampleText.len));
}

libqt_string QFontComboBox_SampleTextForSystem(const QFontComboBox* self, int writingSystem) {
	QString _ret = self->sampleTextForSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFontComboBox_SetSampleTextForFont(QFontComboBox* self, const libqt_string fontFamily, const libqt_string sampleText) {
	self->setSampleTextForFont(QString::fromUtf8(fontFamily.data, fontFamily.len), QString::fromUtf8(sampleText.data, sampleText.len));
}

libqt_string QFontComboBox_SampleTextForFont(const QFontComboBox* self, const libqt_string fontFamily) {
	QString _ret = self->sampleTextForFont(QString::fromUtf8(fontFamily.data, fontFamily.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFontComboBox_SetDisplayFont(QFontComboBox* self, const libqt_string fontFamily, const QFont* font) {
	self->setDisplayFont(QString::fromUtf8(fontFamily.data, fontFamily.len), *font);
}

void QFontComboBox_SetCurrentFont(QFontComboBox* self, const QFont* f) {
	self->setCurrentFont(*f);
}

void QFontComboBox_CurrentFontChanged(QFontComboBox* self, const QFont* f) {
	self->currentFontChanged(*f);
}

void QFontComboBox_Connect_CurrentFontChanged(QFontComboBox* self, intptr_t slot) {
    void (*slotFunc)(QFontComboBox*, const QFont*) = reinterpret_cast<void (*)(QFontComboBox*, const QFont*)>(slot);
    QFontComboBox::connect(self, &QFontComboBox::currentFontChanged, [self, slotFunc](const QFont& f) {
	slotFunc(self, f);
    });
}

libqt_string QFontComboBox_Tr2(const char* s, const char* c) {
	QString _ret = QFontComboBox::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFontComboBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFontComboBox::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QFontComboBox_QBaseSizeHint(const QFontComboBox* self) {
	auto* vqfontcombobox = dynamic_cast<const VirtualQFontComboBox*>(self);
	if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
vqfontcombobox->setQFontComboBox_SizeHint_IsBase(true);
	return new QSize(vqfontcombobox->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnSizeHint(const QFontComboBox* self, intptr_t slot) {
	auto* vqfontcombobox = dynamic_cast<const VirtualQFontComboBox*>(self);
	if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
vqfontcombobox->setQFontComboBox_SizeHint_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_SizeHint_Callback>(slot));
}
}

// Derived class handler implementation
bool QFontComboBox_Event(QFontComboBox* self, QEvent* e) {
	auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
	if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
	return vqfontcombobox->event(e);
	} else {
	return self->QFontComboBox::event(e);
}
}

// Base class handler implementation
bool QFontComboBox_QBaseEvent(QFontComboBox* self, QEvent* e) {
	auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
	if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
vqfontcombobox->setQFontComboBox_Event_IsBase(true);
	return vqfontcombobox->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnEvent(QFontComboBox* self, intptr_t slot) {
	auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
	if (vqfontcombobox && vqfontcombobox->isVirtualQFontComboBox) {
vqfontcombobox->setQFontComboBox_Event_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Event_Callback>(slot));
}
}

void QFontComboBox_Delete(QFontComboBox* self) {
    delete self;
}

