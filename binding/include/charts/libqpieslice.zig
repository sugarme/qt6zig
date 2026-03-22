const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpieslice.html
pub const qpieslice = struct {

    /// New constructs a new QPieSlice object.
    pub fn New() QtC.QPieSlice {
        return qtc.QPieSlice_new();
    }


    /// New2 constructs a new QPieSlice object.
    pub fn New2(label: []const u8, value: f64) QtC.QPieSlice {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QPieSlice_new2(label_str, value);
    }


    /// New3 constructs a new QPieSlice object.
    pub fn New3(parent: ?*anyopaque) QtC.QPieSlice {
        return qtc.QPieSlice_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QPieSlice object.
    pub fn New4(label: []const u8, value: f64, parent: ?*anyopaque) QtC.QPieSlice {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QPieSlice_new4(label_str, value, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPieSlice_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieslice.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetLabel(self: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
qtc.QPieSlice_SetLabel(@ptrCast(self), label_str);
    }

    pub fn Label(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPieSlice_Label(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieslice.Label: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetValue(self: ?*anyopaque, value: f64) void {
        qtc.QPieSlice_SetValue(@ptrCast(self), value);
    }

    pub fn Value(self: ?*anyopaque, ) f64 {
        return qtc.QPieSlice_Value(@ptrCast(self));
    }

    pub fn SetLabelVisible(self: ?*anyopaque, ) void {
        qtc.QPieSlice_SetLabelVisible(@ptrCast(self));
    }

    pub fn IsLabelVisible(self: ?*anyopaque, ) bool {
        return qtc.QPieSlice_IsLabelVisible(@ptrCast(self));
    }

    pub fn LabelPosition(self: ?*anyopaque, ) i32 {
        return qtc.QPieSlice_LabelPosition(@ptrCast(self));
    }

    pub fn SetLabelPosition(self: ?*anyopaque, position: i32) void {
        qtc.QPieSlice_SetLabelPosition(@ptrCast(self), @intCast(position));
    }

    pub fn SetExploded(self: ?*anyopaque, ) void {
        qtc.QPieSlice_SetExploded(@ptrCast(self));
    }

    pub fn IsExploded(self: ?*anyopaque, ) bool {
        return qtc.QPieSlice_IsExploded(@ptrCast(self));
    }

    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QPieSlice_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    pub fn Pen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QPieSlice_Pen(@ptrCast(self));
    }

    pub fn BorderColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QPieSlice_BorderColor(@ptrCast(self));
    }

    pub fn SetBorderColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QPieSlice_SetBorderColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn BorderWidth(self: ?*anyopaque, ) i32 {
        return qtc.QPieSlice_BorderWidth(@ptrCast(self));
    }

    pub fn SetBorderWidth(self: ?*anyopaque, width: i32) void {
        qtc.QPieSlice_SetBorderWidth(@ptrCast(self), width);
    }

    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QPieSlice_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn Brush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPieSlice_Brush(@ptrCast(self));
    }

    pub fn Color(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QPieSlice_Color(@ptrCast(self));
    }

    pub fn SetColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QPieSlice_SetColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn SetLabelBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QPieSlice_SetLabelBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn LabelBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPieSlice_LabelBrush(@ptrCast(self));
    }

    pub fn LabelColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QPieSlice_LabelColor(@ptrCast(self));
    }

    pub fn SetLabelColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QPieSlice_SetLabelColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn SetLabelFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QPieSlice_SetLabelFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn LabelFont(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QPieSlice_LabelFont(@ptrCast(self));
    }

    pub fn SetLabelArmLengthFactor(self: ?*anyopaque, factor: f64) void {
        qtc.QPieSlice_SetLabelArmLengthFactor(@ptrCast(self), factor);
    }

    pub fn LabelArmLengthFactor(self: ?*anyopaque, ) f64 {
        return qtc.QPieSlice_LabelArmLengthFactor(@ptrCast(self));
    }

    pub fn SetExplodeDistanceFactor(self: ?*anyopaque, factor: f64) void {
        qtc.QPieSlice_SetExplodeDistanceFactor(@ptrCast(self), factor);
    }

    pub fn ExplodeDistanceFactor(self: ?*anyopaque, ) f64 {
        return qtc.QPieSlice_ExplodeDistanceFactor(@ptrCast(self));
    }

    pub fn Percentage(self: ?*anyopaque, ) f64 {
        return qtc.QPieSlice_Percentage(@ptrCast(self));
    }

    pub fn StartAngle(self: ?*anyopaque, ) f64 {
        return qtc.QPieSlice_StartAngle(@ptrCast(self));
    }

    pub fn AngleSpan(self: ?*anyopaque, ) f64 {
        return qtc.QPieSlice_AngleSpan(@ptrCast(self));
    }

    pub fn Series(self: ?*anyopaque, ) QtC.QPieSeries {
        return qtc.QPieSlice_Series(@ptrCast(self));
    }

    pub fn Clicked(self: ?*anyopaque, ) void {
        qtc.QPieSlice_Clicked(@ptrCast(self));
    }

    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Hovered(self: ?*anyopaque, state: bool) void {
        qtc.QPieSlice_Hovered(@ptrCast(self), state);
    }

    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPieSlice_Connect_Hovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Pressed(self: ?*anyopaque, ) void {
        qtc.QPieSlice_Pressed(@ptrCast(self));
    }

    pub fn OnPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_Pressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Released(self: ?*anyopaque, ) void {
        qtc.QPieSlice_Released(@ptrCast(self));
    }

    pub fn OnReleased(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_Released(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DoubleClicked(self: ?*anyopaque, ) void {
        qtc.QPieSlice_DoubleClicked(@ptrCast(self));
    }

    pub fn OnDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_DoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelChanged(self: ?*anyopaque, ) void {
        qtc.QPieSlice_LabelChanged(@ptrCast(self));
    }

    pub fn OnLabelChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_LabelChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ValueChanged(self: ?*anyopaque, ) void {
        qtc.QPieSlice_ValueChanged(@ptrCast(self));
    }

    pub fn OnValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_ValueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelVisibleChanged(self: ?*anyopaque, ) void {
        qtc.QPieSlice_LabelVisibleChanged(@ptrCast(self));
    }

    pub fn OnLabelVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_LabelVisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PenChanged(self: ?*anyopaque, ) void {
        qtc.QPieSlice_PenChanged(@ptrCast(self));
    }

    pub fn OnPenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_PenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BrushChanged(self: ?*anyopaque, ) void {
        qtc.QPieSlice_BrushChanged(@ptrCast(self));
    }

    pub fn OnBrushChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_BrushChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelBrushChanged(self: ?*anyopaque, ) void {
        qtc.QPieSlice_LabelBrushChanged(@ptrCast(self));
    }

    pub fn OnLabelBrushChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_LabelBrushChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelFontChanged(self: ?*anyopaque, ) void {
        qtc.QPieSlice_LabelFontChanged(@ptrCast(self));
    }

    pub fn OnLabelFontChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_LabelFontChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PercentageChanged(self: ?*anyopaque, ) void {
        qtc.QPieSlice_PercentageChanged(@ptrCast(self));
    }

    pub fn OnPercentageChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_PercentageChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn StartAngleChanged(self: ?*anyopaque, ) void {
        qtc.QPieSlice_StartAngleChanged(@ptrCast(self));
    }

    pub fn OnStartAngleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_StartAngleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AngleSpanChanged(self: ?*anyopaque, ) void {
        qtc.QPieSlice_AngleSpanChanged(@ptrCast(self));
    }

    pub fn OnAngleSpanChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_AngleSpanChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ColorChanged(self: ?*anyopaque, ) void {
        qtc.QPieSlice_ColorChanged(@ptrCast(self));
    }

    pub fn OnColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_ColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BorderColorChanged(self: ?*anyopaque, ) void {
        qtc.QPieSlice_BorderColorChanged(@ptrCast(self));
    }

    pub fn OnBorderColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_BorderColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BorderWidthChanged(self: ?*anyopaque, ) void {
        qtc.QPieSlice_BorderWidthChanged(@ptrCast(self));
    }

    pub fn OnBorderWidthChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_BorderWidthChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelColorChanged(self: ?*anyopaque, ) void {
        qtc.QPieSlice_LabelColorChanged(@ptrCast(self));
    }

    pub fn OnLabelColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSlice_Connect_LabelColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPieSlice_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieslice.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPieSlice_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieslice.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetLabelVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QPieSlice_SetLabelVisible1(@ptrCast(self), visible);
    }

    pub fn SetExploded1(self: ?*anyopaque, exploded: bool) void {
        qtc.QPieSlice_SetExploded1(@ptrCast(self), exploded);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPieSlice_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/pieslice.html#types
pub const enums = struct {
    pub const LabelPosition = enum {
        pub const LabelOutside: i32 = 0;
        pub const LabelInsideHorizontal: i32 = 1;
        pub const LabelInsideTangential: i32 = 2;
        pub const LabelInsideNormal: i32 = 3;
    };

};
