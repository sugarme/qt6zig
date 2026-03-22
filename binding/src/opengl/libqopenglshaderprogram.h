#pragma once
#ifndef QOPENGLSHADERPROGRAM_H_C_LIB
#define QOPENGLSHADERPROGRAM_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QColor QColor;
typedef struct QMatrix4x4 QMatrix4x4;
typedef struct QObject QObject;
typedef struct QOpenGLContext QOpenGLContext;
typedef struct QOpenGLShader QOpenGLShader;
typedef struct QOpenGLShaderProgram QOpenGLShaderProgram;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QTransform QTransform;
typedef struct QVector2D QVector2D;
typedef struct QVector3D QVector3D;
typedef struct QVector4D QVector4D;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QOpenGLShader* QOpenGLShader_new(int typeVal);
QOpenGLShader* QOpenGLShader_new2(int typeVal, QObject* parent);
libqt_string QOpenGLShader_Tr(const char* s);
int QOpenGLShader_ShaderType(const QOpenGLShader* self);
bool QOpenGLShader_CompileSourceCode(QOpenGLShader* self, const char* source);
bool QOpenGLShader_CompileSourceCode2(QOpenGLShader* self, const libqt_string source);
bool QOpenGLShader_CompileSourceCode3(QOpenGLShader* self, const libqt_string source);
bool QOpenGLShader_CompileSourceFile(QOpenGLShader* self, const libqt_string fileName);
libqt_string QOpenGLShader_SourceCode(const QOpenGLShader* self);
bool QOpenGLShader_IsCompiled(const QOpenGLShader* self);
libqt_string QOpenGLShader_Log(const QOpenGLShader* self);
uint32_t QOpenGLShader_ShaderId(const QOpenGLShader* self);
bool QOpenGLShader_HasOpenGLShaders(int typeVal);
libqt_string QOpenGLShader_Tr2(const char* s, const char* c);
libqt_string QOpenGLShader_Tr3(const char* s, const char* c, int n);
bool QOpenGLShader_HasOpenGLShaders2(int typeVal, QOpenGLContext* context);
void QOpenGLShader_Delete(QOpenGLShader* self);

QOpenGLShaderProgram* QOpenGLShaderProgram_new();
QOpenGLShaderProgram* QOpenGLShaderProgram_new2(QObject* parent);
libqt_string QOpenGLShaderProgram_Tr(const char* s);
bool QOpenGLShaderProgram_AddShader(QOpenGLShaderProgram* self, QOpenGLShader* shader);
void QOpenGLShaderProgram_RemoveShader(QOpenGLShaderProgram* self, QOpenGLShader* shader);
libqt_list QOpenGLShaderProgram_Shaders(const QOpenGLShaderProgram* self);
bool QOpenGLShaderProgram_AddShaderFromSourceCode(QOpenGLShaderProgram* self, int typeVal, const char* source);
bool QOpenGLShaderProgram_AddShaderFromSourceCode2(QOpenGLShaderProgram* self, int typeVal, const libqt_string source);
bool QOpenGLShaderProgram_AddShaderFromSourceCode3(QOpenGLShaderProgram* self, int typeVal, const libqt_string source);
bool QOpenGLShaderProgram_AddShaderFromSourceFile(QOpenGLShaderProgram* self, int typeVal, const libqt_string fileName);
bool QOpenGLShaderProgram_AddCacheableShaderFromSourceCode(QOpenGLShaderProgram* self, int typeVal, const char* source);
bool QOpenGLShaderProgram_AddCacheableShaderFromSourceCode2(QOpenGLShaderProgram* self, int typeVal, const libqt_string source);
bool QOpenGLShaderProgram_AddCacheableShaderFromSourceCode3(QOpenGLShaderProgram* self, int typeVal, const libqt_string source);
bool QOpenGLShaderProgram_AddCacheableShaderFromSourceFile(QOpenGLShaderProgram* self, int typeVal, const libqt_string fileName);
void QOpenGLShaderProgram_RemoveAllShaders(QOpenGLShaderProgram* self);
bool QOpenGLShaderProgram_Link(QOpenGLShaderProgram* self);
bool QOpenGLShaderProgram_IsLinked(const QOpenGLShaderProgram* self);
libqt_string QOpenGLShaderProgram_Log(const QOpenGLShaderProgram* self);
bool QOpenGLShaderProgram_Bind(QOpenGLShaderProgram* self);
void QOpenGLShaderProgram_Release(QOpenGLShaderProgram* self);
bool QOpenGLShaderProgram_Create(QOpenGLShaderProgram* self);
uint32_t QOpenGLShaderProgram_ProgramId(const QOpenGLShaderProgram* self);
int QOpenGLShaderProgram_MaxGeometryOutputVertices(const QOpenGLShaderProgram* self);
void QOpenGLShaderProgram_SetPatchVertexCount(QOpenGLShaderProgram* self, int count);
int QOpenGLShaderProgram_PatchVertexCount(const QOpenGLShaderProgram* self);
void QOpenGLShaderProgram_SetDefaultOuterTessellationLevels(QOpenGLShaderProgram* self, const libqt_list levels);
libqt_list QOpenGLShaderProgram_DefaultOuterTessellationLevels(const QOpenGLShaderProgram* self);
void QOpenGLShaderProgram_SetDefaultInnerTessellationLevels(QOpenGLShaderProgram* self, const libqt_list levels);
libqt_list QOpenGLShaderProgram_DefaultInnerTessellationLevels(const QOpenGLShaderProgram* self);
void QOpenGLShaderProgram_BindAttributeLocation(QOpenGLShaderProgram* self, const char* name, int location);
void QOpenGLShaderProgram_BindAttributeLocation2(QOpenGLShaderProgram* self, const libqt_string name, int location);
void QOpenGLShaderProgram_BindAttributeLocation3(QOpenGLShaderProgram* self, const libqt_string name, int location);
int QOpenGLShaderProgram_AttributeLocation(const QOpenGLShaderProgram* self, const char* name);
int QOpenGLShaderProgram_AttributeLocation2(const QOpenGLShaderProgram* self, const libqt_string name);
int QOpenGLShaderProgram_AttributeLocation3(const QOpenGLShaderProgram* self, const libqt_string name);
void QOpenGLShaderProgram_SetAttributeValue(QOpenGLShaderProgram* self, int location, float value);
void QOpenGLShaderProgram_SetAttributeValue2(QOpenGLShaderProgram* self, int location, float x, float y);
void QOpenGLShaderProgram_SetAttributeValue3(QOpenGLShaderProgram* self, int location, float x, float y, float z);
void QOpenGLShaderProgram_SetAttributeValue4(QOpenGLShaderProgram* self, int location, float x, float y, float z, float w);
void QOpenGLShaderProgram_SetAttributeValue5(QOpenGLShaderProgram* self, int location, const QVector2D* value);
void QOpenGLShaderProgram_SetAttributeValue6(QOpenGLShaderProgram* self, int location, const QVector3D* value);
void QOpenGLShaderProgram_SetAttributeValue7(QOpenGLShaderProgram* self, int location, const QVector4D* value);
void QOpenGLShaderProgram_SetAttributeValue8(QOpenGLShaderProgram* self, int location, const QColor* value);
void QOpenGLShaderProgram_SetAttributeValue9(QOpenGLShaderProgram* self, int location, const float* values, int columns, int rows);
void QOpenGLShaderProgram_SetAttributeValue10(QOpenGLShaderProgram* self, const char* name, float value);
void QOpenGLShaderProgram_SetAttributeValue11(QOpenGLShaderProgram* self, const char* name, float x, float y);
void QOpenGLShaderProgram_SetAttributeValue12(QOpenGLShaderProgram* self, const char* name, float x, float y, float z);
void QOpenGLShaderProgram_SetAttributeValue13(QOpenGLShaderProgram* self, const char* name, float x, float y, float z, float w);
void QOpenGLShaderProgram_SetAttributeValue14(QOpenGLShaderProgram* self, const char* name, const QVector2D* value);
void QOpenGLShaderProgram_SetAttributeValue15(QOpenGLShaderProgram* self, const char* name, const QVector3D* value);
void QOpenGLShaderProgram_SetAttributeValue16(QOpenGLShaderProgram* self, const char* name, const QVector4D* value);
void QOpenGLShaderProgram_SetAttributeValue17(QOpenGLShaderProgram* self, const char* name, const QColor* value);
void QOpenGLShaderProgram_SetAttributeValue18(QOpenGLShaderProgram* self, const char* name, const float* values, int columns, int rows);
void QOpenGLShaderProgram_SetAttributeArray(QOpenGLShaderProgram* self, int location, const float* values, int tupleSize);
void QOpenGLShaderProgram_SetAttributeArray2(QOpenGLShaderProgram* self, int location, const QVector2D* values);
void QOpenGLShaderProgram_SetAttributeArray3(QOpenGLShaderProgram* self, int location, const QVector3D* values);
void QOpenGLShaderProgram_SetAttributeArray4(QOpenGLShaderProgram* self, int location, const QVector4D* values);
void QOpenGLShaderProgram_SetAttributeArray5(QOpenGLShaderProgram* self, int location, uint32_t typeVal, const void* values, int tupleSize);
void QOpenGLShaderProgram_SetAttributeArray6(QOpenGLShaderProgram* self, const char* name, const float* values, int tupleSize);
void QOpenGLShaderProgram_SetAttributeArray7(QOpenGLShaderProgram* self, const char* name, const QVector2D* values);
void QOpenGLShaderProgram_SetAttributeArray8(QOpenGLShaderProgram* self, const char* name, const QVector3D* values);
void QOpenGLShaderProgram_SetAttributeArray9(QOpenGLShaderProgram* self, const char* name, const QVector4D* values);
void QOpenGLShaderProgram_SetAttributeArray10(QOpenGLShaderProgram* self, const char* name, uint32_t typeVal, const void* values, int tupleSize);
void QOpenGLShaderProgram_SetAttributeBuffer(QOpenGLShaderProgram* self, int location, uint32_t typeVal, int offset, int tupleSize);
void QOpenGLShaderProgram_SetAttributeBuffer2(QOpenGLShaderProgram* self, const char* name, uint32_t typeVal, int offset, int tupleSize);
void QOpenGLShaderProgram_EnableAttributeArray(QOpenGLShaderProgram* self, int location);
void QOpenGLShaderProgram_EnableAttributeArray2(QOpenGLShaderProgram* self, const char* name);
void QOpenGLShaderProgram_DisableAttributeArray(QOpenGLShaderProgram* self, int location);
void QOpenGLShaderProgram_DisableAttributeArray2(QOpenGLShaderProgram* self, const char* name);
int QOpenGLShaderProgram_UniformLocation(const QOpenGLShaderProgram* self, const char* name);
int QOpenGLShaderProgram_UniformLocation2(const QOpenGLShaderProgram* self, const libqt_string name);
int QOpenGLShaderProgram_UniformLocation3(const QOpenGLShaderProgram* self, const libqt_string name);
void QOpenGLShaderProgram_SetUniformValue(QOpenGLShaderProgram* self, int location, float value);
void QOpenGLShaderProgram_SetUniformValue2(QOpenGLShaderProgram* self, int location, int32_t value);
void QOpenGLShaderProgram_SetUniformValue3(QOpenGLShaderProgram* self, int location, uint32_t value);
void QOpenGLShaderProgram_SetUniformValue4(QOpenGLShaderProgram* self, int location, float x, float y);
void QOpenGLShaderProgram_SetUniformValue5(QOpenGLShaderProgram* self, int location, float x, float y, float z);
void QOpenGLShaderProgram_SetUniformValue6(QOpenGLShaderProgram* self, int location, float x, float y, float z, float w);
void QOpenGLShaderProgram_SetUniformValue7(QOpenGLShaderProgram* self, int location, const QVector2D* value);
void QOpenGLShaderProgram_SetUniformValue8(QOpenGLShaderProgram* self, int location, const QVector3D* value);
void QOpenGLShaderProgram_SetUniformValue9(QOpenGLShaderProgram* self, int location, const QVector4D* value);
void QOpenGLShaderProgram_SetUniformValue10(QOpenGLShaderProgram* self, int location, const QColor* color);
void QOpenGLShaderProgram_SetUniformValue11(QOpenGLShaderProgram* self, int location, const QPoint* point);
void QOpenGLShaderProgram_SetUniformValue12(QOpenGLShaderProgram* self, int location, const QPointF* point);
void QOpenGLShaderProgram_SetUniformValue13(QOpenGLShaderProgram* self, int location, const QSize* size);
void QOpenGLShaderProgram_SetUniformValue14(QOpenGLShaderProgram* self, int location, const QSizeF* size);
void QOpenGLShaderProgram_SetUniformValue23(QOpenGLShaderProgram* self, int location, const QMatrix4x4* value);
void QOpenGLShaderProgram_SetUniformValue24(QOpenGLShaderProgram* self, int location, const QTransform* value);
void QOpenGLShaderProgram_SetUniformValue25(QOpenGLShaderProgram* self, const char* name, float value);
void QOpenGLShaderProgram_SetUniformValue26(QOpenGLShaderProgram* self, const char* name, int32_t value);
void QOpenGLShaderProgram_SetUniformValue27(QOpenGLShaderProgram* self, const char* name, uint32_t value);
void QOpenGLShaderProgram_SetUniformValue28(QOpenGLShaderProgram* self, const char* name, float x, float y);
void QOpenGLShaderProgram_SetUniformValue29(QOpenGLShaderProgram* self, const char* name, float x, float y, float z);
void QOpenGLShaderProgram_SetUniformValue30(QOpenGLShaderProgram* self, const char* name, float x, float y, float z, float w);
void QOpenGLShaderProgram_SetUniformValue31(QOpenGLShaderProgram* self, const char* name, const QVector2D* value);
void QOpenGLShaderProgram_SetUniformValue32(QOpenGLShaderProgram* self, const char* name, const QVector3D* value);
void QOpenGLShaderProgram_SetUniformValue33(QOpenGLShaderProgram* self, const char* name, const QVector4D* value);
void QOpenGLShaderProgram_SetUniformValue34(QOpenGLShaderProgram* self, const char* name, const QColor* color);
void QOpenGLShaderProgram_SetUniformValue35(QOpenGLShaderProgram* self, const char* name, const QPoint* point);
void QOpenGLShaderProgram_SetUniformValue36(QOpenGLShaderProgram* self, const char* name, const QPointF* point);
void QOpenGLShaderProgram_SetUniformValue37(QOpenGLShaderProgram* self, const char* name, const QSize* size);
void QOpenGLShaderProgram_SetUniformValue38(QOpenGLShaderProgram* self, const char* name, const QSizeF* size);
void QOpenGLShaderProgram_SetUniformValue47(QOpenGLShaderProgram* self, const char* name, const QMatrix4x4* value);
void QOpenGLShaderProgram_SetUniformValue48(QOpenGLShaderProgram* self, const char* name, const QTransform* value);
void QOpenGLShaderProgram_SetUniformValueArray(QOpenGLShaderProgram* self, int location, const float* values, int count, int tupleSize);
void QOpenGLShaderProgram_SetUniformValueArray2(QOpenGLShaderProgram* self, int location, const int32_t* values, int count);
void QOpenGLShaderProgram_SetUniformValueArray3(QOpenGLShaderProgram* self, int location, const uint32_t* values, int count);
void QOpenGLShaderProgram_SetUniformValueArray4(QOpenGLShaderProgram* self, int location, const QVector2D* values, int count);
void QOpenGLShaderProgram_SetUniformValueArray5(QOpenGLShaderProgram* self, int location, const QVector3D* values, int count);
void QOpenGLShaderProgram_SetUniformValueArray6(QOpenGLShaderProgram* self, int location, const QVector4D* values, int count);
void QOpenGLShaderProgram_SetUniformValueArray15(QOpenGLShaderProgram* self, int location, const QMatrix4x4* values, int count);
void QOpenGLShaderProgram_SetUniformValueArray16(QOpenGLShaderProgram* self, const char* name, const float* values, int count, int tupleSize);
void QOpenGLShaderProgram_SetUniformValueArray17(QOpenGLShaderProgram* self, const char* name, const int32_t* values, int count);
void QOpenGLShaderProgram_SetUniformValueArray18(QOpenGLShaderProgram* self, const char* name, const uint32_t* values, int count);
void QOpenGLShaderProgram_SetUniformValueArray19(QOpenGLShaderProgram* self, const char* name, const QVector2D* values, int count);
void QOpenGLShaderProgram_SetUniformValueArray20(QOpenGLShaderProgram* self, const char* name, const QVector3D* values, int count);
void QOpenGLShaderProgram_SetUniformValueArray21(QOpenGLShaderProgram* self, const char* name, const QVector4D* values, int count);
void QOpenGLShaderProgram_SetUniformValueArray30(QOpenGLShaderProgram* self, const char* name, const QMatrix4x4* values, int count);
bool QOpenGLShaderProgram_HasOpenGLShaderPrograms();
libqt_string QOpenGLShaderProgram_Tr2(const char* s, const char* c);
libqt_string QOpenGLShaderProgram_Tr3(const char* s, const char* c, int n);
void QOpenGLShaderProgram_SetAttributeArray42(QOpenGLShaderProgram* self, int location, const float* values, int tupleSize, int stride);
void QOpenGLShaderProgram_SetAttributeArray32(QOpenGLShaderProgram* self, int location, const QVector2D* values, int stride);
void QOpenGLShaderProgram_SetAttributeArray33(QOpenGLShaderProgram* self, int location, const QVector3D* values, int stride);
void QOpenGLShaderProgram_SetAttributeArray34(QOpenGLShaderProgram* self, int location, const QVector4D* values, int stride);
void QOpenGLShaderProgram_SetAttributeArray52(QOpenGLShaderProgram* self, int location, uint32_t typeVal, const void* values, int tupleSize, int stride);
void QOpenGLShaderProgram_SetAttributeArray43(QOpenGLShaderProgram* self, const char* name, const float* values, int tupleSize, int stride);
void QOpenGLShaderProgram_SetAttributeArray35(QOpenGLShaderProgram* self, const char* name, const QVector2D* values, int stride);
void QOpenGLShaderProgram_SetAttributeArray36(QOpenGLShaderProgram* self, const char* name, const QVector3D* values, int stride);
void QOpenGLShaderProgram_SetAttributeArray37(QOpenGLShaderProgram* self, const char* name, const QVector4D* values, int stride);
void QOpenGLShaderProgram_SetAttributeArray53(QOpenGLShaderProgram* self, const char* name, uint32_t typeVal, const void* values, int tupleSize, int stride);
void QOpenGLShaderProgram_SetAttributeBuffer5(QOpenGLShaderProgram* self, int location, uint32_t typeVal, int offset, int tupleSize, int stride);
void QOpenGLShaderProgram_SetAttributeBuffer52(QOpenGLShaderProgram* self, const char* name, uint32_t typeVal, int offset, int tupleSize, int stride);
bool QOpenGLShaderProgram_HasOpenGLShaderPrograms1(QOpenGLContext* context);
void QOpenGLShaderProgram_OnLink(QOpenGLShaderProgram* self, intptr_t slot);
bool QOpenGLShaderProgram_QBaseLink(QOpenGLShaderProgram* self);
void QOpenGLShaderProgram_Delete(QOpenGLShaderProgram* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
