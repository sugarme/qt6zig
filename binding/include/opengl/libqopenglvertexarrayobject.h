#pragma once
#ifndef QOPENGLVERTEXARRAYOBJECT_H_C_LIB
#define QOPENGLVERTEXARRAYOBJECT_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLVertexArrayObject__Binder)
typedef QOpenGLVertexArrayObject::Binder QOpenGLVertexArrayObject__Binder;
#endif
#else
typedef struct QObject QObject;
typedef struct QOpenGLVertexArrayObject QOpenGLVertexArrayObject;
typedef struct QOpenGLVertexArrayObject__Binder QOpenGLVertexArrayObject__Binder;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QOpenGLVertexArrayObject* QOpenGLVertexArrayObject_new();
QOpenGLVertexArrayObject* QOpenGLVertexArrayObject_new2(QObject* parent);
libqt_string QOpenGLVertexArrayObject_Tr(const char* s);
bool QOpenGLVertexArrayObject_Create(QOpenGLVertexArrayObject* self);
void QOpenGLVertexArrayObject_Destroy(QOpenGLVertexArrayObject* self);
bool QOpenGLVertexArrayObject_IsCreated(const QOpenGLVertexArrayObject* self);
uint32_t QOpenGLVertexArrayObject_ObjectId(const QOpenGLVertexArrayObject* self);
void QOpenGLVertexArrayObject_Bind(QOpenGLVertexArrayObject* self);
void QOpenGLVertexArrayObject_Release(QOpenGLVertexArrayObject* self);
libqt_string QOpenGLVertexArrayObject_Tr2(const char* s, const char* c);
libqt_string QOpenGLVertexArrayObject_Tr3(const char* s, const char* c, int n);
void QOpenGLVertexArrayObject_Delete(QOpenGLVertexArrayObject* self);

QOpenGLVertexArrayObject__Binder* QOpenGLVertexArrayObject__Binder_new(QOpenGLVertexArrayObject* v);
void QOpenGLVertexArrayObject__Binder_Release(QOpenGLVertexArrayObject__Binder* self);
void QOpenGLVertexArrayObject__Binder_Rebind(QOpenGLVertexArrayObject__Binder* self);
void QOpenGLVertexArrayObject__Binder_Delete(QOpenGLVertexArrayObject__Binder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
