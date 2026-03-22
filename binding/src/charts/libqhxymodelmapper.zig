const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qhxymodelmapper.html
pub const qhxymodelmapper = struct {

    /// New constructs a new QHXYModelMapper object.
    pub fn New() QtC.QHXYModelMapper {
        return qtc.QHXYModelMapper_new();
    }


    /// New2 constructs a new QHXYModelMapper object.
    pub fn New2(parent: ?*anyopaque) QtC.QHXYModelMapper {
        return qtc.QHXYModelMapper_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHXYModelMapper_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhxymodelmapper.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Model(self: ?*anyopaque, ) QtC.QAbstractItemModel {
        return qtc.QHXYModelMapper_Model(@ptrCast(self));
    }

    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QHXYModelMapper_SetModel(@ptrCast(self), @ptrCast(model));
    }

    pub fn Series(self: ?*anyopaque, ) QtC.QXYSeries {
        return qtc.QHXYModelMapper_Series(@ptrCast(self));
    }

    pub fn SetSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QHXYModelMapper_SetSeries(@ptrCast(self), @ptrCast(series));
    }

    pub fn XRow(self: ?*anyopaque, ) i32 {
        return qtc.QHXYModelMapper_XRow(@ptrCast(self));
    }

    pub fn SetXRow(self: ?*anyopaque, xRow: i32) void {
        qtc.QHXYModelMapper_SetXRow(@ptrCast(self), xRow);
    }

    pub fn YRow(self: ?*anyopaque, ) i32 {
        return qtc.QHXYModelMapper_YRow(@ptrCast(self));
    }

    pub fn SetYRow(self: ?*anyopaque, yRow: i32) void {
        qtc.QHXYModelMapper_SetYRow(@ptrCast(self), yRow);
    }

    pub fn FirstColumn(self: ?*anyopaque, ) i32 {
        return qtc.QHXYModelMapper_FirstColumn(@ptrCast(self));
    }

    pub fn SetFirstColumn(self: ?*anyopaque, firstColumn: i32) void {
        qtc.QHXYModelMapper_SetFirstColumn(@ptrCast(self), firstColumn);
    }

    pub fn ColumnCount(self: ?*anyopaque, ) i32 {
        return qtc.QHXYModelMapper_ColumnCount(@ptrCast(self));
    }

    pub fn SetColumnCount(self: ?*anyopaque, columnCount: i32) void {
        qtc.QHXYModelMapper_SetColumnCount(@ptrCast(self), columnCount);
    }

    pub fn SeriesReplaced(self: ?*anyopaque, ) void {
        qtc.QHXYModelMapper_SeriesReplaced(@ptrCast(self));
    }

    pub fn OnSeriesReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHXYModelMapper_Connect_SeriesReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ModelReplaced(self: ?*anyopaque, ) void {
        qtc.QHXYModelMapper_ModelReplaced(@ptrCast(self));
    }

    pub fn OnModelReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHXYModelMapper_Connect_ModelReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn XRowChanged(self: ?*anyopaque, ) void {
        qtc.QHXYModelMapper_XRowChanged(@ptrCast(self));
    }

    pub fn OnXRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHXYModelMapper_Connect_XRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn YRowChanged(self: ?*anyopaque, ) void {
        qtc.QHXYModelMapper_YRowChanged(@ptrCast(self));
    }

    pub fn OnYRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHXYModelMapper_Connect_YRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FirstColumnChanged(self: ?*anyopaque, ) void {
        qtc.QHXYModelMapper_FirstColumnChanged(@ptrCast(self));
    }

    pub fn OnFirstColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHXYModelMapper_Connect_FirstColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ColumnCountChanged(self: ?*anyopaque, ) void {
        qtc.QHXYModelMapper_ColumnCountChanged(@ptrCast(self));
    }

    pub fn OnColumnCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHXYModelMapper_Connect_ColumnCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHXYModelMapper_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhxymodelmapper.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHXYModelMapper_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhxymodelmapper.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHXYModelMapper_Delete(@ptrCast(self));
    }
};
