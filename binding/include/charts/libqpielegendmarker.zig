const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpielegendmarker.html
pub const qpielegendmarker = struct {

    /// New constructs a new QPieLegendMarker object.
    pub fn New(series: ?*anyopaque, slice: ?*anyopaque, legend: ?*anyopaque) QtC.QPieLegendMarker {
        return qtc.QPieLegendMarker_new(@ptrCast(series), @ptrCast(slice), @ptrCast(legend));
    }


    /// New2 constructs a new QPieLegendMarker object.
    pub fn New2(series: ?*anyopaque, slice: ?*anyopaque, legend: ?*anyopaque, parent: ?*anyopaque) QtC.QPieLegendMarker {
        return qtc.QPieLegendMarker_new2(@ptrCast(series), @ptrCast(slice), @ptrCast(legend), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPieLegendMarker_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpielegendmarker.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QPieLegendMarker_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QPieLegendMarker_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QPieLegendMarker_QBaseType(@ptrCast(self));
    }

    pub fn Series(self: ?*anyopaque, ) QtC.QPieSeries {
        return qtc.QPieLegendMarker_Series(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSeries(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPieSeries) void {
        qtc.QPieLegendMarker_OnSeries(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSeries(self: ?*anyopaque, ) QtC.QPieSeries {
        return qtc.QPieLegendMarker_QBaseSeries(@ptrCast(self));
    }

    pub fn Slice(self: ?*anyopaque, ) QtC.QPieSlice {
        return qtc.QPieLegendMarker_Slice(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPieLegendMarker_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpielegendmarker.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPieLegendMarker_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpielegendmarker.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPieLegendMarker_Delete(@ptrCast(self));
    }
};
