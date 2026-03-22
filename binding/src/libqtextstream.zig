const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtextstream.html
pub const qtextstream = struct {

    /// New constructs a new QTextStream object.
    pub fn New() QtC.QTextStream {
        return qtc.QTextStream_new();
    }


    /// New2 constructs a new QTextStream object.
    pub fn New2(device: ?*anyopaque) QtC.QTextStream {
        return qtc.QTextStream_new2(@ptrCast(device));
    }


    /// New3 constructs a new QTextStream object.
    pub fn New3(fileHandle: *FILE) QtC.QTextStream {
        return qtc.QTextStream_new3(@ptrCast(fileHandle));
    }


    /// New4 constructs a new QTextStream object.
    pub fn New4(stringVal: []const u8) QtC.QTextStream {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QTextStream_new4(stringVal_str);
    }


    /// New5 constructs a new QTextStream object.
    pub fn New5(array: []u8) QtC.QTextStream {
        const array_str = qtc.libqt_string{
    .len = array.len,
    .data = array.ptr,
};
return qtc.QTextStream_new5(array_str);
    }


    /// New6 constructs a new QTextStream object.
    pub fn New6(array: []u8) QtC.QTextStream {
        const array_str = qtc.libqt_string{
    .len = array.len,
    .data = array.ptr,
};
return qtc.QTextStream_new6(array_str);
    }


    /// New7 constructs a new QTextStream object.
    pub fn New7(fileHandle: *FILE, openMode: i32) QtC.QTextStream {
        return qtc.QTextStream_new7(@ptrCast(fileHandle), @intCast(openMode));
    }


    /// New8 constructs a new QTextStream object.
    pub fn New8(stringVal: []const u8, openMode: i32) QtC.QTextStream {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QTextStream_new8(stringVal_str, @intCast(openMode));
    }


    /// New9 constructs a new QTextStream object.
    pub fn New9(array: []u8, openMode: i32) QtC.QTextStream {
        const array_str = qtc.libqt_string{
    .len = array.len,
    .data = array.ptr,
};
return qtc.QTextStream_new9(array_str, @intCast(openMode));
    }


    /// New10 constructs a new QTextStream object.
    pub fn New10(array: []u8, openMode: i32) QtC.QTextStream {
        const array_str = qtc.libqt_string{
    .len = array.len,
    .data = array.ptr,
};
return qtc.QTextStream_new10(array_str, @intCast(openMode));
    }


    pub fn SetEncoding(self: ?*anyopaque, encoding: i32) void {
        qtc.QTextStream_SetEncoding(@ptrCast(self), @intCast(encoding));
    }

    pub fn Encoding(self: ?*anyopaque, ) i32 {
        return qtc.QTextStream_Encoding(@ptrCast(self));
    }

    pub fn SetAutoDetectUnicode(self: ?*anyopaque, enabled: bool) void {
        qtc.QTextStream_SetAutoDetectUnicode(@ptrCast(self), enabled);
    }

    pub fn AutoDetectUnicode(self: ?*anyopaque, ) bool {
        return qtc.QTextStream_AutoDetectUnicode(@ptrCast(self));
    }

    pub fn SetGenerateByteOrderMark(self: ?*anyopaque, generate: bool) void {
        qtc.QTextStream_SetGenerateByteOrderMark(@ptrCast(self), generate);
    }

    pub fn GenerateByteOrderMark(self: ?*anyopaque, ) bool {
        return qtc.QTextStream_GenerateByteOrderMark(@ptrCast(self));
    }

    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QTextStream_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    pub fn Locale(self: ?*anyopaque, ) QtC.QLocale {
        return qtc.QTextStream_Locale(@ptrCast(self));
    }

    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QTextStream_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    pub fn Device(self: ?*anyopaque, ) QtC.QIODevice {
        return qtc.QTextStream_Device(@ptrCast(self));
    }

    pub fn SetString(self: ?*anyopaque, stringVal: []const u8) void {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
qtc.QTextStream_SetString(@ptrCast(self), stringVal_str);
    }

    pub fn String(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextStream_String(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextstream.String: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Status(self: ?*anyopaque, ) i32 {
        return qtc.QTextStream_Status(@ptrCast(self));
    }

    pub fn SetStatus(self: ?*anyopaque, status: i32) void {
        qtc.QTextStream_SetStatus(@ptrCast(self), @intCast(status));
    }

    pub fn ResetStatus(self: ?*anyopaque, ) void {
        qtc.QTextStream_ResetStatus(@ptrCast(self));
    }

    pub fn AtEnd(self: ?*anyopaque, ) bool {
        return qtc.QTextStream_AtEnd(@ptrCast(self));
    }

    pub fn Reset(self: ?*anyopaque, ) void {
        qtc.QTextStream_Reset(@ptrCast(self));
    }

    pub fn Flush(self: ?*anyopaque, ) void {
        qtc.QTextStream_Flush(@ptrCast(self));
    }

    pub fn Seek(self: ?*anyopaque, pos: i64) bool {
        return qtc.QTextStream_Seek(@ptrCast(self), pos);
    }

    pub fn Pos(self: ?*anyopaque, ) i64 {
        return qtc.QTextStream_Pos(@ptrCast(self));
    }

    pub fn SkipWhiteSpace(self: ?*anyopaque, ) void {
        qtc.QTextStream_SkipWhiteSpace(@ptrCast(self));
    }

    pub fn ReadLine(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextStream_ReadLine(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextstream.ReadLine: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ReadLineInto(self: ?*anyopaque, line: []const u8) bool {
        const line_str = qtc.libqt_string{
    .len = line.len,
    .data = line.ptr,
};
return qtc.QTextStream_ReadLineInto(@ptrCast(self), line_str);
    }

    pub fn ReadAll(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextStream_ReadAll(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextstream.ReadAll: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Read(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextStream_Read(@ptrCast(self), maxlen);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextstream.Read: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetFieldAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QTextStream_SetFieldAlignment(@ptrCast(self), @intCast(alignment));
    }

    pub fn FieldAlignment(self: ?*anyopaque, ) i32 {
        return qtc.QTextStream_FieldAlignment(@ptrCast(self));
    }

    pub fn SetPadChar(self: ?*anyopaque, ch: QtC.QChar) void {
        qtc.QTextStream_SetPadChar(@ptrCast(self), @ptrCast(ch));
    }

    pub fn PadChar(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QTextStream_PadChar(@ptrCast(self));
    }

    pub fn SetFieldWidth(self: ?*anyopaque, width: i32) void {
        qtc.QTextStream_SetFieldWidth(@ptrCast(self), width);
    }

    pub fn FieldWidth(self: ?*anyopaque, ) i32 {
        return qtc.QTextStream_FieldWidth(@ptrCast(self));
    }

    pub fn SetNumberFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QTextStream_SetNumberFlags(@ptrCast(self), @intCast(flags));
    }

    pub fn NumberFlags(self: ?*anyopaque, ) i32 {
        return qtc.QTextStream_NumberFlags(@ptrCast(self));
    }

    pub fn SetIntegerBase(self: ?*anyopaque, base: i32) void {
        qtc.QTextStream_SetIntegerBase(@ptrCast(self), base);
    }

    pub fn IntegerBase(self: ?*anyopaque, ) i32 {
        return qtc.QTextStream_IntegerBase(@ptrCast(self));
    }

    pub fn SetRealNumberNotation(self: ?*anyopaque, notation: i32) void {
        qtc.QTextStream_SetRealNumberNotation(@ptrCast(self), @intCast(notation));
    }

    pub fn RealNumberNotation(self: ?*anyopaque, ) i32 {
        return qtc.QTextStream_RealNumberNotation(@ptrCast(self));
    }

    pub fn SetRealNumberPrecision(self: ?*anyopaque, precision: i32) void {
        qtc.QTextStream_SetRealNumberPrecision(@ptrCast(self), precision);
    }

    pub fn RealNumberPrecision(self: ?*anyopaque, ) i32 {
        return qtc.QTextStream_RealNumberPrecision(@ptrCast(self));
    }

    pub fn OperatorShiftRight(self: ?*anyopaque, ch: ?*anyopaque) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight(@ptrCast(self), @ptrCast(ch));
    }

    pub fn OperatorShiftRight2(self: ?*anyopaque, ch: *i8) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight2(@ptrCast(self), @ptrCast(ch));
    }

    pub fn OperatorShiftRight4(self: ?*anyopaque, i: *i16) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight4(@ptrCast(self), @ptrCast(i));
    }

    pub fn OperatorShiftRight5(self: ?*anyopaque, i: *u16) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight5(@ptrCast(self), @ptrCast(i));
    }

    pub fn OperatorShiftRight6(self: ?*anyopaque, i: *i32) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight6(@ptrCast(self), @ptrCast(i));
    }

    pub fn OperatorShiftRight7(self: ?*anyopaque, i: *u32) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight7(@ptrCast(self), @ptrCast(i));
    }

    pub fn OperatorShiftRight8(self: ?*anyopaque, i: *long) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight8(@ptrCast(self), @ptrCast(i));
    }

    pub fn OperatorShiftRight9(self: ?*anyopaque, i: *unsigned long) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight9(@ptrCast(self), @ptrCast(i));
    }

    pub fn OperatorShiftRight10(self: ?*anyopaque, i: *i64) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight10(@ptrCast(self), @ptrCast(i));
    }

    pub fn OperatorShiftRight11(self: ?*anyopaque, i: *u64) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight11(@ptrCast(self), @ptrCast(i));
    }

    pub fn OperatorShiftRight12(self: ?*anyopaque, f: *f32) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight12(@ptrCast(self), @ptrCast(f));
    }

    pub fn OperatorShiftRight13(self: ?*anyopaque, f: *f64) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight13(@ptrCast(self), @ptrCast(f));
    }

    pub fn OperatorShiftRight14(self: ?*anyopaque, s: []const u8) QtC.QTextStream {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QTextStream_OperatorShiftRight14(@ptrCast(self), s_str);
    }

    pub fn OperatorShiftRight15(self: ?*anyopaque, array: []u8) QtC.QTextStream {
        const array_str = qtc.libqt_string{
    .len = array.len,
    .data = array.ptr,
};
return qtc.QTextStream_OperatorShiftRight15(@ptrCast(self), array_str);
    }

    pub fn OperatorShiftRight16(self: ?*anyopaque, c: []const u8) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftRight16(@ptrCast(self), @ptrCast(c));
    }

    pub fn OperatorShiftLeft(self: ?*anyopaque, ch: QtC.QChar) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft(@ptrCast(self), @ptrCast(ch));
    }

    pub fn OperatorShiftLeft2(self: ?*anyopaque, ch: i8) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft2(@ptrCast(self), ch);
    }

    pub fn OperatorShiftLeft4(self: ?*anyopaque, i: i16) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft4(@ptrCast(self), i);
    }

    pub fn OperatorShiftLeft5(self: ?*anyopaque, i: u16) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft5(@ptrCast(self), i);
    }

    pub fn OperatorShiftLeft6(self: ?*anyopaque, i: i32) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft6(@ptrCast(self), i);
    }

    pub fn OperatorShiftLeft7(self: ?*anyopaque, i: u32) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft7(@ptrCast(self), i);
    }

    pub fn OperatorShiftLeft8(self: ?*anyopaque, i: long) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft8(@ptrCast(self), i);
    }

    pub fn OperatorShiftLeft9(self: ?*anyopaque, i: unsigned long) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft9(@ptrCast(self), i);
    }

    pub fn OperatorShiftLeft10(self: ?*anyopaque, i: i64) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft10(@ptrCast(self), i);
    }

    pub fn OperatorShiftLeft11(self: ?*anyopaque, i: u64) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft11(@ptrCast(self), i);
    }

    pub fn OperatorShiftLeft12(self: ?*anyopaque, f: f32) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft12(@ptrCast(self), f);
    }

    pub fn OperatorShiftLeft13(self: ?*anyopaque, f: f64) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft13(@ptrCast(self), f);
    }

    pub fn OperatorShiftLeft14(self: ?*anyopaque, s: []const u8) QtC.QTextStream {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QTextStream_OperatorShiftLeft14(@ptrCast(self), s_str);
    }

    pub fn OperatorShiftLeft15(self: ?*anyopaque, s: []const u8) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft15(@ptrCast(self), @ptrCast(s));
    }

    pub fn OperatorShiftLeft16(self: ?*anyopaque, s: QLatin1StringView) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft16(@ptrCast(self), s);
    }

    pub fn OperatorShiftLeft17(self: ?*anyopaque, array: []u8) QtC.QTextStream {
        const array_str = qtc.libqt_string{
    .len = array.len,
    .data = array.ptr,
};
return qtc.QTextStream_OperatorShiftLeft17(@ptrCast(self), array_str);
    }

    pub fn OperatorShiftLeft18(self: ?*anyopaque, c: []const u8) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft18(@ptrCast(self), @ptrCast(c));
    }

    pub fn OperatorShiftLeft19(self: ?*anyopaque, ptr: ?*anyopaque) QtC.QTextStream {
        return qtc.QTextStream_OperatorShiftLeft19(@ptrCast(self), @ptrCast(ptr));
    }

    pub fn SetString2(self: ?*anyopaque, stringVal: []const u8, openMode: i32) void {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
qtc.QTextStream_SetString2(@ptrCast(self), stringVal_str, @intCast(openMode));
    }

    pub fn ReadLine1(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextStream_ReadLine1(@ptrCast(self), maxlen);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextstream.ReadLine1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ReadLineInto2(self: ?*anyopaque, line: []const u8, maxlen: i64) bool {
        const line_str = qtc.libqt_string{
    .len = line.len,
    .data = line.ptr,
};
return qtc.QTextStream_ReadLineInto2(@ptrCast(self), line_str, maxlen);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextStream_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextstreammanipulator.html
pub const qtextstreammanipulator = struct {

    /// New constructs a new QTextStreamManipulator object.
    pub fn New(other: ?*anyopaque) QtC.QTextStreamManipulator {
        return qtc.QTextStreamManipulator_new(@ptrCast(other));
    }


    /// New2 constructs a new QTextStreamManipulator object.
    pub fn New2(other: ?*anyopaque) QtC.QTextStreamManipulator {
        return qtc.QTextStreamManipulator_new2(@ptrCast(other));
    }


    /// New3 constructs a new QTextStreamManipulator object.
    pub fn New3(m: void (QTextStream::*)(int), a: i32) QtC.QTextStreamManipulator {
        return qtc.QTextStreamManipulator_new3(m, a);
    }


    /// New4 constructs a new QTextStreamManipulator object.
    pub fn New4(m: void (QTextStream::*)(QChar), c: QtC.QChar) QtC.QTextStreamManipulator {
        return qtc.QTextStreamManipulator_new4(m, @ptrCast(c));
    }


    /// New5 constructs a new QTextStreamManipulator object.
    pub fn New5(param1: ?*anyopaque) QtC.QTextStreamManipulator {
        return qtc.QTextStreamManipulator_new5(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextStreamManipulator_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextStreamManipulator_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Exec(self: ?*anyopaque, s: ?*anyopaque) void {
        qtc.QTextStreamManipulator_Exec(@ptrCast(self), @ptrCast(s));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextStreamManipulator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/textstream.html#types
pub const enums = struct {
    pub const RealNumberNotation = enum {
        pub const SmartNotation: i32 = 0;
        pub const FixedNotation: i32 = 1;
        pub const ScientificNotation: i32 = 2;
    };

    pub const FieldAlignment = enum {
        pub const AlignLeft: i32 = 0;
        pub const AlignRight: i32 = 1;
        pub const AlignCenter: i32 = 2;
        pub const AlignAccountingStyle: i32 = 3;
    };

    pub const Status = enum {
        pub const Ok: i32 = 0;
        pub const ReadPastEnd: i32 = 1;
        pub const ReadCorruptData: i32 = 2;
        pub const WriteFailed: i32 = 3;
    };

    pub const NumberFlag = enum {
        pub const ShowBase: i32 = 1;
        pub const ForcePoint: i32 = 2;
        pub const ForceSign: i32 = 4;
        pub const UppercaseBase: i32 = 8;
        pub const UppercaseDigits: i32 = 16;
    };

};
