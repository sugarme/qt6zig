const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qbarlegendmarker.html
pub const qbarlegendmarker = struct {

    /// New constructs a new QBarLegendMarker object.
    pub fn New(series: ?*anyopaque, barset: ?*anyopaque, legend: ?*anyopaque) QtC.QBarLegendMarker {
        return qtc.QBarLegendMarker_new(@ptrCast(series), @ptrCast(barset), @ptrCast(legend));
    }


    /// New2 constructs a new QBarLegendMarker object.
    pub fn New2(series: ?*anyopaque, barset: ?*anyopaque, legend: ?*anyopaque, parent: ?*anyopaque) QtC.QBarLegendMarker {
        return qtc.QBarLegendMarker_new2(@ptrCast(series), @ptrCast(barset), @ptrCast(legend), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBarLegendMarker_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbarlegendmarker.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QBarLegendMarker_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QBarLegendMarker_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QBarLegendMarker_QBaseType(@ptrCast(self));
    }

    pub fn Series(self: ?*anyopaque, ) QtC.QAbstractBarSeries {
        return qtc.QBarLegendMarker_Series(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSeries(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QAbstractBarSeries) void {
        qtc.QBarLegendMarker_OnSeries(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSeries(self: ?*anyopaque, ) QtC.QAbstractBarSeries {
        return qtc.QBarLegendMarker_QBaseSeries(@ptrCast(self));
    }

    pub fn Barset(self: ?*anyopaque, ) QtC.QBarSet {
        return qtc.QBarLegendMarker_Barset(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBarLegendMarker_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbarlegendmarker.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBarLegendMarker_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbarlegendmarker.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBarLegendMarker_Delete(@ptrCast(self));
    }
};
