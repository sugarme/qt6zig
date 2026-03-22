const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qeventpoint.html
pub const qeventpoint = struct {

    /// New constructs a new QEventPoint object.
    pub fn New() QtC.QEventPoint {
        return qtc.QEventPoint_new();
    }


    /// New2 constructs a new QEventPoint object.
    pub fn New2(pointId: i32, state: i32, scenePosition: ?*anyopaque, globalPosition: ?*anyopaque) QtC.QEventPoint {
        return qtc.QEventPoint_new2(pointId, @intCast(state), @ptrCast(scenePosition), @ptrCast(globalPosition));
    }


    /// New3 constructs a new QEventPoint object.
    pub fn New3(other: ?*anyopaque) QtC.QEventPoint {
        return qtc.QEventPoint_new3(@ptrCast(other));
    }


    /// New4 constructs a new QEventPoint object.
    pub fn New4(id: i32) QtC.QEventPoint {
        return qtc.QEventPoint_new4(id);
    }


    /// New5 constructs a new QEventPoint object.
    pub fn New5(id: i32, device: ?*anyopaque) QtC.QEventPoint {
        return qtc.QEventPoint_new5(id, @ptrCast(device));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QEventPoint_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QEventPoint_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QEventPoint_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QEventPoint_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Position(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_Position(@ptrCast(self));
    }

    pub fn PressPosition(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_PressPosition(@ptrCast(self));
    }

    pub fn GrabPosition(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_GrabPosition(@ptrCast(self));
    }

    pub fn LastPosition(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_LastPosition(@ptrCast(self));
    }

    pub fn ScenePosition(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_ScenePosition(@ptrCast(self));
    }

    pub fn ScenePressPosition(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_ScenePressPosition(@ptrCast(self));
    }

    pub fn SceneGrabPosition(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_SceneGrabPosition(@ptrCast(self));
    }

    pub fn SceneLastPosition(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_SceneLastPosition(@ptrCast(self));
    }

    pub fn GlobalPosition(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_GlobalPosition(@ptrCast(self));
    }

    pub fn GlobalPressPosition(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_GlobalPressPosition(@ptrCast(self));
    }

    pub fn GlobalGrabPosition(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_GlobalGrabPosition(@ptrCast(self));
    }

    pub fn GlobalLastPosition(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_GlobalLastPosition(@ptrCast(self));
    }

    pub fn NormalizedPosition(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_NormalizedPosition(@ptrCast(self));
    }

    pub fn Pos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_Pos(@ptrCast(self));
    }

    pub fn StartPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_StartPos(@ptrCast(self));
    }

    pub fn ScenePos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_ScenePos(@ptrCast(self));
    }

    pub fn StartScenePos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_StartScenePos(@ptrCast(self));
    }

    pub fn ScreenPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_ScreenPos(@ptrCast(self));
    }

    pub fn StartScreenPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_StartScreenPos(@ptrCast(self));
    }

    pub fn StartNormalizedPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_StartNormalizedPos(@ptrCast(self));
    }

    pub fn NormalizedPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_NormalizedPos(@ptrCast(self));
    }

    pub fn LastPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_LastPos(@ptrCast(self));
    }

    pub fn LastScenePos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_LastScenePos(@ptrCast(self));
    }

    pub fn LastScreenPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_LastScreenPos(@ptrCast(self));
    }

    pub fn LastNormalizedPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEventPoint_LastNormalizedPos(@ptrCast(self));
    }

    pub fn Velocity(self: ?*anyopaque, ) QtC.QVector2D {
        return qtc.QEventPoint_Velocity(@ptrCast(self));
    }

    pub fn State(self: ?*anyopaque, ) i32 {
        return qtc.QEventPoint_State(@ptrCast(self));
    }

    pub fn Device(self: ?*anyopaque, ) QtC.QPointingDevice {
        return qtc.QEventPoint_Device(@ptrCast(self));
    }

    pub fn Id(self: ?*anyopaque, ) i32 {
        return qtc.QEventPoint_Id(@ptrCast(self));
    }

    pub fn UniqueId(self: ?*anyopaque, ) QtC.QPointingDeviceUniqueId {
        return qtc.QEventPoint_UniqueId(@ptrCast(self));
    }

    pub fn Timestamp(self: ?*anyopaque, ) unsigned long {
        return qtc.QEventPoint_Timestamp(@ptrCast(self));
    }

    pub fn LastTimestamp(self: ?*anyopaque, ) unsigned long {
        return qtc.QEventPoint_LastTimestamp(@ptrCast(self));
    }

    pub fn PressTimestamp(self: ?*anyopaque, ) unsigned long {
        return qtc.QEventPoint_PressTimestamp(@ptrCast(self));
    }

    pub fn TimeHeld(self: ?*anyopaque, ) f64 {
        return qtc.QEventPoint_TimeHeld(@ptrCast(self));
    }

    pub fn Pressure(self: ?*anyopaque, ) f64 {
        return qtc.QEventPoint_Pressure(@ptrCast(self));
    }

    pub fn Rotation(self: ?*anyopaque, ) f64 {
        return qtc.QEventPoint_Rotation(@ptrCast(self));
    }

    pub fn EllipseDiameters(self: ?*anyopaque, ) QtC.QSizeF {
        return qtc.QEventPoint_EllipseDiameters(@ptrCast(self));
    }

    pub fn IsAccepted(self: ?*anyopaque, ) bool {
        return qtc.QEventPoint_IsAccepted(@ptrCast(self));
    }

    pub fn SetAccepted(self: ?*anyopaque, ) void {
        qtc.QEventPoint_SetAccepted(@ptrCast(self));
    }

    pub fn SetAccepted1(self: ?*anyopaque, accepted: bool) void {
        qtc.QEventPoint_SetAccepted1(@ptrCast(self), accepted);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QEventPoint_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/eventpoint.html#types
pub const enums = struct {
    pub const State = enum {
        pub const Unknown: u8 = 0;
        pub const Stationary: u8 = 4;
        pub const Pressed: u8 = 1;
        pub const Updated: u8 = 2;
        pub const Released: u8 = 8;
    };

};
