const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qhpiemodelmapper.html
pub const qhpiemodelmapper = struct {

    /// New constructs a new QHPieModelMapper object.
    pub fn New() QtC.QHPieModelMapper {
        return qtc.QHPieModelMapper_new();
    }


    /// New2 constructs a new QHPieModelMapper object.
    pub fn New2(parent: ?*anyopaque) QtC.QHPieModelMapper {
        return qtc.QHPieModelMapper_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHPieModelMapper_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhpiemodelmapper.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Model(self: ?*anyopaque, ) QtC.QAbstractItemModel {
        return qtc.QHPieModelMapper_Model(@ptrCast(self));
    }

    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QHPieModelMapper_SetModel(@ptrCast(self), @ptrCast(model));
    }

    pub fn Series(self: ?*anyopaque, ) QtC.QPieSeries {
        return qtc.QHPieModelMapper_Series(@ptrCast(self));
    }

    pub fn SetSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QHPieModelMapper_SetSeries(@ptrCast(self), @ptrCast(series));
    }

    pub fn ValuesRow(self: ?*anyopaque, ) i32 {
        return qtc.QHPieModelMapper_ValuesRow(@ptrCast(self));
    }

    pub fn SetValuesRow(self: ?*anyopaque, valuesRow: i32) void {
        qtc.QHPieModelMapper_SetValuesRow(@ptrCast(self), valuesRow);
    }

    pub fn LabelsRow(self: ?*anyopaque, ) i32 {
        return qtc.QHPieModelMapper_LabelsRow(@ptrCast(self));
    }

    pub fn SetLabelsRow(self: ?*anyopaque, labelsRow: i32) void {
        qtc.QHPieModelMapper_SetLabelsRow(@ptrCast(self), labelsRow);
    }

    pub fn FirstColumn(self: ?*anyopaque, ) i32 {
        return qtc.QHPieModelMapper_FirstColumn(@ptrCast(self));
    }

    pub fn SetFirstColumn(self: ?*anyopaque, firstColumn: i32) void {
        qtc.QHPieModelMapper_SetFirstColumn(@ptrCast(self), firstColumn);
    }

    pub fn ColumnCount(self: ?*anyopaque, ) i32 {
        return qtc.QHPieModelMapper_ColumnCount(@ptrCast(self));
    }

    pub fn SetColumnCount(self: ?*anyopaque, columnCount: i32) void {
        qtc.QHPieModelMapper_SetColumnCount(@ptrCast(self), columnCount);
    }

    pub fn SeriesReplaced(self: ?*anyopaque, ) void {
        qtc.QHPieModelMapper_SeriesReplaced(@ptrCast(self));
    }

    pub fn OnSeriesReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHPieModelMapper_Connect_SeriesReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ModelReplaced(self: ?*anyopaque, ) void {
        qtc.QHPieModelMapper_ModelReplaced(@ptrCast(self));
    }

    pub fn OnModelReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHPieModelMapper_Connect_ModelReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ValuesRowChanged(self: ?*anyopaque, ) void {
        qtc.QHPieModelMapper_ValuesRowChanged(@ptrCast(self));
    }

    pub fn OnValuesRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHPieModelMapper_Connect_ValuesRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelsRowChanged(self: ?*anyopaque, ) void {
        qtc.QHPieModelMapper_LabelsRowChanged(@ptrCast(self));
    }

    pub fn OnLabelsRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHPieModelMapper_Connect_LabelsRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FirstColumnChanged(self: ?*anyopaque, ) void {
        qtc.QHPieModelMapper_FirstColumnChanged(@ptrCast(self));
    }

    pub fn OnFirstColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHPieModelMapper_Connect_FirstColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ColumnCountChanged(self: ?*anyopaque, ) void {
        qtc.QHPieModelMapper_ColumnCountChanged(@ptrCast(self));
    }

    pub fn OnColumnCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHPieModelMapper_Connect_ColumnCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHPieModelMapper_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhpiemodelmapper.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHPieModelMapper_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhpiemodelmapper.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHPieModelMapper_Delete(@ptrCast(self));
    }
};
