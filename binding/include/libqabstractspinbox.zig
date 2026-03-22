const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qabstractspinbox.html
pub const qabstractspinbox = struct {

    /// New constructs a new QAbstractSpinBox object.
    pub fn New(parent: ?*anyopaque) QtC.QAbstractSpinBox {
        return qtc.QAbstractSpinBox_new(@ptrCast(parent));
    }


    /// New2 constructs a new QAbstractSpinBox object.
    pub fn New2() QtC.QAbstractSpinBox {
        return qtc.QAbstractSpinBox_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSpinBox_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractspinbox.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ButtonSymbols(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractSpinBox_ButtonSymbols(@ptrCast(self));
    }

    pub fn SetButtonSymbols(self: ?*anyopaque, bs: i32) void {
        qtc.QAbstractSpinBox_SetButtonSymbols(@ptrCast(self), @intCast(bs));
    }

    pub fn SetCorrectionMode(self: ?*anyopaque, cm: i32) void {
        qtc.QAbstractSpinBox_SetCorrectionMode(@ptrCast(self), @intCast(cm));
    }

    pub fn CorrectionMode(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractSpinBox_CorrectionMode(@ptrCast(self));
    }

    pub fn HasAcceptableInput(self: ?*anyopaque, ) bool {
        return qtc.QAbstractSpinBox_HasAcceptableInput(@ptrCast(self));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSpinBox_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractspinbox.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SpecialValueText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSpinBox_SpecialValueText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractspinbox.SpecialValueText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSpecialValueText(self: ?*anyopaque, txt: []const u8) void {
        const txt_str = qtc.libqt_string{
    .len = txt.len,
    .data = txt.ptr,
};
qtc.QAbstractSpinBox_SetSpecialValueText(@ptrCast(self), txt_str);
    }

    pub fn Wrapping(self: ?*anyopaque, ) bool {
        return qtc.QAbstractSpinBox_Wrapping(@ptrCast(self));
    }

    pub fn SetWrapping(self: ?*anyopaque, w: bool) void {
        qtc.QAbstractSpinBox_SetWrapping(@ptrCast(self), w);
    }

    pub fn SetReadOnly(self: ?*anyopaque, r: bool) void {
        qtc.QAbstractSpinBox_SetReadOnly(@ptrCast(self), r);
    }

    pub fn IsReadOnly(self: ?*anyopaque, ) bool {
        return qtc.QAbstractSpinBox_IsReadOnly(@ptrCast(self));
    }

    pub fn SetKeyboardTracking(self: ?*anyopaque, kt: bool) void {
        qtc.QAbstractSpinBox_SetKeyboardTracking(@ptrCast(self), kt);
    }

    pub fn KeyboardTracking(self: ?*anyopaque, ) bool {
        return qtc.QAbstractSpinBox_KeyboardTracking(@ptrCast(self));
    }

    pub fn SetAlignment(self: ?*anyopaque, flag: i32) void {
        qtc.QAbstractSpinBox_SetAlignment(@ptrCast(self), @intCast(flag));
    }

    pub fn Alignment(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractSpinBox_Alignment(@ptrCast(self));
    }

    pub fn SetFrame(self: ?*anyopaque, frame: bool) void {
        qtc.QAbstractSpinBox_SetFrame(@ptrCast(self), frame);
    }

    pub fn HasFrame(self: ?*anyopaque, ) bool {
        return qtc.QAbstractSpinBox_HasFrame(@ptrCast(self));
    }

    pub fn SetAccelerated(self: ?*anyopaque, on: bool) void {
        qtc.QAbstractSpinBox_SetAccelerated(@ptrCast(self), on);
    }

    pub fn IsAccelerated(self: ?*anyopaque, ) bool {
        return qtc.QAbstractSpinBox_IsAccelerated(@ptrCast(self));
    }

    pub fn SetGroupSeparatorShown(self: ?*anyopaque, shown: bool) void {
        qtc.QAbstractSpinBox_SetGroupSeparatorShown(@ptrCast(self), shown);
    }

    pub fn IsGroupSeparatorShown(self: ?*anyopaque, ) bool {
        return qtc.QAbstractSpinBox_IsGroupSeparatorShown(@ptrCast(self));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QAbstractSpinBox_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QAbstractSpinBox_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QAbstractSpinBox_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QAbstractSpinBox_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QAbstractSpinBox_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QAbstractSpinBox_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn InterpretText(self: ?*anyopaque, ) void {
        qtc.QAbstractSpinBox_InterpretText(@ptrCast(self));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAbstractSpinBox_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractSpinBox_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAbstractSpinBox_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn InputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.QAbstractSpinBox_InputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QAbstractSpinBox_OnInputMethodQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.QAbstractSpinBox_QBaseInputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    pub fn Validate(self: ?*anyopaque, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
    .len = input.len,
    .data = input.ptr,
};
return qtc.QAbstractSpinBox_Validate(@ptrCast(self), input_str, @ptrCast(pos));
    }

    /// Allows for overriding the related default method
    pub fn OnValidate(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, *i32) callconv(.c) i32) void {
        qtc.QAbstractSpinBox_OnValidate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseValidate(self: ?*anyopaque, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
    .len = input.len,
    .data = input.ptr,
};
return qtc.QAbstractSpinBox_QBaseValidate(@ptrCast(self), input_str, @ptrCast(pos));
    }

    pub fn Fixup(self: ?*anyopaque, input: []const u8) void {
        const input_str = qtc.libqt_string{
    .len = input.len,
    .data = input.ptr,
};
qtc.QAbstractSpinBox_Fixup(@ptrCast(self), input_str);
    }

    /// Allows for overriding the related default method
    pub fn OnFixup(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnFixup(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFixup(self: ?*anyopaque, input: []const u8) void {
        const input_str = qtc.libqt_string{
    .len = input.len,
    .data = input.ptr,
};
qtc.QAbstractSpinBox_QBaseFixup(@ptrCast(self), input_str);
    }

    pub fn StepBy(self: ?*anyopaque, steps: i32) void {
        qtc.QAbstractSpinBox_StepBy(@ptrCast(self), steps);
    }

    /// Allows for overriding the related default method
    pub fn OnStepBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnStepBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStepBy(self: ?*anyopaque, steps: i32) void {
        qtc.QAbstractSpinBox_QBaseStepBy(@ptrCast(self), steps);
    }

    pub fn StepUp(self: ?*anyopaque, ) void {
        qtc.QAbstractSpinBox_StepUp(@ptrCast(self));
    }

    pub fn StepDown(self: ?*anyopaque, ) void {
        qtc.QAbstractSpinBox_StepDown(@ptrCast(self));
    }

    pub fn SelectAll(self: ?*anyopaque, ) void {
        qtc.QAbstractSpinBox_SelectAll(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QAbstractSpinBox_Clear(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClear(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnClear(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClear(self: ?*anyopaque, ) void {
        qtc.QAbstractSpinBox_QBaseClear(@ptrCast(self));
    }

    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_QBaseWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_ChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_QBaseChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnCloseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnCloseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnHideEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn PaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_PaintEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_QBasePaintEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractSpinBox_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QAbstractSpinBox_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QAbstractSpinBox_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn LineEdit(self: ?*anyopaque, ) QtC.QLineEdit {
        return qtc.QAbstractSpinBox_LineEdit(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnLineEdit(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QLineEdit) void {
        qtc.QAbstractSpinBox_OnLineEdit(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLineEdit(self: ?*anyopaque, ) QtC.QLineEdit {
        return qtc.QAbstractSpinBox_QBaseLineEdit(@ptrCast(self));
    }

    pub fn SetLineEdit(self: ?*anyopaque, edit: ?*anyopaque) void {
        qtc.QAbstractSpinBox_SetLineEdit(@ptrCast(self), @ptrCast(edit));
    }

    /// Allows for overriding the related default method
    pub fn OnSetLineEdit(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSpinBox_OnSetLineEdit(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetLineEdit(self: ?*anyopaque, edit: ?*anyopaque) void {
        qtc.QAbstractSpinBox_QBaseSetLineEdit(@ptrCast(self), @ptrCast(edit));
    }

    pub fn StepEnabled(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractSpinBox_StepEnabled(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnStepEnabled(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractSpinBox_OnStepEnabled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStepEnabled(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractSpinBox_QBaseStepEnabled(@ptrCast(self));
    }

    pub fn EditingFinished(self: ?*anyopaque, ) void {
        qtc.QAbstractSpinBox_EditingFinished(@ptrCast(self));
    }

    pub fn OnEditingFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSpinBox_Connect_EditingFinished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSpinBox_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractspinbox.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSpinBox_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractspinbox.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractSpinBox_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/abstractspinbox.html#types
pub const enums = struct {
    pub const StepEnabledFlag = enum {
        pub const StepNone: i32 = 0;
        pub const StepUpEnabled: i32 = 1;
        pub const StepDownEnabled: i32 = 2;
    };

    pub const ButtonSymbols = enum {
        pub const UpDownArrows: i32 = 0;
        pub const PlusMinus: i32 = 1;
        pub const NoButtons: i32 = 2;
    };

    pub const CorrectionMode = enum {
        pub const CorrectToPreviousValue: i32 = 0;
        pub const CorrectToNearestValue: i32 = 1;
    };

    pub const StepType = enum {
        pub const DefaultStepType: i32 = 0;
        pub const AdaptiveDecimalStepType: i32 = 1;
    };

};
