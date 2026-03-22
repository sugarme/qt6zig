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

void QPlainTextDocumentLayout_Delete(QPlainTextDocumentLayout* self) {
    delete self;
}

