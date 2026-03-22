#include <QAbstractButton>
#include <QEvent>
#include <QFocusEvent>
#include <QIcon>
#include <QKeyEvent>
#include <QMenu>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPoint>
#include <QPushButton>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionButton>
#include <QWidget>
#include <qpushbutton.h>
#include "libqpushbutton.h"
#include "libqpushbutton.hxx"

QPushButton* QPushButton_new(QWidget* parent) {
	 return new VirtualQPushButton(parent);
}

QPushButton* QPushButton_new2() {
	 return new VirtualQPushButton();
}

QPushButton* QPushButton_new3(const libqt_string text) {
	 return new VirtualQPushButton(QString::fromUtf8(text.data, text.len));
}

QPushButton* QPushButton_new4(const QIcon* icon, const libqt_string text) {
	 return new VirtualQPushButton(*icon, QString::fromUtf8(text.data, text.len));
}

QPushButton* QPushButton_new5(const libqt_string text, QWidget* parent) {
	 return new VirtualQPushButton(QString::fromUtf8(text.data, text.len), parent);
}

QPushButton* QPushButton_new6(const QIcon* icon, const libqt_string text, QWidget* parent) {
	 return new VirtualQPushButton(*icon, QString::fromUtf8(text.data, text.len), parent);
}

libqt_string QPushButton_Tr(const char* s) {
	QString _ret = QPushButton::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSize* QPushButton_SizeHint(const QPushButton* self) {
	return new QSize(self->sizeHint());
}

QSize* QPushButton_MinimumSizeHint(const QPushButton* self) {
	return new QSize(self->minimumSizeHint());
}

bool QPushButton_AutoDefault(const QPushButton* self) {
	return self->autoDefault();
}

void QPushButton_SetAutoDefault(QPushButton* self, bool autoDefault) {
	self->setAutoDefault(autoDefault);
}

bool QPushButton_IsDefault(const QPushButton* self) {
	return self->isDefault();
}

void QPushButton_SetDefault(QPushButton* self, bool defaultVal) {
	self->setDefault(defaultVal);
}

void QPushButton_SetMenu(QPushButton* self, QMenu* menu) {
	self->setMenu(menu);
}

QMenu* QPushButton_Menu(const QPushButton* self) {
	return self->menu();
}

void QPushButton_SetFlat(QPushButton* self, bool flat) {
	self->setFlat(flat);
}

bool QPushButton_IsFlat(const QPushButton* self) {
	return self->isFlat();
}

void QPushButton_ShowMenu(QPushButton* self) {
	self->showMenu();
}

libqt_string QPushButton_Tr2(const char* s, const char* c) {
	QString _ret = QPushButton::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPushButton_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPushButton::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QPushButton_QBaseSizeHint(const QPushButton* self) {
	auto* vqpushbutton = dynamic_cast<const VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_SizeHint_IsBase(true);
	return new QSize(vqpushbutton->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnSizeHint(const QPushButton* self, intptr_t slot) {
	auto* vqpushbutton = dynamic_cast<const VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_SizeHint_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QPushButton_QBaseMinimumSizeHint(const QPushButton* self) {
	auto* vqpushbutton = dynamic_cast<const VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_MinimumSizeHint_IsBase(true);
	return new QSize(vqpushbutton->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMinimumSizeHint(const QPushButton* self, intptr_t slot) {
	auto* vqpushbutton = dynamic_cast<const VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_MinimumSizeHint_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_MinimumSizeHint_Callback>(slot));
}
}

void QPushButton_Delete(QPushButton* self) {
    delete self;
}

