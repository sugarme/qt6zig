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

// Derived class handler implementation
void QAbstractButton_PaintEvent(QAbstractButton* self, QPaintEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
	vqabstractbutton->paintEvent(e);
	} else {
	self->QAbstractButton::paintEvent(e);
}
}

// Base class handler implementation
void QAbstractButton_QBasePaintEvent(QAbstractButton* self, QPaintEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_PaintEvent_IsBase(true);
	vqabstractbutton->paintEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnPaintEvent(QAbstractButton* self, intptr_t slot) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_PaintEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QAbstractButton_HitButton(const QAbstractButton* self, const QPoint* pos) {
	auto* vqabstractbutton = dynamic_cast<const VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
	return vqabstractbutton->hitButton(*pos);
	} else {
	return self->QAbstractButton::hitButton(*pos);
}
}

// Base class handler implementation
bool QAbstractButton_QBaseHitButton(const QAbstractButton* self, const QPoint* pos) {
	auto* vqabstractbutton = dynamic_cast<const VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_HitButton_IsBase(true);
	return vqabstractbutton->hitButton(*pos);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnHitButton(const QAbstractButton* self, intptr_t slot) {
	auto* vqabstractbutton = dynamic_cast<const VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_HitButton_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_HitButton_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractButton_CheckStateSet(QAbstractButton* self) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
	vqabstractbutton->checkStateSet();
	} else {
	self->QAbstractButton::checkStateSet();
}
}

// Base class handler implementation
void QAbstractButton_QBaseCheckStateSet(QAbstractButton* self) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_CheckStateSet_IsBase(true);
	vqabstractbutton->checkStateSet();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnCheckStateSet(QAbstractButton* self, intptr_t slot) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_CheckStateSet_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_CheckStateSet_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractButton_NextCheckState(QAbstractButton* self) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
	vqabstractbutton->nextCheckState();
	} else {
	self->QAbstractButton::nextCheckState();
}
}

// Base class handler implementation
void QAbstractButton_QBaseNextCheckState(QAbstractButton* self) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_NextCheckState_IsBase(true);
	vqabstractbutton->nextCheckState();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnNextCheckState(QAbstractButton* self, intptr_t slot) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_NextCheckState_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_NextCheckState_Callback>(slot));
}
}

// Derived class handler implementation
bool QAbstractButton_Event(QAbstractButton* self, QEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
	return vqabstractbutton->event(e);
	} else {
	return self->QAbstractButton::event(e);
}
}

// Base class handler implementation
bool QAbstractButton_QBaseEvent(QAbstractButton* self, QEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_Event_IsBase(true);
	return vqabstractbutton->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnEvent(QAbstractButton* self, intptr_t slot) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_Event_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractButton_KeyPressEvent(QAbstractButton* self, QKeyEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
	vqabstractbutton->keyPressEvent(e);
	} else {
	self->QAbstractButton::keyPressEvent(e);
}
}

// Base class handler implementation
void QAbstractButton_QBaseKeyPressEvent(QAbstractButton* self, QKeyEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_KeyPressEvent_IsBase(true);
	vqabstractbutton->keyPressEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnKeyPressEvent(QAbstractButton* self, intptr_t slot) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_KeyPressEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractButton_KeyReleaseEvent(QAbstractButton* self, QKeyEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
	vqabstractbutton->keyReleaseEvent(e);
	} else {
	self->QAbstractButton::keyReleaseEvent(e);
}
}

// Base class handler implementation
void QAbstractButton_QBaseKeyReleaseEvent(QAbstractButton* self, QKeyEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_KeyReleaseEvent_IsBase(true);
	vqabstractbutton->keyReleaseEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnKeyReleaseEvent(QAbstractButton* self, intptr_t slot) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_KeyReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractButton_MousePressEvent(QAbstractButton* self, QMouseEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
	vqabstractbutton->mousePressEvent(e);
	} else {
	self->QAbstractButton::mousePressEvent(e);
}
}

// Base class handler implementation
void QAbstractButton_QBaseMousePressEvent(QAbstractButton* self, QMouseEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_MousePressEvent_IsBase(true);
	vqabstractbutton->mousePressEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMousePressEvent(QAbstractButton* self, intptr_t slot) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_MousePressEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractButton_MouseReleaseEvent(QAbstractButton* self, QMouseEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
	vqabstractbutton->mouseReleaseEvent(e);
	} else {
	self->QAbstractButton::mouseReleaseEvent(e);
}
}

// Base class handler implementation
void QAbstractButton_QBaseMouseReleaseEvent(QAbstractButton* self, QMouseEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_MouseReleaseEvent_IsBase(true);
	vqabstractbutton->mouseReleaseEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMouseReleaseEvent(QAbstractButton* self, intptr_t slot) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractButton_MouseMoveEvent(QAbstractButton* self, QMouseEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
	vqabstractbutton->mouseMoveEvent(e);
	} else {
	self->QAbstractButton::mouseMoveEvent(e);
}
}

// Base class handler implementation
void QAbstractButton_QBaseMouseMoveEvent(QAbstractButton* self, QMouseEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_MouseMoveEvent_IsBase(true);
	vqabstractbutton->mouseMoveEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMouseMoveEvent(QAbstractButton* self, intptr_t slot) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_MouseMoveEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractButton_FocusInEvent(QAbstractButton* self, QFocusEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
	vqabstractbutton->focusInEvent(e);
	} else {
	self->QAbstractButton::focusInEvent(e);
}
}

// Base class handler implementation
void QAbstractButton_QBaseFocusInEvent(QAbstractButton* self, QFocusEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_FocusInEvent_IsBase(true);
	vqabstractbutton->focusInEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnFocusInEvent(QAbstractButton* self, intptr_t slot) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_FocusInEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_FocusInEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractButton_FocusOutEvent(QAbstractButton* self, QFocusEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
	vqabstractbutton->focusOutEvent(e);
	} else {
	self->QAbstractButton::focusOutEvent(e);
}
}

// Base class handler implementation
void QAbstractButton_QBaseFocusOutEvent(QAbstractButton* self, QFocusEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_FocusOutEvent_IsBase(true);
	vqabstractbutton->focusOutEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnFocusOutEvent(QAbstractButton* self, intptr_t slot) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_FocusOutEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_FocusOutEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractButton_ChangeEvent(QAbstractButton* self, QEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
	vqabstractbutton->changeEvent(e);
	} else {
	self->QAbstractButton::changeEvent(e);
}
}

// Base class handler implementation
void QAbstractButton_QBaseChangeEvent(QAbstractButton* self, QEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_ChangeEvent_IsBase(true);
	vqabstractbutton->changeEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnChangeEvent(QAbstractButton* self, intptr_t slot) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_ChangeEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractButton_TimerEvent(QAbstractButton* self, QTimerEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
	vqabstractbutton->timerEvent(e);
	} else {
	self->QAbstractButton::timerEvent(e);
}
}

// Base class handler implementation
void QAbstractButton_QBaseTimerEvent(QAbstractButton* self, QTimerEvent* e) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_TimerEvent_IsBase(true);
	vqabstractbutton->timerEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnTimerEvent(QAbstractButton* self, intptr_t slot) {
	auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
	if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
vqabstractbutton->setQAbstractButton_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_TimerEvent_Callback>(slot));
}
}

void QAbstractButton_Delete(QAbstractButton* self) {
    delete self;
}

