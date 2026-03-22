const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qoffscreensurface.html
pub const qoffscreensurface = struct {

    /// New constructs a new QOffscreenSurface object.
    pub fn New() QtC.QOffscreenSurface {
        return qtc.QOffscreenSurface_new();
    }


    /// New2 constructs a new QOffscreenSurface object.
    pub fn New2(screen: ?*anyopaque) QtC.QOffscreenSurface {
        return qtc.QOffscreenSurface_new2(@ptrCast(screen));
    }


    /// New3 constructs a new QOffscreenSurface object.
    pub fn New3(screen: ?*anyopaque, parent: ?*anyopaque) QtC.QOffscreenSurface {
        return qtc.QOffscreenSurface_new3(@ptrCast(screen), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOffscreenSurface_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qoffscreensurface.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SurfaceType(self: ?*anyopaque, ) i32 {
        return qtc.QOffscreenSurface_SurfaceType(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSurfaceType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QOffscreenSurface_OnSurfaceType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSurfaceType(self: ?*anyopaque, ) i32 {
        return qtc.QOffscreenSurface_QBaseSurfaceType(@ptrCast(self));
    }

    pub fn Create(self: ?*anyopaque, ) void {
        qtc.QOffscreenSurface_Create(@ptrCast(self));
    }

    pub fn Destroy(self: ?*anyopaque, ) void {
        qtc.QOffscreenSurface_Destroy(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QOffscreenSurface_IsValid(@ptrCast(self));
    }

    pub fn SetFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QOffscreenSurface_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    pub fn Format(self: ?*anyopaque, ) QtC.QSurfaceFormat {
        return qtc.QOffscreenSurface_Format(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnFormat(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSurfaceFormat) void {
        qtc.QOffscreenSurface_OnFormat(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFormat(self: ?*anyopaque, ) QtC.QSurfaceFormat {
        return qtc.QOffscreenSurface_QBaseFormat(@ptrCast(self));
    }

    pub fn RequestedFormat(self: ?*anyopaque, ) QtC.QSurfaceFormat {
        return qtc.QOffscreenSurface_RequestedFormat(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QOffscreenSurface_Size(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QOffscreenSurface_OnSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QOffscreenSurface_QBaseSize(@ptrCast(self));
    }

    pub fn Screen(self: ?*anyopaque, ) QtC.QScreen {
        return qtc.QOffscreenSurface_Screen(@ptrCast(self));
    }

    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QOffscreenSurface_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    pub fn ResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        return qtc.QOffscreenSurface_ResolveInterface(@ptrCast(self), @ptrCast(name), revision);
    }

    pub fn OnResolveInterface(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.QOffscreenSurface_Connect_ResolveInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Allows for overriding the related default method
    pub fn OnResolveInterface(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QOffscreenSurface_OnResolveInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        return qtc.QOffscreenSurface_QBaseResolveInterface(@ptrCast(self), @ptrCast(name), revision);
    }

    pub fn ScreenChanged(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QOffscreenSurface_ScreenChanged(@ptrCast(self), @ptrCast(screen));
    }

    pub fn OnScreenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOffscreenSurface_Connect_ScreenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOffscreenSurface_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qoffscreensurface.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOffscreenSurface_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qoffscreensurface.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOffscreenSurface_Delete(@ptrCast(self));
    }
};
