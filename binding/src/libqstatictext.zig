const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qstatictext.html
pub const qstatictext = struct {

    /// New constructs a new QStaticText object.
    pub fn New() QtC.QStaticText {
        return qtc.QStaticText_new();
    }


    /// New2 constructs a new QStaticText object.
    pub fn New2(text: []const u8) QtC.QStaticText {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QStaticText_new2(text_str);
    }


    /// New3 constructs a new QStaticText object.
    pub fn New3(other: ?*anyopaque) QtC.QStaticText {
        return qtc.QStaticText_new3(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStaticText_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStaticText_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QStaticText_SetText(@ptrCast(self), text_str);
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStaticText_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstatictext.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTextFormat(self: ?*anyopaque, textFormat: i32) void {
        qtc.QStaticText_SetTextFormat(@ptrCast(self), @intCast(textFormat));
    }

    pub fn TextFormat(self: ?*anyopaque, ) i32 {
        return qtc.QStaticText_TextFormat(@ptrCast(self));
    }

    pub fn SetTextWidth(self: ?*anyopaque, textWidth: f64) void {
        qtc.QStaticText_SetTextWidth(@ptrCast(self), textWidth);
    }

    pub fn TextWidth(self: ?*anyopaque, ) f64 {
        return qtc.QStaticText_TextWidth(@ptrCast(self));
    }

    pub fn SetTextOption(self: ?*anyopaque, textOption: ?*anyopaque) void {
        qtc.QStaticText_SetTextOption(@ptrCast(self), @ptrCast(textOption));
    }

    pub fn TextOption(self: ?*anyopaque, ) QtC.QTextOption {
        return qtc.QStaticText_TextOption(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) QtC.QSizeF {
        return qtc.QStaticText_Size(@ptrCast(self));
    }

    pub fn Prepare(self: ?*anyopaque, ) void {
        qtc.QStaticText_Prepare(@ptrCast(self));
    }

    pub fn SetPerformanceHint(self: ?*anyopaque, performanceHint: i32) void {
        qtc.QStaticText_SetPerformanceHint(@ptrCast(self), @intCast(performanceHint));
    }

    pub fn PerformanceHint(self: ?*anyopaque, ) i32 {
        return qtc.QStaticText_PerformanceHint(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QStaticText_OperatorEqual(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QStaticText_OperatorNotEqual(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Prepare1(self: ?*anyopaque, matrix: ?*anyopaque) void {
        qtc.QStaticText_Prepare1(@ptrCast(self), @ptrCast(matrix));
    }

    pub fn Prepare2(self: ?*anyopaque, matrix: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QStaticText_Prepare2(@ptrCast(self), @ptrCast(matrix), @ptrCast(font));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStaticText_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/statictext.html#types
pub const enums = struct {
    pub const PerformanceHint = enum {
        pub const ModerateCaching: i32 = 0;
        pub const AggressiveCaching: i32 = 1;
    };

};
