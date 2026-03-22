const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcborstreamwriter.html
pub const qcborstreamwriter = struct {

    /// New constructs a new QCborStreamWriter object.
    pub fn New(device: ?*anyopaque) QtC.QCborStreamWriter {
        return qtc.QCborStreamWriter_new(@ptrCast(device));
    }


    /// New2 constructs a new QCborStreamWriter object.
    pub fn New2(data: []u8) QtC.QCborStreamWriter {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QCborStreamWriter_new2(data_str);
    }


    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QCborStreamWriter_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    pub fn Device(self: ?*anyopaque, ) QtC.QIODevice {
        return qtc.QCborStreamWriter_Device(@ptrCast(self));
    }

    pub fn Append(self: ?*anyopaque, u: u64) void {
        qtc.QCborStreamWriter_Append(@ptrCast(self), u);
    }

    pub fn Append2(self: ?*anyopaque, i: i64) void {
        qtc.QCborStreamWriter_Append2(@ptrCast(self), i);
    }

    pub fn Append3(self: ?*anyopaque, n: u64) void {
        qtc.QCborStreamWriter_Append3(@ptrCast(self), @intCast(n));
    }

    pub fn Append4(self: ?*anyopaque, ba: []u8) void {
        const ba_str = qtc.libqt_string{
    .len = ba.len,
    .data = ba.ptr,
};
qtc.QCborStreamWriter_Append4(@ptrCast(self), ba_str);
    }

    pub fn Append5(self: ?*anyopaque, str: QLatin1StringView) void {
        qtc.QCborStreamWriter_Append5(@ptrCast(self), str);
    }

    pub fn Append6(self: ?*anyopaque, str: []const u8) void {
        qtc.QCborStreamWriter_Append6(@ptrCast(self), @ptrCast(str));
    }

    pub fn Append7(self: ?*anyopaque, tag: u64) void {
        qtc.QCborStreamWriter_Append7(@ptrCast(self), @intCast(tag));
    }

    pub fn Append8(self: ?*anyopaque, tag: i32) void {
        qtc.QCborStreamWriter_Append8(@ptrCast(self), @intCast(tag));
    }

    pub fn Append9(self: ?*anyopaque, st: u8) void {
        qtc.QCborStreamWriter_Append9(@ptrCast(self), @intCast(st));
    }

    pub fn Append11(self: ?*anyopaque, f: QtC.qfloat16) void {
        qtc.QCborStreamWriter_Append11(@ptrCast(self), @ptrCast(f));
    }

    pub fn Append12(self: ?*anyopaque, f: f32) void {
        qtc.QCborStreamWriter_Append12(@ptrCast(self), f);
    }

    pub fn Append13(self: ?*anyopaque, d: f64) void {
        qtc.QCborStreamWriter_Append13(@ptrCast(self), d);
    }

    pub fn AppendByteString(self: ?*anyopaque, data: []const u8, lenVal: i64) void {
        qtc.QCborStreamWriter_AppendByteString(@ptrCast(self), @ptrCast(data), lenVal);
    }

    pub fn AppendTextString(self: ?*anyopaque, utf8: []const u8, lenVal: i64) void {
        qtc.QCborStreamWriter_AppendTextString(@ptrCast(self), @ptrCast(utf8), lenVal);
    }

    pub fn Append14(self: ?*anyopaque, b: bool) void {
        qtc.QCborStreamWriter_Append14(@ptrCast(self), b);
    }

    pub fn AppendNull(self: ?*anyopaque, ) void {
        qtc.QCborStreamWriter_AppendNull(@ptrCast(self));
    }

    pub fn AppendUndefined(self: ?*anyopaque, ) void {
        qtc.QCborStreamWriter_AppendUndefined(@ptrCast(self));
    }

    pub fn Append15(self: ?*anyopaque, i: i32) void {
        qtc.QCborStreamWriter_Append15(@ptrCast(self), i);
    }

    pub fn Append16(self: ?*anyopaque, u: u32) void {
        qtc.QCborStreamWriter_Append16(@ptrCast(self), u);
    }

    pub fn Append17(self: ?*anyopaque, str: []const u8) void {
        qtc.QCborStreamWriter_Append17(@ptrCast(self), @ptrCast(str));
    }

    pub fn StartArray(self: ?*anyopaque, ) void {
        qtc.QCborStreamWriter_StartArray(@ptrCast(self));
    }

    pub fn StartArray2(self: ?*anyopaque, count: u64) void {
        qtc.QCborStreamWriter_StartArray2(@ptrCast(self), count);
    }

    pub fn EndArray(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamWriter_EndArray(@ptrCast(self));
    }

    pub fn StartMap(self: ?*anyopaque, ) void {
        qtc.QCborStreamWriter_StartMap(@ptrCast(self));
    }

    pub fn StartMap2(self: ?*anyopaque, count: u64) void {
        qtc.QCborStreamWriter_StartMap2(@ptrCast(self), count);
    }

    pub fn EndMap(self: ?*anyopaque, ) bool {
        return qtc.QCborStreamWriter_EndMap(@ptrCast(self));
    }

    pub fn Append22(self: ?*anyopaque, str: []const u8, size: i64) void {
        qtc.QCborStreamWriter_Append22(@ptrCast(self), @ptrCast(str), size);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborStreamWriter_Delete(@ptrCast(self));
    }
};
