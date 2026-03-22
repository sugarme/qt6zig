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
    pub fn New3(name: []const u8) QtC.QStringEncoder {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QStringEncoder_new3(name_str);
    }


    /// New4 constructs a new QStringEncoder object.
    pub fn New4(encoding: i32, flags: i64) QtC.QStringEncoder {
        return qtc.QStringEncoder_new4(@intCast(encoding), @intCast(flags));
    }


    /// New5 constructs a new QStringEncoder object.
    pub fn New5(name: []const u8, flags: i64) QtC.QStringEncoder {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QStringEncoder_new5(name_str, @intCast(flags));
    }


    pub fn OperatorCall(self: ?*anyopaque, in: []const u8) DecodedData<QStringView> {
        return qtc.QStringEncoder_OperatorCall(@ptrCast(self), @ptrCast(in));
    }

    pub fn Encode(self: ?*anyopaque, in: []const u8) DecodedData<QStringView> {
        return qtc.QStringEncoder_Encode(@ptrCast(self), @ptrCast(in));
    }

    pub fn RequiredSpace(self: ?*anyopaque, inputLength: i64) i64 {
        return qtc.QStringEncoder_RequiredSpace(@ptrCast(self), inputLength);
    }

    pub fn AppendToBuffer(self: ?*anyopaque, out: []const u8, in: []const u8) []const u8 {
        const _ret = qtc.QStringEncoder_AppendToBuffer(@ptrCast(self), @ptrCast(out), @ptrCast(in));
return  std.mem.span(_ret);
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
    pub fn New3(name: []const u8) QtC.QStringDecoder {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QStringDecoder_new3(name_str);
    }


    /// New4 constructs a new QStringDecoder object.
    pub fn New4(encoding: i32, flags: i64) QtC.QStringDecoder {
        return qtc.QStringDecoder_new4(@intCast(encoding), @intCast(flags));
    }


    /// New5 constructs a new QStringDecoder object.
    pub fn New5(name: []const u8, f: i64) QtC.QStringDecoder {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QStringDecoder_new5(name_str, @intCast(f));
    }


    pub fn OperatorCall(self: ?*anyopaque, ba: []const u8) EncodedData<QByteArrayView> {
        return qtc.QStringDecoder_OperatorCall(@ptrCast(self), @ptrCast(ba));
    }

    pub fn Decode(self: ?*anyopaque, ba: []const u8) EncodedData<QByteArrayView> {
        return qtc.QStringDecoder_Decode(@ptrCast(self), @ptrCast(ba));
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
