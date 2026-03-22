const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpolarchart.html
pub const qpolarchart = struct {

    /// New constructs a new QPolarChart object.
    pub fn New() QtC.QPolarChart {
        return qtc.QPolarChart_new();
    }


    /// New2 constructs a new QPolarChart object.
    pub fn New2(parent: ?*anyopaque) QtC.QPolarChart {
        return qtc.QPolarChart_new2(@ptrCast(parent));
    }


    /// New3 constructs a new QPolarChart object.
    pub fn New3(parent: ?*anyopaque, wFlags: i64) QtC.QPolarChart {
        return qtc.QPolarChart_new3(@ptrCast(parent), @intCast(wFlags));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPolarChart_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddAxis(self: ?*anyopaque, axis: ?*anyopaque, polarOrientation: i32) void {
        qtc.QPolarChart_AddAxis(@ptrCast(self), @ptrCast(axis), @intCast(polarOrientation));
    }

    pub fn Axes(self: ?*anyopaque, ) []const u8 {
        return qtc.QPolarChart_Axes(@ptrCast(self));
    }

    pub fn AxisPolarOrientation(axis: ?*anyopaque) i32 {
        return qtc.QPolarChart_AxisPolarOrientation(@ptrCast(axis));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPolarChart_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPolarChart_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpolarchart.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Axes1(self: ?*anyopaque, polarOrientation: i32) []const u8 {
        return qtc.QPolarChart_Axes1(@ptrCast(self), @intCast(polarOrientation));
    }

    pub fn Axes2(self: ?*anyopaque, polarOrientation: i32, series: ?*anyopaque) []const u8 {
        return qtc.QPolarChart_Axes2(@ptrCast(self), @intCast(polarOrientation), @ptrCast(series));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPolarChart_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/polarchart.html#types
pub const enums = struct {
    pub const PolarOrientation = enum {
        pub const PolarOrientationRadial: i32 = 1;
        pub const PolarOrientationAngular: i32 = 2;
    };

};
