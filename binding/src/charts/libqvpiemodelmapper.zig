const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qvpiemodelmapper.html
pub const qvpiemodelmapper = struct {

    /// New constructs a new QVPieModelMapper object.
    pub fn New() QtC.QVPieModelMapper {
        return qtc.QVPieModelMapper_new();
    }


    /// New2 constructs a new QVPieModelMapper object.
    pub fn New2(parent: ?*anyopaque) QtC.QVPieModelMapper {
        return qtc.QVPieModelMapper_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVPieModelMapper_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvpiemodelmapper.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Model(self: ?*anyopaque, ) QtC.QAbstractItemModel {
        return qtc.QVPieModelMapper_Model(@ptrCast(self));
    }

    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QVPieModelMapper_SetModel(@ptrCast(self), @ptrCast(model));
    }

    pub fn Series(self: ?*anyopaque, ) QtC.QPieSeries {
        return qtc.QVPieModelMapper_Series(@ptrCast(self));
    }

    pub fn SetSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QVPieModelMapper_SetSeries(@ptrCast(self), @ptrCast(series));
    }

    pub fn ValuesColumn(self: ?*anyopaque, ) i32 {
        return qtc.QVPieModelMapper_ValuesColumn(@ptrCast(self));
    }

    pub fn SetValuesColumn(self: ?*anyopaque, valuesColumn: i32) void {
        qtc.QVPieModelMapper_SetValuesColumn(@ptrCast(self), valuesColumn);
    }

    pub fn LabelsColumn(self: ?*anyopaque, ) i32 {
        return qtc.QVPieModelMapper_LabelsColumn(@ptrCast(self));
    }

    pub fn SetLabelsColumn(self: ?*anyopaque, labelsColumn: i32) void {
        qtc.QVPieModelMapper_SetLabelsColumn(@ptrCast(self), labelsColumn);
    }

    pub fn FirstRow(self: ?*anyopaque, ) i32 {
        return qtc.QVPieModelMapper_FirstRow(@ptrCast(self));
    }

    pub fn SetFirstRow(self: ?*anyopaque, firstRow: i32) void {
        qtc.QVPieModelMapper_SetFirstRow(@ptrCast(self), firstRow);
    }

    pub fn RowCount(self: ?*anyopaque, ) i32 {
        return qtc.QVPieModelMapper_RowCount(@ptrCast(self));
    }

    pub fn SetRowCount(self: ?*anyopaque, rowCount: i32) void {
        qtc.QVPieModelMapper_SetRowCount(@ptrCast(self), rowCount);
    }

    pub fn SeriesReplaced(self: ?*anyopaque, ) void {
        qtc.QVPieModelMapper_SeriesReplaced(@ptrCast(self));
    }

    pub fn OnSeriesReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_Connect_SeriesReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ModelReplaced(self: ?*anyopaque, ) void {
        qtc.QVPieModelMapper_ModelReplaced(@ptrCast(self));
    }

    pub fn OnModelReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_Connect_ModelReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ValuesColumnChanged(self: ?*anyopaque, ) void {
        qtc.QVPieModelMapper_ValuesColumnChanged(@ptrCast(self));
    }

    pub fn OnValuesColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_Connect_ValuesColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelsColumnChanged(self: ?*anyopaque, ) void {
        qtc.QVPieModelMapper_LabelsColumnChanged(@ptrCast(self));
    }

    pub fn OnLabelsColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_Connect_LabelsColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FirstRowChanged(self: ?*anyopaque, ) void {
        qtc.QVPieModelMapper_FirstRowChanged(@ptrCast(self));
    }

    pub fn OnFirstRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_Connect_FirstRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RowCountChanged(self: ?*anyopaque, ) void {
        qtc.QVPieModelMapper_RowCountChanged(@ptrCast(self));
    }

    pub fn OnRowCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_Connect_RowCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVPieModelMapper_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvpiemodelmapper.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVPieModelMapper_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvpiemodelmapper.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVPieModelMapper_Delete(@ptrCast(self));
    }
};
