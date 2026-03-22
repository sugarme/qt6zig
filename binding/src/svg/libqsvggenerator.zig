const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsvggenerator.html
pub const qsvggenerator = struct {

    /// New constructs a new QSvgGenerator object.
    pub fn New() QtC.QSvgGenerator {
        return qtc.QSvgGenerator_new();
    }


    /// New2 constructs a new QSvgGenerator object.
    pub fn New2(version: i32) QtC.QSvgGenerator {
        return qtc.QSvgGenerator_new2(@intCast(version));
    }


    pub fn Title(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSvgGenerator_Title(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvggenerator.Title: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
qtc.QSvgGenerator_SetTitle(@ptrCast(self), title_str);
    }

    pub fn Description(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSvgGenerator_Description(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvggenerator.Description: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
qtc.QSvgGenerator_SetDescription(@ptrCast(self), description_str);
    }

    pub fn Size(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSvgGenerator_Size(@ptrCast(self));
    }

    pub fn SetSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QSvgGenerator_SetSize(@ptrCast(self), @ptrCast(size));
    }

    pub fn ViewBox(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QSvgGenerator_ViewBox(@ptrCast(self));
    }

    pub fn ViewBoxF(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QSvgGenerator_ViewBoxF(@ptrCast(self));
    }

    pub fn SetViewBox(self: ?*anyopaque, viewBox: ?*anyopaque) void {
        qtc.QSvgGenerator_SetViewBox(@ptrCast(self), @ptrCast(viewBox));
    }

    pub fn SetViewBox2(self: ?*anyopaque, viewBox: ?*anyopaque) void {
        qtc.QSvgGenerator_SetViewBox2(@ptrCast(self), @ptrCast(viewBox));
    }

    pub fn FileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSvgGenerator_FileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvggenerator.FileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetFileName(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QSvgGenerator_SetFileName(@ptrCast(self), fileName_str);
    }

    pub fn OutputDevice(self: ?*anyopaque, ) QtC.QIODevice {
        return qtc.QSvgGenerator_OutputDevice(@ptrCast(self));
    }

    pub fn SetOutputDevice(self: ?*anyopaque, outputDevice: ?*anyopaque) void {
        qtc.QSvgGenerator_SetOutputDevice(@ptrCast(self), @ptrCast(outputDevice));
    }

    pub fn SetResolution(self: ?*anyopaque, dpi: i32) void {
        qtc.QSvgGenerator_SetResolution(@ptrCast(self), dpi);
    }

    pub fn Resolution(self: ?*anyopaque, ) i32 {
        return qtc.QSvgGenerator_Resolution(@ptrCast(self));
    }

    pub fn SvgVersion(self: ?*anyopaque, ) i32 {
        return qtc.QSvgGenerator_SvgVersion(@ptrCast(self));
    }

    pub fn PaintEngine(self: ?*anyopaque, ) QtC.QPaintEngine {
        return qtc.QSvgGenerator_PaintEngine(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPaintEngine) void {
        qtc.QSvgGenerator_OnPaintEngine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEngine(self: ?*anyopaque, ) QtC.QPaintEngine {
        return qtc.QSvgGenerator_QBasePaintEngine(@ptrCast(self));
    }

    pub fn Metric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QSvgGenerator_Metric(@ptrCast(self), @intCast(metric));
    }

    /// Allows for overriding the related default method
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QSvgGenerator_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMetric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QSvgGenerator_QBaseMetric(@ptrCast(self), @intCast(metric));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSvgGenerator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/svggenerator.html#types
pub const enums = struct {
    pub const SvgVersion = enum {
        pub const SvgTiny12: i32 = 0;
        pub const Svg11: i32 = 1;
    };

};
