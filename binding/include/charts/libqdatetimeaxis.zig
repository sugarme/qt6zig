const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qdatetimeaxis.html
pub const qdatetimeaxis = struct {

    /// New constructs a new QDateTimeAxis object.
    pub fn New() QtC.QDateTimeAxis {
        return qtc.QDateTimeAxis_new();
    }


    /// New2 constructs a new QDateTimeAxis object.
    pub fn New2(parent: ?*anyopaque) QtC.QDateTimeAxis {
        return qtc.QDateTimeAxis_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateTimeAxis_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeaxis.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QDateTimeAxis_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QDateTimeAxis_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QDateTimeAxis_QBaseType(@ptrCast(self));
    }

    pub fn SetMin(self: ?*anyopaque, min: QtC.QDateTime) void {
        qtc.QDateTimeAxis_SetMin(@ptrCast(self), @ptrCast(min));
    }

    pub fn Min(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QDateTimeAxis_Min(@ptrCast(self));
    }

    pub fn SetMax(self: ?*anyopaque, max: QtC.QDateTime) void {
        qtc.QDateTimeAxis_SetMax(@ptrCast(self), @ptrCast(max));
    }

    pub fn Max(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QDateTimeAxis_Max(@ptrCast(self));
    }

    pub fn SetRange(self: ?*anyopaque, min: QtC.QDateTime, max: QtC.QDateTime) void {
        qtc.QDateTimeAxis_SetRange(@ptrCast(self), @ptrCast(min), @ptrCast(max));
    }

    pub fn SetFormat(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
qtc.QDateTimeAxis_SetFormat(@ptrCast(self), format_str);
    }

    pub fn Format(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateTimeAxis_Format(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeaxis.Format: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTickCount(self: ?*anyopaque, count: i32) void {
        qtc.QDateTimeAxis_SetTickCount(@ptrCast(self), count);
    }

    pub fn TickCount(self: ?*anyopaque, ) i32 {
        return qtc.QDateTimeAxis_TickCount(@ptrCast(self));
    }

    pub fn MinChanged(self: ?*anyopaque, min: QtC.QDateTime) void {
        qtc.QDateTimeAxis_MinChanged(@ptrCast(self), @ptrCast(min));
    }

    pub fn OnMinChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QDateTime) callconv(.c) void) void {
        qtc.QDateTimeAxis_Connect_MinChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MaxChanged(self: ?*anyopaque, max: QtC.QDateTime) void {
        qtc.QDateTimeAxis_MaxChanged(@ptrCast(self), @ptrCast(max));
    }

    pub fn OnMaxChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QDateTime) callconv(.c) void) void {
        qtc.QDateTimeAxis_Connect_MaxChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RangeChanged(self: ?*anyopaque, min: QtC.QDateTime, max: QtC.QDateTime) void {
        qtc.QDateTimeAxis_RangeChanged(@ptrCast(self), @ptrCast(min), @ptrCast(max));
    }

    pub fn OnRangeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QDateTime, QtC.QDateTime) callconv(.c) void) void {
        qtc.QDateTimeAxis_Connect_RangeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FormatChanged(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
qtc.QDateTimeAxis_FormatChanged(@ptrCast(self), format_str);
    }

    pub fn OnFormatChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDateTimeAxis_Connect_FormatChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TickCountChanged(self: ?*anyopaque, tick: i32) void {
        qtc.QDateTimeAxis_TickCountChanged(@ptrCast(self), tick);
    }

    pub fn OnTickCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDateTimeAxis_Connect_TickCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateTimeAxis_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeaxis.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateTimeAxis_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeaxis.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDateTimeAxis_Delete(@ptrCast(self));
    }
};
