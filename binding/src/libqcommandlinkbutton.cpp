#include <QCommandLinkButton>
#include <QEvent>
#include <QPaintEvent>
#include <QPushButton>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionButton>
#include <QWidget>
#include <qcommandlinkbutton.h>
#include "libqcommandlinkbutton.h"
#include "libqcommandlinkbutton.hxx"

QCommandLinkButton* QCommandLinkButton_new(QWidget* parent) {
	 return new VirtualQCommandLinkButton(parent);
}

QCommandLinkButton* QCommandLinkButton_new2() {
	 return new VirtualQCommandLinkButton();
}

QCommandLinkButton* QCommandLinkButton_new3(const libqt_string text) {
	 return new VirtualQCommandLinkButton(QString::fromUtf8(text.data, text.len));
}

QCommandLinkButton* QCommandLinkButton_new4(const libqt_string text, const libqt_string description) {
	 return new VirtualQCommandLinkButton(QString::fromUtf8(text.data, text.len), QString::fromUtf8(description.data, description.len));
}

QCommandLinkButton* QCommandLinkButton_new5(const libqt_string text, QWidget* parent) {
	 return new VirtualQCommandLinkButton(QString::fromUtf8(text.data, text.len), parent);
}

QCommandLinkButton* QCommandLinkButton_new6(const libqt_string text, const libqt_string description, QWidget* parent) {
	 return new VirtualQCommandLinkButton(QString::fromUtf8(text.data, text.len), QString::fromUtf8(description.data, description.len), parent);
}

libqt_string QCommandLinkButton_Tr(const char* s) {
	QString _ret = QCommandLinkButton::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QCommandLinkButton_Description(const QCommandLinkButton* self) {
	QString _ret = self->description();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCommandLinkButton_SetDescription(QCommandLinkButton* self, const libqt_string description) {
	self->setDescription(QString::fromUtf8(description.data, description.len));
}

QSize* QCommandLinkButton_SizeHint(const QCommandLinkButton* self) {
	return new QSize(self->sizeHint());
}

int QCommandLinkButton_HeightForWidth(const QCommandLinkButton* self, int param1) {
	return self->heightForWidth(param1);
}

QSize* QCommandLinkButton_MinimumSizeHint(const QCommandLinkButton* self) {
	return new QSize(self->minimumSizeHint());
}

void QCommandLinkButton_InitStyleOption(const QCommandLinkButton* self, QStyleOptionButton* option) {
	self->initStyleOption(option);
}

libqt_string QCommandLinkButton_Tr2(const char* s, const char* c) {
	QString _ret = QCommandLinkButton::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QCommandLinkButton_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCommandLinkButton::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QCommandLinkButton_QBaseSizeHint(const QCommandLinkButton* self) {
	auto* vqcommandlinkbutton = dynamic_cast<const VirtualQCommandLinkButton*>(self);
	if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
vqcommandlinkbutton->setQCommandLinkButton_SizeHint_IsBase(true);
	return new QSize(vqcommandlinkbutton->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnSizeHint(const QCommandLinkButton* self, intptr_t slot) {
	auto* vqcommandlinkbutton = dynamic_cast<const VirtualQCommandLinkButton*>(self);
	if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
vqcommandlinkbutton->setQCommandLinkButton_SizeHint_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
int QCommandLinkButton_QBaseHeightForWidth(const QCommandLinkButton* self, int param1) {
	auto* vqcommandlinkbutton = dynamic_cast<const VirtualQCommandLinkButton*>(self);
	if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
vqcommandlinkbutton->setQCommandLinkButton_HeightForWidth_IsBase(true);
	return vqcommandlinkbutton->heightForWidth(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnHeightForWidth(const QCommandLinkButton* self, intptr_t slot) {
	auto* vqcommandlinkbutton = dynamic_cast<const VirtualQCommandLinkButton*>(self);
	if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
vqcommandlinkbutton->setQCommandLinkButton_HeightForWidth_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_HeightForWidth_Callback>(slot));
}
}

// Base class handler implementation
QSize* QCommandLinkButton_QBaseMinimumSizeHint(const QCommandLinkButton* self) {
	auto* vqcommandlinkbutton = dynamic_cast<const VirtualQCommandLinkButton*>(self);
	if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
vqcommandlinkbutton->setQCommandLinkButton_MinimumSizeHint_IsBase(true);
	return new QSize(vqcommandlinkbutton->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnMinimumSizeHint(const QCommandLinkButton* self, intptr_t slot) {
	auto* vqcommandlinkbutton = dynamic_cast<const VirtualQCommandLinkButton*>(self);
	if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
vqcommandlinkbutton->setQCommandLinkButton_MinimumSizeHint_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_MinimumSizeHint_Callback>(slot));
}
}

// Base class handler implementation
void QCommandLinkButton_QBaseInitStyleOption(const QCommandLinkButton* self, QStyleOptionButton* option) {
	auto* vqcommandlinkbutton = dynamic_cast<const VirtualQCommandLinkButton*>(self);
	if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
vqcommandlinkbutton->setQCommandLinkButton_InitStyleOption_IsBase(true);
	vqcommandlinkbutton->initStyleOption(option);
}
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnInitStyleOption(const QCommandLinkButton* self, intptr_t slot) {
	auto* vqcommandlinkbutton = dynamic_cast<const VirtualQCommandLinkButton*>(self);
	if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
vqcommandlinkbutton->setQCommandLinkButton_InitStyleOption_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_InitStyleOption_Callback>(slot));
}
}

// Derived class handler implementation
bool QCommandLinkButton_Event(QCommandLinkButton* self, QEvent* e) {
	auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
	if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
	return vqcommandlinkbutton->event(e);
	} else {
	return self->QCommandLinkButton::event(e);
}
}

// Base class handler implementation
bool QCommandLinkButton_QBaseEvent(QCommandLinkButton* self, QEvent* e) {
	auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
	if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
vqcommandlinkbutton->setQCommandLinkButton_Event_IsBase(true);
	return vqcommandlinkbutton->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnEvent(QCommandLinkButton* self, intptr_t slot) {
	auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
	if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
vqcommandlinkbutton->setQCommandLinkButton_Event_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QCommandLinkButton_PaintEvent(QCommandLinkButton* self, QPaintEvent* param1) {
	auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
	if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
	vqcommandlinkbutton->paintEvent(param1);
	} else {
	self->QCommandLinkButton::paintEvent(param1);
}
}

// Base class handler implementation
void QCommandLinkButton_QBasePaintEvent(QCommandLinkButton* self, QPaintEvent* param1) {
	auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
	if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
vqcommandlinkbutton->setQCommandLinkButton_PaintEvent_IsBase(true);
	vqcommandlinkbutton->paintEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QCommandLinkButton_OnPaintEvent(QCommandLinkButton* self, intptr_t slot) {
	auto* vqcommandlinkbutton = dynamic_cast<VirtualQCommandLinkButton*>(self);
	if (vqcommandlinkbutton && vqcommandlinkbutton->isVirtualQCommandLinkButton) {
vqcommandlinkbutton->setQCommandLinkButton_PaintEvent_Callback(reinterpret_cast<VirtualQCommandLinkButton::QCommandLinkButton_PaintEvent_Callback>(slot));
}
}

void QCommandLinkButton_Delete(QCommandLinkButton* self) {
    delete self;
}

