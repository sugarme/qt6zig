const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qfontdialog.html
pub const qfontdialog = struct {

    /// New constructs a new QFontDialog object.
    pub fn New(parent: ?*anyopaque) QtC.QFontDialog {
        return qtc.QFontDialog_new(@ptrCast(parent));
    }


    /// New2 constructs a new QFontDialog object.
    pub fn New2() QtC.QFontDialog {
        return qtc.QFontDialog_new2();
    }


    /// New3 constructs a new QFontDialog object.
    pub fn New3(initial: ?*anyopaque) QtC.QFontDialog {
        return qtc.QFontDialog_new3(@ptrCast(initial));
    }


    /// New4 constructs a new QFontDialog object.
    pub fn New4(initial: ?*anyopaque, parent: ?*anyopaque) QtC.QFontDialog {
        return qtc.QFontDialog_new4(@ptrCast(initial), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFontDialog_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontdialog.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetCurrentFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QFontDialog_SetCurrentFont(@ptrCast(self), @ptrCast(font));
    }

    pub fn CurrentFont(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QFontDialog_CurrentFont(@ptrCast(self));
    }

    pub fn SelectedFont(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QFontDialog_SelectedFont(@ptrCast(self));
    }

    pub fn SetOption(self: ?*anyopaque, option: i32) void {
        qtc.QFontDialog_SetOption(@ptrCast(self), @intCast(option));
    }

    pub fn TestOption(self: ?*anyopaque, option: i32) bool {
        return qtc.QFontDialog_TestOption(@ptrCast(self), @intCast(option));
    }

    pub fn SetOptions(self: ?*anyopaque, options: i32) void {
        qtc.QFontDialog_SetOptions(@ptrCast(self), @intCast(options));
    }

    pub fn Options(self: ?*anyopaque, ) i32 {
        return qtc.QFontDialog_Options(@ptrCast(self));
    }

    pub fn Open(self: ?*anyopaque, receiver: ?*anyopaque, member: []const u8) void {
        qtc.QFontDialog_Open(@ptrCast(self), @ptrCast(receiver), @ptrCast(member));
    }

    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QFontDialog_SetVisible(@ptrCast(self), visible);
    }

    /// Allows for overriding the related default method
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QFontDialog_OnSetVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QFontDialog_QBaseSetVisible(@ptrCast(self), visible);
    }

    pub fn GetFont(ok: *bool) QtC.QFont {
        return qtc.QFontDialog_GetFont(@ptrCast(ok));
    }

    pub fn GetFont2(ok: *bool, initial: ?*anyopaque) QtC.QFont {
        return qtc.QFontDialog_GetFont2(@ptrCast(ok), @ptrCast(initial));
    }

    pub fn CurrentFontChanged(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QFontDialog_CurrentFontChanged(@ptrCast(self), @ptrCast(font));
    }

    pub fn OnCurrentFontChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFontDialog_Connect_CurrentFontChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FontSelected(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QFontDialog_FontSelected(@ptrCast(self), @ptrCast(font));
    }

    pub fn OnFontSelected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFontDialog_Connect_FontSelected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QFontDialog_ChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFontDialog_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QFontDialog_QBaseChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Done(self: ?*anyopaque, result: i32) void {
        qtc.QFontDialog_Done(@ptrCast(self), result);
    }

    /// Allows for overriding the related default method
    pub fn OnDone(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QFontDialog_OnDone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDone(self: ?*anyopaque, result: i32) void {
        qtc.QFontDialog_QBaseDone(@ptrCast(self), result);
    }

    pub fn EventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QFontDialog_EventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QFontDialog_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QFontDialog_QBaseEventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFontDialog_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontdialog.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFontDialog_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontdialog.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetOption2(self: ?*anyopaque, option: i32, on: bool) void {
        qtc.QFontDialog_SetOption2(@ptrCast(self), @intCast(option), on);
    }

    pub fn GetFont22(ok: *bool, parent: ?*anyopaque) QtC.QFont {
        return qtc.QFontDialog_GetFont22(@ptrCast(ok), @ptrCast(parent));
    }

    pub fn GetFont3(ok: *bool, initial: ?*anyopaque, parent: ?*anyopaque) QtC.QFont {
        return qtc.QFontDialog_GetFont3(@ptrCast(ok), @ptrCast(initial), @ptrCast(parent));
    }

    pub fn GetFont4(ok: *bool, initial: ?*anyopaque, parent: ?*anyopaque, title: []const u8) QtC.QFont {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
return qtc.QFontDialog_GetFont4(@ptrCast(ok), @ptrCast(initial), @ptrCast(parent), title_str);
    }

    pub fn GetFont5(ok: *bool, initial: ?*anyopaque, parent: ?*anyopaque, title: []const u8, options: i32) QtC.QFont {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
return qtc.QFontDialog_GetFont5(@ptrCast(ok), @ptrCast(initial), @ptrCast(parent), title_str, @intCast(options));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFontDialog_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/fontdialog.html#types
pub const enums = struct {
    pub const FontDialogOption = enum {
        pub const NoButtons: i32 = 1;
        pub const DontUseNativeDialog: i32 = 2;
        pub const ScalableFonts: i32 = 4;
        pub const NonScalableFonts: i32 = 8;
        pub const MonospacedFonts: i32 = 16;
        pub const ProportionalFonts: i32 = 32;
    };

};
