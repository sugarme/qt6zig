#include <QContextMenuEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QKeyEvent>
#include <QLabel>
#include <QMouseEvent>
#include <QMovie>
#include <QPaintEvent>
#include <QPicture>
#include <QPixmap>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <qlabel.h>
#include "libqlabel.h"
#include "libqlabel.hxx"

QLabel* QLabel_new(QWidget* parent) {
	 return new VirtualQLabel(parent);
}

QLabel* QLabel_new2() {
	 return new VirtualQLabel();
}

QLabel* QLabel_new3(const libqt_string text) {
	 return new VirtualQLabel(QString::fromUtf8(text.data, text.len));
}

QLabel* QLabel_new4(QWidget* parent, int f) {
	 return new VirtualQLabel(parent, static_cast<QFlags<Qt::WindowType>>(f));
}

QLabel* QLabel_new5(const libqt_string text, QWidget* parent) {
	 return new VirtualQLabel(QString::fromUtf8(text.data, text.len), parent);
}

QLabel* QLabel_new6(const libqt_string text, QWidget* parent, int f) {
	 return new VirtualQLabel(QString::fromUtf8(text.data, text.len), parent, static_cast<QFlags<Qt::WindowType>>(f));
}

libqt_string QLabel_Tr(const char* s) {
	QString _ret = QLabel::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLabel_Text(const QLabel* self) {
	QString _ret = self->text();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QPixmap* QLabel_Pixmap(const QLabel* self, int param1) {
	return new QPixmap(self->pixmap(static_cast<Qt::ReturnByValueConstant>(param1)));
}

QPixmap* QLabel_Pixmap2(const QLabel* self) {
	return new QPixmap(self->pixmap());
}

QPicture* QLabel_Picture(const QLabel* self, int param1) {
	return new QPicture(self->picture(static_cast<Qt::ReturnByValueConstant>(param1)));
}

QPicture* QLabel_Picture2(const QLabel* self) {
	return new QPicture(self->picture());
}

QMovie* QLabel_Movie(const QLabel* self) {
	return self->movie();
}

int QLabel_TextFormat(const QLabel* self) {
	return self->textFormat();
}

void QLabel_SetTextFormat(QLabel* self, int textFormat) {
	self->setTextFormat(static_cast<Qt::TextFormat>(textFormat));
}

int QLabel_Alignment(const QLabel* self) {
	return self->alignment();
}

void QLabel_SetAlignment(QLabel* self, int alignment) {
	self->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

void QLabel_SetWordWrap(QLabel* self, bool on) {
	self->setWordWrap(on);
}

bool QLabel_WordWrap(const QLabel* self) {
	return self->wordWrap();
}

int QLabel_Indent(const QLabel* self) {
	return self->indent();
}

void QLabel_SetIndent(QLabel* self, int indent) {
	self->setIndent(indent);
}

int QLabel_Margin(const QLabel* self) {
	return self->margin();
}

void QLabel_SetMargin(QLabel* self, int margin) {
	self->setMargin(margin);
}

bool QLabel_HasScaledContents(const QLabel* self) {
	return self->hasScaledContents();
}

void QLabel_SetScaledContents(QLabel* self, bool scaledContents) {
	self->setScaledContents(scaledContents);
}

QSize* QLabel_SizeHint(const QLabel* self) {
	return new QSize(self->sizeHint());
}

QSize* QLabel_MinimumSizeHint(const QLabel* self) {
	return new QSize(self->minimumSizeHint());
}

void QLabel_SetBuddy(QLabel* self, QWidget* buddy) {
	self->setBuddy(buddy);
}

QWidget* QLabel_Buddy(const QLabel* self) {
	return self->buddy();
}

int QLabel_HeightForWidth(const QLabel* self, int param1) {
	return self->heightForWidth(param1);
}

bool QLabel_OpenExternalLinks(const QLabel* self) {
	return self->openExternalLinks();
}

void QLabel_SetOpenExternalLinks(QLabel* self, bool open) {
	self->setOpenExternalLinks(open);
}

void QLabel_SetTextInteractionFlags(QLabel* self, int flags) {
	self->setTextInteractionFlags(static_cast<QFlags<Qt::TextInteractionFlag>>(flags));
}

int QLabel_TextInteractionFlags(const QLabel* self) {
	return self->textInteractionFlags();
}

void QLabel_SetSelection(QLabel* self, int param1, int param2) {
	self->setSelection(param1, param2);
}

bool QLabel_HasSelectedText(const QLabel* self) {
	return self->hasSelectedText();
}

libqt_string QLabel_SelectedText(const QLabel* self) {
	QString _ret = self->selectedText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QLabel_SelectionStart(const QLabel* self) {
	return self->selectionStart();
}

void QLabel_SetText(QLabel* self, const libqt_string text) {
	self->setText(QString::fromUtf8(text.data, text.len));
}

void QLabel_SetPixmap(QLabel* self, const QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

void QLabel_SetPicture(QLabel* self, const QPicture* picture) {
	self->setPicture(*picture);
}

void QLabel_SetMovie(QLabel* self, QMovie* movie) {
	self->setMovie(movie);
}

void QLabel_SetNum(QLabel* self, int num) {
	self->setNum(num);
}

void QLabel_SetNum2(QLabel* self, double num) {
	self->setNum(num);
}

void QLabel_Clear(QLabel* self) {
	self->clear();
}

void QLabel_LinkActivated(QLabel* self, const libqt_string link) {
	self->linkActivated(QString::fromUtf8(link.data, link.len));
}

void QLabel_Connect_LinkActivated(QLabel* self, intptr_t slot) {
    void (*slotFunc)(QLabel*, const char*) = reinterpret_cast<void (*)(QLabel*, const char*)>(slot);
    QLabel::connect(self, &QLabel::linkActivated, [self, slotFunc](const QString& link) {
	slotFunc(self, link);
    });
}

void QLabel_LinkHovered(QLabel* self, const libqt_string link) {
	self->linkHovered(QString::fromUtf8(link.data, link.len));
}

void QLabel_Connect_LinkHovered(QLabel* self, intptr_t slot) {
    void (*slotFunc)(QLabel*, const char*) = reinterpret_cast<void (*)(QLabel*, const char*)>(slot);
    QLabel::connect(self, &QLabel::linkHovered, [self, slotFunc](const QString& link) {
	slotFunc(self, link);
    });
}

libqt_string QLabel_Tr2(const char* s, const char* c) {
	QString _ret = QLabel::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLabel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLabel::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QLabel_QBaseSizeHint(const QLabel* self) {
	auto* vqlabel = dynamic_cast<const VirtualQLabel*>(self);
	if (vqlabel && vqlabel->isVirtualQLabel) {
vqlabel->setQLabel_SizeHint_IsBase(true);
	return new QSize(vqlabel->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnSizeHint(const QLabel* self, intptr_t slot) {
	auto* vqlabel = dynamic_cast<const VirtualQLabel*>(self);
	if (vqlabel && vqlabel->isVirtualQLabel) {
vqlabel->setQLabel_SizeHint_Callback(reinterpret_cast<VirtualQLabel::QLabel_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QLabel_QBaseMinimumSizeHint(const QLabel* self) {
	auto* vqlabel = dynamic_cast<const VirtualQLabel*>(self);
	if (vqlabel && vqlabel->isVirtualQLabel) {
vqlabel->setQLabel_MinimumSizeHint_IsBase(true);
	return new QSize(vqlabel->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnMinimumSizeHint(const QLabel* self, intptr_t slot) {
	auto* vqlabel = dynamic_cast<const VirtualQLabel*>(self);
	if (vqlabel && vqlabel->isVirtualQLabel) {
vqlabel->setQLabel_MinimumSizeHint_Callback(reinterpret_cast<VirtualQLabel::QLabel_MinimumSizeHint_Callback>(slot));
}
}

// Base class handler implementation
int QLabel_QBaseHeightForWidth(const QLabel* self, int param1) {
	auto* vqlabel = dynamic_cast<const VirtualQLabel*>(self);
	if (vqlabel && vqlabel->isVirtualQLabel) {
vqlabel->setQLabel_HeightForWidth_IsBase(true);
	return vqlabel->heightForWidth(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnHeightForWidth(const QLabel* self, intptr_t slot) {
	auto* vqlabel = dynamic_cast<const VirtualQLabel*>(self);
	if (vqlabel && vqlabel->isVirtualQLabel) {
vqlabel->setQLabel_HeightForWidth_Callback(reinterpret_cast<VirtualQLabel::QLabel_HeightForWidth_Callback>(slot));
}
}

void QLabel_Delete(QLabel* self) {
    delete self;
}

