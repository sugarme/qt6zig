const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qrhiwidget.html
pub const qrhiwidget = struct {

    /// New constructs a new QRhiWidget object.
    pub fn New(parent: ?*anyopaque) QtC.QRhiWidget {
        return qtc.QRhiWidget_new(@ptrCast(parent));
    }


    /// New2 constructs a new QRhiWidget object.
    pub fn New2() QtC.QRhiWidget {
        return qtc.QRhiWidget_new2();
    }


    /// New3 constructs a new QRhiWidget object.
    pub fn New3(parent: ?*anyopaque, f: i64) QtC.QRhiWidget {
        return qtc.QRhiWidget_new3(@ptrCast(parent), @intCast(f));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRhiWidget_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qrhiwidget.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Api(self: ?*anyopaque, ) i32 {
        return qtc.QRhiWidget_Api(@ptrCast(self));
    }

    pub fn SetApi(self: ?*anyopaque, api: i32) void {
        qtc.QRhiWidget_SetApi(@ptrCast(self), @intCast(api));
    }

    pub fn IsDebugLayerEnabled(self: ?*anyopaque, ) bool {
        return qtc.QRhiWidget_IsDebugLayerEnabled(@ptrCast(self));
    }

    pub fn SetDebugLayerEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QRhiWidget_SetDebugLayerEnabled(@ptrCast(self), enable);
    }

    pub fn SampleCount(self: ?*anyopaque, ) i32 {
        return qtc.QRhiWidget_SampleCount(@ptrCast(self));
    }

    pub fn SetSampleCount(self: ?*anyopaque, samples: i32) void {
        qtc.QRhiWidget_SetSampleCount(@ptrCast(self), samples);
    }

    pub fn ColorBufferFormat(self: ?*anyopaque, ) i32 {
        return qtc.QRhiWidget_ColorBufferFormat(@ptrCast(self));
    }

    pub fn SetColorBufferFormat(self: ?*anyopaque, format: i32) void {
        qtc.QRhiWidget_SetColorBufferFormat(@ptrCast(self), @intCast(format));
    }

    pub fn FixedColorBufferSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QRhiWidget_FixedColorBufferSize(@ptrCast(self));
    }

    pub fn SetFixedColorBufferSize(self: ?*anyopaque, pixelSize: QtC.QSize) void {
        qtc.QRhiWidget_SetFixedColorBufferSize(@ptrCast(self), @ptrCast(pixelSize));
    }

    pub fn SetFixedColorBufferSize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QRhiWidget_SetFixedColorBufferSize2(@ptrCast(self), w, h);
    }

    pub fn IsMirrorVerticallyEnabled(self: ?*anyopaque, ) bool {
        return qtc.QRhiWidget_IsMirrorVerticallyEnabled(@ptrCast(self));
    }

    pub fn SetMirrorVertically(self: ?*anyopaque, enabled: bool) void {
        qtc.QRhiWidget_SetMirrorVertically(@ptrCast(self), enabled);
    }

    pub fn GrabFramebuffer(self: ?*anyopaque, ) QtC.QImage {
        return qtc.QRhiWidget_GrabFramebuffer(@ptrCast(self));
    }

    pub fn IsAutoRenderTargetEnabled(self: ?*anyopaque, ) bool {
        return qtc.QRhiWidget_IsAutoRenderTargetEnabled(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsAutoRenderTargetEnabled(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QRhiWidget_OnIsAutoRenderTargetEnabled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsAutoRenderTargetEnabled(self: ?*anyopaque, ) bool {
        return qtc.QRhiWidget_QBaseIsAutoRenderTargetEnabled(@ptrCast(self));
    }

    pub fn SetAutoRenderTarget(self: ?*anyopaque, enabled: bool) void {
        qtc.QRhiWidget_SetAutoRenderTarget(@ptrCast(self), enabled);
    }

    /// Allows for overriding the related default method
    pub fn OnSetAutoRenderTarget(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QRhiWidget_OnSetAutoRenderTarget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetAutoRenderTarget(self: ?*anyopaque, enabled: bool) void {
        qtc.QRhiWidget_QBaseSetAutoRenderTarget(@ptrCast(self), enabled);
    }

    pub fn Initialize(self: ?*anyopaque, cb: *QRhiCommandBuffer) void {
        qtc.QRhiWidget_Initialize(@ptrCast(self), @ptrCast(cb));
    }

    /// Allows for overriding the related default method
    pub fn OnInitialize(self: ?*anyopaque, callback: *const fn (?*anyopaque, *QRhiCommandBuffer) callconv(.c) void) void {
        qtc.QRhiWidget_OnInitialize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitialize(self: ?*anyopaque, cb: *QRhiCommandBuffer) void {
        qtc.QRhiWidget_QBaseInitialize(@ptrCast(self), @ptrCast(cb));
    }

    pub fn Render(self: ?*anyopaque, cb: *QRhiCommandBuffer) void {
        qtc.QRhiWidget_Render(@ptrCast(self), @ptrCast(cb));
    }

    /// Allows for overriding the related default method
    pub fn OnRender(self: ?*anyopaque, callback: *const fn (?*anyopaque, *QRhiCommandBuffer) callconv(.c) void) void {
        qtc.QRhiWidget_OnRender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRender(self: ?*anyopaque, cb: *QRhiCommandBuffer) void {
        qtc.QRhiWidget_QBaseRender(@ptrCast(self), @ptrCast(cb));
    }

    pub fn ReleaseResources(self: ?*anyopaque, ) void {
        qtc.QRhiWidget_ReleaseResources(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnReleaseResources(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QRhiWidget_OnReleaseResources(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReleaseResources(self: ?*anyopaque, ) void {
        qtc.QRhiWidget_QBaseReleaseResources(@ptrCast(self));
    }

    pub fn Rhi(self: ?*anyopaque, ) QRhi {
        return @ptrCast(qtc.QRhiWidget_Rhi(@ptrCast(self)));
    }

    /// Allows for overriding the related default method
    pub fn OnRhi(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QRhi) void {
        qtc.QRhiWidget_OnRhi(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRhi(self: ?*anyopaque, ) QRhi {
        return @ptrCast(qtc.QRhiWidget_QBaseRhi(@ptrCast(self)));
    }

    pub fn ColorTexture(self: ?*anyopaque, ) QRhiTexture {
        return @ptrCast(qtc.QRhiWidget_ColorTexture(@ptrCast(self)));
    }

    /// Allows for overriding the related default method
    pub fn OnColorTexture(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QRhiTexture) void {
        qtc.QRhiWidget_OnColorTexture(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColorTexture(self: ?*anyopaque, ) QRhiTexture {
        return @ptrCast(qtc.QRhiWidget_QBaseColorTexture(@ptrCast(self)));
    }

    pub fn MsaaColorBuffer(self: ?*anyopaque, ) QRhiRenderBuffer {
        return @ptrCast(qtc.QRhiWidget_MsaaColorBuffer(@ptrCast(self)));
    }

    /// Allows for overriding the related default method
    pub fn OnMsaaColorBuffer(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QRhiRenderBuffer) void {
        qtc.QRhiWidget_OnMsaaColorBuffer(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMsaaColorBuffer(self: ?*anyopaque, ) QRhiRenderBuffer {
        return @ptrCast(qtc.QRhiWidget_QBaseMsaaColorBuffer(@ptrCast(self)));
    }

    pub fn ResolveTexture(self: ?*anyopaque, ) QRhiTexture {
        return @ptrCast(qtc.QRhiWidget_ResolveTexture(@ptrCast(self)));
    }

    /// Allows for overriding the related default method
    pub fn OnResolveTexture(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QRhiTexture) void {
        qtc.QRhiWidget_OnResolveTexture(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResolveTexture(self: ?*anyopaque, ) QRhiTexture {
        return @ptrCast(qtc.QRhiWidget_QBaseResolveTexture(@ptrCast(self)));
    }

    pub fn DepthStencilBuffer(self: ?*anyopaque, ) QRhiRenderBuffer {
        return @ptrCast(qtc.QRhiWidget_DepthStencilBuffer(@ptrCast(self)));
    }

    /// Allows for overriding the related default method
    pub fn OnDepthStencilBuffer(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QRhiRenderBuffer) void {
        qtc.QRhiWidget_OnDepthStencilBuffer(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDepthStencilBuffer(self: ?*anyopaque, ) QRhiRenderBuffer {
        return @ptrCast(qtc.QRhiWidget_QBaseDepthStencilBuffer(@ptrCast(self)));
    }

    pub fn RenderTarget(self: ?*anyopaque, ) QRhiRenderTarget {
        return @ptrCast(qtc.QRhiWidget_RenderTarget(@ptrCast(self)));
    }

    /// Allows for overriding the related default method
    pub fn OnRenderTarget(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QRhiRenderTarget) void {
        qtc.QRhiWidget_OnRenderTarget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRenderTarget(self: ?*anyopaque, ) QRhiRenderTarget {
        return @ptrCast(qtc.QRhiWidget_QBaseRenderTarget(@ptrCast(self)));
    }

    pub fn ResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QRhiWidget_ResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRhiWidget_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QRhiWidget_QBaseResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QRhiWidget_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRhiWidget_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QRhiWidget_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QRhiWidget_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QRhiWidget_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QRhiWidget_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn FrameSubmitted(self: ?*anyopaque, ) void {
        qtc.QRhiWidget_FrameSubmitted(@ptrCast(self));
    }

    pub fn OnFrameSubmitted(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QRhiWidget_Connect_FrameSubmitted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RenderFailed(self: ?*anyopaque, ) void {
        qtc.QRhiWidget_RenderFailed(@ptrCast(self));
    }

    pub fn OnRenderFailed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QRhiWidget_Connect_RenderFailed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SampleCountChanged(self: ?*anyopaque, samples: i32) void {
        qtc.QRhiWidget_SampleCountChanged(@ptrCast(self), samples);
    }

    pub fn OnSampleCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QRhiWidget_Connect_SampleCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ColorBufferFormatChanged(self: ?*anyopaque, format: i32) void {
        qtc.QRhiWidget_ColorBufferFormatChanged(@ptrCast(self), @intCast(format));
    }

    pub fn OnColorBufferFormatChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QRhiWidget_Connect_ColorBufferFormatChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FixedColorBufferSizeChanged(self: ?*anyopaque, pixelSize: ?*anyopaque) void {
        qtc.QRhiWidget_FixedColorBufferSizeChanged(@ptrCast(self), @ptrCast(pixelSize));
    }

    pub fn OnFixedColorBufferSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRhiWidget_Connect_FixedColorBufferSizeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MirrorVerticallyChanged(self: ?*anyopaque, enabled: bool) void {
        qtc.QRhiWidget_MirrorVerticallyChanged(@ptrCast(self), enabled);
    }

    pub fn OnMirrorVerticallyChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QRhiWidget_Connect_MirrorVerticallyChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRhiWidget_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qrhiwidget.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRhiWidget_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qrhiwidget.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRhiWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/rhiwidget.html#types
pub const enums = struct {
    pub const Api = enum {
        pub const Null: i32 = 0;
        pub const OpenGL: i32 = 1;
        pub const Metal: i32 = 2;
        pub const Vulkan: i32 = 3;
        pub const Direct3D11: i32 = 4;
        pub const Direct3D12: i32 = 5;
    };

    pub const TextureFormat = enum {
        pub const RGBA8: i32 = 0;
        pub const RGBA16F: i32 = 1;
        pub const RGBA32F: i32 = 2;
        pub const RGB10A2: i32 = 3;
    };

};
