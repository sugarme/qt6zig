const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qabstractseries.html
pub const qabstractseries = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSeries_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractseries.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractSeries_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractSeries_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractSeries_QBaseType(@ptrCast(self));
    }

    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QAbstractSeries_SetName(@ptrCast(self), name_str);
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSeries_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractseries.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetVisible(self: ?*anyopaque, ) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self));
    }

    pub fn IsVisible(self: ?*anyopaque, ) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self));
    }

    pub fn Opacity(self: ?*anyopaque, ) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self));
    }

    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self), opacity);
    }

    pub fn SetUseOpenGL(self: ?*anyopaque, ) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self));
    }

    pub fn UseOpenGL(self: ?*anyopaque, ) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self));
    }

    pub fn Chart(self: ?*anyopaque, ) QtC.QChart {
        return qtc.QAbstractSeries_Chart(@ptrCast(self));
    }

    pub fn AttachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self), @ptrCast(axis));
    }

    pub fn DetachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self), @ptrCast(axis));
    }

    pub fn AttachedAxes(self: ?*anyopaque, ) []const u8 {
        return qtc.QAbstractSeries_AttachedAxes(@ptrCast(self));
    }

    pub fn Show(self: ?*anyopaque, ) void {
        qtc.QAbstractSeries_Show(@ptrCast(self));
    }

    pub fn Hide(self: ?*anyopaque, ) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self));
    }

    pub fn NameChanged(self: ?*anyopaque, ) void {
        qtc.QAbstractSeries_NameChanged(@ptrCast(self));
    }

    pub fn OnNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_NameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VisibleChanged(self: ?*anyopaque, ) void {
        qtc.QAbstractSeries_VisibleChanged(@ptrCast(self));
    }

    pub fn OnVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn OpacityChanged(self: ?*anyopaque, ) void {
        qtc.QAbstractSeries_OpacityChanged(@ptrCast(self));
    }

    pub fn OnOpacityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn UseOpenGLChanged(self: ?*anyopaque, ) void {
        qtc.QAbstractSeries_UseOpenGLChanged(@ptrCast(self));
    }

    pub fn OnUseOpenGLChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSeries_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractseries.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSeries_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractseries.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self), visible);
    }

    pub fn SetUseOpenGL1(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self), enable);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractSeries_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/abstractseries.html#types
pub const enums = struct {
    pub const SeriesType = enum {
        pub const SeriesTypeLine: i32 = 0;
        pub const SeriesTypeArea: i32 = 1;
        pub const SeriesTypeBar: i32 = 2;
        pub const SeriesTypeStackedBar: i32 = 3;
        pub const SeriesTypePercentBar: i32 = 4;
        pub const SeriesTypePie: i32 = 5;
        pub const SeriesTypeScatter: i32 = 6;
        pub const SeriesTypeSpline: i32 = 7;
        pub const SeriesTypeHorizontalBar: i32 = 8;
        pub const SeriesTypeHorizontalStackedBar: i32 = 9;
        pub const SeriesTypeHorizontalPercentBar: i32 = 10;
        pub const SeriesTypeBoxPlot: i32 = 11;
        pub const SeriesTypeCandlestick: i32 = 12;
    };

};
