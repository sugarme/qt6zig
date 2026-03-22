const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcandlestickseries.html
pub const qcandlestickseries = struct {

    /// New constructs a new QCandlestickSeries object.
    pub fn New() QtC.QCandlestickSeries {
        return qtc.QCandlestickSeries_new();
    }


    /// New2 constructs a new QCandlestickSeries object.
    pub fn New2(parent: ?*anyopaque) QtC.QCandlestickSeries {
        return qtc.QCandlestickSeries_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCandlestickSeries_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickseries.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Append(self: ?*anyopaque, set: ?*anyopaque) bool {
        return qtc.QCandlestickSeries_Append(@ptrCast(self), @ptrCast(set));
    }

    pub fn Remove(self: ?*anyopaque, set: ?*anyopaque) bool {
        return qtc.QCandlestickSeries_Remove(@ptrCast(self), @ptrCast(set));
    }

    pub fn Append2(self: ?*anyopaque, sets: []const u8) bool {
        return qtc.QCandlestickSeries_Append2(@ptrCast(self), @ptrCast(sets));
    }

    pub fn Remove2(self: ?*anyopaque, sets: []const u8) bool {
        return qtc.QCandlestickSeries_Remove2(@ptrCast(self), @ptrCast(sets));
    }

    pub fn Insert(self: ?*anyopaque, index: i32, set: ?*anyopaque) bool {
        return qtc.QCandlestickSeries_Insert(@ptrCast(self), index, @ptrCast(set));
    }

    pub fn Take(self: ?*anyopaque, set: ?*anyopaque) bool {
        return qtc.QCandlestickSeries_Take(@ptrCast(self), @ptrCast(set));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QCandlestickSeries_Clear(@ptrCast(self));
    }

    pub fn Sets(self: ?*anyopaque, ) []const u8 {
        return qtc.QCandlestickSeries_Sets(@ptrCast(self));
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QCandlestickSeries_Count(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QCandlestickSeries_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QCandlestickSeries_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QCandlestickSeries_QBaseType(@ptrCast(self));
    }

    pub fn SetMaximumColumnWidth(self: ?*anyopaque, maximumColumnWidth: f64) void {
        qtc.QCandlestickSeries_SetMaximumColumnWidth(@ptrCast(self), maximumColumnWidth);
    }

    pub fn MaximumColumnWidth(self: ?*anyopaque, ) f64 {
        return qtc.QCandlestickSeries_MaximumColumnWidth(@ptrCast(self));
    }

    pub fn SetMinimumColumnWidth(self: ?*anyopaque, minimumColumnWidth: f64) void {
        qtc.QCandlestickSeries_SetMinimumColumnWidth(@ptrCast(self), minimumColumnWidth);
    }

    pub fn MinimumColumnWidth(self: ?*anyopaque, ) f64 {
        return qtc.QCandlestickSeries_MinimumColumnWidth(@ptrCast(self));
    }

    pub fn SetBodyWidth(self: ?*anyopaque, bodyWidth: f64) void {
        qtc.QCandlestickSeries_SetBodyWidth(@ptrCast(self), bodyWidth);
    }

    pub fn BodyWidth(self: ?*anyopaque, ) f64 {
        return qtc.QCandlestickSeries_BodyWidth(@ptrCast(self));
    }

    pub fn SetBodyOutlineVisible(self: ?*anyopaque, bodyOutlineVisible: bool) void {
        qtc.QCandlestickSeries_SetBodyOutlineVisible(@ptrCast(self), bodyOutlineVisible);
    }

    pub fn BodyOutlineVisible(self: ?*anyopaque, ) bool {
        return qtc.QCandlestickSeries_BodyOutlineVisible(@ptrCast(self));
    }

    pub fn SetCapsWidth(self: ?*anyopaque, capsWidth: f64) void {
        qtc.QCandlestickSeries_SetCapsWidth(@ptrCast(self), capsWidth);
    }

    pub fn CapsWidth(self: ?*anyopaque, ) f64 {
        return qtc.QCandlestickSeries_CapsWidth(@ptrCast(self));
    }

    pub fn SetCapsVisible(self: ?*anyopaque, capsVisible: bool) void {
        qtc.QCandlestickSeries_SetCapsVisible(@ptrCast(self), capsVisible);
    }

    pub fn CapsVisible(self: ?*anyopaque, ) bool {
        return qtc.QCandlestickSeries_CapsVisible(@ptrCast(self));
    }

    pub fn SetIncreasingColor(self: ?*anyopaque, increasingColor: ?*anyopaque) void {
        qtc.QCandlestickSeries_SetIncreasingColor(@ptrCast(self), @ptrCast(increasingColor));
    }

    pub fn IncreasingColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QCandlestickSeries_IncreasingColor(@ptrCast(self));
    }

    pub fn SetDecreasingColor(self: ?*anyopaque, decreasingColor: ?*anyopaque) void {
        qtc.QCandlestickSeries_SetDecreasingColor(@ptrCast(self), @ptrCast(decreasingColor));
    }

    pub fn DecreasingColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QCandlestickSeries_DecreasingColor(@ptrCast(self));
    }

    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QCandlestickSeries_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn Brush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QCandlestickSeries_Brush(@ptrCast(self));
    }

    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QCandlestickSeries_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    pub fn Pen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QCandlestickSeries_Pen(@ptrCast(self));
    }

    pub fn Clicked(self: ?*anyopaque, set: ?*anyopaque) void {
        qtc.QCandlestickSeries_Clicked(@ptrCast(self), @ptrCast(set));
    }

    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Hovered(self: ?*anyopaque, status: bool, set: ?*anyopaque) void {
        qtc.QCandlestickSeries_Hovered(@ptrCast(self), status, @ptrCast(set));
    }

    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool, ?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_Hovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Pressed(self: ?*anyopaque, set: ?*anyopaque) void {
        qtc.QCandlestickSeries_Pressed(@ptrCast(self), @ptrCast(set));
    }

    pub fn OnPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_Pressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Released(self: ?*anyopaque, set: ?*anyopaque) void {
        qtc.QCandlestickSeries_Released(@ptrCast(self), @ptrCast(set));
    }

    pub fn OnReleased(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_Released(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DoubleClicked(self: ?*anyopaque, set: ?*anyopaque) void {
        qtc.QCandlestickSeries_DoubleClicked(@ptrCast(self), @ptrCast(set));
    }

    pub fn OnDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_DoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CandlestickSetsAdded(self: ?*anyopaque, sets: []const u8) void {
        qtc.QCandlestickSeries_CandlestickSetsAdded(@ptrCast(self), @ptrCast(sets));
    }

    pub fn OnCandlestickSetsAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_CandlestickSetsAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CandlestickSetsRemoved(self: ?*anyopaque, sets: []const u8) void {
        qtc.QCandlestickSeries_CandlestickSetsRemoved(@ptrCast(self), @ptrCast(sets));
    }

    pub fn OnCandlestickSetsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_CandlestickSetsRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CountChanged(self: ?*anyopaque, ) void {
        qtc.QCandlestickSeries_CountChanged(@ptrCast(self));
    }

    pub fn OnCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_CountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MaximumColumnWidthChanged(self: ?*anyopaque, ) void {
        qtc.QCandlestickSeries_MaximumColumnWidthChanged(@ptrCast(self));
    }

    pub fn OnMaximumColumnWidthChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_MaximumColumnWidthChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MinimumColumnWidthChanged(self: ?*anyopaque, ) void {
        qtc.QCandlestickSeries_MinimumColumnWidthChanged(@ptrCast(self));
    }

    pub fn OnMinimumColumnWidthChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_MinimumColumnWidthChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BodyWidthChanged(self: ?*anyopaque, ) void {
        qtc.QCandlestickSeries_BodyWidthChanged(@ptrCast(self));
    }

    pub fn OnBodyWidthChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_BodyWidthChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BodyOutlineVisibilityChanged(self: ?*anyopaque, ) void {
        qtc.QCandlestickSeries_BodyOutlineVisibilityChanged(@ptrCast(self));
    }

    pub fn OnBodyOutlineVisibilityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_BodyOutlineVisibilityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CapsWidthChanged(self: ?*anyopaque, ) void {
        qtc.QCandlestickSeries_CapsWidthChanged(@ptrCast(self));
    }

    pub fn OnCapsWidthChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_CapsWidthChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CapsVisibilityChanged(self: ?*anyopaque, ) void {
        qtc.QCandlestickSeries_CapsVisibilityChanged(@ptrCast(self));
    }

    pub fn OnCapsVisibilityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_CapsVisibilityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn IncreasingColorChanged(self: ?*anyopaque, ) void {
        qtc.QCandlestickSeries_IncreasingColorChanged(@ptrCast(self));
    }

    pub fn OnIncreasingColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_IncreasingColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DecreasingColorChanged(self: ?*anyopaque, ) void {
        qtc.QCandlestickSeries_DecreasingColorChanged(@ptrCast(self));
    }

    pub fn OnDecreasingColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_DecreasingColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BrushChanged(self: ?*anyopaque, ) void {
        qtc.QCandlestickSeries_BrushChanged(@ptrCast(self));
    }

    pub fn OnBrushChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_BrushChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PenChanged(self: ?*anyopaque, ) void {
        qtc.QCandlestickSeries_PenChanged(@ptrCast(self));
    }

    pub fn OnPenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_PenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCandlestickSeries_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickseries.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCandlestickSeries_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickseries.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCandlestickSeries_Delete(@ptrCast(self));
    }
};
