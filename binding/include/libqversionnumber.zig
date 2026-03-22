const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qversionnumber.html
pub const qversionnumber = struct {

    /// New constructs a new QVersionNumber object.
    pub fn New() QtC.QVersionNumber {
        return qtc.QVersionNumber_new();
    }


    /// New2 constructs a new QVersionNumber object.
    pub fn New2(args: QSpan<const int>) QtC.QVersionNumber {
        return qtc.QVersionNumber_new2(args);
    }


    /// New3 constructs a new QVersionNumber object.
    pub fn New3(maj: i32) QtC.QVersionNumber {
        return qtc.QVersionNumber_new3(maj);
    }


    /// New4 constructs a new QVersionNumber object.
    pub fn New4(maj: i32, min: i32) QtC.QVersionNumber {
        return qtc.QVersionNumber_new4(maj, min);
    }


    /// New5 constructs a new QVersionNumber object.
    pub fn New5(maj: i32, min: i32, mic: i32) QtC.QVersionNumber {
        return qtc.QVersionNumber_new5(maj, min, mic);
    }


    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QVersionNumber_IsNull(@ptrCast(self));
    }

    pub fn IsNormalized(self: ?*anyopaque, ) bool {
        return qtc.QVersionNumber_IsNormalized(@ptrCast(self));
    }

    pub fn MajorVersion(self: ?*anyopaque, ) i32 {
        return qtc.QVersionNumber_MajorVersion(@ptrCast(self));
    }

    pub fn MinorVersion(self: ?*anyopaque, ) i32 {
        return qtc.QVersionNumber_MinorVersion(@ptrCast(self));
    }

    pub fn MicroVersion(self: ?*anyopaque, ) i32 {
        return qtc.QVersionNumber_MicroVersion(@ptrCast(self));
    }

    pub fn Normalized(self: ?*anyopaque, ) QtC.QVersionNumber {
        return qtc.QVersionNumber_Normalized(@ptrCast(self));
    }

    pub fn Segments(self: ?*anyopaque, ) []const u8 {
        return qtc.QVersionNumber_Segments(@ptrCast(self));
    }

    pub fn SegmentAt(self: ?*anyopaque, index: i64) i32 {
        return qtc.QVersionNumber_SegmentAt(@ptrCast(self), index);
    }

    pub fn SegmentCount(self: ?*anyopaque, ) i64 {
        return qtc.QVersionNumber_SegmentCount(@ptrCast(self));
    }

    pub fn IsPrefixOf(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QVersionNumber_IsPrefixOf(@ptrCast(self), @ptrCast(other));
    }

    pub fn Compare(v1: ?*anyopaque, v2: ?*anyopaque) i32 {
        return qtc.QVersionNumber_Compare(@ptrCast(v1), @ptrCast(v2));
    }

    pub fn CommonPrefix(v1: ?*anyopaque, v2: ?*anyopaque) QtC.QVersionNumber {
        return qtc.QVersionNumber_CommonPrefix(@ptrCast(v1), @ptrCast(v2));
    }

    pub fn ToString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVersionNumber_ToString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qversionnumber.ToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVersionNumber_Delete(@ptrCast(self));
    }
};
