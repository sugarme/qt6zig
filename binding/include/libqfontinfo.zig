const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qfontinfo.html
pub const qfontinfo = struct {

    /// New constructs a new QFontInfo object.
    pub fn New(param1: ?*anyopaque) QtC.QFontInfo {
        return qtc.QFontInfo_new(@ptrCast(param1));
    }


    /// New2 constructs a new QFontInfo object.
    pub fn New2(param1: ?*anyopaque) QtC.QFontInfo {
        return qtc.QFontInfo_new2(@ptrCast(param1));
    }


    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFontInfo_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFontInfo_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Family(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFontInfo_Family(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontinfo.Family: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn StyleName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFontInfo_StyleName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontinfo.StyleName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn PixelSize(self: ?*anyopaque, ) i32 {
        return qtc.QFontInfo_PixelSize(@ptrCast(self));
    }

    pub fn PointSize(self: ?*anyopaque, ) i32 {
        return qtc.QFontInfo_PointSize(@ptrCast(self));
    }

    pub fn PointSizeF(self: ?*anyopaque, ) f64 {
        return qtc.QFontInfo_PointSizeF(@ptrCast(self));
    }

    pub fn Italic(self: ?*anyopaque, ) bool {
        return qtc.QFontInfo_Italic(@ptrCast(self));
    }

    pub fn Style(self: ?*anyopaque, ) i32 {
        return qtc.QFontInfo_Style(@ptrCast(self));
    }

    pub fn Weight(self: ?*anyopaque, ) i32 {
        return qtc.QFontInfo_Weight(@ptrCast(self));
    }

    pub fn Bold(self: ?*anyopaque, ) bool {
        return qtc.QFontInfo_Bold(@ptrCast(self));
    }

    pub fn Underline(self: ?*anyopaque, ) bool {
        return qtc.QFontInfo_Underline(@ptrCast(self));
    }

    pub fn Overline(self: ?*anyopaque, ) bool {
        return qtc.QFontInfo_Overline(@ptrCast(self));
    }

    pub fn StrikeOut(self: ?*anyopaque, ) bool {
        return qtc.QFontInfo_StrikeOut(@ptrCast(self));
    }

    pub fn FixedPitch(self: ?*anyopaque, ) bool {
        return qtc.QFontInfo_FixedPitch(@ptrCast(self));
    }

    pub fn StyleHint(self: ?*anyopaque, ) i32 {
        return qtc.QFontInfo_StyleHint(@ptrCast(self));
    }

    pub fn LegacyWeight(self: ?*anyopaque, ) i32 {
        return qtc.QFontInfo_LegacyWeight(@ptrCast(self));
    }

    pub fn ExactMatch(self: ?*anyopaque, ) bool {
        return qtc.QFontInfo_ExactMatch(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFontInfo_Delete(@ptrCast(self));
    }
};
