#include <QBrush>
#include <QColor>
#include <QGraphicsBlurEffect>
#include <QGraphicsColorizeEffect>
#include <QGraphicsDropShadowEffect>
#include <QGraphicsEffect>
#include <QGraphicsOpacityEffect>
#include <QObject>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qgraphicseffect.h>
#include "libqgraphicseffect.h"
#include "libqgraphicseffect.hxx"

QGraphicsEffect* QGraphicsEffect_new() {
	 return new VirtualQGraphicsEffect();
}

QGraphicsEffect* QGraphicsEffect_new2(QObject* parent) {
	 return new VirtualQGraphicsEffect(parent);
}

libqt_string QGraphicsEffect_Tr(const char* s) {
	QString _ret = QGraphicsEffect::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QRectF* QGraphicsEffect_BoundingRectFor(const QGraphicsEffect* self, const QRectF* sourceRect) {
	return new QRectF(self->boundingRectFor(*sourceRect));
}

QRectF* QGraphicsEffect_BoundingRect(const QGraphicsEffect* self) {
	return new QRectF(self->boundingRect());
}

bool QGraphicsEffect_IsEnabled(const QGraphicsEffect* self) {
	return self->isEnabled();
}

void QGraphicsEffect_SetEnabled(QGraphicsEffect* self, bool enable) {
	self->setEnabled(enable);
}

void QGraphicsEffect_Update(QGraphicsEffect* self) {
	self->update();
}

void QGraphicsEffect_EnabledChanged(QGraphicsEffect* self, bool enabled) {
	self->enabledChanged(enabled);
}

void QGraphicsEffect_Connect_EnabledChanged(QGraphicsEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsEffect*, bool) = reinterpret_cast<void (*)(QGraphicsEffect*, bool)>(slot);
    QGraphicsEffect::connect(self, &QGraphicsEffect::enabledChanged, [self, slotFunc](bool enabled) {
	slotFunc(self, enabled);
    });
}

libqt_string QGraphicsEffect_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsEffect::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGraphicsEffect_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsEffect::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QRectF* QGraphicsEffect_QBaseBoundingRectFor(const QGraphicsEffect* self, const QRectF* sourceRect) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_BoundingRectFor_IsBase(true);
	return new QRectF(vqgraphicseffect->boundingRectFor(*sourceRect));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnBoundingRectFor(const QGraphicsEffect* self, intptr_t slot) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_BoundingRectFor_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_BoundingRectFor_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsEffect_Draw(QGraphicsEffect* self, QPainter* painter) {
	auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
	vqgraphicseffect->draw(painter);
	} else {
	self->QGraphicsEffect::draw(painter);
}
}

// Base class handler implementation
void QGraphicsEffect_QBaseDraw(QGraphicsEffect* self, QPainter* painter) {
	auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_Draw_IsBase(true);
	vqgraphicseffect->draw(painter);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnDraw(QGraphicsEffect* self, intptr_t slot) {
	auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_Draw_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_Draw_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsEffect_SourceChanged(QGraphicsEffect* self, int flags) {
	auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
	vqgraphicseffect->sourceChanged(static_cast<QFlags<QGraphicsEffect::ChangeFlag>>(flags));
	} else {
	self->QGraphicsEffect::sourceChanged(static_cast<QFlags<QGraphicsEffect::ChangeFlag>>(flags));
}
}

// Base class handler implementation
void QGraphicsEffect_QBaseSourceChanged(QGraphicsEffect* self, int flags) {
	auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_SourceChanged_IsBase(true);
	vqgraphicseffect->sourceChanged(static_cast<QFlags<QGraphicsEffect::ChangeFlag>>(flags));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnSourceChanged(QGraphicsEffect* self, intptr_t slot) {
	auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_SourceChanged_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_SourceChanged_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsEffect_UpdateBoundingRect(QGraphicsEffect* self) {
	auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
	vqgraphicseffect->updateBoundingRect();
	} else {
	self->QGraphicsEffect::updateBoundingRect();
}
}

// Base class handler implementation
void QGraphicsEffect_QBaseUpdateBoundingRect(QGraphicsEffect* self) {
	auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_UpdateBoundingRect_IsBase(true);
	vqgraphicseffect->updateBoundingRect();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnUpdateBoundingRect(QGraphicsEffect* self, intptr_t slot) {
	auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_UpdateBoundingRect_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_UpdateBoundingRect_Callback>(slot));
}
}

// Derived class handler implementation
bool QGraphicsEffect_SourceIsPixmap(const QGraphicsEffect* self) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
	return vqgraphicseffect->sourceIsPixmap();
	} else {
	return self->QGraphicsEffect::sourceIsPixmap();
}
}

// Base class handler implementation
bool QGraphicsEffect_QBaseSourceIsPixmap(const QGraphicsEffect* self) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_SourceIsPixmap_IsBase(true);
	return vqgraphicseffect->sourceIsPixmap();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnSourceIsPixmap(const QGraphicsEffect* self, intptr_t slot) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_SourceIsPixmap_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_SourceIsPixmap_Callback>(slot));
}
}

// Derived class handler implementation
QRectF* QGraphicsEffect_SourceBoundingRect(const QGraphicsEffect* self) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
	return new QRectF(vqgraphicseffect->sourceBoundingRect());
	} else {
	return new QRectF(self->QGraphicsEffect::sourceBoundingRect());
}
}

// Base class handler implementation
QRectF* QGraphicsEffect_QBaseSourceBoundingRect(const QGraphicsEffect* self) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_SourceBoundingRect_IsBase(true);
	return new QRectF(vqgraphicseffect->sourceBoundingRect());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnSourceBoundingRect(const QGraphicsEffect* self, intptr_t slot) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_SourceBoundingRect_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_SourceBoundingRect_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsEffect_DrawSource(QGraphicsEffect* self, QPainter* painter) {
	auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
	vqgraphicseffect->drawSource(painter);
	} else {
	self->QGraphicsEffect::drawSource(painter);
}
}

// Base class handler implementation
void QGraphicsEffect_QBaseDrawSource(QGraphicsEffect* self, QPainter* painter) {
	auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_DrawSource_IsBase(true);
	vqgraphicseffect->drawSource(painter);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnDrawSource(QGraphicsEffect* self, intptr_t slot) {
	auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_DrawSource_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_DrawSource_Callback>(slot));
}
}

// Derived class handler implementation
QPixmap* QGraphicsEffect_SourcePixmap(const QGraphicsEffect* self) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
	return new QPixmap(vqgraphicseffect->sourcePixmap());
	} else {
	return new QPixmap(self->QGraphicsEffect::sourcePixmap());
}
}

// Base class handler implementation
QPixmap* QGraphicsEffect_QBaseSourcePixmap(const QGraphicsEffect* self) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_SourcePixmap_IsBase(true);
	return new QPixmap(vqgraphicseffect->sourcePixmap());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnSourcePixmap(const QGraphicsEffect* self, intptr_t slot) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_SourcePixmap_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_SourcePixmap_Callback>(slot));
}
}

// Derived class handler implementation
QRectF* QGraphicsEffect_SourceBoundingRect1(const QGraphicsEffect* self, int system) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
	return new QRectF(vqgraphicseffect->sourceBoundingRect(static_cast<Qt::CoordinateSystem>(system)));
	} else {
	return new QRectF(self->QGraphicsEffect::sourceBoundingRect(static_cast<Qt::CoordinateSystem>(system)));
}
}

// Base class handler implementation
QRectF* QGraphicsEffect_QBaseSourceBoundingRect1(const QGraphicsEffect* self, int system) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_SourceBoundingRect1_IsBase(true);
	return new QRectF(vqgraphicseffect->sourceBoundingRect(static_cast<Qt::CoordinateSystem>(system)));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnSourceBoundingRect1(const QGraphicsEffect* self, intptr_t slot) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_SourceBoundingRect1_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_SourceBoundingRect1_Callback>(slot));
}
}

// Derived class handler implementation
QPixmap* QGraphicsEffect_SourcePixmap1(const QGraphicsEffect* self, int system) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
	return new QPixmap(vqgraphicseffect->sourcePixmap(static_cast<Qt::CoordinateSystem>(system)));
	} else {
	return new QPixmap(self->QGraphicsEffect::sourcePixmap(static_cast<Qt::CoordinateSystem>(system)));
}
}

// Base class handler implementation
QPixmap* QGraphicsEffect_QBaseSourcePixmap1(const QGraphicsEffect* self, int system) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_SourcePixmap1_IsBase(true);
	return new QPixmap(vqgraphicseffect->sourcePixmap(static_cast<Qt::CoordinateSystem>(system)));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnSourcePixmap1(const QGraphicsEffect* self, intptr_t slot) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_SourcePixmap1_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_SourcePixmap1_Callback>(slot));
}
}

// Derived class handler implementation
QPixmap* QGraphicsEffect_SourcePixmap2(const QGraphicsEffect* self, int system, QPoint* offset) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
	return new QPixmap(vqgraphicseffect->sourcePixmap(static_cast<Qt::CoordinateSystem>(system), offset));
	} else {
	return new QPixmap(self->QGraphicsEffect::sourcePixmap(static_cast<Qt::CoordinateSystem>(system), offset));
}
}

// Base class handler implementation
QPixmap* QGraphicsEffect_QBaseSourcePixmap2(const QGraphicsEffect* self, int system, QPoint* offset) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_SourcePixmap2_IsBase(true);
	return new QPixmap(vqgraphicseffect->sourcePixmap(static_cast<Qt::CoordinateSystem>(system), offset));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnSourcePixmap2(const QGraphicsEffect* self, intptr_t slot) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_SourcePixmap2_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_SourcePixmap2_Callback>(slot));
}
}

// Derived class handler implementation
QPixmap* QGraphicsEffect_SourcePixmap3(const QGraphicsEffect* self, int system, QPoint* offset, int mode) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
	return new QPixmap(vqgraphicseffect->sourcePixmap(static_cast<Qt::CoordinateSystem>(system), offset, static_cast<QGraphicsEffect::PixmapPadMode>(mode)));
	} else {
	return new QPixmap(self->QGraphicsEffect::sourcePixmap(static_cast<Qt::CoordinateSystem>(system), offset, static_cast<QGraphicsEffect::PixmapPadMode>(mode)));
}
}

// Base class handler implementation
QPixmap* QGraphicsEffect_QBaseSourcePixmap3(const QGraphicsEffect* self, int system, QPoint* offset, int mode) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_SourcePixmap3_IsBase(true);
	return new QPixmap(vqgraphicseffect->sourcePixmap(static_cast<Qt::CoordinateSystem>(system), offset, static_cast<QGraphicsEffect::PixmapPadMode>(mode)));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnSourcePixmap3(const QGraphicsEffect* self, intptr_t slot) {
	auto* vqgraphicseffect = dynamic_cast<const VirtualQGraphicsEffect*>(self);
	if (vqgraphicseffect && vqgraphicseffect->isVirtualQGraphicsEffect) {
vqgraphicseffect->setQGraphicsEffect_SourcePixmap3_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_SourcePixmap3_Callback>(slot));
}
}

void QGraphicsEffect_Delete(QGraphicsEffect* self) {
    delete self;
}

QGraphicsColorizeEffect* QGraphicsColorizeEffect_new() {
	 return new VirtualQGraphicsColorizeEffect();
}

QGraphicsColorizeEffect* QGraphicsColorizeEffect_new2(QObject* parent) {
	 return new VirtualQGraphicsColorizeEffect(parent);
}

libqt_string QGraphicsColorizeEffect_Tr(const char* s) {
	QString _ret = QGraphicsColorizeEffect::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QColor* QGraphicsColorizeEffect_Color(const QGraphicsColorizeEffect* self) {
	return new QColor(self->color());
}

double QGraphicsColorizeEffect_Strength(const QGraphicsColorizeEffect* self) {
	return self->strength();
}

void QGraphicsColorizeEffect_SetColor(QGraphicsColorizeEffect* self, const QColor* c) {
	self->setColor(*c);
}

void QGraphicsColorizeEffect_SetStrength(QGraphicsColorizeEffect* self, double strength) {
	self->setStrength(strength);
}

void QGraphicsColorizeEffect_ColorChanged(QGraphicsColorizeEffect* self, const QColor* color) {
	self->colorChanged(*color);
}

void QGraphicsColorizeEffect_Connect_ColorChanged(QGraphicsColorizeEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsColorizeEffect*, const QColor*) = reinterpret_cast<void (*)(QGraphicsColorizeEffect*, const QColor*)>(slot);
    QGraphicsColorizeEffect::connect(self, &QGraphicsColorizeEffect::colorChanged, [self, slotFunc](const QColor& color) {
	slotFunc(self, color);
    });
}

void QGraphicsColorizeEffect_StrengthChanged(QGraphicsColorizeEffect* self, double strength) {
	self->strengthChanged(strength);
}

void QGraphicsColorizeEffect_Connect_StrengthChanged(QGraphicsColorizeEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsColorizeEffect*, double) = reinterpret_cast<void (*)(QGraphicsColorizeEffect*, double)>(slot);
    QGraphicsColorizeEffect::connect(self, &QGraphicsColorizeEffect::strengthChanged, [self, slotFunc](qreal strength) {
	slotFunc(self, strength);
    });
}

libqt_string QGraphicsColorizeEffect_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsColorizeEffect::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGraphicsColorizeEffect_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsColorizeEffect::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
void QGraphicsColorizeEffect_Draw(QGraphicsColorizeEffect* self, QPainter* painter) {
	auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self);
	if (vqgraphicscolorizeeffect && vqgraphicscolorizeeffect->isVirtualQGraphicsColorizeEffect) {
	vqgraphicscolorizeeffect->draw(painter);
	} else {
	self->QGraphicsColorizeEffect::draw(painter);
}
}

// Base class handler implementation
void QGraphicsColorizeEffect_QBaseDraw(QGraphicsColorizeEffect* self, QPainter* painter) {
	auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self);
	if (vqgraphicscolorizeeffect && vqgraphicscolorizeeffect->isVirtualQGraphicsColorizeEffect) {
vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_Draw_IsBase(true);
	vqgraphicscolorizeeffect->draw(painter);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnDraw(QGraphicsColorizeEffect* self, intptr_t slot) {
	auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self);
	if (vqgraphicscolorizeeffect && vqgraphicscolorizeeffect->isVirtualQGraphicsColorizeEffect) {
vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_Draw_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_Draw_Callback>(slot));
}
}

void QGraphicsColorizeEffect_Delete(QGraphicsColorizeEffect* self) {
    delete self;
}

QGraphicsBlurEffect* QGraphicsBlurEffect_new() {
	 return new VirtualQGraphicsBlurEffect();
}

QGraphicsBlurEffect* QGraphicsBlurEffect_new2(QObject* parent) {
	 return new VirtualQGraphicsBlurEffect(parent);
}

libqt_string QGraphicsBlurEffect_Tr(const char* s) {
	QString _ret = QGraphicsBlurEffect::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QRectF* QGraphicsBlurEffect_BoundingRectFor(const QGraphicsBlurEffect* self, const QRectF* rect) {
	return new QRectF(self->boundingRectFor(*rect));
}

double QGraphicsBlurEffect_BlurRadius(const QGraphicsBlurEffect* self) {
	return self->blurRadius();
}

int QGraphicsBlurEffect_BlurHints(const QGraphicsBlurEffect* self) {
	return self->blurHints();
}

void QGraphicsBlurEffect_SetBlurRadius(QGraphicsBlurEffect* self, double blurRadius) {
	self->setBlurRadius(blurRadius);
}

void QGraphicsBlurEffect_SetBlurHints(QGraphicsBlurEffect* self, int hints) {
	self->setBlurHints(static_cast<QFlags<QGraphicsBlurEffect::BlurHint>>(hints));
}

void QGraphicsBlurEffect_BlurRadiusChanged(QGraphicsBlurEffect* self, double blurRadius) {
	self->blurRadiusChanged(blurRadius);
}

void QGraphicsBlurEffect_Connect_BlurRadiusChanged(QGraphicsBlurEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsBlurEffect*, double) = reinterpret_cast<void (*)(QGraphicsBlurEffect*, double)>(slot);
    QGraphicsBlurEffect::connect(self, &QGraphicsBlurEffect::blurRadiusChanged, [self, slotFunc](qreal blurRadius) {
	slotFunc(self, blurRadius);
    });
}

void QGraphicsBlurEffect_BlurHintsChanged(QGraphicsBlurEffect* self, int hints) {
	self->blurHintsChanged(static_cast<QFlags<QGraphicsBlurEffect::BlurHint>>(hints));
}

void QGraphicsBlurEffect_Connect_BlurHintsChanged(QGraphicsBlurEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsBlurEffect*, int) = reinterpret_cast<void (*)(QGraphicsBlurEffect*, int)>(slot);
    QGraphicsBlurEffect::connect(self, &QGraphicsBlurEffect::blurHintsChanged, [self, slotFunc](QFlags<QGraphicsBlurEffect::BlurHint> hints) {
	slotFunc(self, hints);
    });
}

libqt_string QGraphicsBlurEffect_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsBlurEffect::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGraphicsBlurEffect_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsBlurEffect::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QRectF* QGraphicsBlurEffect_QBaseBoundingRectFor(const QGraphicsBlurEffect* self, const QRectF* rect) {
	auto* vqgraphicsblureffect = dynamic_cast<const VirtualQGraphicsBlurEffect*>(self);
	if (vqgraphicsblureffect && vqgraphicsblureffect->isVirtualQGraphicsBlurEffect) {
vqgraphicsblureffect->setQGraphicsBlurEffect_BoundingRectFor_IsBase(true);
	return new QRectF(vqgraphicsblureffect->boundingRectFor(*rect));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnBoundingRectFor(const QGraphicsBlurEffect* self, intptr_t slot) {
	auto* vqgraphicsblureffect = dynamic_cast<const VirtualQGraphicsBlurEffect*>(self);
	if (vqgraphicsblureffect && vqgraphicsblureffect->isVirtualQGraphicsBlurEffect) {
vqgraphicsblureffect->setQGraphicsBlurEffect_BoundingRectFor_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_BoundingRectFor_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsBlurEffect_Draw(QGraphicsBlurEffect* self, QPainter* painter) {
	auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self);
	if (vqgraphicsblureffect && vqgraphicsblureffect->isVirtualQGraphicsBlurEffect) {
	vqgraphicsblureffect->draw(painter);
	} else {
	self->QGraphicsBlurEffect::draw(painter);
}
}

// Base class handler implementation
void QGraphicsBlurEffect_QBaseDraw(QGraphicsBlurEffect* self, QPainter* painter) {
	auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self);
	if (vqgraphicsblureffect && vqgraphicsblureffect->isVirtualQGraphicsBlurEffect) {
vqgraphicsblureffect->setQGraphicsBlurEffect_Draw_IsBase(true);
	vqgraphicsblureffect->draw(painter);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnDraw(QGraphicsBlurEffect* self, intptr_t slot) {
	auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self);
	if (vqgraphicsblureffect && vqgraphicsblureffect->isVirtualQGraphicsBlurEffect) {
vqgraphicsblureffect->setQGraphicsBlurEffect_Draw_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_Draw_Callback>(slot));
}
}

void QGraphicsBlurEffect_Delete(QGraphicsBlurEffect* self) {
    delete self;
}

QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new() {
	 return new VirtualQGraphicsDropShadowEffect();
}

QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new2(QObject* parent) {
	 return new VirtualQGraphicsDropShadowEffect(parent);
}

libqt_string QGraphicsDropShadowEffect_Tr(const char* s) {
	QString _ret = QGraphicsDropShadowEffect::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QRectF* QGraphicsDropShadowEffect_BoundingRectFor(const QGraphicsDropShadowEffect* self, const QRectF* rect) {
	return new QRectF(self->boundingRectFor(*rect));
}

QPointF* QGraphicsDropShadowEffect_Offset(const QGraphicsDropShadowEffect* self) {
	return new QPointF(self->offset());
}

double QGraphicsDropShadowEffect_XOffset(const QGraphicsDropShadowEffect* self) {
	return self->xOffset();
}

double QGraphicsDropShadowEffect_YOffset(const QGraphicsDropShadowEffect* self) {
	return self->yOffset();
}

double QGraphicsDropShadowEffect_BlurRadius(const QGraphicsDropShadowEffect* self) {
	return self->blurRadius();
}

QColor* QGraphicsDropShadowEffect_Color(const QGraphicsDropShadowEffect* self) {
	return new QColor(self->color());
}

void QGraphicsDropShadowEffect_SetOffset(QGraphicsDropShadowEffect* self, const QPointF* ofs) {
	self->setOffset(*ofs);
}

void QGraphicsDropShadowEffect_SetOffset2(QGraphicsDropShadowEffect* self, double dx, double dy) {
	self->setOffset(dx, dy);
}

void QGraphicsDropShadowEffect_SetOffset3(QGraphicsDropShadowEffect* self, double d) {
	self->setOffset(d);
}

void QGraphicsDropShadowEffect_SetXOffset(QGraphicsDropShadowEffect* self, double dx) {
	self->setXOffset(dx);
}

void QGraphicsDropShadowEffect_SetYOffset(QGraphicsDropShadowEffect* self, double dy) {
	self->setYOffset(dy);
}

void QGraphicsDropShadowEffect_SetBlurRadius(QGraphicsDropShadowEffect* self, double blurRadius) {
	self->setBlurRadius(blurRadius);
}

void QGraphicsDropShadowEffect_SetColor(QGraphicsDropShadowEffect* self, const QColor* color) {
	self->setColor(*color);
}

void QGraphicsDropShadowEffect_OffsetChanged(QGraphicsDropShadowEffect* self, const QPointF* offset) {
	self->offsetChanged(*offset);
}

void QGraphicsDropShadowEffect_Connect_OffsetChanged(QGraphicsDropShadowEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsDropShadowEffect*, const QPointF*) = reinterpret_cast<void (*)(QGraphicsDropShadowEffect*, const QPointF*)>(slot);
    QGraphicsDropShadowEffect::connect(self, &QGraphicsDropShadowEffect::offsetChanged, [self, slotFunc](const QPointF& offset) {
	slotFunc(self, offset);
    });
}

void QGraphicsDropShadowEffect_BlurRadiusChanged(QGraphicsDropShadowEffect* self, double blurRadius) {
	self->blurRadiusChanged(blurRadius);
}

void QGraphicsDropShadowEffect_Connect_BlurRadiusChanged(QGraphicsDropShadowEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsDropShadowEffect*, double) = reinterpret_cast<void (*)(QGraphicsDropShadowEffect*, double)>(slot);
    QGraphicsDropShadowEffect::connect(self, &QGraphicsDropShadowEffect::blurRadiusChanged, [self, slotFunc](qreal blurRadius) {
	slotFunc(self, blurRadius);
    });
}

void QGraphicsDropShadowEffect_ColorChanged(QGraphicsDropShadowEffect* self, const QColor* color) {
	self->colorChanged(*color);
}

void QGraphicsDropShadowEffect_Connect_ColorChanged(QGraphicsDropShadowEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsDropShadowEffect*, const QColor*) = reinterpret_cast<void (*)(QGraphicsDropShadowEffect*, const QColor*)>(slot);
    QGraphicsDropShadowEffect::connect(self, &QGraphicsDropShadowEffect::colorChanged, [self, slotFunc](const QColor& color) {
	slotFunc(self, color);
    });
}

libqt_string QGraphicsDropShadowEffect_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsDropShadowEffect::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGraphicsDropShadowEffect_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsDropShadowEffect::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QRectF* QGraphicsDropShadowEffect_QBaseBoundingRectFor(const QGraphicsDropShadowEffect* self, const QRectF* rect) {
	auto* vqgraphicsdropshadoweffect = dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self);
	if (vqgraphicsdropshadoweffect && vqgraphicsdropshadoweffect->isVirtualQGraphicsDropShadowEffect) {
vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_BoundingRectFor_IsBase(true);
	return new QRectF(vqgraphicsdropshadoweffect->boundingRectFor(*rect));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnBoundingRectFor(const QGraphicsDropShadowEffect* self, intptr_t slot) {
	auto* vqgraphicsdropshadoweffect = dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self);
	if (vqgraphicsdropshadoweffect && vqgraphicsdropshadoweffect->isVirtualQGraphicsDropShadowEffect) {
vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_BoundingRectFor_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_BoundingRectFor_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsDropShadowEffect_Draw(QGraphicsDropShadowEffect* self, QPainter* painter) {
	auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self);
	if (vqgraphicsdropshadoweffect && vqgraphicsdropshadoweffect->isVirtualQGraphicsDropShadowEffect) {
	vqgraphicsdropshadoweffect->draw(painter);
	} else {
	self->QGraphicsDropShadowEffect::draw(painter);
}
}

// Base class handler implementation
void QGraphicsDropShadowEffect_QBaseDraw(QGraphicsDropShadowEffect* self, QPainter* painter) {
	auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self);
	if (vqgraphicsdropshadoweffect && vqgraphicsdropshadoweffect->isVirtualQGraphicsDropShadowEffect) {
vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_Draw_IsBase(true);
	vqgraphicsdropshadoweffect->draw(painter);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnDraw(QGraphicsDropShadowEffect* self, intptr_t slot) {
	auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self);
	if (vqgraphicsdropshadoweffect && vqgraphicsdropshadoweffect->isVirtualQGraphicsDropShadowEffect) {
vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_Draw_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_Draw_Callback>(slot));
}
}

void QGraphicsDropShadowEffect_Delete(QGraphicsDropShadowEffect* self) {
    delete self;
}

QGraphicsOpacityEffect* QGraphicsOpacityEffect_new() {
	 return new VirtualQGraphicsOpacityEffect();
}

QGraphicsOpacityEffect* QGraphicsOpacityEffect_new2(QObject* parent) {
	 return new VirtualQGraphicsOpacityEffect(parent);
}

libqt_string QGraphicsOpacityEffect_Tr(const char* s) {
	QString _ret = QGraphicsOpacityEffect::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

double QGraphicsOpacityEffect_Opacity(const QGraphicsOpacityEffect* self) {
	return self->opacity();
}

QBrush* QGraphicsOpacityEffect_OpacityMask(const QGraphicsOpacityEffect* self) {
	return new QBrush(self->opacityMask());
}

void QGraphicsOpacityEffect_SetOpacity(QGraphicsOpacityEffect* self, double opacity) {
	self->setOpacity(opacity);
}

void QGraphicsOpacityEffect_SetOpacityMask(QGraphicsOpacityEffect* self, const QBrush* mask) {
	self->setOpacityMask(*mask);
}

void QGraphicsOpacityEffect_OpacityChanged(QGraphicsOpacityEffect* self, double opacity) {
	self->opacityChanged(opacity);
}

void QGraphicsOpacityEffect_Connect_OpacityChanged(QGraphicsOpacityEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsOpacityEffect*, double) = reinterpret_cast<void (*)(QGraphicsOpacityEffect*, double)>(slot);
    QGraphicsOpacityEffect::connect(self, &QGraphicsOpacityEffect::opacityChanged, [self, slotFunc](qreal opacity) {
	slotFunc(self, opacity);
    });
}

void QGraphicsOpacityEffect_OpacityMaskChanged(QGraphicsOpacityEffect* self, const QBrush* mask) {
	self->opacityMaskChanged(*mask);
}

void QGraphicsOpacityEffect_Connect_OpacityMaskChanged(QGraphicsOpacityEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsOpacityEffect*, const QBrush*) = reinterpret_cast<void (*)(QGraphicsOpacityEffect*, const QBrush*)>(slot);
    QGraphicsOpacityEffect::connect(self, &QGraphicsOpacityEffect::opacityMaskChanged, [self, slotFunc](const QBrush& mask) {
	slotFunc(self, mask);
    });
}

libqt_string QGraphicsOpacityEffect_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsOpacityEffect::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGraphicsOpacityEffect_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsOpacityEffect::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
void QGraphicsOpacityEffect_Draw(QGraphicsOpacityEffect* self, QPainter* painter) {
	auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self);
	if (vqgraphicsopacityeffect && vqgraphicsopacityeffect->isVirtualQGraphicsOpacityEffect) {
	vqgraphicsopacityeffect->draw(painter);
	} else {
	self->QGraphicsOpacityEffect::draw(painter);
}
}

// Base class handler implementation
void QGraphicsOpacityEffect_QBaseDraw(QGraphicsOpacityEffect* self, QPainter* painter) {
	auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self);
	if (vqgraphicsopacityeffect && vqgraphicsopacityeffect->isVirtualQGraphicsOpacityEffect) {
vqgraphicsopacityeffect->setQGraphicsOpacityEffect_Draw_IsBase(true);
	vqgraphicsopacityeffect->draw(painter);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnDraw(QGraphicsOpacityEffect* self, intptr_t slot) {
	auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self);
	if (vqgraphicsopacityeffect && vqgraphicsopacityeffect->isVirtualQGraphicsOpacityEffect) {
vqgraphicsopacityeffect->setQGraphicsOpacityEffect_Draw_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_Draw_Callback>(slot));
}
}

void QGraphicsOpacityEffect_Delete(QGraphicsOpacityEffect* self) {
    delete self;
}

