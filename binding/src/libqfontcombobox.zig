const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qfontcombobox.html
pub const qfontcombobox = struct {

    /// New constructs a new QFontComboBox object.
    pub fn New(parent: ?*anyopaque) QtC.QFontComboBox {
        return qtc.QFontComboBox_new(@ptrCast(parent));
    }


    /// New2 constructs a new QFontComboBox object.
    pub fn New2() QtC.QFontComboBox {
        return qtc.QFontComboBox_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFontComboBox_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontcombobox.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetWritingSystem(self: ?*anyopaque, writingSystem: i32) void {
        qtc.QFontComboBox_SetWritingSystem(@ptrCast(self), @intCast(writingSystem));
    }

    pub fn WritingSystem(self: ?*anyopaque, ) i32 {
        return qtc.QFontComboBox_WritingSystem(@ptrCast(self));
    }

    pub fn SetFontFilters(self: ?*anyopaque, filters: i32) void {
        qtc.QFontComboBox_SetFontFilters(@ptrCast(self), @intCast(filters));
    }

    pub fn FontFilters(self: ?*anyopaque, ) i32 {
        return qtc.QFontComboBox_FontFilters(@ptrCast(self));
    }

    pub fn CurrentFont(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QFontComboBox_CurrentFont(@ptrCast(self));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QFontComboBox_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QFontComboBox_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QFontComboBox_QBaseSizeHint(@ptrCast(self));
    }

    pub fn SetSampleTextForSystem(self: ?*anyopaque, writingSystem: i32, sampleText: []const u8) void {
        const sampleText_str = qtc.libqt_string{
    .len = sampleText.len,
    .data = sampleText.ptr,
};
qtc.QFontComboBox_SetSampleTextForSystem(@ptrCast(self), @intCast(writingSystem), sampleText_str);
    }

    pub fn SampleTextForSystem(self: ?*anyopaque, writingSystem: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFontComboBox_SampleTextForSystem(@ptrCast(self), @intCast(writingSystem));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontcombobox.SampleTextForSystem: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSampleTextForFont(self: ?*anyopaque, fontFamily: []const u8, sampleText: []const u8) void {
        const fontFamily_str = qtc.libqt_string{
    .len = fontFamily.len,
    .data = fontFamily.ptr,
};
const sampleText_str = qtc.libqt_string{
    .len = sampleText.len,
    .data = sampleText.ptr,
};
qtc.QFontComboBox_SetSampleTextForFont(@ptrCast(self), fontFamily_str, sampleText_str);
    }

    pub fn SampleTextForFont(self: ?*anyopaque, fontFamily: []const u8, allocator: std.mem.Allocator) []const u8 {
        const fontFamily_str = qtc.libqt_string{
    .len = fontFamily.len,
    .data = fontFamily.ptr,
};
const _str = qtc.QFontComboBox_SampleTextForFont(@ptrCast(self), fontFamily_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontcombobox.SampleTextForFont: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetDisplayFont(self: ?*anyopaque, fontFamily: []const u8, font: ?*anyopaque) void {
        const fontFamily_str = qtc.libqt_string{
    .len = fontFamily.len,
    .data = fontFamily.ptr,
};
qtc.QFontComboBox_SetDisplayFont(@ptrCast(self), fontFamily_str, @ptrCast(font));
    }

    pub fn SetCurrentFont(self: ?*anyopaque, f: ?*anyopaque) void {
        qtc.QFontComboBox_SetCurrentFont(@ptrCast(self), @ptrCast(f));
    }

    pub fn CurrentFontChanged(self: ?*anyopaque, f: ?*anyopaque) void {
        qtc.QFontComboBox_CurrentFontChanged(@ptrCast(self), @ptrCast(f));
    }

    pub fn OnCurrentFontChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFontComboBox_Connect_CurrentFontChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QFontComboBox_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QFontComboBox_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QFontComboBox_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFontComboBox_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontcombobox.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFontComboBox_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontcombobox.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFontComboBox_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/fontcombobox.html#types
pub const enums = struct {
    pub const FontFilter = enum {
        pub const AllFonts: i32 = 0;
        pub const ScalableFonts: i32 = 1;
        pub const NonScalableFonts: i32 = 2;
        pub const MonospacedFonts: i32 = 4;
        pub const ProportionalFonts: i32 = 8;
    };

};
