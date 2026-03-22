const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qboxplotlegendmarker.html
pub const qboxplotlegendmarker = struct {

    /// New constructs a new QBoxPlotLegendMarker object.
    pub fn New(series: ?*anyopaque, legend: ?*anyopaque) QtC.QBoxPlotLegendMarker {
        return qtc.QBoxPlotLegendMarker_new(@ptrCast(series), @ptrCast(legend));
    }


    /// New2 constructs a new QBoxPlotLegendMarker object.
    pub fn New2(series: ?*anyopaque, legend: ?*anyopaque, parent: ?*anyopaque) QtC.QBoxPlotLegendMarker {
        return qtc.QBoxPlotLegendMarker_new2(@ptrCast(series), @ptrCast(legend), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBoxPlotLegendMarker_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxplotlegendmarker.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QBoxPlotLegendMarker_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QBoxPlotLegendMarker_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QBoxPlotLegendMarker_QBaseType(@ptrCast(self));
    }

    pub fn Series(self: ?*anyopaque, ) QtC.QBoxPlotSeries {
        return qtc.QBoxPlotLegendMarker_Series(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSeries(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QBoxPlotSeries) void {
        qtc.QBoxPlotLegendMarker_OnSeries(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSeries(self: ?*anyopaque, ) QtC.QBoxPlotSeries {
        return qtc.QBoxPlotLegendMarker_QBaseSeries(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBoxPlotLegendMarker_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxplotlegendmarker.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBoxPlotLegendMarker_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxplotlegendmarker.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBoxPlotLegendMarker_Delete(@ptrCast(self));
    }
};
