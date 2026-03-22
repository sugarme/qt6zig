const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpaintdevice.html
pub const qpaintdevice = struct {

    pub fn DevType(self: ?*anyopaque, ) i32 {
        return qtc.QPaintDevice_DevType(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QPaintDevice_OnDevType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDevType(self: ?*anyopaque, ) i32 {
        return qtc.QPaintDevice_QBaseDevType(@ptrCast(self));
    }

    pub fn PaintingActive(self: ?*anyopaque, ) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    pub fn PaintEngine(self: ?*anyopaque, ) QtC.QPaintEngine {
        return qtc.QPaintDevice_PaintEngine(@ptrCast(self));
    }

    pub fn Width(self: ?*anyopaque, ) i32 {
        return qtc.QPaintDevice_Width(@ptrCast(self));
    }

    pub fn Height(self: ?*anyopaque, ) i32 {
        return qtc.QPaintDevice_Height(@ptrCast(self));
    }

    pub fn WidthMM(self: ?*anyopaque, ) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    pub fn HeightMM(self: ?*anyopaque, ) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    pub fn LogicalDpiX(self: ?*anyopaque, ) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    pub fn LogicalDpiY(self: ?*anyopaque, ) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    pub fn PhysicalDpiX(self: ?*anyopaque, ) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    pub fn PhysicalDpiY(self: ?*anyopaque, ) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    pub fn DevicePixelRatio(self: ?*anyopaque, ) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    pub fn DevicePixelRatioF(self: ?*anyopaque, ) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    pub fn ColorCount(self: ?*anyopaque, ) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    pub fn Depth(self: ?*anyopaque, ) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self));
    }

    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    pub fn EncodeMetricF(metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@intCast(metric), value);
    }

    pub fn Metric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QPaintDevice_Metric(@ptrCast(self), @intCast(metric));
    }

    /// Allows for overriding the related default method
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QPaintDevice_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMetric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QPaintDevice_QBaseMetric(@ptrCast(self), @intCast(metric));
    }

    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QPaintDevice_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Allows for overriding the related default method
    pub fn OnInitPainter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPaintDevice_OnInitPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QPaintDevice_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QPaintDevice_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Allows for overriding the related default method
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QPaintDevice_OnRedirected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QPaintDevice_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    pub fn SharedPainter(self: ?*anyopaque, ) QtC.QPainter {
        return qtc.QPaintDevice_SharedPainter(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSharedPainter(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPainter) void {
        qtc.QPaintDevice_OnSharedPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSharedPainter(self: ?*anyopaque, ) QtC.QPainter {
        return qtc.QPaintDevice_QBaseSharedPainter(@ptrCast(self));
    }

    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QPaintDevice_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Allows for overriding the related default method
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.QPaintDevice_OnGetDecodedMetricF(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QPaintDevice_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPaintDevice_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/paintdevice.html#types
pub const enums = struct {
    pub const PaintDeviceMetric = enum {
        pub const PdmWidth: i32 = 1;
        pub const PdmHeight: i32 = 2;
        pub const PdmWidthMM: i32 = 3;
        pub const PdmHeightMM: i32 = 4;
        pub const PdmNumColors: i32 = 5;
        pub const PdmDepth: i32 = 6;
        pub const PdmDpiX: i32 = 7;
        pub const PdmDpiY: i32 = 8;
        pub const PdmPhysicalDpiX: i32 = 9;
        pub const PdmPhysicalDpiY: i32 = 10;
        pub const PdmDevicePixelRatio: i32 = 11;
        pub const PdmDevicePixelRatioScaled: i32 = 12;
        pub const PdmDevicePixelRatioF_EncodedA: i32 = 13;
        pub const PdmDevicePixelRatioF_EncodedB: i32 = 14;
    };

};
