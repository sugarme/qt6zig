const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qhbarmodelmapper.html
pub const qhbarmodelmapper = struct {

    /// New constructs a new QHBarModelMapper object.
    pub fn New() QtC.QHBarModelMapper {
        return qtc.QHBarModelMapper_new();
    }


    /// New2 constructs a new QHBarModelMapper object.
    pub fn New2(parent: ?*anyopaque) QtC.QHBarModelMapper {
        return qtc.QHBarModelMapper_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHBarModelMapper_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhbarmodelmapper.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Model(self: ?*anyopaque, ) QtC.QAbstractItemModel {
        return qtc.QHBarModelMapper_Model(@ptrCast(self));
    }

    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QHBarModelMapper_SetModel(@ptrCast(self), @ptrCast(model));
    }

    pub fn Series(self: ?*anyopaque, ) QtC.QAbstractBarSeries {
        return qtc.QHBarModelMapper_Series(@ptrCast(self));
    }

    pub fn SetSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QHBarModelMapper_SetSeries(@ptrCast(self), @ptrCast(series));
    }

    pub fn FirstBarSetRow(self: ?*anyopaque, ) i32 {
        return qtc.QHBarModelMapper_FirstBarSetRow(@ptrCast(self));
    }

    pub fn SetFirstBarSetRow(self: ?*anyopaque, firstBarSetRow: i32) void {
        qtc.QHBarModelMapper_SetFirstBarSetRow(@ptrCast(self), firstBarSetRow);
    }

    pub fn LastBarSetRow(self: ?*anyopaque, ) i32 {
        return qtc.QHBarModelMapper_LastBarSetRow(@ptrCast(self));
    }

    pub fn SetLastBarSetRow(self: ?*anyopaque, lastBarSetRow: i32) void {
        qtc.QHBarModelMapper_SetLastBarSetRow(@ptrCast(self), lastBarSetRow);
    }

    pub fn FirstColumn(self: ?*anyopaque, ) i32 {
        return qtc.QHBarModelMapper_FirstColumn(@ptrCast(self));
    }

    pub fn SetFirstColumn(self: ?*anyopaque, firstColumn: i32) void {
        qtc.QHBarModelMapper_SetFirstColumn(@ptrCast(self), firstColumn);
    }

    pub fn ColumnCount(self: ?*anyopaque, ) i32 {
        return qtc.QHBarModelMapper_ColumnCount(@ptrCast(self));
    }

    pub fn SetColumnCount(self: ?*anyopaque, columnCount: i32) void {
        qtc.QHBarModelMapper_SetColumnCount(@ptrCast(self), columnCount);
    }

    pub fn SeriesReplaced(self: ?*anyopaque, ) void {
        qtc.QHBarModelMapper_SeriesReplaced(@ptrCast(self));
    }

    pub fn OnSeriesReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHBarModelMapper_Connect_SeriesReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ModelReplaced(self: ?*anyopaque, ) void {
        qtc.QHBarModelMapper_ModelReplaced(@ptrCast(self));
    }

    pub fn OnModelReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHBarModelMapper_Connect_ModelReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FirstBarSetRowChanged(self: ?*anyopaque, ) void {
        qtc.QHBarModelMapper_FirstBarSetRowChanged(@ptrCast(self));
    }

    pub fn OnFirstBarSetRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHBarModelMapper_Connect_FirstBarSetRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LastBarSetRowChanged(self: ?*anyopaque, ) void {
        qtc.QHBarModelMapper_LastBarSetRowChanged(@ptrCast(self));
    }

    pub fn OnLastBarSetRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHBarModelMapper_Connect_LastBarSetRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FirstColumnChanged(self: ?*anyopaque, ) void {
        qtc.QHBarModelMapper_FirstColumnChanged(@ptrCast(self));
    }

    pub fn OnFirstColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHBarModelMapper_Connect_FirstColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ColumnCountChanged(self: ?*anyopaque, ) void {
        qtc.QHBarModelMapper_ColumnCountChanged(@ptrCast(self));
    }

    pub fn OnColumnCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHBarModelMapper_Connect_ColumnCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHBarModelMapper_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhbarmodelmapper.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHBarModelMapper_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhbarmodelmapper.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHBarModelMapper_Delete(@ptrCast(self));
    }
};
