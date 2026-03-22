const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmessagebox.html
pub const qmessagebox = struct {

    /// New constructs a new QMessageBox object.
    pub fn New(parent: ?*anyopaque) QtC.QMessageBox {
        return qtc.QMessageBox_new(@ptrCast(parent));
    }


    /// New2 constructs a new QMessageBox object.
    pub fn New2() QtC.QMessageBox {
        return qtc.QMessageBox_new2();
    }


    /// New3 constructs a new QMessageBox object.
    pub fn New3(icon: i32, title: []const u8, text: []const u8) QtC.QMessageBox {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_new3(@intCast(icon), title_str, text_str);
    }


    /// New4 constructs a new QMessageBox object.
    pub fn New4(title: []const u8, text: []const u8, icon: i32, button0: i32, button1: i32, button2: i32) QtC.QMessageBox {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_new4(title_str, text_str, @intCast(icon), button0, button1, button2);
    }


    /// New5 constructs a new QMessageBox object.
    pub fn New5(icon: i32, title: []const u8, text: []const u8, buttons: i32) QtC.QMessageBox {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_new5(@intCast(icon), title_str, text_str, @intCast(buttons));
    }


    /// New6 constructs a new QMessageBox object.
    pub fn New6(icon: i32, title: []const u8, text: []const u8, buttons: i32, parent: ?*anyopaque) QtC.QMessageBox {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_new6(@intCast(icon), title_str, text_str, @intCast(buttons), @ptrCast(parent));
    }


    /// New7 constructs a new QMessageBox object.
    pub fn New7(icon: i32, title: []const u8, text: []const u8, buttons: i32, parent: ?*anyopaque, flags: i64) QtC.QMessageBox {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_new7(@intCast(icon), title_str, text_str, @intCast(buttons), @ptrCast(parent), @intCast(flags));
    }


    /// New8 constructs a new QMessageBox object.
    pub fn New8(title: []const u8, text: []const u8, icon: i32, button0: i32, button1: i32, button2: i32, parent: ?*anyopaque) QtC.QMessageBox {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_new8(title_str, text_str, @intCast(icon), button0, button1, button2, @ptrCast(parent));
    }


    /// New9 constructs a new QMessageBox object.
    pub fn New9(title: []const u8, text: []const u8, icon: i32, button0: i32, button1: i32, button2: i32, parent: ?*anyopaque, f: i64) QtC.QMessageBox {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_new9(title_str, text_str, @intCast(icon), button0, button1, button2, @ptrCast(parent), @intCast(f));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMessageBox_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddButton(self: ?*anyopaque, button: ?*anyopaque, role: i32) void {
        qtc.QMessageBox_AddButton(@ptrCast(self), @ptrCast(button), @intCast(role));
    }

    pub fn AddButton2(self: ?*anyopaque, text: []const u8, role: i32) QtC.QPushButton {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_AddButton2(@ptrCast(self), text_str, @intCast(role));
    }

    pub fn AddButton3(self: ?*anyopaque, button: i32) QtC.QPushButton {
        return qtc.QMessageBox_AddButton3(@ptrCast(self), @intCast(button));
    }

    pub fn RemoveButton(self: ?*anyopaque, button: ?*anyopaque) void {
        qtc.QMessageBox_RemoveButton(@ptrCast(self), @ptrCast(button));
    }

    pub fn Open(self: ?*anyopaque, receiver: ?*anyopaque, member: []const u8) void {
        qtc.QMessageBox_Open(@ptrCast(self), @ptrCast(receiver), @ptrCast(member));
    }

    pub fn Buttons(self: ?*anyopaque, ) []const u8 {
        return qtc.QMessageBox_Buttons(@ptrCast(self));
    }

    pub fn ButtonRole(self: ?*anyopaque, button: ?*anyopaque) i32 {
        return qtc.QMessageBox_ButtonRole(@ptrCast(self), @ptrCast(button));
    }

    pub fn SetStandardButtons(self: ?*anyopaque, buttons: i32) void {
        qtc.QMessageBox_SetStandardButtons(@ptrCast(self), @intCast(buttons));
    }

    pub fn StandardButtons(self: ?*anyopaque, ) i32 {
        return qtc.QMessageBox_StandardButtons(@ptrCast(self));
    }

    pub fn StandardButton(self: ?*anyopaque, button: ?*anyopaque) i32 {
        return qtc.QMessageBox_StandardButton(@ptrCast(self), @ptrCast(button));
    }

    pub fn Button(self: ?*anyopaque, which: i32) QtC.QAbstractButton {
        return qtc.QMessageBox_Button(@ptrCast(self), @intCast(which));
    }

    pub fn DefaultButton(self: ?*anyopaque, ) QtC.QPushButton {
        return qtc.QMessageBox_DefaultButton(@ptrCast(self));
    }

    pub fn SetDefaultButton(self: ?*anyopaque, button: ?*anyopaque) void {
        qtc.QMessageBox_SetDefaultButton(@ptrCast(self), @ptrCast(button));
    }

    pub fn SetDefaultButton2(self: ?*anyopaque, button: i32) void {
        qtc.QMessageBox_SetDefaultButton2(@ptrCast(self), @intCast(button));
    }

    pub fn EscapeButton(self: ?*anyopaque, ) QtC.QAbstractButton {
        return qtc.QMessageBox_EscapeButton(@ptrCast(self));
    }

    pub fn SetEscapeButton(self: ?*anyopaque, button: ?*anyopaque) void {
        qtc.QMessageBox_SetEscapeButton(@ptrCast(self), @ptrCast(button));
    }

    pub fn SetEscapeButton2(self: ?*anyopaque, button: i32) void {
        qtc.QMessageBox_SetEscapeButton2(@ptrCast(self), @intCast(button));
    }

    pub fn ClickedButton(self: ?*anyopaque, ) QtC.QAbstractButton {
        return qtc.QMessageBox_ClickedButton(@ptrCast(self));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMessageBox_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QMessageBox_SetText(@ptrCast(self), text_str);
    }

    pub fn Icon(self: ?*anyopaque, ) i32 {
        return qtc.QMessageBox_Icon(@ptrCast(self));
    }

    pub fn SetIcon(self: ?*anyopaque, icon: i32) void {
        qtc.QMessageBox_SetIcon(@ptrCast(self), @intCast(icon));
    }

    pub fn IconPixmap(self: ?*anyopaque, ) QtC.QPixmap {
        return qtc.QMessageBox_IconPixmap(@ptrCast(self));
    }

    pub fn SetIconPixmap(self: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.QMessageBox_SetIconPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    pub fn TextFormat(self: ?*anyopaque, ) i32 {
        return qtc.QMessageBox_TextFormat(@ptrCast(self));
    }

    pub fn SetTextFormat(self: ?*anyopaque, format: i32) void {
        qtc.QMessageBox_SetTextFormat(@ptrCast(self), @intCast(format));
    }

    pub fn SetTextInteractionFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QMessageBox_SetTextInteractionFlags(@ptrCast(self), @intCast(flags));
    }

    pub fn TextInteractionFlags(self: ?*anyopaque, ) i32 {
        return qtc.QMessageBox_TextInteractionFlags(@ptrCast(self));
    }

    pub fn SetCheckBox(self: ?*anyopaque, cb: ?*anyopaque) void {
        qtc.QMessageBox_SetCheckBox(@ptrCast(self), @ptrCast(cb));
    }

    pub fn CheckBox(self: ?*anyopaque, ) QtC.QCheckBox {
        return qtc.QMessageBox_CheckBox(@ptrCast(self));
    }

    pub fn SetOption(self: ?*anyopaque, option: i32) void {
        qtc.QMessageBox_SetOption(@ptrCast(self), @intCast(option));
    }

    pub fn TestOption(self: ?*anyopaque, option: i32) bool {
        return qtc.QMessageBox_TestOption(@ptrCast(self), @intCast(option));
    }

    pub fn SetOptions(self: ?*anyopaque, options: i32) void {
        qtc.QMessageBox_SetOptions(@ptrCast(self), @intCast(options));
    }

    pub fn Options(self: ?*anyopaque, ) i32 {
        return qtc.QMessageBox_Options(@ptrCast(self));
    }

    pub fn Information(parent: ?*anyopaque, title: []const u8, text: []const u8) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Information(@ptrCast(parent), title_str, text_str);
    }

    pub fn Information2(parent: ?*anyopaque, title: []const u8, text: []const u8, button0: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Information2(@ptrCast(parent), title_str, text_str, @intCast(button0));
    }

    pub fn Question(parent: ?*anyopaque, title: []const u8, text: []const u8) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Question(@ptrCast(parent), title_str, text_str);
    }

    pub fn Question2(parent: ?*anyopaque, title: []const u8, text: []const u8, button0: i32, button1: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Question2(@ptrCast(parent), title_str, text_str, @intCast(button0), @intCast(button1));
    }

    pub fn Warning(parent: ?*anyopaque, title: []const u8, text: []const u8) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Warning(@ptrCast(parent), title_str, text_str);
    }

    pub fn Warning2(parent: ?*anyopaque, title: []const u8, text: []const u8, button0: i32, button1: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Warning2(@ptrCast(parent), title_str, text_str, @intCast(button0), @intCast(button1));
    }

    pub fn Critical(parent: ?*anyopaque, title: []const u8, text: []const u8) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Critical(@ptrCast(parent), title_str, text_str);
    }

    pub fn Critical2(parent: ?*anyopaque, title: []const u8, text: []const u8, button0: i32, button1: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Critical2(@ptrCast(parent), title_str, text_str, @intCast(button0), @intCast(button1));
    }

    pub fn About(parent: ?*anyopaque, title: []const u8, text: []const u8) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QMessageBox_About(@ptrCast(parent), title_str, text_str);
    }

    pub fn AboutQt(parent: ?*anyopaque) void {
        qtc.QMessageBox_AboutQt(@ptrCast(parent));
    }

    pub fn Information3(parent: ?*anyopaque, title: []const u8, text: []const u8, button0: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Information3(@ptrCast(parent), title_str, text_str, button0);
    }

    pub fn Information4(parent: ?*anyopaque, title: []const u8, text: []const u8, button0Text: []const u8) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const button0Text_str = qtc.libqt_string{
    .len = button0Text.len,
    .data = button0Text.ptr,
};
return qtc.QMessageBox_Information4(@ptrCast(parent), title_str, text_str, button0Text_str);
    }

    pub fn Question3(parent: ?*anyopaque, title: []const u8, text: []const u8, button0: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Question3(@ptrCast(parent), title_str, text_str, button0);
    }

    pub fn Question4(parent: ?*anyopaque, title: []const u8, text: []const u8, button0Text: []const u8) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const button0Text_str = qtc.libqt_string{
    .len = button0Text.len,
    .data = button0Text.ptr,
};
return qtc.QMessageBox_Question4(@ptrCast(parent), title_str, text_str, button0Text_str);
    }

    pub fn Warning3(parent: ?*anyopaque, title: []const u8, text: []const u8, button0: i32, button1: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Warning3(@ptrCast(parent), title_str, text_str, button0, button1);
    }

    pub fn Warning4(parent: ?*anyopaque, title: []const u8, text: []const u8, button0Text: []const u8) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const button0Text_str = qtc.libqt_string{
    .len = button0Text.len,
    .data = button0Text.ptr,
};
return qtc.QMessageBox_Warning4(@ptrCast(parent), title_str, text_str, button0Text_str);
    }

    pub fn Critical3(parent: ?*anyopaque, title: []const u8, text: []const u8, button0: i32, button1: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Critical3(@ptrCast(parent), title_str, text_str, button0, button1);
    }

    pub fn Critical4(parent: ?*anyopaque, title: []const u8, text: []const u8, button0Text: []const u8) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const button0Text_str = qtc.libqt_string{
    .len = button0Text.len,
    .data = button0Text.ptr,
};
return qtc.QMessageBox_Critical4(@ptrCast(parent), title_str, text_str, button0Text_str);
    }

    pub fn ButtonText(self: ?*anyopaque, button: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMessageBox_ButtonText(@ptrCast(self), button);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.ButtonText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetButtonText(self: ?*anyopaque, button: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QMessageBox_SetButtonText(@ptrCast(self), button, text_str);
    }

    pub fn InformativeText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMessageBox_InformativeText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.InformativeText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetInformativeText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QMessageBox_SetInformativeText(@ptrCast(self), text_str);
    }

    pub fn DetailedText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMessageBox_DetailedText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.DetailedText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetDetailedText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QMessageBox_SetDetailedText(@ptrCast(self), text_str);
    }

    pub fn SetWindowTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
qtc.QMessageBox_SetWindowTitle(@ptrCast(self), title_str);
    }

    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i32) void {
        qtc.QMessageBox_SetWindowModality(@ptrCast(self), @intCast(windowModality));
    }

    pub fn StandardIcon(icon: i32) QtC.QPixmap {
        return qtc.QMessageBox_StandardIcon(@intCast(icon));
    }

    pub fn ButtonClicked(self: ?*anyopaque, button: ?*anyopaque) void {
        qtc.QMessageBox_ButtonClicked(@ptrCast(self), @ptrCast(button));
    }

    pub fn OnButtonClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMessageBox_Connect_ButtonClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QMessageBox_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QMessageBox_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QMessageBox_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMessageBox_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMessageBox_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMessageBox_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMessageBox_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMessageBox_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMessageBox_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMessageBox_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnCloseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMessageBox_OnCloseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMessageBox_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMessageBox_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMessageBox_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMessageBox_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMessageBox_ChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMessageBox_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QMessageBox_QBaseChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMessageBox_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMessageBox_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetOption2(self: ?*anyopaque, option: i32, on: bool) void {
        qtc.QMessageBox_SetOption2(@ptrCast(self), @intCast(option), on);
    }

    pub fn Information42(parent: ?*anyopaque, title: []const u8, text: []const u8, buttons: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Information42(@ptrCast(parent), title_str, text_str, @intCast(buttons));
    }

    pub fn Information5(parent: ?*anyopaque, title: []const u8, text: []const u8, buttons: i32, defaultButton: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Information5(@ptrCast(parent), title_str, text_str, @intCast(buttons), @intCast(defaultButton));
    }

    pub fn Information52(parent: ?*anyopaque, title: []const u8, text: []const u8, button0: i32, button1: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Information52(@ptrCast(parent), title_str, text_str, @intCast(button0), @intCast(button1));
    }

    pub fn Question42(parent: ?*anyopaque, title: []const u8, text: []const u8, buttons: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Question42(@ptrCast(parent), title_str, text_str, @intCast(buttons));
    }

    pub fn Question5(parent: ?*anyopaque, title: []const u8, text: []const u8, buttons: i32, defaultButton: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Question5(@ptrCast(parent), title_str, text_str, @intCast(buttons), @intCast(defaultButton));
    }

    pub fn Warning42(parent: ?*anyopaque, title: []const u8, text: []const u8, buttons: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Warning42(@ptrCast(parent), title_str, text_str, @intCast(buttons));
    }

    pub fn Warning5(parent: ?*anyopaque, title: []const u8, text: []const u8, buttons: i32, defaultButton: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Warning5(@ptrCast(parent), title_str, text_str, @intCast(buttons), @intCast(defaultButton));
    }

    pub fn Critical42(parent: ?*anyopaque, title: []const u8, text: []const u8, buttons: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Critical42(@ptrCast(parent), title_str, text_str, @intCast(buttons));
    }

    pub fn Critical5(parent: ?*anyopaque, title: []const u8, text: []const u8, buttons: i32, defaultButton: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Critical5(@ptrCast(parent), title_str, text_str, @intCast(buttons), @intCast(defaultButton));
    }

    pub fn AboutQt2(parent: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
qtc.QMessageBox_AboutQt2(@ptrCast(parent), title_str);
    }

    pub fn Information53(parent: ?*anyopaque, title: []const u8, text: []const u8, button0: i32, button1: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Information53(@ptrCast(parent), title_str, text_str, button0, button1);
    }

    pub fn Information6(parent: ?*anyopaque, title: []const u8, text: []const u8, button0: i32, button1: i32, button2: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Information6(@ptrCast(parent), title_str, text_str, button0, button1, button2);
    }

    pub fn Information54(parent: ?*anyopaque, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const button0Text_str = qtc.libqt_string{
    .len = button0Text.len,
    .data = button0Text.ptr,
};
const button1Text_str = qtc.libqt_string{
    .len = button1Text.len,
    .data = button1Text.ptr,
};
return qtc.QMessageBox_Information54(@ptrCast(parent), title_str, text_str, button0Text_str, button1Text_str);
    }

    pub fn Information62(parent: ?*anyopaque, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const button0Text_str = qtc.libqt_string{
    .len = button0Text.len,
    .data = button0Text.ptr,
};
const button1Text_str = qtc.libqt_string{
    .len = button1Text.len,
    .data = button1Text.ptr,
};
const button2Text_str = qtc.libqt_string{
    .len = button2Text.len,
    .data = button2Text.ptr,
};
return qtc.QMessageBox_Information62(@ptrCast(parent), title_str, text_str, button0Text_str, button1Text_str, button2Text_str);
    }

    pub fn Information7(parent: ?*anyopaque, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8, defaultButtonNumber: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const button0Text_str = qtc.libqt_string{
    .len = button0Text.len,
    .data = button0Text.ptr,
};
const button1Text_str = qtc.libqt_string{
    .len = button1Text.len,
    .data = button1Text.ptr,
};
const button2Text_str = qtc.libqt_string{
    .len = button2Text.len,
    .data = button2Text.ptr,
};
return qtc.QMessageBox_Information7(@ptrCast(parent), title_str, text_str, button0Text_str, button1Text_str, button2Text_str, defaultButtonNumber);
    }

    pub fn Information8(parent: ?*anyopaque, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8, defaultButtonNumber: i32, escapeButtonNumber: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const button0Text_str = qtc.libqt_string{
    .len = button0Text.len,
    .data = button0Text.ptr,
};
const button1Text_str = qtc.libqt_string{
    .len = button1Text.len,
    .data = button1Text.ptr,
};
const button2Text_str = qtc.libqt_string{
    .len = button2Text.len,
    .data = button2Text.ptr,
};
return qtc.QMessageBox_Information8(@ptrCast(parent), title_str, text_str, button0Text_str, button1Text_str, button2Text_str, defaultButtonNumber, escapeButtonNumber);
    }

    pub fn Question52(parent: ?*anyopaque, title: []const u8, text: []const u8, button0: i32, button1: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Question52(@ptrCast(parent), title_str, text_str, button0, button1);
    }

    pub fn Question6(parent: ?*anyopaque, title: []const u8, text: []const u8, button0: i32, button1: i32, button2: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Question6(@ptrCast(parent), title_str, text_str, button0, button1, button2);
    }

    pub fn Question53(parent: ?*anyopaque, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const button0Text_str = qtc.libqt_string{
    .len = button0Text.len,
    .data = button0Text.ptr,
};
const button1Text_str = qtc.libqt_string{
    .len = button1Text.len,
    .data = button1Text.ptr,
};
return qtc.QMessageBox_Question53(@ptrCast(parent), title_str, text_str, button0Text_str, button1Text_str);
    }

    pub fn Question62(parent: ?*anyopaque, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const button0Text_str = qtc.libqt_string{
    .len = button0Text.len,
    .data = button0Text.ptr,
};
const button1Text_str = qtc.libqt_string{
    .len = button1Text.len,
    .data = button1Text.ptr,
};
const button2Text_str = qtc.libqt_string{
    .len = button2Text.len,
    .data = button2Text.ptr,
};
return qtc.QMessageBox_Question62(@ptrCast(parent), title_str, text_str, button0Text_str, button1Text_str, button2Text_str);
    }

    pub fn Question7(parent: ?*anyopaque, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8, defaultButtonNumber: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const button0Text_str = qtc.libqt_string{
    .len = button0Text.len,
    .data = button0Text.ptr,
};
const button1Text_str = qtc.libqt_string{
    .len = button1Text.len,
    .data = button1Text.ptr,
};
const button2Text_str = qtc.libqt_string{
    .len = button2Text.len,
    .data = button2Text.ptr,
};
return qtc.QMessageBox_Question7(@ptrCast(parent), title_str, text_str, button0Text_str, button1Text_str, button2Text_str, defaultButtonNumber);
    }

    pub fn Question8(parent: ?*anyopaque, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8, defaultButtonNumber: i32, escapeButtonNumber: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const button0Text_str = qtc.libqt_string{
    .len = button0Text.len,
    .data = button0Text.ptr,
};
const button1Text_str = qtc.libqt_string{
    .len = button1Text.len,
    .data = button1Text.ptr,
};
const button2Text_str = qtc.libqt_string{
    .len = button2Text.len,
    .data = button2Text.ptr,
};
return qtc.QMessageBox_Question8(@ptrCast(parent), title_str, text_str, button0Text_str, button1Text_str, button2Text_str, defaultButtonNumber, escapeButtonNumber);
    }

    pub fn Warning6(parent: ?*anyopaque, title: []const u8, text: []const u8, button0: i32, button1: i32, button2: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Warning6(@ptrCast(parent), title_str, text_str, button0, button1, button2);
    }

    pub fn Warning52(parent: ?*anyopaque, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const button0Text_str = qtc.libqt_string{
    .len = button0Text.len,
    .data = button0Text.ptr,
};
const button1Text_str = qtc.libqt_string{
    .len = button1Text.len,
    .data = button1Text.ptr,
};
return qtc.QMessageBox_Warning52(@ptrCast(parent), title_str, text_str, button0Text_str, button1Text_str);
    }

    pub fn Warning62(parent: ?*anyopaque, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const button0Text_str = qtc.libqt_string{
    .len = button0Text.len,
    .data = button0Text.ptr,
};
const button1Text_str = qtc.libqt_string{
    .len = button1Text.len,
    .data = button1Text.ptr,
};
const button2Text_str = qtc.libqt_string{
    .len = button2Text.len,
    .data = button2Text.ptr,
};
return qtc.QMessageBox_Warning62(@ptrCast(parent), title_str, text_str, button0Text_str, button1Text_str, button2Text_str);
    }

    pub fn Warning7(parent: ?*anyopaque, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8, defaultButtonNumber: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const button0Text_str = qtc.libqt_string{
    .len = button0Text.len,
    .data = button0Text.ptr,
};
const button1Text_str = qtc.libqt_string{
    .len = button1Text.len,
    .data = button1Text.ptr,
};
const button2Text_str = qtc.libqt_string{
    .len = button2Text.len,
    .data = button2Text.ptr,
};
return qtc.QMessageBox_Warning7(@ptrCast(parent), title_str, text_str, button0Text_str, button1Text_str, button2Text_str, defaultButtonNumber);
    }

    pub fn Warning8(parent: ?*anyopaque, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8, defaultButtonNumber: i32, escapeButtonNumber: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const button0Text_str = qtc.libqt_string{
    .len = button0Text.len,
    .data = button0Text.ptr,
};
const button1Text_str = qtc.libqt_string{
    .len = button1Text.len,
    .data = button1Text.ptr,
};
const button2Text_str = qtc.libqt_string{
    .len = button2Text.len,
    .data = button2Text.ptr,
};
return qtc.QMessageBox_Warning8(@ptrCast(parent), title_str, text_str, button0Text_str, button1Text_str, button2Text_str, defaultButtonNumber, escapeButtonNumber);
    }

    pub fn Critical6(parent: ?*anyopaque, title: []const u8, text: []const u8, button0: i32, button1: i32, button2: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QMessageBox_Critical6(@ptrCast(parent), title_str, text_str, button0, button1, button2);
    }

    pub fn Critical52(parent: ?*anyopaque, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const button0Text_str = qtc.libqt_string{
    .len = button0Text.len,
    .data = button0Text.ptr,
};
const button1Text_str = qtc.libqt_string{
    .len = button1Text.len,
    .data = button1Text.ptr,
};
return qtc.QMessageBox_Critical52(@ptrCast(parent), title_str, text_str, button0Text_str, button1Text_str);
    }

    pub fn Critical62(parent: ?*anyopaque, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const button0Text_str = qtc.libqt_string{
    .len = button0Text.len,
    .data = button0Text.ptr,
};
const button1Text_str = qtc.libqt_string{
    .len = button1Text.len,
    .data = button1Text.ptr,
};
const button2Text_str = qtc.libqt_string{
    .len = button2Text.len,
    .data = button2Text.ptr,
};
return qtc.QMessageBox_Critical62(@ptrCast(parent), title_str, text_str, button0Text_str, button1Text_str, button2Text_str);
    }

    pub fn Critical7(parent: ?*anyopaque, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8, defaultButtonNumber: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const button0Text_str = qtc.libqt_string{
    .len = button0Text.len,
    .data = button0Text.ptr,
};
const button1Text_str = qtc.libqt_string{
    .len = button1Text.len,
    .data = button1Text.ptr,
};
const button2Text_str = qtc.libqt_string{
    .len = button2Text.len,
    .data = button2Text.ptr,
};
return qtc.QMessageBox_Critical7(@ptrCast(parent), title_str, text_str, button0Text_str, button1Text_str, button2Text_str, defaultButtonNumber);
    }

    pub fn Critical8(parent: ?*anyopaque, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8, defaultButtonNumber: i32, escapeButtonNumber: i32) i32 {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
const button0Text_str = qtc.libqt_string{
    .len = button0Text.len,
    .data = button0Text.ptr,
};
const button1Text_str = qtc.libqt_string{
    .len = button1Text.len,
    .data = button1Text.ptr,
};
const button2Text_str = qtc.libqt_string{
    .len = button2Text.len,
    .data = button2Text.ptr,
};
return qtc.QMessageBox_Critical8(@ptrCast(parent), title_str, text_str, button0Text_str, button1Text_str, button2Text_str, defaultButtonNumber, escapeButtonNumber);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMessageBox_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/messagebox.html#types
pub const enums = struct {
    pub const Option = enum {
        pub const DontUseNativeDialog: i32 = 1;
    };

    pub const Icon = enum {
        pub const NoIcon: i32 = 0;
        pub const Information: i32 = 1;
        pub const Warning: i32 = 2;
        pub const Critical: i32 = 3;
        pub const Question: i32 = 4;
    };

    pub const ButtonRole = enum {
        pub const InvalidRole: i32 = -1;
        pub const AcceptRole: i32 = 0;
        pub const RejectRole: i32 = 1;
        pub const DestructiveRole: i32 = 2;
        pub const ActionRole: i32 = 3;
        pub const HelpRole: i32 = 4;
        pub const YesRole: i32 = 5;
        pub const NoRole: i32 = 6;
        pub const ResetRole: i32 = 7;
        pub const ApplyRole: i32 = 8;
        pub const NRoles: i32 = 9;
    };

    pub const StandardButton = enum {
        pub const NoButton: i32 = 0;
        pub const Ok: i32 = 1024;
        pub const Save: i32 = 2048;
        pub const SaveAll: i32 = 4096;
        pub const Open: i32 = 8192;
        pub const Yes: i32 = 16384;
        pub const YesToAll: i32 = 32768;
        pub const No: i32 = 65536;
        pub const NoToAll: i32 = 131072;
        pub const Abort: i32 = 262144;
        pub const Retry: i32 = 524288;
        pub const Ignore: i32 = 1048576;
        pub const Close: i32 = 2097152;
        pub const Cancel: i32 = 4194304;
        pub const Discard: i32 = 8388608;
        pub const Help: i32 = 16777216;
        pub const Apply: i32 = 33554432;
        pub const Reset: i32 = 67108864;
        pub const RestoreDefaults: i32 = 134217728;
        pub const FirstButton: i32 = 1024;
        pub const LastButton: i32 = 134217728;
        pub const YesAll: i32 = 32768;
        pub const NoAll: i32 = 131072;
        pub const Default: i32 = 256;
        pub const Escape: i32 = 512;
        pub const FlagMask: i32 = 768;
        pub const ButtonMask: i32 = -769;
    };

};
