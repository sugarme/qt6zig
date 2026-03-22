const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qaudiolistener.html
pub const qaudiolistener = struct {

    /// New constructs a new QAudioListener object.
    pub fn New(engine: ?*anyopaque) QtC.QAudioListener {
        return qtc.QAudioListener_new(@ptrCast(engine));
    }


    pub fn SetPosition(self: ?*anyopaque, pos: QtC.QVector3D) void {
        qtc.QAudioListener_SetPosition(@ptrCast(self), @ptrCast(pos));
    }

    pub fn Position(self: ?*anyopaque, ) QtC.QVector3D {
        return qtc.QAudioListener_Position(@ptrCast(self));
    }

    pub fn SetRotation(self: ?*anyopaque, q: ?*anyopaque) void {
        qtc.QAudioListener_SetRotation(@ptrCast(self), @ptrCast(q));
    }

    pub fn Rotation(self: ?*anyopaque, ) QtC.QQuaternion {
        return qtc.QAudioListener_Rotation(@ptrCast(self));
    }

    pub fn Engine(self: ?*anyopaque, ) QtC.QAudioEngine {
        return qtc.QAudioListener_Engine(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAudioListener_Delete(@ptrCast(self));
    }
};
