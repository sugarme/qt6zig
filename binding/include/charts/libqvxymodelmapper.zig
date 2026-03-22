const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qvxymodelmapper.html
pub const qvxymodelmapper = struct {

    /// New constructs a new QVXYModelMapper object.
    pub fn New() QtC.QVXYModelMapper {
        return qtc.QVXYModelMapper_new();
    }


    /// New2 constructs a new QVXYModelMapper object.
    pub fn New2(parent: ?*anyopaque) QtC.QVXYModelMapper {
        return qtc.QVXYModelMapper_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVXYModelMapper_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvxymodelmapper.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Model(self: ?*anyopaque, ) QtC.QAbstractItemModel {
        return qtc.QVXYModelMapper_Model(@ptrCast(self));
    }

    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QVXYModelMapper_SetModel(@ptrCast(self), @ptrCast(model));
    }

    pub fn Series(self: ?*anyopaque, ) QtC.QXYSeries {
        return qtc.QVXYModelMapper_Series(@ptrCast(self));
    }

    pub fn SetSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QVXYModelMapper_SetSeries(@ptrCast(self), @ptrCast(series));
    }

    pub fn XColumn(self: ?*anyopaque, ) i32 {
        return qtc.QVXYModelMapper_XColumn(@ptrCast(self));
    }

    pub fn SetXColumn(self: ?*anyopaque, xColumn: i32) void {
        qtc.QVXYModelMapper_SetXColumn(@ptrCast(self), xColumn);
    }

    pub fn YColumn(self: ?*anyopaque, ) i32 {
        return qtc.QVXYModelMapper_YColumn(@ptrCast(self));
    }

    pub fn SetYColumn(self: ?*anyopaque, yColumn: i32) void {
        qtc.QVXYModelMapper_SetYColumn(@ptrCast(self), yColumn);
    }

    pub fn FirstRow(self: ?*anyopaque, ) i32 {
        return qtc.QVXYModelMapper_FirstRow(@ptrCast(self));
    }

    pub fn SetFirstRow(self: ?*anyopaque, firstRow: i32) void {
        qtc.QVXYModelMapper_SetFirstRow(@ptrCast(self), firstRow);
    }

    pub fn RowCount(self: ?*anyopaque, ) i32 {
        return qtc.QVXYModelMapper_RowCount(@ptrCast(self));
    }

    pub fn SetRowCount(self: ?*anyopaque, rowCount: i32) void {
        qtc.QVXYModelMapper_SetRowCount(@ptrCast(self), rowCount);
    }

    pub fn SeriesReplaced(self: ?*anyopaque, ) void {
        qtc.QVXYModelMapper_SeriesReplaced(@ptrCast(self));
    }

    pub fn OnSeriesReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVXYModelMapper_Connect_SeriesReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ModelReplaced(self: ?*anyopaque, ) void {
        qtc.QVXYModelMapper_ModelReplaced(@ptrCast(self));
    }

    pub fn OnModelReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVXYModelMapper_Connect_ModelReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn XColumnChanged(self: ?*anyopaque, ) void {
        qtc.QVXYModelMapper_XColumnChanged(@ptrCast(self));
    }

    pub fn OnXColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVXYModelMapper_Connect_XColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn YColumnChanged(self: ?*anyopaque, ) void {
        qtc.QVXYModelMapper_YColumnChanged(@ptrCast(self));
    }

    pub fn OnYColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVXYModelMapper_Connect_YColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FirstRowChanged(self: ?*anyopaque, ) void {
        qtc.QVXYModelMapper_FirstRowChanged(@ptrCast(self));
    }

    pub fn OnFirstRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVXYModelMapper_Connect_FirstRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RowCountChanged(self: ?*anyopaque, ) void {
        qtc.QVXYModelMapper_RowCountChanged(@ptrCast(self));
    }

    pub fn OnRowCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVXYModelMapper_Connect_RowCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVXYModelMapper_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvxymodelmapper.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVXYModelMapper_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvxymodelmapper.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVXYModelMapper_Delete(@ptrCast(self));
    }
};
