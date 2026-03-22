const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qvboxplotmodelmapper.html
pub const qvboxplotmodelmapper = struct {

    /// New constructs a new QVBoxPlotModelMapper object.
    pub fn New() QtC.QVBoxPlotModelMapper {
        return qtc.QVBoxPlotModelMapper_new();
    }


    /// New2 constructs a new QVBoxPlotModelMapper object.
    pub fn New2(parent: ?*anyopaque) QtC.QVBoxPlotModelMapper {
        return qtc.QVBoxPlotModelMapper_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVBoxPlotModelMapper_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxplotmodelmapper.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Model(self: ?*anyopaque, ) QtC.QAbstractItemModel {
        return qtc.QVBoxPlotModelMapper_Model(@ptrCast(self));
    }

    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_SetModel(@ptrCast(self), @ptrCast(model));
    }

    pub fn Series(self: ?*anyopaque, ) QtC.QBoxPlotSeries {
        return qtc.QVBoxPlotModelMapper_Series(@ptrCast(self));
    }

    pub fn SetSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_SetSeries(@ptrCast(self), @ptrCast(series));
    }

    pub fn FirstBoxSetColumn(self: ?*anyopaque, ) i32 {
        return qtc.QVBoxPlotModelMapper_FirstBoxSetColumn(@ptrCast(self));
    }

    pub fn SetFirstBoxSetColumn(self: ?*anyopaque, firstBoxSetColumn: i32) void {
        qtc.QVBoxPlotModelMapper_SetFirstBoxSetColumn(@ptrCast(self), firstBoxSetColumn);
    }

    pub fn LastBoxSetColumn(self: ?*anyopaque, ) i32 {
        return qtc.QVBoxPlotModelMapper_LastBoxSetColumn(@ptrCast(self));
    }

    pub fn SetLastBoxSetColumn(self: ?*anyopaque, lastBoxSetColumn: i32) void {
        qtc.QVBoxPlotModelMapper_SetLastBoxSetColumn(@ptrCast(self), lastBoxSetColumn);
    }

    pub fn FirstRow(self: ?*anyopaque, ) i32 {
        return qtc.QVBoxPlotModelMapper_FirstRow(@ptrCast(self));
    }

    pub fn SetFirstRow(self: ?*anyopaque, firstRow: i32) void {
        qtc.QVBoxPlotModelMapper_SetFirstRow(@ptrCast(self), firstRow);
    }

    pub fn RowCount(self: ?*anyopaque, ) i32 {
        return qtc.QVBoxPlotModelMapper_RowCount(@ptrCast(self));
    }

    pub fn SetRowCount(self: ?*anyopaque, rowCount: i32) void {
        qtc.QVBoxPlotModelMapper_SetRowCount(@ptrCast(self), rowCount);
    }

    pub fn SeriesReplaced(self: ?*anyopaque, ) void {
        qtc.QVBoxPlotModelMapper_SeriesReplaced(@ptrCast(self));
    }

    pub fn OnSeriesReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_SeriesReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ModelReplaced(self: ?*anyopaque, ) void {
        qtc.QVBoxPlotModelMapper_ModelReplaced(@ptrCast(self));
    }

    pub fn OnModelReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_ModelReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FirstBoxSetColumnChanged(self: ?*anyopaque, ) void {
        qtc.QVBoxPlotModelMapper_FirstBoxSetColumnChanged(@ptrCast(self));
    }

    pub fn OnFirstBoxSetColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_FirstBoxSetColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LastBoxSetColumnChanged(self: ?*anyopaque, ) void {
        qtc.QVBoxPlotModelMapper_LastBoxSetColumnChanged(@ptrCast(self));
    }

    pub fn OnLastBoxSetColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_LastBoxSetColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FirstRowChanged(self: ?*anyopaque, ) void {
        qtc.QVBoxPlotModelMapper_FirstRowChanged(@ptrCast(self));
    }

    pub fn OnFirstRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_FirstRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RowCountChanged(self: ?*anyopaque, ) void {
        qtc.QVBoxPlotModelMapper_RowCountChanged(@ptrCast(self));
    }

    pub fn OnRowCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_RowCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVBoxPlotModelMapper_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxplotmodelmapper.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVBoxPlotModelMapper_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxplotmodelmapper.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_Delete(@ptrCast(self));
    }
};
