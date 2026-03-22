#include <QByteArray>
#include <QColor>
#include <QMatrix4x4>
#include <QObject>
#include <QOpenGLContext>
#include <QOpenGLShader>
#include <QOpenGLShaderProgram>
#include <QPoint>
#include <QPointF>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTransform>
#include <QVector2D>
#include <QVector3D>
#include <QVector4D>
#include <qopenglshaderprogram.h>
#include "libqopenglshaderprogram.h"
#include "libqopenglshaderprogram.hxx"

QOpenGLShader* QOpenGLShader_new(int typeVal) {
	 return new QOpenGLShader(static_cast<QFlags<QOpenGLShader::ShaderTypeBit>>(typeVal));
}

QOpenGLShader* QOpenGLShader_new2(int typeVal, QObject* parent) {
	 return new QOpenGLShader(static_cast<QFlags<QOpenGLShader::ShaderTypeBit>>(typeVal), parent);
}

libqt_string QOpenGLShader_Tr(const char* s) {
	QString _ret = QOpenGLShader::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QOpenGLShader_ShaderType(const QOpenGLShader* self) {
	return self->shaderType();
}

bool QOpenGLShader_CompileSourceCode(QOpenGLShader* self, const char* source) {
	return self->compileSourceCode(source);
}

bool QOpenGLShader_CompileSourceCode2(QOpenGLShader* self, const libqt_string source) {
	return self->compileSourceCode(QByteArray(source.data, source.len));
}

bool QOpenGLShader_CompileSourceCode3(QOpenGLShader* self, const libqt_string source) {
	return self->compileSourceCode(QString::fromUtf8(source.data, source.len));
}

bool QOpenGLShader_CompileSourceFile(QOpenGLShader* self, const libqt_string fileName) {
	return self->compileSourceFile(QString::fromUtf8(fileName.data, fileName.len));
}

libqt_string QOpenGLShader_SourceCode(const QOpenGLShader* self) {
	QByteArray _qb = self->sourceCode();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QOpenGLShader_IsCompiled(const QOpenGLShader* self) {
	return self->isCompiled();
}

libqt_string QOpenGLShader_Log(const QOpenGLShader* self) {
	QString _ret = self->log();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

uint32_t QOpenGLShader_ShaderId(const QOpenGLShader* self) {
	return self->shaderId();
}

bool QOpenGLShader_HasOpenGLShaders(int typeVal) {
	return QOpenGLShader::hasOpenGLShaders(static_cast<QFlags<QOpenGLShader::ShaderTypeBit>>(typeVal));
}

libqt_string QOpenGLShader_Tr2(const char* s, const char* c) {
	QString _ret = QOpenGLShader::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QOpenGLShader_Tr3(const char* s, const char* c, int n) {
	QString _ret = QOpenGLShader::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QOpenGLShader_HasOpenGLShaders2(int typeVal, QOpenGLContext* context) {
	return QOpenGLShader::hasOpenGLShaders(static_cast<QFlags<QOpenGLShader::ShaderTypeBit>>(typeVal), context);
}

void QOpenGLShader_Delete(QOpenGLShader* self) {
    delete self;
}

QOpenGLShaderProgram* QOpenGLShaderProgram_new() {
	 return new VirtualQOpenGLShaderProgram();
}

QOpenGLShaderProgram* QOpenGLShaderProgram_new2(QObject* parent) {
	 return new VirtualQOpenGLShaderProgram(parent);
}

libqt_string QOpenGLShaderProgram_Tr(const char* s) {
	QString _ret = QOpenGLShaderProgram::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QOpenGLShaderProgram_AddShader(QOpenGLShaderProgram* self, QOpenGLShader* shader) {
	return self->addShader(shader);
}

void QOpenGLShaderProgram_RemoveShader(QOpenGLShaderProgram* self, QOpenGLShader* shader) {
	self->removeShader(shader);
}

libqt_list QOpenGLShaderProgram_Shaders(const QOpenGLShaderProgram* self) {
	auto _ret = self->shaders();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

bool QOpenGLShaderProgram_AddShaderFromSourceCode(QOpenGLShaderProgram* self, int typeVal, const char* source) {
	return self->addShaderFromSourceCode(static_cast<QFlags<QOpenGLShader::ShaderTypeBit>>(typeVal), source);
}

bool QOpenGLShaderProgram_AddShaderFromSourceCode2(QOpenGLShaderProgram* self, int typeVal, const libqt_string source) {
	return self->addShaderFromSourceCode(static_cast<QFlags<QOpenGLShader::ShaderTypeBit>>(typeVal), QByteArray(source.data, source.len));
}

bool QOpenGLShaderProgram_AddShaderFromSourceCode3(QOpenGLShaderProgram* self, int typeVal, const libqt_string source) {
	return self->addShaderFromSourceCode(static_cast<QFlags<QOpenGLShader::ShaderTypeBit>>(typeVal), QString::fromUtf8(source.data, source.len));
}

bool QOpenGLShaderProgram_AddShaderFromSourceFile(QOpenGLShaderProgram* self, int typeVal, const libqt_string fileName) {
	return self->addShaderFromSourceFile(static_cast<QFlags<QOpenGLShader::ShaderTypeBit>>(typeVal), QString::fromUtf8(fileName.data, fileName.len));
}

bool QOpenGLShaderProgram_AddCacheableShaderFromSourceCode(QOpenGLShaderProgram* self, int typeVal, const char* source) {
	return self->addCacheableShaderFromSourceCode(static_cast<QFlags<QOpenGLShader::ShaderTypeBit>>(typeVal), source);
}

bool QOpenGLShaderProgram_AddCacheableShaderFromSourceCode2(QOpenGLShaderProgram* self, int typeVal, const libqt_string source) {
	return self->addCacheableShaderFromSourceCode(static_cast<QFlags<QOpenGLShader::ShaderTypeBit>>(typeVal), QByteArray(source.data, source.len));
}

bool QOpenGLShaderProgram_AddCacheableShaderFromSourceCode3(QOpenGLShaderProgram* self, int typeVal, const libqt_string source) {
	return self->addCacheableShaderFromSourceCode(static_cast<QFlags<QOpenGLShader::ShaderTypeBit>>(typeVal), QString::fromUtf8(source.data, source.len));
}

bool QOpenGLShaderProgram_AddCacheableShaderFromSourceFile(QOpenGLShaderProgram* self, int typeVal, const libqt_string fileName) {
	return self->addCacheableShaderFromSourceFile(static_cast<QFlags<QOpenGLShader::ShaderTypeBit>>(typeVal), QString::fromUtf8(fileName.data, fileName.len));
}

void QOpenGLShaderProgram_RemoveAllShaders(QOpenGLShaderProgram* self) {
	self->removeAllShaders();
}

bool QOpenGLShaderProgram_Link(QOpenGLShaderProgram* self) {
	return self->link();
}

bool QOpenGLShaderProgram_IsLinked(const QOpenGLShaderProgram* self) {
	return self->isLinked();
}

libqt_string QOpenGLShaderProgram_Log(const QOpenGLShaderProgram* self) {
	QString _ret = self->log();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QOpenGLShaderProgram_Bind(QOpenGLShaderProgram* self) {
	return self->bind();
}

void QOpenGLShaderProgram_Release(QOpenGLShaderProgram* self) {
	self->release();
}

bool QOpenGLShaderProgram_Create(QOpenGLShaderProgram* self) {
	return self->create();
}

uint32_t QOpenGLShaderProgram_ProgramId(const QOpenGLShaderProgram* self) {
	return self->programId();
}

int QOpenGLShaderProgram_MaxGeometryOutputVertices(const QOpenGLShaderProgram* self) {
	return self->maxGeometryOutputVertices();
}

void QOpenGLShaderProgram_SetPatchVertexCount(QOpenGLShaderProgram* self, int count) {
	self->setPatchVertexCount(count);
}

int QOpenGLShaderProgram_PatchVertexCount(const QOpenGLShaderProgram* self) {
	return self->patchVertexCount();
}

void QOpenGLShaderProgram_SetDefaultOuterTessellationLevels(QOpenGLShaderProgram* self, const libqt_list levels) {
	self->setDefaultOuterTessellationLevels(QList<float>());
}

libqt_list QOpenGLShaderProgram_DefaultOuterTessellationLevels(const QOpenGLShaderProgram* self) {
	auto _ret = self->defaultOuterTessellationLevels();
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

void QOpenGLShaderProgram_SetDefaultInnerTessellationLevels(QOpenGLShaderProgram* self, const libqt_list levels) {
	self->setDefaultInnerTessellationLevels(QList<float>());
}

libqt_list QOpenGLShaderProgram_DefaultInnerTessellationLevels(const QOpenGLShaderProgram* self) {
	auto _ret = self->defaultInnerTessellationLevels();
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

void QOpenGLShaderProgram_BindAttributeLocation(QOpenGLShaderProgram* self, const char* name, int location) {
	self->bindAttributeLocation(name, location);
}

void QOpenGLShaderProgram_BindAttributeLocation2(QOpenGLShaderProgram* self, const libqt_string name, int location) {
	self->bindAttributeLocation(QByteArray(name.data, name.len), location);
}

void QOpenGLShaderProgram_BindAttributeLocation3(QOpenGLShaderProgram* self, const libqt_string name, int location) {
	self->bindAttributeLocation(QString::fromUtf8(name.data, name.len), location);
}

int QOpenGLShaderProgram_AttributeLocation(const QOpenGLShaderProgram* self, const char* name) {
	return self->attributeLocation(name);
}

int QOpenGLShaderProgram_AttributeLocation2(const QOpenGLShaderProgram* self, const libqt_string name) {
	return self->attributeLocation(QByteArray(name.data, name.len));
}

int QOpenGLShaderProgram_AttributeLocation3(const QOpenGLShaderProgram* self, const libqt_string name) {
	return self->attributeLocation(QString::fromUtf8(name.data, name.len));
}

void QOpenGLShaderProgram_SetAttributeValue(QOpenGLShaderProgram* self, int location, float value) {
	self->setAttributeValue(location, value);
}

void QOpenGLShaderProgram_SetAttributeValue2(QOpenGLShaderProgram* self, int location, float x, float y) {
	self->setAttributeValue(location, x, y);
}

void QOpenGLShaderProgram_SetAttributeValue3(QOpenGLShaderProgram* self, int location, float x, float y, float z) {
	self->setAttributeValue(location, x, y, z);
}

void QOpenGLShaderProgram_SetAttributeValue4(QOpenGLShaderProgram* self, int location, float x, float y, float z, float w) {
	self->setAttributeValue(location, x, y, z, w);
}

void QOpenGLShaderProgram_SetAttributeValue5(QOpenGLShaderProgram* self, int location, const QVector2D* value) {
	self->setAttributeValue(location, *value);
}

void QOpenGLShaderProgram_SetAttributeValue6(QOpenGLShaderProgram* self, int location, const QVector3D* value) {
	self->setAttributeValue(location, *value);
}

void QOpenGLShaderProgram_SetAttributeValue7(QOpenGLShaderProgram* self, int location, const QVector4D* value) {
	self->setAttributeValue(location, *value);
}

void QOpenGLShaderProgram_SetAttributeValue8(QOpenGLShaderProgram* self, int location, const QColor* value) {
	self->setAttributeValue(location, *value);
}

void QOpenGLShaderProgram_SetAttributeValue9(QOpenGLShaderProgram* self, int location, const float* values, int columns, int rows) {
	self->setAttributeValue(location, values, columns, rows);
}

void QOpenGLShaderProgram_SetAttributeValue10(QOpenGLShaderProgram* self, const char* name, float value) {
	self->setAttributeValue(name, value);
}

void QOpenGLShaderProgram_SetAttributeValue11(QOpenGLShaderProgram* self, const char* name, float x, float y) {
	self->setAttributeValue(name, x, y);
}

void QOpenGLShaderProgram_SetAttributeValue12(QOpenGLShaderProgram* self, const char* name, float x, float y, float z) {
	self->setAttributeValue(name, x, y, z);
}

void QOpenGLShaderProgram_SetAttributeValue13(QOpenGLShaderProgram* self, const char* name, float x, float y, float z, float w) {
	self->setAttributeValue(name, x, y, z, w);
}

void QOpenGLShaderProgram_SetAttributeValue14(QOpenGLShaderProgram* self, const char* name, const QVector2D* value) {
	self->setAttributeValue(name, *value);
}

void QOpenGLShaderProgram_SetAttributeValue15(QOpenGLShaderProgram* self, const char* name, const QVector3D* value) {
	self->setAttributeValue(name, *value);
}

void QOpenGLShaderProgram_SetAttributeValue16(QOpenGLShaderProgram* self, const char* name, const QVector4D* value) {
	self->setAttributeValue(name, *value);
}

void QOpenGLShaderProgram_SetAttributeValue17(QOpenGLShaderProgram* self, const char* name, const QColor* value) {
	self->setAttributeValue(name, *value);
}

void QOpenGLShaderProgram_SetAttributeValue18(QOpenGLShaderProgram* self, const char* name, const float* values, int columns, int rows) {
	self->setAttributeValue(name, values, columns, rows);
}

void QOpenGLShaderProgram_SetAttributeArray(QOpenGLShaderProgram* self, int location, const float* values, int tupleSize) {
	self->setAttributeArray(location, values, tupleSize);
}

void QOpenGLShaderProgram_SetAttributeArray2(QOpenGLShaderProgram* self, int location, const QVector2D* values) {
	self->setAttributeArray(location, values);
}

void QOpenGLShaderProgram_SetAttributeArray3(QOpenGLShaderProgram* self, int location, const QVector3D* values) {
	self->setAttributeArray(location, values);
}

void QOpenGLShaderProgram_SetAttributeArray4(QOpenGLShaderProgram* self, int location, const QVector4D* values) {
	self->setAttributeArray(location, values);
}

void QOpenGLShaderProgram_SetAttributeArray5(QOpenGLShaderProgram* self, int location, uint32_t typeVal, const void* values, int tupleSize) {
	self->setAttributeArray(location, typeVal, values, tupleSize);
}

void QOpenGLShaderProgram_SetAttributeArray6(QOpenGLShaderProgram* self, const char* name, const float* values, int tupleSize) {
	self->setAttributeArray(name, values, tupleSize);
}

void QOpenGLShaderProgram_SetAttributeArray7(QOpenGLShaderProgram* self, const char* name, const QVector2D* values) {
	self->setAttributeArray(name, values);
}

void QOpenGLShaderProgram_SetAttributeArray8(QOpenGLShaderProgram* self, const char* name, const QVector3D* values) {
	self->setAttributeArray(name, values);
}

void QOpenGLShaderProgram_SetAttributeArray9(QOpenGLShaderProgram* self, const char* name, const QVector4D* values) {
	self->setAttributeArray(name, values);
}

void QOpenGLShaderProgram_SetAttributeArray10(QOpenGLShaderProgram* self, const char* name, uint32_t typeVal, const void* values, int tupleSize) {
	self->setAttributeArray(name, typeVal, values, tupleSize);
}

void QOpenGLShaderProgram_SetAttributeBuffer(QOpenGLShaderProgram* self, int location, uint32_t typeVal, int offset, int tupleSize) {
	self->setAttributeBuffer(location, typeVal, offset, tupleSize);
}

void QOpenGLShaderProgram_SetAttributeBuffer2(QOpenGLShaderProgram* self, const char* name, uint32_t typeVal, int offset, int tupleSize) {
	self->setAttributeBuffer(name, typeVal, offset, tupleSize);
}

void QOpenGLShaderProgram_EnableAttributeArray(QOpenGLShaderProgram* self, int location) {
	self->enableAttributeArray(location);
}

void QOpenGLShaderProgram_EnableAttributeArray2(QOpenGLShaderProgram* self, const char* name) {
	self->enableAttributeArray(name);
}

void QOpenGLShaderProgram_DisableAttributeArray(QOpenGLShaderProgram* self, int location) {
	self->disableAttributeArray(location);
}

void QOpenGLShaderProgram_DisableAttributeArray2(QOpenGLShaderProgram* self, const char* name) {
	self->disableAttributeArray(name);
}

int QOpenGLShaderProgram_UniformLocation(const QOpenGLShaderProgram* self, const char* name) {
	return self->uniformLocation(name);
}

int QOpenGLShaderProgram_UniformLocation2(const QOpenGLShaderProgram* self, const libqt_string name) {
	return self->uniformLocation(QByteArray(name.data, name.len));
}

int QOpenGLShaderProgram_UniformLocation3(const QOpenGLShaderProgram* self, const libqt_string name) {
	return self->uniformLocation(QString::fromUtf8(name.data, name.len));
}

void QOpenGLShaderProgram_SetUniformValue(QOpenGLShaderProgram* self, int location, float value) {
	self->setUniformValue(location, value);
}

void QOpenGLShaderProgram_SetUniformValue2(QOpenGLShaderProgram* self, int location, int32_t value) {
	self->setUniformValue(location, value);
}

void QOpenGLShaderProgram_SetUniformValue3(QOpenGLShaderProgram* self, int location, uint32_t value) {
	self->setUniformValue(location, value);
}

void QOpenGLShaderProgram_SetUniformValue4(QOpenGLShaderProgram* self, int location, float x, float y) {
	self->setUniformValue(location, x, y);
}

void QOpenGLShaderProgram_SetUniformValue5(QOpenGLShaderProgram* self, int location, float x, float y, float z) {
	self->setUniformValue(location, x, y, z);
}

void QOpenGLShaderProgram_SetUniformValue6(QOpenGLShaderProgram* self, int location, float x, float y, float z, float w) {
	self->setUniformValue(location, x, y, z, w);
}

void QOpenGLShaderProgram_SetUniformValue7(QOpenGLShaderProgram* self, int location, const QVector2D* value) {
	self->setUniformValue(location, *value);
}

void QOpenGLShaderProgram_SetUniformValue8(QOpenGLShaderProgram* self, int location, const QVector3D* value) {
	self->setUniformValue(location, *value);
}

void QOpenGLShaderProgram_SetUniformValue9(QOpenGLShaderProgram* self, int location, const QVector4D* value) {
	self->setUniformValue(location, *value);
}

void QOpenGLShaderProgram_SetUniformValue10(QOpenGLShaderProgram* self, int location, const QColor* color) {
	self->setUniformValue(location, *color);
}

void QOpenGLShaderProgram_SetUniformValue11(QOpenGLShaderProgram* self, int location, const QPoint* point) {
	self->setUniformValue(location, *point);
}

void QOpenGLShaderProgram_SetUniformValue12(QOpenGLShaderProgram* self, int location, const QPointF* point) {
	self->setUniformValue(location, *point);
}

void QOpenGLShaderProgram_SetUniformValue13(QOpenGLShaderProgram* self, int location, const QSize* size) {
	self->setUniformValue(location, *size);
}

void QOpenGLShaderProgram_SetUniformValue14(QOpenGLShaderProgram* self, int location, const QSizeF* size) {
	self->setUniformValue(location, *size);
}

void QOpenGLShaderProgram_SetUniformValue23(QOpenGLShaderProgram* self, int location, const QMatrix4x4* value) {
	self->setUniformValue(location, *value);
}

void QOpenGLShaderProgram_SetUniformValue24(QOpenGLShaderProgram* self, int location, const QTransform* value) {
	self->setUniformValue(location, *value);
}

void QOpenGLShaderProgram_SetUniformValue25(QOpenGLShaderProgram* self, const char* name, float value) {
	self->setUniformValue(name, value);
}

void QOpenGLShaderProgram_SetUniformValue26(QOpenGLShaderProgram* self, const char* name, int32_t value) {
	self->setUniformValue(name, value);
}

void QOpenGLShaderProgram_SetUniformValue27(QOpenGLShaderProgram* self, const char* name, uint32_t value) {
	self->setUniformValue(name, value);
}

void QOpenGLShaderProgram_SetUniformValue28(QOpenGLShaderProgram* self, const char* name, float x, float y) {
	self->setUniformValue(name, x, y);
}

void QOpenGLShaderProgram_SetUniformValue29(QOpenGLShaderProgram* self, const char* name, float x, float y, float z) {
	self->setUniformValue(name, x, y, z);
}

void QOpenGLShaderProgram_SetUniformValue30(QOpenGLShaderProgram* self, const char* name, float x, float y, float z, float w) {
	self->setUniformValue(name, x, y, z, w);
}

void QOpenGLShaderProgram_SetUniformValue31(QOpenGLShaderProgram* self, const char* name, const QVector2D* value) {
	self->setUniformValue(name, *value);
}

void QOpenGLShaderProgram_SetUniformValue32(QOpenGLShaderProgram* self, const char* name, const QVector3D* value) {
	self->setUniformValue(name, *value);
}

void QOpenGLShaderProgram_SetUniformValue33(QOpenGLShaderProgram* self, const char* name, const QVector4D* value) {
	self->setUniformValue(name, *value);
}

void QOpenGLShaderProgram_SetUniformValue34(QOpenGLShaderProgram* self, const char* name, const QColor* color) {
	self->setUniformValue(name, *color);
}

void QOpenGLShaderProgram_SetUniformValue35(QOpenGLShaderProgram* self, const char* name, const QPoint* point) {
	self->setUniformValue(name, *point);
}

void QOpenGLShaderProgram_SetUniformValue36(QOpenGLShaderProgram* self, const char* name, const QPointF* point) {
	self->setUniformValue(name, *point);
}

void QOpenGLShaderProgram_SetUniformValue37(QOpenGLShaderProgram* self, const char* name, const QSize* size) {
	self->setUniformValue(name, *size);
}

void QOpenGLShaderProgram_SetUniformValue38(QOpenGLShaderProgram* self, const char* name, const QSizeF* size) {
	self->setUniformValue(name, *size);
}

void QOpenGLShaderProgram_SetUniformValue47(QOpenGLShaderProgram* self, const char* name, const QMatrix4x4* value) {
	self->setUniformValue(name, *value);
}

void QOpenGLShaderProgram_SetUniformValue48(QOpenGLShaderProgram* self, const char* name, const QTransform* value) {
	self->setUniformValue(name, *value);
}

void QOpenGLShaderProgram_SetUniformValueArray(QOpenGLShaderProgram* self, int location, const float* values, int count, int tupleSize) {
	self->setUniformValueArray(location, values, count, tupleSize);
}

void QOpenGLShaderProgram_SetUniformValueArray2(QOpenGLShaderProgram* self, int location, const int32_t* values, int count) {
	self->setUniformValueArray(location, values, count);
}

void QOpenGLShaderProgram_SetUniformValueArray3(QOpenGLShaderProgram* self, int location, const uint32_t* values, int count) {
	self->setUniformValueArray(location, values, count);
}

void QOpenGLShaderProgram_SetUniformValueArray4(QOpenGLShaderProgram* self, int location, const QVector2D* values, int count) {
	self->setUniformValueArray(location, values, count);
}

void QOpenGLShaderProgram_SetUniformValueArray5(QOpenGLShaderProgram* self, int location, const QVector3D* values, int count) {
	self->setUniformValueArray(location, values, count);
}

void QOpenGLShaderProgram_SetUniformValueArray6(QOpenGLShaderProgram* self, int location, const QVector4D* values, int count) {
	self->setUniformValueArray(location, values, count);
}

void QOpenGLShaderProgram_SetUniformValueArray15(QOpenGLShaderProgram* self, int location, const QMatrix4x4* values, int count) {
	self->setUniformValueArray(location, values, count);
}

void QOpenGLShaderProgram_SetUniformValueArray16(QOpenGLShaderProgram* self, const char* name, const float* values, int count, int tupleSize) {
	self->setUniformValueArray(name, values, count, tupleSize);
}

void QOpenGLShaderProgram_SetUniformValueArray17(QOpenGLShaderProgram* self, const char* name, const int32_t* values, int count) {
	self->setUniformValueArray(name, values, count);
}

void QOpenGLShaderProgram_SetUniformValueArray18(QOpenGLShaderProgram* self, const char* name, const uint32_t* values, int count) {
	self->setUniformValueArray(name, values, count);
}

void QOpenGLShaderProgram_SetUniformValueArray19(QOpenGLShaderProgram* self, const char* name, const QVector2D* values, int count) {
	self->setUniformValueArray(name, values, count);
}

void QOpenGLShaderProgram_SetUniformValueArray20(QOpenGLShaderProgram* self, const char* name, const QVector3D* values, int count) {
	self->setUniformValueArray(name, values, count);
}

void QOpenGLShaderProgram_SetUniformValueArray21(QOpenGLShaderProgram* self, const char* name, const QVector4D* values, int count) {
	self->setUniformValueArray(name, values, count);
}

void QOpenGLShaderProgram_SetUniformValueArray30(QOpenGLShaderProgram* self, const char* name, const QMatrix4x4* values, int count) {
	self->setUniformValueArray(name, values, count);
}

bool QOpenGLShaderProgram_HasOpenGLShaderPrograms() {
	return QOpenGLShaderProgram::hasOpenGLShaderPrograms();
}

libqt_string QOpenGLShaderProgram_Tr2(const char* s, const char* c) {
	QString _ret = QOpenGLShaderProgram::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QOpenGLShaderProgram_Tr3(const char* s, const char* c, int n) {
	QString _ret = QOpenGLShaderProgram::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QOpenGLShaderProgram_SetAttributeArray42(QOpenGLShaderProgram* self, int location, const float* values, int tupleSize, int stride) {
	self->setAttributeArray(location, values, tupleSize, stride);
}

void QOpenGLShaderProgram_SetAttributeArray32(QOpenGLShaderProgram* self, int location, const QVector2D* values, int stride) {
	self->setAttributeArray(location, values, stride);
}

void QOpenGLShaderProgram_SetAttributeArray33(QOpenGLShaderProgram* self, int location, const QVector3D* values, int stride) {
	self->setAttributeArray(location, values, stride);
}

void QOpenGLShaderProgram_SetAttributeArray34(QOpenGLShaderProgram* self, int location, const QVector4D* values, int stride) {
	self->setAttributeArray(location, values, stride);
}

void QOpenGLShaderProgram_SetAttributeArray52(QOpenGLShaderProgram* self, int location, uint32_t typeVal, const void* values, int tupleSize, int stride) {
	self->setAttributeArray(location, typeVal, values, tupleSize, stride);
}

void QOpenGLShaderProgram_SetAttributeArray43(QOpenGLShaderProgram* self, const char* name, const float* values, int tupleSize, int stride) {
	self->setAttributeArray(name, values, tupleSize, stride);
}

void QOpenGLShaderProgram_SetAttributeArray35(QOpenGLShaderProgram* self, const char* name, const QVector2D* values, int stride) {
	self->setAttributeArray(name, values, stride);
}

void QOpenGLShaderProgram_SetAttributeArray36(QOpenGLShaderProgram* self, const char* name, const QVector3D* values, int stride) {
	self->setAttributeArray(name, values, stride);
}

void QOpenGLShaderProgram_SetAttributeArray37(QOpenGLShaderProgram* self, const char* name, const QVector4D* values, int stride) {
	self->setAttributeArray(name, values, stride);
}

void QOpenGLShaderProgram_SetAttributeArray53(QOpenGLShaderProgram* self, const char* name, uint32_t typeVal, const void* values, int tupleSize, int stride) {
	self->setAttributeArray(name, typeVal, values, tupleSize, stride);
}

void QOpenGLShaderProgram_SetAttributeBuffer5(QOpenGLShaderProgram* self, int location, uint32_t typeVal, int offset, int tupleSize, int stride) {
	self->setAttributeBuffer(location, typeVal, offset, tupleSize, stride);
}

void QOpenGLShaderProgram_SetAttributeBuffer52(QOpenGLShaderProgram* self, const char* name, uint32_t typeVal, int offset, int tupleSize, int stride) {
	self->setAttributeBuffer(name, typeVal, offset, tupleSize, stride);
}

bool QOpenGLShaderProgram_HasOpenGLShaderPrograms1(QOpenGLContext* context) {
	return QOpenGLShaderProgram::hasOpenGLShaderPrograms(context);
}

// Base class handler implementation
bool QOpenGLShaderProgram_QBaseLink(QOpenGLShaderProgram* self) {
	auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
	if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
vqopenglshaderprogram->setQOpenGLShaderProgram_Link_IsBase(true);
	return vqopenglshaderprogram->link();
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShaderProgram_OnLink(QOpenGLShaderProgram* self, intptr_t slot) {
	auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
	if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
vqopenglshaderprogram->setQOpenGLShaderProgram_Link_Callback(reinterpret_cast<VirtualQOpenGLShaderProgram::QOpenGLShaderProgram_Link_Callback>(slot));
}
}

void QOpenGLShaderProgram_Delete(QOpenGLShaderProgram* self) {
    delete self;
}

