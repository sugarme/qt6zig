const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qstringencoder.html
pub const qstringencoder = struct {

    /// New constructs a new QStringEncoder object.
    pub fn New() QtC.QStringEncoder {
        return qtc.QStringEncoder_new();
    }


    /// New2 constructs a new QStringEncoder object.
    pub fn New2(encoding: i32) QtC.QStringEncoder {
        return qtc.QStringEncoder_new2(@intCast(encoding));
    }


    /// New3 constructs a new QStringEncoder object.
    pub fn New3(encoding: i32, flags: i64) QtC.QStringEncoder {
        return qtc.QStringEncoder_new3(@intCast(encoding), @intCast(flags));
    }


    pub fn RequiredSpace(self: ?*anyopaque, inputLength: i64) i64 {
        return qtc.QStringEncoder_RequiredSpace(@ptrCast(self), inputLength);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStringEncoder_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstringdecoder.html
pub const qstringdecoder = struct {

    /// New constructs a new QStringDecoder object.
    pub fn New(encoding: i32) QtC.QStringDecoder {
        return qtc.QStringDecoder_new(@intCast(encoding));
    }


    /// New2 constructs a new QStringDecoder object.
    pub fn New2() QtC.QStringDecoder {
        return qtc.QStringDecoder_new2();
    }


    /// New3 constructs a new QStringDecoder object.
    pub fn New3(encoding: i32, flags: i64) QtC.QStringDecoder {
        return qtc.QStringDecoder_new3(@intCast(encoding), @intCast(flags));
    }


    pub fn RequiredSpace(self: ?*anyopaque, inputLength: i64) i64 {
        return qtc.QStringDecoder_RequiredSpace(@ptrCast(self), inputLength);
    }

    pub fn AppendToBuffer(self: ?*anyopaque, out: ?*anyopaque, ba: []const u8) QtC.QChar {
        return qtc.QStringDecoder_AppendToBuffer(@ptrCast(self), @ptrCast(out), @ptrCast(ba));
    }

    pub fn DecoderForHtml(data: []const u8) QtC.QStringDecoder {
        return qtc.QStringDecoder_DecoderForHtml(@ptrCast(data));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStringDecoder_Delete(@ptrCast(self));
    }
};
