#include <QAction>
#include <QCompleter>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLineEdit>
#include <QMargins>
#include <QMenu>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTimerEvent>
#include <QValidator>
#include <QVariant>
#include <QWidget>
#include <qlineedit.h>
#include "libqlineedit.h"
#include "libqlineedit.hxx"

QLineEdit* QLineEdit_new(QWidget* parent) {
	 return new VirtualQLineEdit(parent);
}

QLineEdit* QLineEdit_new2() {
	 return new VirtualQLineEdit();
}

QLineEdit* QLineEdit_new3(const libqt_string param1) {
	 return new VirtualQLineEdit(QString::fromUtf8(param1.data, param1.len));
}

QLineEdit* QLineEdit_new4(const libqt_string param1, QWidget* parent) {
	 return new VirtualQLineEdit(QString::fromUtf8(param1.data, param1.len), parent);
}

libqt_string QLineEdit_Tr(const char* s) {
	QString _ret = QLineEdit::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLineEdit_Text(const QLineEdit* self) {
	QString _ret = self->text();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLineEdit_DisplayText(const QLineEdit* self) {
	QString _ret = self->displayText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLineEdit_PlaceholderText(const QLineEdit* self) {
	QString _ret = self->placeholderText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QLineEdit_SetPlaceholderText(QLineEdit* self, const libqt_string placeholderText) {
	self->setPlaceholderText(QString::fromUtf8(placeholderText.data, placeholderText.len));
}

int QLineEdit_MaxLength(const QLineEdit* self) {
	return self->maxLength();
}

void QLineEdit_SetMaxLength(QLineEdit* self, int maxLength) {
	self->setMaxLength(maxLength);
}

void QLineEdit_SetFrame(QLineEdit* self, bool frame) {
	self->setFrame(frame);
}

bool QLineEdit_HasFrame(const QLineEdit* self) {
	return self->hasFrame();
}

void QLineEdit_SetClearButtonEnabled(QLineEdit* self, bool enable) {
	self->setClearButtonEnabled(enable);
}

bool QLineEdit_IsClearButtonEnabled(const QLineEdit* self) {
	return self->isClearButtonEnabled();
}

int QLineEdit_EchoMode(const QLineEdit* self) {
	return self->echoMode();
}

void QLineEdit_SetEchoMode(QLineEdit* self, int echoMode) {
	self->setEchoMode(static_cast<QLineEdit::EchoMode>(echoMode));
}

bool QLineEdit_IsReadOnly(const QLineEdit* self) {
	return self->isReadOnly();
}

void QLineEdit_SetReadOnly(QLineEdit* self, bool readOnly) {
	self->setReadOnly(readOnly);
}

void QLineEdit_SetValidator(QLineEdit* self, const QValidator* validator) {
	self->setValidator(validator);
}

const QValidator* QLineEdit_Validator(const QLineEdit* self) {
	return self->validator();
}

void QLineEdit_SetCompleter(QLineEdit* self, QCompleter* completer) {
	self->setCompleter(completer);
}

QCompleter* QLineEdit_Completer(const QLineEdit* self) {
	return self->completer();
}

QSize* QLineEdit_SizeHint(const QLineEdit* self) {
	return new QSize(self->sizeHint());
}

QSize* QLineEdit_MinimumSizeHint(const QLineEdit* self) {
	return new QSize(self->minimumSizeHint());
}

int QLineEdit_CursorPosition(const QLineEdit* self) {
	return self->cursorPosition();
}

void QLineEdit_SetCursorPosition(QLineEdit* self, int cursorPosition) {
	self->setCursorPosition(cursorPosition);
}

int QLineEdit_CursorPositionAt(QLineEdit* self, const QPoint* pos) {
	return self->cursorPositionAt(*pos);
}

void QLineEdit_SetAlignment(QLineEdit* self, int flag) {
	self->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(flag));
}

int QLineEdit_Alignment(const QLineEdit* self) {
	return self->alignment();
}

void QLineEdit_CursorForward(QLineEdit* self, bool mark) {
	self->cursorForward(mark);
}

void QLineEdit_CursorBackward(QLineEdit* self, bool mark) {
	self->cursorBackward(mark);
}

void QLineEdit_CursorWordForward(QLineEdit* self, bool mark) {
	self->cursorWordForward(mark);
}

void QLineEdit_CursorWordBackward(QLineEdit* self, bool mark) {
	self->cursorWordBackward(mark);
}

void QLineEdit_Backspace(QLineEdit* self) {
	self->backspace();
}

void QLineEdit_Del(QLineEdit* self) {
	self->del();
}

void QLineEdit_Home(QLineEdit* self, bool mark) {
	self->home(mark);
}

void QLineEdit_End(QLineEdit* self, bool mark) {
	self->end(mark);
}

bool QLineEdit_IsModified(const QLineEdit* self) {
	return self->isModified();
}

void QLineEdit_SetModified(QLineEdit* self, bool modified) {
	self->setModified(modified);
}

void QLineEdit_SetSelection(QLineEdit* self, int param1, int param2) {
	self->setSelection(param1, param2);
}

bool QLineEdit_HasSelectedText(const QLineEdit* self) {
	return self->hasSelectedText();
}

libqt_string QLineEdit_SelectedText(const QLineEdit* self) {
	QString _ret = self->selectedText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QLineEdit_SelectionStart(const QLineEdit* self) {
	return self->selectionStart();
}

int QLineEdit_SelectionEnd(const QLineEdit* self) {
	return self->selectionEnd();
}

int QLineEdit_SelectionLength(const QLineEdit* self) {
	return self->selectionLength();
}

bool QLineEdit_IsUndoAvailable(const QLineEdit* self) {
	return self->isUndoAvailable();
}

bool QLineEdit_IsRedoAvailable(const QLineEdit* self) {
	return self->isRedoAvailable();
}

void QLineEdit_SetDragEnabled(QLineEdit* self, bool b) {
	self->setDragEnabled(b);
}

bool QLineEdit_DragEnabled(const QLineEdit* self) {
	return self->dragEnabled();
}

void QLineEdit_SetCursorMoveStyle(QLineEdit* self, int style) {
	self->setCursorMoveStyle(static_cast<Qt::CursorMoveStyle>(style));
}

int QLineEdit_CursorMoveStyle(const QLineEdit* self) {
	return self->cursorMoveStyle();
}

libqt_string QLineEdit_InputMask(const QLineEdit* self) {
	QString _ret = self->inputMask();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QLineEdit_SetInputMask(QLineEdit* self, const libqt_string inputMask) {
	self->setInputMask(QString::fromUtf8(inputMask.data, inputMask.len));
}

bool QLineEdit_HasAcceptableInput(const QLineEdit* self) {
	return self->hasAcceptableInput();
}

void QLineEdit_SetTextMargins(QLineEdit* self, int left, int top, int right, int bottom) {
	self->setTextMargins(left, top, right, bottom);
}

void QLineEdit_SetTextMargins2(QLineEdit* self, const QMargins* margins) {
	self->setTextMargins(*margins);
}

QMargins* QLineEdit_TextMargins(const QLineEdit* self) {
	return new QMargins(self->textMargins());
}

void QLineEdit_AddAction(QLineEdit* self, QAction* action, int position) {
	self->addAction(action, static_cast<QLineEdit::ActionPosition>(position));
}

QAction* QLineEdit_AddAction2(QLineEdit* self, const QIcon* icon, int position) {
	return self->addAction(*icon, static_cast<QLineEdit::ActionPosition>(position));
}

void QLineEdit_SetText(QLineEdit* self, const libqt_string text) {
	self->setText(QString::fromUtf8(text.data, text.len));
}

void QLineEdit_Clear(QLineEdit* self) {
	self->clear();
}

void QLineEdit_SelectAll(QLineEdit* self) {
	self->selectAll();
}

void QLineEdit_Undo(QLineEdit* self) {
	self->undo();
}

void QLineEdit_Redo(QLineEdit* self) {
	self->redo();
}

void QLineEdit_Cut(QLineEdit* self) {
	self->cut();
}

void QLineEdit_Copy(const QLineEdit* self) {
	self->copy();
}

void QLineEdit_Paste(QLineEdit* self) {
	self->paste();
}

void QLineEdit_Deselect(QLineEdit* self) {
	self->deselect();
}

void QLineEdit_Insert(QLineEdit* self, const libqt_string param1) {
	self->insert(QString::fromUtf8(param1.data, param1.len));
}

QMenu* QLineEdit_CreateStandardContextMenu(QLineEdit* self) {
	return self->createStandardContextMenu();
}

void QLineEdit_TextChanged(QLineEdit* self, const libqt_string param1) {
	self->textChanged(QString::fromUtf8(param1.data, param1.len));
}

void QLineEdit_Connect_TextChanged(QLineEdit* self, intptr_t slot) {
    void (*slotFunc)(QLineEdit*, const char*) = reinterpret_cast<void (*)(QLineEdit*, const char*)>(slot);
    QLineEdit::connect(self, &QLineEdit::textChanged, [self, slotFunc](const QString& param1) {
	slotFunc(self, param1);
    });
}

void QLineEdit_TextEdited(QLineEdit* self, const libqt_string param1) {
	self->textEdited(QString::fromUtf8(param1.data, param1.len));
}

void QLineEdit_Connect_TextEdited(QLineEdit* self, intptr_t slot) {
    void (*slotFunc)(QLineEdit*, const char*) = reinterpret_cast<void (*)(QLineEdit*, const char*)>(slot);
    QLineEdit::connect(self, &QLineEdit::textEdited, [self, slotFunc](const QString& param1) {
	slotFunc(self, param1);
    });
}

void QLineEdit_CursorPositionChanged(QLineEdit* self, int param1, int param2) {
	self->cursorPositionChanged(param1, param2);
}

void QLineEdit_Connect_CursorPositionChanged(QLineEdit* self, intptr_t slot) {
    void (*slotFunc)(QLineEdit*, int, int) = reinterpret_cast<void (*)(QLineEdit*, int, int)>(slot);
    QLineEdit::connect(self, &QLineEdit::cursorPositionChanged, [self, slotFunc](int param1, int param2) {
	slotFunc(self, param1, param2);
    });
}

void QLineEdit_ReturnPressed(QLineEdit* self) {
	self->returnPressed();
}

void QLineEdit_Connect_ReturnPressed(QLineEdit* self, intptr_t slot) {
    void (*slotFunc)(QLineEdit*) = reinterpret_cast<void (*)(QLineEdit*)>(slot);
    QLineEdit::connect(self, &QLineEdit::returnPressed, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QLineEdit_EditingFinished(QLineEdit* self) {
	self->editingFinished();
}

void QLineEdit_Connect_EditingFinished(QLineEdit* self, intptr_t slot) {
    void (*slotFunc)(QLineEdit*) = reinterpret_cast<void (*)(QLineEdit*)>(slot);
    QLineEdit::connect(self, &QLineEdit::editingFinished, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QLineEdit_SelectionChanged(QLineEdit* self) {
	self->selectionChanged();
}

void QLineEdit_Connect_SelectionChanged(QLineEdit* self, intptr_t slot) {
    void (*slotFunc)(QLineEdit*) = reinterpret_cast<void (*)(QLineEdit*)>(slot);
    QLineEdit::connect(self, &QLineEdit::selectionChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QLineEdit_InputRejected(QLineEdit* self) {
	self->inputRejected();
}

void QLineEdit_Connect_InputRejected(QLineEdit* self, intptr_t slot) {
    void (*slotFunc)(QLineEdit*) = reinterpret_cast<void (*)(QLineEdit*)>(slot);
    QLineEdit::connect(self, &QLineEdit::inputRejected, [self, slotFunc]() {
	slotFunc(self);
    });
}

QVariant* QLineEdit_InputMethodQuery(const QLineEdit* self, int param1) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

QVariant* QLineEdit_InputMethodQuery2(const QLineEdit* self, int property, QVariant* argument) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property), *argument));
}

void QLineEdit_TimerEvent(QLineEdit* self, QTimerEvent* param1) {
	self->timerEvent(param1);
}

bool QLineEdit_Event(QLineEdit* self, QEvent* param1) {
	return self->event(param1);
}

libqt_string QLineEdit_Tr2(const char* s, const char* c) {
	QString _ret = QLineEdit::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLineEdit_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLineEdit::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QLineEdit_CursorForward2(QLineEdit* self, bool mark, int steps) {
	self->cursorForward(mark, steps);
}

void QLineEdit_CursorBackward2(QLineEdit* self, bool mark, int steps) {
	self->cursorBackward(mark, steps);
}

// Base class handler implementation
QSize* QLineEdit_QBaseSizeHint(const QLineEdit* self) {
	auto* vqlineedit = dynamic_cast<const VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_SizeHint_IsBase(true);
	return new QSize(vqlineedit->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnSizeHint(const QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<const VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_SizeHint_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QLineEdit_QBaseMinimumSizeHint(const QLineEdit* self) {
	auto* vqlineedit = dynamic_cast<const VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_MinimumSizeHint_IsBase(true);
	return new QSize(vqlineedit->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMinimumSizeHint(const QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<const VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_MinimumSizeHint_Callback>(slot));
}
}

// Derived class handler implementation
void QLineEdit_MousePressEvent(QLineEdit* self, QMouseEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
	vqlineedit->mousePressEvent(param1);
	} else {
	self->QLineEdit::mousePressEvent(param1);
}
}

// Base class handler implementation
void QLineEdit_QBaseMousePressEvent(QLineEdit* self, QMouseEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_MousePressEvent_IsBase(true);
	vqlineedit->mousePressEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMousePressEvent(QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_MousePressEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QLineEdit_MouseMoveEvent(QLineEdit* self, QMouseEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
	vqlineedit->mouseMoveEvent(param1);
	} else {
	self->QLineEdit::mouseMoveEvent(param1);
}
}

// Base class handler implementation
void QLineEdit_QBaseMouseMoveEvent(QLineEdit* self, QMouseEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_MouseMoveEvent_IsBase(true);
	vqlineedit->mouseMoveEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMouseMoveEvent(QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QLineEdit_MouseReleaseEvent(QLineEdit* self, QMouseEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
	vqlineedit->mouseReleaseEvent(param1);
	} else {
	self->QLineEdit::mouseReleaseEvent(param1);
}
}

// Base class handler implementation
void QLineEdit_QBaseMouseReleaseEvent(QLineEdit* self, QMouseEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_MouseReleaseEvent_IsBase(true);
	vqlineedit->mouseReleaseEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMouseReleaseEvent(QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QLineEdit_MouseDoubleClickEvent(QLineEdit* self, QMouseEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
	vqlineedit->mouseDoubleClickEvent(param1);
	} else {
	self->QLineEdit::mouseDoubleClickEvent(param1);
}
}

// Base class handler implementation
void QLineEdit_QBaseMouseDoubleClickEvent(QLineEdit* self, QMouseEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_MouseDoubleClickEvent_IsBase(true);
	vqlineedit->mouseDoubleClickEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMouseDoubleClickEvent(QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_MouseDoubleClickEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QLineEdit_KeyPressEvent(QLineEdit* self, QKeyEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
	vqlineedit->keyPressEvent(param1);
	} else {
	self->QLineEdit::keyPressEvent(param1);
}
}

// Base class handler implementation
void QLineEdit_QBaseKeyPressEvent(QLineEdit* self, QKeyEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_KeyPressEvent_IsBase(true);
	vqlineedit->keyPressEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnKeyPressEvent(QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QLineEdit_KeyReleaseEvent(QLineEdit* self, QKeyEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
	vqlineedit->keyReleaseEvent(param1);
	} else {
	self->QLineEdit::keyReleaseEvent(param1);
}
}

// Base class handler implementation
void QLineEdit_QBaseKeyReleaseEvent(QLineEdit* self, QKeyEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_KeyReleaseEvent_IsBase(true);
	vqlineedit->keyReleaseEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnKeyReleaseEvent(QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_KeyReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QLineEdit_FocusInEvent(QLineEdit* self, QFocusEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
	vqlineedit->focusInEvent(param1);
	} else {
	self->QLineEdit::focusInEvent(param1);
}
}

// Base class handler implementation
void QLineEdit_QBaseFocusInEvent(QLineEdit* self, QFocusEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_FocusInEvent_IsBase(true);
	vqlineedit->focusInEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnFocusInEvent(QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_FocusInEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_FocusInEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QLineEdit_FocusOutEvent(QLineEdit* self, QFocusEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
	vqlineedit->focusOutEvent(param1);
	} else {
	self->QLineEdit::focusOutEvent(param1);
}
}

// Base class handler implementation
void QLineEdit_QBaseFocusOutEvent(QLineEdit* self, QFocusEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_FocusOutEvent_IsBase(true);
	vqlineedit->focusOutEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnFocusOutEvent(QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_FocusOutEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QLineEdit_PaintEvent(QLineEdit* self, QPaintEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
	vqlineedit->paintEvent(param1);
	} else {
	self->QLineEdit::paintEvent(param1);
}
}

// Base class handler implementation
void QLineEdit_QBasePaintEvent(QLineEdit* self, QPaintEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_PaintEvent_IsBase(true);
	vqlineedit->paintEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnPaintEvent(QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_PaintEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QLineEdit_DragEnterEvent(QLineEdit* self, QDragEnterEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
	vqlineedit->dragEnterEvent(param1);
	} else {
	self->QLineEdit::dragEnterEvent(param1);
}
}

// Base class handler implementation
void QLineEdit_QBaseDragEnterEvent(QLineEdit* self, QDragEnterEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_DragEnterEvent_IsBase(true);
	vqlineedit->dragEnterEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnDragEnterEvent(QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_DragEnterEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QLineEdit_DragMoveEvent(QLineEdit* self, QDragMoveEvent* e) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
	vqlineedit->dragMoveEvent(e);
	} else {
	self->QLineEdit::dragMoveEvent(e);
}
}

// Base class handler implementation
void QLineEdit_QBaseDragMoveEvent(QLineEdit* self, QDragMoveEvent* e) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_DragMoveEvent_IsBase(true);
	vqlineedit->dragMoveEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnDragMoveEvent(QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_DragMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QLineEdit_DragLeaveEvent(QLineEdit* self, QDragLeaveEvent* e) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
	vqlineedit->dragLeaveEvent(e);
	} else {
	self->QLineEdit::dragLeaveEvent(e);
}
}

// Base class handler implementation
void QLineEdit_QBaseDragLeaveEvent(QLineEdit* self, QDragLeaveEvent* e) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_DragLeaveEvent_IsBase(true);
	vqlineedit->dragLeaveEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnDragLeaveEvent(QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_DragLeaveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QLineEdit_DropEvent(QLineEdit* self, QDropEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
	vqlineedit->dropEvent(param1);
	} else {
	self->QLineEdit::dropEvent(param1);
}
}

// Base class handler implementation
void QLineEdit_QBaseDropEvent(QLineEdit* self, QDropEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_DropEvent_IsBase(true);
	vqlineedit->dropEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnDropEvent(QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_DropEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_DropEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QLineEdit_ChangeEvent(QLineEdit* self, QEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
	vqlineedit->changeEvent(param1);
	} else {
	self->QLineEdit::changeEvent(param1);
}
}

// Base class handler implementation
void QLineEdit_QBaseChangeEvent(QLineEdit* self, QEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_ChangeEvent_IsBase(true);
	vqlineedit->changeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnChangeEvent(QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_ChangeEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QLineEdit_ContextMenuEvent(QLineEdit* self, QContextMenuEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
	vqlineedit->contextMenuEvent(param1);
	} else {
	self->QLineEdit::contextMenuEvent(param1);
}
}

// Base class handler implementation
void QLineEdit_QBaseContextMenuEvent(QLineEdit* self, QContextMenuEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_ContextMenuEvent_IsBase(true);
	vqlineedit->contextMenuEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnContextMenuEvent(QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_ContextMenuEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QLineEdit_InputMethodEvent(QLineEdit* self, QInputMethodEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
	vqlineedit->inputMethodEvent(param1);
	} else {
	self->QLineEdit::inputMethodEvent(param1);
}
}

// Base class handler implementation
void QLineEdit_QBaseInputMethodEvent(QLineEdit* self, QInputMethodEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_InputMethodEvent_IsBase(true);
	vqlineedit->inputMethodEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnInputMethodEvent(QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_InputMethodEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QLineEdit_InitStyleOption(const QLineEdit* self, QStyleOptionFrame* option) {
	auto* vqlineedit = dynamic_cast<const VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
	vqlineedit->initStyleOption(option);
	} else {
	self->QLineEdit::initStyleOption(option);
}
}

// Base class handler implementation
void QLineEdit_QBaseInitStyleOption(const QLineEdit* self, QStyleOptionFrame* option) {
	auto* vqlineedit = dynamic_cast<const VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_InitStyleOption_IsBase(true);
	vqlineedit->initStyleOption(option);
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnInitStyleOption(const QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<const VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_InitStyleOption_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_InitStyleOption_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QLineEdit_QBaseInputMethodQuery(const QLineEdit* self, int param1) {
	auto* vqlineedit = dynamic_cast<const VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_InputMethodQuery_IsBase(true);
	return new QVariant(vqlineedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnInputMethodQuery(const QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<const VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_InputMethodQuery_Callback>(slot));
}
}

// Base class handler implementation
void QLineEdit_QBaseTimerEvent(QLineEdit* self, QTimerEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_TimerEvent_IsBase(true);
	vqlineedit->timerEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnTimerEvent(QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_TimerEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_TimerEvent_Callback>(slot));
}
}

// Base class handler implementation
bool QLineEdit_QBaseEvent(QLineEdit* self, QEvent* param1) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_Event_IsBase(true);
	return vqlineedit->event(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnEvent(QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_Event_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_Event_Callback>(slot));
}
}

// Derived class handler implementation
QRect* QLineEdit_CursorRect(const QLineEdit* self) {
	auto* vqlineedit = dynamic_cast<const VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
	return new QRect(vqlineedit->cursorRect());
	} else {
	return new QRect(self->QLineEdit::cursorRect());
}
}

// Base class handler implementation
QRect* QLineEdit_QBaseCursorRect(const QLineEdit* self) {
	auto* vqlineedit = dynamic_cast<const VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_CursorRect_IsBase(true);
	return new QRect(vqlineedit->cursorRect());
}
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnCursorRect(const QLineEdit* self, intptr_t slot) {
	auto* vqlineedit = dynamic_cast<const VirtualQLineEdit*>(self);
	if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
vqlineedit->setQLineEdit_CursorRect_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_CursorRect_Callback>(slot));
}
}

void QLineEdit_Delete(QLineEdit* self) {
    delete self;
}

