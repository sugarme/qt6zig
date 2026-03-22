const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcandlestickmodelmapper.html
pub const qcandlestickmodelmapper = struct {

    /// New constructs a new QCandlestickModelMapper object.
    pub fn New() QtC.QCandlestickModelMapper {
        return qtc.QCandlestickModelMapper_new();
    }


    /// New2 constructs a new QCandlestickModelMapper object.
    pub fn New2(parent: ?*anyopaque) QtC.QCandlestickModelMapper {
        return qtc.QCandlestickModelMapper_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCandlestickModelMapper_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickmodelmapper.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_SetModel(@ptrCast(self), @ptrCast(model));
    }

    pub fn Model(self: ?*anyopaque, ) QtC.QAbstractItemModel {
        return qtc.QCandlestickModelMapper_Model(@ptrCast(self));
    }

    pub fn SetSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_SetSeries(@ptrCast(self), @ptrCast(series));
    }

    pub fn Series(self: ?*anyopaque, ) QtC.QCandlestickSeries {
        return qtc.QCandlestickModelMapper_Series(@ptrCast(self));
    }

    pub fn Orientation(self: ?*anyopaque, ) i32 {
        return qtc.QCandlestickModelMapper_Orientation(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnOrientation(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnOrientation(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOrientation(self: ?*anyopaque, ) i32 {
        return qtc.QCandlestickModelMapper_QBaseOrientation(@ptrCast(self));
    }

    pub fn ModelReplaced(self: ?*anyopaque, ) void {
        qtc.QCandlestickModelMapper_ModelReplaced(@ptrCast(self));
    }

    pub fn OnModelReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_Connect_ModelReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SeriesReplaced(self: ?*anyopaque, ) void {
        qtc.QCandlestickModelMapper_SeriesReplaced(@ptrCast(self));
    }

    pub fn OnSeriesReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_Connect_SeriesReplaced(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SetTimestamp(self: ?*anyopaque, timestamp: i32) void {
        qtc.QCandlestickModelMapper_SetTimestamp(@ptrCast(self), timestamp);
    }

    /// Allows for overriding the related default method
    pub fn OnSetTimestamp(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetTimestamp(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: i32) void {
        qtc.QCandlestickModelMapper_QBaseSetTimestamp(@ptrCast(self), timestamp);
    }

    pub fn Timestamp(self: ?*anyopaque, ) i32 {
        return qtc.QCandlestickModelMapper_Timestamp(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnTimestamp(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnTimestamp(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimestamp(self: ?*anyopaque, ) i32 {
        return qtc.QCandlestickModelMapper_QBaseTimestamp(@ptrCast(self));
    }

    pub fn SetOpen(self: ?*anyopaque, open: i32) void {
        qtc.QCandlestickModelMapper_SetOpen(@ptrCast(self), open);
    }

    /// Allows for overriding the related default method
    pub fn OnSetOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetOpen(self: ?*anyopaque, open: i32) void {
        qtc.QCandlestickModelMapper_QBaseSetOpen(@ptrCast(self), open);
    }

    pub fn Open(self: ?*anyopaque, ) i32 {
        return qtc.QCandlestickModelMapper_Open(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpen(self: ?*anyopaque, ) i32 {
        return qtc.QCandlestickModelMapper_QBaseOpen(@ptrCast(self));
    }

    pub fn SetHigh(self: ?*anyopaque, high: i32) void {
        qtc.QCandlestickModelMapper_SetHigh(@ptrCast(self), high);
    }

    /// Allows for overriding the related default method
    pub fn OnSetHigh(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetHigh(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetHigh(self: ?*anyopaque, high: i32) void {
        qtc.QCandlestickModelMapper_QBaseSetHigh(@ptrCast(self), high);
    }

    pub fn High(self: ?*anyopaque, ) i32 {
        return qtc.QCandlestickModelMapper_High(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHigh(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnHigh(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHigh(self: ?*anyopaque, ) i32 {
        return qtc.QCandlestickModelMapper_QBaseHigh(@ptrCast(self));
    }

    pub fn SetLow(self: ?*anyopaque, low: i32) void {
        qtc.QCandlestickModelMapper_SetLow(@ptrCast(self), low);
    }

    /// Allows for overriding the related default method
    pub fn OnSetLow(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetLow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetLow(self: ?*anyopaque, low: i32) void {
        qtc.QCandlestickModelMapper_QBaseSetLow(@ptrCast(self), low);
    }

    pub fn Low(self: ?*anyopaque, ) i32 {
        return qtc.QCandlestickModelMapper_Low(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnLow(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnLow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLow(self: ?*anyopaque, ) i32 {
        return qtc.QCandlestickModelMapper_QBaseLow(@ptrCast(self));
    }

    pub fn SetClose(self: ?*anyopaque, close: i32) void {
        qtc.QCandlestickModelMapper_SetClose(@ptrCast(self), close);
    }

    /// Allows for overriding the related default method
    pub fn OnSetClose(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetClose(self: ?*anyopaque, close: i32) void {
        qtc.QCandlestickModelMapper_QBaseSetClose(@ptrCast(self), close);
    }

    pub fn Close(self: ?*anyopaque, ) i32 {
        return qtc.QCandlestickModelMapper_Close(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClose(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClose(self: ?*anyopaque, ) i32 {
        return qtc.QCandlestickModelMapper_QBaseClose(@ptrCast(self));
    }

    pub fn SetFirstSetSection(self: ?*anyopaque, firstSetSection: i32) void {
        qtc.QCandlestickModelMapper_SetFirstSetSection(@ptrCast(self), firstSetSection);
    }

    /// Allows for overriding the related default method
    pub fn OnSetFirstSetSection(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetFirstSetSection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetFirstSetSection(self: ?*anyopaque, firstSetSection: i32) void {
        qtc.QCandlestickModelMapper_QBaseSetFirstSetSection(@ptrCast(self), firstSetSection);
    }

    pub fn FirstSetSection(self: ?*anyopaque, ) i32 {
        return qtc.QCandlestickModelMapper_FirstSetSection(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnFirstSetSection(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnFirstSetSection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFirstSetSection(self: ?*anyopaque, ) i32 {
        return qtc.QCandlestickModelMapper_QBaseFirstSetSection(@ptrCast(self));
    }

    pub fn SetLastSetSection(self: ?*anyopaque, lastSetSection: i32) void {
        qtc.QCandlestickModelMapper_SetLastSetSection(@ptrCast(self), lastSetSection);
    }

    /// Allows for overriding the related default method
    pub fn OnSetLastSetSection(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCandlestickModelMapper_OnSetLastSetSection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetLastSetSection(self: ?*anyopaque, lastSetSection: i32) void {
        qtc.QCandlestickModelMapper_QBaseSetLastSetSection(@ptrCast(self), lastSetSection);
    }

    pub fn LastSetSection(self: ?*anyopaque, ) i32 {
        return qtc.QCandlestickModelMapper_LastSetSection(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnLastSetSection(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QCandlestickModelMapper_OnLastSetSection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLastSetSection(self: ?*anyopaque, ) i32 {
        return qtc.QCandlestickModelMapper_QBaseLastSetSection(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCandlestickModelMapper_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickmodelmapper.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCandlestickModelMapper_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickmodelmapper.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCandlestickModelMapper_Delete(@ptrCast(self));
    }
};
