const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qglyphrun.html
pub const qglyphrun = struct {

    /// New constructs a new QGlyphRun object.
    pub fn New() QtC.QGlyphRun {
        return qtc.QGlyphRun_new();
    }


    /// New2 constructs a new QGlyphRun object.
    pub fn New2(other: ?*anyopaque) QtC.QGlyphRun {
        return qtc.QGlyphRun_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGlyphRun_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGlyphRun_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn RawFont(self: ?*anyopaque, ) QtC.QRawFont {
        return qtc.QGlyphRun_RawFont(@ptrCast(self));
    }

    pub fn SetRawFont(self: ?*anyopaque, rawFont: ?*anyopaque) void {
        qtc.QGlyphRun_SetRawFont(@ptrCast(self), @ptrCast(rawFont));
    }

    pub fn SetRawData(self: ?*anyopaque, glyphIndexArray: *const u32, glyphPositionArray: ?*anyopaque, size: i32) void {
        qtc.QGlyphRun_SetRawData(@ptrCast(self), @ptrCast(glyphIndexArray), @ptrCast(glyphPositionArray), size);
    }

    pub fn GlyphIndexes(self: ?*anyopaque, ) []const u8 {
        return qtc.QGlyphRun_GlyphIndexes(@ptrCast(self));
    }

    pub fn SetGlyphIndexes(self: ?*anyopaque, glyphIndexes: []const u8) void {
        qtc.QGlyphRun_SetGlyphIndexes(@ptrCast(self), @ptrCast(glyphIndexes));
    }

    pub fn Positions(self: ?*anyopaque, ) []const u8 {
        return qtc.QGlyphRun_Positions(@ptrCast(self));
    }

    pub fn SetPositions(self: ?*anyopaque, positions: []const u8) void {
        qtc.QGlyphRun_SetPositions(@ptrCast(self), @ptrCast(positions));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QGlyphRun_Clear(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QGlyphRun_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QGlyphRun_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn SetOverline(self: ?*anyopaque, overline: bool) void {
        qtc.QGlyphRun_SetOverline(@ptrCast(self), overline);
    }

    pub fn Overline(self: ?*anyopaque, ) bool {
        return qtc.QGlyphRun_Overline(@ptrCast(self));
    }

    pub fn SetUnderline(self: ?*anyopaque, underline: bool) void {
        qtc.QGlyphRun_SetUnderline(@ptrCast(self), underline);
    }

    pub fn Underline(self: ?*anyopaque, ) bool {
        return qtc.QGlyphRun_Underline(@ptrCast(self));
    }

    pub fn SetStrikeOut(self: ?*anyopaque, strikeOut: bool) void {
        qtc.QGlyphRun_SetStrikeOut(@ptrCast(self), strikeOut);
    }

    pub fn StrikeOut(self: ?*anyopaque, ) bool {
        return qtc.QGlyphRun_StrikeOut(@ptrCast(self));
    }

    pub fn SetRightToLeft(self: ?*anyopaque, on: bool) void {
        qtc.QGlyphRun_SetRightToLeft(@ptrCast(self), on);
    }

    pub fn IsRightToLeft(self: ?*anyopaque, ) bool {
        return qtc.QGlyphRun_IsRightToLeft(@ptrCast(self));
    }

    pub fn SetFlag(self: ?*anyopaque, flag: i32) void {
        qtc.QGlyphRun_SetFlag(@ptrCast(self), @intCast(flag));
    }

    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QGlyphRun_SetFlags(@ptrCast(self), @intCast(flags));
    }

    pub fn Flags(self: ?*anyopaque, ) i32 {
        return qtc.QGlyphRun_Flags(@ptrCast(self));
    }

    pub fn SetBoundingRect(self: ?*anyopaque, boundingRect: ?*anyopaque) void {
        qtc.QGlyphRun_SetBoundingRect(@ptrCast(self), @ptrCast(boundingRect));
    }

    pub fn BoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGlyphRun_BoundingRect(@ptrCast(self));
    }

    pub fn StringIndexes(self: ?*anyopaque, ) []const u8 {
        return qtc.QGlyphRun_StringIndexes(@ptrCast(self));
    }

    pub fn SetStringIndexes(self: ?*anyopaque, stringIndexes: []const u8) void {
        qtc.QGlyphRun_SetStringIndexes(@ptrCast(self), @ptrCast(stringIndexes));
    }

    pub fn SetSourceString(self: ?*anyopaque, sourceString: []const u8) void {
        const sourceString_str = qtc.libqt_string{
    .len = sourceString.len,
    .data = sourceString.ptr,
};
qtc.QGlyphRun_SetSourceString(@ptrCast(self), sourceString_str);
    }

    pub fn SourceString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGlyphRun_SourceString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qglyphrun.SourceString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QGlyphRun_IsEmpty(@ptrCast(self));
    }

    pub fn SetFlag2(self: ?*anyopaque, flag: i32, enabled: bool) void {
        qtc.QGlyphRun_SetFlag2(@ptrCast(self), @intCast(flag), enabled);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGlyphRun_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/glyphrun.html#types
pub const enums = struct {
    pub const GlyphRunFlag = enum {
        pub const Overline: i32 = 1;
        pub const Underline: i32 = 2;
        pub const StrikeOut: i32 = 4;
        pub const RightToLeft: i32 = 8;
        pub const SplitLigature: i32 = 16;
    };

};
