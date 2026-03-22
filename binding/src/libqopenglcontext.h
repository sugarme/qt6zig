#pragma once
#ifndef QOPENGLCONTEXT_H_C_LIB
#define QOPENGLCONTEXT_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDebug QDebug;
typedef struct QObject QObject;
typedef struct QOpenGLContext QOpenGLContext;
typedef struct QOpenGLContextGroup QOpenGLContextGroup;
typedef struct QOpenGLExtraFunctions QOpenGLExtraFunctions;
typedef struct QOpenGLFunctions QOpenGLFunctions;
typedef struct QScreen QScreen;
typedef struct QSurface QSurface;
typedef struct QSurfaceFormat QSurfaceFormat;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




libqt_string QOpenGLContextGroup_Tr(const char* s);
libqt_list QOpenGLContextGroup_Shares(const QOpenGLContextGroup* self);
QOpenGLContextGroup* QOpenGLContextGroup_CurrentContextGroup();
libqt_string QOpenGLContextGroup_Tr2(const char* s, const char* c);
libqt_string QOpenGLContextGroup_Tr3(const char* s, const char* c, int n);
void QOpenGLContextGroup_Delete(QOpenGLContextGroup* self);

QOpenGLContext* QOpenGLContext_new();
QOpenGLContext* QOpenGLContext_new2(QObject* parent);
libqt_string QOpenGLContext_Tr(const char* s);
void QOpenGLContext_SetFormat(QOpenGLContext* self, const QSurfaceFormat* format);
void QOpenGLContext_SetShareContext(QOpenGLContext* self, QOpenGLContext* shareContext);
void QOpenGLContext_SetScreen(QOpenGLContext* self, QScreen* screen);
bool QOpenGLContext_Create(QOpenGLContext* self);
bool QOpenGLContext_IsValid(const QOpenGLContext* self);
QSurfaceFormat* QOpenGLContext_Format(const QOpenGLContext* self);
QOpenGLContext* QOpenGLContext_ShareContext(const QOpenGLContext* self);
QOpenGLContextGroup* QOpenGLContext_ShareGroup(const QOpenGLContext* self);
QScreen* QOpenGLContext_Screen(const QOpenGLContext* self);
uint32_t QOpenGLContext_DefaultFramebufferObject(const QOpenGLContext* self);
bool QOpenGLContext_MakeCurrent(QOpenGLContext* self, QSurface* surface);
void QOpenGLContext_DoneCurrent(QOpenGLContext* self);
void QOpenGLContext_SwapBuffers(QOpenGLContext* self, QSurface* surface);
QSurface* QOpenGLContext_Surface(const QOpenGLContext* self);
QOpenGLContext* QOpenGLContext_CurrentContext();
bool QOpenGLContext_AreSharing(QOpenGLContext* first, QOpenGLContext* second);
QOpenGLFunctions* QOpenGLContext_Functions(const QOpenGLContext* self);
QOpenGLExtraFunctions* QOpenGLContext_ExtraFunctions(const QOpenGLContext* self);
libqt_list QOpenGLContext_Extensions(const QOpenGLContext* self);
bool QOpenGLContext_HasExtension(const QOpenGLContext* self, const libqt_string extension);
int QOpenGLContext_OpenGLModuleType();
bool QOpenGLContext_IsOpenGLES(const QOpenGLContext* self);
bool QOpenGLContext_SupportsThreadedOpenGL();
QOpenGLContext* QOpenGLContext_GlobalShareContext();
void QOpenGLContext_AboutToBeDestroyed(QOpenGLContext* self);
void QOpenGLContext_Connect_AboutToBeDestroyed(QOpenGLContext* self, intptr_t slot);
libqt_string QOpenGLContext_Tr2(const char* s, const char* c);
libqt_string QOpenGLContext_Tr3(const char* s, const char* c, int n);
void QOpenGLContext_Delete(QOpenGLContext* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
