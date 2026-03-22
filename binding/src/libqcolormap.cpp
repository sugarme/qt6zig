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
	auto _ret = self->colormap();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

QColormap* QColormap_Instance1(int screen) {
	return new QColormap(QColormap::instance(screen));
}

void QColormap_Delete(QColormap* self) {
    delete self;
}

