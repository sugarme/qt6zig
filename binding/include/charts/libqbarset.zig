const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qbarset.html
pub const qbarset = struct {

    /// New constructs a new QBarSet object.
    pub fn New(label: []const u8) QtC.QBarSet {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QBarSet_new(label_str);
    }


    /// New2 constructs a new QBarSet object.
    pub fn New2(label: []const u8, parent: ?*anyopaque) QtC.QBarSet {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QBarSet_new2(label_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBarSet_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbarset.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetLabel(self: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
qtc.QBarSet_SetLabel(@ptrCast(self), label_str);
    }

    pub fn Label(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBarSet_Label(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbarset.Label: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Append(self: ?*anyopaque, value: f64) void {
        qtc.QBarSet_Append(@ptrCast(self), value);
    }

    pub fn Append2(self: ?*anyopaque, values: []const u8) void {
        qtc.QBarSet_Append2(@ptrCast(self), @ptrCast(values));
    }

    pub fn OperatorShiftLeft(self: ?*anyopaque, value: *const f64) QtC.QBarSet {
        return qtc.QBarSet_OperatorShiftLeft(@ptrCast(self), @ptrCast(value));
    }

    pub fn Insert(self: ?*anyopaque, index: i32, value: f64) void {
        qtc.QBarSet_Insert(@ptrCast(self), index, value);
    }

    pub fn Remove(self: ?*anyopaque, index: i32) void {
        qtc.QBarSet_Remove(@ptrCast(self), index);
    }

    pub fn Replace(self: ?*anyopaque, index: i32, value: f64) void {
        qtc.QBarSet_Replace(@ptrCast(self), index, value);
    }

    pub fn At(self: ?*anyopaque, index: i32) f64 {
        return qtc.QBarSet_At(@ptrCast(self), index);
    }

    pub fn OperatorSubscript(self: ?*anyopaque, index: i32) f64 {
        return qtc.QBarSet_OperatorSubscript(@ptrCast(self), index);
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QBarSet_Count(@ptrCast(self));
    }

    pub fn Sum(self: ?*anyopaque, ) f64 {
        return qtc.QBarSet_Sum(@ptrCast(self));
    }

    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QBarSet_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    pub fn Pen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QBarSet_Pen(@ptrCast(self));
    }

    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QBarSet_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn Brush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QBarSet_Brush(@ptrCast(self));
    }

    pub fn SetLabelBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QBarSet_SetLabelBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn LabelBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QBarSet_LabelBrush(@ptrCast(self));
    }

    pub fn SetLabelFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QBarSet_SetLabelFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn LabelFont(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QBarSet_LabelFont(@ptrCast(self));
    }

    pub fn Color(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QBarSet_Color(@ptrCast(self));
    }

    pub fn SetColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QBarSet_SetColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn BorderColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QBarSet_BorderColor(@ptrCast(self));
    }

    pub fn SetBorderColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QBarSet_SetBorderColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn LabelColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QBarSet_LabelColor(@ptrCast(self));
    }

    pub fn SetLabelColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QBarSet_SetLabelColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn SelectedColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QBarSet_SelectedColor(@ptrCast(self));
    }

    pub fn SetSelectedColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QBarSet_SetSelectedColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn IsBarSelected(self: ?*anyopaque, index: i32) bool {
        return qtc.QBarSet_IsBarSelected(@ptrCast(self), index);
    }

    pub fn SelectBar(self: ?*anyopaque, index: i32) void {
        qtc.QBarSet_SelectBar(@ptrCast(self), index);
    }

    pub fn DeselectBar(self: ?*anyopaque, index: i32) void {
        qtc.QBarSet_DeselectBar(@ptrCast(self), index);
    }

    pub fn SetBarSelected(self: ?*anyopaque, index: i32, selected: bool) void {
        qtc.QBarSet_SetBarSelected(@ptrCast(self), index, selected);
    }

    pub fn SelectAllBars(self: ?*anyopaque, ) void {
        qtc.QBarSet_SelectAllBars(@ptrCast(self));
    }

    pub fn DeselectAllBars(self: ?*anyopaque, ) void {
        qtc.QBarSet_DeselectAllBars(@ptrCast(self));
    }

    pub fn SelectBars(self: ?*anyopaque, indexes: []const u8) void {
        qtc.QBarSet_SelectBars(@ptrCast(self), @ptrCast(indexes));
    }

    pub fn DeselectBars(self: ?*anyopaque, indexes: []const u8) void {
        qtc.QBarSet_DeselectBars(@ptrCast(self), @ptrCast(indexes));
    }

    pub fn ToggleSelection(self: ?*anyopaque, indexes: []const u8) void {
        qtc.QBarSet_ToggleSelection(@ptrCast(self), @ptrCast(indexes));
    }

    pub fn SelectedBars(self: ?*anyopaque, ) []const u8 {
        return qtc.QBarSet_SelectedBars(@ptrCast(self));
    }

    pub fn Clicked(self: ?*anyopaque, index: i32) void {
        qtc.QBarSet_Clicked(@ptrCast(self), index);
    }

    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Hovered(self: ?*anyopaque, status: bool, index: i32) void {
        qtc.QBarSet_Hovered(@ptrCast(self), status, index);
    }

    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_Hovered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Pressed(self: ?*anyopaque, index: i32) void {
        qtc.QBarSet_Pressed(@ptrCast(self), index);
    }

    pub fn OnPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_Pressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Released(self: ?*anyopaque, index: i32) void {
        qtc.QBarSet_Released(@ptrCast(self), index);
    }

    pub fn OnReleased(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_Released(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DoubleClicked(self: ?*anyopaque, index: i32) void {
        qtc.QBarSet_DoubleClicked(@ptrCast(self), index);
    }

    pub fn OnDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_DoubleClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PenChanged(self: ?*anyopaque, ) void {
        qtc.QBarSet_PenChanged(@ptrCast(self));
    }

    pub fn OnPenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBarSet_Connect_PenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BrushChanged(self: ?*anyopaque, ) void {
        qtc.QBarSet_BrushChanged(@ptrCast(self));
    }

    pub fn OnBrushChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBarSet_Connect_BrushChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelChanged(self: ?*anyopaque, ) void {
        qtc.QBarSet_LabelChanged(@ptrCast(self));
    }

    pub fn OnLabelChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBarSet_Connect_LabelChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelBrushChanged(self: ?*anyopaque, ) void {
        qtc.QBarSet_LabelBrushChanged(@ptrCast(self));
    }

    pub fn OnLabelBrushChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBarSet_Connect_LabelBrushChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelFontChanged(self: ?*anyopaque, ) void {
        qtc.QBarSet_LabelFontChanged(@ptrCast(self));
    }

    pub fn OnLabelFontChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBarSet_Connect_LabelFontChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QBarSet_ColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QBarSet_Connect_ColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BorderColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QBarSet_BorderColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnBorderColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QBarSet_Connect_BorderColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QBarSet_LabelColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnLabelColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QBarSet_Connect_LabelColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SelectedColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QBarSet_SelectedColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnSelectedColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBarSet_Connect_SelectedColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ValuesAdded(self: ?*anyopaque, index: i32, count: i32) void {
        qtc.QBarSet_ValuesAdded(@ptrCast(self), index, count);
    }

    pub fn OnValuesAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_ValuesAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ValuesRemoved(self: ?*anyopaque, index: i32, count: i32) void {
        qtc.QBarSet_ValuesRemoved(@ptrCast(self), index, count);
    }

    pub fn OnValuesRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_ValuesRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ValueChanged(self: ?*anyopaque, index: i32) void {
        qtc.QBarSet_ValueChanged(@ptrCast(self), index);
    }

    pub fn OnValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QBarSet_Connect_ValueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SelectedBarsChanged(self: ?*anyopaque, indexes: []const u8) void {
        qtc.QBarSet_SelectedBarsChanged(@ptrCast(self), @ptrCast(indexes));
    }

    pub fn OnSelectedBarsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QBarSet_Connect_SelectedBarsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBarSet_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbarset.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBarSet_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbarset.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Remove2(self: ?*anyopaque, index: i32, count: i32) void {
        qtc.QBarSet_Remove2(@ptrCast(self), index, count);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBarSet_Delete(@ptrCast(self));
    }
};
