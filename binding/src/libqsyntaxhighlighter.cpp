#include <QColor>
#include <QFont>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSyntaxHighlighter>
#include <QTextBlock>
#include <QTextBlockUserData>
#include <QTextCharFormat>
#include <QTextDocument>
#include <qsyntaxhighlighter.h>
#include "libqsyntaxhighlighter.h"
#include "libqsyntaxhighlighter.hxx"

QSyntaxHighlighter* QSyntaxHighlighter_new(QObject* parent) {
	 return new VirtualQSyntaxHighlighter(parent);
}

QSyntaxHighlighter* QSyntaxHighlighter_new2(QTextDocument* parent) {
	 return new VirtualQSyntaxHighlighter(parent);
}

libqt_string QSyntaxHighlighter_Tr(const char* s) {
	QString _ret = QSyntaxHighlighter::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSyntaxHighlighter_SetDocument(QSyntaxHighlighter* self, QTextDocument* doc) {
	self->setDocument(doc);
}

QTextDocument* QSyntaxHighlighter_Document(const QSyntaxHighlighter* self) {
	return self->document();
}

void QSyntaxHighlighter_Rehighlight(QSyntaxHighlighter* self) {
	self->rehighlight();
}

void QSyntaxHighlighter_RehighlightBlock(QSyntaxHighlighter* self, const QTextBlock* block) {
	self->rehighlightBlock(*block);
}

libqt_string QSyntaxHighlighter_Tr2(const char* s, const char* c) {
	QString _ret = QSyntaxHighlighter::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSyntaxHighlighter_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSyntaxHighlighter::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
void QSyntaxHighlighter_HighlightBlock(QSyntaxHighlighter* self, const libqt_string text) {
	auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
	vqsyntaxhighlighter->highlightBlock(QString::fromUtf8(text.data, text.len));
	} else {
	self->QSyntaxHighlighter::highlightBlock(QString::fromUtf8(text.data, text.len));
}
}

// Base class handler implementation
void QSyntaxHighlighter_QBaseHighlightBlock(QSyntaxHighlighter* self, const libqt_string text) {
	auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_HighlightBlock_IsBase(true);
	vqsyntaxhighlighter->highlightBlock(QString::fromUtf8(text.data, text.len));
}
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnHighlightBlock(QSyntaxHighlighter* self, intptr_t slot) {
	auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_HighlightBlock_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_HighlightBlock_Callback>(slot));
}
}

// Derived class handler implementation
void QSyntaxHighlighter_SetFormat(QSyntaxHighlighter* self, int start, int count, const QTextCharFormat* format) {
	auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
	vqsyntaxhighlighter->setFormat(start, count, *format);
	} else {
	self->QSyntaxHighlighter::setFormat(start, count, *format);
}
}

// Base class handler implementation
void QSyntaxHighlighter_QBaseSetFormat(QSyntaxHighlighter* self, int start, int count, const QTextCharFormat* format) {
	auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_SetFormat_IsBase(true);
	vqsyntaxhighlighter->setFormat(start, count, *format);
}
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnSetFormat(QSyntaxHighlighter* self, intptr_t slot) {
	auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_SetFormat_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_SetFormat_Callback>(slot));
}
}

// Derived class handler implementation
void QSyntaxHighlighter_SetFormat2(QSyntaxHighlighter* self, int start, int count, const QColor* color) {
	auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
	vqsyntaxhighlighter->setFormat(start, count, *color);
	} else {
	self->QSyntaxHighlighter::setFormat(start, count, *color);
}
}

// Base class handler implementation
void QSyntaxHighlighter_QBaseSetFormat2(QSyntaxHighlighter* self, int start, int count, const QColor* color) {
	auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_SetFormat2_IsBase(true);
	vqsyntaxhighlighter->setFormat(start, count, *color);
}
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnSetFormat2(QSyntaxHighlighter* self, intptr_t slot) {
	auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_SetFormat2_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_SetFormat2_Callback>(slot));
}
}

// Derived class handler implementation
void QSyntaxHighlighter_SetFormat3(QSyntaxHighlighter* self, int start, int count, const QFont* font) {
	auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
	vqsyntaxhighlighter->setFormat(start, count, *font);
	} else {
	self->QSyntaxHighlighter::setFormat(start, count, *font);
}
}

// Base class handler implementation
void QSyntaxHighlighter_QBaseSetFormat3(QSyntaxHighlighter* self, int start, int count, const QFont* font) {
	auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_SetFormat3_IsBase(true);
	vqsyntaxhighlighter->setFormat(start, count, *font);
}
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnSetFormat3(QSyntaxHighlighter* self, intptr_t slot) {
	auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_SetFormat3_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_SetFormat3_Callback>(slot));
}
}

// Derived class handler implementation
QTextCharFormat* QSyntaxHighlighter_Format(const QSyntaxHighlighter* self, int pos) {
	auto* vqsyntaxhighlighter = dynamic_cast<const VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
	return new QTextCharFormat(vqsyntaxhighlighter->format(pos));
	} else {
	return new QTextCharFormat(self->QSyntaxHighlighter::format(pos));
}
}

// Base class handler implementation
QTextCharFormat* QSyntaxHighlighter_QBaseFormat(const QSyntaxHighlighter* self, int pos) {
	auto* vqsyntaxhighlighter = dynamic_cast<const VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_Format_IsBase(true);
	return new QTextCharFormat(vqsyntaxhighlighter->format(pos));
}
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnFormat(const QSyntaxHighlighter* self, intptr_t slot) {
	auto* vqsyntaxhighlighter = dynamic_cast<const VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_Format_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_Format_Callback>(slot));
}
}

// Derived class handler implementation
int QSyntaxHighlighter_PreviousBlockState(const QSyntaxHighlighter* self) {
	auto* vqsyntaxhighlighter = dynamic_cast<const VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
	return vqsyntaxhighlighter->previousBlockState();
	} else {
	return self->QSyntaxHighlighter::previousBlockState();
}
}

// Base class handler implementation
int QSyntaxHighlighter_QBasePreviousBlockState(const QSyntaxHighlighter* self) {
	auto* vqsyntaxhighlighter = dynamic_cast<const VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_PreviousBlockState_IsBase(true);
	return vqsyntaxhighlighter->previousBlockState();
}
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnPreviousBlockState(const QSyntaxHighlighter* self, intptr_t slot) {
	auto* vqsyntaxhighlighter = dynamic_cast<const VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_PreviousBlockState_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_PreviousBlockState_Callback>(slot));
}
}

// Derived class handler implementation
int QSyntaxHighlighter_CurrentBlockState(const QSyntaxHighlighter* self) {
	auto* vqsyntaxhighlighter = dynamic_cast<const VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
	return vqsyntaxhighlighter->currentBlockState();
	} else {
	return self->QSyntaxHighlighter::currentBlockState();
}
}

// Base class handler implementation
int QSyntaxHighlighter_QBaseCurrentBlockState(const QSyntaxHighlighter* self) {
	auto* vqsyntaxhighlighter = dynamic_cast<const VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_CurrentBlockState_IsBase(true);
	return vqsyntaxhighlighter->currentBlockState();
}
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnCurrentBlockState(const QSyntaxHighlighter* self, intptr_t slot) {
	auto* vqsyntaxhighlighter = dynamic_cast<const VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_CurrentBlockState_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_CurrentBlockState_Callback>(slot));
}
}

// Derived class handler implementation
void QSyntaxHighlighter_SetCurrentBlockState(QSyntaxHighlighter* self, int newState) {
	auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
	vqsyntaxhighlighter->setCurrentBlockState(newState);
	} else {
	self->QSyntaxHighlighter::setCurrentBlockState(newState);
}
}

// Base class handler implementation
void QSyntaxHighlighter_QBaseSetCurrentBlockState(QSyntaxHighlighter* self, int newState) {
	auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_SetCurrentBlockState_IsBase(true);
	vqsyntaxhighlighter->setCurrentBlockState(newState);
}
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnSetCurrentBlockState(QSyntaxHighlighter* self, intptr_t slot) {
	auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_SetCurrentBlockState_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_SetCurrentBlockState_Callback>(slot));
}
}

// Derived class handler implementation
void QSyntaxHighlighter_SetCurrentBlockUserData(QSyntaxHighlighter* self, QTextBlockUserData* data) {
	auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
	vqsyntaxhighlighter->setCurrentBlockUserData(data);
	} else {
	self->QSyntaxHighlighter::setCurrentBlockUserData(data);
}
}

// Base class handler implementation
void QSyntaxHighlighter_QBaseSetCurrentBlockUserData(QSyntaxHighlighter* self, QTextBlockUserData* data) {
	auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_SetCurrentBlockUserData_IsBase(true);
	vqsyntaxhighlighter->setCurrentBlockUserData(data);
}
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnSetCurrentBlockUserData(QSyntaxHighlighter* self, intptr_t slot) {
	auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_SetCurrentBlockUserData_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_SetCurrentBlockUserData_Callback>(slot));
}
}

// Derived class handler implementation
QTextBlockUserData* QSyntaxHighlighter_CurrentBlockUserData(const QSyntaxHighlighter* self) {
	auto* vqsyntaxhighlighter = dynamic_cast<const VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
	return vqsyntaxhighlighter->currentBlockUserData();
	} else {
	return self->QSyntaxHighlighter::currentBlockUserData();
}
}

// Base class handler implementation
QTextBlockUserData* QSyntaxHighlighter_QBaseCurrentBlockUserData(const QSyntaxHighlighter* self) {
	auto* vqsyntaxhighlighter = dynamic_cast<const VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_CurrentBlockUserData_IsBase(true);
	return vqsyntaxhighlighter->currentBlockUserData();
}
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnCurrentBlockUserData(const QSyntaxHighlighter* self, intptr_t slot) {
	auto* vqsyntaxhighlighter = dynamic_cast<const VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_CurrentBlockUserData_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_CurrentBlockUserData_Callback>(slot));
}
}

// Derived class handler implementation
QTextBlock* QSyntaxHighlighter_CurrentBlock(const QSyntaxHighlighter* self) {
	auto* vqsyntaxhighlighter = dynamic_cast<const VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
	return new QTextBlock(vqsyntaxhighlighter->currentBlock());
	} else {
	return new QTextBlock(self->QSyntaxHighlighter::currentBlock());
}
}

// Base class handler implementation
QTextBlock* QSyntaxHighlighter_QBaseCurrentBlock(const QSyntaxHighlighter* self) {
	auto* vqsyntaxhighlighter = dynamic_cast<const VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_CurrentBlock_IsBase(true);
	return new QTextBlock(vqsyntaxhighlighter->currentBlock());
}
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnCurrentBlock(const QSyntaxHighlighter* self, intptr_t slot) {
	auto* vqsyntaxhighlighter = dynamic_cast<const VirtualQSyntaxHighlighter*>(self);
	if (vqsyntaxhighlighter && vqsyntaxhighlighter->isVirtualQSyntaxHighlighter) {
vqsyntaxhighlighter->setQSyntaxHighlighter_CurrentBlock_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_CurrentBlock_Callback>(slot));
}
}

void QSyntaxHighlighter_Delete(QSyntaxHighlighter* self) {
    delete self;
}

