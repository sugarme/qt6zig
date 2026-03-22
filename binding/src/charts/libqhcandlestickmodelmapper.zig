const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html
pub const qhcandlestickmodelmapper = struct {

    /// New constructs a new QHCandlestickModelMapper object.
    pub fn New() QtC.QHCandlestickModelMapper {
        return qtc.QHCandlestickModelMapper_new();
    }


    /// New2 constructs a new QHCandlestickModelMapper object.
    pub fn New2(parent: ?*anyopaque) QtC.QHCandlestickModelMapper {
        return qtc.QHCandlestickModelMapper_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHCandlestickModelMapper_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhcandlestickmodelmapper.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Orientation(self: ?*anyopaque, ) i32 {
        return qtc.QHCandlestickModelMapper_Orientation(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnOrientation(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QHCandlestickModelMapper_OnOrientation(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOrientation(self: ?*anyopaque, ) i32 {
        return qtc.QHCandlestickModelMapper_QBaseOrientation(@ptrCast(self));
    }

    pub fn SetTimestampColumn(self: ?*anyopaque, timestampColumn: i32) void {
        qtc.QHCandlestickModelMapper_SetTimestampColumn(@ptrCast(self), timestampColumn);
    }

    pub fn TimestampColumn(self: ?*anyopaque, ) i32 {
        return qtc.QHCandlestickModelMapper_TimestampColumn(@ptrCast(self));
    }

    pub fn SetOpenColumn(self: ?*anyopaque, openColumn: i32) void {
        qtc.QHCandlestickModelMapper_SetOpenColumn(@ptrCast(self), openColumn);
    }

    pub fn OpenColumn(self: ?*anyopaque, ) i32 {
        return qtc.QHCandlestickModelMapper_OpenColumn(@ptrCast(self));
    }

    pub fn SetHighColumn(self: ?*anyopaque, highColumn: i32) void {
        qtc.QHCandlestickModelMapper_SetHighColumn(@ptrCast(self), highColumn);
    }

    pub fn HighColumn(self: ?*anyopaque, ) i32 {
        return qtc.QHCandlestickModelMapper_HighColumn(@ptrCast(self));
    }

    pub fn SetLowColumn(self: ?*anyopaque, lowColumn: i32) void {
        qtc.QHCandlestickModelMapper_SetLowColumn(@ptrCast(self), lowColumn);
    }

    pub fn LowColumn(self: ?*anyopaque, ) i32 {
        return qtc.QHCandlestickModelMapper_LowColumn(@ptrCast(self));
    }

    pub fn SetCloseColumn(self: ?*anyopaque, closeColumn: i32) void {
        qtc.QHCandlestickModelMapper_SetCloseColumn(@ptrCast(self), closeColumn);
    }

    pub fn CloseColumn(self: ?*anyopaque, ) i32 {
        return qtc.QHCandlestickModelMapper_CloseColumn(@ptrCast(self));
    }

    pub fn SetFirstSetRow(self: ?*anyopaque, firstSetRow: i32) void {
        qtc.QHCandlestickModelMapper_SetFirstSetRow(@ptrCast(self), firstSetRow);
    }

    pub fn FirstSetRow(self: ?*anyopaque, ) i32 {
        return qtc.QHCandlestickModelMapper_FirstSetRow(@ptrCast(self));
    }

    pub fn SetLastSetRow(self: ?*anyopaque, lastSetRow: i32) void {
        qtc.QHCandlestickModelMapper_SetLastSetRow(@ptrCast(self), lastSetRow);
    }

    pub fn LastSetRow(self: ?*anyopaque, ) i32 {
        return qtc.QHCandlestickModelMapper_LastSetRow(@ptrCast(self));
    }

    pub fn TimestampColumnChanged(self: ?*anyopaque, ) void {
        qtc.QHCandlestickModelMapper_TimestampColumnChanged(@ptrCast(self));
    }

    pub fn OnTimestampColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_TimestampColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn OpenColumnChanged(self: ?*anyopaque, ) void {
        qtc.QHCandlestickModelMapper_OpenColumnChanged(@ptrCast(self));
    }

    pub fn OnOpenColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_OpenColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn HighColumnChanged(self: ?*anyopaque, ) void {
        qtc.QHCandlestickModelMapper_HighColumnChanged(@ptrCast(self));
    }

    pub fn OnHighColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_HighColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LowColumnChanged(self: ?*anyopaque, ) void {
        qtc.QHCandlestickModelMapper_LowColumnChanged(@ptrCast(self));
    }

    pub fn OnLowColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_LowColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CloseColumnChanged(self: ?*anyopaque, ) void {
        qtc.QHCandlestickModelMapper_CloseColumnChanged(@ptrCast(self));
    }

    pub fn OnCloseColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_CloseColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FirstSetRowChanged(self: ?*anyopaque, ) void {
        qtc.QHCandlestickModelMapper_FirstSetRowChanged(@ptrCast(self));
    }

    pub fn OnFirstSetRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_FirstSetRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LastSetRowChanged(self: ?*anyopaque, ) void {
        qtc.QHCandlestickModelMapper_LastSetRowChanged(@ptrCast(self));
    }

    pub fn OnLastSetRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHCandlestickModelMapper_Connect_LastSetRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHCandlestickModelMapper_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhcandlestickmodelmapper.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHCandlestickModelMapper_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhcandlestickmodelmapper.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHCandlestickModelMapper_Delete(@ptrCast(self));
    }
};
