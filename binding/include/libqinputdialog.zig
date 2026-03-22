const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qinputdialog.html
pub const qinputdialog = struct {

    /// New constructs a new QInputDialog object.
    pub fn New(parent: ?*anyopaque) QtC.QInputDialog {
        return qtc.QInputDialog_new(@ptrCast(parent));
    }


    /// New2 constructs a new QInputDialog object.
    pub fn New2() QtC.QInputDialog {
        return qtc.QInputDialog_new2();
    }


    /// New3 constructs a new QInputDialog object.
    pub fn New3(parent: ?*anyopaque, flags: i64) QtC.QInputDialog {
        return qtc.QInputDialog_new3(@ptrCast(parent), @intCast(flags));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputDialog_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetInputMode(self: ?*anyopaque, mode: i32) void {
        qtc.QInputDialog_SetInputMode(@ptrCast(self), @intCast(mode));
    }

    pub fn InputMode(self: ?*anyopaque, ) i32 {
        return qtc.QInputDialog_InputMode(@ptrCast(self));
    }

    pub fn SetLabelText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QInputDialog_SetLabelText(@ptrCast(self), text_str);
    }

    pub fn LabelText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputDialog_LabelText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.LabelText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetOption(self: ?*anyopaque, option: i32) void {
        qtc.QInputDialog_SetOption(@ptrCast(self), @intCast(option));
    }

    pub fn TestOption(self: ?*anyopaque, option: i32) bool {
        return qtc.QInputDialog_TestOption(@ptrCast(self), @intCast(option));
    }

    pub fn SetOptions(self: ?*anyopaque, options: i32) void {
        qtc.QInputDialog_SetOptions(@ptrCast(self), @intCast(options));
    }

    pub fn Options(self: ?*anyopaque, ) i32 {
        return qtc.QInputDialog_Options(@ptrCast(self));
    }

    pub fn SetTextValue(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QInputDialog_SetTextValue(@ptrCast(self), text_str);
    }

    pub fn TextValue(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputDialog_TextValue(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.TextValue: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTextEchoMode(self: ?*anyopaque, mode: i32) void {
        qtc.QInputDialog_SetTextEchoMode(@ptrCast(self), @intCast(mode));
    }

    pub fn TextEchoMode(self: ?*anyopaque, ) i32 {
        return qtc.QInputDialog_TextEchoMode(@ptrCast(self));
    }

    pub fn SetComboBoxEditable(self: ?*anyopaque, editable: bool) void {
        qtc.QInputDialog_SetComboBoxEditable(@ptrCast(self), editable);
    }

    pub fn IsComboBoxEditable(self: ?*anyopaque, ) bool {
        return qtc.QInputDialog_IsComboBoxEditable(@ptrCast(self));
    }

    pub fn SetComboBoxItems(self: ?*anyopaque, items: []const u8) void {
        qtc.QInputDialog_SetComboBoxItems(@ptrCast(self), @ptrCast(items));
    }

    pub fn ComboBoxItems(self: ?*anyopaque, ) []const u8 {
        return qtc.QInputDialog_ComboBoxItems(@ptrCast(self));
    }

    pub fn SetIntValue(self: ?*anyopaque, value: i32) void {
        qtc.QInputDialog_SetIntValue(@ptrCast(self), value);
    }

    pub fn IntValue(self: ?*anyopaque, ) i32 {
        return qtc.QInputDialog_IntValue(@ptrCast(self));
    }

    pub fn SetIntMinimum(self: ?*anyopaque, min: i32) void {
        qtc.QInputDialog_SetIntMinimum(@ptrCast(self), min);
    }

    pub fn IntMinimum(self: ?*anyopaque, ) i32 {
        return qtc.QInputDialog_IntMinimum(@ptrCast(self));
    }

    pub fn SetIntMaximum(self: ?*anyopaque, max: i32) void {
        qtc.QInputDialog_SetIntMaximum(@ptrCast(self), max);
    }

    pub fn IntMaximum(self: ?*anyopaque, ) i32 {
        return qtc.QInputDialog_IntMaximum(@ptrCast(self));
    }

    pub fn SetIntRange(self: ?*anyopaque, min: i32, max: i32) void {
        qtc.QInputDialog_SetIntRange(@ptrCast(self), min, max);
    }

    pub fn SetIntStep(self: ?*anyopaque, step: i32) void {
        qtc.QInputDialog_SetIntStep(@ptrCast(self), step);
    }

    pub fn IntStep(self: ?*anyopaque, ) i32 {
        return qtc.QInputDialog_IntStep(@ptrCast(self));
    }

    pub fn SetDoubleValue(self: ?*anyopaque, value: f64) void {
        qtc.QInputDialog_SetDoubleValue(@ptrCast(self), value);
    }

    pub fn DoubleValue(self: ?*anyopaque, ) f64 {
        return qtc.QInputDialog_DoubleValue(@ptrCast(self));
    }

    pub fn SetDoubleMinimum(self: ?*anyopaque, min: f64) void {
        qtc.QInputDialog_SetDoubleMinimum(@ptrCast(self), min);
    }

    pub fn DoubleMinimum(self: ?*anyopaque, ) f64 {
        return qtc.QInputDialog_DoubleMinimum(@ptrCast(self));
    }

    pub fn SetDoubleMaximum(self: ?*anyopaque, max: f64) void {
        qtc.QInputDialog_SetDoubleMaximum(@ptrCast(self), max);
    }

    pub fn DoubleMaximum(self: ?*anyopaque, ) f64 {
        return qtc.QInputDialog_DoubleMaximum(@ptrCast(self));
    }

    pub fn SetDoubleRange(self: ?*anyopaque, min: f64, max: f64) void {
        qtc.QInputDialog_SetDoubleRange(@ptrCast(self), min, max);
    }

    pub fn SetDoubleDecimals(self: ?*anyopaque, decimals: i32) void {
        qtc.QInputDialog_SetDoubleDecimals(@ptrCast(self), decimals);
    }

    pub fn DoubleDecimals(self: ?*anyopaque, ) i32 {
        return qtc.QInputDialog_DoubleDecimals(@ptrCast(self));
    }

    pub fn SetOkButtonText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QInputDialog_SetOkButtonText(@ptrCast(self), text_str);
    }

    pub fn OkButtonText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputDialog_OkButtonText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.OkButtonText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetCancelButtonText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QInputDialog_SetCancelButtonText(@ptrCast(self), text_str);
    }

    pub fn CancelButtonText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputDialog_CancelButtonText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.CancelButtonText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Open(self: ?*anyopaque, receiver: ?*anyopaque, member: []const u8) void {
        qtc.QInputDialog_Open(@ptrCast(self), @ptrCast(receiver), @ptrCast(member));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QInputDialog_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QInputDialog_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QInputDialog_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QInputDialog_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QInputDialog_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QInputDialog_QBaseSizeHint(@ptrCast(self));
    }

    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QInputDialog_SetVisible(@ptrCast(self), visible);
    }

    /// Allows for overriding the related default method
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QInputDialog_OnSetVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QInputDialog_QBaseSetVisible(@ptrCast(self), visible);
    }

    pub fn GetText(parent: ?*anyopaque, title: []const u8, label: []const u8, allocator: std.mem.Allocator) []const u8 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
const _str = qtc.QInputDialog_GetText(@ptrCast(parent), title_str, label_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.GetText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetMultiLineText(parent: ?*anyopaque, title: []const u8, label: []const u8, allocator: std.mem.Allocator) []const u8 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
const _str = qtc.QInputDialog_GetMultiLineText(@ptrCast(parent), title_str, label_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.GetMultiLineText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetItem(parent: ?*anyopaque, title: []const u8, label: []const u8, items: []const u8, allocator: std.mem.Allocator) []const u8 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
const _str = qtc.QInputDialog_GetItem(@ptrCast(parent), title_str, label_str, @ptrCast(items));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.GetItem: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetInt(parent: ?*anyopaque, title: []const u8, label: []const u8) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QInputDialog_GetInt(@ptrCast(parent), title_str, label_str);
    }

    pub fn GetDouble(parent: ?*anyopaque, title: []const u8, label: []const u8) f64 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QInputDialog_GetDouble(@ptrCast(parent), title_str, label_str);
    }

    pub fn SetDoubleStep(self: ?*anyopaque, step: f64) void {
        qtc.QInputDialog_SetDoubleStep(@ptrCast(self), step);
    }

    pub fn DoubleStep(self: ?*anyopaque, ) f64 {
        return qtc.QInputDialog_DoubleStep(@ptrCast(self));
    }

    pub fn TextValueChanged(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QInputDialog_TextValueChanged(@ptrCast(self), text_str);
    }

    pub fn OnTextValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QInputDialog_Connect_TextValueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TextValueSelected(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QInputDialog_TextValueSelected(@ptrCast(self), text_str);
    }

    pub fn OnTextValueSelected(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QInputDialog_Connect_TextValueSelected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn IntValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QInputDialog_IntValueChanged(@ptrCast(self), value);
    }

    pub fn OnIntValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QInputDialog_Connect_IntValueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn IntValueSelected(self: ?*anyopaque, value: i32) void {
        qtc.QInputDialog_IntValueSelected(@ptrCast(self), value);
    }

    pub fn OnIntValueSelected(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QInputDialog_Connect_IntValueSelected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DoubleValueChanged(self: ?*anyopaque, value: f64) void {
        qtc.QInputDialog_DoubleValueChanged(@ptrCast(self), value);
    }

    pub fn OnDoubleValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QInputDialog_Connect_DoubleValueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DoubleValueSelected(self: ?*anyopaque, value: f64) void {
        qtc.QInputDialog_DoubleValueSelected(@ptrCast(self), value);
    }

    pub fn OnDoubleValueSelected(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QInputDialog_Connect_DoubleValueSelected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Done(self: ?*anyopaque, result: i32) void {
        qtc.QInputDialog_Done(@ptrCast(self), result);
    }

    /// Allows for overriding the related default method
    pub fn OnDone(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QInputDialog_OnDone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDone(self: ?*anyopaque, result: i32) void {
        qtc.QInputDialog_QBaseDone(@ptrCast(self), result);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputDialog_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputDialog_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetOption2(self: ?*anyopaque, option: i32, on: bool) void {
        qtc.QInputDialog_SetOption2(@ptrCast(self), @intCast(option), on);
    }

    pub fn GetText4(parent: ?*anyopaque, title: []const u8, label: []const u8, echo: i32, allocator: std.mem.Allocator) []const u8 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
const _str = qtc.QInputDialog_GetText4(@ptrCast(parent), title_str, label_str, @intCast(echo));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.GetText4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetText5(parent: ?*anyopaque, title: []const u8, label: []const u8, echo: i32, text: []const u8, allocator: std.mem.Allocator) []const u8 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const _str = qtc.QInputDialog_GetText5(@ptrCast(parent), title_str, label_str, @intCast(echo), text_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.GetText5: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetText6(parent: ?*anyopaque, title: []const u8, label: []const u8, echo: i32, text: []const u8, ok: *bool, allocator: std.mem.Allocator) []const u8 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const _str = qtc.QInputDialog_GetText6(@ptrCast(parent), title_str, label_str, @intCast(echo), text_str, @ptrCast(ok));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.GetText6: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetText7(parent: ?*anyopaque, title: []const u8, label: []const u8, echo: i32, text: []const u8, ok: *bool, flags: i64, allocator: std.mem.Allocator) []const u8 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const _str = qtc.QInputDialog_GetText7(@ptrCast(parent), title_str, label_str, @intCast(echo), text_str, @ptrCast(ok), @intCast(flags));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.GetText7: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetText8(parent: ?*anyopaque, title: []const u8, label: []const u8, echo: i32, text: []const u8, ok: *bool, flags: i64, inputMethodHints: i64, allocator: std.mem.Allocator) []const u8 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const _str = qtc.QInputDialog_GetText8(@ptrCast(parent), title_str, label_str, @intCast(echo), text_str, @ptrCast(ok), @intCast(flags), @intCast(inputMethodHints));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.GetText8: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetMultiLineText4(parent: ?*anyopaque, title: []const u8, label: []const u8, text: []const u8, allocator: std.mem.Allocator) []const u8 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const _str = qtc.QInputDialog_GetMultiLineText4(@ptrCast(parent), title_str, label_str, text_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.GetMultiLineText4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetMultiLineText5(parent: ?*anyopaque, title: []const u8, label: []const u8, text: []const u8, ok: *bool, allocator: std.mem.Allocator) []const u8 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const _str = qtc.QInputDialog_GetMultiLineText5(@ptrCast(parent), title_str, label_str, text_str, @ptrCast(ok));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.GetMultiLineText5: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetMultiLineText6(parent: ?*anyopaque, title: []const u8, label: []const u8, text: []const u8, ok: *bool, flags: i64, allocator: std.mem.Allocator) []const u8 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const _str = qtc.QInputDialog_GetMultiLineText6(@ptrCast(parent), title_str, label_str, text_str, @ptrCast(ok), @intCast(flags));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.GetMultiLineText6: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetMultiLineText7(parent: ?*anyopaque, title: []const u8, label: []const u8, text: []const u8, ok: *bool, flags: i64, inputMethodHints: i64, allocator: std.mem.Allocator) []const u8 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const _str = qtc.QInputDialog_GetMultiLineText7(@ptrCast(parent), title_str, label_str, text_str, @ptrCast(ok), @intCast(flags), @intCast(inputMethodHints));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.GetMultiLineText7: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetItem5(parent: ?*anyopaque, title: []const u8, label: []const u8, items: []const u8, current: i32, allocator: std.mem.Allocator) []const u8 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
const _str = qtc.QInputDialog_GetItem5(@ptrCast(parent), title_str, label_str, @ptrCast(items), current);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.GetItem5: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetItem6(parent: ?*anyopaque, title: []const u8, label: []const u8, items: []const u8, current: i32, editable: bool, allocator: std.mem.Allocator) []const u8 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
const _str = qtc.QInputDialog_GetItem6(@ptrCast(parent), title_str, label_str, @ptrCast(items), current, editable);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.GetItem6: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetItem7(parent: ?*anyopaque, title: []const u8, label: []const u8, items: []const u8, current: i32, editable: bool, ok: *bool, allocator: std.mem.Allocator) []const u8 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
const _str = qtc.QInputDialog_GetItem7(@ptrCast(parent), title_str, label_str, @ptrCast(items), current, editable, @ptrCast(ok));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.GetItem7: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetItem8(parent: ?*anyopaque, title: []const u8, label: []const u8, items: []const u8, current: i32, editable: bool, ok: *bool, flags: i64, allocator: std.mem.Allocator) []const u8 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
const _str = qtc.QInputDialog_GetItem8(@ptrCast(parent), title_str, label_str, @ptrCast(items), current, editable, @ptrCast(ok), @intCast(flags));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.GetItem8: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetItem9(parent: ?*anyopaque, title: []const u8, label: []const u8, items: []const u8, current: i32, editable: bool, ok: *bool, flags: i64, inputMethodHints: i64, allocator: std.mem.Allocator) []const u8 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
const _str = qtc.QInputDialog_GetItem9(@ptrCast(parent), title_str, label_str, @ptrCast(items), current, editable, @ptrCast(ok), @intCast(flags), @intCast(inputMethodHints));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdialog.GetItem9: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetInt4(parent: ?*anyopaque, title: []const u8, label: []const u8, value: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QInputDialog_GetInt4(@ptrCast(parent), title_str, label_str, value);
    }

    pub fn GetInt5(parent: ?*anyopaque, title: []const u8, label: []const u8, value: i32, minValue: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QInputDialog_GetInt5(@ptrCast(parent), title_str, label_str, value, minValue);
    }

    pub fn GetInt6(parent: ?*anyopaque, title: []const u8, label: []const u8, value: i32, minValue: i32, maxValue: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QInputDialog_GetInt6(@ptrCast(parent), title_str, label_str, value, minValue, maxValue);
    }

    pub fn GetInt7(parent: ?*anyopaque, title: []const u8, label: []const u8, value: i32, minValue: i32, maxValue: i32, step: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QInputDialog_GetInt7(@ptrCast(parent), title_str, label_str, value, minValue, maxValue, step);
    }

    pub fn GetInt8(parent: ?*anyopaque, title: []const u8, label: []const u8, value: i32, minValue: i32, maxValue: i32, step: i32, ok: *bool) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QInputDialog_GetInt8(@ptrCast(parent), title_str, label_str, value, minValue, maxValue, step, @ptrCast(ok));
    }

    pub fn GetInt9(parent: ?*anyopaque, title: []const u8, label: []const u8, value: i32, minValue: i32, maxValue: i32, step: i32, ok: *bool, flags: i64) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QInputDialog_GetInt9(@ptrCast(parent), title_str, label_str, value, minValue, maxValue, step, @ptrCast(ok), @intCast(flags));
    }

    pub fn GetDouble4(parent: ?*anyopaque, title: []const u8, label: []const u8, value: f64) f64 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QInputDialog_GetDouble4(@ptrCast(parent), title_str, label_str, value);
    }

    pub fn GetDouble5(parent: ?*anyopaque, title: []const u8, label: []const u8, value: f64, minValue: f64) f64 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QInputDialog_GetDouble5(@ptrCast(parent), title_str, label_str, value, minValue);
    }

    pub fn GetDouble6(parent: ?*anyopaque, title: []const u8, label: []const u8, value: f64, minValue: f64, maxValue: f64) f64 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QInputDialog_GetDouble6(@ptrCast(parent), title_str, label_str, value, minValue, maxValue);
    }

    pub fn GetDouble7(parent: ?*anyopaque, title: []const u8, label: []const u8, value: f64, minValue: f64, maxValue: f64, decimals: i32) f64 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QInputDialog_GetDouble7(@ptrCast(parent), title_str, label_str, value, minValue, maxValue, decimals);
    }

    pub fn GetDouble8(parent: ?*anyopaque, title: []const u8, label: []const u8, value: f64, minValue: f64, maxValue: f64, decimals: i32, ok: *bool) f64 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QInputDialog_GetDouble8(@ptrCast(parent), title_str, label_str, value, minValue, maxValue, decimals, @ptrCast(ok));
    }

    pub fn GetDouble9(parent: ?*anyopaque, title: []const u8, label: []const u8, value: f64, minValue: f64, maxValue: f64, decimals: i32, ok: *bool, flags: i64) f64 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QInputDialog_GetDouble9(@ptrCast(parent), title_str, label_str, value, minValue, maxValue, decimals, @ptrCast(ok), @intCast(flags));
    }

    pub fn GetDouble10(parent: ?*anyopaque, title: []const u8, label: []const u8, value: f64, minValue: f64, maxValue: f64, decimals: i32, ok: *bool, flags: i64, step: f64) f64 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
return qtc.QInputDialog_GetDouble10(@ptrCast(parent), title_str, label_str, value, minValue, maxValue, decimals, @ptrCast(ok), @intCast(flags), step);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QInputDialog_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/inputdialog.html#types
pub const enums = struct {
    pub const InputDialogOption = enum {
        pub const NoButtons: i32 = 1;
        pub const UseListViewForComboBoxItems: i32 = 2;
        pub const UsePlainTextEditForTextInput: i32 = 4;
    };

    pub const InputMode = enum {
        pub const TextInput: i32 = 0;
        pub const IntInput: i32 = 1;
        pub const DoubleInput: i32 = 2;
    };

};
