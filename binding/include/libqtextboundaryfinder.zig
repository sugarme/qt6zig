const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtextboundaryfinder.html
pub const qtextboundaryfinder = struct {

    /// New constructs a new QTextBoundaryFinder object.
    pub fn New() QtC.QTextBoundaryFinder {
        return qtc.QTextBoundaryFinder_new();
    }


    /// New2 constructs a new QTextBoundaryFinder object.
    pub fn New2(other: ?*anyopaque) QtC.QTextBoundaryFinder {
        return qtc.QTextBoundaryFinder_new2(@ptrCast(other));
    }


    /// New3 constructs a new QTextBoundaryFinder object.
    pub fn New3(typeVal: i32, stringVal: []const u8) QtC.QTextBoundaryFinder {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QTextBoundaryFinder_new3(@intCast(typeVal), stringVal_str);
    }


    /// New4 constructs a new QTextBoundaryFinder object.
    pub fn New4(typeVal: i32, chars: ?*anyopaque, length: i64) QtC.QTextBoundaryFinder {
        return qtc.QTextBoundaryFinder_new4(@intCast(typeVal), @ptrCast(chars), length);
    }


    /// New5 constructs a new QTextBoundaryFinder object.
    pub fn New5(typeVal: i32, str: []const u8) QtC.QTextBoundaryFinder {
        return qtc.QTextBoundaryFinder_new5(@intCast(typeVal), @ptrCast(str));
    }


    /// New6 constructs a new QTextBoundaryFinder object.
    pub fn New6(typeVal: i32, chars: ?*anyopaque, length: i64, buffer: *u8) QtC.QTextBoundaryFinder {
        return qtc.QTextBoundaryFinder_new6(@intCast(typeVal), @ptrCast(chars), length, @ptrCast(buffer));
    }


    /// New7 constructs a new QTextBoundaryFinder object.
    pub fn New7(typeVal: i32, chars: ?*anyopaque, length: i64, buffer: *u8, bufferSize: i64) QtC.QTextBoundaryFinder {
        return qtc.QTextBoundaryFinder_new7(@intCast(typeVal), @ptrCast(chars), length, @ptrCast(buffer), bufferSize);
    }


    /// New8 constructs a new QTextBoundaryFinder object.
    pub fn New8(typeVal: i32, str: []const u8, buffer: *u8) QtC.QTextBoundaryFinder {
        return qtc.QTextBoundaryFinder_new8(@intCast(typeVal), @ptrCast(str), @ptrCast(buffer));
    }


    /// New9 constructs a new QTextBoundaryFinder object.
    pub fn New9(typeVal: i32, str: []const u8, buffer: *u8, bufferSize: i64) QtC.QTextBoundaryFinder {
        return qtc.QTextBoundaryFinder_new9(@intCast(typeVal), @ptrCast(str), @ptrCast(buffer), bufferSize);
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextBoundaryFinder_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QTextBoundaryFinder_IsValid(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QTextBoundaryFinder_Type(@ptrCast(self));
    }

    pub fn String(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextBoundaryFinder_String(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextboundaryfinder.String: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToStart(self: ?*anyopaque, ) void {
        qtc.QTextBoundaryFinder_ToStart(@ptrCast(self));
    }

    pub fn ToEnd(self: ?*anyopaque, ) void {
        qtc.QTextBoundaryFinder_ToEnd(@ptrCast(self));
    }

    pub fn Position(self: ?*anyopaque, ) i64 {
        return qtc.QTextBoundaryFinder_Position(@ptrCast(self));
    }

    pub fn SetPosition(self: ?*anyopaque, position: i64) void {
        qtc.QTextBoundaryFinder_SetPosition(@ptrCast(self), position);
    }

    pub fn ToNextBoundary(self: ?*anyopaque, ) i64 {
        return qtc.QTextBoundaryFinder_ToNextBoundary(@ptrCast(self));
    }

    pub fn ToPreviousBoundary(self: ?*anyopaque, ) i64 {
        return qtc.QTextBoundaryFinder_ToPreviousBoundary(@ptrCast(self));
    }

    pub fn IsAtBoundary(self: ?*anyopaque, ) bool {
        return qtc.QTextBoundaryFinder_IsAtBoundary(@ptrCast(self));
    }

    pub fn BoundaryReasons(self: ?*anyopaque, ) i32 {
        return qtc.QTextBoundaryFinder_BoundaryReasons(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextBoundaryFinder_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/textboundaryfinder.html#types
pub const enums = struct {
    pub const BoundaryType = enum {
        pub const Grapheme: i32 = 0;
        pub const Word: i32 = 1;
        pub const Sentence: i32 = 2;
        pub const Line: i32 = 3;
    };

    pub const BoundaryReason = enum {
        pub const NotAtBoundary: i32 = 0;
        pub const BreakOpportunity: i32 = 31;
        pub const StartOfItem: i32 = 32;
        pub const EndOfItem: i32 = 64;
        pub const MandatoryBreak: i32 = 128;
        pub const SoftHyphen: i32 = 256;
    };

};
