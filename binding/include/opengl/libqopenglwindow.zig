const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopenglwindow.html
pub const qopenglwindow = struct {

    /// New constructs a new QOpenGLWindow object.
    pub fn New() QtC.QOpenGLWindow {
        return qtc.QOpenGLWindow_new();
    }


    /// New2 constructs a new QOpenGLWindow object.
    pub fn New2(shareContext: ?*anyopaque) QtC.QOpenGLWindow {
        return qtc.QOpenGLWindow_new2(@ptrCast(shareContext));
    }


    /// New3 constructs a new QOpenGLWindow object.
    pub fn New3(updateBehavior: i32) QtC.QOpenGLWindow {
        return qtc.QOpenGLWindow_new3(@intCast(updateBehavior));
    }


    /// New4 constructs a new QOpenGLWindow object.
    pub fn New4(updateBehavior: i32, parent: ?*anyopaque) QtC.QOpenGLWindow {
        return qtc.QOpenGLWindow_new4(@intCast(updateBehavior), @ptrCast(parent));
    }


    /// New5 constructs a new QOpenGLWindow object.
    pub fn New5(shareContext: ?*anyopaque, updateBehavior: i32) QtC.QOpenGLWindow {
        return qtc.QOpenGLWindow_new5(@ptrCast(shareContext), @intCast(updateBehavior));
    }


    /// New6 constructs a new QOpenGLWindow object.
    pub fn New6(shareContext: ?*anyopaque, updateBehavior: i32, parent: ?*anyopaque) QtC.QOpenGLWindow {
        return qtc.QOpenGLWindow_new6(@ptrCast(shareContext), @intCast(updateBehavior), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLWindow_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglwindow.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn UpdateBehavior(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLWindow_UpdateBehavior(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLWindow_IsValid(@ptrCast(self));
    }

    pub fn MakeCurrent(self: ?*anyopaque, ) void {
        qtc.QOpenGLWindow_MakeCurrent(@ptrCast(self));
    }

    pub fn DoneCurrent(self: ?*anyopaque, ) void {
        qtc.QOpenGLWindow_DoneCurrent(@ptrCast(self));
    }

    pub fn Context(self: ?*anyopaque, ) QtC.QOpenGLContext {
        return qtc.QOpenGLWindow_Context(@ptrCast(self));
    }

    pub fn ShareContext(self: ?*anyopaque, ) QtC.QOpenGLContext {
        return qtc.QOpenGLWindow_ShareContext(@ptrCast(self));
    }

    pub fn DefaultFramebufferObject(self: ?*anyopaque, ) u32 {
        return qtc.QOpenGLWindow_DefaultFramebufferObject(@ptrCast(self));
    }

    pub fn GrabFramebuffer(self: ?*anyopaque, ) QtC.QImage {
        return qtc.QOpenGLWindow_GrabFramebuffer(@ptrCast(self));
    }

    pub fn FrameSwapped(self: ?*anyopaque, ) void {
        qtc.QOpenGLWindow_FrameSwapped(@ptrCast(self));
    }

    pub fn OnFrameSwapped(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLWindow_Connect_FrameSwapped(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn InitializeGL(self: ?*anyopaque, ) void {
        qtc.QOpenGLWindow_InitializeGL(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInitializeGL(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnInitializeGL(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitializeGL(self: ?*anyopaque, ) void {
        qtc.QOpenGLWindow_QBaseInitializeGL(@ptrCast(self));
    }

    pub fn ResizeGL(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QOpenGLWindow_ResizeGL(@ptrCast(self), w, h);
    }

    /// Allows for overriding the related default method
    pub fn OnResizeGL(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnResizeGL(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeGL(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QOpenGLWindow_QBaseResizeGL(@ptrCast(self), w, h);
    }

    pub fn PaintGL(self: ?*anyopaque, ) void {
        qtc.QOpenGLWindow_PaintGL(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintGL(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnPaintGL(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintGL(self: ?*anyopaque, ) void {
        qtc.QOpenGLWindow_QBasePaintGL(@ptrCast(self));
    }

    pub fn PaintUnderGL(self: ?*anyopaque, ) void {
        qtc.QOpenGLWindow_PaintUnderGL(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintUnderGL(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnPaintUnderGL(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintUnderGL(self: ?*anyopaque, ) void {
        qtc.QOpenGLWindow_QBasePaintUnderGL(@ptrCast(self));
    }

    pub fn PaintOverGL(self: ?*anyopaque, ) void {
        qtc.QOpenGLWindow_PaintOverGL(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintOverGL(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnPaintOverGL(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintOverGL(self: ?*anyopaque, ) void {
        qtc.QOpenGLWindow_QBasePaintOverGL(@ptrCast(self));
    }

    pub fn PaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLWindow_PaintEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLWindow_QBasePaintEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLWindow_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLWindow_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLWindow_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Metric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QOpenGLWindow_Metric(@ptrCast(self), @intCast(metric));
    }

    /// Allows for overriding the related default method
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QOpenGLWindow_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMetric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QOpenGLWindow_QBaseMetric(@ptrCast(self), @intCast(metric));
    }

    pub fn Redirected(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QOpenGLWindow_Redirected(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QOpenGLWindow_OnRedirected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRedirected(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QOpenGLWindow_QBaseRedirected(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLWindow_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglwindow.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLWindow_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglwindow.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLWindow_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/openglwindow.html#types
pub const enums = struct {
    pub const UpdateBehavior = enum {
        pub const NoPartialUpdate: i32 = 0;
        pub const PartialUpdateBlit: i32 = 1;
        pub const PartialUpdateBlend: i32 = 2;
    };

};
