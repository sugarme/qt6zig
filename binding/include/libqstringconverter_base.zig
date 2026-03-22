const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qstringconverter.html
pub const qstringconverter = struct {

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QStringConverter_IsValid(@ptrCast(self));
    }

    pub fn ResetState(self: ?*anyopaque, ) void {
        qtc.QStringConverter_ResetState(@ptrCast(self));
    }

    pub fn HasError(self: ?*anyopaque, ) bool {
        return qtc.QStringConverter_HasError(@ptrCast(self));
    }

    pub fn Name(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QStringConverter_Name(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn NameForEncoding(e: i32) []const u8 {
        const _ret = qtc.QStringConverter_NameForEncoding(@intCast(e));
return  std.mem.span(_ret);
    }

    pub fn AvailableCodecs() []const u8 {
        return qtc.QStringConverter_AvailableCodecs();
    }
};

/// https://doc.qt.io/qt-6/qstringconverterbase-state.html
pub const qstringconverterbase__state = struct {

    /// New constructs a new QStringConverterBase::State object.
    pub fn New() QtC.QStringConverterBase__State {
        return qtc.QStringConverterBase__State_new();
    }


    /// New2 constructs a new QStringConverterBase::State object.
    pub fn New2(f: i64) QtC.QStringConverterBase__State {
        return qtc.QStringConverterBase__State_new2(@intCast(f));
    }


    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QStringConverterBase__State_Clear(@ptrCast(self));
    }

    pub fn Reset(self: ?*anyopaque, ) void {
        qtc.QStringConverterBase__State_Reset(@ptrCast(self));
    }

    pub fn Flags(self: ?*anyopaque, ) i32 {
        return qtc.QStringConverterBase__State_Flags(@ptrCast(self));
    }

    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QStringConverterBase__State_SetFlags(@ptrCast(self), @intCast(flags));
    }

    pub fn InternalState(self: ?*anyopaque, ) i32 {
        return qtc.QStringConverterBase__State_InternalState(@ptrCast(self));
    }

    pub fn SetInternalState(self: ?*anyopaque, internalState: i32) void {
        qtc.QStringConverterBase__State_SetInternalState(@ptrCast(self), internalState);
    }

    pub fn RemainingChars(self: ?*anyopaque, ) i64 {
        return qtc.QStringConverterBase__State_RemainingChars(@ptrCast(self));
    }

    pub fn SetRemainingChars(self: ?*anyopaque, remainingChars: i64) void {
        qtc.QStringConverterBase__State_SetRemainingChars(@ptrCast(self), remainingChars);
    }

    pub fn InvalidChars(self: ?*anyopaque, ) i64 {
        return qtc.QStringConverterBase__State_InvalidChars(@ptrCast(self));
    }

    pub fn SetInvalidChars(self: ?*anyopaque, invalidChars: i64) void {
        qtc.QStringConverterBase__State_SetInvalidChars(@ptrCast(self), invalidChars);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStringConverterBase__State_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/stringconverter_base.html#types
pub const enums = struct {
    pub const Flag = enum {
        pub const Default: i32 = 0;
        pub const Stateless: i32 = 1;
        pub const ConvertInvalidToNull: i32 = 2;
        pub const WriteBom: i32 = 4;
        pub const ConvertInitialBom: i32 = 8;
        pub const UsesIcu: i32 = 16;
    };

    pub const Encoding = enum {
        pub const Utf8: i32 = 0;
        pub const Utf16: i32 = 1;
        pub const Utf16LE: i32 = 2;
        pub const Utf16BE: i32 = 3;
        pub const Utf32: i32 = 4;
        pub const Utf32LE: i32 = 5;
        pub const Utf32BE: i32 = 6;
        pub const Latin1: i32 = 7;
        pub const System: i32 = 8;
        pub const LastEncoding: i32 = 8;
    };

};
