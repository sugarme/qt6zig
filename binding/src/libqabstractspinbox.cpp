#include <QAbstractSpinBox>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QKeyEvent>
#include <QLineEdit>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionSpinBox>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qabstractspinbox.h>
#include "libqabstractspinbox.h"
#include "libqabstractspinbox.hxx"

QAbstractSpinBox* QAbstractSpinBox_new(QWidget* parent) {
	 return new VirtualQAbstractSpinBox(parent);
}

QAbstractSpinBox* QAbstractSpinBox_new2() {
	 return new VirtualQAbstractSpinBox();
}

libqt_string QAbstractSpinBox_Tr(const char* s) {
	QString _ret = QAbstractSpinBox::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QAbstractSpinBox_ButtonSymbols(const QAbstractSpinBox* self) {
	return self->buttonSymbols();
}

void QAbstractSpinBox_SetButtonSymbols(QAbstractSpinBox* self, int bs) {
	self->setButtonSymbols(static_cast<QAbstractSpinBox::ButtonSymbols>(bs));
}

void QAbstractSpinBox_SetCorrectionMode(QAbstractSpinBox* self, int cm) {
	self->setCorrectionMode(static_cast<QAbstractSpinBox::CorrectionMode>(cm));
}

int QAbstractSpinBox_CorrectionMode(const QAbstractSpinBox* self) {
	return self->correctionMode();
}

bool QAbstractSpinBox_HasAcceptableInput(const QAbstractSpinBox* self) {
	return self->hasAcceptableInput();
}

libqt_string QAbstractSpinBox_Text(const QAbstractSpinBox* self) {
	QString _ret = self->text();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractSpinBox_SpecialValueText(const QAbstractSpinBox* self) {
	QString _ret = self->specialValueText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractSpinBox_SetSpecialValueText(QAbstractSpinBox* self, const libqt_string txt) {
	self->setSpecialValueText(QString::fromUtf8(txt.data, txt.len));
}

bool QAbstractSpinBox_Wrapping(const QAbstractSpinBox* self) {
	return self->wrapping();
}

void QAbstractSpinBox_SetWrapping(QAbstractSpinBox* self, bool w) {
	self->setWrapping(w);
}

void QAbstractSpinBox_SetReadOnly(QAbstractSpinBox* self, bool r) {
	self->setReadOnly(r);
}

bool QAbstractSpinBox_IsReadOnly(const QAbstractSpinBox* self) {
	return self->isReadOnly();
}

void QAbstractSpinBox_SetKeyboardTracking(QAbstractSpinBox* self, bool kt) {
	self->setKeyboardTracking(kt);
}

bool QAbstractSpinBox_KeyboardTracking(const QAbstractSpinBox* self) {
	return self->keyboardTracking();
}

void QAbstractSpinBox_SetAlignment(QAbstractSpinBox* self, int flag) {
	self->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(flag));
}

int QAbstractSpinBox_Alignment(const QAbstractSpinBox* self) {
	return self->alignment();
}

void QAbstractSpinBox_SetFrame(QAbstractSpinBox* self, bool frame) {
	self->setFrame(frame);
}

bool QAbstractSpinBox_HasFrame(const QAbstractSpinBox* self) {
	return self->hasFrame();
}

void QAbstractSpinBox_SetAccelerated(QAbstractSpinBox* self, bool on) {
	self->setAccelerated(on);
}

bool QAbstractSpinBox_IsAccelerated(const QAbstractSpinBox* self) {
	return self->isAccelerated();
}

void QAbstractSpinBox_SetGroupSeparatorShown(QAbstractSpinBox* self, bool shown) {
	self->setGroupSeparatorShown(shown);
}

bool QAbstractSpinBox_IsGroupSeparatorShown(const QAbstractSpinBox* self) {
	return self->isGroupSeparatorShown();
}

QSize* QAbstractSpinBox_SizeHint(const QAbstractSpinBox* self) {
	return new QSize(self->sizeHint());
}

QSize* QAbstractSpinBox_MinimumSizeHint(const QAbstractSpinBox* self) {
	return new QSize(self->minimumSizeHint());
}

void QAbstractSpinBox_InterpretText(QAbstractSpinBox* self) {
	self->interpretText();
}

bool QAbstractSpinBox_Event(QAbstractSpinBox* self, QEvent* event) {
	return self->event(event);
}

QVariant* QAbstractSpinBox_InputMethodQuery(const QAbstractSpinBox* self, int param1) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

int QAbstractSpinBox_Validate(const QAbstractSpinBox* self, libqt_string input, int* pos) {
	return self->validate(QString::fromUtf8(input.data, input.len), *pos);
}

void QAbstractSpinBox_Fixup(const QAbstractSpinBox* self, libqt_string input) {
	self->fixup(QString::fromUtf8(input.data, input.len));
}

void QAbstractSpinBox_StepBy(QAbstractSpinBox* self, int steps) {
	self->stepBy(steps);
}

void QAbstractSpinBox_StepUp(QAbstractSpinBox* self) {
	self->stepUp();
}

void QAbstractSpinBox_StepDown(QAbstractSpinBox* self) {
	self->stepDown();
}

void QAbstractSpinBox_SelectAll(QAbstractSpinBox* self) {
	self->selectAll();
}

void QAbstractSpinBox_Clear(QAbstractSpinBox* self) {
	self->clear();
}

void QAbstractSpinBox_EditingFinished(QAbstractSpinBox* self) {
	self->editingFinished();
}

void QAbstractSpinBox_Connect_EditingFinished(QAbstractSpinBox* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSpinBox*) = reinterpret_cast<void (*)(QAbstractSpinBox*)>(slot);
    QAbstractSpinBox::connect(self, &QAbstractSpinBox::editingFinished, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QAbstractSpinBox_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractSpinBox::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractSpinBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractSpinBox::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QAbstractSpinBox_QBaseSizeHint(const QAbstractSpinBox* self) {
	auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_SizeHint_IsBase(true);
	return new QSize(vqabstractspinbox->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnSizeHint(const QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_SizeHint_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QAbstractSpinBox_QBaseMinimumSizeHint(const QAbstractSpinBox* self) {
	auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_MinimumSizeHint_IsBase(true);
	return new QSize(vqabstractspinbox->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMinimumSizeHint(const QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MinimumSizeHint_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractSpinBox_QBaseEvent(QAbstractSpinBox* self, QEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_Event_IsBase(true);
	return vqabstractspinbox->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnEvent(QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_Event_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Event_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QAbstractSpinBox_QBaseInputMethodQuery(const QAbstractSpinBox* self, int param1) {
	auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_InputMethodQuery_IsBase(true);
	return new QVariant(vqabstractspinbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnInputMethodQuery(const QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_InputMethodQuery_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_InputMethodQuery_Callback>(slot));
}
}

// Base class handler implementation
int QAbstractSpinBox_QBaseValidate(const QAbstractSpinBox* self, libqt_string input, int* pos) {
	auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_Validate_IsBase(true);
	return vqabstractspinbox->validate(QString::fromUtf8(input.data, input.len), *pos);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnValidate(const QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_Validate_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Validate_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractSpinBox_QBaseFixup(const QAbstractSpinBox* self, libqt_string input) {
	auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_Fixup_IsBase(true);
	vqabstractspinbox->fixup(QString::fromUtf8(input.data, input.len));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnFixup(const QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_Fixup_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Fixup_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractSpinBox_QBaseStepBy(QAbstractSpinBox* self, int steps) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_StepBy_IsBase(true);
	vqabstractspinbox->stepBy(steps);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnStepBy(QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_StepBy_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_StepBy_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractSpinBox_QBaseClear(QAbstractSpinBox* self) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_Clear_IsBase(true);
	vqabstractspinbox->clear();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnClear(QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_Clear_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Clear_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSpinBox_ResizeEvent(QAbstractSpinBox* self, QResizeEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
	vqabstractspinbox->resizeEvent(event);
	} else {
	self->QAbstractSpinBox::resizeEvent(event);
}
}

// Base class handler implementation
void QAbstractSpinBox_QBaseResizeEvent(QAbstractSpinBox* self, QResizeEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_ResizeEvent_IsBase(true);
	vqabstractspinbox->resizeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnResizeEvent(QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_ResizeEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSpinBox_KeyPressEvent(QAbstractSpinBox* self, QKeyEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
	vqabstractspinbox->keyPressEvent(event);
	} else {
	self->QAbstractSpinBox::keyPressEvent(event);
}
}

// Base class handler implementation
void QAbstractSpinBox_QBaseKeyPressEvent(QAbstractSpinBox* self, QKeyEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_KeyPressEvent_IsBase(true);
	vqabstractspinbox->keyPressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnKeyPressEvent(QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_KeyPressEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSpinBox_KeyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
	vqabstractspinbox->keyReleaseEvent(event);
	} else {
	self->QAbstractSpinBox::keyReleaseEvent(event);
}
}

// Base class handler implementation
void QAbstractSpinBox_QBaseKeyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_KeyReleaseEvent_IsBase(true);
	vqabstractspinbox->keyReleaseEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnKeyReleaseEvent(QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_KeyReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSpinBox_WheelEvent(QAbstractSpinBox* self, QWheelEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
	vqabstractspinbox->wheelEvent(event);
	} else {
	self->QAbstractSpinBox::wheelEvent(event);
}
}

// Base class handler implementation
void QAbstractSpinBox_QBaseWheelEvent(QAbstractSpinBox* self, QWheelEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_WheelEvent_IsBase(true);
	vqabstractspinbox->wheelEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnWheelEvent(QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_WheelEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_WheelEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSpinBox_FocusInEvent(QAbstractSpinBox* self, QFocusEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
	vqabstractspinbox->focusInEvent(event);
	} else {
	self->QAbstractSpinBox::focusInEvent(event);
}
}

// Base class handler implementation
void QAbstractSpinBox_QBaseFocusInEvent(QAbstractSpinBox* self, QFocusEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_FocusInEvent_IsBase(true);
	vqabstractspinbox->focusInEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnFocusInEvent(QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_FocusInEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_FocusInEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSpinBox_FocusOutEvent(QAbstractSpinBox* self, QFocusEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
	vqabstractspinbox->focusOutEvent(event);
	} else {
	self->QAbstractSpinBox::focusOutEvent(event);
}
}

// Base class handler implementation
void QAbstractSpinBox_QBaseFocusOutEvent(QAbstractSpinBox* self, QFocusEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_FocusOutEvent_IsBase(true);
	vqabstractspinbox->focusOutEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnFocusOutEvent(QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_FocusOutEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_FocusOutEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSpinBox_ContextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
	vqabstractspinbox->contextMenuEvent(event);
	} else {
	self->QAbstractSpinBox::contextMenuEvent(event);
}
}

// Base class handler implementation
void QAbstractSpinBox_QBaseContextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_ContextMenuEvent_IsBase(true);
	vqabstractspinbox->contextMenuEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnContextMenuEvent(QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ContextMenuEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSpinBox_ChangeEvent(QAbstractSpinBox* self, QEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
	vqabstractspinbox->changeEvent(event);
	} else {
	self->QAbstractSpinBox::changeEvent(event);
}
}

// Base class handler implementation
void QAbstractSpinBox_QBaseChangeEvent(QAbstractSpinBox* self, QEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_ChangeEvent_IsBase(true);
	vqabstractspinbox->changeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnChangeEvent(QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_ChangeEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSpinBox_CloseEvent(QAbstractSpinBox* self, QCloseEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
	vqabstractspinbox->closeEvent(event);
	} else {
	self->QAbstractSpinBox::closeEvent(event);
}
}

// Base class handler implementation
void QAbstractSpinBox_QBaseCloseEvent(QAbstractSpinBox* self, QCloseEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_CloseEvent_IsBase(true);
	vqabstractspinbox->closeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnCloseEvent(QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_CloseEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_CloseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSpinBox_HideEvent(QAbstractSpinBox* self, QHideEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
	vqabstractspinbox->hideEvent(event);
	} else {
	self->QAbstractSpinBox::hideEvent(event);
}
}

// Base class handler implementation
void QAbstractSpinBox_QBaseHideEvent(QAbstractSpinBox* self, QHideEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_HideEvent_IsBase(true);
	vqabstractspinbox->hideEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnHideEvent(QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_HideEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_HideEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSpinBox_MousePressEvent(QAbstractSpinBox* self, QMouseEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
	vqabstractspinbox->mousePressEvent(event);
	} else {
	self->QAbstractSpinBox::mousePressEvent(event);
}
}

// Base class handler implementation
void QAbstractSpinBox_QBaseMousePressEvent(QAbstractSpinBox* self, QMouseEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_MousePressEvent_IsBase(true);
	vqabstractspinbox->mousePressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMousePressEvent(QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_MousePressEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSpinBox_MouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
	vqabstractspinbox->mouseReleaseEvent(event);
	} else {
	self->QAbstractSpinBox::mouseReleaseEvent(event);
}
}

// Base class handler implementation
void QAbstractSpinBox_QBaseMouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_MouseReleaseEvent_IsBase(true);
	vqabstractspinbox->mouseReleaseEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMouseReleaseEvent(QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSpinBox_MouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
	vqabstractspinbox->mouseMoveEvent(event);
	} else {
	self->QAbstractSpinBox::mouseMoveEvent(event);
}
}

// Base class handler implementation
void QAbstractSpinBox_QBaseMouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_MouseMoveEvent_IsBase(true);
	vqabstractspinbox->mouseMoveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMouseMoveEvent(QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSpinBox_TimerEvent(QAbstractSpinBox* self, QTimerEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
	vqabstractspinbox->timerEvent(event);
	} else {
	self->QAbstractSpinBox::timerEvent(event);
}
}

// Base class handler implementation
void QAbstractSpinBox_QBaseTimerEvent(QAbstractSpinBox* self, QTimerEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_TimerEvent_IsBase(true);
	vqabstractspinbox->timerEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnTimerEvent(QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_TimerEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSpinBox_PaintEvent(QAbstractSpinBox* self, QPaintEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
	vqabstractspinbox->paintEvent(event);
	} else {
	self->QAbstractSpinBox::paintEvent(event);
}
}

// Base class handler implementation
void QAbstractSpinBox_QBasePaintEvent(QAbstractSpinBox* self, QPaintEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_PaintEvent_IsBase(true);
	vqabstractspinbox->paintEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnPaintEvent(QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_PaintEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSpinBox_ShowEvent(QAbstractSpinBox* self, QShowEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
	vqabstractspinbox->showEvent(event);
	} else {
	self->QAbstractSpinBox::showEvent(event);
}
}

// Base class handler implementation
void QAbstractSpinBox_QBaseShowEvent(QAbstractSpinBox* self, QShowEvent* event) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_ShowEvent_IsBase(true);
	vqabstractspinbox->showEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnShowEvent(QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_ShowEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ShowEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSpinBox_InitStyleOption(const QAbstractSpinBox* self, QStyleOptionSpinBox* option) {
	auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
	vqabstractspinbox->initStyleOption(option);
	} else {
	self->QAbstractSpinBox::initStyleOption(option);
}
}

// Base class handler implementation
void QAbstractSpinBox_QBaseInitStyleOption(const QAbstractSpinBox* self, QStyleOptionSpinBox* option) {
	auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_InitStyleOption_IsBase(true);
	vqabstractspinbox->initStyleOption(option);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnInitStyleOption(const QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_InitStyleOption_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_InitStyleOption_Callback>(slot));
}
}

// Derived class handler implementation
int QAbstractSpinBox_StepEnabled(const QAbstractSpinBox* self) {
	auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
	return vqabstractspinbox->stepEnabled();
	} else {
	return self->QAbstractSpinBox::stepEnabled();
}
}

// Base class handler implementation
int QAbstractSpinBox_QBaseStepEnabled(const QAbstractSpinBox* self) {
	auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_StepEnabled_IsBase(true);
	return vqabstractspinbox->stepEnabled();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnStepEnabled(const QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_StepEnabled_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_StepEnabled_Callback>(slot));
}
}

// Derived class handler implementation
QLineEdit* QAbstractSpinBox_LineEdit(const QAbstractSpinBox* self) {
	auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
	return vqabstractspinbox->lineEdit();
	} else {
	return self->QAbstractSpinBox::lineEdit();
}
}

// Base class handler implementation
QLineEdit* QAbstractSpinBox_QBaseLineEdit(const QAbstractSpinBox* self) {
	auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_LineEdit_IsBase(true);
	return vqabstractspinbox->lineEdit();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnLineEdit(const QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<const VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_LineEdit_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_LineEdit_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSpinBox_SetLineEdit(QAbstractSpinBox* self, QLineEdit* edit) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
	vqabstractspinbox->setLineEdit(edit);
	} else {
	self->QAbstractSpinBox::setLineEdit(edit);
}
}

// Base class handler implementation
void QAbstractSpinBox_QBaseSetLineEdit(QAbstractSpinBox* self, QLineEdit* edit) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_SetLineEdit_IsBase(true);
	vqabstractspinbox->setLineEdit(edit);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnSetLineEdit(QAbstractSpinBox* self, intptr_t slot) {
	auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self);
	if (vqabstractspinbox && vqabstractspinbox->isVirtualQAbstractSpinBox) {
vqabstractspinbox->setQAbstractSpinBox_SetLineEdit_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_SetLineEdit_Callback>(slot));
}
}

void QAbstractSpinBox_Delete(QAbstractSpinBox* self) {
    delete self;
}

