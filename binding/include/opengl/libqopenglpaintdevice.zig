const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopenglpaintdevice.html
pub const qopenglpaintdevice = struct {

    /// New constructs a new QOpenGLPaintDevice object.
    pub fn New() QtC.QOpenGLPaintDevice {
        return qtc.QOpenGLPaintDevice_new();
    }


    /// New2 constructs a new QOpenGLPaintDevice object.
    pub fn New2(size: ?*anyopaque) QtC.QOpenGLPaintDevice {
        return qtc.QOpenGLPaintDevice_new2(@ptrCast(size));
    }


    /// New3 constructs a new QOpenGLPaintDevice object.
    pub fn New3(width: i32, height: i32) QtC.QOpenGLPaintDevice {
        return qtc.QOpenGLPaintDevice_new3(width, height);
    }


    pub fn DevType(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLPaintDevice_DevType(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QOpenGLPaintDevice_OnDevType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDevType(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLPaintDevice_QBaseDevType(@ptrCast(self));
    }

    pub fn PaintEngine(self: ?*anyopaque, ) QtC.QPaintEngine {
        return qtc.QOpenGLPaintDevice_PaintEngine(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPaintEngine) void {
        qtc.QOpenGLPaintDevice_OnPaintEngine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEngine(self: ?*anyopaque, ) QtC.QPaintEngine {
        return qtc.QOpenGLPaintDevice_QBasePaintEngine(@ptrCast(self));
    }

    pub fn Context(self: ?*anyopaque, ) QtC.QOpenGLContext {
        return qtc.QOpenGLPaintDevice_Context(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QOpenGLPaintDevice_Size(@ptrCast(self));
    }

    pub fn SetSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QOpenGLPaintDevice_SetSize(@ptrCast(self), @ptrCast(size));
    }

    pub fn SetDevicePixelRatio(self: ?*anyopaque, devicePixelRatio: f64) void {
        qtc.QOpenGLPaintDevice_SetDevicePixelRatio(@ptrCast(self), devicePixelRatio);
    }

    pub fn DotsPerMeterX(self: ?*anyopaque, ) f64 {
        return qtc.QOpenGLPaintDevice_DotsPerMeterX(@ptrCast(self));
    }

    pub fn DotsPerMeterY(self: ?*anyopaque, ) f64 {
        return qtc.QOpenGLPaintDevice_DotsPerMeterY(@ptrCast(self));
    }

    pub fn SetDotsPerMeterX(self: ?*anyopaque, dotsPerMeterX: f64) void {
        qtc.QOpenGLPaintDevice_SetDotsPerMeterX(@ptrCast(self), dotsPerMeterX);
    }

    pub fn SetDotsPerMeterY(self: ?*anyopaque, dotsPerMeterY: f64) void {
        qtc.QOpenGLPaintDevice_SetDotsPerMeterY(@ptrCast(self), dotsPerMeterY);
    }

    pub fn SetPaintFlipped(self: ?*anyopaque, flipped: bool) void {
        qtc.QOpenGLPaintDevice_SetPaintFlipped(@ptrCast(self), flipped);
    }

    pub fn PaintFlipped(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLPaintDevice_PaintFlipped(@ptrCast(self));
    }

    pub fn EnsureActiveTarget(self: ?*anyopaque, ) void {
        qtc.QOpenGLPaintDevice_EnsureActiveTarget(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnEnsureActiveTarget(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLPaintDevice_OnEnsureActiveTarget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEnsureActiveTarget(self: ?*anyopaque, ) void {
        qtc.QOpenGLPaintDevice_QBaseEnsureActiveTarget(@ptrCast(self));
    }

    pub fn Metric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QOpenGLPaintDevice_Metric(@ptrCast(self), @intCast(metric));
    }

    /// Allows for overriding the related default method
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QOpenGLPaintDevice_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMetric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QOpenGLPaintDevice_QBaseMetric(@ptrCast(self), @intCast(metric));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLPaintDevice_Delete(@ptrCast(self));
    }
};
