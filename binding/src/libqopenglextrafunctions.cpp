#include <QOpenGLContext>
#include <QOpenGLFunctions>
#include <qopenglextrafunctions.h>
#include "libqopenglextrafunctions.h"
#include "libqopenglextrafunctions.hxx"

QOpenGLExtraFunctions* QOpenGLExtraFunctions_new(const QOpenGLExtraFunctions* other) {
	 return new QOpenGLExtraFunctions(*other);
}

QOpenGLExtraFunctions* QOpenGLExtraFunctions_new2() {
	 return new QOpenGLExtraFunctions();
}

QOpenGLExtraFunctions* QOpenGLExtraFunctions_new3(QOpenGLContext* context) {
	 return new QOpenGLExtraFunctions(context);
}

QOpenGLExtraFunctions* QOpenGLExtraFunctions_new4(const QOpenGLExtraFunctions* param1) {
	 return new QOpenGLExtraFunctions(*param1);
}

void QOpenGLExtraFunctions_CopyAssign(QOpenGLExtraFunctions* self, QOpenGLExtraFunctions* other) {
    *self = *other;
}

void QOpenGLExtraFunctions_GlReadBuffer(QOpenGLExtraFunctions* self, uint32_t mode) {
	self->glReadBuffer(mode);
}

void QOpenGLExtraFunctions_GlDrawRangeElements(QOpenGLExtraFunctions* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices) {
	self->glDrawRangeElements(mode, start, end, count, typeVal, indices);
}

void QOpenGLExtraFunctions_GlTexImage3D(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexImage3D(target, level, internalformat, width, height, depth, border, format, typeVal, pixels);
}

void QOpenGLExtraFunctions_GlTexSubImage3D(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t typeVal, const void* pixels) {
	self->glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, typeVal, pixels);
}

void QOpenGLExtraFunctions_GlCopyTexSubImage3D(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void QOpenGLExtraFunctions_GlCompressedTexImage3D(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, const void* data) {
	self->glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void QOpenGLExtraFunctions_GlCompressedTexSubImage3D(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, const void* data) {
	self->glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void QOpenGLExtraFunctions_GlGenQueries(QOpenGLExtraFunctions* self, int32_t n, uint32_t* ids) {
	self->glGenQueries(n, ids);
}

void QOpenGLExtraFunctions_GlDeleteQueries(QOpenGLExtraFunctions* self, int32_t n, const uint32_t* ids) {
	self->glDeleteQueries(n, ids);
}

unsigned char QOpenGLExtraFunctions_GlIsQuery(QOpenGLExtraFunctions* self, uint32_t id) {
	return self->glIsQuery(id);
}

void QOpenGLExtraFunctions_GlBeginQuery(QOpenGLExtraFunctions* self, uint32_t target, uint32_t id) {
	self->glBeginQuery(target, id);
}

void QOpenGLExtraFunctions_GlEndQuery(QOpenGLExtraFunctions* self, uint32_t target) {
	self->glEndQuery(target);
}

void QOpenGLExtraFunctions_GlGetQueryiv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetQueryiv(target, pname, params);
}

void QOpenGLExtraFunctions_GlGetQueryObjectuiv(QOpenGLExtraFunctions* self, uint32_t id, uint32_t pname, uint32_t* params) {
	self->glGetQueryObjectuiv(id, pname, params);
}

unsigned char QOpenGLExtraFunctions_GlUnmapBuffer(QOpenGLExtraFunctions* self, uint32_t target) {
	return self->glUnmapBuffer(target);
}

void QOpenGLExtraFunctions_GlGetBufferPointerv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, void** params) {
	self->glGetBufferPointerv(target, pname, params);
}

void QOpenGLExtraFunctions_GlDrawBuffers(QOpenGLExtraFunctions* self, int32_t n, const GL* bufs) {
	self->glDrawBuffers(n, bufs);
}

void QOpenGLExtraFunctions_GlUniformMatrix2x3fv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix2x3fv(location, count, transpose, value);
}

void QOpenGLExtraFunctions_GlUniformMatrix3x2fv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix3x2fv(location, count, transpose, value);
}

void QOpenGLExtraFunctions_GlUniformMatrix2x4fv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix2x4fv(location, count, transpose, value);
}

void QOpenGLExtraFunctions_GlUniformMatrix4x2fv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix4x2fv(location, count, transpose, value);
}

void QOpenGLExtraFunctions_GlUniformMatrix3x4fv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix3x4fv(location, count, transpose, value);
}

void QOpenGLExtraFunctions_GlUniformMatrix4x3fv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glUniformMatrix4x3fv(location, count, transpose, value);
}

void QOpenGLExtraFunctions_GlBlitFramebuffer(QOpenGLExtraFunctions* self, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter) {
	self->glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void QOpenGLExtraFunctions_GlRenderbufferStorageMultisample(QOpenGLExtraFunctions* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height) {
	self->glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

void QOpenGLExtraFunctions_GlFramebufferTextureLayer(QOpenGLExtraFunctions* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer) {
	self->glFramebufferTextureLayer(target, attachment, texture, level, layer);
}

void* QOpenGLExtraFunctions_GlMapBufferRange(QOpenGLExtraFunctions* self, uint32_t target, int64_t offset, int64_t length, uint32_t access) {
	return self->glMapBufferRange(target, offset, length, access);
}

void QOpenGLExtraFunctions_GlFlushMappedBufferRange(QOpenGLExtraFunctions* self, uint32_t target, int64_t offset, int64_t length) {
	self->glFlushMappedBufferRange(target, offset, length);
}

void QOpenGLExtraFunctions_GlBindVertexArray(QOpenGLExtraFunctions* self, uint32_t array) {
	self->glBindVertexArray(array);
}

void QOpenGLExtraFunctions_GlDeleteVertexArrays(QOpenGLExtraFunctions* self, int32_t n, const uint32_t* arrays) {
	self->glDeleteVertexArrays(n, arrays);
}

void QOpenGLExtraFunctions_GlGenVertexArrays(QOpenGLExtraFunctions* self, int32_t n, uint32_t* arrays) {
	self->glGenVertexArrays(n, arrays);
}

unsigned char QOpenGLExtraFunctions_GlIsVertexArray(QOpenGLExtraFunctions* self, uint32_t array) {
	return self->glIsVertexArray(array);
}

void QOpenGLExtraFunctions_GlGetIntegeriV(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index, int32_t* data) {
	self->glGetIntegeri_v(target, index, data);
}

void QOpenGLExtraFunctions_GlBeginTransformFeedback(QOpenGLExtraFunctions* self, uint32_t primitiveMode) {
	self->glBeginTransformFeedback(primitiveMode);
}

void QOpenGLExtraFunctions_GlEndTransformFeedback(QOpenGLExtraFunctions* self) {
	self->glEndTransformFeedback();
}

void QOpenGLExtraFunctions_GlBindBufferRange(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index, uint32_t buffer, int64_t offset, int64_t size) {
	self->glBindBufferRange(target, index, buffer, offset, size);
}

void QOpenGLExtraFunctions_GlBindBufferBase(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index, uint32_t buffer) {
	self->glBindBufferBase(target, index, buffer);
}

void QOpenGLExtraFunctions_GlTransformFeedbackVaryings(QOpenGLExtraFunctions* self, uint32_t program, int32_t count, const GLchar** varyings, uint32_t bufferMode) {
	self->glTransformFeedbackVaryings(program, count, varyings, bufferMode);
}

void QOpenGLExtraFunctions_GlGetTransformFeedbackVarying(QOpenGLExtraFunctions* self, uint32_t program, uint32_t index, int32_t bufSize, int32_t* length, int32_t* size, GL* typeVal, GLchar* name) {
	self->glGetTransformFeedbackVarying(program, index, bufSize, length, size, typeVal, name);
}

void QOpenGLExtraFunctions_GlVertexAttribIPointer(QOpenGLExtraFunctions* self, uint32_t index, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
	self->glVertexAttribIPointer(index, size, typeVal, stride, pointer);
}

void QOpenGLExtraFunctions_GlGetVertexAttribIiv(QOpenGLExtraFunctions* self, uint32_t index, uint32_t pname, int32_t* params) {
	self->glGetVertexAttribIiv(index, pname, params);
}

void QOpenGLExtraFunctions_GlGetVertexAttribIuiv(QOpenGLExtraFunctions* self, uint32_t index, uint32_t pname, uint32_t* params) {
	self->glGetVertexAttribIuiv(index, pname, params);
}

void QOpenGLExtraFunctions_GlVertexAttribI4i(QOpenGLExtraFunctions* self, uint32_t index, int32_t x, int32_t y, int32_t z, int32_t w) {
	self->glVertexAttribI4i(index, x, y, z, w);
}

void QOpenGLExtraFunctions_GlVertexAttribI4ui(QOpenGLExtraFunctions* self, uint32_t index, uint32_t x, uint32_t y, uint32_t z, uint32_t w) {
	self->glVertexAttribI4ui(index, x, y, z, w);
}

void QOpenGLExtraFunctions_GlVertexAttribI4iv(QOpenGLExtraFunctions* self, uint32_t index, const int32_t* v) {
	self->glVertexAttribI4iv(index, v);
}

void QOpenGLExtraFunctions_GlVertexAttribI4uiv(QOpenGLExtraFunctions* self, uint32_t index, const uint32_t* v) {
	self->glVertexAttribI4uiv(index, v);
}

void QOpenGLExtraFunctions_GlGetUniformuiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, uint32_t* params) {
	self->glGetUniformuiv(program, location, params);
}

int32_t QOpenGLExtraFunctions_GlGetFragDataLocation(QOpenGLExtraFunctions* self, uint32_t program, const GLchar* name) {
	return self->glGetFragDataLocation(program, name);
}

void QOpenGLExtraFunctions_GlUniform1ui(QOpenGLExtraFunctions* self, int32_t location, uint32_t v0) {
	self->glUniform1ui(location, v0);
}

void QOpenGLExtraFunctions_GlUniform2ui(QOpenGLExtraFunctions* self, int32_t location, uint32_t v0, uint32_t v1) {
	self->glUniform2ui(location, v0, v1);
}

void QOpenGLExtraFunctions_GlUniform3ui(QOpenGLExtraFunctions* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2) {
	self->glUniform3ui(location, v0, v1, v2);
}

void QOpenGLExtraFunctions_GlUniform4ui(QOpenGLExtraFunctions* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3) {
	self->glUniform4ui(location, v0, v1, v2, v3);
}

void QOpenGLExtraFunctions_GlUniform1uiv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, const uint32_t* value) {
	self->glUniform1uiv(location, count, value);
}

void QOpenGLExtraFunctions_GlUniform2uiv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, const uint32_t* value) {
	self->glUniform2uiv(location, count, value);
}

void QOpenGLExtraFunctions_GlUniform3uiv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, const uint32_t* value) {
	self->glUniform3uiv(location, count, value);
}

void QOpenGLExtraFunctions_GlUniform4uiv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, const uint32_t* value) {
	self->glUniform4uiv(location, count, value);
}

void QOpenGLExtraFunctions_GlClearBufferiv(QOpenGLExtraFunctions* self, uint32_t buffer, int32_t drawbuffer, const int32_t* value) {
	self->glClearBufferiv(buffer, drawbuffer, value);
}

void QOpenGLExtraFunctions_GlClearBufferuiv(QOpenGLExtraFunctions* self, uint32_t buffer, int32_t drawbuffer, const uint32_t* value) {
	self->glClearBufferuiv(buffer, drawbuffer, value);
}

void QOpenGLExtraFunctions_GlClearBufferfv(QOpenGLExtraFunctions* self, uint32_t buffer, int32_t drawbuffer, const float* value) {
	self->glClearBufferfv(buffer, drawbuffer, value);
}

void QOpenGLExtraFunctions_GlClearBufferfi(QOpenGLExtraFunctions* self, uint32_t buffer, int32_t drawbuffer, float depth, int32_t stencil) {
	self->glClearBufferfi(buffer, drawbuffer, depth, stencil);
}

const uint8_t* QOpenGLExtraFunctions_GlGetStringi(QOpenGLExtraFunctions* self, uint32_t name, uint32_t index) {
	return self->glGetStringi(name, index);
}

void QOpenGLExtraFunctions_GlCopyBufferSubData(QOpenGLExtraFunctions* self, uint32_t readTarget, uint32_t writeTarget, int64_t readOffset, int64_t writeOffset, int64_t size) {
	self->glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

void QOpenGLExtraFunctions_GlGetUniformIndices(QOpenGLExtraFunctions* self, uint32_t program, int32_t uniformCount, const GLchar** uniformNames, uint32_t* uniformIndices) {
	self->glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

void QOpenGLExtraFunctions_GlGetActiveUniformsiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t uniformCount, const uint32_t* uniformIndices, uint32_t pname, int32_t* params) {
	self->glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

uint32_t QOpenGLExtraFunctions_GlGetUniformBlockIndex(QOpenGLExtraFunctions* self, uint32_t program, const GLchar* uniformBlockName) {
	return self->glGetUniformBlockIndex(program, uniformBlockName);
}

void QOpenGLExtraFunctions_GlGetActiveUniformBlockiv(QOpenGLExtraFunctions* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t pname, int32_t* params) {
	self->glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

void QOpenGLExtraFunctions_GlGetActiveUniformBlockName(QOpenGLExtraFunctions* self, uint32_t program, uint32_t uniformBlockIndex, int32_t bufSize, int32_t* length, GLchar* uniformBlockName) {
	self->glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void QOpenGLExtraFunctions_GlUniformBlockBinding(QOpenGLExtraFunctions* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t uniformBlockBinding) {
	self->glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

void QOpenGLExtraFunctions_GlDrawArraysInstanced(QOpenGLExtraFunctions* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount) {
	self->glDrawArraysInstanced(mode, first, count, instancecount);
}

void QOpenGLExtraFunctions_GlDrawElementsInstanced(QOpenGLExtraFunctions* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount) {
	self->glDrawElementsInstanced(mode, count, typeVal, indices, instancecount);
}

GLsync QOpenGLExtraFunctions_GlFenceSync(QOpenGLExtraFunctions* self, uint32_t condition, uint32_t flags) {
	return self->glFenceSync(condition, flags);
}

unsigned char QOpenGLExtraFunctions_GlIsSync(QOpenGLExtraFunctions* self, GLsync sync) {
	return self->glIsSync(sync);
}

void QOpenGLExtraFunctions_GlDeleteSync(QOpenGLExtraFunctions* self, GLsync sync) {
	self->glDeleteSync(sync);
}

GL QOpenGLExtraFunctions_GlClientWaitSync(QOpenGLExtraFunctions* self, GLsync sync, uint32_t flags, uint64_t timeout) {
	return self->glClientWaitSync(sync, flags, timeout);
}

void QOpenGLExtraFunctions_GlWaitSync(QOpenGLExtraFunctions* self, GLsync sync, uint32_t flags, uint64_t timeout) {
	self->glWaitSync(sync, flags, timeout);
}

void QOpenGLExtraFunctions_GlGetInteger64v(QOpenGLExtraFunctions* self, uint32_t pname, int64_t* data) {
	self->glGetInteger64v(pname, data);
}

void QOpenGLExtraFunctions_GlGetSynciv(QOpenGLExtraFunctions* self, GLsync sync, uint32_t pname, int32_t bufSize, int32_t* length, int32_t* values) {
	self->glGetSynciv(sync, pname, bufSize, length, values);
}

void QOpenGLExtraFunctions_GlGetInteger64iV(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index, int64_t* data) {
	self->glGetInteger64i_v(target, index, data);
}

void QOpenGLExtraFunctions_GlGetBufferParameteri64v(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, int64_t* params) {
	self->glGetBufferParameteri64v(target, pname, params);
}

void QOpenGLExtraFunctions_GlGenSamplers(QOpenGLExtraFunctions* self, int32_t count, uint32_t* samplers) {
	self->glGenSamplers(count, samplers);
}

void QOpenGLExtraFunctions_GlDeleteSamplers(QOpenGLExtraFunctions* self, int32_t count, const uint32_t* samplers) {
	self->glDeleteSamplers(count, samplers);
}

unsigned char QOpenGLExtraFunctions_GlIsSampler(QOpenGLExtraFunctions* self, uint32_t sampler) {
	return self->glIsSampler(sampler);
}

void QOpenGLExtraFunctions_GlBindSampler(QOpenGLExtraFunctions* self, uint32_t unit, uint32_t sampler) {
	self->glBindSampler(unit, sampler);
}

void QOpenGLExtraFunctions_GlSamplerParameteri(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, int32_t param) {
	self->glSamplerParameteri(sampler, pname, param);
}

void QOpenGLExtraFunctions_GlSamplerParameteriv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, const int32_t* param) {
	self->glSamplerParameteriv(sampler, pname, param);
}

void QOpenGLExtraFunctions_GlSamplerParameterf(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, float param) {
	self->glSamplerParameterf(sampler, pname, param);
}

void QOpenGLExtraFunctions_GlSamplerParameterfv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, const float* param) {
	self->glSamplerParameterfv(sampler, pname, param);
}

void QOpenGLExtraFunctions_GlGetSamplerParameteriv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, int32_t* params) {
	self->glGetSamplerParameteriv(sampler, pname, params);
}

void QOpenGLExtraFunctions_GlGetSamplerParameterfv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, float* params) {
	self->glGetSamplerParameterfv(sampler, pname, params);
}

void QOpenGLExtraFunctions_GlVertexAttribDivisor(QOpenGLExtraFunctions* self, uint32_t index, uint32_t divisor) {
	self->glVertexAttribDivisor(index, divisor);
}

void QOpenGLExtraFunctions_GlBindTransformFeedback(QOpenGLExtraFunctions* self, uint32_t target, uint32_t id) {
	self->glBindTransformFeedback(target, id);
}

void QOpenGLExtraFunctions_GlDeleteTransformFeedbacks(QOpenGLExtraFunctions* self, int32_t n, const uint32_t* ids) {
	self->glDeleteTransformFeedbacks(n, ids);
}

void QOpenGLExtraFunctions_GlGenTransformFeedbacks(QOpenGLExtraFunctions* self, int32_t n, uint32_t* ids) {
	self->glGenTransformFeedbacks(n, ids);
}

unsigned char QOpenGLExtraFunctions_GlIsTransformFeedback(QOpenGLExtraFunctions* self, uint32_t id) {
	return self->glIsTransformFeedback(id);
}

void QOpenGLExtraFunctions_GlPauseTransformFeedback(QOpenGLExtraFunctions* self) {
	self->glPauseTransformFeedback();
}

void QOpenGLExtraFunctions_GlResumeTransformFeedback(QOpenGLExtraFunctions* self) {
	self->glResumeTransformFeedback();
}

void QOpenGLExtraFunctions_GlGetProgramBinary(QOpenGLExtraFunctions* self, uint32_t program, int32_t bufSize, int32_t* length, GL* binaryFormat, void* binary) {
	self->glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

void QOpenGLExtraFunctions_GlProgramBinary(QOpenGLExtraFunctions* self, uint32_t program, uint32_t binaryFormat, const void* binary, int32_t length) {
	self->glProgramBinary(program, binaryFormat, binary, length);
}

void QOpenGLExtraFunctions_GlProgramParameteri(QOpenGLExtraFunctions* self, uint32_t program, uint32_t pname, int32_t value) {
	self->glProgramParameteri(program, pname, value);
}

void QOpenGLExtraFunctions_GlInvalidateFramebuffer(QOpenGLExtraFunctions* self, uint32_t target, int32_t numAttachments, const GL* attachments) {
	self->glInvalidateFramebuffer(target, numAttachments, attachments);
}

void QOpenGLExtraFunctions_GlInvalidateSubFramebuffer(QOpenGLExtraFunctions* self, uint32_t target, int32_t numAttachments, const GL* attachments, int32_t x, int32_t y, int32_t width, int32_t height) {
	self->glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

void QOpenGLExtraFunctions_GlTexStorage2D(QOpenGLExtraFunctions* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width, int32_t height) {
	self->glTexStorage2D(target, levels, internalformat, width, height);
}

void QOpenGLExtraFunctions_GlTexStorage3D(QOpenGLExtraFunctions* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width, int32_t height, int32_t depth) {
	self->glTexStorage3D(target, levels, internalformat, width, height, depth);
}

void QOpenGLExtraFunctions_GlGetInternalformativ(QOpenGLExtraFunctions* self, uint32_t target, uint32_t internalformat, uint32_t pname, int32_t bufSize, int32_t* params) {
	self->glGetInternalformativ(target, internalformat, pname, bufSize, params);
}

void QOpenGLExtraFunctions_GlDispatchCompute(QOpenGLExtraFunctions* self, uint32_t num_groups_x, uint32_t num_groups_y, uint32_t num_groups_z) {
	self->glDispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

void QOpenGLExtraFunctions_GlDispatchComputeIndirect(QOpenGLExtraFunctions* self, int64_t indirect) {
	self->glDispatchComputeIndirect(indirect);
}

void QOpenGLExtraFunctions_GlDrawArraysIndirect(QOpenGLExtraFunctions* self, uint32_t mode, const void* indirect) {
	self->glDrawArraysIndirect(mode, indirect);
}

void QOpenGLExtraFunctions_GlDrawElementsIndirect(QOpenGLExtraFunctions* self, uint32_t mode, uint32_t typeVal, const void* indirect) {
	self->glDrawElementsIndirect(mode, typeVal, indirect);
}

void QOpenGLExtraFunctions_GlFramebufferParameteri(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, int32_t param) {
	self->glFramebufferParameteri(target, pname, param);
}

void QOpenGLExtraFunctions_GlGetFramebufferParameteriv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetFramebufferParameteriv(target, pname, params);
}

void QOpenGLExtraFunctions_GlGetProgramInterfaceiv(QOpenGLExtraFunctions* self, uint32_t program, uint32_t programInterface, uint32_t pname, int32_t* params) {
	self->glGetProgramInterfaceiv(program, programInterface, pname, params);
}

uint32_t QOpenGLExtraFunctions_GlGetProgramResourceIndex(QOpenGLExtraFunctions* self, uint32_t program, uint32_t programInterface, const GLchar* name) {
	return self->glGetProgramResourceIndex(program, programInterface, name);
}

void QOpenGLExtraFunctions_GlGetProgramResourceName(QOpenGLExtraFunctions* self, uint32_t program, uint32_t programInterface, uint32_t index, int32_t bufSize, int32_t* length, GLchar* name) {
	self->glGetProgramResourceName(program, programInterface, index, bufSize, length, name);
}

void QOpenGLExtraFunctions_GlGetProgramResourceiv(QOpenGLExtraFunctions* self, uint32_t program, uint32_t programInterface, uint32_t index, int32_t propCount, const GL* props, int32_t bufSize, int32_t* length, int32_t* params) {
	self->glGetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
}

int32_t QOpenGLExtraFunctions_GlGetProgramResourceLocation(QOpenGLExtraFunctions* self, uint32_t program, uint32_t programInterface, const GLchar* name) {
	return self->glGetProgramResourceLocation(program, programInterface, name);
}

void QOpenGLExtraFunctions_GlUseProgramStages(QOpenGLExtraFunctions* self, uint32_t pipeline, uint32_t stages, uint32_t program) {
	self->glUseProgramStages(pipeline, stages, program);
}

void QOpenGLExtraFunctions_GlActiveShaderProgram(QOpenGLExtraFunctions* self, uint32_t pipeline, uint32_t program) {
	self->glActiveShaderProgram(pipeline, program);
}

uint32_t QOpenGLExtraFunctions_GlCreateShaderProgramv(QOpenGLExtraFunctions* self, uint32_t typeVal, int32_t count, const GLchar** strings) {
	return self->glCreateShaderProgramv(typeVal, count, strings);
}

void QOpenGLExtraFunctions_GlBindProgramPipeline(QOpenGLExtraFunctions* self, uint32_t pipeline) {
	self->glBindProgramPipeline(pipeline);
}

void QOpenGLExtraFunctions_GlDeleteProgramPipelines(QOpenGLExtraFunctions* self, int32_t n, const uint32_t* pipelines) {
	self->glDeleteProgramPipelines(n, pipelines);
}

void QOpenGLExtraFunctions_GlGenProgramPipelines(QOpenGLExtraFunctions* self, int32_t n, uint32_t* pipelines) {
	self->glGenProgramPipelines(n, pipelines);
}

unsigned char QOpenGLExtraFunctions_GlIsProgramPipeline(QOpenGLExtraFunctions* self, uint32_t pipeline) {
	return self->glIsProgramPipeline(pipeline);
}

void QOpenGLExtraFunctions_GlGetProgramPipelineiv(QOpenGLExtraFunctions* self, uint32_t pipeline, uint32_t pname, int32_t* params) {
	self->glGetProgramPipelineiv(pipeline, pname, params);
}

void QOpenGLExtraFunctions_GlProgramUniform1i(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t v0) {
	self->glProgramUniform1i(program, location, v0);
}

void QOpenGLExtraFunctions_GlProgramUniform2i(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t v0, int32_t v1) {
	self->glProgramUniform2i(program, location, v0, v1);
}

void QOpenGLExtraFunctions_GlProgramUniform3i(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t v0, int32_t v1, int32_t v2) {
	self->glProgramUniform3i(program, location, v0, v1, v2);
}

void QOpenGLExtraFunctions_GlProgramUniform4i(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3) {
	self->glProgramUniform4i(program, location, v0, v1, v2, v3);
}

void QOpenGLExtraFunctions_GlProgramUniform1ui(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, uint32_t v0) {
	self->glProgramUniform1ui(program, location, v0);
}

void QOpenGLExtraFunctions_GlProgramUniform2ui(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1) {
	self->glProgramUniform2ui(program, location, v0, v1);
}

void QOpenGLExtraFunctions_GlProgramUniform3ui(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2) {
	self->glProgramUniform3ui(program, location, v0, v1, v2);
}

void QOpenGLExtraFunctions_GlProgramUniform4ui(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3) {
	self->glProgramUniform4ui(program, location, v0, v1, v2, v3);
}

void QOpenGLExtraFunctions_GlProgramUniform1f(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, float v0) {
	self->glProgramUniform1f(program, location, v0);
}

void QOpenGLExtraFunctions_GlProgramUniform2f(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, float v0, float v1) {
	self->glProgramUniform2f(program, location, v0, v1);
}

void QOpenGLExtraFunctions_GlProgramUniform3f(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, float v0, float v1, float v2) {
	self->glProgramUniform3f(program, location, v0, v1, v2);
}

void QOpenGLExtraFunctions_GlProgramUniform4f(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, float v0, float v1, float v2, float v3) {
	self->glProgramUniform4f(program, location, v0, v1, v2, v3);
}

void QOpenGLExtraFunctions_GlProgramUniform1iv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const int32_t* value) {
	self->glProgramUniform1iv(program, location, count, value);
}

void QOpenGLExtraFunctions_GlProgramUniform2iv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const int32_t* value) {
	self->glProgramUniform2iv(program, location, count, value);
}

void QOpenGLExtraFunctions_GlProgramUniform3iv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const int32_t* value) {
	self->glProgramUniform3iv(program, location, count, value);
}

void QOpenGLExtraFunctions_GlProgramUniform4iv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const int32_t* value) {
	self->glProgramUniform4iv(program, location, count, value);
}

void QOpenGLExtraFunctions_GlProgramUniform1uiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value) {
	self->glProgramUniform1uiv(program, location, count, value);
}

void QOpenGLExtraFunctions_GlProgramUniform2uiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value) {
	self->glProgramUniform2uiv(program, location, count, value);
}

void QOpenGLExtraFunctions_GlProgramUniform3uiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value) {
	self->glProgramUniform3uiv(program, location, count, value);
}

void QOpenGLExtraFunctions_GlProgramUniform4uiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value) {
	self->glProgramUniform4uiv(program, location, count, value);
}

void QOpenGLExtraFunctions_GlProgramUniform1fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const float* value) {
	self->glProgramUniform1fv(program, location, count, value);
}

void QOpenGLExtraFunctions_GlProgramUniform2fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const float* value) {
	self->glProgramUniform2fv(program, location, count, value);
}

void QOpenGLExtraFunctions_GlProgramUniform3fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const float* value) {
	self->glProgramUniform3fv(program, location, count, value);
}

void QOpenGLExtraFunctions_GlProgramUniform4fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const float* value) {
	self->glProgramUniform4fv(program, location, count, value);
}

void QOpenGLExtraFunctions_GlProgramUniformMatrix2fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix2fv(program, location, count, transpose, value);
}

void QOpenGLExtraFunctions_GlProgramUniformMatrix3fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix3fv(program, location, count, transpose, value);
}

void QOpenGLExtraFunctions_GlProgramUniformMatrix4fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix4fv(program, location, count, transpose, value);
}

void QOpenGLExtraFunctions_GlProgramUniformMatrix2x3fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

void QOpenGLExtraFunctions_GlProgramUniformMatrix3x2fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

void QOpenGLExtraFunctions_GlProgramUniformMatrix2x4fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

void QOpenGLExtraFunctions_GlProgramUniformMatrix4x2fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

void QOpenGLExtraFunctions_GlProgramUniformMatrix3x4fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

void QOpenGLExtraFunctions_GlProgramUniformMatrix4x3fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
	self->glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

void QOpenGLExtraFunctions_GlValidateProgramPipeline(QOpenGLExtraFunctions* self, uint32_t pipeline) {
	self->glValidateProgramPipeline(pipeline);
}

void QOpenGLExtraFunctions_GlGetProgramPipelineInfoLog(QOpenGLExtraFunctions* self, uint32_t pipeline, int32_t bufSize, int32_t* length, GLchar* infoLog) {
	self->glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

void QOpenGLExtraFunctions_GlBindImageTexture(QOpenGLExtraFunctions* self, uint32_t unit, uint32_t texture, int32_t level, unsigned char layered, int32_t layer, uint32_t access, uint32_t format) {
	self->glBindImageTexture(unit, texture, level, layered, layer, access, format);
}

void QOpenGLExtraFunctions_GlGetBooleaniV(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index, unsigned char* data) {
	self->glGetBooleani_v(target, index, data);
}

void QOpenGLExtraFunctions_GlMemoryBarrier(QOpenGLExtraFunctions* self, uint32_t barriers) {
	self->glMemoryBarrier(barriers);
}

void QOpenGLExtraFunctions_GlMemoryBarrierByRegion(QOpenGLExtraFunctions* self, uint32_t barriers) {
	self->glMemoryBarrierByRegion(barriers);
}

void QOpenGLExtraFunctions_GlTexStorage2DMultisample(QOpenGLExtraFunctions* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, unsigned char fixedsamplelocations) {
	self->glTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void QOpenGLExtraFunctions_GlGetMultisamplefv(QOpenGLExtraFunctions* self, uint32_t pname, uint32_t index, float* val) {
	self->glGetMultisamplefv(pname, index, val);
}

void QOpenGLExtraFunctions_GlSampleMaski(QOpenGLExtraFunctions* self, uint32_t maskNumber, uint32_t mask) {
	self->glSampleMaski(maskNumber, mask);
}

void QOpenGLExtraFunctions_GlGetTexLevelParameteriv(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params) {
	self->glGetTexLevelParameteriv(target, level, pname, params);
}

void QOpenGLExtraFunctions_GlGetTexLevelParameterfv(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, uint32_t pname, float* params) {
	self->glGetTexLevelParameterfv(target, level, pname, params);
}

void QOpenGLExtraFunctions_GlBindVertexBuffer(QOpenGLExtraFunctions* self, uint32_t bindingindex, uint32_t buffer, int64_t offset, int32_t stride) {
	self->glBindVertexBuffer(bindingindex, buffer, offset, stride);
}

void QOpenGLExtraFunctions_GlVertexAttribFormat(QOpenGLExtraFunctions* self, uint32_t attribindex, int32_t size, uint32_t typeVal, unsigned char normalized, uint32_t relativeoffset) {
	self->glVertexAttribFormat(attribindex, size, typeVal, normalized, relativeoffset);
}

void QOpenGLExtraFunctions_GlVertexAttribIFormat(QOpenGLExtraFunctions* self, uint32_t attribindex, int32_t size, uint32_t typeVal, uint32_t relativeoffset) {
	self->glVertexAttribIFormat(attribindex, size, typeVal, relativeoffset);
}

void QOpenGLExtraFunctions_GlVertexAttribBinding(QOpenGLExtraFunctions* self, uint32_t attribindex, uint32_t bindingindex) {
	self->glVertexAttribBinding(attribindex, bindingindex);
}

void QOpenGLExtraFunctions_GlVertexBindingDivisor(QOpenGLExtraFunctions* self, uint32_t bindingindex, uint32_t divisor) {
	self->glVertexBindingDivisor(bindingindex, divisor);
}

void QOpenGLExtraFunctions_GlBlendBarrier(QOpenGLExtraFunctions* self) {
	self->glBlendBarrier();
}

void QOpenGLExtraFunctions_GlCopyImageSubData(QOpenGLExtraFunctions* self, uint32_t srcName, uint32_t srcTarget, int32_t srcLevel, int32_t srcX, int32_t srcY, int32_t srcZ, uint32_t dstName, uint32_t dstTarget, int32_t dstLevel, int32_t dstX, int32_t dstY, int32_t dstZ, int32_t srcWidth, int32_t srcHeight, int32_t srcDepth) {
	self->glCopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void QOpenGLExtraFunctions_GlDebugMessageControl(QOpenGLExtraFunctions* self, uint32_t source, uint32_t typeVal, uint32_t severity, int32_t count, const uint32_t* ids, unsigned char enabled) {
	self->glDebugMessageControl(source, typeVal, severity, count, ids, enabled);
}

void QOpenGLExtraFunctions_GlDebugMessageInsert(QOpenGLExtraFunctions* self, uint32_t source, uint32_t typeVal, uint32_t id, uint32_t severity, int32_t length, const GLchar* buf) {
	self->glDebugMessageInsert(source, typeVal, id, severity, length, buf);
}

void QOpenGLExtraFunctions_GlDebugMessageCallback(QOpenGLExtraFunctions* self, GLDEBUGPROC callback, const void* userParam) {
	self->glDebugMessageCallback(callback, userParam);
}

uint32_t QOpenGLExtraFunctions_GlGetDebugMessageLog(QOpenGLExtraFunctions* self, uint32_t count, int32_t bufSize, GL* sources, GL* types, uint32_t* ids, GL* severities, int32_t* lengths, GLchar* messageLog) {
	return self->glGetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

void QOpenGLExtraFunctions_GlPushDebugGroup(QOpenGLExtraFunctions* self, uint32_t source, uint32_t id, int32_t length, const GLchar* message) {
	self->glPushDebugGroup(source, id, length, message);
}

void QOpenGLExtraFunctions_GlPopDebugGroup(QOpenGLExtraFunctions* self) {
	self->glPopDebugGroup();
}

void QOpenGLExtraFunctions_GlObjectLabel(QOpenGLExtraFunctions* self, uint32_t identifier, uint32_t name, int32_t length, const GLchar* label) {
	self->glObjectLabel(identifier, name, length, label);
}

void QOpenGLExtraFunctions_GlGetObjectLabel(QOpenGLExtraFunctions* self, uint32_t identifier, uint32_t name, int32_t bufSize, int32_t* length, GLchar* label) {
	self->glGetObjectLabel(identifier, name, bufSize, length, label);
}

void QOpenGLExtraFunctions_GlObjectPtrLabel(QOpenGLExtraFunctions* self, const void* ptr, int32_t length, const GLchar* label) {
	self->glObjectPtrLabel(ptr, length, label);
}

void QOpenGLExtraFunctions_GlGetObjectPtrLabel(QOpenGLExtraFunctions* self, const void* ptr, int32_t bufSize, int32_t* length, GLchar* label) {
	self->glGetObjectPtrLabel(ptr, bufSize, length, label);
}

void QOpenGLExtraFunctions_GlGetPointerv(QOpenGLExtraFunctions* self, uint32_t pname, void** params) {
	self->glGetPointerv(pname, params);
}

void QOpenGLExtraFunctions_GlEnablei(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index) {
	self->glEnablei(target, index);
}

void QOpenGLExtraFunctions_GlDisablei(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index) {
	self->glDisablei(target, index);
}

void QOpenGLExtraFunctions_GlBlendEquationi(QOpenGLExtraFunctions* self, uint32_t buf, uint32_t mode) {
	self->glBlendEquationi(buf, mode);
}

void QOpenGLExtraFunctions_GlBlendEquationSeparatei(QOpenGLExtraFunctions* self, uint32_t buf, uint32_t modeRGB, uint32_t modeAlpha) {
	self->glBlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

void QOpenGLExtraFunctions_GlBlendFunci(QOpenGLExtraFunctions* self, uint32_t buf, uint32_t src, uint32_t dst) {
	self->glBlendFunci(buf, src, dst);
}

void QOpenGLExtraFunctions_GlBlendFuncSeparatei(QOpenGLExtraFunctions* self, uint32_t buf, uint32_t srcRGB, uint32_t dstRGB, uint32_t srcAlpha, uint32_t dstAlpha) {
	self->glBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void QOpenGLExtraFunctions_GlColorMaski(QOpenGLExtraFunctions* self, uint32_t index, unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
	self->glColorMaski(index, r, g, b, a);
}

unsigned char QOpenGLExtraFunctions_GlIsEnabledi(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index) {
	return self->glIsEnabledi(target, index);
}

void QOpenGLExtraFunctions_GlDrawElementsBaseVertex(QOpenGLExtraFunctions* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t basevertex) {
	self->glDrawElementsBaseVertex(mode, count, typeVal, indices, basevertex);
}

void QOpenGLExtraFunctions_GlDrawRangeElementsBaseVertex(QOpenGLExtraFunctions* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices, int32_t basevertex) {
	self->glDrawRangeElementsBaseVertex(mode, start, end, count, typeVal, indices, basevertex);
}

void QOpenGLExtraFunctions_GlDrawElementsInstancedBaseVertex(QOpenGLExtraFunctions* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount, int32_t basevertex) {
	self->glDrawElementsInstancedBaseVertex(mode, count, typeVal, indices, instancecount, basevertex);
}

void QOpenGLExtraFunctions_GlFramebufferTexture(QOpenGLExtraFunctions* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level) {
	self->glFramebufferTexture(target, attachment, texture, level);
}

void QOpenGLExtraFunctions_GlPrimitiveBoundingBox(QOpenGLExtraFunctions* self, float minX, float minY, float minZ, float minW, float maxX, float maxY, float maxZ, float maxW) {
	self->glPrimitiveBoundingBox(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
}

GL QOpenGLExtraFunctions_GlGetGraphicsResetStatus(QOpenGLExtraFunctions* self) {
	return self->glGetGraphicsResetStatus();
}

void QOpenGLExtraFunctions_GlReadnPixels(QOpenGLExtraFunctions* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, int32_t bufSize, void* data) {
	self->glReadnPixels(x, y, width, height, format, typeVal, bufSize, data);
}

void QOpenGLExtraFunctions_GlGetnUniformfv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t bufSize, float* params) {
	self->glGetnUniformfv(program, location, bufSize, params);
}

void QOpenGLExtraFunctions_GlGetnUniformiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t bufSize, int32_t* params) {
	self->glGetnUniformiv(program, location, bufSize, params);
}

void QOpenGLExtraFunctions_GlGetnUniformuiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t bufSize, uint32_t* params) {
	self->glGetnUniformuiv(program, location, bufSize, params);
}

void QOpenGLExtraFunctions_GlMinSampleShading(QOpenGLExtraFunctions* self, float value) {
	self->glMinSampleShading(value);
}

void QOpenGLExtraFunctions_GlPatchParameteri(QOpenGLExtraFunctions* self, uint32_t pname, int32_t value) {
	self->glPatchParameteri(pname, value);
}

void QOpenGLExtraFunctions_GlTexParameterIiv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, const int32_t* params) {
	self->glTexParameterIiv(target, pname, params);
}

void QOpenGLExtraFunctions_GlTexParameterIuiv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, const uint32_t* params) {
	self->glTexParameterIuiv(target, pname, params);
}

void QOpenGLExtraFunctions_GlGetTexParameterIiv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, int32_t* params) {
	self->glGetTexParameterIiv(target, pname, params);
}

void QOpenGLExtraFunctions_GlGetTexParameterIuiv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, uint32_t* params) {
	self->glGetTexParameterIuiv(target, pname, params);
}

void QOpenGLExtraFunctions_GlSamplerParameterIiv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, const int32_t* param) {
	self->glSamplerParameterIiv(sampler, pname, param);
}

void QOpenGLExtraFunctions_GlSamplerParameterIuiv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, const uint32_t* param) {
	self->glSamplerParameterIuiv(sampler, pname, param);
}

void QOpenGLExtraFunctions_GlGetSamplerParameterIiv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, int32_t* params) {
	self->glGetSamplerParameterIiv(sampler, pname, params);
}

void QOpenGLExtraFunctions_GlGetSamplerParameterIuiv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, uint32_t* params) {
	self->glGetSamplerParameterIuiv(sampler, pname, params);
}

void QOpenGLExtraFunctions_GlTexBuffer(QOpenGLExtraFunctions* self, uint32_t target, uint32_t internalformat, uint32_t buffer) {
	self->glTexBuffer(target, internalformat, buffer);
}

void QOpenGLExtraFunctions_GlTexBufferRange(QOpenGLExtraFunctions* self, uint32_t target, uint32_t internalformat, uint32_t buffer, int64_t offset, int64_t size) {
	self->glTexBufferRange(target, internalformat, buffer, offset, size);
}

void QOpenGLExtraFunctions_GlTexStorage3DMultisample(QOpenGLExtraFunctions* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, unsigned char fixedsamplelocations) {
	self->glTexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void QOpenGLExtraFunctions_Delete(QOpenGLExtraFunctions* self) {
    delete self;
}

