const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qabstractaxis.html
pub const qabstractaxis = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractAxis_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractaxis.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractAxis_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractAxis_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractAxis_QBaseType(@ptrCast(self));
    }

    pub fn IsVisible(self: ?*anyopaque, ) bool {
        return qtc.QAbstractAxis_IsVisible(@ptrCast(self));
    }

    pub fn SetVisible(self: ?*anyopaque, ) void {
        qtc.QAbstractAxis_SetVisible(@ptrCast(self));
    }

    pub fn Show(self: ?*anyopaque, ) void {
        qtc.QAbstractAxis_Show(@ptrCast(self));
    }

    pub fn Hide(self: ?*anyopaque, ) void {
        qtc.QAbstractAxis_Hide(@ptrCast(self));
    }

    pub fn IsLineVisible(self: ?*anyopaque, ) bool {
        return qtc.QAbstractAxis_IsLineVisible(@ptrCast(self));
    }

    pub fn SetLineVisible(self: ?*anyopaque, ) void {
        qtc.QAbstractAxis_SetLineVisible(@ptrCast(self));
    }

    pub fn SetLinePen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLinePen(@ptrCast(self), @ptrCast(pen));
    }

    pub fn LinePen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QAbstractAxis_LinePen(@ptrCast(self));
    }

    pub fn SetLinePenColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_SetLinePenColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn LinePenColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QAbstractAxis_LinePenColor(@ptrCast(self));
    }

    pub fn IsGridLineVisible(self: ?*anyopaque, ) bool {
        return qtc.QAbstractAxis_IsGridLineVisible(@ptrCast(self));
    }

    pub fn SetGridLineVisible(self: ?*anyopaque, ) void {
        qtc.QAbstractAxis_SetGridLineVisible(@ptrCast(self));
    }

    pub fn SetGridLinePen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_SetGridLinePen(@ptrCast(self), @ptrCast(pen));
    }

    pub fn GridLinePen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QAbstractAxis_GridLinePen(@ptrCast(self));
    }

    pub fn IsMinorGridLineVisible(self: ?*anyopaque, ) bool {
        return qtc.QAbstractAxis_IsMinorGridLineVisible(@ptrCast(self));
    }

    pub fn SetMinorGridLineVisible(self: ?*anyopaque, ) void {
        qtc.QAbstractAxis_SetMinorGridLineVisible(@ptrCast(self));
    }

    pub fn SetMinorGridLinePen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_SetMinorGridLinePen(@ptrCast(self), @ptrCast(pen));
    }

    pub fn MinorGridLinePen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QAbstractAxis_MinorGridLinePen(@ptrCast(self));
    }

    pub fn SetGridLineColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAbstractAxis_SetGridLineColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn GridLineColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QAbstractAxis_GridLineColor(@ptrCast(self));
    }

    pub fn SetMinorGridLineColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAbstractAxis_SetMinorGridLineColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn MinorGridLineColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QAbstractAxis_MinorGridLineColor(@ptrCast(self));
    }

    pub fn LabelsVisible(self: ?*anyopaque, ) bool {
        return qtc.QAbstractAxis_LabelsVisible(@ptrCast(self));
    }

    pub fn SetLabelsVisible(self: ?*anyopaque, ) void {
        qtc.QAbstractAxis_SetLabelsVisible(@ptrCast(self));
    }

    pub fn SetLabelsBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLabelsBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn LabelsBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QAbstractAxis_LabelsBrush(@ptrCast(self));
    }

    pub fn SetLabelsFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLabelsFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn LabelsFont(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QAbstractAxis_LabelsFont(@ptrCast(self));
    }

    pub fn SetLabelsAngle(self: ?*anyopaque, angle: i32) void {
        qtc.QAbstractAxis_SetLabelsAngle(@ptrCast(self), angle);
    }

    pub fn LabelsAngle(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractAxis_LabelsAngle(@ptrCast(self));
    }

    pub fn SetLabelsColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_SetLabelsColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn LabelsColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QAbstractAxis_LabelsColor(@ptrCast(self));
    }

    pub fn IsTitleVisible(self: ?*anyopaque, ) bool {
        return qtc.QAbstractAxis_IsTitleVisible(@ptrCast(self));
    }

    pub fn SetTitleVisible(self: ?*anyopaque, ) void {
        qtc.QAbstractAxis_SetTitleVisible(@ptrCast(self));
    }

    pub fn SetTitleBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_SetTitleBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn TitleBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QAbstractAxis_TitleBrush(@ptrCast(self));
    }

    pub fn SetTitleFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QAbstractAxis_SetTitleFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn TitleFont(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QAbstractAxis_TitleFont(@ptrCast(self));
    }

    pub fn SetTitleText(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
qtc.QAbstractAxis_SetTitleText(@ptrCast(self), title_str);
    }

    pub fn TitleText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractAxis_TitleText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractaxis.TitleText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ShadesVisible(self: ?*anyopaque, ) bool {
        return qtc.QAbstractAxis_ShadesVisible(@ptrCast(self));
    }

    pub fn SetShadesVisible(self: ?*anyopaque, ) void {
        qtc.QAbstractAxis_SetShadesVisible(@ptrCast(self));
    }

    pub fn SetShadesPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_SetShadesPen(@ptrCast(self), @ptrCast(pen));
    }

    pub fn ShadesPen(self: ?*anyopaque, ) QtC.QPen {
        return qtc.QAbstractAxis_ShadesPen(@ptrCast(self));
    }

    pub fn SetShadesBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_SetShadesBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn ShadesBrush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QAbstractAxis_ShadesBrush(@ptrCast(self));
    }

    pub fn SetShadesColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_SetShadesColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn ShadesColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QAbstractAxis_ShadesColor(@ptrCast(self));
    }

    pub fn SetShadesBorderColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_SetShadesBorderColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn ShadesBorderColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QAbstractAxis_ShadesBorderColor(@ptrCast(self));
    }

    pub fn Orientation(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractAxis_Orientation(@ptrCast(self));
    }

    pub fn Alignment(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractAxis_Alignment(@ptrCast(self));
    }

    pub fn SetMin(self: ?*anyopaque, min: ?*anyopaque) void {
        qtc.QAbstractAxis_SetMin(@ptrCast(self), @ptrCast(min));
    }

    pub fn SetMax(self: ?*anyopaque, max: ?*anyopaque) void {
        qtc.QAbstractAxis_SetMax(@ptrCast(self), @ptrCast(max));
    }

    pub fn SetRange(self: ?*anyopaque, min: ?*anyopaque, max: ?*anyopaque) void {
        qtc.QAbstractAxis_SetRange(@ptrCast(self), @ptrCast(min), @ptrCast(max));
    }

    pub fn SetReverse(self: ?*anyopaque, ) void {
        qtc.QAbstractAxis_SetReverse(@ptrCast(self));
    }

    pub fn IsReverse(self: ?*anyopaque, ) bool {
        return qtc.QAbstractAxis_IsReverse(@ptrCast(self));
    }

    pub fn SetLabelsEditable(self: ?*anyopaque, ) void {
        qtc.QAbstractAxis_SetLabelsEditable(@ptrCast(self));
    }

    pub fn LabelsEditable(self: ?*anyopaque, ) bool {
        return qtc.QAbstractAxis_LabelsEditable(@ptrCast(self));
    }

    pub fn LabelsTruncated(self: ?*anyopaque, ) bool {
        return qtc.QAbstractAxis_LabelsTruncated(@ptrCast(self));
    }

    pub fn SetTruncateLabels(self: ?*anyopaque, ) void {
        qtc.QAbstractAxis_SetTruncateLabels(@ptrCast(self));
    }

    pub fn TruncateLabels(self: ?*anyopaque, ) bool {
        return qtc.QAbstractAxis_TruncateLabels(@ptrCast(self));
    }

    pub fn VisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_VisibleChanged(@ptrCast(self), visible);
    }

    pub fn OnVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_VisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LinePenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_LinePenChanged(@ptrCast(self), @ptrCast(pen));
    }

    pub fn OnLinePenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LinePenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LineVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_LineVisibleChanged(@ptrCast(self), visible);
    }

    pub fn OnLineVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LineVisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelsVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_LabelsVisibleChanged(@ptrCast(self), visible);
    }

    pub fn OnLabelsVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsVisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelsBrushChanged(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_LabelsBrushChanged(@ptrCast(self), @ptrCast(brush));
    }

    pub fn OnLabelsBrushChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsBrushChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelsFontChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_LabelsFontChanged(@ptrCast(self), @ptrCast(pen));
    }

    pub fn OnLabelsFontChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsFontChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelsAngleChanged(self: ?*anyopaque, angle: i32) void {
        qtc.QAbstractAxis_LabelsAngleChanged(@ptrCast(self), angle);
    }

    pub fn OnLabelsAngleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsAngleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn GridLinePenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_GridLinePenChanged(@ptrCast(self), @ptrCast(pen));
    }

    pub fn OnGridLinePenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridLinePenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn GridVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_GridVisibleChanged(@ptrCast(self), visible);
    }

    pub fn OnGridVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridVisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MinorGridVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_MinorGridVisibleChanged(@ptrCast(self), visible);
    }

    pub fn OnMinorGridVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridVisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MinorGridLinePenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_MinorGridLinePenChanged(@ptrCast(self), @ptrCast(pen));
    }

    pub fn OnMinorGridLinePenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridLinePenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn GridLineColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAbstractAxis_GridLineColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnGridLineColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridLineColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MinorGridLineColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAbstractAxis_MinorGridLineColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnMinorGridLineColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridLineColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_ColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelsColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_LabelsColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnLabelsColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TitleTextChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
qtc.QAbstractAxis_TitleTextChanged(@ptrCast(self), title_str);
    }

    pub fn OnTitleTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TitleBrushChanged(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_TitleBrushChanged(@ptrCast(self), @ptrCast(brush));
    }

    pub fn OnTitleBrushChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleBrushChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TitleVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_TitleVisibleChanged(@ptrCast(self), visible);
    }

    pub fn OnTitleVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleVisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TitleFontChanged(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QAbstractAxis_TitleFontChanged(@ptrCast(self), @ptrCast(font));
    }

    pub fn OnTitleFontChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleFontChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ShadesVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_ShadesVisibleChanged(@ptrCast(self), visible);
    }

    pub fn OnShadesVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesVisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ShadesColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_ShadesColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnShadesColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ShadesBorderColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_ShadesBorderColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnShadesBorderColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesBorderColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ShadesPenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_ShadesPenChanged(@ptrCast(self), @ptrCast(pen));
    }

    pub fn OnShadesPenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesPenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ShadesBrushChanged(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_ShadesBrushChanged(@ptrCast(self), @ptrCast(brush));
    }

    pub fn OnShadesBrushChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesBrushChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ReverseChanged(self: ?*anyopaque, reverse: bool) void {
        qtc.QAbstractAxis_ReverseChanged(@ptrCast(self), reverse);
    }

    pub fn OnReverseChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ReverseChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelsEditableChanged(self: ?*anyopaque, editable: bool) void {
        qtc.QAbstractAxis_LabelsEditableChanged(@ptrCast(self), editable);
    }

    pub fn OnLabelsEditableChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsEditableChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelsTruncatedChanged(self: ?*anyopaque, labelsTruncated: bool) void {
        qtc.QAbstractAxis_LabelsTruncatedChanged(@ptrCast(self), labelsTruncated);
    }

    pub fn OnLabelsTruncatedChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsTruncatedChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TruncateLabelsChanged(self: ?*anyopaque, truncateLabels: bool) void {
        qtc.QAbstractAxis_TruncateLabelsChanged(@ptrCast(self), truncateLabels);
    }

    pub fn OnTruncateLabelsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TruncateLabelsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractAxis_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractaxis.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractAxis_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractaxis.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetVisible1(@ptrCast(self), visible);
    }

    pub fn SetLineVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetLineVisible1(@ptrCast(self), visible);
    }

    pub fn SetGridLineVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetGridLineVisible1(@ptrCast(self), visible);
    }

    pub fn SetMinorGridLineVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetMinorGridLineVisible1(@ptrCast(self), visible);
    }

    pub fn SetLabelsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetLabelsVisible1(@ptrCast(self), visible);
    }

    pub fn SetTitleVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetTitleVisible1(@ptrCast(self), visible);
    }

    pub fn SetShadesVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetShadesVisible1(@ptrCast(self), visible);
    }

    pub fn SetReverse1(self: ?*anyopaque, reverse: bool) void {
        qtc.QAbstractAxis_SetReverse1(@ptrCast(self), reverse);
    }

    pub fn SetLabelsEditable1(self: ?*anyopaque, editable: bool) void {
        qtc.QAbstractAxis_SetLabelsEditable1(@ptrCast(self), editable);
    }

    pub fn SetTruncateLabels1(self: ?*anyopaque, truncateLabels: bool) void {
        qtc.QAbstractAxis_SetTruncateLabels1(@ptrCast(self), truncateLabels);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractAxis_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/abstractaxis.html#types
pub const enums = struct {
    pub const AxisType = enum {
        pub const AxisTypeNoAxis: i32 = 0;
        pub const AxisTypeValue: i32 = 1;
        pub const AxisTypeBarCategory: i32 = 2;
        pub const AxisTypeCategory: i32 = 4;
        pub const AxisTypeDateTime: i32 = 8;
        pub const AxisTypeLogValue: i32 = 16;
        pub const AxisTypeColor: i32 = 32;
    };

};
