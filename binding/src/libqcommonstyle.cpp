#include <QApplication>
#include <QCommonStyle>
#include <QIcon>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleHintReturn>
#include <QStyleOption>
#include <QStyleOptionComplex>
#include <QWidget>
#include <qcommonstyle.h>
#include "libqcommonstyle.h"
#include "libqcommonstyle.hxx"

QCommonStyle* QCommonStyle_new() {
	 return new VirtualQCommonStyle();
}

libqt_string QCommonStyle_Tr(const char* s) {
	QString _ret = QCommonStyle::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCommonStyle_DrawPrimitive(const QCommonStyle* self, int pe, const QStyleOption* opt, QPainter* p, const QWidget* w) {
	self->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
}

void QCommonStyle_DrawControl(const QCommonStyle* self, int element, const QStyleOption* opt, QPainter* p, const QWidget* w) {
	self->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
}

QRect* QCommonStyle_SubElementRect(const QCommonStyle* self, int r, const QStyleOption* opt, const QWidget* widget) {
	return new QRect(self->subElementRect(static_cast<QStyle::SubElement>(r), opt, widget));
}

void QCommonStyle_DrawComplexControl(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* w) {
	self->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, w);
}

int QCommonStyle_HitTestComplexControl(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, const QPoint* pt, const QWidget* w) {
	return self->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, w);
}

QRect* QCommonStyle_SubControlRect(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, int sc, const QWidget* w) {
	return new QRect(self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), w));
}

QSize* QCommonStyle_SizeFromContents(const QCommonStyle* self, int ct, const QStyleOption* opt, const QSize* contentsSize, const QWidget* widget) {
	return new QSize(self->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, widget));
}

int QCommonStyle_PixelMetric(const QCommonStyle* self, int m, const QStyleOption* opt, const QWidget* widget) {
	return self->pixelMetric(static_cast<QStyle::PixelMetric>(m), opt, widget);
}

int QCommonStyle_StyleHint(const QCommonStyle* self, int sh, const QStyleOption* opt, const QWidget* w, QStyleHintReturn* shret) {
	return self->styleHint(static_cast<QStyle::StyleHint>(sh), opt, w, shret);
}

QIcon* QCommonStyle_StandardIcon(const QCommonStyle* self, int standardIcon, const QStyleOption* opt, const QWidget* widget) {
	return new QIcon(self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), opt, widget));
}

QPixmap* QCommonStyle_StandardPixmap(const QCommonStyle* self, int sp, const QStyleOption* opt, const QWidget* widget) {
	return new QPixmap(self->standardPixmap(static_cast<QStyle::StandardPixmap>(sp), opt, widget));
}

QPixmap* QCommonStyle_GeneratedIconPixmap(const QCommonStyle* self, int iconMode, const QPixmap* pixmap, const QStyleOption* opt) {
	return new QPixmap(self->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
}

int QCommonStyle_LayoutSpacing(const QCommonStyle* self, int control1, int control2, int orientation, const QStyleOption* option, const QWidget* widget) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
}

void QCommonStyle_Polish(QCommonStyle* self, QPalette* param1) {
	self->polish(*param1);
}

void QCommonStyle_Polish2(QCommonStyle* self, QApplication* app) {
	self->polish(app);
}

void QCommonStyle_Polish3(QCommonStyle* self, QWidget* widget) {
	self->polish(widget);
}

void QCommonStyle_Unpolish(QCommonStyle* self, QWidget* widget) {
	self->unpolish(widget);
}

void QCommonStyle_Unpolish2(QCommonStyle* self, QApplication* application) {
	self->unpolish(application);
}

libqt_string QCommonStyle_Tr2(const char* s, const char* c) {
	QString _ret = QCommonStyle::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QCommonStyle_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCommonStyle::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QCommonStyle_QBaseDrawPrimitive(const QCommonStyle* self, int pe, const QStyleOption* opt, QPainter* p, const QWidget* w) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_DrawPrimitive_IsBase(true);
	vqcommonstyle->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
}
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDrawPrimitive(const QCommonStyle* self, intptr_t slot) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_DrawPrimitive_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DrawPrimitive_Callback>(slot));
}
}

// Base class handler implementation
void QCommonStyle_QBaseDrawControl(const QCommonStyle* self, int element, const QStyleOption* opt, QPainter* p, const QWidget* w) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_DrawControl_IsBase(true);
	vqcommonstyle->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
}
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDrawControl(const QCommonStyle* self, intptr_t slot) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_DrawControl_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DrawControl_Callback>(slot));
}
}

// Base class handler implementation
QRect* QCommonStyle_QBaseSubElementRect(const QCommonStyle* self, int r, const QStyleOption* opt, const QWidget* widget) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_SubElementRect_IsBase(true);
	return new QRect(vqcommonstyle->subElementRect(static_cast<QStyle::SubElement>(r), opt, widget));
}
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnSubElementRect(const QCommonStyle* self, intptr_t slot) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_SubElementRect_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_SubElementRect_Callback>(slot));
}
}

// Base class handler implementation
void QCommonStyle_QBaseDrawComplexControl(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* w) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_DrawComplexControl_IsBase(true);
	vqcommonstyle->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, w);
}
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDrawComplexControl(const QCommonStyle* self, intptr_t slot) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_DrawComplexControl_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DrawComplexControl_Callback>(slot));
}
}

// Base class handler implementation
int QCommonStyle_QBaseHitTestComplexControl(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, const QPoint* pt, const QWidget* w) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_HitTestComplexControl_IsBase(true);
	return vqcommonstyle->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, w);
}
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnHitTestComplexControl(const QCommonStyle* self, intptr_t slot) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_HitTestComplexControl_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_HitTestComplexControl_Callback>(slot));
}
}

// Base class handler implementation
QRect* QCommonStyle_QBaseSubControlRect(const QCommonStyle* self, int cc, const QStyleOptionComplex* opt, int sc, const QWidget* w) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_SubControlRect_IsBase(true);
	return new QRect(vqcommonstyle->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), w));
}
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnSubControlRect(const QCommonStyle* self, intptr_t slot) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_SubControlRect_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_SubControlRect_Callback>(slot));
}
}

// Base class handler implementation
QSize* QCommonStyle_QBaseSizeFromContents(const QCommonStyle* self, int ct, const QStyleOption* opt, const QSize* contentsSize, const QWidget* widget) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_SizeFromContents_IsBase(true);
	return new QSize(vqcommonstyle->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, widget));
}
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnSizeFromContents(const QCommonStyle* self, intptr_t slot) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_SizeFromContents_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_SizeFromContents_Callback>(slot));
}
}

// Base class handler implementation
int QCommonStyle_QBasePixelMetric(const QCommonStyle* self, int m, const QStyleOption* opt, const QWidget* widget) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_PixelMetric_IsBase(true);
	return vqcommonstyle->pixelMetric(static_cast<QStyle::PixelMetric>(m), opt, widget);
}
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnPixelMetric(const QCommonStyle* self, intptr_t slot) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_PixelMetric_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_PixelMetric_Callback>(slot));
}
}

// Base class handler implementation
int QCommonStyle_QBaseStyleHint(const QCommonStyle* self, int sh, const QStyleOption* opt, const QWidget* w, QStyleHintReturn* shret) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_StyleHint_IsBase(true);
	return vqcommonstyle->styleHint(static_cast<QStyle::StyleHint>(sh), opt, w, shret);
}
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnStyleHint(const QCommonStyle* self, intptr_t slot) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_StyleHint_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_StyleHint_Callback>(slot));
}
}

// Base class handler implementation
QIcon* QCommonStyle_QBaseStandardIcon(const QCommonStyle* self, int standardIcon, const QStyleOption* opt, const QWidget* widget) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_StandardIcon_IsBase(true);
	return new QIcon(vqcommonstyle->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), opt, widget));
}
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnStandardIcon(const QCommonStyle* self, intptr_t slot) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_StandardIcon_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_StandardIcon_Callback>(slot));
}
}

// Base class handler implementation
QPixmap* QCommonStyle_QBaseStandardPixmap(const QCommonStyle* self, int sp, const QStyleOption* opt, const QWidget* widget) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_StandardPixmap_IsBase(true);
	return new QPixmap(vqcommonstyle->standardPixmap(static_cast<QStyle::StandardPixmap>(sp), opt, widget));
}
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnStandardPixmap(const QCommonStyle* self, intptr_t slot) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_StandardPixmap_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_StandardPixmap_Callback>(slot));
}
}

// Base class handler implementation
QPixmap* QCommonStyle_QBaseGeneratedIconPixmap(const QCommonStyle* self, int iconMode, const QPixmap* pixmap, const QStyleOption* opt) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_GeneratedIconPixmap_IsBase(true);
	return new QPixmap(vqcommonstyle->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
}
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnGeneratedIconPixmap(const QCommonStyle* self, intptr_t slot) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_GeneratedIconPixmap_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_GeneratedIconPixmap_Callback>(slot));
}
}

// Base class handler implementation
int QCommonStyle_QBaseLayoutSpacing(const QCommonStyle* self, int control1, int control2, int orientation, const QStyleOption* option, const QWidget* widget) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_LayoutSpacing_IsBase(true);
	return vqcommonstyle->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
}
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnLayoutSpacing(const QCommonStyle* self, intptr_t slot) {
	auto* vqcommonstyle = dynamic_cast<const VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_LayoutSpacing_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_LayoutSpacing_Callback>(slot));
}
}

// Base class handler implementation
void QCommonStyle_QBasePolish(QCommonStyle* self, QPalette* param1) {
	auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_Polish_IsBase(true);
	vqcommonstyle->polish(*param1);
}
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnPolish(QCommonStyle* self, intptr_t slot) {
	auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_Polish_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Polish_Callback>(slot));
}
}

// Base class handler implementation
void QCommonStyle_QBasePolish2(QCommonStyle* self, QApplication* app) {
	auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_Polish2_IsBase(true);
	vqcommonstyle->polish(app);
}
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnPolish2(QCommonStyle* self, intptr_t slot) {
	auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_Polish2_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Polish2_Callback>(slot));
}
}

// Base class handler implementation
void QCommonStyle_QBasePolish3(QCommonStyle* self, QWidget* widget) {
	auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_Polish3_IsBase(true);
	vqcommonstyle->polish(widget);
}
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnPolish3(QCommonStyle* self, intptr_t slot) {
	auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_Polish3_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Polish3_Callback>(slot));
}
}

// Base class handler implementation
void QCommonStyle_QBaseUnpolish(QCommonStyle* self, QWidget* widget) {
	auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_Unpolish_IsBase(true);
	vqcommonstyle->unpolish(widget);
}
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnUnpolish(QCommonStyle* self, intptr_t slot) {
	auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_Unpolish_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Unpolish_Callback>(slot));
}
}

// Base class handler implementation
void QCommonStyle_QBaseUnpolish2(QCommonStyle* self, QApplication* application) {
	auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_Unpolish2_IsBase(true);
	vqcommonstyle->unpolish(application);
}
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnUnpolish2(QCommonStyle* self, intptr_t slot) {
	auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self);
	if (vqcommonstyle && vqcommonstyle->isVirtualQCommonStyle) {
vqcommonstyle->setQCommonStyle_Unpolish2_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Unpolish2_Callback>(slot));
}
}

void QCommonStyle_Delete(QCommonStyle* self) {
    delete self;
}

