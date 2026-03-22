#include <QAbstractButton>
#include <QButtonGroup>
#include <QEvent>
#include <QFocusEvent>
#include <QIcon>
#include <QKeyEvent>
#include <QKeySequence>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPoint>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTimerEvent>
#include <QWidget>
#include <qabstractbutton.h>
#include "libqabstractbutton.h"
#include "libqabstractbutton.hxx"

QAbstractButton* QAbstractButton_new(QWidget* parent) {
	 return new VirtualQAbstractButton(parent);
}

QAbstractButton* QAbstractButton_new2() {
	 return new VirtualQAbstractButton();
}

libqt_string QAbstractButton_Tr(const char* s) {
	QString _ret = QAbstractButton::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractButton_SetText(QAbstractButton* self, const libqt_string text) {
	self->setText(QString::fromUtf8(text.data, text.len));
}

libqt_string QAbstractButton_Text(const QAbstractButton* self) {
	QString _ret = self->text();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractButton_SetIcon(QAbstractButton* self, const QIcon* icon) {
	self->setIcon(*icon);
}

QIcon* QAbstractButton_Icon(const QAbstractButton* self) {
	return new QIcon(self->icon());
}

QSize* QAbstractButton_IconSize(const QAbstractButton* self) {
	return new QSize(self->iconSize());
}

void QAbstractButton_SetShortcut(QAbstractButton* self, const QKeySequence* key) {
	self->setShortcut(*key);
}

QKeySequence* QAbstractButton_Shortcut(const QAbstractButton* self) {
	return new QKeySequence(self->shortcut());
}

void QAbstractButton_SetCheckable(QAbstractButton* self, bool checkable) {
	self->setCheckable(checkable);
}

bool QAbstractButton_IsCheckable(const QAbstractButton* self) {
	return self->isCheckable();
}

bool QAbstractButton_IsChecked(const QAbstractButton* self) {
	return self->isChecked();
}

void QAbstractButton_SetDown(QAbstractButton* self, bool down) {
	self->setDown(down);
}

bool QAbstractButton_IsDown(const QAbstractButton* self) {
	return self->isDown();
}

void QAbstractButton_SetAutoRepeat(QAbstractButton* self, bool autoRepeat) {
	self->setAutoRepeat(autoRepeat);
}

bool QAbstractButton_AutoRepeat(const QAbstractButton* self) {
	return self->autoRepeat();
}

void QAbstractButton_SetAutoRepeatDelay(QAbstractButton* self, int autoRepeatDelay) {
	self->setAutoRepeatDelay(autoRepeatDelay);
}

int QAbstractButton_AutoRepeatDelay(const QAbstractButton* self) {
	return self->autoRepeatDelay();
}

void QAbstractButton_SetAutoRepeatInterval(QAbstractButton* self, int autoRepeatInterval) {
	self->setAutoRepeatInterval(autoRepeatInterval);
}

int QAbstractButton_AutoRepeatInterval(const QAbstractButton* self) {
	return self->autoRepeatInterval();
}

void QAbstractButton_SetAutoExclusive(QAbstractButton* self, bool autoExclusive) {
	self->setAutoExclusive(autoExclusive);
}

bool QAbstractButton_AutoExclusive(const QAbstractButton* self) {
	return self->autoExclusive();
}

QButtonGroup* QAbstractButton_Group(const QAbstractButton* self) {
	return self->group();
}

void QAbstractButton_SetIconSize(QAbstractButton* self, const QSize* size) {
	self->setIconSize(*size);
}

void QAbstractButton_AnimateClick(QAbstractButton* self) {
	self->animateClick();
}

void QAbstractButton_Click(QAbstractButton* self) {
	self->click();
}

void QAbstractButton_Toggle(QAbstractButton* self) {
	self->toggle();
}

void QAbstractButton_SetChecked(QAbstractButton* self, bool checked) {
	self->setChecked(checked);
}

void QAbstractButton_Pressed(QAbstractButton* self) {
	self->pressed();
}

void QAbstractButton_Connect_Pressed(QAbstractButton* self, intptr_t slot) {
    void (*slotFunc)(QAbstractButton*) = reinterpret_cast<void (*)(QAbstractButton*)>(slot);
    QAbstractButton::connect(self, &QAbstractButton::pressed, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractButton_Released(QAbstractButton* self) {
	self->released();
}

void QAbstractButton_Connect_Released(QAbstractButton* self, intptr_t slot) {
    void (*slotFunc)(QAbstractButton*) = reinterpret_cast<void (*)(QAbstractButton*)>(slot);
    QAbstractButton::connect(self, &QAbstractButton::released, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractButton_Clicked(QAbstractButton* self) {
	self->clicked();
}

void QAbstractButton_Connect_Clicked(QAbstractButton* self, intptr_t slot) {
    void (*slotFunc)(QAbstractButton*) = reinterpret_cast<void (*)(QAbstractButton*)>(slot);
    QAbstractButton::connect(self, &QAbstractButton::clicked, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractButton_Toggled(QAbstractButton* self, bool checked) {
	self->toggled(checked);
}

void QAbstractButton_Connect_Toggled(QAbstractButton* self, intptr_t slot) {
    void (*slotFunc)(QAbstractButton*, bool) = reinterpret_cast<void (*)(QAbstractButton*, bool)>(slot);
    QAbstractButton::connect(self, &QAbstractButton::toggled, [self, slotFunc](bool checked) {
	slotFunc(self, checked);
    });
}

libqt_string QAbstractButton_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractButton::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractButton_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractButton::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractButton_Clicked1(QAbstractButton* self, bool checked) {
	self->clicked(checked);
}

void QAbstractButton_Connect_Clicked1(QAbstractButton* self, intptr_t slot) {
    void (*slotFunc)(QAbstractButton*, bool) = reinterpret_cast<void (*)(QAbstractButton*, bool)>(slot);
    QAbstractButton::connect(self, &QAbstractButton::clicked, [self, slotFunc](bool checked) {
	slotFunc(self, checked);
    });
}

void QAbstractButton_Delete(QAbstractButton* self) {
    delete self;
}

