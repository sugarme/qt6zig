#include <QOpenGLVersionProfile>
#include <QSurfaceFormat>
#include <qopenglversionprofile.h>
#include "libqopenglversionprofile.h"
#include "libqopenglversionprofile.hxx"

QOpenGLVersionProfile* QOpenGLVersionProfile_new() {
	 return new QOpenGLVersionProfile();
}

QOpenGLVersionProfile* QOpenGLVersionProfile_new2(const QSurfaceFormat* format) {
	 return new QOpenGLVersionProfile(*format);
}

QOpenGLVersionProfile* QOpenGLVersionProfile_new3(const QOpenGLVersionProfile* other) {
	 return new QOpenGLVersionProfile(*other);
}

void QOpenGLVersionProfile_OperatorAssign(QOpenGLVersionProfile* self, const QOpenGLVersionProfile* rhs) {
	self->operator=(*rhs);
}

libqt_pair QOpenGLVersionProfile_Version(const QOpenGLVersionProfile* self) {
	return self->version();
}

void QOpenGLVersionProfile_SetVersion(QOpenGLVersionProfile* self, int majorVersion, int minorVersion) {
	self->setVersion(majorVersion, minorVersion);
}

int QOpenGLVersionProfile_Profile(const QOpenGLVersionProfile* self) {
	return self->profile();
}

void QOpenGLVersionProfile_SetProfile(QOpenGLVersionProfile* self, int profile) {
	self->setProfile(static_cast<QSurfaceFormat::OpenGLContextProfile>(profile));
}

bool QOpenGLVersionProfile_HasProfiles(const QOpenGLVersionProfile* self) {
	return self->hasProfiles();
}

bool QOpenGLVersionProfile_IsLegacyVersion(const QOpenGLVersionProfile* self) {
	return self->isLegacyVersion();
}

bool QOpenGLVersionProfile_IsValid(const QOpenGLVersionProfile* self) {
	return self->isValid();
}

void QOpenGLVersionProfile_Delete(QOpenGLVersionProfile* self) {
    delete self;
}

