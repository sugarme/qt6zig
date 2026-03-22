const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopenglshader.html
pub const qopenglshader = struct {

    /// New constructs a new QOpenGLShader object.
    pub fn New(typeVal: i32) QtC.QOpenGLShader {
        return qtc.QOpenGLShader_new(@intCast(typeVal));
    }


    /// New2 constructs a new QOpenGLShader object.
    pub fn New2(typeVal: i32, parent: ?*anyopaque) QtC.QOpenGLShader {
        return qtc.QOpenGLShader_new2(@intCast(typeVal), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLShader_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshader.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ShaderType(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLShader_ShaderType(@ptrCast(self));
    }

    pub fn CompileSourceCode(self: ?*anyopaque, source: []const u8) bool {
        return qtc.QOpenGLShader_CompileSourceCode(@ptrCast(self), @ptrCast(source));
    }

    pub fn CompileSourceCode2(self: ?*anyopaque, source: []u8) bool {
        const source_str = qtc.libqt_string{
    .len = source.len,
    .data = source.ptr,
};
return qtc.QOpenGLShader_CompileSourceCode2(@ptrCast(self), source_str);
    }

    pub fn CompileSourceCode3(self: ?*anyopaque, source: []const u8) bool {
        const source_str = qtc.libqt_string{
    .len = source.len,
    .data = source.ptr,
};
return qtc.QOpenGLShader_CompileSourceCode3(@ptrCast(self), source_str);
    }

    pub fn CompileSourceFile(self: ?*anyopaque, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QOpenGLShader_CompileSourceFile(@ptrCast(self), fileName_str);
    }

    pub fn SourceCode(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QOpenGLShader_SourceCode(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qopenglshader.SourceCode: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn IsCompiled(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLShader_IsCompiled(@ptrCast(self));
    }

    pub fn Log(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLShader_Log(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshader.Log: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ShaderId(self: ?*anyopaque, ) u32 {
        return qtc.QOpenGLShader_ShaderId(@ptrCast(self));
    }

    pub fn HasOpenGLShaders(typeVal: i32) bool {
        return qtc.QOpenGLShader_HasOpenGLShaders(@intCast(typeVal));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLShader_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshader.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLShader_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshader.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn HasOpenGLShaders2(typeVal: i32, context: ?*anyopaque) bool {
        return qtc.QOpenGLShader_HasOpenGLShaders2(@intCast(typeVal), @ptrCast(context));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLShader_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglshaderprogram.html
pub const qopenglshaderprogram = struct {

    /// New constructs a new QOpenGLShaderProgram object.
    pub fn New() QtC.QOpenGLShaderProgram {
        return qtc.QOpenGLShaderProgram_new();
    }


    /// New2 constructs a new QOpenGLShaderProgram object.
    pub fn New2(parent: ?*anyopaque) QtC.QOpenGLShaderProgram {
        return qtc.QOpenGLShaderProgram_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLShaderProgram_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshaderprogram.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddShader(self: ?*anyopaque, shader: ?*anyopaque) bool {
        return qtc.QOpenGLShaderProgram_AddShader(@ptrCast(self), @ptrCast(shader));
    }

    pub fn RemoveShader(self: ?*anyopaque, shader: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_RemoveShader(@ptrCast(self), @ptrCast(shader));
    }

    pub fn Shaders(self: ?*anyopaque, ) []const u8 {
        return qtc.QOpenGLShaderProgram_Shaders(@ptrCast(self));
    }

    pub fn AddShaderFromSourceCode(self: ?*anyopaque, typeVal: i32, source: []const u8) bool {
        return qtc.QOpenGLShaderProgram_AddShaderFromSourceCode(@ptrCast(self), @intCast(typeVal), @ptrCast(source));
    }

    pub fn AddShaderFromSourceCode2(self: ?*anyopaque, typeVal: i32, source: []u8) bool {
        const source_str = qtc.libqt_string{
    .len = source.len,
    .data = source.ptr,
};
return qtc.QOpenGLShaderProgram_AddShaderFromSourceCode2(@ptrCast(self), @intCast(typeVal), source_str);
    }

    pub fn AddShaderFromSourceCode3(self: ?*anyopaque, typeVal: i32, source: []const u8) bool {
        const source_str = qtc.libqt_string{
    .len = source.len,
    .data = source.ptr,
};
return qtc.QOpenGLShaderProgram_AddShaderFromSourceCode3(@ptrCast(self), @intCast(typeVal), source_str);
    }

    pub fn AddShaderFromSourceFile(self: ?*anyopaque, typeVal: i32, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QOpenGLShaderProgram_AddShaderFromSourceFile(@ptrCast(self), @intCast(typeVal), fileName_str);
    }

    pub fn AddCacheableShaderFromSourceCode(self: ?*anyopaque, typeVal: i32, source: []const u8) bool {
        return qtc.QOpenGLShaderProgram_AddCacheableShaderFromSourceCode(@ptrCast(self), @intCast(typeVal), @ptrCast(source));
    }

    pub fn AddCacheableShaderFromSourceCode2(self: ?*anyopaque, typeVal: i32, source: []u8) bool {
        const source_str = qtc.libqt_string{
    .len = source.len,
    .data = source.ptr,
};
return qtc.QOpenGLShaderProgram_AddCacheableShaderFromSourceCode2(@ptrCast(self), @intCast(typeVal), source_str);
    }

    pub fn AddCacheableShaderFromSourceCode3(self: ?*anyopaque, typeVal: i32, source: []const u8) bool {
        const source_str = qtc.libqt_string{
    .len = source.len,
    .data = source.ptr,
};
return qtc.QOpenGLShaderProgram_AddCacheableShaderFromSourceCode3(@ptrCast(self), @intCast(typeVal), source_str);
    }

    pub fn AddCacheableShaderFromSourceFile(self: ?*anyopaque, typeVal: i32, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QOpenGLShaderProgram_AddCacheableShaderFromSourceFile(@ptrCast(self), @intCast(typeVal), fileName_str);
    }

    pub fn RemoveAllShaders(self: ?*anyopaque, ) void {
        qtc.QOpenGLShaderProgram_RemoveAllShaders(@ptrCast(self));
    }

    pub fn Link(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLShaderProgram_Link(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnLink(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QOpenGLShaderProgram_OnLink(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLink(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLShaderProgram_QBaseLink(@ptrCast(self));
    }

    pub fn IsLinked(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLShaderProgram_IsLinked(@ptrCast(self));
    }

    pub fn Log(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLShaderProgram_Log(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshaderprogram.Log: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Bind(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLShaderProgram_Bind(@ptrCast(self));
    }

    pub fn Release(self: ?*anyopaque, ) void {
        qtc.QOpenGLShaderProgram_Release(@ptrCast(self));
    }

    pub fn Create(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLShaderProgram_Create(@ptrCast(self));
    }

    pub fn ProgramId(self: ?*anyopaque, ) u32 {
        return qtc.QOpenGLShaderProgram_ProgramId(@ptrCast(self));
    }

    pub fn MaxGeometryOutputVertices(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLShaderProgram_MaxGeometryOutputVertices(@ptrCast(self));
    }

    pub fn SetPatchVertexCount(self: ?*anyopaque, count: i32) void {
        qtc.QOpenGLShaderProgram_SetPatchVertexCount(@ptrCast(self), count);
    }

    pub fn PatchVertexCount(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLShaderProgram_PatchVertexCount(@ptrCast(self));
    }

    pub fn SetDefaultOuterTessellationLevels(self: ?*anyopaque, levels: []const u8) void {
        qtc.QOpenGLShaderProgram_SetDefaultOuterTessellationLevels(@ptrCast(self), @ptrCast(levels));
    }

    pub fn DefaultOuterTessellationLevels(self: ?*anyopaque, ) []const u8 {
        return qtc.QOpenGLShaderProgram_DefaultOuterTessellationLevels(@ptrCast(self));
    }

    pub fn SetDefaultInnerTessellationLevels(self: ?*anyopaque, levels: []const u8) void {
        qtc.QOpenGLShaderProgram_SetDefaultInnerTessellationLevels(@ptrCast(self), @ptrCast(levels));
    }

    pub fn DefaultInnerTessellationLevels(self: ?*anyopaque, ) []const u8 {
        return qtc.QOpenGLShaderProgram_DefaultInnerTessellationLevels(@ptrCast(self));
    }

    pub fn BindAttributeLocation(self: ?*anyopaque, name: []const u8, location: i32) void {
        qtc.QOpenGLShaderProgram_BindAttributeLocation(@ptrCast(self), @ptrCast(name), location);
    }

    pub fn BindAttributeLocation2(self: ?*anyopaque, name: []u8, location: i32) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QOpenGLShaderProgram_BindAttributeLocation2(@ptrCast(self), name_str, location);
    }

    pub fn BindAttributeLocation3(self: ?*anyopaque, name: []const u8, location: i32) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QOpenGLShaderProgram_BindAttributeLocation3(@ptrCast(self), name_str, location);
    }

    pub fn AttributeLocation(self: ?*anyopaque, name: []const u8) i32 {
        return qtc.QOpenGLShaderProgram_AttributeLocation(@ptrCast(self), @ptrCast(name));
    }

    pub fn AttributeLocation2(self: ?*anyopaque, name: []u8) i32 {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QOpenGLShaderProgram_AttributeLocation2(@ptrCast(self), name_str);
    }

    pub fn AttributeLocation3(self: ?*anyopaque, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QOpenGLShaderProgram_AttributeLocation3(@ptrCast(self), name_str);
    }

    pub fn SetAttributeValue(self: ?*anyopaque, location: i32, value: f32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue(@ptrCast(self), location, value);
    }

    pub fn SetAttributeValue2(self: ?*anyopaque, location: i32, x: f32, y: f32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue2(@ptrCast(self), location, x, y);
    }

    pub fn SetAttributeValue3(self: ?*anyopaque, location: i32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue3(@ptrCast(self), location, x, y, z);
    }

    pub fn SetAttributeValue4(self: ?*anyopaque, location: i32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue4(@ptrCast(self), location, x, y, z, w);
    }

    pub fn SetAttributeValue5(self: ?*anyopaque, location: i32, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue5(@ptrCast(self), location, @ptrCast(value));
    }

    pub fn SetAttributeValue6(self: ?*anyopaque, location: i32, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue6(@ptrCast(self), location, @ptrCast(value));
    }

    pub fn SetAttributeValue7(self: ?*anyopaque, location: i32, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue7(@ptrCast(self), location, @ptrCast(value));
    }

    pub fn SetAttributeValue8(self: ?*anyopaque, location: i32, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue8(@ptrCast(self), location, @ptrCast(value));
    }

    pub fn SetAttributeValue9(self: ?*anyopaque, location: i32, values: *const f32, columns: i32, rows: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue9(@ptrCast(self), location, @ptrCast(values), columns, rows);
    }

    pub fn SetAttributeValue10(self: ?*anyopaque, name: []const u8, value: f32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue10(@ptrCast(self), @ptrCast(name), value);
    }

    pub fn SetAttributeValue11(self: ?*anyopaque, name: []const u8, x: f32, y: f32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue11(@ptrCast(self), @ptrCast(name), x, y);
    }

    pub fn SetAttributeValue12(self: ?*anyopaque, name: []const u8, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue12(@ptrCast(self), @ptrCast(name), x, y, z);
    }

    pub fn SetAttributeValue13(self: ?*anyopaque, name: []const u8, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue13(@ptrCast(self), @ptrCast(name), x, y, z, w);
    }

    pub fn SetAttributeValue14(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue14(@ptrCast(self), @ptrCast(name), @ptrCast(value));
    }

    pub fn SetAttributeValue15(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue15(@ptrCast(self), @ptrCast(name), @ptrCast(value));
    }

    pub fn SetAttributeValue16(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue16(@ptrCast(self), @ptrCast(name), @ptrCast(value));
    }

    pub fn SetAttributeValue17(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue17(@ptrCast(self), @ptrCast(name), @ptrCast(value));
    }

    pub fn SetAttributeValue18(self: ?*anyopaque, name: []const u8, values: *const f32, columns: i32, rows: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue18(@ptrCast(self), @ptrCast(name), @ptrCast(values), columns, rows);
    }

    pub fn SetAttributeArray(self: ?*anyopaque, location: i32, values: *const f32, tupleSize: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray(@ptrCast(self), location, @ptrCast(values), tupleSize);
    }

    pub fn SetAttributeArray2(self: ?*anyopaque, location: i32, values: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray2(@ptrCast(self), location, @ptrCast(values));
    }

    pub fn SetAttributeArray3(self: ?*anyopaque, location: i32, values: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray3(@ptrCast(self), location, @ptrCast(values));
    }

    pub fn SetAttributeArray4(self: ?*anyopaque, location: i32, values: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray4(@ptrCast(self), location, @ptrCast(values));
    }

    pub fn SetAttributeArray5(self: ?*anyopaque, location: i32, typeVal: u32, values: ?*anyopaque, tupleSize: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray5(@ptrCast(self), location, typeVal, @ptrCast(values), tupleSize);
    }

    pub fn SetAttributeArray6(self: ?*anyopaque, name: []const u8, values: *const f32, tupleSize: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray6(@ptrCast(self), @ptrCast(name), @ptrCast(values), tupleSize);
    }

    pub fn SetAttributeArray7(self: ?*anyopaque, name: []const u8, values: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray7(@ptrCast(self), @ptrCast(name), @ptrCast(values));
    }

    pub fn SetAttributeArray8(self: ?*anyopaque, name: []const u8, values: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray8(@ptrCast(self), @ptrCast(name), @ptrCast(values));
    }

    pub fn SetAttributeArray9(self: ?*anyopaque, name: []const u8, values: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray9(@ptrCast(self), @ptrCast(name), @ptrCast(values));
    }

    pub fn SetAttributeArray10(self: ?*anyopaque, name: []const u8, typeVal: u32, values: ?*anyopaque, tupleSize: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray10(@ptrCast(self), @ptrCast(name), typeVal, @ptrCast(values), tupleSize);
    }

    pub fn SetAttributeBuffer(self: ?*anyopaque, location: i32, typeVal: u32, offset: i32, tupleSize: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeBuffer(@ptrCast(self), location, typeVal, offset, tupleSize);
    }

    pub fn SetAttributeBuffer2(self: ?*anyopaque, name: []const u8, typeVal: u32, offset: i32, tupleSize: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeBuffer2(@ptrCast(self), @ptrCast(name), typeVal, offset, tupleSize);
    }

    pub fn EnableAttributeArray(self: ?*anyopaque, location: i32) void {
        qtc.QOpenGLShaderProgram_EnableAttributeArray(@ptrCast(self), location);
    }

    pub fn EnableAttributeArray2(self: ?*anyopaque, name: []const u8) void {
        qtc.QOpenGLShaderProgram_EnableAttributeArray2(@ptrCast(self), @ptrCast(name));
    }

    pub fn DisableAttributeArray(self: ?*anyopaque, location: i32) void {
        qtc.QOpenGLShaderProgram_DisableAttributeArray(@ptrCast(self), location);
    }

    pub fn DisableAttributeArray2(self: ?*anyopaque, name: []const u8) void {
        qtc.QOpenGLShaderProgram_DisableAttributeArray2(@ptrCast(self), @ptrCast(name));
    }

    pub fn UniformLocation(self: ?*anyopaque, name: []const u8) i32 {
        return qtc.QOpenGLShaderProgram_UniformLocation(@ptrCast(self), @ptrCast(name));
    }

    pub fn UniformLocation2(self: ?*anyopaque, name: []u8) i32 {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QOpenGLShaderProgram_UniformLocation2(@ptrCast(self), name_str);
    }

    pub fn UniformLocation3(self: ?*anyopaque, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QOpenGLShaderProgram_UniformLocation3(@ptrCast(self), name_str);
    }

    pub fn SetUniformValue(self: ?*anyopaque, location: i32, value: f32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue(@ptrCast(self), location, value);
    }

    pub fn SetUniformValue2(self: ?*anyopaque, location: i32, value: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue2(@ptrCast(self), location, value);
    }

    pub fn SetUniformValue3(self: ?*anyopaque, location: i32, value: u32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue3(@ptrCast(self), location, value);
    }

    pub fn SetUniformValue4(self: ?*anyopaque, location: i32, x: f32, y: f32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue4(@ptrCast(self), location, x, y);
    }

    pub fn SetUniformValue5(self: ?*anyopaque, location: i32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue5(@ptrCast(self), location, x, y, z);
    }

    pub fn SetUniformValue6(self: ?*anyopaque, location: i32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue6(@ptrCast(self), location, x, y, z, w);
    }

    pub fn SetUniformValue7(self: ?*anyopaque, location: i32, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue7(@ptrCast(self), location, @ptrCast(value));
    }

    pub fn SetUniformValue8(self: ?*anyopaque, location: i32, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue8(@ptrCast(self), location, @ptrCast(value));
    }

    pub fn SetUniformValue9(self: ?*anyopaque, location: i32, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue9(@ptrCast(self), location, @ptrCast(value));
    }

    pub fn SetUniformValue10(self: ?*anyopaque, location: i32, color: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue10(@ptrCast(self), location, @ptrCast(color));
    }

    pub fn SetUniformValue11(self: ?*anyopaque, location: i32, point: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue11(@ptrCast(self), location, @ptrCast(point));
    }

    pub fn SetUniformValue12(self: ?*anyopaque, location: i32, point: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue12(@ptrCast(self), location, @ptrCast(point));
    }

    pub fn SetUniformValue13(self: ?*anyopaque, location: i32, size: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue13(@ptrCast(self), location, @ptrCast(size));
    }

    pub fn SetUniformValue14(self: ?*anyopaque, location: i32, size: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue14(@ptrCast(self), location, @ptrCast(size));
    }

    pub fn SetUniformValue23(self: ?*anyopaque, location: i32, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue23(@ptrCast(self), location, @ptrCast(value));
    }

    pub fn SetUniformValue24(self: ?*anyopaque, location: i32, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue24(@ptrCast(self), location, @ptrCast(value));
    }

    pub fn SetUniformValue25(self: ?*anyopaque, name: []const u8, value: f32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue25(@ptrCast(self), @ptrCast(name), value);
    }

    pub fn SetUniformValue26(self: ?*anyopaque, name: []const u8, value: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue26(@ptrCast(self), @ptrCast(name), value);
    }

    pub fn SetUniformValue27(self: ?*anyopaque, name: []const u8, value: u32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue27(@ptrCast(self), @ptrCast(name), value);
    }

    pub fn SetUniformValue28(self: ?*anyopaque, name: []const u8, x: f32, y: f32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue28(@ptrCast(self), @ptrCast(name), x, y);
    }

    pub fn SetUniformValue29(self: ?*anyopaque, name: []const u8, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue29(@ptrCast(self), @ptrCast(name), x, y, z);
    }

    pub fn SetUniformValue30(self: ?*anyopaque, name: []const u8, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue30(@ptrCast(self), @ptrCast(name), x, y, z, w);
    }

    pub fn SetUniformValue31(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue31(@ptrCast(self), @ptrCast(name), @ptrCast(value));
    }

    pub fn SetUniformValue32(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue32(@ptrCast(self), @ptrCast(name), @ptrCast(value));
    }

    pub fn SetUniformValue33(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue33(@ptrCast(self), @ptrCast(name), @ptrCast(value));
    }

    pub fn SetUniformValue34(self: ?*anyopaque, name: []const u8, color: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue34(@ptrCast(self), @ptrCast(name), @ptrCast(color));
    }

    pub fn SetUniformValue35(self: ?*anyopaque, name: []const u8, point: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue35(@ptrCast(self), @ptrCast(name), @ptrCast(point));
    }

    pub fn SetUniformValue36(self: ?*anyopaque, name: []const u8, point: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue36(@ptrCast(self), @ptrCast(name), @ptrCast(point));
    }

    pub fn SetUniformValue37(self: ?*anyopaque, name: []const u8, size: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue37(@ptrCast(self), @ptrCast(name), @ptrCast(size));
    }

    pub fn SetUniformValue38(self: ?*anyopaque, name: []const u8, size: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue38(@ptrCast(self), @ptrCast(name), @ptrCast(size));
    }

    pub fn SetUniformValue47(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue47(@ptrCast(self), @ptrCast(name), @ptrCast(value));
    }

    pub fn SetUniformValue48(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue48(@ptrCast(self), @ptrCast(name), @ptrCast(value));
    }

    pub fn SetUniformValueArray(self: ?*anyopaque, location: i32, values: *const f32, count: i32, tupleSize: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray(@ptrCast(self), location, @ptrCast(values), count, tupleSize);
    }

    pub fn SetUniformValueArray2(self: ?*anyopaque, location: i32, values: *const i32, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray2(@ptrCast(self), location, @ptrCast(values), count);
    }

    pub fn SetUniformValueArray3(self: ?*anyopaque, location: i32, values: *const u32, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray3(@ptrCast(self), location, @ptrCast(values), count);
    }

    pub fn SetUniformValueArray4(self: ?*anyopaque, location: i32, values: ?*anyopaque, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray4(@ptrCast(self), location, @ptrCast(values), count);
    }

    pub fn SetUniformValueArray5(self: ?*anyopaque, location: i32, values: ?*anyopaque, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray5(@ptrCast(self), location, @ptrCast(values), count);
    }

    pub fn SetUniformValueArray6(self: ?*anyopaque, location: i32, values: ?*anyopaque, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray6(@ptrCast(self), location, @ptrCast(values), count);
    }

    pub fn SetUniformValueArray15(self: ?*anyopaque, location: i32, values: ?*anyopaque, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray15(@ptrCast(self), location, @ptrCast(values), count);
    }

    pub fn SetUniformValueArray16(self: ?*anyopaque, name: []const u8, values: *const f32, count: i32, tupleSize: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray16(@ptrCast(self), @ptrCast(name), @ptrCast(values), count, tupleSize);
    }

    pub fn SetUniformValueArray17(self: ?*anyopaque, name: []const u8, values: *const i32, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray17(@ptrCast(self), @ptrCast(name), @ptrCast(values), count);
    }

    pub fn SetUniformValueArray18(self: ?*anyopaque, name: []const u8, values: *const u32, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray18(@ptrCast(self), @ptrCast(name), @ptrCast(values), count);
    }

    pub fn SetUniformValueArray19(self: ?*anyopaque, name: []const u8, values: ?*anyopaque, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray19(@ptrCast(self), @ptrCast(name), @ptrCast(values), count);
    }

    pub fn SetUniformValueArray20(self: ?*anyopaque, name: []const u8, values: ?*anyopaque, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray20(@ptrCast(self), @ptrCast(name), @ptrCast(values), count);
    }

    pub fn SetUniformValueArray21(self: ?*anyopaque, name: []const u8, values: ?*anyopaque, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray21(@ptrCast(self), @ptrCast(name), @ptrCast(values), count);
    }

    pub fn SetUniformValueArray30(self: ?*anyopaque, name: []const u8, values: ?*anyopaque, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray30(@ptrCast(self), @ptrCast(name), @ptrCast(values), count);
    }

    pub fn HasOpenGLShaderPrograms() bool {
        return qtc.QOpenGLShaderProgram_HasOpenGLShaderPrograms();
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLShaderProgram_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshaderprogram.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLShaderProgram_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshaderprogram.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetAttributeArray42(self: ?*anyopaque, location: i32, values: *const f32, tupleSize: i32, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray42(@ptrCast(self), location, @ptrCast(values), tupleSize, stride);
    }

    pub fn SetAttributeArray32(self: ?*anyopaque, location: i32, values: ?*anyopaque, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray32(@ptrCast(self), location, @ptrCast(values), stride);
    }

    pub fn SetAttributeArray33(self: ?*anyopaque, location: i32, values: ?*anyopaque, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray33(@ptrCast(self), location, @ptrCast(values), stride);
    }

    pub fn SetAttributeArray34(self: ?*anyopaque, location: i32, values: ?*anyopaque, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray34(@ptrCast(self), location, @ptrCast(values), stride);
    }

    pub fn SetAttributeArray52(self: ?*anyopaque, location: i32, typeVal: u32, values: ?*anyopaque, tupleSize: i32, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray52(@ptrCast(self), location, typeVal, @ptrCast(values), tupleSize, stride);
    }

    pub fn SetAttributeArray43(self: ?*anyopaque, name: []const u8, values: *const f32, tupleSize: i32, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray43(@ptrCast(self), @ptrCast(name), @ptrCast(values), tupleSize, stride);
    }

    pub fn SetAttributeArray35(self: ?*anyopaque, name: []const u8, values: ?*anyopaque, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray35(@ptrCast(self), @ptrCast(name), @ptrCast(values), stride);
    }

    pub fn SetAttributeArray36(self: ?*anyopaque, name: []const u8, values: ?*anyopaque, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray36(@ptrCast(self), @ptrCast(name), @ptrCast(values), stride);
    }

    pub fn SetAttributeArray37(self: ?*anyopaque, name: []const u8, values: ?*anyopaque, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray37(@ptrCast(self), @ptrCast(name), @ptrCast(values), stride);
    }

    pub fn SetAttributeArray53(self: ?*anyopaque, name: []const u8, typeVal: u32, values: ?*anyopaque, tupleSize: i32, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray53(@ptrCast(self), @ptrCast(name), typeVal, @ptrCast(values), tupleSize, stride);
    }

    pub fn SetAttributeBuffer5(self: ?*anyopaque, location: i32, typeVal: u32, offset: i32, tupleSize: i32, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeBuffer5(@ptrCast(self), location, typeVal, offset, tupleSize, stride);
    }

    pub fn SetAttributeBuffer52(self: ?*anyopaque, name: []const u8, typeVal: u32, offset: i32, tupleSize: i32, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeBuffer52(@ptrCast(self), @ptrCast(name), typeVal, offset, tupleSize, stride);
    }

    pub fn HasOpenGLShaderPrograms1(context: ?*anyopaque) bool {
        return qtc.QOpenGLShaderProgram_HasOpenGLShaderPrograms1(@ptrCast(context));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/openglshaderprogram.html#types
pub const enums = struct {
    pub const ShaderTypeBit = enum {
        pub const Vertex: i32 = 1;
        pub const Fragment: i32 = 2;
        pub const Geometry: i32 = 4;
        pub const TessellationControl: i32 = 8;
        pub const TessellationEvaluation: i32 = 16;
        pub const Compute: i32 = 32;
    };

};
