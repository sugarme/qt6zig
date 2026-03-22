#include <QByteArray>
#include <QObject>
#include <QPainter>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QSvgRenderer>
#include <QTransform>
#include <QXmlStreamReader>
#include <qsvgrenderer.h>
#include "libqsvgrenderer.h"
#include "libqsvgrenderer.hxx"

QSvgRenderer* QSvgRenderer_new() {
	 return new QSvgRenderer();
}

QSvgRenderer* QSvgRenderer_new2(const libqt_string filename) {
	 return new QSvgRenderer(QString::fromUtf8(filename.data, filename.len));
}

QSvgRenderer* QSvgRenderer_new3(const libqt_string contents) {
	 return new QSvgRenderer(QByteArray(contents.data, contents.len));
}

QSvgRenderer* QSvgRenderer_new4(QXmlStreamReader* contents) {
	 return new QSvgRenderer(contents);
}

QSvgRenderer* QSvgRenderer_new5(QObject* parent) {
	 return new QSvgRenderer(parent);
}

QSvgRenderer* QSvgRenderer_new6(const libqt_string filename, QObject* parent) {
	 return new QSvgRenderer(QString::fromUtf8(filename.data, filename.len), parent);
}

QSvgRenderer* QSvgRenderer_new7(const libqt_string contents, QObject* parent) {
	 return new QSvgRenderer(QByteArray(contents.data, contents.len), parent);
}

QSvgRenderer* QSvgRenderer_new8(QXmlStreamReader* contents, QObject* parent) {
	 return new QSvgRenderer(contents, parent);
}

libqt_string QSvgRenderer_Tr(const char* s) {
	QString _ret = QSvgRenderer::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QSvgRenderer_IsValid(const QSvgRenderer* self) {
	return self->isValid();
}

QSize* QSvgRenderer_DefaultSize(const QSvgRenderer* self) {
	return new QSize(self->defaultSize());
}

QRect* QSvgRenderer_ViewBox(const QSvgRenderer* self) {
	return new QRect(self->viewBox());
}

QRectF* QSvgRenderer_ViewBoxF(const QSvgRenderer* self) {
	return new QRectF(self->viewBoxF());
}

void QSvgRenderer_SetViewBox(QSvgRenderer* self, const QRect* viewbox) {
	self->setViewBox(*viewbox);
}

void QSvgRenderer_SetViewBox2(QSvgRenderer* self, const QRectF* viewbox) {
	self->setViewBox(*viewbox);
}

int QSvgRenderer_AspectRatioMode(const QSvgRenderer* self) {
	return self->aspectRatioMode();
}

void QSvgRenderer_SetAspectRatioMode(QSvgRenderer* self, int mode) {
	self->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

quint32 QSvgRenderer_Options(const QSvgRenderer* self) {
	return self->options();
}

void QSvgRenderer_SetOptions(QSvgRenderer* self, quint32 flags) {
	self->setOptions(static_cast<QFlags<QtSvg::Option>>(flags));
}

bool QSvgRenderer_Animated(const QSvgRenderer* self) {
	return self->animated();
}

int QSvgRenderer_FramesPerSecond(const QSvgRenderer* self) {
	return self->framesPerSecond();
}

void QSvgRenderer_SetFramesPerSecond(QSvgRenderer* self, int num) {
	self->setFramesPerSecond(num);
}

int QSvgRenderer_CurrentFrame(const QSvgRenderer* self) {
	return self->currentFrame();
}

void QSvgRenderer_SetCurrentFrame(QSvgRenderer* self, int currentFrame) {
	self->setCurrentFrame(currentFrame);
}

int QSvgRenderer_AnimationDuration(const QSvgRenderer* self) {
	return self->animationDuration();
}

bool QSvgRenderer_IsAnimationEnabled(const QSvgRenderer* self) {
	return self->isAnimationEnabled();
}

void QSvgRenderer_SetAnimationEnabled(QSvgRenderer* self, bool enable) {
	self->setAnimationEnabled(enable);
}

QRectF* QSvgRenderer_BoundsOnElement(const QSvgRenderer* self, const libqt_string id) {
	return new QRectF(self->boundsOnElement(QString::fromUtf8(id.data, id.len)));
}

bool QSvgRenderer_ElementExists(const QSvgRenderer* self, const libqt_string id) {
	return self->elementExists(QString::fromUtf8(id.data, id.len));
}

QTransform* QSvgRenderer_TransformForElement(const QSvgRenderer* self, const libqt_string id) {
	return new QTransform(self->transformForElement(QString::fromUtf8(id.data, id.len)));
}

void QSvgRenderer_SetDefaultOptions(quint32 flags) {
	QSvgRenderer::setDefaultOptions(static_cast<QFlags<QtSvg::Option>>(flags));
}

bool QSvgRenderer_Load(QSvgRenderer* self, const libqt_string filename) {
	return self->load(QString::fromUtf8(filename.data, filename.len));
}

bool QSvgRenderer_Load2(QSvgRenderer* self, const libqt_string contents) {
	return self->load(QByteArray(contents.data, contents.len));
}

bool QSvgRenderer_Load3(QSvgRenderer* self, QXmlStreamReader* contents) {
	return self->load(contents);
}

void QSvgRenderer_Render(QSvgRenderer* self, QPainter* p) {
	self->render(p);
}

void QSvgRenderer_Render2(QSvgRenderer* self, QPainter* p, const QRectF* bounds) {
	self->render(p, *bounds);
}

void QSvgRenderer_Render3(QSvgRenderer* self, QPainter* p, const libqt_string elementId) {
	self->render(p, QString::fromUtf8(elementId.data, elementId.len));
}

void QSvgRenderer_RepaintNeeded(QSvgRenderer* self) {
	self->repaintNeeded();
}

void QSvgRenderer_Connect_RepaintNeeded(QSvgRenderer* self, intptr_t slot) {
    void (*slotFunc)(QSvgRenderer*) = reinterpret_cast<void (*)(QSvgRenderer*)>(slot);
    QSvgRenderer::connect(self, &QSvgRenderer::repaintNeeded, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QSvgRenderer_Tr2(const char* s, const char* c) {
	QString _ret = QSvgRenderer::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSvgRenderer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSvgRenderer::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSvgRenderer_Render32(QSvgRenderer* self, QPainter* p, const libqt_string elementId, const QRectF* bounds) {
	self->render(p, QString::fromUtf8(elementId.data, elementId.len), *bounds);
}

void QSvgRenderer_Delete(QSvgRenderer* self) {
    delete self;
}

