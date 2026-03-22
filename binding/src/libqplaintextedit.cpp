#include <QAbstractScrollArea>
#include <QAbstractTextDocumentLayout>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__PaintContext
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMenu>
#include <QMimeData>
#include <QMouseEvent>
#include <QPagedPaintDevice>
#include <QPaintEvent>
#include <QPainter>
#include <QPlainTextDocumentLayout>
#include <QPlainTextEdit>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegularExpression>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTextBlock>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextFrame>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qplaintextedit.h>
#include "libqplaintextedit.h"
#include "libqplaintextedit.hxx"

QPlainTextEdit* QPlainTextEdit_new(QWidget* parent) {
	 return new VirtualQPlainTextEdit(parent);
}

QPlainTextEdit* QPlainTextEdit_new2() {
	 return new VirtualQPlainTextEdit();
}

QPlainTextEdit* QPlainTextEdit_new3(const libqt_string text) {
	 return new VirtualQPlainTextEdit(QString::fromUtf8(text.data, text.len));
}

QPlainTextEdit* QPlainTextEdit_new4(const libqt_string text, QWidget* parent) {
	 return new VirtualQPlainTextEdit(QString::fromUtf8(text.data, text.len), parent);
}

libqt_string QPlainTextEdit_Tr(const char* s) {
	QString _ret = QPlainTextEdit::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPlainTextEdit_SetDocument(QPlainTextEdit* self, QTextDocument* document) {
	self->setDocument(document);
}

QTextDocument* QPlainTextEdit_Document(const QPlainTextEdit* self) {
	return self->document();
}

void QPlainTextEdit_SetPlaceholderText(QPlainTextEdit* self, const libqt_string placeholderText) {
	self->setPlaceholderText(QString::fromUtf8(placeholderText.data, placeholderText.len));
}

libqt_string QPlainTextEdit_PlaceholderText(const QPlainTextEdit* self) {
	QString _ret = self->placeholderText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPlainTextEdit_SetTextCursor(QPlainTextEdit* self, const QTextCursor* cursor) {
	self->setTextCursor(*cursor);
}

QTextCursor* QPlainTextEdit_TextCursor(const QPlainTextEdit* self) {
	return new QTextCursor(self->textCursor());
}

bool QPlainTextEdit_IsReadOnly(const QPlainTextEdit* self) {
	return self->isReadOnly();
}

void QPlainTextEdit_SetReadOnly(QPlainTextEdit* self, bool ro) {
	self->setReadOnly(ro);
}

void QPlainTextEdit_SetTextInteractionFlags(QPlainTextEdit* self, int flags) {
	self->setTextInteractionFlags(static_cast<QFlags<Qt::TextInteractionFlag>>(flags));
}

int QPlainTextEdit_TextInteractionFlags(const QPlainTextEdit* self) {
	return self->textInteractionFlags();
}

void QPlainTextEdit_MergeCurrentCharFormat(QPlainTextEdit* self, const QTextCharFormat* modifier) {
	self->mergeCurrentCharFormat(*modifier);
}

void QPlainTextEdit_SetCurrentCharFormat(QPlainTextEdit* self, const QTextCharFormat* format) {
	self->setCurrentCharFormat(*format);
}

QTextCharFormat* QPlainTextEdit_CurrentCharFormat(const QPlainTextEdit* self) {
	return new QTextCharFormat(self->currentCharFormat());
}

bool QPlainTextEdit_TabChangesFocus(const QPlainTextEdit* self) {
	return self->tabChangesFocus();
}

void QPlainTextEdit_SetTabChangesFocus(QPlainTextEdit* self, bool b) {
	self->setTabChangesFocus(b);
}

void QPlainTextEdit_SetDocumentTitle(QPlainTextEdit* self, const libqt_string title) {
	self->setDocumentTitle(QString::fromUtf8(title.data, title.len));
}

libqt_string QPlainTextEdit_DocumentTitle(const QPlainTextEdit* self) {
	QString _ret = self->documentTitle();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QPlainTextEdit_IsUndoRedoEnabled(const QPlainTextEdit* self) {
	return self->isUndoRedoEnabled();
}

void QPlainTextEdit_SetUndoRedoEnabled(QPlainTextEdit* self, bool enable) {
	self->setUndoRedoEnabled(enable);
}

void QPlainTextEdit_SetMaximumBlockCount(QPlainTextEdit* self, int maximum) {
	self->setMaximumBlockCount(maximum);
}

int QPlainTextEdit_MaximumBlockCount(const QPlainTextEdit* self) {
	return self->maximumBlockCount();
}

int QPlainTextEdit_LineWrapMode(const QPlainTextEdit* self) {
	return self->lineWrapMode();
}

void QPlainTextEdit_SetLineWrapMode(QPlainTextEdit* self, int mode) {
	self->setLineWrapMode(static_cast<QTextEdit::LineWrapMode>(mode));
}

int QPlainTextEdit_WordWrapMode(const QPlainTextEdit* self) {
	return self->wordWrapMode();
}

void QPlainTextEdit_SetWordWrapMode(QPlainTextEdit* self, int policy) {
	self->setWordWrapMode(static_cast<QTextOption::WrapMode>(policy));
}

void QPlainTextEdit_SetBackgroundVisible(QPlainTextEdit* self, bool visible) {
	self->setBackgroundVisible(visible);
}

bool QPlainTextEdit_BackgroundVisible(const QPlainTextEdit* self) {
	return self->backgroundVisible();
}

void QPlainTextEdit_SetCenterOnScroll(QPlainTextEdit* self, bool enabled) {
	self->setCenterOnScroll(enabled);
}

bool QPlainTextEdit_CenterOnScroll(const QPlainTextEdit* self) {
	return self->centerOnScroll();
}

bool QPlainTextEdit_Find(QPlainTextEdit* self, const libqt_string exp) {
	return self->find(QString::fromUtf8(exp.data, exp.len));
}

bool QPlainTextEdit_Find2(QPlainTextEdit* self, const QRegularExpression* exp) {
	return self->find(*exp);
}

libqt_string QPlainTextEdit_ToPlainText(const QPlainTextEdit* self) {
	QString _ret = self->toPlainText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPlainTextEdit_EnsureCursorVisible(QPlainTextEdit* self) {
	self->ensureCursorVisible();
}

QVariant* QPlainTextEdit_LoadResource(QPlainTextEdit* self, int typeVal, const QUrl* name) {
	return new QVariant(self->loadResource(typeVal, *name));
}

QMenu* QPlainTextEdit_CreateStandardContextMenu(QPlainTextEdit* self) {
	return self->createStandardContextMenu();
}

QMenu* QPlainTextEdit_CreateStandardContextMenu2(QPlainTextEdit* self, const QPoint* position) {
	return self->createStandardContextMenu(*position);
}

QTextCursor* QPlainTextEdit_CursorForPosition(const QPlainTextEdit* self, const QPoint* pos) {
	return new QTextCursor(self->cursorForPosition(*pos));
}

QRect* QPlainTextEdit_CursorRect(const QPlainTextEdit* self, const QTextCursor* cursor) {
	return new QRect(self->cursorRect(*cursor));
}

QRect* QPlainTextEdit_CursorRect2(const QPlainTextEdit* self) {
	return new QRect(self->cursorRect());
}

libqt_string QPlainTextEdit_AnchorAt(const QPlainTextEdit* self, const QPoint* pos) {
	QString _ret = self->anchorAt(*pos);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QPlainTextEdit_OverwriteMode(const QPlainTextEdit* self) {
	return self->overwriteMode();
}

void QPlainTextEdit_SetOverwriteMode(QPlainTextEdit* self, bool overwrite) {
	self->setOverwriteMode(overwrite);
}

double QPlainTextEdit_TabStopDistance(const QPlainTextEdit* self) {
	return self->tabStopDistance();
}

void QPlainTextEdit_SetTabStopDistance(QPlainTextEdit* self, double distance) {
	self->setTabStopDistance(distance);
}

int QPlainTextEdit_CursorWidth(const QPlainTextEdit* self) {
	return self->cursorWidth();
}

void QPlainTextEdit_SetCursorWidth(QPlainTextEdit* self, int width) {
	self->setCursorWidth(width);
}

void QPlainTextEdit_SetExtraSelections(QPlainTextEdit* self, const libqt_list selections) {
	self->setExtraSelections(QList<QTextEdit::ExtraSelection>());
}

libqt_list QPlainTextEdit_ExtraSelections(const QPlainTextEdit* self) {
	auto _ret = self->extraSelections();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

void QPlainTextEdit_MoveCursor(QPlainTextEdit* self, int operation) {
	self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation));
}

bool QPlainTextEdit_CanPaste(const QPlainTextEdit* self) {
	return self->canPaste();
}

void QPlainTextEdit_Print(const QPlainTextEdit* self, QPagedPaintDevice* printer) {
	self->print(printer);
}

int QPlainTextEdit_BlockCount(const QPlainTextEdit* self) {
	return self->blockCount();
}

QVariant* QPlainTextEdit_InputMethodQuery(const QPlainTextEdit* self, int property) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

QVariant* QPlainTextEdit_InputMethodQuery2(const QPlainTextEdit* self, int query, QVariant* argument) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QPlainTextEdit_SetPlainText(QPlainTextEdit* self, const libqt_string text) {
	self->setPlainText(QString::fromUtf8(text.data, text.len));
}

void QPlainTextEdit_Cut(QPlainTextEdit* self) {
	self->cut();
}

void QPlainTextEdit_Copy(QPlainTextEdit* self) {
	self->copy();
}

void QPlainTextEdit_Paste(QPlainTextEdit* self) {
	self->paste();
}

void QPlainTextEdit_Undo(QPlainTextEdit* self) {
	self->undo();
}

void QPlainTextEdit_Redo(QPlainTextEdit* self) {
	self->redo();
}

void QPlainTextEdit_Clear(QPlainTextEdit* self) {
	self->clear();
}

void QPlainTextEdit_SelectAll(QPlainTextEdit* self) {
	self->selectAll();
}

void QPlainTextEdit_InsertPlainText(QPlainTextEdit* self, const libqt_string text) {
	self->insertPlainText(QString::fromUtf8(text.data, text.len));
}

void QPlainTextEdit_AppendPlainText(QPlainTextEdit* self, const libqt_string text) {
	self->appendPlainText(QString::fromUtf8(text.data, text.len));
}

void QPlainTextEdit_AppendHtml(QPlainTextEdit* self, const libqt_string html) {
	self->appendHtml(QString::fromUtf8(html.data, html.len));
}

void QPlainTextEdit_CenterCursor(QPlainTextEdit* self) {
	self->centerCursor();
}

void QPlainTextEdit_ZoomIn(QPlainTextEdit* self) {
	self->zoomIn();
}

void QPlainTextEdit_ZoomOut(QPlainTextEdit* self) {
	self->zoomOut();
}

void QPlainTextEdit_TextChanged(QPlainTextEdit* self) {
	self->textChanged();
}

void QPlainTextEdit_Connect_TextChanged(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*) = reinterpret_cast<void (*)(QPlainTextEdit*)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::textChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPlainTextEdit_UndoAvailable(QPlainTextEdit* self, bool b) {
	self->undoAvailable(b);
}

void QPlainTextEdit_Connect_UndoAvailable(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, bool) = reinterpret_cast<void (*)(QPlainTextEdit*, bool)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::undoAvailable, [self, slotFunc](bool b) {
	slotFunc(self, b);
    });
}

void QPlainTextEdit_RedoAvailable(QPlainTextEdit* self, bool b) {
	self->redoAvailable(b);
}

void QPlainTextEdit_Connect_RedoAvailable(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, bool) = reinterpret_cast<void (*)(QPlainTextEdit*, bool)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::redoAvailable, [self, slotFunc](bool b) {
	slotFunc(self, b);
    });
}

void QPlainTextEdit_CopyAvailable(QPlainTextEdit* self, bool b) {
	self->copyAvailable(b);
}

void QPlainTextEdit_Connect_CopyAvailable(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, bool) = reinterpret_cast<void (*)(QPlainTextEdit*, bool)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::copyAvailable, [self, slotFunc](bool b) {
	slotFunc(self, b);
    });
}

void QPlainTextEdit_SelectionChanged(QPlainTextEdit* self) {
	self->selectionChanged();
}

void QPlainTextEdit_Connect_SelectionChanged(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*) = reinterpret_cast<void (*)(QPlainTextEdit*)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::selectionChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPlainTextEdit_CursorPositionChanged(QPlainTextEdit* self) {
	self->cursorPositionChanged();
}

void QPlainTextEdit_Connect_CursorPositionChanged(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*) = reinterpret_cast<void (*)(QPlainTextEdit*)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::cursorPositionChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QPlainTextEdit_UpdateRequest(QPlainTextEdit* self, const QRect* rect, int dy) {
	self->updateRequest(*rect, dy);
}

void QPlainTextEdit_Connect_UpdateRequest(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, const QRect*, int) = reinterpret_cast<void (*)(QPlainTextEdit*, const QRect*, int)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::updateRequest, [self, slotFunc](const QRect& rect, int dy) {
	slotFunc(self, rect, dy);
    });
}

void QPlainTextEdit_BlockCountChanged(QPlainTextEdit* self, int newBlockCount) {
	self->blockCountChanged(newBlockCount);
}

void QPlainTextEdit_Connect_BlockCountChanged(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, int) = reinterpret_cast<void (*)(QPlainTextEdit*, int)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::blockCountChanged, [self, slotFunc](int newBlockCount) {
	slotFunc(self, newBlockCount);
    });
}

void QPlainTextEdit_ModificationChanged(QPlainTextEdit* self, bool param1) {
	self->modificationChanged(param1);
}

void QPlainTextEdit_Connect_ModificationChanged(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, bool) = reinterpret_cast<void (*)(QPlainTextEdit*, bool)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::modificationChanged, [self, slotFunc](bool param1) {
	slotFunc(self, param1);
    });
}

libqt_string QPlainTextEdit_Tr2(const char* s, const char* c) {
	QString _ret = QPlainTextEdit::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPlainTextEdit_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPlainTextEdit::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QPlainTextEdit_Find22(QPlainTextEdit* self, const libqt_string exp, int options) {
	return self->find(QString::fromUtf8(exp.data, exp.len), static_cast<QFlags<QTextDocument::FindFlag>>(options));
}

bool QPlainTextEdit_Find23(QPlainTextEdit* self, const QRegularExpression* exp, int options) {
	return self->find(*exp, static_cast<QFlags<QTextDocument::FindFlag>>(options));
}

void QPlainTextEdit_MoveCursor2(QPlainTextEdit* self, int operation, int mode) {
	self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation), static_cast<QTextCursor::MoveMode>(mode));
}

void QPlainTextEdit_ZoomIn1(QPlainTextEdit* self, int range) {
	self->zoomIn(range);
}

void QPlainTextEdit_ZoomOut1(QPlainTextEdit* self, int range) {
	self->zoomOut(range);
}

// Base class handler implementation
QVariant* QPlainTextEdit_QBaseLoadResource(QPlainTextEdit* self, int typeVal, const QUrl* name) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_LoadResource_IsBase(true);
	return new QVariant(vqplaintextedit->loadResource(typeVal, *name));
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnLoadResource(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_LoadResource_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_LoadResource_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QPlainTextEdit_QBaseInputMethodQuery(const QPlainTextEdit* self, int property) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_InputMethodQuery_IsBase(true);
	return new QVariant(vqplaintextedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnInputMethodQuery(const QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_InputMethodQuery_Callback>(slot));
}
}

// Derived class handler implementation
bool QPlainTextEdit_Event(QPlainTextEdit* self, QEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	return vqplaintextedit->event(e);
	} else {
	return self->QPlainTextEdit::event(e);
}
}

// Base class handler implementation
bool QPlainTextEdit_QBaseEvent(QPlainTextEdit* self, QEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_Event_IsBase(true);
	return vqplaintextedit->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_Event_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_TimerEvent(QPlainTextEdit* self, QTimerEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->timerEvent(e);
	} else {
	self->QPlainTextEdit::timerEvent(e);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseTimerEvent(QPlainTextEdit* self, QTimerEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_TimerEvent_IsBase(true);
	vqplaintextedit->timerEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnTimerEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_TimerEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_TimerEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_KeyPressEvent(QPlainTextEdit* self, QKeyEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->keyPressEvent(e);
	} else {
	self->QPlainTextEdit::keyPressEvent(e);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseKeyPressEvent(QPlainTextEdit* self, QKeyEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_KeyPressEvent_IsBase(true);
	vqplaintextedit->keyPressEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnKeyPressEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_KeyReleaseEvent(QPlainTextEdit* self, QKeyEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->keyReleaseEvent(e);
	} else {
	self->QPlainTextEdit::keyReleaseEvent(e);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseKeyReleaseEvent(QPlainTextEdit* self, QKeyEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_KeyReleaseEvent_IsBase(true);
	vqplaintextedit->keyReleaseEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnKeyReleaseEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_KeyReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_ResizeEvent(QPlainTextEdit* self, QResizeEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->resizeEvent(e);
	} else {
	self->QPlainTextEdit::resizeEvent(e);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseResizeEvent(QPlainTextEdit* self, QResizeEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_ResizeEvent_IsBase(true);
	vqplaintextedit->resizeEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnResizeEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_ResizeEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_PaintEvent(QPlainTextEdit* self, QPaintEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->paintEvent(e);
	} else {
	self->QPlainTextEdit::paintEvent(e);
}
}

// Base class handler implementation
void QPlainTextEdit_QBasePaintEvent(QPlainTextEdit* self, QPaintEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_PaintEvent_IsBase(true);
	vqplaintextedit->paintEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnPaintEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_PaintEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_MousePressEvent(QPlainTextEdit* self, QMouseEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->mousePressEvent(e);
	} else {
	self->QPlainTextEdit::mousePressEvent(e);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseMousePressEvent(QPlainTextEdit* self, QMouseEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_MousePressEvent_IsBase(true);
	vqplaintextedit->mousePressEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMousePressEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_MousePressEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_MouseMoveEvent(QPlainTextEdit* self, QMouseEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->mouseMoveEvent(e);
	} else {
	self->QPlainTextEdit::mouseMoveEvent(e);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseMouseMoveEvent(QPlainTextEdit* self, QMouseEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_MouseMoveEvent_IsBase(true);
	vqplaintextedit->mouseMoveEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMouseMoveEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_MouseReleaseEvent(QPlainTextEdit* self, QMouseEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->mouseReleaseEvent(e);
	} else {
	self->QPlainTextEdit::mouseReleaseEvent(e);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseMouseReleaseEvent(QPlainTextEdit* self, QMouseEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_MouseReleaseEvent_IsBase(true);
	vqplaintextedit->mouseReleaseEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMouseReleaseEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_MouseDoubleClickEvent(QPlainTextEdit* self, QMouseEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->mouseDoubleClickEvent(e);
	} else {
	self->QPlainTextEdit::mouseDoubleClickEvent(e);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseMouseDoubleClickEvent(QPlainTextEdit* self, QMouseEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_MouseDoubleClickEvent_IsBase(true);
	vqplaintextedit->mouseDoubleClickEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMouseDoubleClickEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MouseDoubleClickEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QPlainTextEdit_FocusNextPrevChild(QPlainTextEdit* self, bool next) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	return vqplaintextedit->focusNextPrevChild(next);
	} else {
	return self->QPlainTextEdit::focusNextPrevChild(next);
}
}

// Base class handler implementation
bool QPlainTextEdit_QBaseFocusNextPrevChild(QPlainTextEdit* self, bool next) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_FocusNextPrevChild_IsBase(true);
	return vqplaintextedit->focusNextPrevChild(next);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnFocusNextPrevChild(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_FocusNextPrevChild_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_ContextMenuEvent(QPlainTextEdit* self, QContextMenuEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->contextMenuEvent(e);
	} else {
	self->QPlainTextEdit::contextMenuEvent(e);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseContextMenuEvent(QPlainTextEdit* self, QContextMenuEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_ContextMenuEvent_IsBase(true);
	vqplaintextedit->contextMenuEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnContextMenuEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ContextMenuEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_DragEnterEvent(QPlainTextEdit* self, QDragEnterEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->dragEnterEvent(e);
	} else {
	self->QPlainTextEdit::dragEnterEvent(e);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseDragEnterEvent(QPlainTextEdit* self, QDragEnterEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_DragEnterEvent_IsBase(true);
	vqplaintextedit->dragEnterEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDragEnterEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DragEnterEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_DragLeaveEvent(QPlainTextEdit* self, QDragLeaveEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->dragLeaveEvent(e);
	} else {
	self->QPlainTextEdit::dragLeaveEvent(e);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseDragLeaveEvent(QPlainTextEdit* self, QDragLeaveEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_DragLeaveEvent_IsBase(true);
	vqplaintextedit->dragLeaveEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDragLeaveEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DragLeaveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_DragMoveEvent(QPlainTextEdit* self, QDragMoveEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->dragMoveEvent(e);
	} else {
	self->QPlainTextEdit::dragMoveEvent(e);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseDragMoveEvent(QPlainTextEdit* self, QDragMoveEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_DragMoveEvent_IsBase(true);
	vqplaintextedit->dragMoveEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDragMoveEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DragMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_DropEvent(QPlainTextEdit* self, QDropEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->dropEvent(e);
	} else {
	self->QPlainTextEdit::dropEvent(e);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseDropEvent(QPlainTextEdit* self, QDropEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_DropEvent_IsBase(true);
	vqplaintextedit->dropEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDropEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_DropEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DropEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_FocusInEvent(QPlainTextEdit* self, QFocusEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->focusInEvent(e);
	} else {
	self->QPlainTextEdit::focusInEvent(e);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseFocusInEvent(QPlainTextEdit* self, QFocusEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_FocusInEvent_IsBase(true);
	vqplaintextedit->focusInEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnFocusInEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_FocusInEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_FocusInEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_FocusOutEvent(QPlainTextEdit* self, QFocusEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->focusOutEvent(e);
	} else {
	self->QPlainTextEdit::focusOutEvent(e);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseFocusOutEvent(QPlainTextEdit* self, QFocusEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_FocusOutEvent_IsBase(true);
	vqplaintextedit->focusOutEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnFocusOutEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_FocusOutEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_ShowEvent(QPlainTextEdit* self, QShowEvent* param1) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->showEvent(param1);
	} else {
	self->QPlainTextEdit::showEvent(param1);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseShowEvent(QPlainTextEdit* self, QShowEvent* param1) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_ShowEvent_IsBase(true);
	vqplaintextedit->showEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnShowEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_ShowEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ShowEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_ChangeEvent(QPlainTextEdit* self, QEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->changeEvent(e);
	} else {
	self->QPlainTextEdit::changeEvent(e);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseChangeEvent(QPlainTextEdit* self, QEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_ChangeEvent_IsBase(true);
	vqplaintextedit->changeEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnChangeEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_ChangeEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_WheelEvent(QPlainTextEdit* self, QWheelEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->wheelEvent(e);
	} else {
	self->QPlainTextEdit::wheelEvent(e);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseWheelEvent(QPlainTextEdit* self, QWheelEvent* e) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_WheelEvent_IsBase(true);
	vqplaintextedit->wheelEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnWheelEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_WheelEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_WheelEvent_Callback>(slot));
}
}

// Derived class handler implementation
QMimeData* QPlainTextEdit_CreateMimeDataFromSelection(const QPlainTextEdit* self) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	return vqplaintextedit->createMimeDataFromSelection();
	} else {
	return self->QPlainTextEdit::createMimeDataFromSelection();
}
}

// Base class handler implementation
QMimeData* QPlainTextEdit_QBaseCreateMimeDataFromSelection(const QPlainTextEdit* self) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_CreateMimeDataFromSelection_IsBase(true);
	return vqplaintextedit->createMimeDataFromSelection();
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnCreateMimeDataFromSelection(const QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_CreateMimeDataFromSelection_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_CreateMimeDataFromSelection_Callback>(slot));
}
}

// Derived class handler implementation
bool QPlainTextEdit_CanInsertFromMimeData(const QPlainTextEdit* self, const QMimeData* source) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	return vqplaintextedit->canInsertFromMimeData(source);
	} else {
	return self->QPlainTextEdit::canInsertFromMimeData(source);
}
}

// Base class handler implementation
bool QPlainTextEdit_QBaseCanInsertFromMimeData(const QPlainTextEdit* self, const QMimeData* source) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_CanInsertFromMimeData_IsBase(true);
	return vqplaintextedit->canInsertFromMimeData(source);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnCanInsertFromMimeData(const QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_CanInsertFromMimeData_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_CanInsertFromMimeData_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_InsertFromMimeData(QPlainTextEdit* self, const QMimeData* source) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->insertFromMimeData(source);
	} else {
	self->QPlainTextEdit::insertFromMimeData(source);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseInsertFromMimeData(QPlainTextEdit* self, const QMimeData* source) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_InsertFromMimeData_IsBase(true);
	vqplaintextedit->insertFromMimeData(source);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnInsertFromMimeData(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_InsertFromMimeData_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_InsertFromMimeData_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_InputMethodEvent(QPlainTextEdit* self, QInputMethodEvent* param1) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->inputMethodEvent(param1);
	} else {
	self->QPlainTextEdit::inputMethodEvent(param1);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseInputMethodEvent(QPlainTextEdit* self, QInputMethodEvent* param1) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_InputMethodEvent_IsBase(true);
	vqplaintextedit->inputMethodEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnInputMethodEvent(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_InputMethodEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_ScrollContentsBy(QPlainTextEdit* self, int dx, int dy) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->scrollContentsBy(dx, dy);
	} else {
	self->QPlainTextEdit::scrollContentsBy(dx, dy);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseScrollContentsBy(QPlainTextEdit* self, int dx, int dy) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_ScrollContentsBy_IsBase(true);
	vqplaintextedit->scrollContentsBy(dx, dy);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnScrollContentsBy(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_ScrollContentsBy_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ScrollContentsBy_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_DoSetTextCursor(QPlainTextEdit* self, const QTextCursor* cursor) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->doSetTextCursor(*cursor);
	} else {
	self->QPlainTextEdit::doSetTextCursor(*cursor);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseDoSetTextCursor(QPlainTextEdit* self, const QTextCursor* cursor) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_DoSetTextCursor_IsBase(true);
	vqplaintextedit->doSetTextCursor(*cursor);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDoSetTextCursor(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_DoSetTextCursor_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DoSetTextCursor_Callback>(slot));
}
}

// Derived class handler implementation
QTextBlock* QPlainTextEdit_FirstVisibleBlock(const QPlainTextEdit* self) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	return new QTextBlock(vqplaintextedit->firstVisibleBlock());
	} else {
	return new QTextBlock(self->QPlainTextEdit::firstVisibleBlock());
}
}

// Base class handler implementation
QTextBlock* QPlainTextEdit_QBaseFirstVisibleBlock(const QPlainTextEdit* self) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_FirstVisibleBlock_IsBase(true);
	return new QTextBlock(vqplaintextedit->firstVisibleBlock());
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnFirstVisibleBlock(const QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_FirstVisibleBlock_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_FirstVisibleBlock_Callback>(slot));
}
}

// Derived class handler implementation
QPointF* QPlainTextEdit_ContentOffset(const QPlainTextEdit* self) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	return new QPointF(vqplaintextedit->contentOffset());
	} else {
	return new QPointF(self->QPlainTextEdit::contentOffset());
}
}

// Base class handler implementation
QPointF* QPlainTextEdit_QBaseContentOffset(const QPlainTextEdit* self) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_ContentOffset_IsBase(true);
	return new QPointF(vqplaintextedit->contentOffset());
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnContentOffset(const QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_ContentOffset_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ContentOffset_Callback>(slot));
}
}

// Derived class handler implementation
QRectF* QPlainTextEdit_BlockBoundingRect(const QPlainTextEdit* self, const QTextBlock* block) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	return new QRectF(vqplaintextedit->blockBoundingRect(*block));
	} else {
	return new QRectF(self->QPlainTextEdit::blockBoundingRect(*block));
}
}

// Base class handler implementation
QRectF* QPlainTextEdit_QBaseBlockBoundingRect(const QPlainTextEdit* self, const QTextBlock* block) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_BlockBoundingRect_IsBase(true);
	return new QRectF(vqplaintextedit->blockBoundingRect(*block));
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnBlockBoundingRect(const QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_BlockBoundingRect_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_BlockBoundingRect_Callback>(slot));
}
}

// Derived class handler implementation
QRectF* QPlainTextEdit_BlockBoundingGeometry(const QPlainTextEdit* self, const QTextBlock* block) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	return new QRectF(vqplaintextedit->blockBoundingGeometry(*block));
	} else {
	return new QRectF(self->QPlainTextEdit::blockBoundingGeometry(*block));
}
}

// Base class handler implementation
QRectF* QPlainTextEdit_QBaseBlockBoundingGeometry(const QPlainTextEdit* self, const QTextBlock* block) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_BlockBoundingGeometry_IsBase(true);
	return new QRectF(vqplaintextedit->blockBoundingGeometry(*block));
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnBlockBoundingGeometry(const QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_BlockBoundingGeometry_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_BlockBoundingGeometry_Callback>(slot));
}
}

// Derived class handler implementation
QAbstractTextDocumentLayout__PaintContext* QPlainTextEdit_GetPaintContext(const QPlainTextEdit* self) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	return new QAbstractTextDocumentLayout::PaintContext(vqplaintextedit->getPaintContext());
	} else {
	return new QAbstractTextDocumentLayout::PaintContext(self->QPlainTextEdit::getPaintContext());
}
}

// Base class handler implementation
QAbstractTextDocumentLayout__PaintContext* QPlainTextEdit_QBaseGetPaintContext(const QPlainTextEdit* self) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_GetPaintContext_IsBase(true);
	return new QAbstractTextDocumentLayout::PaintContext(vqplaintextedit->getPaintContext());
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnGetPaintContext(const QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_GetPaintContext_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_GetPaintContext_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextEdit_ZoomInF(QPlainTextEdit* self, float range) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
	vqplaintextedit->zoomInF(range);
	} else {
	self->QPlainTextEdit::zoomInF(range);
}
}

// Base class handler implementation
void QPlainTextEdit_QBaseZoomInF(QPlainTextEdit* self, float range) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_ZoomInF_IsBase(true);
	vqplaintextedit->zoomInF(range);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnZoomInF(QPlainTextEdit* self, intptr_t slot) {
	auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
	if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
vqplaintextedit->setQPlainTextEdit_ZoomInF_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ZoomInF_Callback>(slot));
}
}

void QPlainTextEdit_Delete(QPlainTextEdit* self) {
    delete self;
}

QPlainTextDocumentLayout* QPlainTextDocumentLayout_new(QTextDocument* document) {
	 return new VirtualQPlainTextDocumentLayout(document);
}

libqt_string QPlainTextDocumentLayout_Tr(const char* s) {
	QString _ret = QPlainTextDocumentLayout::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPlainTextDocumentLayout_Draw(QPlainTextDocumentLayout* self, QPainter* param1, const QAbstractTextDocumentLayout__PaintContext* param2) {
	self->draw(param1, *param2);
}

int QPlainTextDocumentLayout_HitTest(const QPlainTextDocumentLayout* self, const QPointF* param1, int param2) {
	return self->hitTest(*param1, static_cast<Qt::HitTestAccuracy>(param2));
}

int QPlainTextDocumentLayout_PageCount(const QPlainTextDocumentLayout* self) {
	return self->pageCount();
}

QSizeF* QPlainTextDocumentLayout_DocumentSize(const QPlainTextDocumentLayout* self) {
	return new QSizeF(self->documentSize());
}

QRectF* QPlainTextDocumentLayout_FrameBoundingRect(const QPlainTextDocumentLayout* self, QTextFrame* param1) {
	return new QRectF(self->frameBoundingRect(param1));
}

QRectF* QPlainTextDocumentLayout_BlockBoundingRect(const QPlainTextDocumentLayout* self, const QTextBlock* block) {
	return new QRectF(self->blockBoundingRect(*block));
}

void QPlainTextDocumentLayout_EnsureBlockLayout(const QPlainTextDocumentLayout* self, const QTextBlock* block) {
	self->ensureBlockLayout(*block);
}

void QPlainTextDocumentLayout_SetCursorWidth(QPlainTextDocumentLayout* self, int width) {
	self->setCursorWidth(width);
}

int QPlainTextDocumentLayout_CursorWidth(const QPlainTextDocumentLayout* self) {
	return self->cursorWidth();
}

void QPlainTextDocumentLayout_RequestUpdate(QPlainTextDocumentLayout* self) {
	self->requestUpdate();
}

libqt_string QPlainTextDocumentLayout_Tr2(const char* s, const char* c) {
	QString _ret = QPlainTextDocumentLayout::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPlainTextDocumentLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPlainTextDocumentLayout::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBaseDraw(QPlainTextDocumentLayout* self, QPainter* param1, const QAbstractTextDocumentLayout__PaintContext* param2) {
	auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
	if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Draw_IsBase(true);
	vqplaintextdocumentlayout->draw(param1, *param2);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnDraw(QPlainTextDocumentLayout* self, intptr_t slot) {
	auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
	if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Draw_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_Draw_Callback>(slot));
}
}

// Base class handler implementation
int QPlainTextDocumentLayout_QBaseHitTest(const QPlainTextDocumentLayout* self, const QPointF* param1, int param2) {
	auto* vqplaintextdocumentlayout = dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self);
	if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
vqplaintextdocumentlayout->setQPlainTextDocumentLayout_HitTest_IsBase(true);
	return vqplaintextdocumentlayout->hitTest(*param1, static_cast<Qt::HitTestAccuracy>(param2));
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnHitTest(const QPlainTextDocumentLayout* self, intptr_t slot) {
	auto* vqplaintextdocumentlayout = dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self);
	if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
vqplaintextdocumentlayout->setQPlainTextDocumentLayout_HitTest_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_HitTest_Callback>(slot));
}
}

// Base class handler implementation
int QPlainTextDocumentLayout_QBasePageCount(const QPlainTextDocumentLayout* self) {
	auto* vqplaintextdocumentlayout = dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self);
	if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
vqplaintextdocumentlayout->setQPlainTextDocumentLayout_PageCount_IsBase(true);
	return vqplaintextdocumentlayout->pageCount();
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnPageCount(const QPlainTextDocumentLayout* self, intptr_t slot) {
	auto* vqplaintextdocumentlayout = dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self);
	if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
vqplaintextdocumentlayout->setQPlainTextDocumentLayout_PageCount_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_PageCount_Callback>(slot));
}
}

// Base class handler implementation
QSizeF* QPlainTextDocumentLayout_QBaseDocumentSize(const QPlainTextDocumentLayout* self) {
	auto* vqplaintextdocumentlayout = dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self);
	if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
vqplaintextdocumentlayout->setQPlainTextDocumentLayout_DocumentSize_IsBase(true);
	return new QSizeF(vqplaintextdocumentlayout->documentSize());
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnDocumentSize(const QPlainTextDocumentLayout* self, intptr_t slot) {
	auto* vqplaintextdocumentlayout = dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self);
	if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
vqplaintextdocumentlayout->setQPlainTextDocumentLayout_DocumentSize_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_DocumentSize_Callback>(slot));
}
}

// Base class handler implementation
QRectF* QPlainTextDocumentLayout_QBaseFrameBoundingRect(const QPlainTextDocumentLayout* self, QTextFrame* param1) {
	auto* vqplaintextdocumentlayout = dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self);
	if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
vqplaintextdocumentlayout->setQPlainTextDocumentLayout_FrameBoundingRect_IsBase(true);
	return new QRectF(vqplaintextdocumentlayout->frameBoundingRect(param1));
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnFrameBoundingRect(const QPlainTextDocumentLayout* self, intptr_t slot) {
	auto* vqplaintextdocumentlayout = dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self);
	if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
vqplaintextdocumentlayout->setQPlainTextDocumentLayout_FrameBoundingRect_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_FrameBoundingRect_Callback>(slot));
}
}

// Base class handler implementation
QRectF* QPlainTextDocumentLayout_QBaseBlockBoundingRect(const QPlainTextDocumentLayout* self, const QTextBlock* block) {
	auto* vqplaintextdocumentlayout = dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self);
	if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
vqplaintextdocumentlayout->setQPlainTextDocumentLayout_BlockBoundingRect_IsBase(true);
	return new QRectF(vqplaintextdocumentlayout->blockBoundingRect(*block));
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnBlockBoundingRect(const QPlainTextDocumentLayout* self, intptr_t slot) {
	auto* vqplaintextdocumentlayout = dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self);
	if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
vqplaintextdocumentlayout->setQPlainTextDocumentLayout_BlockBoundingRect_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_BlockBoundingRect_Callback>(slot));
}
}

// Derived class handler implementation
void QPlainTextDocumentLayout_DocumentChanged(QPlainTextDocumentLayout* self, int from, int param2, int charsAdded) {
	auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
	if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
	vqplaintextdocumentlayout->documentChanged(from, param2, charsAdded);
	} else {
	self->QPlainTextDocumentLayout::documentChanged(from, param2, charsAdded);
}
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBaseDocumentChanged(QPlainTextDocumentLayout* self, int from, int param2, int charsAdded) {
	auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
	if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
vqplaintextdocumentlayout->setQPlainTextDocumentLayout_DocumentChanged_IsBase(true);
	vqplaintextdocumentlayout->documentChanged(from, param2, charsAdded);
}
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnDocumentChanged(QPlainTextDocumentLayout* self, intptr_t slot) {
	auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
	if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
vqplaintextdocumentlayout->setQPlainTextDocumentLayout_DocumentChanged_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_DocumentChanged_Callback>(slot));
}
}

void QPlainTextDocumentLayout_Delete(QPlainTextDocumentLayout* self) {
    delete self;
}

