const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qaudiobuffer.html
pub const qaudiobuffer = struct {

    /// New constructs a new QAudioBuffer object.
    pub fn New() QtC.QAudioBuffer {
        return qtc.QAudioBuffer_new();
    }


    /// New2 constructs a new QAudioBuffer object.
    pub fn New2(other: ?*anyopaque) QtC.QAudioBuffer {
        return qtc.QAudioBuffer_new2(@ptrCast(other));
    }


    /// New3 constructs a new QAudioBuffer object.
    pub fn New3(data: []u8, format: ?*anyopaque) QtC.QAudioBuffer {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QAudioBuffer_new3(data_str, @ptrCast(format));
    }


    /// New4 constructs a new QAudioBuffer object.
    pub fn New4(numFrames: i32, format: ?*anyopaque) QtC.QAudioBuffer {
        return qtc.QAudioBuffer_new4(numFrames, @ptrCast(format));
    }


    /// New5 constructs a new QAudioBuffer object.
    pub fn New5(data: []u8, format: ?*anyopaque, startTime: i64) QtC.QAudioBuffer {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QAudioBuffer_new5(data_str, @ptrCast(format), startTime);
    }


    /// New6 constructs a new QAudioBuffer object.
    pub fn New6(numFrames: i32, format: ?*anyopaque, startTime: i64) QtC.QAudioBuffer {
        return qtc.QAudioBuffer_new6(numFrames, @ptrCast(format), startTime);
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAudioBuffer_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAudioBuffer_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QAudioBuffer_IsValid(@ptrCast(self));
    }

    pub fn Detach(self: ?*anyopaque, ) void {
        qtc.QAudioBuffer_Detach(@ptrCast(self));
    }

    pub fn Format(self: ?*anyopaque, ) QtC.QAudioFormat {
        return qtc.QAudioBuffer_Format(@ptrCast(self));
    }

    pub fn FrameCount(self: ?*anyopaque, ) i64 {
        return qtc.QAudioBuffer_FrameCount(@ptrCast(self));
    }

    pub fn SampleCount(self: ?*anyopaque, ) i64 {
        return qtc.QAudioBuffer_SampleCount(@ptrCast(self));
    }

    pub fn ByteCount(self: ?*anyopaque, ) i64 {
        return qtc.QAudioBuffer_ByteCount(@ptrCast(self));
    }

    pub fn Duration(self: ?*anyopaque, ) i64 {
        return qtc.QAudioBuffer_Duration(@ptrCast(self));
    }

    pub fn StartTime(self: ?*anyopaque, ) i64 {
        return qtc.QAudioBuffer_StartTime(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAudioBuffer_Delete(@ptrCast(self));
    }
};
