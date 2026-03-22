const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qvcandlestickmodelmapper.html
pub const qvcandlestickmodelmapper = struct {

    /// New constructs a new QVCandlestickModelMapper object.
    pub fn New() QtC.QVCandlestickModelMapper {
        return qtc.QVCandlestickModelMapper_new();
    }


    /// New2 constructs a new QVCandlestickModelMapper object.
    pub fn New2(parent: ?*anyopaque) QtC.QVCandlestickModelMapper {
        return qtc.QVCandlestickModelMapper_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVCandlestickModelMapper_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvcandlestickmodelmapper.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Orientation(self: ?*anyopaque, ) i32 {
        return qtc.QVCandlestickModelMapper_Orientation(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnOrientation(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QVCandlestickModelMapper_OnOrientation(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOrientation(self: ?*anyopaque, ) i32 {
        return qtc.QVCandlestickModelMapper_QBaseOrientation(@ptrCast(self));
    }

    pub fn SetTimestampRow(self: ?*anyopaque, timestampRow: i32) void {
        qtc.QVCandlestickModelMapper_SetTimestampRow(@ptrCast(self), timestampRow);
    }

    pub fn TimestampRow(self: ?*anyopaque, ) i32 {
        return qtc.QVCandlestickModelMapper_TimestampRow(@ptrCast(self));
    }

    pub fn SetOpenRow(self: ?*anyopaque, openRow: i32) void {
        qtc.QVCandlestickModelMapper_SetOpenRow(@ptrCast(self), openRow);
    }

    pub fn OpenRow(self: ?*anyopaque, ) i32 {
        return qtc.QVCandlestickModelMapper_OpenRow(@ptrCast(self));
    }

    pub fn SetHighRow(self: ?*anyopaque, highRow: i32) void {
        qtc.QVCandlestickModelMapper_SetHighRow(@ptrCast(self), highRow);
    }

    pub fn HighRow(self: ?*anyopaque, ) i32 {
        return qtc.QVCandlestickModelMapper_HighRow(@ptrCast(self));
    }

    pub fn SetLowRow(self: ?*anyopaque, lowRow: i32) void {
        qtc.QVCandlestickModelMapper_SetLowRow(@ptrCast(self), lowRow);
    }

    pub fn LowRow(self: ?*anyopaque, ) i32 {
        return qtc.QVCandlestickModelMapper_LowRow(@ptrCast(self));
    }

    pub fn SetCloseRow(self: ?*anyopaque, closeRow: i32) void {
        qtc.QVCandlestickModelMapper_SetCloseRow(@ptrCast(self), closeRow);
    }

    pub fn CloseRow(self: ?*anyopaque, ) i32 {
        return qtc.QVCandlestickModelMapper_CloseRow(@ptrCast(self));
    }

    pub fn SetFirstSetColumn(self: ?*anyopaque, firstSetColumn: i32) void {
        qtc.QVCandlestickModelMapper_SetFirstSetColumn(@ptrCast(self), firstSetColumn);
    }

    pub fn FirstSetColumn(self: ?*anyopaque, ) i32 {
        return qtc.QVCandlestickModelMapper_FirstSetColumn(@ptrCast(self));
    }

    pub fn SetLastSetColumn(self: ?*anyopaque, lastSetColumn: i32) void {
        qtc.QVCandlestickModelMapper_SetLastSetColumn(@ptrCast(self), lastSetColumn);
    }

    pub fn LastSetColumn(self: ?*anyopaque, ) i32 {
        return qtc.QVCandlestickModelMapper_LastSetColumn(@ptrCast(self));
    }

    pub fn TimestampRowChanged(self: ?*anyopaque, ) void {
        qtc.QVCandlestickModelMapper_TimestampRowChanged(@ptrCast(self));
    }

    pub fn OnTimestampRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_TimestampRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn OpenRowChanged(self: ?*anyopaque, ) void {
        qtc.QVCandlestickModelMapper_OpenRowChanged(@ptrCast(self));
    }

    pub fn OnOpenRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_OpenRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn HighRowChanged(self: ?*anyopaque, ) void {
        qtc.QVCandlestickModelMapper_HighRowChanged(@ptrCast(self));
    }

    pub fn OnHighRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_HighRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LowRowChanged(self: ?*anyopaque, ) void {
        qtc.QVCandlestickModelMapper_LowRowChanged(@ptrCast(self));
    }

    pub fn OnLowRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_LowRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CloseRowChanged(self: ?*anyopaque, ) void {
        qtc.QVCandlestickModelMapper_CloseRowChanged(@ptrCast(self));
    }

    pub fn OnCloseRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_CloseRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FirstSetColumnChanged(self: ?*anyopaque, ) void {
        qtc.QVCandlestickModelMapper_FirstSetColumnChanged(@ptrCast(self));
    }

    pub fn OnFirstSetColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_FirstSetColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LastSetColumnChanged(self: ?*anyopaque, ) void {
        qtc.QVCandlestickModelMapper_LastSetColumnChanged(@ptrCast(self));
    }

    pub fn OnLastSetColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVCandlestickModelMapper_Connect_LastSetColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVCandlestickModelMapper_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvcandlestickmodelmapper.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVCandlestickModelMapper_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvcandlestickmodelmapper.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVCandlestickModelMapper_Delete(@ptrCast(self));
    }
};
