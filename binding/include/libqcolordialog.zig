const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcolordialog.html
pub const qcolordialog = struct {

    /// New constructs a new QColorDialog object.
    pub fn New(parent: ?*anyopaque) QtC.QColorDialog {
        return qtc.QColorDialog_new(@ptrCast(parent));
    }


    /// New2 constructs a new QColorDialog object.
    pub fn New2() QtC.QColorDialog {
        return qtc.QColorDialog_new2();
    }


    /// New3 constructs a new QColorDialog object.
    pub fn New3(initial: ?*anyopaque) QtC.QColorDialog {
        return qtc.QColorDialog_new3(@ptrCast(initial));
    }


    /// New4 constructs a new QColorDialog object.
    pub fn New4(initial: ?*anyopaque, parent: ?*anyopaque) QtC.QColorDialog {
        return qtc.QColorDialog_new4(@ptrCast(initial), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QColorDialog_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolordialog.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetCurrentColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QColorDialog_SetCurrentColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn CurrentColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QColorDialog_CurrentColor(@ptrCast(self));
    }

    pub fn SelectedColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QColorDialog_SelectedColor(@ptrCast(self));
    }

    pub fn SetOption(self: ?*anyopaque, option: i32) void {
        qtc.QColorDialog_SetOption(@ptrCast(self), @intCast(option));
    }

    pub fn TestOption(self: ?*anyopaque, option: i32) bool {
        return qtc.QColorDialog_TestOption(@ptrCast(self), @intCast(option));
    }

    pub fn SetOptions(self: ?*anyopaque, options: i32) void {
        qtc.QColorDialog_SetOptions(@ptrCast(self), @intCast(options));
    }

    pub fn Options(self: ?*anyopaque, ) i32 {
        return qtc.QColorDialog_Options(@ptrCast(self));
    }

    pub fn Open(self: ?*anyopaque, receiver: ?*anyopaque, member: []const u8) void {
        qtc.QColorDialog_Open(@ptrCast(self), @ptrCast(receiver), @ptrCast(member));
    }

    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QColorDialog_SetVisible(@ptrCast(self), visible);
    }

    /// Allows for overriding the related default method
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QColorDialog_OnSetVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QColorDialog_QBaseSetVisible(@ptrCast(self), visible);
    }

    pub fn GetColor() QtC.QColor {
        return qtc.QColorDialog_GetColor();
    }

    pub fn CustomCount() i32 {
        return qtc.QColorDialog_CustomCount();
    }

    pub fn CustomColor(index: i32) QtC.QColor {
        return qtc.QColorDialog_CustomColor(index);
    }

    pub fn SetCustomColor(index: i32, color: QtC.QColor) void {
        qtc.QColorDialog_SetCustomColor(index, @ptrCast(color));
    }

    pub fn StandardColor(index: i32) QtC.QColor {
        return qtc.QColorDialog_StandardColor(index);
    }

    pub fn SetStandardColor(index: i32, color: QtC.QColor) void {
        qtc.QColorDialog_SetStandardColor(index, @ptrCast(color));
    }

    pub fn CurrentColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QColorDialog_CurrentColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnCurrentColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColorDialog_Connect_CurrentColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ColorSelected(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QColorDialog_ColorSelected(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnColorSelected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColorDialog_Connect_ColorSelected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColorDialog_ChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColorDialog_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QColorDialog_QBaseChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Done(self: ?*anyopaque, result: i32) void {
        qtc.QColorDialog_Done(@ptrCast(self), result);
    }

    /// Allows for overriding the related default method
    pub fn OnDone(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QColorDialog_OnDone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDone(self: ?*anyopaque, result: i32) void {
        qtc.QColorDialog_QBaseDone(@ptrCast(self), result);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QColorDialog_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolordialog.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QColorDialog_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolordialog.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetOption2(self: ?*anyopaque, option: i32, on: bool) void {
        qtc.QColorDialog_SetOption2(@ptrCast(self), @intCast(option), on);
    }

    pub fn GetColor1(initial: ?*anyopaque) QtC.QColor {
        return qtc.QColorDialog_GetColor1(@ptrCast(initial));
    }

    pub fn GetColor2(initial: ?*anyopaque, parent: ?*anyopaque) QtC.QColor {
        return qtc.QColorDialog_GetColor2(@ptrCast(initial), @ptrCast(parent));
    }

    pub fn GetColor3(initial: ?*anyopaque, parent: ?*anyopaque, title: []const u8) QtC.QColor {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
return qtc.QColorDialog_GetColor3(@ptrCast(initial), @ptrCast(parent), title_str);
    }

    pub fn GetColor4(initial: ?*anyopaque, parent: ?*anyopaque, title: []const u8, options: i32) QtC.QColor {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
return qtc.QColorDialog_GetColor4(@ptrCast(initial), @ptrCast(parent), title_str, @intCast(options));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QColorDialog_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/colordialog.html#types
pub const enums = struct {
    pub const ColorDialogOption = enum {
        pub const ShowAlphaChannel: i32 = 1;
        pub const NoButtons: i32 = 2;
        pub const DontUseNativeDialog: i32 = 4;
        pub const NoEyeDropperButton: i32 = 8;
    };

};
