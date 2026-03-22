const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qprogressdialog.html
pub const qprogressdialog = struct {

    /// New constructs a new QProgressDialog object.
    pub fn New(parent: ?*anyopaque) QtC.QProgressDialog {
        return qtc.QProgressDialog_new(@ptrCast(parent));
    }


    /// New2 constructs a new QProgressDialog object.
    pub fn New2() QtC.QProgressDialog {
        return qtc.QProgressDialog_new2();
    }


    /// New3 constructs a new QProgressDialog object.
    pub fn New3(labelText: []const u8, cancelButtonText: []const u8, minimum: i32, maximum: i32) QtC.QProgressDialog {
        const labelText_str = qtc.libqt_string{
    .len = labelText.len,
    .data = labelText.ptr,
};
const cancelButtonText_str = qtc.libqt_string{
    .len = cancelButtonText.len,
    .data = cancelButtonText.ptr,
};
return qtc.QProgressDialog_new3(labelText_str, cancelButtonText_str, minimum, maximum);
    }


    /// New4 constructs a new QProgressDialog object.
    pub fn New4(parent: ?*anyopaque, flags: i64) QtC.QProgressDialog {
        return qtc.QProgressDialog_new4(@ptrCast(parent), @intCast(flags));
    }


    /// New5 constructs a new QProgressDialog object.
    pub fn New5(labelText: []const u8, cancelButtonText: []const u8, minimum: i32, maximum: i32, parent: ?*anyopaque) QtC.QProgressDialog {
        const labelText_str = qtc.libqt_string{
    .len = labelText.len,
    .data = labelText.ptr,
};
const cancelButtonText_str = qtc.libqt_string{
    .len = cancelButtonText.len,
    .data = cancelButtonText.ptr,
};
return qtc.QProgressDialog_new5(labelText_str, cancelButtonText_str, minimum, maximum, @ptrCast(parent));
    }


    /// New6 constructs a new QProgressDialog object.
    pub fn New6(labelText: []const u8, cancelButtonText: []const u8, minimum: i32, maximum: i32, parent: ?*anyopaque, flags: i64) QtC.QProgressDialog {
        const labelText_str = qtc.libqt_string{
    .len = labelText.len,
    .data = labelText.ptr,
};
const cancelButtonText_str = qtc.libqt_string{
    .len = cancelButtonText.len,
    .data = cancelButtonText.ptr,
};
return qtc.QProgressDialog_new6(labelText_str, cancelButtonText_str, minimum, maximum, @ptrCast(parent), @intCast(flags));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProgressDialog_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprogressdialog.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetLabel(self: ?*anyopaque, label: ?*anyopaque) void {
        qtc.QProgressDialog_SetLabel(@ptrCast(self), @ptrCast(label));
    }

    pub fn SetCancelButton(self: ?*anyopaque, button: ?*anyopaque) void {
        qtc.QProgressDialog_SetCancelButton(@ptrCast(self), @ptrCast(button));
    }

    pub fn SetBar(self: ?*anyopaque, bar: ?*anyopaque) void {
        qtc.QProgressDialog_SetBar(@ptrCast(self), @ptrCast(bar));
    }

    pub fn WasCanceled(self: ?*anyopaque, ) bool {
        return qtc.QProgressDialog_WasCanceled(@ptrCast(self));
    }

    pub fn Minimum(self: ?*anyopaque, ) i32 {
        return qtc.QProgressDialog_Minimum(@ptrCast(self));
    }

    pub fn Maximum(self: ?*anyopaque, ) i32 {
        return qtc.QProgressDialog_Maximum(@ptrCast(self));
    }

    pub fn Value(self: ?*anyopaque, ) i32 {
        return qtc.QProgressDialog_Value(@ptrCast(self));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QProgressDialog_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QProgressDialog_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QProgressDialog_QBaseSizeHint(@ptrCast(self));
    }

    pub fn LabelText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProgressDialog_LabelText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprogressdialog.LabelText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn MinimumDuration(self: ?*anyopaque, ) i32 {
        return qtc.QProgressDialog_MinimumDuration(@ptrCast(self));
    }

    pub fn SetAutoReset(self: ?*anyopaque, reset: bool) void {
        qtc.QProgressDialog_SetAutoReset(@ptrCast(self), reset);
    }

    pub fn AutoReset(self: ?*anyopaque, ) bool {
        return qtc.QProgressDialog_AutoReset(@ptrCast(self));
    }

    pub fn SetAutoClose(self: ?*anyopaque, close: bool) void {
        qtc.QProgressDialog_SetAutoClose(@ptrCast(self), close);
    }

    pub fn AutoClose(self: ?*anyopaque, ) bool {
        return qtc.QProgressDialog_AutoClose(@ptrCast(self));
    }

    pub fn Open(self: ?*anyopaque, receiver: ?*anyopaque, member: []const u8) void {
        qtc.QProgressDialog_Open(@ptrCast(self), @ptrCast(receiver), @ptrCast(member));
    }

    pub fn Cancel(self: ?*anyopaque, ) void {
        qtc.QProgressDialog_Cancel(@ptrCast(self));
    }

    pub fn Reset(self: ?*anyopaque, ) void {
        qtc.QProgressDialog_Reset(@ptrCast(self));
    }

    pub fn SetMaximum(self: ?*anyopaque, maximum: i32) void {
        qtc.QProgressDialog_SetMaximum(@ptrCast(self), maximum);
    }

    pub fn SetMinimum(self: ?*anyopaque, minimum: i32) void {
        qtc.QProgressDialog_SetMinimum(@ptrCast(self), minimum);
    }

    pub fn SetRange(self: ?*anyopaque, minimum: i32, maximum: i32) void {
        qtc.QProgressDialog_SetRange(@ptrCast(self), minimum, maximum);
    }

    pub fn SetValue(self: ?*anyopaque, progress: i32) void {
        qtc.QProgressDialog_SetValue(@ptrCast(self), progress);
    }

    pub fn SetLabelText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QProgressDialog_SetLabelText(@ptrCast(self), text_str);
    }

    pub fn SetCancelButtonText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QProgressDialog_SetCancelButtonText(@ptrCast(self), text_str);
    }

    pub fn SetMinimumDuration(self: ?*anyopaque, ms: i32) void {
        qtc.QProgressDialog_SetMinimumDuration(@ptrCast(self), ms);
    }

    pub fn Canceled(self: ?*anyopaque, ) void {
        qtc.QProgressDialog_Canceled(@ptrCast(self));
    }

    pub fn OnCanceled(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QProgressDialog_Connect_Canceled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProgressDialog_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProgressDialog_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProgressDialog_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProgressDialog_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnCloseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProgressDialog_OnCloseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProgressDialog_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProgressDialog_ChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProgressDialog_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProgressDialog_QBaseChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProgressDialog_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProgressDialog_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProgressDialog_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ForceShow(self: ?*anyopaque, ) void {
        qtc.QProgressDialog_ForceShow(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnForceShow(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QProgressDialog_OnForceShow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseForceShow(self: ?*anyopaque, ) void {
        qtc.QProgressDialog_QBaseForceShow(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProgressDialog_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprogressdialog.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProgressDialog_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprogressdialog.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QProgressDialog_Delete(@ptrCast(self));
    }
};
