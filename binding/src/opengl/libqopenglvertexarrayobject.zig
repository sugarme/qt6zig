const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopenglvertexarrayobject.html
pub const qopenglvertexarrayobject = struct {

    /// New constructs a new QOpenGLVertexArrayObject object.
    pub fn New() QtC.QOpenGLVertexArrayObject {
        return qtc.QOpenGLVertexArrayObject_new();
    }


    /// New2 constructs a new QOpenGLVertexArrayObject object.
    pub fn New2(parent: ?*anyopaque) QtC.QOpenGLVertexArrayObject {
        return qtc.QOpenGLVertexArrayObject_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLVertexArrayObject_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglvertexarrayobject.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Create(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLVertexArrayObject_Create(@ptrCast(self));
    }

    pub fn Destroy(self: ?*anyopaque, ) void {
        qtc.QOpenGLVertexArrayObject_Destroy(@ptrCast(self));
    }

    pub fn IsCreated(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLVertexArrayObject_IsCreated(@ptrCast(self));
    }

    pub fn ObjectId(self: ?*anyopaque, ) u32 {
        return qtc.QOpenGLVertexArrayObject_ObjectId(@ptrCast(self));
    }

    pub fn Bind(self: ?*anyopaque, ) void {
        qtc.QOpenGLVertexArrayObject_Bind(@ptrCast(self));
    }

    pub fn Release(self: ?*anyopaque, ) void {
        qtc.QOpenGLVertexArrayObject_Release(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLVertexArrayObject_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglvertexarrayobject.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLVertexArrayObject_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglvertexarrayobject.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLVertexArrayObject_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglvertexarrayobject-binder.html
pub const qopenglvertexarrayobject__binder = struct {

    /// New constructs a new QOpenGLVertexArrayObject::Binder object.
    pub fn New(v: ?*anyopaque) QtC.QOpenGLVertexArrayObject__Binder {
        return qtc.QOpenGLVertexArrayObject__Binder_new(@ptrCast(v));
    }


    pub fn Release(self: ?*anyopaque, ) void {
        qtc.QOpenGLVertexArrayObject__Binder_Release(@ptrCast(self));
    }

    pub fn Rebind(self: ?*anyopaque, ) void {
        qtc.QOpenGLVertexArrayObject__Binder_Rebind(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLVertexArrayObject__Binder_Delete(@ptrCast(self));
    }
};
