#include <QByteArray>
#include <QDebug>
#include <QObject>
#include <QOpenGLContext>
#include <QOpenGLContextGroup>
#include <QOpenGLFunctions>
#include <QScreen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QSurface>
#include <QSurfaceFormat>
#include <qopenglcontext.h>
#include "libqopenglcontext.h"
#include "libqopenglcontext.hxx"

libqt_string QOpenGLContextGroup_Tr(const char* s) {
	QString _ret = QOpenGLContextGroup::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QOpenGLContextGroup_Shares(const QOpenGLContextGroup* self) {
	auto _ret = self->shares();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

QOpenGLContextGroup* QOpenGLContextGroup_CurrentContextGroup() {
	return QOpenGLContextGroup::currentContextGroup();
}

libqt_string QOpenGLContextGroup_Tr2(const char* s, const char* c) {
	QString _ret = QOpenGLContextGroup::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QOpenGLContextGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QOpenGLContextGroup::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QOpenGLContextGroup_Delete(QOpenGLContextGroup* self) {
    delete self;
}

QOpenGLContext* QOpenGLContext_new() {
	 return new QOpenGLContext();
}

QOpenGLContext* QOpenGLContext_new2(QObject* parent) {
	 return new QOpenGLContext(parent);
}

libqt_string QOpenGLContext_Tr(const char* s) {
	QString _ret = QOpenGLContext::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QOpenGLContext_SetFormat(QOpenGLContext* self, const QSurfaceFormat* format) {
	self->setFormat(*format);
}

void QOpenGLContext_SetShareContext(QOpenGLContext* self, QOpenGLContext* shareContext) {
	self->setShareContext(shareContext);
}

void QOpenGLContext_SetScreen(QOpenGLContext* self, QScreen* screen) {
	self->setScreen(screen);
}

bool QOpenGLContext_Create(QOpenGLContext* self) {
	return self->create();
}

bool QOpenGLContext_IsValid(const QOpenGLContext* self) {
	return self->isValid();
}

QSurfaceFormat* QOpenGLContext_Format(const QOpenGLContext* self) {
	return new QSurfaceFormat(self->format());
}

QOpenGLContext* QOpenGLContext_ShareContext(const QOpenGLContext* self) {
	return self->shareContext();
}

QOpenGLContextGroup* QOpenGLContext_ShareGroup(const QOpenGLContext* self) {
	return self->shareGroup();
}

QScreen* QOpenGLContext_Screen(const QOpenGLContext* self) {
	return self->screen();
}

uint32_t QOpenGLContext_DefaultFramebufferObject(const QOpenGLContext* self) {
	return self->defaultFramebufferObject();
}

bool QOpenGLContext_MakeCurrent(QOpenGLContext* self, QSurface* surface) {
	return self->makeCurrent(surface);
}

void QOpenGLContext_DoneCurrent(QOpenGLContext* self) {
	self->doneCurrent();
}

void QOpenGLContext_SwapBuffers(QOpenGLContext* self, QSurface* surface) {
	self->swapBuffers(surface);
}

QSurface* QOpenGLContext_Surface(const QOpenGLContext* self) {
	return self->surface();
}

QOpenGLContext* QOpenGLContext_CurrentContext() {
	return QOpenGLContext::currentContext();
}

bool QOpenGLContext_AreSharing(QOpenGLContext* first, QOpenGLContext* second) {
	return QOpenGLContext::areSharing(first, second);
}

QOpenGLFunctions* QOpenGLContext_Functions(const QOpenGLContext* self) {
	return self->functions();
}

QOpenGLExtraFunctions* QOpenGLContext_ExtraFunctions(const QOpenGLContext* self) {
	return self->extraFunctions();
}

libqt_list QOpenGLContext_Extensions(const QOpenGLContext* self) {
	return self->extensions();
}

bool QOpenGLContext_HasExtension(const QOpenGLContext* self, const libqt_string extension) {
	return self->hasExtension(QByteArray(extension.data, extension.len));
}

int QOpenGLContext_OpenGLModuleType() {
	return QOpenGLContext::openGLModuleType();
}

bool QOpenGLContext_IsOpenGLES(const QOpenGLContext* self) {
	return self->isOpenGLES();
}

bool QOpenGLContext_SupportsThreadedOpenGL() {
	return QOpenGLContext::supportsThreadedOpenGL();
}

QOpenGLContext* QOpenGLContext_GlobalShareContext() {
	return QOpenGLContext::globalShareContext();
}

void QOpenGLContext_AboutToBeDestroyed(QOpenGLContext* self) {
	self->aboutToBeDestroyed();
}

void QOpenGLContext_Connect_AboutToBeDestroyed(QOpenGLContext* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLContext*) = reinterpret_cast<void (*)(QOpenGLContext*)>(slot);
    QOpenGLContext::connect(self, &QOpenGLContext::aboutToBeDestroyed, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QOpenGLContext_Tr2(const char* s, const char* c) {
	QString _ret = QOpenGLContext::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QOpenGLContext_Tr3(const char* s, const char* c, int n) {
	QString _ret = QOpenGLContext::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QOpenGLContext_Delete(QOpenGLContext* self) {
    delete self;
}

