const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpieseries.html
pub const qpieseries = struct {

    /// New constructs a new QPieSeries object.
    pub fn New() QtC.QPieSeries {
        return qtc.QPieSeries_new();
    }


    /// New2 constructs a new QPieSeries object.
    pub fn New2(parent: ?*anyopaque) QtC.QPieSeries {
        return qtc.QPieSeries_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPieSeries_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieseries.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QPieSeries_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QPieSeries_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QPieSeries_QBaseType(@ptrCast(self));
    }

    pub fn Append(self: ?*anyopaque, slice: ?*anyopaque) bool {
        return qtc.QPieSeries_Append(@ptrCast(self), @ptrCast(slice));
    }

    pub fn Append2(self: ?*anyopaque, slices: []const u8) bool {
        return qtc.QPieSeries_Append2(@ptrCast(self), @ptrCast(slices));
    }

    pub fn OperatorShiftLeft(self: ?*anyopaque, slice: ?*anyopaque) QtC.QPieSeries {
        return qtc.QPieSeries_OperatorShiftLeft(@ptrCast(self), @ptrCast(slice));
    }

    pub fn Append3(self: ?*anyopaque, label: []const u8, value: f64) QtC.QPieSlice {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QPieSeries_Append3(@ptrCast(self), label_str, value);
    }

    pub fn Insert(self: ?*anyopaque, index: i32, slice: ?*anyopaque) bool {
        return qtc.QPieSeries_Insert(@ptrCast(self), index, @ptrCast(slice));
    }

    pub fn Remove(self: ?*anyopaque, slice: ?*anyopaque) bool {
        return qtc.QPieSeries_Remove(@ptrCast(self), @ptrCast(slice));
    }

    pub fn Take(self: ?*anyopaque, slice: ?*anyopaque) bool {
        return qtc.QPieSeries_Take(@ptrCast(self), @ptrCast(slice));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QPieSeries_Clear(@ptrCast(self));
    }

    pub fn Slices(self: ?*anyopaque, ) []const u8 {
        return qtc.QPieSeries_Slices(@ptrCast(self));
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QPieSeries_Count(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QPieSeries_IsEmpty(@ptrCast(self));
    }

    pub fn Sum(self: ?*anyopaque, ) f64 {
        return qtc.QPieSeries_Sum(@ptrCast(self));
    }

    pub fn SetHoleSize(self: ?*anyopaque, holeSize: f64) void {
        qtc.QPieSeries_SetHoleSize(@ptrCast(self), holeSize);
    }

    pub fn HoleSize(self: ?*anyopaque, ) f64 {
        return qtc.QPieSeries_HoleSize(@ptrCast(self));
    }

    pub fn SetHorizontalPosition(self: ?*anyopaque, relativePosition: f64) void {
        qtc.QPieSeries_SetHorizontalPosition(@ptrCast(self), relativePosition);
    }

    pub fn HorizontalPosition(self: ?*anyopaque, ) f64 {
        return qtc.QPieSeries_HorizontalPosition(@ptrCast(self));
    }

    pub fn SetVerticalPosition(self: ?*anyopaque, relativePosition: f64) void {
        qtc.QPieSeries_SetVerticalPosition(@ptrCast(self), relativePosition);
    }

    pub fn VerticalPosition(self: ?*anyopaque, ) f64 {
        return qtc.QPieSeries_VerticalPosition(@ptrCast(self));
    }

    pub fn SetPieSize(self: ?*anyopaque, relativeSize: f64) void {
        qtc.QPieSeries_SetPieSize(@ptrCast(self), relativeSize);
    }

    pub fn PieSize(self: ?*anyopaque, ) f64 {
        return qtc.QPieSeries_PieSize(@ptrCast(self));
    }

    pub fn SetPieStartAngle(self: ?*anyopaque, startAngle: f64) void {
        qtc.QPieSeries_SetPieStartAngle(@ptrCast(self), startAngle);
    }

    pub fn PieStartAngle(self: ?*anyopaque, ) f64 {
        return qtc.QPieSeries_PieStartAngle(@ptrCast(self));
    }

    pub fn SetPieEndAngle(self: ?*anyopaque, endAngle: f64) void {
        qtc.QPieSeries_SetPieEndAngle(@ptrCast(self), endAngle);
    }

    pub fn PieEndAngle(self: ?*anyopaque, ) f64 {
        return qtc.QPieSeries_PieEndAngle(@ptrCast(self));
    }

    pub fn SetLabelsVisible(self: ?*anyopaque, ) void {
        qtc.QPieSeries_SetLabelsVisible(@ptrCast(self));
    }

    pub fn SetLabelsPosition(self: ?*anyopaque, position: i32) void {
        qtc.QPieSeries_SetLabelsPosition(@ptrCast(self), @intCast(position));
    }

    pub fn Added(self: ?*anyopaque, slices: []const u8) void {
        qtc.QPieSeries_Added(@ptrCast(self), @ptrCast(slices));
    }

    pub fn OnAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QPieSeries_Connect_Added(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Removed(self: ?*anyopaque, slices: []const u8) void {
        qtc.QPieSeries_Removed(@ptrCast(self), @ptrCast(slices));
    }

    pub fn OnRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QPieSeries_Connect_Removed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Clicked(self: ?*anyopaque, slice: ?*anyopaque) void {
        qtc.QPieSeries_Clicked(@ptrCast(self), @ptrCast(slice));
    }

    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPieSeries_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Hovered(self: ?*anyopaque, slice: ?*anyopaque, state: bool) void {
        qtc.QPieSeries_Hovered(@ptrCast(self), @ptrCast(slice), state);
    }

    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPieSeries_Connect_Hovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Pressed(self: ?*anyopaque, slice: ?*anyopaque) void {
        qtc.QPieSeries_Pressed(@ptrCast(self), @ptrCast(slice));
    }

    pub fn OnPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPieSeries_Connect_Pressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Released(self: ?*anyopaque, slice: ?*anyopaque) void {
        qtc.QPieSeries_Released(@ptrCast(self), @ptrCast(slice));
    }

    pub fn OnReleased(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPieSeries_Connect_Released(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DoubleClicked(self: ?*anyopaque, slice: ?*anyopaque) void {
        qtc.QPieSeries_DoubleClicked(@ptrCast(self), @ptrCast(slice));
    }

    pub fn OnDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPieSeries_Connect_DoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CountChanged(self: ?*anyopaque, ) void {
        qtc.QPieSeries_CountChanged(@ptrCast(self));
    }

    pub fn OnCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSeries_Connect_CountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SumChanged(self: ?*anyopaque, ) void {
        qtc.QPieSeries_SumChanged(@ptrCast(self));
    }

    pub fn OnSumChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSeries_Connect_SumChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPieSeries_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieseries.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPieSeries_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieseries.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetLabelsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QPieSeries_SetLabelsVisible1(@ptrCast(self), visible);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPieSeries_Delete(@ptrCast(self));
    }
};
