const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtranslator.html
pub const qtranslator = struct {

    /// New constructs a new QTranslator object.
    pub fn New() QtC.QTranslator {
        return qtc.QTranslator_new();
    }


    /// New2 constructs a new QTranslator object.
    pub fn New2(parent: ?*anyopaque) QtC.QTranslator {
        return qtc.QTranslator_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTranslator_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtranslator.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Translate(self: ?*anyopaque, context: []const u8, sourceText: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTranslator_Translate(@ptrCast(self), @ptrCast(context), @ptrCast(sourceText), @ptrCast(disambiguation), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtranslator.Translate: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnTranslate(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QTranslator_OnTranslate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTranslate(self: ?*anyopaque, context: []const u8, sourceText: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTranslator_QBaseTranslate(@ptrCast(self), @ptrCast(context), @ptrCast(sourceText), @ptrCast(disambiguation), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtranslator.Translate: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QTranslator_IsEmpty(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsEmpty(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QTranslator_OnIsEmpty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QTranslator_QBaseIsEmpty(@ptrCast(self));
    }

    pub fn Language(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTranslator_Language(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtranslator.Language: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FilePath(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTranslator_FilePath(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtranslator.FilePath: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Load(self: ?*anyopaque, filename: []const u8) bool {
        const filename_str = qtc.libqt_string{
    .len = filename.len,
    .data = filename.ptr,
};
return qtc.QTranslator_Load(@ptrCast(self), filename_str);
    }

    pub fn Load2(self: ?*anyopaque, locale: ?*anyopaque, filename: []const u8) bool {
        const filename_str = qtc.libqt_string{
    .len = filename.len,
    .data = filename.ptr,
};
return qtc.QTranslator_Load2(@ptrCast(self), @ptrCast(locale), filename_str);
    }

    pub fn Load3(self: ?*anyopaque, data: *const u8, lenVal: i32) bool {
        return qtc.QTranslator_Load3(@ptrCast(self), @ptrCast(data), lenVal);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTranslator_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtranslator.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTranslator_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtranslator.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Load22(self: ?*anyopaque, filename: []const u8, directory: []const u8) bool {
        const filename_str = qtc.libqt_string{
    .len = filename.len,
    .data = filename.ptr,
};
const directory_str = qtc.libqt_string{
    .len = directory.len,
    .data = directory.ptr,
};
return qtc.QTranslator_Load22(@ptrCast(self), filename_str, directory_str);
    }

    pub fn Load32(self: ?*anyopaque, filename: []const u8, directory: []const u8, search_delimiters: []const u8) bool {
        const filename_str = qtc.libqt_string{
    .len = filename.len,
    .data = filename.ptr,
};
const directory_str = qtc.libqt_string{
    .len = directory.len,
    .data = directory.ptr,
};
const search_delimiters_str = qtc.libqt_string{
    .len = search_delimiters.len,
    .data = search_delimiters.ptr,
};
return qtc.QTranslator_Load32(@ptrCast(self), filename_str, directory_str, search_delimiters_str);
    }

    pub fn Load4(self: ?*anyopaque, filename: []const u8, directory: []const u8, search_delimiters: []const u8, suffix: []const u8) bool {
        const filename_str = qtc.libqt_string{
    .len = filename.len,
    .data = filename.ptr,
};
const directory_str = qtc.libqt_string{
    .len = directory.len,
    .data = directory.ptr,
};
const search_delimiters_str = qtc.libqt_string{
    .len = search_delimiters.len,
    .data = search_delimiters.ptr,
};
const suffix_str = qtc.libqt_string{
    .len = suffix.len,
    .data = suffix.ptr,
};
return qtc.QTranslator_Load4(@ptrCast(self), filename_str, directory_str, search_delimiters_str, suffix_str);
    }

    pub fn Load33(self: ?*anyopaque, locale: ?*anyopaque, filename: []const u8, prefix: []const u8) bool {
        const filename_str = qtc.libqt_string{
    .len = filename.len,
    .data = filename.ptr,
};
const prefix_str = qtc.libqt_string{
    .len = prefix.len,
    .data = prefix.ptr,
};
return qtc.QTranslator_Load33(@ptrCast(self), @ptrCast(locale), filename_str, prefix_str);
    }

    pub fn Load42(self: ?*anyopaque, locale: ?*anyopaque, filename: []const u8, prefix: []const u8, directory: []const u8) bool {
        const filename_str = qtc.libqt_string{
    .len = filename.len,
    .data = filename.ptr,
};
const prefix_str = qtc.libqt_string{
    .len = prefix.len,
    .data = prefix.ptr,
};
const directory_str = qtc.libqt_string{
    .len = directory.len,
    .data = directory.ptr,
};
return qtc.QTranslator_Load42(@ptrCast(self), @ptrCast(locale), filename_str, prefix_str, directory_str);
    }

    pub fn Load5(self: ?*anyopaque, locale: ?*anyopaque, filename: []const u8, prefix: []const u8, directory: []const u8, suffix: []const u8) bool {
        const filename_str = qtc.libqt_string{
    .len = filename.len,
    .data = filename.ptr,
};
const prefix_str = qtc.libqt_string{
    .len = prefix.len,
    .data = prefix.ptr,
};
const directory_str = qtc.libqt_string{
    .len = directory.len,
    .data = directory.ptr,
};
const suffix_str = qtc.libqt_string{
    .len = suffix.len,
    .data = suffix.ptr,
};
return qtc.QTranslator_Load5(@ptrCast(self), @ptrCast(locale), filename_str, prefix_str, directory_str, suffix_str);
    }

    pub fn Load34(self: ?*anyopaque, data: *const u8, lenVal: i32, directory: []const u8) bool {
        const directory_str = qtc.libqt_string{
    .len = directory.len,
    .data = directory.ptr,
};
return qtc.QTranslator_Load34(@ptrCast(self), @ptrCast(data), lenVal, directory_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTranslator_Delete(@ptrCast(self));
    }
};
