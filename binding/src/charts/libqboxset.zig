const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qboxset.html
pub const qboxset = struct {

    /// New constructs a new QBoxSet object.
    pub fn New() QtC.QBoxSet {
        return qtc.QBoxSet_new();
    }


    /// New2 constructs a new QBoxSet object.
    pub fn New2(le: f64, lq: f64, m: f64, uq: f64, ue: f64) QtC.QBoxSet {
        return qtc.QBoxSet_new2(le, lq, m, uq, ue);
    }


    /// New3 constructs a new QBoxSet object.
    pub fn New3(label: []const u8) QtC.QBoxSet {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QBoxSet_new3(label_str);
    }


    /// New4 constructs a new QBoxSet object.
    pub fn New4(label: []const u8, parent: ?*anyopaque) QtC.QBoxSet {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QBoxSet_new4(label_str, @ptrCast(parent));
    }


    /// New5 constructs a new QBoxSet object.
    pub fn New5(le: f64, lq: f64, m: f64, uq: f64, ue: f64, label: []const u8) QtC.QBoxSet {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QBoxSet_new5(le, lq, m, uq, ue, label_str);
    }


    /// New6 constructs a new QBoxSet object.
    pub fn New6(le: f64, lq: f64, m: f64, uq: f64, ue: f64, label: []const u8, parent: ?*anyopaque) QtC.QBoxSet {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QBoxSet_new6(le, lq, m, uq, ue, label_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBoxSet_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxset.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Append(self: ?*anyopaque, value: f64) void {
        qtc.QBoxSet_Append(@ptrCast(self), value);
    }

    pub fn Append2(self: ?*anyopaque, values: []const u8) void {
        qtc.QBoxSet_Append2(@ptrCast(self), @ptrCast(values));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QBoxSet_Clear(@ptrCast(self));
    }

    pub fn SetLabel(self: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
qtc.QBoxSet_SetLabel(@ptrCast(self), label_str);
    }

    pub fn Label(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBoxSet_Label(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxset.Label: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn OperatorShiftLeft(self: ?*anyopaque, value: *const f64) QtC.QBoxSet {
        return qtc.QBoxSet_OperatorShiftLeft(@ptrCast(self), @ptrCast(value));
    }

    pub fn SetValue(self: ?*anyopaque, index: i32, value: f64) void {
        qtc.QBoxSet_SetValue(@ptrCast(self), index, value);
    }

    pub fn At(self: ?*anyopaque, index: i32) f64 {
        return qtc.QBoxSet_At(@ptrCast(self), index);
    }

    pub fn OperatorSubscript(self: ?*anyopaque, index: i32) f64 {
        return qtc.QBoxSet_OperatorSubscript(@ptrCast(self), index);
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QBoxSet_Count(@ptrCast(self));
    }

    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QBoxSet_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    pub fn Pen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QBoxSet_Pen(@ptrCast(self));
    }

    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QBoxSet_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn Brush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QBoxSet_Brush(@ptrCast(self));
    }

    pub fn Clicked(self: ?*anyopaque, ) void {
        qtc.QBoxSet_Clicked(@ptrCast(self));
    }

    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBoxSet_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Hovered(self: ?*anyopaque, status: bool) void {
        qtc.QBoxSet_Hovered(@ptrCast(self), status);
    }

    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QBoxSet_Connect_Hovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Pressed(self: ?*anyopaque, ) void {
        qtc.QBoxSet_Pressed(@ptrCast(self));
    }

    pub fn OnPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBoxSet_Connect_Pressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Released(self: ?*anyopaque, ) void {
        qtc.QBoxSet_Released(@ptrCast(self));
    }

    pub fn OnReleased(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBoxSet_Connect_Released(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DoubleClicked(self: ?*anyopaque, ) void {
        qtc.QBoxSet_DoubleClicked(@ptrCast(self));
    }

    pub fn OnDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBoxSet_Connect_DoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PenChanged(self: ?*anyopaque, ) void {
        qtc.QBoxSet_PenChanged(@ptrCast(self));
    }

    pub fn OnPenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBoxSet_Connect_PenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BrushChanged(self: ?*anyopaque, ) void {
        qtc.QBoxSet_BrushChanged(@ptrCast(self));
    }

    pub fn OnBrushChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBoxSet_Connect_BrushChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ValuesChanged(self: ?*anyopaque, ) void {
        qtc.QBoxSet_ValuesChanged(@ptrCast(self));
    }

    pub fn OnValuesChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBoxSet_Connect_ValuesChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ValueChanged(self: ?*anyopaque, index: i32) void {
        qtc.QBoxSet_ValueChanged(@ptrCast(self), index);
    }

    pub fn OnValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QBoxSet_Connect_ValueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Cleared(self: ?*anyopaque, ) void {
        qtc.QBoxSet_Cleared(@ptrCast(self));
    }

    pub fn OnCleared(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBoxSet_Connect_Cleared(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBoxSet_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxset.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBoxSet_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxset.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBoxSet_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/boxset.html#types
pub const enums = struct {
    pub const ValuePositions = enum {
        pub const LowerExtreme: i32 = 0;
        pub const LowerQuartile: i32 = 1;
        pub const Median: i32 = 2;
        pub const UpperQuartile: i32 = 3;
        pub const UpperExtreme: i32 = 4;
    };

};
