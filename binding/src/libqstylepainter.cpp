#include <QPaintDevice>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOption>
#include <QStyleOptionComplex>
#include <QStylePainter>
#include <QWidget>
#include <qstylepainter.h>
#include "libqstylepainter.h"
#include "libqstylepainter.hxx"

QStylePainter* QStylePainter_new(QWidget* w) {
	 return new QStylePainter(w);
}

QStylePainter* QStylePainter_new2() {
	 return new QStylePainter();
}

QStylePainter* QStylePainter_new3(QPaintDevice* pd, QWidget* w) {
	 return new QStylePainter(pd, w);
}

bool QStylePainter_Begin(QStylePainter* self, QWidget* w) {
	return self->begin(w);
}

bool QStylePainter_Begin2(QStylePainter* self, QPaintDevice* pd, QWidget* w) {
	return self->begin(pd, w);
}

void QStylePainter_DrawPrimitive(QStylePainter* self, int pe, const QStyleOption* opt) {
	self->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), *opt);
}

void QStylePainter_DrawControl(QStylePainter* self, int ce, const QStyleOption* opt) {
	self->drawControl(static_cast<QStyle::ControlElement>(ce), *opt);
}

void QStylePainter_DrawComplexControl(QStylePainter* self, int cc, const QStyleOptionComplex* opt) {
	self->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), *opt);
}

void QStylePainter_DrawItemText(QStylePainter* self, const QRect* r, int flags, const QPalette* pal, bool enabled, const libqt_string text) {
	self->drawItemText(*r, flags, *pal, enabled, QString::fromUtf8(text.data, text.len));
}

void QStylePainter_DrawItemPixmap(QStylePainter* self, const QRect* r, int flags, const QPixmap* pixmap) {
	self->drawItemPixmap(*r, flags, *pixmap);
}

QStyle* QStylePainter_Style(const QStylePainter* self) {
	return self->style();
}

void QStylePainter_DrawItemText6(QStylePainter* self, const QRect* r, int flags, const QPalette* pal, bool enabled, const libqt_string text, int textRole) {
	self->drawItemText(*r, flags, *pal, enabled, QString::fromUtf8(text.data, text.len), static_cast<QPalette::ColorRole>(textRole));
}

void QStylePainter_Delete(QStylePainter* self) {
    delete self;
}

