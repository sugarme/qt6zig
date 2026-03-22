#include <QClipboard>
#include <QImage>
#include <QMimeData>
#include <QObject>
#include <QPixmap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qclipboard.h>
#include "libqclipboard.h"
#include "libqclipboard.hxx"

libqt_string QClipboard_Tr(const char* s) {
	QString _ret = QClipboard::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QClipboard_Clear(QClipboard* self) {
	self->clear();
}

bool QClipboard_SupportsSelection(const QClipboard* self) {
	return self->supportsSelection();
}

bool QClipboard_SupportsFindBuffer(const QClipboard* self) {
	return self->supportsFindBuffer();
}

bool QClipboard_OwnsSelection(const QClipboard* self) {
	return self->ownsSelection();
}

bool QClipboard_OwnsClipboard(const QClipboard* self) {
	return self->ownsClipboard();
}

bool QClipboard_OwnsFindBuffer(const QClipboard* self) {
	return self->ownsFindBuffer();
}

libqt_string QClipboard_Text(const QClipboard* self) {
	QString _ret = self->text();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QClipboard_Text2(const QClipboard* self, libqt_string subtype) {
	QString _ret = self->text(QString::fromUtf8(subtype.data, subtype.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QClipboard_SetText(QClipboard* self, const libqt_string param1) {
	self->setText(QString::fromUtf8(param1.data, param1.len));
}

const QMimeData* QClipboard_MimeData(const QClipboard* self) {
	return self->mimeData();
}

void QClipboard_SetMimeData(QClipboard* self, QMimeData* data) {
	self->setMimeData(data);
}

QImage* QClipboard_Image(const QClipboard* self) {
	return new QImage(self->image());
}

QPixmap* QClipboard_Pixmap(const QClipboard* self) {
	return new QPixmap(self->pixmap());
}

void QClipboard_SetImage(QClipboard* self, const QImage* param1) {
	self->setImage(*param1);
}

void QClipboard_SetPixmap(QClipboard* self, const QPixmap* param1) {
	self->setPixmap(*param1);
}

void QClipboard_Changed(QClipboard* self, int mode) {
	self->changed(static_cast<QClipboard::Mode>(mode));
}

void QClipboard_Connect_Changed(QClipboard* self, intptr_t slot) {
    void (*slotFunc)(QClipboard*, int) = reinterpret_cast<void (*)(QClipboard*, int)>(slot);
    QClipboard::connect(self, &QClipboard::changed, [self, slotFunc](QClipboard::Mode mode) {
	slotFunc(self, mode);
    });
}

void QClipboard_SelectionChanged(QClipboard* self) {
	self->selectionChanged();
}

void QClipboard_Connect_SelectionChanged(QClipboard* self, intptr_t slot) {
    void (*slotFunc)(QClipboard*) = reinterpret_cast<void (*)(QClipboard*)>(slot);
    QClipboard::connect(self, &QClipboard::selectionChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QClipboard_FindBufferChanged(QClipboard* self) {
	self->findBufferChanged();
}

void QClipboard_Connect_FindBufferChanged(QClipboard* self, intptr_t slot) {
    void (*slotFunc)(QClipboard*) = reinterpret_cast<void (*)(QClipboard*)>(slot);
    QClipboard::connect(self, &QClipboard::findBufferChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QClipboard_DataChanged(QClipboard* self) {
	self->dataChanged();
}

void QClipboard_Connect_DataChanged(QClipboard* self, intptr_t slot) {
    void (*slotFunc)(QClipboard*) = reinterpret_cast<void (*)(QClipboard*)>(slot);
    QClipboard::connect(self, &QClipboard::dataChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QClipboard_Tr2(const char* s, const char* c) {
	QString _ret = QClipboard::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QClipboard_Tr3(const char* s, const char* c, int n) {
	QString _ret = QClipboard::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QClipboard_Clear1(QClipboard* self, int mode) {
	self->clear(static_cast<QLCDNumber::Mode>(mode));
}

libqt_string QClipboard_Text1(const QClipboard* self, int mode) {
	QString _ret = self->text(static_cast<QLCDNumber::Mode>(mode));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QClipboard_Text22(const QClipboard* self, libqt_string subtype, int mode) {
	QString _ret = self->text(QString::fromUtf8(subtype.data, subtype.len), static_cast<QLCDNumber::Mode>(mode));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QClipboard_SetText2(QClipboard* self, const libqt_string param1, int mode) {
	self->setText(QString::fromUtf8(param1.data, param1.len), static_cast<QLCDNumber::Mode>(mode));
}

const QMimeData* QClipboard_MimeData1(const QClipboard* self, int mode) {
	return self->mimeData(static_cast<QLCDNumber::Mode>(mode));
}

void QClipboard_SetMimeData2(QClipboard* self, QMimeData* data, int mode) {
	self->setMimeData(data, static_cast<QLCDNumber::Mode>(mode));
}

QImage* QClipboard_Image1(const QClipboard* self, int mode) {
	return new QImage(self->image(static_cast<QLCDNumber::Mode>(mode)));
}

QPixmap* QClipboard_Pixmap1(const QClipboard* self, int mode) {
	return new QPixmap(self->pixmap(static_cast<QLCDNumber::Mode>(mode)));
}

void QClipboard_SetImage2(QClipboard* self, const QImage* param1, int mode) {
	self->setImage(*param1, static_cast<QLCDNumber::Mode>(mode));
}

void QClipboard_SetPixmap2(QClipboard* self, const QPixmap* param1, int mode) {
	self->setPixmap(*param1, static_cast<QLCDNumber::Mode>(mode));
}

