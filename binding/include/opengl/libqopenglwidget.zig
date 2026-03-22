const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopenglwidget.html
pub const qopenglwidget = struct {

    /// New constructs a new QOpenGLWidget object.
    pub fn New(parent: ?*anyopaque) QtC.QOpenGLWidget {
        return qtc.QOpenGLWidget_new(@ptrCast(parent));
    }


    /// New2 constructs a new QOpenGLWidget object.
    pub fn New2() QtC.QOpenGLWidget {
        return qtc.QOpenGLWidget_new2();
    }


    /// New3 constructs a new QOpenGLWidget object.
    pub fn New3(parent: ?*anyopaque, f: i64) QtC.QOpenGLWidget {
        return qtc.QOpenGLWidget_new3(@ptrCast(parent), @intCast(f));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLWidget_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglwidget.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetUpdateBehavior(self: ?*anyopaque, updateBehavior: i32) void {
        qtc.QOpenGLWidget_SetUpdateBehavior(@ptrCast(self), @intCast(updateBehavior));
    }

    pub fn UpdateBehavior(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLWidget_UpdateBehavior(@ptrCast(self));
    }

    pub fn SetFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QOpenGLWidget_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    pub fn Format(self: ?*anyopaque, ) QtC.QSurfaceFormat {
        return qtc.QOpenGLWidget_Format(@ptrCast(self));
    }

    pub fn TextureFormat(self: ?*anyopaque, ) GL {
        return qtc.QOpenGLWidget_TextureFormat(@ptrCast(self));
    }

    pub fn SetTextureFormat(self: ?*anyopaque, texFormat: u32) void {
        qtc.QOpenGLWidget_SetTextureFormat(@ptrCast(self), texFormat);
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLWidget_IsValid(@ptrCast(self));
    }

    pub fn MakeCurrent(self: ?*anyopaque, ) void {
        qtc.QOpenGLWidget_MakeCurrent(@ptrCast(self));
    }

    pub fn MakeCurrent2(self: ?*anyopaque, targetBuffer: u8) void {
        qtc.QOpenGLWidget_MakeCurrent2(@ptrCast(self), @intCast(targetBuffer));
    }

    pub fn DoneCurrent(self: ?*anyopaque, ) void {
        qtc.QOpenGLWidget_DoneCurrent(@ptrCast(self));
    }

    pub fn Context(self: ?*anyopaque, ) QtC.QOpenGLContext {
        return qtc.QOpenGLWidget_Context(@ptrCast(self));
    }

    pub fn DefaultFramebufferObject(self: ?*anyopaque, ) u32 {
        return qtc.QOpenGLWidget_DefaultFramebufferObject(@ptrCast(self));
    }

    pub fn DefaultFramebufferObject2(self: ?*anyopaque, targetBuffer: u8) u32 {
        return qtc.QOpenGLWidget_DefaultFramebufferObject2(@ptrCast(self), @intCast(targetBuffer));
    }

    pub fn GrabFramebuffer(self: ?*anyopaque, ) QtC.QImage {
        return qtc.QOpenGLWidget_GrabFramebuffer(@ptrCast(self));
    }

    pub fn GrabFramebuffer2(self: ?*anyopaque, targetBuffer: u8) QtC.QImage {
        return qtc.QOpenGLWidget_GrabFramebuffer2(@ptrCast(self), @intCast(targetBuffer));
    }

    pub fn CurrentTargetBuffer(self: ?*anyopaque, ) u8 {
        return qtc.QOpenGLWidget_CurrentTargetBuffer(@ptrCast(self));
    }

    pub fn AboutToCompose(self: ?*anyopaque, ) void {
        qtc.QOpenGLWidget_AboutToCompose(@ptrCast(self));
    }

    pub fn OnAboutToCompose(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLWidget_Connect_AboutToCompose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FrameSwapped(self: ?*anyopaque, ) void {
        qtc.QOpenGLWidget_FrameSwapped(@ptrCast(self));
    }

    pub fn OnFrameSwapped(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLWidget_Connect_FrameSwapped(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AboutToResize(self: ?*anyopaque, ) void {
        qtc.QOpenGLWidget_AboutToResize(@ptrCast(self));
    }

    pub fn OnAboutToResize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLWidget_Connect_AboutToResize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Resized(self: ?*anyopaque, ) void {
        qtc.QOpenGLWidget_Resized(@ptrCast(self));
    }

    pub fn OnResized(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLWidget_Connect_Resized(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn InitializeGL(self: ?*anyopaque, ) void {
        qtc.QOpenGLWidget_InitializeGL(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInitializeGL(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLWidget_OnInitializeGL(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitializeGL(self: ?*anyopaque, ) void {
        qtc.QOpenGLWidget_QBaseInitializeGL(@ptrCast(self));
    }

    pub fn ResizeGL(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QOpenGLWidget_ResizeGL(@ptrCast(self), w, h);
    }

    /// Allows for overriding the related default method
    pub fn OnResizeGL(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QOpenGLWidget_OnResizeGL(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeGL(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QOpenGLWidget_QBaseResizeGL(@ptrCast(self), w, h);
    }

    pub fn PaintGL(self: ?*anyopaque, ) void {
        qtc.QOpenGLWidget_PaintGL(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintGL(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLWidget_OnPaintGL(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintGL(self: ?*anyopaque, ) void {
        qtc.QOpenGLWidget_QBasePaintGL(@ptrCast(self));
    }

    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QOpenGLWidget_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLWidget_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QOpenGLWidget_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn ResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QOpenGLWidget_ResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLWidget_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QOpenGLWidget_QBaseResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QOpenGLWidget_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QOpenGLWidget_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QOpenGLWidget_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn Metric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QOpenGLWidget_Metric(@ptrCast(self), @intCast(metric));
    }

    /// Allows for overriding the related default method
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QOpenGLWidget_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMetric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QOpenGLWidget_QBaseMetric(@ptrCast(self), @intCast(metric));
    }

    pub fn Redirected(self: ?*anyopaque, p: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QOpenGLWidget_Redirected(@ptrCast(self), @ptrCast(p));
    }

    /// Allows for overriding the related default method
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QOpenGLWidget_OnRedirected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRedirected(self: ?*anyopaque, p: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QOpenGLWidget_QBaseRedirected(@ptrCast(self), @ptrCast(p));
    }

    pub fn PaintEngine(self: ?*anyopaque, ) QtC.QPaintEngine {
        return qtc.QOpenGLWidget_PaintEngine(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPaintEngine) void {
        qtc.QOpenGLWidget_OnPaintEngine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEngine(self: ?*anyopaque, ) QtC.QPaintEngine {
        return qtc.QOpenGLWidget_QBasePaintEngine(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLWidget_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglwidget.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLWidget_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglwidget.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/openglwidget.html#types
pub const enums = struct {
    pub const UpdateBehavior = enum {
        pub const NoPartialUpdate: i32 = 0;
        pub const PartialUpdate: i32 = 1;
    };

    pub const TargetBuffer = enum {
        pub const LeftBuffer: u8 = 0;
        pub const RightBuffer: u8 = 1;
    };

};
