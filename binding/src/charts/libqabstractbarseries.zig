const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qabstractbarseries.html
pub const qabstractbarseries = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractBarSeries_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbarseries.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetBarWidth(self: ?*anyopaque, width: f64) void {
        qtc.QAbstractBarSeries_SetBarWidth(@ptrCast(self), width);
    }

    pub fn BarWidth(self: ?*anyopaque, ) f64 {
        return qtc.QAbstractBarSeries_BarWidth(@ptrCast(self));
    }

    pub fn Append(self: ?*anyopaque, set: ?*anyopaque) bool {
        return qtc.QAbstractBarSeries_Append(@ptrCast(self), @ptrCast(set));
    }

    pub fn Remove(self: ?*anyopaque, set: ?*anyopaque) bool {
        return qtc.QAbstractBarSeries_Remove(@ptrCast(self), @ptrCast(set));
    }

    pub fn Take(self: ?*anyopaque, set: ?*anyopaque) bool {
        return qtc.QAbstractBarSeries_Take(@ptrCast(self), @ptrCast(set));
    }

    pub fn Append2(self: ?*anyopaque, sets: []const u8) bool {
        return qtc.QAbstractBarSeries_Append2(@ptrCast(self), @ptrCast(sets));
    }

    pub fn Insert(self: ?*anyopaque, index: i32, set: ?*anyopaque) bool {
        return qtc.QAbstractBarSeries_Insert(@ptrCast(self), index, @ptrCast(set));
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractBarSeries_Count(@ptrCast(self));
    }

    pub fn BarSets(self: ?*anyopaque, ) []const u8 {
        return qtc.QAbstractBarSeries_BarSets(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QAbstractBarSeries_Clear(@ptrCast(self));
    }

    pub fn SetLabelsVisible(self: ?*anyopaque, ) void {
        qtc.QAbstractBarSeries_SetLabelsVisible(@ptrCast(self));
    }

    pub fn IsLabelsVisible(self: ?*anyopaque, ) bool {
        return qtc.QAbstractBarSeries_IsLabelsVisible(@ptrCast(self));
    }

    pub fn SetLabelsFormat(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
qtc.QAbstractBarSeries_SetLabelsFormat(@ptrCast(self), format_str);
    }

    pub fn LabelsFormat(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractBarSeries_LabelsFormat(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbarseries.LabelsFormat: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetLabelsAngle(self: ?*anyopaque, angle: f64) void {
        qtc.QAbstractBarSeries_SetLabelsAngle(@ptrCast(self), angle);
    }

    pub fn LabelsAngle(self: ?*anyopaque, ) f64 {
        return qtc.QAbstractBarSeries_LabelsAngle(@ptrCast(self));
    }

    pub fn SetLabelsPosition(self: ?*anyopaque, position: i32) void {
        qtc.QAbstractBarSeries_SetLabelsPosition(@ptrCast(self), @intCast(position));
    }

    pub fn LabelsPosition(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractBarSeries_LabelsPosition(@ptrCast(self));
    }

    pub fn SetLabelsPrecision(self: ?*anyopaque, precision: i32) void {
        qtc.QAbstractBarSeries_SetLabelsPrecision(@ptrCast(self), precision);
    }

    pub fn LabelsPrecision(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractBarSeries_LabelsPrecision(@ptrCast(self));
    }

    pub fn Clicked(self: ?*anyopaque, index: i32, barset: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Clicked(@ptrCast(self), index, @ptrCast(barset));
    }

    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Hovered(self: ?*anyopaque, status: bool, index: i32, barset: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Hovered(@ptrCast(self), status, index, @ptrCast(barset));
    }

    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Hovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Pressed(self: ?*anyopaque, index: i32, barset: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Pressed(@ptrCast(self), index, @ptrCast(barset));
    }

    pub fn OnPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Pressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Released(self: ?*anyopaque, index: i32, barset: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Released(@ptrCast(self), index, @ptrCast(barset));
    }

    pub fn OnReleased(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Released(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DoubleClicked(self: ?*anyopaque, index: i32, barset: ?*anyopaque) void {
        qtc.QAbstractBarSeries_DoubleClicked(@ptrCast(self), index, @ptrCast(barset));
    }

    pub fn OnDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_DoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CountChanged(self: ?*anyopaque, ) void {
        qtc.QAbstractBarSeries_CountChanged(@ptrCast(self));
    }

    pub fn OnCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_CountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelsVisibleChanged(self: ?*anyopaque, ) void {
        qtc.QAbstractBarSeries_LabelsVisibleChanged(@ptrCast(self));
    }

    pub fn OnLabelsVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsVisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelsFormatChanged(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
qtc.QAbstractBarSeries_LabelsFormatChanged(@ptrCast(self), format_str);
    }

    pub fn OnLabelsFormatChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsFormatChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelsPositionChanged(self: ?*anyopaque, position: i32) void {
        qtc.QAbstractBarSeries_LabelsPositionChanged(@ptrCast(self), @intCast(position));
    }

    pub fn OnLabelsPositionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsPositionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelsAngleChanged(self: ?*anyopaque, angle: f64) void {
        qtc.QAbstractBarSeries_LabelsAngleChanged(@ptrCast(self), angle);
    }

    pub fn OnLabelsAngleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsAngleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelsPrecisionChanged(self: ?*anyopaque, precision: i32) void {
        qtc.QAbstractBarSeries_LabelsPrecisionChanged(@ptrCast(self), precision);
    }

    pub fn OnLabelsPrecisionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsPrecisionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BarsetsAdded(self: ?*anyopaque, sets: []const u8) void {
        qtc.QAbstractBarSeries_BarsetsAdded(@ptrCast(self), @ptrCast(sets));
    }

    pub fn OnBarsetsAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_BarsetsAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BarsetsRemoved(self: ?*anyopaque, sets: []const u8) void {
        qtc.QAbstractBarSeries_BarsetsRemoved(@ptrCast(self), @ptrCast(sets));
    }

    pub fn OnBarsetsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_BarsetsRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractBarSeries_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbarseries.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractBarSeries_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractbarseries.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetLabelsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractBarSeries_SetLabelsVisible1(@ptrCast(self), visible);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractBarSeries_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/abstractbarseries.html#types
pub const enums = struct {
    pub const LabelsPosition = enum {
        pub const LabelsCenter: i32 = 0;
        pub const LabelsInsideEnd: i32 = 1;
        pub const LabelsInsideBase: i32 = 2;
        pub const LabelsOutsideEnd: i32 = 3;
    };

};
