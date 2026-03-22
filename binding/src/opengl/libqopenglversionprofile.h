#pragma once
#ifndef QOPENGLVERSIONPROFILE_H_C_LIB
#define QOPENGLVERSIONPROFILE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QOpenGLVersionProfile QOpenGLVersionProfile;
typedef struct QSurfaceFormat QSurfaceFormat;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QOpenGLVersionProfile* QOpenGLVersionProfile_new();
QOpenGLVersionProfile* QOpenGLVersionProfile_new2(const QSurfaceFormat* format);
QOpenGLVersionProfile* QOpenGLVersionProfile_new3(const QOpenGLVersionProfile* other);
void QOpenGLVersionProfile_OperatorAssign(QOpenGLVersionProfile* self, const QOpenGLVersionProfile* rhs);
libqt_pair QOpenGLVersionProfile_Version(const QOpenGLVersionProfile* self);
void QOpenGLVersionProfile_SetVersion(QOpenGLVersionProfile* self, int majorVersion, int minorVersion);
int QOpenGLVersionProfile_Profile(const QOpenGLVersionProfile* self);
void QOpenGLVersionProfile_SetProfile(QOpenGLVersionProfile* self, int profile);
bool QOpenGLVersionProfile_HasProfiles(const QOpenGLVersionProfile* self);
bool QOpenGLVersionProfile_IsLegacyVersion(const QOpenGLVersionProfile* self);
bool QOpenGLVersionProfile_IsValid(const QOpenGLVersionProfile* self);
void QOpenGLVersionProfile_Delete(QOpenGLVersionProfile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
