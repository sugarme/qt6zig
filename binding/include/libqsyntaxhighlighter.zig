const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsyntaxhighlighter.html
pub const qsyntaxhighlighter = struct {

    /// New constructs a new QSyntaxHighlighter object.
    pub fn New(parent: ?*anyopaque) QtC.QSyntaxHighlighter {
        return qtc.QSyntaxHighlighter_new(@ptrCast(parent));
    }


    /// New2 constructs a new QSyntaxHighlighter object.
    pub fn New2(parent: ?*anyopaque) QtC.QSyntaxHighlighter {
        return qtc.QSyntaxHighlighter_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSyntaxHighlighter_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsyntaxhighlighter.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetDocument(self: ?*anyopaque, doc: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_SetDocument(@ptrCast(self), @ptrCast(doc));
    }

    pub fn Document(self: ?*anyopaque, ) QtC.QTextDocument {
        return qtc.QSyntaxHighlighter_Document(@ptrCast(self));
    }

    pub fn Rehighlight(self: ?*anyopaque, ) void {
        qtc.QSyntaxHighlighter_Rehighlight(@ptrCast(self));
    }

    pub fn RehighlightBlock(self: ?*anyopaque, block: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_RehighlightBlock(@ptrCast(self), @ptrCast(block));
    }

    pub fn HighlightBlock(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QSyntaxHighlighter_HighlightBlock(@ptrCast(self), text_str);
    }

    /// Allows for overriding the related default method
    pub fn OnHighlightBlock(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnHighlightBlock(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHighlightBlock(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QSyntaxHighlighter_QBaseHighlightBlock(@ptrCast(self), text_str);
    }

    pub fn SetFormat(self: ?*anyopaque, start: i32, count: i32, format: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_SetFormat(@ptrCast(self), start, count, @ptrCast(format));
    }

    /// Allows for overriding the related default method
    pub fn OnSetFormat(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnSetFormat(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetFormat(self: ?*anyopaque, start: i32, count: i32, format: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_QBaseSetFormat(@ptrCast(self), start, count, @ptrCast(format));
    }

    pub fn SetFormat2(self: ?*anyopaque, start: i32, count: i32, color: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_SetFormat2(@ptrCast(self), start, count, @ptrCast(color));
    }

    /// Allows for overriding the related default method
    pub fn OnSetFormat2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnSetFormat2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetFormat2(self: ?*anyopaque, start: i32, count: i32, color: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_QBaseSetFormat2(@ptrCast(self), start, count, @ptrCast(color));
    }

    pub fn SetFormat3(self: ?*anyopaque, start: i32, count: i32, font: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_SetFormat3(@ptrCast(self), start, count, @ptrCast(font));
    }

    /// Allows for overriding the related default method
    pub fn OnSetFormat3(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnSetFormat3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetFormat3(self: ?*anyopaque, start: i32, count: i32, font: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_QBaseSetFormat3(@ptrCast(self), start, count, @ptrCast(font));
    }

    pub fn Format(self: ?*anyopaque, pos: i32) QtC.QTextCharFormat {
        return qtc.QSyntaxHighlighter_Format(@ptrCast(self), pos);
    }

    /// Allows for overriding the related default method
    pub fn OnFormat(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QTextCharFormat) void {
        qtc.QSyntaxHighlighter_OnFormat(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFormat(self: ?*anyopaque, pos: i32) QtC.QTextCharFormat {
        return qtc.QSyntaxHighlighter_QBaseFormat(@ptrCast(self), pos);
    }

    pub fn PreviousBlockState(self: ?*anyopaque, ) i32 {
        return qtc.QSyntaxHighlighter_PreviousBlockState(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPreviousBlockState(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QSyntaxHighlighter_OnPreviousBlockState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePreviousBlockState(self: ?*anyopaque, ) i32 {
        return qtc.QSyntaxHighlighter_QBasePreviousBlockState(@ptrCast(self));
    }

    pub fn CurrentBlockState(self: ?*anyopaque, ) i32 {
        return qtc.QSyntaxHighlighter_CurrentBlockState(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCurrentBlockState(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QSyntaxHighlighter_OnCurrentBlockState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCurrentBlockState(self: ?*anyopaque, ) i32 {
        return qtc.QSyntaxHighlighter_QBaseCurrentBlockState(@ptrCast(self));
    }

    pub fn SetCurrentBlockState(self: ?*anyopaque, newState: i32) void {
        qtc.QSyntaxHighlighter_SetCurrentBlockState(@ptrCast(self), newState);
    }

    /// Allows for overriding the related default method
    pub fn OnSetCurrentBlockState(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnSetCurrentBlockState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetCurrentBlockState(self: ?*anyopaque, newState: i32) void {
        qtc.QSyntaxHighlighter_QBaseSetCurrentBlockState(@ptrCast(self), newState);
    }

    pub fn SetCurrentBlockUserData(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_SetCurrentBlockUserData(@ptrCast(self), @ptrCast(data));
    }

    /// Allows for overriding the related default method
    pub fn OnSetCurrentBlockUserData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSyntaxHighlighter_OnSetCurrentBlockUserData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetCurrentBlockUserData(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_QBaseSetCurrentBlockUserData(@ptrCast(self), @ptrCast(data));
    }

    pub fn CurrentBlockUserData(self: ?*anyopaque, ) QtC.QTextBlockUserData {
        return qtc.QSyntaxHighlighter_CurrentBlockUserData(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCurrentBlockUserData(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QTextBlockUserData) void {
        qtc.QSyntaxHighlighter_OnCurrentBlockUserData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCurrentBlockUserData(self: ?*anyopaque, ) QtC.QTextBlockUserData {
        return qtc.QSyntaxHighlighter_QBaseCurrentBlockUserData(@ptrCast(self));
    }

    pub fn CurrentBlock(self: ?*anyopaque, ) QtC.QTextBlock {
        return qtc.QSyntaxHighlighter_CurrentBlock(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCurrentBlock(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QTextBlock) void {
        qtc.QSyntaxHighlighter_OnCurrentBlock(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCurrentBlock(self: ?*anyopaque, ) QtC.QTextBlock {
        return qtc.QSyntaxHighlighter_QBaseCurrentBlock(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSyntaxHighlighter_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsyntaxhighlighter.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSyntaxHighlighter_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsyntaxhighlighter.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_Delete(@ptrCast(self));
    }
};
