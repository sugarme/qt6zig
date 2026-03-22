#include <QAbstractScrollArea>
#include <QColor>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMenu>
#include <QMimeData>
#include <QMouseEvent>
#include <QPagedPaintDevice>
#include <QPaintEvent>
#include <QPoint>
#include <QRect>
#include <QRegularExpression>
#include <QResizeEvent>
#include <QShowEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextEdit>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextEdit__ExtraSelection
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtextedit.h>
#include "libqtextedit.h"
#include "libqtextedit.hxx"

QTextEdit* QTextEdit_new(QWidget* parent) {
	 return new VirtualQTextEdit(parent);
}

QTextEdit* QTextEdit_new2() {
	 return new VirtualQTextEdit();
}

QTextEdit* QTextEdit_new3(const libqt_string text) {
	 return new VirtualQTextEdit(QString::fromUtf8(text.data, text.len));
}

QTextEdit* QTextEdit_new4(const libqt_string text, QWidget* parent) {
	 return new VirtualQTextEdit(QString::fromUtf8(text.data, text.len), parent);
}

libqt_string QTextEdit_Tr(const char* s) {
	QString _ret = QTextEdit::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTextEdit_SetDocument(QTextEdit* self, QTextDocument* document) {
	self->setDocument(document);
}

QTextDocument* QTextEdit_Document(const QTextEdit* self) {
	return self->document();
}

void QTextEdit_SetPlaceholderText(QTextEdit* self, const libqt_string placeholderText) {
	self->setPlaceholderText(QString::fromUtf8(placeholderText.data, placeholderText.len));
}

libqt_string QTextEdit_PlaceholderText(const QTextEdit* self) {
	QString _ret = self->placeholderText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTextEdit_SetTextCursor(QTextEdit* self, const QTextCursor* cursor) {
	self->setTextCursor(*cursor);
}

QTextCursor* QTextEdit_TextCursor(const QTextEdit* self) {
	return new QTextCursor(self->textCursor());
}

bool QTextEdit_IsReadOnly(const QTextEdit* self) {
	return self->isReadOnly();
}

void QTextEdit_SetReadOnly(QTextEdit* self, bool ro) {
	self->setReadOnly(ro);
}

void QTextEdit_SetTextInteractionFlags(QTextEdit* self, int flags) {
	self->setTextInteractionFlags(static_cast<QFlags<Qt::TextInteractionFlag>>(flags));
}

int QTextEdit_TextInteractionFlags(const QTextEdit* self) {
	return self->textInteractionFlags();
}

double QTextEdit_FontPointSize(const QTextEdit* self) {
	return self->fontPointSize();
}

libqt_string QTextEdit_FontFamily(const QTextEdit* self) {
	QString _ret = self->fontFamily();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QTextEdit_FontWeight(const QTextEdit* self) {
	return self->fontWeight();
}

bool QTextEdit_FontUnderline(const QTextEdit* self) {
	return self->fontUnderline();
}

bool QTextEdit_FontItalic(const QTextEdit* self) {
	return self->fontItalic();
}

QColor* QTextEdit_TextColor(const QTextEdit* self) {
	return new QColor(self->textColor());
}

QColor* QTextEdit_TextBackgroundColor(const QTextEdit* self) {
	return new QColor(self->textBackgroundColor());
}

QFont* QTextEdit_CurrentFont(const QTextEdit* self) {
	return new QFont(self->currentFont());
}

int QTextEdit_Alignment(const QTextEdit* self) {
	return self->alignment();
}

void QTextEdit_MergeCurrentCharFormat(QTextEdit* self, const QTextCharFormat* modifier) {
	self->mergeCurrentCharFormat(*modifier);
}

void QTextEdit_SetCurrentCharFormat(QTextEdit* self, const QTextCharFormat* format) {
	self->setCurrentCharFormat(*format);
}

QTextCharFormat* QTextEdit_CurrentCharFormat(const QTextEdit* self) {
	return new QTextCharFormat(self->currentCharFormat());
}

int QTextEdit_AutoFormatting(const QTextEdit* self) {
	return self->autoFormatting();
}

void QTextEdit_SetAutoFormatting(QTextEdit* self, int features) {
	self->setAutoFormatting(static_cast<QFlags<QTextEdit::AutoFormattingFlag>>(features));
}

bool QTextEdit_TabChangesFocus(const QTextEdit* self) {
	return self->tabChangesFocus();
}

void QTextEdit_SetTabChangesFocus(QTextEdit* self, bool b) {
	self->setTabChangesFocus(b);
}

void QTextEdit_SetDocumentTitle(QTextEdit* self, const libqt_string title) {
	self->setDocumentTitle(QString::fromUtf8(title.data, title.len));
}

libqt_string QTextEdit_DocumentTitle(const QTextEdit* self) {
	QString _ret = self->documentTitle();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QTextEdit_IsUndoRedoEnabled(const QTextEdit* self) {
	return self->isUndoRedoEnabled();
}

void QTextEdit_SetUndoRedoEnabled(QTextEdit* self, bool enable) {
	self->setUndoRedoEnabled(enable);
}

int QTextEdit_LineWrapMode(const QTextEdit* self) {
	return self->lineWrapMode();
}

void QTextEdit_SetLineWrapMode(QTextEdit* self, int mode) {
	self->setLineWrapMode(static_cast<QTextEdit::LineWrapMode>(mode));
}

int QTextEdit_LineWrapColumnOrWidth(const QTextEdit* self) {
	return self->lineWrapColumnOrWidth();
}

void QTextEdit_SetLineWrapColumnOrWidth(QTextEdit* self, int w) {
	self->setLineWrapColumnOrWidth(w);
}

int QTextEdit_WordWrapMode(const QTextEdit* self) {
	return self->wordWrapMode();
}

void QTextEdit_SetWordWrapMode(QTextEdit* self, int policy) {
	self->setWordWrapMode(static_cast<QTextOption::WrapMode>(policy));
}

bool QTextEdit_Find(QTextEdit* self, const libqt_string exp) {
	return self->find(QString::fromUtf8(exp.data, exp.len));
}

bool QTextEdit_Find2(QTextEdit* self, const QRegularExpression* exp) {
	return self->find(*exp);
}

libqt_string QTextEdit_ToPlainText(const QTextEdit* self) {
	QString _ret = self->toPlainText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTextEdit_ToHtml(const QTextEdit* self) {
	QString _ret = self->toHtml();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTextEdit_ToMarkdown(const QTextEdit* self) {
	QString _ret = self->toMarkdown();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTextEdit_EnsureCursorVisible(QTextEdit* self) {
	self->ensureCursorVisible();
}

QVariant* QTextEdit_LoadResource(QTextEdit* self, int typeVal, const QUrl* name) {
	return new QVariant(self->loadResource(typeVal, *name));
}

QMenu* QTextEdit_CreateStandardContextMenu(QTextEdit* self) {
	return self->createStandardContextMenu();
}

QMenu* QTextEdit_CreateStandardContextMenu2(QTextEdit* self, const QPoint* position) {
	return self->createStandardContextMenu(*position);
}

QTextCursor* QTextEdit_CursorForPosition(const QTextEdit* self, const QPoint* pos) {
	return new QTextCursor(self->cursorForPosition(*pos));
}

QRect* QTextEdit_CursorRect(const QTextEdit* self, const QTextCursor* cursor) {
	return new QRect(self->cursorRect(*cursor));
}

QRect* QTextEdit_CursorRect2(const QTextEdit* self) {
	return new QRect(self->cursorRect());
}

libqt_string QTextEdit_AnchorAt(const QTextEdit* self, const QPoint* pos) {
	QString _ret = self->anchorAt(*pos);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QTextEdit_OverwriteMode(const QTextEdit* self) {
	return self->overwriteMode();
}

void QTextEdit_SetOverwriteMode(QTextEdit* self, bool overwrite) {
	self->setOverwriteMode(overwrite);
}

double QTextEdit_TabStopDistance(const QTextEdit* self) {
	return self->tabStopDistance();
}

void QTextEdit_SetTabStopDistance(QTextEdit* self, double distance) {
	self->setTabStopDistance(distance);
}

int QTextEdit_CursorWidth(const QTextEdit* self) {
	return self->cursorWidth();
}

void QTextEdit_SetCursorWidth(QTextEdit* self, int width) {
	self->setCursorWidth(width);
}

bool QTextEdit_AcceptRichText(const QTextEdit* self) {
	return self->acceptRichText();
}

void QTextEdit_SetAcceptRichText(QTextEdit* self, bool accept) {
	self->setAcceptRichText(accept);
}

void QTextEdit_SetExtraSelections(QTextEdit* self, const libqt_list selections) {
	self->setExtraSelections(*selections);
}

libqt_list QTextEdit_ExtraSelections(const QTextEdit* self) {
	return self->extraSelections();
}

void QTextEdit_MoveCursor(QTextEdit* self, int operation) {
	self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation));
}

bool QTextEdit_CanPaste(const QTextEdit* self) {
	return self->canPaste();
}

void QTextEdit_Print(const QTextEdit* self, QPagedPaintDevice* printer) {
	self->print(printer);
}

QVariant* QTextEdit_InputMethodQuery(const QTextEdit* self, int property) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

QVariant* QTextEdit_InputMethodQuery2(const QTextEdit* self, int query, QVariant* argument) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QTextEdit_SetFontPointSize(QTextEdit* self, double s) {
	self->setFontPointSize(s);
}

void QTextEdit_SetFontFamily(QTextEdit* self, const libqt_string fontFamily) {
	self->setFontFamily(QString::fromUtf8(fontFamily.data, fontFamily.len));
}

void QTextEdit_SetFontWeight(QTextEdit* self, int w) {
	self->setFontWeight(w);
}

void QTextEdit_SetFontUnderline(QTextEdit* self, bool b) {
	self->setFontUnderline(b);
}

void QTextEdit_SetFontItalic(QTextEdit* self, bool b) {
	self->setFontItalic(b);
}

void QTextEdit_SetTextColor(QTextEdit* self, const QColor* c) {
	self->setTextColor(*c);
}

void QTextEdit_SetTextBackgroundColor(QTextEdit* self, const QColor* c) {
	self->setTextBackgroundColor(*c);
}

void QTextEdit_SetCurrentFont(QTextEdit* self, const QFont* f) {
	self->setCurrentFont(*f);
}

void QTextEdit_SetAlignment(QTextEdit* self, int a) {
	self->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(a));
}

void QTextEdit_SetPlainText(QTextEdit* self, const libqt_string text) {
	self->setPlainText(QString::fromUtf8(text.data, text.len));
}

void QTextEdit_SetHtml(QTextEdit* self, const libqt_string text) {
	self->setHtml(QString::fromUtf8(text.data, text.len));
}

void QTextEdit_SetMarkdown(QTextEdit* self, const libqt_string markdown) {
	self->setMarkdown(QString::fromUtf8(markdown.data, markdown.len));
}

void QTextEdit_SetText(QTextEdit* self, const libqt_string text) {
	self->setText(QString::fromUtf8(text.data, text.len));
}

void QTextEdit_Cut(QTextEdit* self) {
	self->cut();
}

void QTextEdit_Copy(QTextEdit* self) {
	self->copy();
}

void QTextEdit_Paste(QTextEdit* self) {
	self->paste();
}

void QTextEdit_Undo(QTextEdit* self) {
	self->undo();
}

void QTextEdit_Redo(QTextEdit* self) {
	self->redo();
}

void QTextEdit_Clear(QTextEdit* self) {
	self->clear();
}

void QTextEdit_SelectAll(QTextEdit* self) {
	self->selectAll();
}

void QTextEdit_InsertPlainText(QTextEdit* self, const libqt_string text) {
	self->insertPlainText(QString::fromUtf8(text.data, text.len));
}

void QTextEdit_InsertHtml(QTextEdit* self, const libqt_string text) {
	self->insertHtml(QString::fromUtf8(text.data, text.len));
}

void QTextEdit_Append(QTextEdit* self, const libqt_string text) {
	self->append(QString::fromUtf8(text.data, text.len));
}

void QTextEdit_ScrollToAnchor(QTextEdit* self, const libqt_string name) {
	self->scrollToAnchor(QString::fromUtf8(name.data, name.len));
}

void QTextEdit_ZoomIn(QTextEdit* self) {
	self->zoomIn();
}

void QTextEdit_ZoomOut(QTextEdit* self) {
	self->zoomOut();
}

void QTextEdit_TextChanged(QTextEdit* self) {
	self->textChanged();
}

void QTextEdit_Connect_TextChanged(QTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QTextEdit*) = reinterpret_cast<void (*)(QTextEdit*)>(slot);
    QTextEdit::connect(self, &QTextEdit::textChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QTextEdit_UndoAvailable(QTextEdit* self, bool b) {
	self->undoAvailable(b);
}

void QTextEdit_Connect_UndoAvailable(QTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QTextEdit*, bool) = reinterpret_cast<void (*)(QTextEdit*, bool)>(slot);
    QTextEdit::connect(self, &QTextEdit::undoAvailable, [self, slotFunc](bool b) {
	slotFunc(self, b);
    });
}

void QTextEdit_RedoAvailable(QTextEdit* self, bool b) {
	self->redoAvailable(b);
}

void QTextEdit_Connect_RedoAvailable(QTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QTextEdit*, bool) = reinterpret_cast<void (*)(QTextEdit*, bool)>(slot);
    QTextEdit::connect(self, &QTextEdit::redoAvailable, [self, slotFunc](bool b) {
	slotFunc(self, b);
    });
}

void QTextEdit_CurrentCharFormatChanged(QTextEdit* self, const QTextCharFormat* format) {
	self->currentCharFormatChanged(*format);
}

void QTextEdit_Connect_CurrentCharFormatChanged(QTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QTextEdit*, const QTextCharFormat*) = reinterpret_cast<void (*)(QTextEdit*, const QTextCharFormat*)>(slot);
    QTextEdit::connect(self, &QTextEdit::currentCharFormatChanged, [self, slotFunc](const QTextCharFormat& format) {
	slotFunc(self, format);
    });
}

void QTextEdit_CopyAvailable(QTextEdit* self, bool b) {
	self->copyAvailable(b);
}

void QTextEdit_Connect_CopyAvailable(QTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QTextEdit*, bool) = reinterpret_cast<void (*)(QTextEdit*, bool)>(slot);
    QTextEdit::connect(self, &QTextEdit::copyAvailable, [self, slotFunc](bool b) {
	slotFunc(self, b);
    });
}

void QTextEdit_SelectionChanged(QTextEdit* self) {
	self->selectionChanged();
}

void QTextEdit_Connect_SelectionChanged(QTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QTextEdit*) = reinterpret_cast<void (*)(QTextEdit*)>(slot);
    QTextEdit::connect(self, &QTextEdit::selectionChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QTextEdit_CursorPositionChanged(QTextEdit* self) {
	self->cursorPositionChanged();
}

void QTextEdit_Connect_CursorPositionChanged(QTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QTextEdit*) = reinterpret_cast<void (*)(QTextEdit*)>(slot);
    QTextEdit::connect(self, &QTextEdit::cursorPositionChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QTextEdit_Tr2(const char* s, const char* c) {
	QString _ret = QTextEdit::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTextEdit_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextEdit::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QTextEdit_Find22(QTextEdit* self, const libqt_string exp, int options) {
	return self->find(QString::fromUtf8(exp.data, exp.len), static_cast<QFlags<QTextDocument::FindFlag>>(options));
}

bool QTextEdit_Find23(QTextEdit* self, const QRegularExpression* exp, int options) {
	return self->find(*exp, static_cast<QFlags<QTextDocument::FindFlag>>(options));
}

libqt_string QTextEdit_ToMarkdown1(const QTextEdit* self, int features) {
	QString _ret = self->toMarkdown(static_cast<QFlags<QTextDocument::MarkdownFeature>>(features));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTextEdit_MoveCursor2(QTextEdit* self, int operation, int mode) {
	self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation), static_cast<QTextCursor::MoveMode>(mode));
}

void QTextEdit_ZoomIn1(QTextEdit* self, int range) {
	self->zoomIn(range);
}

void QTextEdit_ZoomOut1(QTextEdit* self, int range) {
	self->zoomOut(range);
}

// Base class handler implementation
QVariant* QTextEdit_QBaseLoadResource(QTextEdit* self, int typeVal, const QUrl* name) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_LoadResource_IsBase(true);
	return new QVariant(vqtextedit->loadResource(typeVal, *name));
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnLoadResource(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_LoadResource_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_LoadResource_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QTextEdit_QBaseInputMethodQuery(const QTextEdit* self, int property) {
	auto* vqtextedit = dynamic_cast<const VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_InputMethodQuery_IsBase(true);
	return new QVariant(vqtextedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnInputMethodQuery(const QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<const VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_InputMethodQuery_Callback>(slot));
}
}

// Derived class handler implementation
bool QTextEdit_Event(QTextEdit* self, QEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	return vqtextedit->event(e);
	} else {
	return self->QTextEdit::event(e);
}
}

// Base class handler implementation
bool QTextEdit_QBaseEvent(QTextEdit* self, QEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_Event_IsBase(true);
	return vqtextedit->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_Event_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_TimerEvent(QTextEdit* self, QTimerEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->timerEvent(e);
	} else {
	self->QTextEdit::timerEvent(e);
}
}

// Base class handler implementation
void QTextEdit_QBaseTimerEvent(QTextEdit* self, QTimerEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_TimerEvent_IsBase(true);
	vqtextedit->timerEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnTimerEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_TimerEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_TimerEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_KeyPressEvent(QTextEdit* self, QKeyEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->keyPressEvent(e);
	} else {
	self->QTextEdit::keyPressEvent(e);
}
}

// Base class handler implementation
void QTextEdit_QBaseKeyPressEvent(QTextEdit* self, QKeyEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_KeyPressEvent_IsBase(true);
	vqtextedit->keyPressEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnKeyPressEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_KeyReleaseEvent(QTextEdit* self, QKeyEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->keyReleaseEvent(e);
	} else {
	self->QTextEdit::keyReleaseEvent(e);
}
}

// Base class handler implementation
void QTextEdit_QBaseKeyReleaseEvent(QTextEdit* self, QKeyEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_KeyReleaseEvent_IsBase(true);
	vqtextedit->keyReleaseEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnKeyReleaseEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_KeyReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_ResizeEvent(QTextEdit* self, QResizeEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->resizeEvent(e);
	} else {
	self->QTextEdit::resizeEvent(e);
}
}

// Base class handler implementation
void QTextEdit_QBaseResizeEvent(QTextEdit* self, QResizeEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_ResizeEvent_IsBase(true);
	vqtextedit->resizeEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnResizeEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_ResizeEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_PaintEvent(QTextEdit* self, QPaintEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->paintEvent(e);
	} else {
	self->QTextEdit::paintEvent(e);
}
}

// Base class handler implementation
void QTextEdit_QBasePaintEvent(QTextEdit* self, QPaintEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_PaintEvent_IsBase(true);
	vqtextedit->paintEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnPaintEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_PaintEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_MousePressEvent(QTextEdit* self, QMouseEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->mousePressEvent(e);
	} else {
	self->QTextEdit::mousePressEvent(e);
}
}

// Base class handler implementation
void QTextEdit_QBaseMousePressEvent(QTextEdit* self, QMouseEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_MousePressEvent_IsBase(true);
	vqtextedit->mousePressEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMousePressEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_MousePressEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_MouseMoveEvent(QTextEdit* self, QMouseEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->mouseMoveEvent(e);
	} else {
	self->QTextEdit::mouseMoveEvent(e);
}
}

// Base class handler implementation
void QTextEdit_QBaseMouseMoveEvent(QTextEdit* self, QMouseEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_MouseMoveEvent_IsBase(true);
	vqtextedit->mouseMoveEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMouseMoveEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_MouseReleaseEvent(QTextEdit* self, QMouseEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->mouseReleaseEvent(e);
	} else {
	self->QTextEdit::mouseReleaseEvent(e);
}
}

// Base class handler implementation
void QTextEdit_QBaseMouseReleaseEvent(QTextEdit* self, QMouseEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_MouseReleaseEvent_IsBase(true);
	vqtextedit->mouseReleaseEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMouseReleaseEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_MouseDoubleClickEvent(QTextEdit* self, QMouseEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->mouseDoubleClickEvent(e);
	} else {
	self->QTextEdit::mouseDoubleClickEvent(e);
}
}

// Base class handler implementation
void QTextEdit_QBaseMouseDoubleClickEvent(QTextEdit* self, QMouseEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_MouseDoubleClickEvent_IsBase(true);
	vqtextedit->mouseDoubleClickEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMouseDoubleClickEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_MouseDoubleClickEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QTextEdit_FocusNextPrevChild(QTextEdit* self, bool next) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	return vqtextedit->focusNextPrevChild(next);
	} else {
	return self->QTextEdit::focusNextPrevChild(next);
}
}

// Base class handler implementation
bool QTextEdit_QBaseFocusNextPrevChild(QTextEdit* self, bool next) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_FocusNextPrevChild_IsBase(true);
	return vqtextedit->focusNextPrevChild(next);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnFocusNextPrevChild(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_FocusNextPrevChild_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_ContextMenuEvent(QTextEdit* self, QContextMenuEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->contextMenuEvent(e);
	} else {
	self->QTextEdit::contextMenuEvent(e);
}
}

// Base class handler implementation
void QTextEdit_QBaseContextMenuEvent(QTextEdit* self, QContextMenuEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_ContextMenuEvent_IsBase(true);
	vqtextedit->contextMenuEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnContextMenuEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_ContextMenuEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_DragEnterEvent(QTextEdit* self, QDragEnterEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->dragEnterEvent(e);
	} else {
	self->QTextEdit::dragEnterEvent(e);
}
}

// Base class handler implementation
void QTextEdit_QBaseDragEnterEvent(QTextEdit* self, QDragEnterEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_DragEnterEvent_IsBase(true);
	vqtextedit->dragEnterEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDragEnterEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_DragEnterEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_DragLeaveEvent(QTextEdit* self, QDragLeaveEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->dragLeaveEvent(e);
	} else {
	self->QTextEdit::dragLeaveEvent(e);
}
}

// Base class handler implementation
void QTextEdit_QBaseDragLeaveEvent(QTextEdit* self, QDragLeaveEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_DragLeaveEvent_IsBase(true);
	vqtextedit->dragLeaveEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDragLeaveEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_DragLeaveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_DragMoveEvent(QTextEdit* self, QDragMoveEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->dragMoveEvent(e);
	} else {
	self->QTextEdit::dragMoveEvent(e);
}
}

// Base class handler implementation
void QTextEdit_QBaseDragMoveEvent(QTextEdit* self, QDragMoveEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_DragMoveEvent_IsBase(true);
	vqtextedit->dragMoveEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDragMoveEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_DragMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_DropEvent(QTextEdit* self, QDropEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->dropEvent(e);
	} else {
	self->QTextEdit::dropEvent(e);
}
}

// Base class handler implementation
void QTextEdit_QBaseDropEvent(QTextEdit* self, QDropEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_DropEvent_IsBase(true);
	vqtextedit->dropEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDropEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_DropEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_DropEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_FocusInEvent(QTextEdit* self, QFocusEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->focusInEvent(e);
	} else {
	self->QTextEdit::focusInEvent(e);
}
}

// Base class handler implementation
void QTextEdit_QBaseFocusInEvent(QTextEdit* self, QFocusEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_FocusInEvent_IsBase(true);
	vqtextedit->focusInEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnFocusInEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_FocusInEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_FocusInEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_FocusOutEvent(QTextEdit* self, QFocusEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->focusOutEvent(e);
	} else {
	self->QTextEdit::focusOutEvent(e);
}
}

// Base class handler implementation
void QTextEdit_QBaseFocusOutEvent(QTextEdit* self, QFocusEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_FocusOutEvent_IsBase(true);
	vqtextedit->focusOutEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnFocusOutEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_FocusOutEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_ShowEvent(QTextEdit* self, QShowEvent* param1) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->showEvent(param1);
	} else {
	self->QTextEdit::showEvent(param1);
}
}

// Base class handler implementation
void QTextEdit_QBaseShowEvent(QTextEdit* self, QShowEvent* param1) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_ShowEvent_IsBase(true);
	vqtextedit->showEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnShowEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_ShowEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_ShowEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_ChangeEvent(QTextEdit* self, QEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->changeEvent(e);
	} else {
	self->QTextEdit::changeEvent(e);
}
}

// Base class handler implementation
void QTextEdit_QBaseChangeEvent(QTextEdit* self, QEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_ChangeEvent_IsBase(true);
	vqtextedit->changeEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnChangeEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_ChangeEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_WheelEvent(QTextEdit* self, QWheelEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->wheelEvent(e);
	} else {
	self->QTextEdit::wheelEvent(e);
}
}

// Base class handler implementation
void QTextEdit_QBaseWheelEvent(QTextEdit* self, QWheelEvent* e) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_WheelEvent_IsBase(true);
	vqtextedit->wheelEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnWheelEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_WheelEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_WheelEvent_Callback>(slot));
}
}

// Derived class handler implementation
QMimeData* QTextEdit_CreateMimeDataFromSelection(const QTextEdit* self) {
	auto* vqtextedit = dynamic_cast<const VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	return vqtextedit->createMimeDataFromSelection();
	} else {
	return self->QTextEdit::createMimeDataFromSelection();
}
}

// Base class handler implementation
QMimeData* QTextEdit_QBaseCreateMimeDataFromSelection(const QTextEdit* self) {
	auto* vqtextedit = dynamic_cast<const VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_CreateMimeDataFromSelection_IsBase(true);
	return vqtextedit->createMimeDataFromSelection();
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnCreateMimeDataFromSelection(const QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<const VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_CreateMimeDataFromSelection_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_CreateMimeDataFromSelection_Callback>(slot));
}
}

// Derived class handler implementation
bool QTextEdit_CanInsertFromMimeData(const QTextEdit* self, const QMimeData* source) {
	auto* vqtextedit = dynamic_cast<const VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	return vqtextedit->canInsertFromMimeData(source);
	} else {
	return self->QTextEdit::canInsertFromMimeData(source);
}
}

// Base class handler implementation
bool QTextEdit_QBaseCanInsertFromMimeData(const QTextEdit* self, const QMimeData* source) {
	auto* vqtextedit = dynamic_cast<const VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_CanInsertFromMimeData_IsBase(true);
	return vqtextedit->canInsertFromMimeData(source);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnCanInsertFromMimeData(const QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<const VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_CanInsertFromMimeData_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_CanInsertFromMimeData_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_InsertFromMimeData(QTextEdit* self, const QMimeData* source) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->insertFromMimeData(source);
	} else {
	self->QTextEdit::insertFromMimeData(source);
}
}

// Base class handler implementation
void QTextEdit_QBaseInsertFromMimeData(QTextEdit* self, const QMimeData* source) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_InsertFromMimeData_IsBase(true);
	vqtextedit->insertFromMimeData(source);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnInsertFromMimeData(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_InsertFromMimeData_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_InsertFromMimeData_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_InputMethodEvent(QTextEdit* self, QInputMethodEvent* param1) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->inputMethodEvent(param1);
	} else {
	self->QTextEdit::inputMethodEvent(param1);
}
}

// Base class handler implementation
void QTextEdit_QBaseInputMethodEvent(QTextEdit* self, QInputMethodEvent* param1) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_InputMethodEvent_IsBase(true);
	vqtextedit->inputMethodEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnInputMethodEvent(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_InputMethodEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_ScrollContentsBy(QTextEdit* self, int dx, int dy) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->scrollContentsBy(dx, dy);
	} else {
	self->QTextEdit::scrollContentsBy(dx, dy);
}
}

// Base class handler implementation
void QTextEdit_QBaseScrollContentsBy(QTextEdit* self, int dx, int dy) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_ScrollContentsBy_IsBase(true);
	vqtextedit->scrollContentsBy(dx, dy);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnScrollContentsBy(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_ScrollContentsBy_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_ScrollContentsBy_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_DoSetTextCursor(QTextEdit* self, const QTextCursor* cursor) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->doSetTextCursor(*cursor);
	} else {
	self->QTextEdit::doSetTextCursor(*cursor);
}
}

// Base class handler implementation
void QTextEdit_QBaseDoSetTextCursor(QTextEdit* self, const QTextCursor* cursor) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_DoSetTextCursor_IsBase(true);
	vqtextedit->doSetTextCursor(*cursor);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDoSetTextCursor(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_DoSetTextCursor_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_DoSetTextCursor_Callback>(slot));
}
}

// Derived class handler implementation
void QTextEdit_ZoomInF(QTextEdit* self, float range) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
	vqtextedit->zoomInF(range);
	} else {
	self->QTextEdit::zoomInF(range);
}
}

// Base class handler implementation
void QTextEdit_QBaseZoomInF(QTextEdit* self, float range) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_ZoomInF_IsBase(true);
	vqtextedit->zoomInF(range);
}
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnZoomInF(QTextEdit* self, intptr_t slot) {
	auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
	if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
vqtextedit->setQTextEdit_ZoomInF_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_ZoomInF_Callback>(slot));
}
}

void QTextEdit_Delete(QTextEdit* self) {
    delete self;
}

QTextEdit__ExtraSelection* QTextEdit__ExtraSelection_new(const QTextEdit__ExtraSelection* param1) {
	 return new QTextEdit::ExtraSelection(*param1);
}

QTextCursor* QTextEdit__ExtraSelection_Cursor(const QTextEdit__ExtraSelection* self) {
	return new QTextCursor(self->cursor);
}

void QTextEdit__ExtraSelection_SetCursor(QTextEdit__ExtraSelection* self, QTextCursor* cursor) {
	self->cursor;
}

QTextCharFormat* QTextEdit__ExtraSelection_Format(const QTextEdit__ExtraSelection* self) {
	return new QTextCharFormat(self->format);
}

void QTextEdit__ExtraSelection_SetFormat(QTextEdit__ExtraSelection* self, QTextCharFormat* format) {
	self->format;
}

void QTextEdit__ExtraSelection_OperatorAssign(QTextEdit__ExtraSelection* self, const QTextEdit__ExtraSelection* param1) {
	self->operator=(*param1);
}

void QTextEdit__ExtraSelection_Delete(QTextEdit__ExtraSelection* self) {
    delete self;
}

