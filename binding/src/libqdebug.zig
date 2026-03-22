const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qdebug.html
pub const qdebug = struct {

    /// New constructs a new QDebug object.
    pub fn New(device: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_new(@ptrCast(device));
    }


    /// New2 constructs a new QDebug object.
    pub fn New2(stringVal: []const u8) QtC.QDebug {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QDebug_new2(stringVal_str);
    }


    /// New3 constructs a new QDebug object.
    pub fn New3(o: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_new3(@ptrCast(o));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDebug_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDebug_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn ResetFormat(self: ?*anyopaque, ) QtC.QDebug {
        return qtc.QDebug_ResetFormat(@ptrCast(self));
    }

    pub fn Space(self: ?*anyopaque, ) QtC.QDebug {
        return qtc.QDebug_Space(@ptrCast(self));
    }

    pub fn Nospace(self: ?*anyopaque, ) QtC.QDebug {
        return qtc.QDebug_Nospace(@ptrCast(self));
    }

    pub fn MaybeSpace(self: ?*anyopaque, ) QtC.QDebug {
        return qtc.QDebug_MaybeSpace(@ptrCast(self));
    }

    pub fn Verbosity(self: ?*anyopaque, verbosityLevel: i32) QtC.QDebug {
        return qtc.QDebug_Verbosity(@ptrCast(self), verbosityLevel);
    }

    pub fn Verbosity2(self: ?*anyopaque, ) i32 {
        return qtc.QDebug_Verbosity2(@ptrCast(self));
    }

    pub fn SetVerbosity(self: ?*anyopaque, verbosityLevel: i32) void {
        qtc.QDebug_SetVerbosity(@ptrCast(self), verbosityLevel);
    }

    pub fn AutoInsertSpaces(self: ?*anyopaque, ) bool {
        return qtc.QDebug_AutoInsertSpaces(@ptrCast(self));
    }

    pub fn SetAutoInsertSpaces(self: ?*anyopaque, b: bool) void {
        qtc.QDebug_SetAutoInsertSpaces(@ptrCast(self), b);
    }

    pub fn QuoteStrings(self: ?*anyopaque, ) bool {
        return qtc.QDebug_QuoteStrings(@ptrCast(self));
    }

    pub fn SetQuoteStrings(self: ?*anyopaque, b: bool) void {
        qtc.QDebug_SetQuoteStrings(@ptrCast(self), b);
    }

    pub fn Quote(self: ?*anyopaque, ) QtC.QDebug {
        return qtc.QDebug_Quote(@ptrCast(self));
    }

    pub fn Noquote(self: ?*anyopaque, ) QtC.QDebug {
        return qtc.QDebug_Noquote(@ptrCast(self));
    }

    pub fn MaybeQuote(self: ?*anyopaque, ) QtC.QDebug {
        return qtc.QDebug_MaybeQuote(@ptrCast(self));
    }

    pub fn OperatorShiftLeft(self: ?*anyopaque, t: QtC.QChar) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft(@ptrCast(self), @ptrCast(t));
    }

    pub fn OperatorShiftLeft2(self: ?*anyopaque, t: bool) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft2(@ptrCast(self), t);
    }

    pub fn OperatorShiftLeft3(self: ?*anyopaque, t: i8) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft3(@ptrCast(self), t);
    }

    pub fn OperatorShiftLeft4(self: ?*anyopaque, t: i16) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft4(@ptrCast(self), t);
    }

    pub fn OperatorShiftLeft5(self: ?*anyopaque, t: u16) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft5(@ptrCast(self), t);
    }

    pub fn OperatorShiftLeft8(self: ?*anyopaque, t: i32) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft8(@ptrCast(self), t);
    }

    pub fn OperatorShiftLeft9(self: ?*anyopaque, t: u32) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft9(@ptrCast(self), t);
    }

    pub fn OperatorShiftLeft10(self: ?*anyopaque, t: long) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft10(@ptrCast(self), t);
    }

    pub fn OperatorShiftLeft11(self: ?*anyopaque, t: unsigned long) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft11(@ptrCast(self), t);
    }

    pub fn OperatorShiftLeft12(self: ?*anyopaque, t: i64) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft12(@ptrCast(self), t);
    }

    pub fn OperatorShiftLeft13(self: ?*anyopaque, t: u64) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft13(@ptrCast(self), t);
    }

    pub fn OperatorShiftLeft15(self: ?*anyopaque, t: f32) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft15(@ptrCast(self), t);
    }

    pub fn OperatorShiftLeft16(self: ?*anyopaque, t: f64) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft16(@ptrCast(self), t);
    }

    pub fn OperatorShiftLeft17(self: ?*anyopaque, t: []const u8) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft17(@ptrCast(self), @ptrCast(t));
    }

    pub fn OperatorShiftLeft19(self: ?*anyopaque, t: []const u8) QtC.QDebug {
        const t_str = qtc.libqt_string{
    .len = t.len,
    .data = t.ptr,
};
return qtc.QDebug_OperatorShiftLeft19(@ptrCast(self), t_str);
    }

    pub fn OperatorShiftLeft23(self: ?*anyopaque, t: []u8) QtC.QDebug {
        const t_str = qtc.libqt_string{
    .len = t.len,
    .data = t.ptr,
};
return qtc.QDebug_OperatorShiftLeft23(@ptrCast(self), t_str);
    }

    pub fn OperatorShiftLeft24(self: ?*anyopaque, t: []const u8) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft24(@ptrCast(self), @ptrCast(t));
    }

    pub fn OperatorShiftLeft25(self: ?*anyopaque, t: ?*anyopaque) QtC.QDebug {
        return qtc.QDebug_OperatorShiftLeft25(@ptrCast(self), @ptrCast(t));
    }

    pub fn MaybeQuote1(self: ?*anyopaque, c: i8) QtC.QDebug {
        return qtc.QDebug_MaybeQuote1(@ptrCast(self), c);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDebug_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdebugstatesaver.html
pub const qdebugstatesaver = struct {

    /// New constructs a new QDebugStateSaver object.
    pub fn New(dbg: ?*anyopaque) QtC.QDebugStateSaver {
        return qtc.QDebugStateSaver_new(@ptrCast(dbg));
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDebugStateSaver_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qnodebug.html
pub const qnodebug = struct {

    /// New constructs a new QNoDebug object.
    pub fn New(other: ?*anyopaque) QtC.QNoDebug {
        return qtc.QNoDebug_new(@ptrCast(other));
    }


    /// New2 constructs a new QNoDebug object.
    pub fn New2(other: ?*anyopaque) QtC.QNoDebug {
        return qtc.QNoDebug_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNoDebug_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNoDebug_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Space(self: ?*anyopaque, ) QtC.QNoDebug {
        return qtc.QNoDebug_Space(@ptrCast(self));
    }

    pub fn Nospace(self: ?*anyopaque, ) QtC.QNoDebug {
        return qtc.QNoDebug_Nospace(@ptrCast(self));
    }

    pub fn MaybeSpace(self: ?*anyopaque, ) QtC.QNoDebug {
        return qtc.QNoDebug_MaybeSpace(@ptrCast(self));
    }

    pub fn Quote(self: ?*anyopaque, ) QtC.QNoDebug {
        return qtc.QNoDebug_Quote(@ptrCast(self));
    }

    pub fn Noquote(self: ?*anyopaque, ) QtC.QNoDebug {
        return qtc.QNoDebug_Noquote(@ptrCast(self));
    }

    pub fn MaybeQuote(self: ?*anyopaque, ) QtC.QNoDebug {
        return qtc.QNoDebug_MaybeQuote(@ptrCast(self));
    }

    pub fn Verbosity(self: ?*anyopaque, param1: i32) QtC.QNoDebug {
        return qtc.QNoDebug_Verbosity(@ptrCast(self), param1);
    }

    pub fn MaybeQuote1(self: ?*anyopaque, param1: i8) QtC.QNoDebug {
        return qtc.QNoDebug_MaybeQuote1(@ptrCast(self), param1);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNoDebug_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/debug.html#types
pub const enums = struct {
    pub const VerbosityLevel = enum {
        pub const MinimumVerbosity: i32 = 0;
        pub const DefaultVerbosity: i32 = 2;
        pub const MaximumVerbosity: i32 = 7;
    };

};
