const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcandlestickset.html
pub const qcandlestickset = struct {

    /// New constructs a new QCandlestickSet object.
    pub fn New() QtC.QCandlestickSet {
        return qtc.QCandlestickSet_new();
    }


    /// New2 constructs a new QCandlestickSet object.
    pub fn New2(open: f64, high: f64, low: f64, close: f64) QtC.QCandlestickSet {
        return qtc.QCandlestickSet_new2(open, high, low, close);
    }


    /// New3 constructs a new QCandlestickSet object.
    pub fn New3(timestamp: f64) QtC.QCandlestickSet {
        return qtc.QCandlestickSet_new3(timestamp);
    }


    /// New4 constructs a new QCandlestickSet object.
    pub fn New4(timestamp: f64, parent: ?*anyopaque) QtC.QCandlestickSet {
        return qtc.QCandlestickSet_new4(timestamp, @ptrCast(parent));
    }


    /// New5 constructs a new QCandlestickSet object.
    pub fn New5(open: f64, high: f64, low: f64, close: f64, timestamp: f64) QtC.QCandlestickSet {
        return qtc.QCandlestickSet_new5(open, high, low, close, timestamp);
    }


    /// New6 constructs a new QCandlestickSet object.
    pub fn New6(open: f64, high: f64, low: f64, close: f64, timestamp: f64, parent: ?*anyopaque) QtC.QCandlestickSet {
        return qtc.QCandlestickSet_new6(open, high, low, close, timestamp, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCandlestickSet_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickset.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTimestamp(self: ?*anyopaque, timestamp: f64) void {
        qtc.QCandlestickSet_SetTimestamp(@ptrCast(self), timestamp);
    }

    pub fn Timestamp(self: ?*anyopaque, ) f64 {
        return qtc.QCandlestickSet_Timestamp(@ptrCast(self));
    }

    pub fn SetOpen(self: ?*anyopaque, open: f64) void {
        qtc.QCandlestickSet_SetOpen(@ptrCast(self), open);
    }

    pub fn Open(self: ?*anyopaque, ) f64 {
        return qtc.QCandlestickSet_Open(@ptrCast(self));
    }

    pub fn SetHigh(self: ?*anyopaque, high: f64) void {
        qtc.QCandlestickSet_SetHigh(@ptrCast(self), high);
    }

    pub fn High(self: ?*anyopaque, ) f64 {
        return qtc.QCandlestickSet_High(@ptrCast(self));
    }

    pub fn SetLow(self: ?*anyopaque, low: f64) void {
        qtc.QCandlestickSet_SetLow(@ptrCast(self), low);
    }

    pub fn Low(self: ?*anyopaque, ) f64 {
        return qtc.QCandlestickSet_Low(@ptrCast(self));
    }

    pub fn SetClose(self: ?*anyopaque, close: f64) void {
        qtc.QCandlestickSet_SetClose(@ptrCast(self), close);
    }

    pub fn Close(self: ?*anyopaque, ) f64 {
        return qtc.QCandlestickSet_Close(@ptrCast(self));
    }

    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QCandlestickSet_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn Brush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QCandlestickSet_Brush(@ptrCast(self));
    }

    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QCandlestickSet_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    pub fn Pen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QCandlestickSet_Pen(@ptrCast(self));
    }

    pub fn Clicked(self: ?*anyopaque, ) void {
        qtc.QCandlestickSet_Clicked(@ptrCast(self));
    }

    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Hovered(self: ?*anyopaque, status: bool) void {
        qtc.QCandlestickSet_Hovered(@ptrCast(self), status);
    }

    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_Hovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Pressed(self: ?*anyopaque, ) void {
        qtc.QCandlestickSet_Pressed(@ptrCast(self));
    }

    pub fn OnPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_Pressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Released(self: ?*anyopaque, ) void {
        qtc.QCandlestickSet_Released(@ptrCast(self));
    }

    pub fn OnReleased(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_Released(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DoubleClicked(self: ?*anyopaque, ) void {
        qtc.QCandlestickSet_DoubleClicked(@ptrCast(self));
    }

    pub fn OnDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_DoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TimestampChanged(self: ?*anyopaque, ) void {
        qtc.QCandlestickSet_TimestampChanged(@ptrCast(self));
    }

    pub fn OnTimestampChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_TimestampChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn OpenChanged(self: ?*anyopaque, ) void {
        qtc.QCandlestickSet_OpenChanged(@ptrCast(self));
    }

    pub fn OnOpenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_OpenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn HighChanged(self: ?*anyopaque, ) void {
        qtc.QCandlestickSet_HighChanged(@ptrCast(self));
    }

    pub fn OnHighChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_HighChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LowChanged(self: ?*anyopaque, ) void {
        qtc.QCandlestickSet_LowChanged(@ptrCast(self));
    }

    pub fn OnLowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_LowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CloseChanged(self: ?*anyopaque, ) void {
        qtc.QCandlestickSet_CloseChanged(@ptrCast(self));
    }

    pub fn OnCloseChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_CloseChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BrushChanged(self: ?*anyopaque, ) void {
        qtc.QCandlestickSet_BrushChanged(@ptrCast(self));
    }

    pub fn OnBrushChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_BrushChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PenChanged(self: ?*anyopaque, ) void {
        qtc.QCandlestickSet_PenChanged(@ptrCast(self));
    }

    pub fn OnPenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCandlestickSet_Connect_PenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCandlestickSet_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickset.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCandlestickSet_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcandlestickset.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCandlestickSet_Delete(@ptrCast(self));
    }
};
