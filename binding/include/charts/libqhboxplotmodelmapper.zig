const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qhboxplotmodelmapper.html
pub const qhboxplotmodelmapper = struct {

    /// New constructs a new QHBoxPlotModelMapper object.
    pub fn New() QtC.QHBoxPlotModelMapper {
        return qtc.QHBoxPlotModelMapper_new();
    }


    /// New2 constructs a new QHBoxPlotModelMapper object.
    pub fn New2(parent: ?*anyopaque) QtC.QHBoxPlotModelMapper {
        return qtc.QHBoxPlotModelMapper_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHBoxPlotModelMapper_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhboxplotmodelmapper.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Model(self: ?*anyopaque, ) QtC.QAbstractItemModel {
        return qtc.QHBoxPlotModelMapper_Model(@ptrCast(self));
    }

    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_SetModel(@ptrCast(self), @ptrCast(model));
    }

    pub fn Series(self: ?*anyopaque, ) QtC.QBoxPlotSeries {
        return qtc.QHBoxPlotModelMapper_Series(@ptrCast(self));
    }

    pub fn SetSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_SetSeries(@ptrCast(self), @ptrCast(series));
    }

    pub fn FirstBoxSetRow(self: ?*anyopaque, ) i32 {
        return qtc.QHBoxPlotModelMapper_FirstBoxSetRow(@ptrCast(self));
    }

    pub fn SetFirstBoxSetRow(self: ?*anyopaque, firstBoxSetRow: i32) void {
        qtc.QHBoxPlotModelMapper_SetFirstBoxSetRow(@ptrCast(self), firstBoxSetRow);
    }

    pub fn LastBoxSetRow(self: ?*anyopaque, ) i32 {
        return qtc.QHBoxPlotModelMapper_LastBoxSetRow(@ptrCast(self));
    }

    pub fn SetLastBoxSetRow(self: ?*anyopaque, lastBoxSetRow: i32) void {
        qtc.QHBoxPlotModelMapper_SetLastBoxSetRow(@ptrCast(self), lastBoxSetRow);
    }

    pub fn FirstColumn(self: ?*anyopaque, ) i32 {
        return qtc.QHBoxPlotModelMapper_FirstColumn(@ptrCast(self));
    }

    pub fn SetFirstColumn(self: ?*anyopaque, firstColumn: i32) void {
        qtc.QHBoxPlotModelMapper_SetFirstColumn(@ptrCast(self), firstColumn);
    }

    pub fn ColumnCount(self: ?*anyopaque, ) i32 {
        return qtc.QHBoxPlotModelMapper_ColumnCount(@ptrCast(self));
    }

    pub fn SetColumnCount(self: ?*anyopaque, rowCount: i32) void {
        qtc.QHBoxPlotModelMapper_SetColumnCount(@ptrCast(self), rowCount);
    }

    pub fn SeriesReplaced(self: ?*anyopaque, ) void {
        qtc.QHBoxPlotModelMapper_SeriesReplaced(@ptrCast(self));
    }

    pub fn OnSeriesReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_Connect_SeriesReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ModelReplaced(self: ?*anyopaque, ) void {
        qtc.QHBoxPlotModelMapper_ModelReplaced(@ptrCast(self));
    }

    pub fn OnModelReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_Connect_ModelReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FirstBoxSetRowChanged(self: ?*anyopaque, ) void {
        qtc.QHBoxPlotModelMapper_FirstBoxSetRowChanged(@ptrCast(self));
    }

    pub fn OnFirstBoxSetRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_Connect_FirstBoxSetRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LastBoxSetRowChanged(self: ?*anyopaque, ) void {
        qtc.QHBoxPlotModelMapper_LastBoxSetRowChanged(@ptrCast(self));
    }

    pub fn OnLastBoxSetRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_Connect_LastBoxSetRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FirstColumnChanged(self: ?*anyopaque, ) void {
        qtc.QHBoxPlotModelMapper_FirstColumnChanged(@ptrCast(self));
    }

    pub fn OnFirstColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_Connect_FirstColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ColumnCountChanged(self: ?*anyopaque, ) void {
        qtc.QHBoxPlotModelMapper_ColumnCountChanged(@ptrCast(self));
    }

    pub fn OnColumnCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxPlotModelMapper_Connect_ColumnCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHBoxPlotModelMapper_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhboxplotmodelmapper.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHBoxPlotModelMapper_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhboxplotmodelmapper.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHBoxPlotModelMapper_Delete(@ptrCast(self));
    }
};
