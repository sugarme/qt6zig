#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextBlock>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextBlock__iterator
#include <QTextBlockFormat>
#include <QTextBlockGroup>
#include <QTextBlockUserData>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextFormat>
#include <QTextFragment>
#include <QTextFrame>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextFrame__iterator
#include <QTextFrameFormat>
#include <QTextFrameLayoutData>
#include <QTextLayout>
#include <QTextList>
#include <QTextObject>
#include <qtextobject.h>
#include "libqtextobject.h"
#include "libqtextobject.hxx"

libqt_string QTextObject_Tr(const char* s) {
	QString _ret = QTextObject::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QTextFormat* QTextObject_Format(const QTextObject* self) {
	return new QTextFormat(self->format());
}

int QTextObject_FormatIndex(const QTextObject* self) {
	return self->formatIndex();
}

QTextDocument* QTextObject_Document(const QTextObject* self) {
	return self->document();
}

int QTextObject_ObjectIndex(const QTextObject* self) {
	return self->objectIndex();
}

libqt_string QTextObject_Tr2(const char* s, const char* c) {
	QString _ret = QTextObject::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTextObject_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextObject::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTextBlockGroup_Tr(const char* s) {
	QString _ret = QTextBlockGroup::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTextBlockGroup_Tr2(const char* s, const char* c) {
	QString _ret = QTextBlockGroup::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTextBlockGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextBlockGroup::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
void QTextBlockGroup_BlockInserted(QTextBlockGroup* self, const QTextBlock* block) {
	auto* vqtextblockgroup = dynamic_cast<VirtualQTextBlockGroup*>(self);
	if (vqtextblockgroup && vqtextblockgroup->isVirtualQTextBlockGroup) {
	vqtextblockgroup->blockInserted(*block);
	} else {
	self->QTextBlockGroup::blockInserted(*block);
}
}

// Base class handler implementation
void QTextBlockGroup_QBaseBlockInserted(QTextBlockGroup* self, const QTextBlock* block) {
	auto* vqtextblockgroup = dynamic_cast<VirtualQTextBlockGroup*>(self);
	if (vqtextblockgroup && vqtextblockgroup->isVirtualQTextBlockGroup) {
vqtextblockgroup->setQTextBlockGroup_BlockInserted_IsBase(true);
	vqtextblockgroup->blockInserted(*block);
}
}

// Auxiliary method to allow providing re-implementation
void QTextBlockGroup_OnBlockInserted(QTextBlockGroup* self, intptr_t slot) {
	auto* vqtextblockgroup = dynamic_cast<VirtualQTextBlockGroup*>(self);
	if (vqtextblockgroup && vqtextblockgroup->isVirtualQTextBlockGroup) {
vqtextblockgroup->setQTextBlockGroup_BlockInserted_Callback(reinterpret_cast<VirtualQTextBlockGroup::QTextBlockGroup_BlockInserted_Callback>(slot));
}
}

// Derived class handler implementation
void QTextBlockGroup_BlockRemoved(QTextBlockGroup* self, const QTextBlock* block) {
	auto* vqtextblockgroup = dynamic_cast<VirtualQTextBlockGroup*>(self);
	if (vqtextblockgroup && vqtextblockgroup->isVirtualQTextBlockGroup) {
	vqtextblockgroup->blockRemoved(*block);
	} else {
	self->QTextBlockGroup::blockRemoved(*block);
}
}

// Base class handler implementation
void QTextBlockGroup_QBaseBlockRemoved(QTextBlockGroup* self, const QTextBlock* block) {
	auto* vqtextblockgroup = dynamic_cast<VirtualQTextBlockGroup*>(self);
	if (vqtextblockgroup && vqtextblockgroup->isVirtualQTextBlockGroup) {
vqtextblockgroup->setQTextBlockGroup_BlockRemoved_IsBase(true);
	vqtextblockgroup->blockRemoved(*block);
}
}

// Auxiliary method to allow providing re-implementation
void QTextBlockGroup_OnBlockRemoved(QTextBlockGroup* self, intptr_t slot) {
	auto* vqtextblockgroup = dynamic_cast<VirtualQTextBlockGroup*>(self);
	if (vqtextblockgroup && vqtextblockgroup->isVirtualQTextBlockGroup) {
vqtextblockgroup->setQTextBlockGroup_BlockRemoved_Callback(reinterpret_cast<VirtualQTextBlockGroup::QTextBlockGroup_BlockRemoved_Callback>(slot));
}
}

// Derived class handler implementation
void QTextBlockGroup_BlockFormatChanged(QTextBlockGroup* self, const QTextBlock* block) {
	auto* vqtextblockgroup = dynamic_cast<VirtualQTextBlockGroup*>(self);
	if (vqtextblockgroup && vqtextblockgroup->isVirtualQTextBlockGroup) {
	vqtextblockgroup->blockFormatChanged(*block);
	} else {
	self->QTextBlockGroup::blockFormatChanged(*block);
}
}

// Base class handler implementation
void QTextBlockGroup_QBaseBlockFormatChanged(QTextBlockGroup* self, const QTextBlock* block) {
	auto* vqtextblockgroup = dynamic_cast<VirtualQTextBlockGroup*>(self);
	if (vqtextblockgroup && vqtextblockgroup->isVirtualQTextBlockGroup) {
vqtextblockgroup->setQTextBlockGroup_BlockFormatChanged_IsBase(true);
	vqtextblockgroup->blockFormatChanged(*block);
}
}

// Auxiliary method to allow providing re-implementation
void QTextBlockGroup_OnBlockFormatChanged(QTextBlockGroup* self, intptr_t slot) {
	auto* vqtextblockgroup = dynamic_cast<VirtualQTextBlockGroup*>(self);
	if (vqtextblockgroup && vqtextblockgroup->isVirtualQTextBlockGroup) {
vqtextblockgroup->setQTextBlockGroup_BlockFormatChanged_Callback(reinterpret_cast<VirtualQTextBlockGroup::QTextBlockGroup_BlockFormatChanged_Callback>(slot));
}
}

// Derived class handler implementation
libqt_list QTextBlockGroup_BlockList(const QTextBlockGroup* self) {
	auto* vqtextblockgroup = dynamic_cast<const VirtualQTextBlockGroup*>(self);
	if (vqtextblockgroup && vqtextblockgroup->isVirtualQTextBlockGroup) {
	return vqtextblockgroup->blockList();
	} else {
	return self->QTextBlockGroup::blockList();
}
}

// Base class handler implementation
libqt_list QTextBlockGroup_QBaseBlockList(const QTextBlockGroup* self) {
	auto* vqtextblockgroup = dynamic_cast<const VirtualQTextBlockGroup*>(self);
	if (vqtextblockgroup && vqtextblockgroup->isVirtualQTextBlockGroup) {
vqtextblockgroup->setQTextBlockGroup_BlockList_IsBase(true);
	return vqtextblockgroup->blockList();
}
}

// Auxiliary method to allow providing re-implementation
void QTextBlockGroup_OnBlockList(const QTextBlockGroup* self, intptr_t slot) {
	auto* vqtextblockgroup = dynamic_cast<const VirtualQTextBlockGroup*>(self);
	if (vqtextblockgroup && vqtextblockgroup->isVirtualQTextBlockGroup) {
vqtextblockgroup->setQTextBlockGroup_BlockList_Callback(reinterpret_cast<VirtualQTextBlockGroup::QTextBlockGroup_BlockList_Callback>(slot));
}
}

QTextFrameLayoutData* QTextFrameLayoutData_new() {
	 return new QTextFrameLayoutData();
}

QTextFrameLayoutData* QTextFrameLayoutData_new2(const QTextFrameLayoutData* param1) {
	 return new QTextFrameLayoutData(*param1);
}

void QTextFrameLayoutData_OperatorAssign(QTextFrameLayoutData* self, const QTextFrameLayoutData* param1) {
	self->operator=(*param1);
}

void QTextFrameLayoutData_Delete(QTextFrameLayoutData* self) {
    delete self;
}

QTextFrame* QTextFrame_new(QTextDocument* doc) {
	 return new QTextFrame(doc);
}

libqt_string QTextFrame_Tr(const char* s) {
	QString _ret = QTextFrame::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTextFrame_SetFrameFormat(QTextFrame* self, const QTextFrameFormat* format) {
	self->setFrameFormat(*format);
}

QTextFrameFormat* QTextFrame_FrameFormat(const QTextFrame* self) {
	return new QTextFrameFormat(self->frameFormat());
}

QTextCursor* QTextFrame_FirstCursorPosition(const QTextFrame* self) {
	return new QTextCursor(self->firstCursorPosition());
}

QTextCursor* QTextFrame_LastCursorPosition(const QTextFrame* self) {
	return new QTextCursor(self->lastCursorPosition());
}

int QTextFrame_FirstPosition(const QTextFrame* self) {
	return self->firstPosition();
}

int QTextFrame_LastPosition(const QTextFrame* self) {
	return self->lastPosition();
}

QTextFrameLayoutData* QTextFrame_LayoutData(const QTextFrame* self) {
	return self->layoutData();
}

void QTextFrame_SetLayoutData(QTextFrame* self, QTextFrameLayoutData* data) {
	self->setLayoutData(data);
}

libqt_list QTextFrame_ChildFrames(const QTextFrame* self) {
	return self->childFrames();
}

QTextFrame* QTextFrame_ParentFrame(const QTextFrame* self) {
	return self->parentFrame();
}

It::value_type* QTextFrame_Begin(const QTextFrame* self) {
	return self->begin();
}

It::value_type* QTextFrame_End(const QTextFrame* self) {
	return self->end();
}

libqt_string QTextFrame_Tr2(const char* s, const char* c) {
	QString _ret = QTextFrame::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTextFrame_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextFrame::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTextFrame_Delete(QTextFrame* self) {
    delete self;
}

QTextBlockUserData* QTextBlockUserData_new() {
	 return new QTextBlockUserData();
}

QTextBlockUserData* QTextBlockUserData_new2(const QTextBlockUserData* param1) {
	 return new QTextBlockUserData(*param1);
}

void QTextBlockUserData_OperatorAssign(QTextBlockUserData* self, const QTextBlockUserData* param1) {
	self->operator=(*param1);
}

void QTextBlockUserData_Delete(QTextBlockUserData* self) {
    delete self;
}

QTextBlock* QTextBlock_new(QTextDocumentPrivate* priv, int b) {
	 return new QTextBlock(priv, b);
}

QTextBlock* QTextBlock_new2() {
	 return new QTextBlock();
}

QTextBlock* QTextBlock_new3(const QTextBlock* o) {
	 return new QTextBlock(*o);
}

void QTextBlock_OperatorAssign(QTextBlock* self, const QTextBlock* o) {
	self->operator=(*o);
}

bool QTextBlock_IsValid(const QTextBlock* self) {
	return self->isValid();
}

bool QTextBlock_OperatorEqual(const QTextBlock* self, const QTextBlock* o) {
	return self->operator==(*o);
}

bool QTextBlock_OperatorNotEqual(const QTextBlock* self, const QTextBlock* o) {
	return self->operator!=(*o);
}

bool QTextBlock_OperatorLesser(const QTextBlock* self, const QTextBlock* o) {
	return self->operator<(*o);
}

int QTextBlock_Position(const QTextBlock* self) {
	return self->position();
}

int QTextBlock_Length(const QTextBlock* self) {
	return self->length();
}

bool QTextBlock_Contains(const QTextBlock* self, int position) {
	return self->contains(position);
}

QTextLayout* QTextBlock_Layout(const QTextBlock* self) {
	return self->layout();
}

void QTextBlock_ClearLayout(QTextBlock* self) {
	self->clearLayout();
}

QTextBlockFormat* QTextBlock_BlockFormat(const QTextBlock* self) {
	return new QTextBlockFormat(self->blockFormat());
}

int QTextBlock_BlockFormatIndex(const QTextBlock* self) {
	return self->blockFormatIndex();
}

QTextCharFormat* QTextBlock_CharFormat(const QTextBlock* self) {
	return new QTextCharFormat(self->charFormat());
}

int QTextBlock_CharFormatIndex(const QTextBlock* self) {
	return self->charFormatIndex();
}

int QTextBlock_TextDirection(const QTextBlock* self) {
	return self->textDirection();
}

libqt_string QTextBlock_Text(const QTextBlock* self) {
	QString _ret = self->text();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QTextBlock_TextFormats(const QTextBlock* self) {
	return self->textFormats();
}

const QTextDocument* QTextBlock_Document(const QTextBlock* self) {
	return self->document();
}

QTextList* QTextBlock_TextList(const QTextBlock* self) {
	return self->textList();
}

QTextBlockUserData* QTextBlock_UserData(const QTextBlock* self) {
	return self->userData();
}

void QTextBlock_SetUserData(QTextBlock* self, QTextBlockUserData* data) {
	self->setUserData(data);
}

int QTextBlock_UserState(const QTextBlock* self) {
	return self->userState();
}

void QTextBlock_SetUserState(QTextBlock* self, int state) {
	self->setUserState(state);
}

int QTextBlock_Revision(const QTextBlock* self) {
	return self->revision();
}

void QTextBlock_SetRevision(QTextBlock* self, int rev) {
	self->setRevision(rev);
}

bool QTextBlock_IsVisible(const QTextBlock* self) {
	return self->isVisible();
}

void QTextBlock_SetVisible(QTextBlock* self, bool visible) {
	self->setVisible(visible);
}

int QTextBlock_BlockNumber(const QTextBlock* self) {
	return self->blockNumber();
}

int QTextBlock_FirstLineNumber(const QTextBlock* self) {
	return self->firstLineNumber();
}

void QTextBlock_SetLineCount(QTextBlock* self, int count) {
	self->setLineCount(count);
}

int QTextBlock_LineCount(const QTextBlock* self) {
	return self->lineCount();
}

It::value_type* QTextBlock_Begin(const QTextBlock* self) {
	return self->begin();
}

It::value_type* QTextBlock_End(const QTextBlock* self) {
	return self->end();
}

QTextBlock* QTextBlock_Next(const QTextBlock* self) {
	return new QTextBlock(self->next());
}

QTextBlock* QTextBlock_Previous(const QTextBlock* self) {
	return new QTextBlock(self->previous());
}

int QTextBlock_FragmentIndex(const QTextBlock* self) {
	return self->fragmentIndex();
}

void QTextBlock_Delete(QTextBlock* self) {
    delete self;
}

QTextFragment* QTextFragment_new(const QTextDocumentPrivate* priv, int f, int fe) {
	 return new QTextFragment(priv, f, fe);
}

QTextFragment* QTextFragment_new2() {
	 return new QTextFragment();
}

QTextFragment* QTextFragment_new3(const QTextFragment* o) {
	 return new QTextFragment(*o);
}

void QTextFragment_OperatorAssign(QTextFragment* self, const QTextFragment* o) {
	self->operator=(*o);
}

bool QTextFragment_IsValid(const QTextFragment* self) {
	return self->isValid();
}

bool QTextFragment_OperatorEqual(const QTextFragment* self, const QTextFragment* o) {
	return self->operator==(*o);
}

bool QTextFragment_OperatorNotEqual(const QTextFragment* self, const QTextFragment* o) {
	return self->operator!=(*o);
}

bool QTextFragment_OperatorLesser(const QTextFragment* self, const QTextFragment* o) {
	return self->operator<(*o);
}

int QTextFragment_Position(const QTextFragment* self) {
	return self->position();
}

int QTextFragment_Length(const QTextFragment* self) {
	return self->length();
}

bool QTextFragment_Contains(const QTextFragment* self, int position) {
	return self->contains(position);
}

QTextCharFormat* QTextFragment_CharFormat(const QTextFragment* self) {
	return new QTextCharFormat(self->charFormat());
}

int QTextFragment_CharFormatIndex(const QTextFragment* self) {
	return self->charFormatIndex();
}

libqt_string QTextFragment_Text(const QTextFragment* self) {
	QString _ret = self->text();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QTextFragment_GlyphRuns(const QTextFragment* self) {
	return self->glyphRuns();
}

libqt_list QTextFragment_GlyphRuns1(const QTextFragment* self, int from) {
	return self->glyphRuns(from);
}

libqt_list QTextFragment_GlyphRuns2(const QTextFragment* self, int from, int length) {
	return self->glyphRuns(from, length);
}

void QTextFragment_Delete(QTextFragment* self) {
    delete self;
}

QTextFrame__iterator* QTextFrame__iterator_new(const QTextFrame__iterator* other) {
	 return new QTextFrame::iterator(*other);
}

QTextFrame__iterator* QTextFrame__iterator_new2(QTextFrame__iterator* other) {
	 return new QTextFrame::iterator(*other);
}

QTextFrame__iterator* QTextFrame__iterator_new3() {
	 return new QTextFrame::iterator();
}

QTextFrame__iterator* QTextFrame__iterator_new4(const QTextFrame__iterator* param1) {
	 return new QTextFrame::iterator(*param1);
}

void QTextFrame__iterator_CopyAssign(QTextFrame__iterator* self, QTextFrame__iterator* other) {
    *self = *other;
}

void QTextFrame__iterator_MoveAssign(QTextFrame__iterator* self, QTextFrame__iterator* other) {
    *self = std::move(*other);
}

QTextFrame* QTextFrame__iterator_ParentFrame(const QTextFrame__iterator* self) {
	return self->parentFrame();
}

QTextFrame* QTextFrame__iterator_CurrentFrame(const QTextFrame__iterator* self) {
	return self->currentFrame();
}

QTextBlock* QTextFrame__iterator_CurrentBlock(const QTextFrame__iterator* self) {
	return new QTextBlock(self->currentBlock());
}

bool QTextFrame__iterator_AtEnd(const QTextFrame__iterator* self) {
	return self->atEnd();
}

bool QTextFrame__iterator_OperatorEqual(const QTextFrame__iterator* self, const QTextFrame__iterator* o) {
	return self->operator==(*o);
}

bool QTextFrame__iterator_OperatorNotEqual(const QTextFrame__iterator* self, const QTextFrame__iterator* o) {
	return self->operator!=(*o);
}

It::value_type* QTextFrame__iterator_OperatorPlusPlus(QTextFrame__iterator* self) {
	return self->operator++();
}

It::value_type* QTextFrame__iterator_OperatorPlusPlus2(QTextFrame__iterator* self, int param1) {
	return self->operator++(param1);
}

It::value_type* QTextFrame__iterator_OperatorMinusMinus(QTextFrame__iterator* self) {
	return self->operator--();
}

It::value_type* QTextFrame__iterator_OperatorMinusMinus2(QTextFrame__iterator* self, int param1) {
	return self->operator--(param1);
}

void QTextFrame__iterator_Delete(QTextFrame__iterator* self) {
    delete self;
}

QTextBlock__iterator* QTextBlock__iterator_new(const QTextBlock__iterator* other) {
	 return new QTextBlock::iterator(*other);
}

QTextBlock__iterator* QTextBlock__iterator_new2(QTextBlock__iterator* other) {
	 return new QTextBlock::iterator(*other);
}

QTextBlock__iterator* QTextBlock__iterator_new3() {
	 return new QTextBlock::iterator();
}

QTextBlock__iterator* QTextBlock__iterator_new4(const QTextBlock__iterator* param1) {
	 return new QTextBlock::iterator(*param1);
}

void QTextBlock__iterator_CopyAssign(QTextBlock__iterator* self, QTextBlock__iterator* other) {
    *self = *other;
}

void QTextBlock__iterator_MoveAssign(QTextBlock__iterator* self, QTextBlock__iterator* other) {
    *self = std::move(*other);
}

QTextFragment* QTextBlock__iterator_Fragment(const QTextBlock__iterator* self) {
	return new QTextFragment(self->fragment());
}

bool QTextBlock__iterator_AtEnd(const QTextBlock__iterator* self) {
	return self->atEnd();
}

bool QTextBlock__iterator_OperatorEqual(const QTextBlock__iterator* self, const QTextBlock__iterator* o) {
	return self->operator==(*o);
}

bool QTextBlock__iterator_OperatorNotEqual(const QTextBlock__iterator* self, const QTextBlock__iterator* o) {
	return self->operator!=(*o);
}

It::value_type* QTextBlock__iterator_OperatorPlusPlus(QTextBlock__iterator* self) {
	return self->operator++();
}

It::value_type* QTextBlock__iterator_OperatorPlusPlus2(QTextBlock__iterator* self, int param1) {
	return self->operator++(param1);
}

It::value_type* QTextBlock__iterator_OperatorMinusMinus(QTextBlock__iterator* self) {
	return self->operator--();
}

It::value_type* QTextBlock__iterator_OperatorMinusMinus2(QTextBlock__iterator* self, int param1) {
	return self->operator--(param1);
}

void QTextBlock__iterator_Delete(QTextBlock__iterator* self) {
    delete self;
}

