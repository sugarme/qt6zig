const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopenglcontextgroup.html
pub const qopenglcontextgroup = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLContextGroup_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglcontextgroup.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Shares(self: ?*anyopaque, ) []const u8 {
        return qtc.QOpenGLContextGroup_Shares(@ptrCast(self));
    }

    pub fn CurrentContextGroup() QtC.QOpenGLContextGroup {
        return qtc.QOpenGLContextGroup_CurrentContextGroup();
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLContextGroup_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglcontextgroup.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLContextGroup_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglcontextgroup.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLContextGroup_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglcontext.html
pub const qopenglcontext = struct {

    /// New constructs a new QOpenGLContext object.
    pub fn New() QtC.QOpenGLContext {
        return qtc.QOpenGLContext_new();
    }


    /// New2 constructs a new QOpenGLContext object.
    pub fn New2(parent: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLContext_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLContext_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglcontext.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QOpenGLContext_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    pub fn SetShareContext(self: ?*anyopaque, shareContext: ?*anyopaque) void {
        qtc.QOpenGLContext_SetShareContext(@ptrCast(self), @ptrCast(shareContext));
    }

    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QOpenGLContext_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    pub fn Create(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLContext_Create(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLContext_IsValid(@ptrCast(self));
    }

    pub fn Format(self: ?*anyopaque, ) QtC.QSurfaceFormat {
        return qtc.QOpenGLContext_Format(@ptrCast(self));
    }

    pub fn ShareContext(self: ?*anyopaque, ) QtC.QOpenGLContext {
        return qtc.QOpenGLContext_ShareContext(@ptrCast(self));
    }

    pub fn ShareGroup(self: ?*anyopaque, ) QtC.QOpenGLContextGroup {
        return qtc.QOpenGLContext_ShareGroup(@ptrCast(self));
    }

    pub fn Screen(self: ?*anyopaque, ) QtC.QScreen {
        return qtc.QOpenGLContext_Screen(@ptrCast(self));
    }

    pub fn DefaultFramebufferObject(self: ?*anyopaque, ) u32 {
        return qtc.QOpenGLContext_DefaultFramebufferObject(@ptrCast(self));
    }

    pub fn MakeCurrent(self: ?*anyopaque, surface: ?*anyopaque) bool {
        return qtc.QOpenGLContext_MakeCurrent(@ptrCast(self), @ptrCast(surface));
    }

    pub fn DoneCurrent(self: ?*anyopaque, ) void {
        qtc.QOpenGLContext_DoneCurrent(@ptrCast(self));
    }

    pub fn SwapBuffers(self: ?*anyopaque, surface: ?*anyopaque) void {
        qtc.QOpenGLContext_SwapBuffers(@ptrCast(self), @ptrCast(surface));
    }

    pub fn Surface(self: ?*anyopaque, ) QtC.QSurface {
        return qtc.QOpenGLContext_Surface(@ptrCast(self));
    }

    pub fn CurrentContext() QtC.QOpenGLContext {
        return qtc.QOpenGLContext_CurrentContext();
    }

    pub fn AreSharing(first: ?*anyopaque, second: ?*anyopaque) bool {
        return qtc.QOpenGLContext_AreSharing(@ptrCast(first), @ptrCast(second));
    }

    pub fn Functions(self: ?*anyopaque, ) QtC.QOpenGLFunctions {
        return qtc.QOpenGLContext_Functions(@ptrCast(self));
    }

    pub fn ExtraFunctions(self: ?*anyopaque, ) QtC.QOpenGLExtraFunctions {
        return qtc.QOpenGLContext_ExtraFunctions(@ptrCast(self));
    }

    pub fn Extensions(self: ?*anyopaque, ) QSet<QByteArray> {
        return qtc.QOpenGLContext_Extensions(@ptrCast(self));
    }

    pub fn HasExtension(self: ?*anyopaque, extension: []u8) bool {
        const extension_str = qtc.libqt_string{
    .len = extension.len,
    .data = extension.ptr,
};
return qtc.QOpenGLContext_HasExtension(@ptrCast(self), extension_str);
    }

    pub fn OpenGLModuleType() i32 {
        return qtc.QOpenGLContext_OpenGLModuleType();
    }

    pub fn IsOpenGLES(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLContext_IsOpenGLES(@ptrCast(self));
    }

    pub fn SupportsThreadedOpenGL() bool {
        return qtc.QOpenGLContext_SupportsThreadedOpenGL();
    }

    pub fn GlobalShareContext() QtC.QOpenGLContext {
        return qtc.QOpenGLContext_GlobalShareContext();
    }

    pub fn AboutToBeDestroyed(self: ?*anyopaque, ) void {
        qtc.QOpenGLContext_AboutToBeDestroyed(@ptrCast(self));
    }

    pub fn OnAboutToBeDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLContext_Connect_AboutToBeDestroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLContext_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglcontext.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLContext_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglcontext.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLContext_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/openglcontext.html#types
pub const enums = struct {
    pub const OpenGLModuleType = enum {
        pub const LibGL: i32 = 0;
        pub const LibGLES: i32 = 1;
    };

};
