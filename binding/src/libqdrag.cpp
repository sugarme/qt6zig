#include <QDrag>
#include <QMimeData>
#include <QObject>
#include <QPixmap>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qdrag.h>
#include "libqdrag.h"
#include "libqdrag.hxx"

QDrag* QDrag_new(QObject* dragSource) {
	 return new QDrag(dragSource);
}

libqt_string QDrag_Tr(const char* s) {
	QString _ret = QDrag::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QDrag_SetMimeData(QDrag* self, QMimeData* data) {
	self->setMimeData(data);
}

QMimeData* QDrag_MimeData(const QDrag* self) {
	return self->mimeData();
}

void QDrag_SetPixmap(QDrag* self, const QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

QPixmap* QDrag_Pixmap(const QDrag* self) {
	return new QPixmap(self->pixmap());
}

void QDrag_SetHotSpot(QDrag* self, const QPoint* hotspot) {
	self->setHotSpot(*hotspot);
}

QPoint* QDrag_HotSpot(const QDrag* self) {
	return new QPoint(self->hotSpot());
}

QObject* QDrag_Source(const QDrag* self) {
	return self->source();
}

QObject* QDrag_Target(const QDrag* self) {
	return self->target();
}

int QDrag_Exec(QDrag* self) {
	return self->exec();
}

int QDrag_Exec2(QDrag* self, int supportedActions, int defaultAction) {
	return self->exec(static_cast<QFlags<Qt::DropAction>>(supportedActions), static_cast<Qt::DropAction>(defaultAction));
}

void QDrag_SetDragCursor(QDrag* self, const QPixmap* cursor, int action) {
	self->setDragCursor(*cursor, static_cast<Qt::DropAction>(action));
}

QPixmap* QDrag_DragCursor(const QDrag* self, int action) {
	return new QPixmap(self->dragCursor(static_cast<Qt::DropAction>(action)));
}

int QDrag_SupportedActions(const QDrag* self) {
	return self->supportedActions();
}

int QDrag_DefaultAction(const QDrag* self) {
	return self->defaultAction();
}

void QDrag_Cancel() {
	QDrag::cancel();
}

void QDrag_ActionChanged(QDrag* self, int action) {
	self->actionChanged(static_cast<Qt::DropAction>(action));
}

void QDrag_Connect_ActionChanged(QDrag* self, intptr_t slot) {
    void (*slotFunc)(QDrag*, int) = reinterpret_cast<void (*)(QDrag*, int)>(slot);
    QDrag::connect(self, &QDrag::actionChanged, [self, slotFunc](Qt::DropAction action) {
	slotFunc(self, action);
    });
}

void QDrag_TargetChanged(QDrag* self, QObject* newTarget) {
	self->targetChanged(newTarget);
}

void QDrag_Connect_TargetChanged(QDrag* self, intptr_t slot) {
    void (*slotFunc)(QDrag*, QObject*) = reinterpret_cast<void (*)(QDrag*, QObject*)>(slot);
    QDrag::connect(self, &QDrag::targetChanged, [self, slotFunc](QObject* newTarget) {
	slotFunc(self, newTarget);
    });
}

libqt_string QDrag_Tr2(const char* s, const char* c) {
	QString _ret = QDrag::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDrag_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDrag::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QDrag_Exec1(QDrag* self, int supportedActions) {
	return self->exec(static_cast<QFlags<Qt::DropAction>>(supportedActions));
}

void QDrag_Delete(QDrag* self) {
    delete self;
}

