const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qxylegendmarker.html
pub const qxylegendmarker = struct {

    /// New constructs a new QXYLegendMarker object.
    pub fn New(series: ?*anyopaque, legend: ?*anyopaque) QtC.QXYLegendMarker {
        return qtc.QXYLegendMarker_new(@ptrCast(series), @ptrCast(legend));
    }


    /// New2 constructs a new QXYLegendMarker object.
    pub fn New2(series: ?*anyopaque, legend: ?*anyopaque, parent: ?*anyopaque) QtC.QXYLegendMarker {
        return qtc.QXYLegendMarker_new2(@ptrCast(series), @ptrCast(legend), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QXYLegendMarker_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qxylegendmarker.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QXYLegendMarker_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QXYLegendMarker_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QXYLegendMarker_QBaseType(@ptrCast(self));
    }

    pub fn Series(self: ?*anyopaque, ) QtC.QXYSeries {
        return qtc.QXYLegendMarker_Series(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSeries(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QXYSeries) void {
        qtc.QXYLegendMarker_OnSeries(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSeries(self: ?*anyopaque, ) QtC.QXYSeries {
        return qtc.QXYLegendMarker_QBaseSeries(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QXYLegendMarker_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qxylegendmarker.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QXYLegendMarker_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qxylegendmarker.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXYLegendMarker_Delete(@ptrCast(self));
    }
};
