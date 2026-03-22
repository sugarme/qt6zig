#include <QObject>
#include <QOpenGLVertexArrayObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLVertexArrayObject__Binder
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qopenglvertexarrayobject.h>
#include "libqopenglvertexarrayobject.h"
#include "libqopenglvertexarrayobject.hxx"

QOpenGLVertexArrayObject* QOpenGLVertexArrayObject_new() {
	 return new QOpenGLVertexArrayObject();
}

QOpenGLVertexArrayObject* QOpenGLVertexArrayObject_new2(QObject* parent) {
	 return new QOpenGLVertexArrayObject(parent);
}

libqt_string QOpenGLVertexArrayObject_Tr(const char* s) {
	QString _ret = QOpenGLVertexArrayObject::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QOpenGLVertexArrayObject_Create(QOpenGLVertexArrayObject* self) {
	return self->create();
}

void QOpenGLVertexArrayObject_Destroy(QOpenGLVertexArrayObject* self) {
	self->destroy();
}

bool QOpenGLVertexArrayObject_IsCreated(const QOpenGLVertexArrayObject* self) {
	return self->isCreated();
}

uint32_t QOpenGLVertexArrayObject_ObjectId(const QOpenGLVertexArrayObject* self) {
	return self->objectId();
}

void QOpenGLVertexArrayObject_Bind(QOpenGLVertexArrayObject* self) {
	self->bind();
}

void QOpenGLVertexArrayObject_Release(QOpenGLVertexArrayObject* self) {
	self->release();
}

libqt_string QOpenGLVertexArrayObject_Tr2(const char* s, const char* c) {
	QString _ret = QOpenGLVertexArrayObject::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QOpenGLVertexArrayObject_Tr3(const char* s, const char* c, int n) {
	QString _ret = QOpenGLVertexArrayObject::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QOpenGLVertexArrayObject_Delete(QOpenGLVertexArrayObject* self) {
    delete self;
}

QOpenGLVertexArrayObject__Binder* QOpenGLVertexArrayObject__Binder_new(QOpenGLVertexArrayObject* v) {
	 return new QOpenGLVertexArrayObject::Binder(v);
}

void QOpenGLVertexArrayObject__Binder_Release(QOpenGLVertexArrayObject__Binder* self) {
	self->release();
}

void QOpenGLVertexArrayObject__Binder_Rebind(QOpenGLVertexArrayObject__Binder* self) {
	self->rebind();
}

void QOpenGLVertexArrayObject__Binder_Delete(QOpenGLVertexArrayObject__Binder* self) {
    delete self;
}

