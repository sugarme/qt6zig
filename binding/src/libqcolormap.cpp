#include <QColor>
#include <QColormap>
#include <qcolormap.h>
#include "libqcolormap.h"
#include "libqcolormap.hxx"

QColormap* QColormap_new(const QColormap* colormap) {
	 return new QColormap(*colormap);
}

void QColormap_Initialize() {
	QColormap::initialize();
}

void QColormap_Cleanup() {
	QColormap::cleanup();
}

QColormap* QColormap_Instance() {
	return new QColormap(QColormap::instance());
}

void QColormap_OperatorAssign(QColormap* self, const QColormap* colormap) {
	self->operator=(*colormap);
}

int QColormap_Mode(const QColormap* self) {
	return self->mode();
}

int QColormap_Depth(const QColormap* self) {
	return self->depth();
}

int QColormap_Size(const QColormap* self) {
	return self->size();
}

unsigned int QColormap_Pixel(const QColormap* self, const QColor* color) {
	return self->pixel(*color);
}

QColor* QColormap_ColorAt(const QColormap* self, unsigned int pixel) {
	return new QColor(self->colorAt(pixel));
}

libqt_list QColormap_Colormap(const QColormap* self) {
	return self->colormap();
}

QColormap* QColormap_Instance1(int screen) {
	return new QColormap(QColormap::instance(screen));
}

void QColormap_Delete(QColormap* self) {
    delete self;
}

