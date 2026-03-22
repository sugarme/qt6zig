const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qboxplotseries.html
pub const qboxplotseries = struct {

    /// New constructs a new QBoxPlotSeries object.
    pub fn New() QtC.QBoxPlotSeries {
        return qtc.QBoxPlotSeries_new();
    }


    /// New2 constructs a new QBoxPlotSeries object.
    pub fn New2(parent: ?*anyopaque) QtC.QBoxPlotSeries {
        return qtc.QBoxPlotSeries_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBoxPlotSeries_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxplotseries.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Append(self: ?*anyopaque, box: ?*anyopaque) bool {
        return qtc.QBoxPlotSeries_Append(@ptrCast(self), @ptrCast(box));
    }

    pub fn Remove(self: ?*anyopaque, box: ?*anyopaque) bool {
        return qtc.QBoxPlotSeries_Remove(@ptrCast(self), @ptrCast(box));
    }

    pub fn Take(self: ?*anyopaque, box: ?*anyopaque) bool {
        return qtc.QBoxPlotSeries_Take(@ptrCast(self), @ptrCast(box));
    }

    pub fn Append2(self: ?*anyopaque, boxes: []const u8) bool {
        return qtc.QBoxPlotSeries_Append2(@ptrCast(self), @ptrCast(boxes));
    }

    pub fn Insert(self: ?*anyopaque, index: i32, box: ?*anyopaque) bool {
        return qtc.QBoxPlotSeries_Insert(@ptrCast(self), index, @ptrCast(box));
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QBoxPlotSeries_Count(@ptrCast(self));
    }

    pub fn BoxSets(self: ?*anyopaque, ) []const u8 {
        return qtc.QBoxPlotSeries_BoxSets(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QBoxPlotSeries_Clear(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QBoxPlotSeries_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QBoxPlotSeries_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QBoxPlotSeries_QBaseType(@ptrCast(self));
    }

    pub fn SetBoxOutlineVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QBoxPlotSeries_SetBoxOutlineVisible(@ptrCast(self), visible);
    }

    pub fn BoxOutlineVisible(self: ?*anyopaque, ) bool {
        return qtc.QBoxPlotSeries_BoxOutlineVisible(@ptrCast(self));
    }

    pub fn SetBoxWidth(self: ?*anyopaque, width: f64) void {
        qtc.QBoxPlotSeries_SetBoxWidth(@ptrCast(self), width);
    }

    pub fn BoxWidth(self: ?*anyopaque, ) f64 {
        return qtc.QBoxPlotSeries_BoxWidth(@ptrCast(self));
    }

    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QBoxPlotSeries_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn Brush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QBoxPlotSeries_Brush(@ptrCast(self));
    }

    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QBoxPlotSeries_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    pub fn Pen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QBoxPlotSeries_Pen(@ptrCast(self));
    }

    pub fn Clicked(self: ?*anyopaque, boxset: ?*anyopaque) void {
        qtc.QBoxPlotSeries_Clicked(@ptrCast(self), @ptrCast(boxset));
    }

    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Hovered(self: ?*anyopaque, status: bool, boxset: ?*anyopaque) void {
        qtc.QBoxPlotSeries_Hovered(@ptrCast(self), status, @ptrCast(boxset));
    }

    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool, ?*anyopaque) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_Hovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Pressed(self: ?*anyopaque, boxset: ?*anyopaque) void {
        qtc.QBoxPlotSeries_Pressed(@ptrCast(self), @ptrCast(boxset));
    }

    pub fn OnPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_Pressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Released(self: ?*anyopaque, boxset: ?*anyopaque) void {
        qtc.QBoxPlotSeries_Released(@ptrCast(self), @ptrCast(boxset));
    }

    pub fn OnReleased(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_Released(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DoubleClicked(self: ?*anyopaque, boxset: ?*anyopaque) void {
        qtc.QBoxPlotSeries_DoubleClicked(@ptrCast(self), @ptrCast(boxset));
    }

    pub fn OnDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_DoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CountChanged(self: ?*anyopaque, ) void {
        qtc.QBoxPlotSeries_CountChanged(@ptrCast(self));
    }

    pub fn OnCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_CountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PenChanged(self: ?*anyopaque, ) void {
        qtc.QBoxPlotSeries_PenChanged(@ptrCast(self));
    }

    pub fn OnPenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_PenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BrushChanged(self: ?*anyopaque, ) void {
        qtc.QBoxPlotSeries_BrushChanged(@ptrCast(self));
    }

    pub fn OnBrushChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_BrushChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BoxOutlineVisibilityChanged(self: ?*anyopaque, ) void {
        qtc.QBoxPlotSeries_BoxOutlineVisibilityChanged(@ptrCast(self));
    }

    pub fn OnBoxOutlineVisibilityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_BoxOutlineVisibilityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BoxWidthChanged(self: ?*anyopaque, ) void {
        qtc.QBoxPlotSeries_BoxWidthChanged(@ptrCast(self));
    }

    pub fn OnBoxWidthChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_BoxWidthChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BoxsetsAdded(self: ?*anyopaque, sets: []const u8) void {
        qtc.QBoxPlotSeries_BoxsetsAdded(@ptrCast(self), @ptrCast(sets));
    }

    pub fn OnBoxsetsAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_BoxsetsAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BoxsetsRemoved(self: ?*anyopaque, sets: []const u8) void {
        qtc.QBoxPlotSeries_BoxsetsRemoved(@ptrCast(self), @ptrCast(sets));
    }

    pub fn OnBoxsetsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QBoxPlotSeries_Connect_BoxsetsRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBoxPlotSeries_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxplotseries.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBoxPlotSeries_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxplotseries.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBoxPlotSeries_Delete(@ptrCast(self));
    }
};
