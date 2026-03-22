const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qinputevent.html
pub const qinputevent = struct {

    /// New constructs a new QInputEvent object.
    pub fn New(typeVal: i32, m_dev: ?*anyopaque) QtC.QInputEvent {
        return qtc.QInputEvent_new(@intCast(typeVal), @ptrCast(m_dev));
    }


    /// New2 constructs a new QInputEvent object.
    pub fn New2(typeVal: i32, m_dev: ?*anyopaque, modifiers: i64) QtC.QInputEvent {
        return qtc.QInputEvent_new2(@intCast(typeVal), @ptrCast(m_dev), @intCast(modifiers));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QInputEvent_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OnOperatorAssign(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QInputEvent_Connect_OperatorAssign(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Allows for overriding the related default method
    pub fn OnOperatorAssign(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QInputEvent_OnOperatorAssign(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QInputEvent_QBaseOperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Device(self: ?*anyopaque, ) QtC.QInputDevice {
        return qtc.QInputEvent_Device(@ptrCast(self));
    }

    pub fn DeviceType(self: ?*anyopaque, ) i32 {
        return qtc.QInputEvent_DeviceType(@ptrCast(self));
    }

    pub fn Modifiers(self: ?*anyopaque, ) i64 {
        return qtc.QInputEvent_Modifiers(@ptrCast(self));
    }

    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QInputEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    pub fn Timestamp(self: ?*anyopaque, ) u64 {
        return qtc.QInputEvent_Timestamp(@ptrCast(self));
    }

    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QInputEvent_SetTimestamp(@ptrCast(self), timestamp);
    }

    /// Allows for overriding the related default method
    pub fn OnSetTimestamp(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QInputEvent_OnSetTimestamp(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QInputEvent_QBaseSetTimestamp(@ptrCast(self), timestamp);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QInputEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpointerevent.html
pub const qpointerevent = struct {

    /// New constructs a new QPointerEvent object.
    pub fn New(typeVal: i32, dev: ?*anyopaque) QtC.QPointerEvent {
        return qtc.QPointerEvent_new(@intCast(typeVal), @ptrCast(dev));
    }


    /// New2 constructs a new QPointerEvent object.
    pub fn New2(typeVal: i32, dev: ?*anyopaque, modifiers: i64) QtC.QPointerEvent {
        return qtc.QPointerEvent_new2(@intCast(typeVal), @ptrCast(dev), @intCast(modifiers));
    }


    /// New3 constructs a new QPointerEvent object.
    pub fn New3(typeVal: i32, dev: ?*anyopaque, modifiers: i64, points: []const u8) QtC.QPointerEvent {
        return qtc.QPointerEvent_new3(@intCast(typeVal), @ptrCast(dev), @intCast(modifiers), @ptrCast(points));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPointerEvent_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OnOperatorAssign(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPointerEvent_Connect_OperatorAssign(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Allows for overriding the related default method
    pub fn OnOperatorAssign(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPointerEvent_OnOperatorAssign(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPointerEvent_QBaseOperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn PointingDevice(self: ?*anyopaque, ) QtC.QPointingDevice {
        return qtc.QPointerEvent_PointingDevice(@ptrCast(self));
    }

    pub fn PointerType(self: ?*anyopaque, ) i32 {
        return qtc.QPointerEvent_PointerType(@ptrCast(self));
    }

    pub fn SetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QPointerEvent_SetTimestamp(@ptrCast(self), timestamp);
    }

    /// Allows for overriding the related default method
    pub fn OnSetTimestamp(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.QPointerEvent_OnSetTimestamp(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetTimestamp(self: ?*anyopaque, timestamp: u64) void {
        qtc.QPointerEvent_QBaseSetTimestamp(@ptrCast(self), timestamp);
    }

    pub fn PointCount(self: ?*anyopaque, ) i64 {
        return qtc.QPointerEvent_PointCount(@ptrCast(self));
    }

    pub fn Point(self: ?*anyopaque, i: i64) QtC.QEventPoint {
        return qtc.QPointerEvent_Point(@ptrCast(self), i);
    }

    pub fn Points(self: ?*anyopaque, ) []const u8 {
        return @ptrCast(qtc.QPointerEvent_Points(@ptrCast(self)));
    }

    pub fn PointById(self: ?*anyopaque, id: i32) QtC.QEventPoint {
        return qtc.QPointerEvent_PointById(@ptrCast(self), id);
    }

    pub fn AllPointsGrabbed(self: ?*anyopaque, ) bool {
        return qtc.QPointerEvent_AllPointsGrabbed(@ptrCast(self));
    }

    pub fn IsBeginEvent(self: ?*anyopaque, ) bool {
        return qtc.QPointerEvent_IsBeginEvent(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsBeginEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QPointerEvent_OnIsBeginEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsBeginEvent(self: ?*anyopaque, ) bool {
        return qtc.QPointerEvent_QBaseIsBeginEvent(@ptrCast(self));
    }

    pub fn IsUpdateEvent(self: ?*anyopaque, ) bool {
        return qtc.QPointerEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsUpdateEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QPointerEvent_OnIsUpdateEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque, ) bool {
        return qtc.QPointerEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    pub fn IsEndEvent(self: ?*anyopaque, ) bool {
        return qtc.QPointerEvent_IsEndEvent(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsEndEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QPointerEvent_OnIsEndEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsEndEvent(self: ?*anyopaque, ) bool {
        return qtc.QPointerEvent_QBaseIsEndEvent(@ptrCast(self));
    }

    pub fn AllPointsAccepted(self: ?*anyopaque, ) bool {
        return qtc.QPointerEvent_AllPointsAccepted(@ptrCast(self));
    }

    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QPointerEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Allows for overriding the related default method
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPointerEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QPointerEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    pub fn ExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque) QtC.QObject {
        return qtc.QPointerEvent_ExclusiveGrabber(@ptrCast(self), @ptrCast(point));
    }

    pub fn SetExclusiveGrabber(self: ?*anyopaque, point: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QPointerEvent_SetExclusiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(exclusiveGrabber));
    }

    pub fn PassiveGrabbers(self: ?*anyopaque, point: ?*anyopaque) []const u8 {
        return qtc.QPointerEvent_PassiveGrabbers(@ptrCast(self), @ptrCast(point));
    }

    pub fn ClearPassiveGrabbers(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointerEvent_ClearPassiveGrabbers(@ptrCast(self), @ptrCast(point));
    }

    pub fn AddPassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_AddPassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    pub fn RemovePassiveGrabber(self: ?*anyopaque, point: ?*anyopaque, grabber: ?*anyopaque) bool {
        return qtc.QPointerEvent_RemovePassiveGrabber(@ptrCast(self), @ptrCast(point), @ptrCast(grabber));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPointerEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsinglepointevent.html
pub const qsinglepointevent = struct {

    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSinglePointEvent_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OnOperatorAssign(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSinglePointEvent_Connect_OperatorAssign(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Allows for overriding the related default method
    pub fn OnOperatorAssign(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSinglePointEvent_OnOperatorAssign(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSinglePointEvent_QBaseOperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Button(self: ?*anyopaque, ) i64 {
        return qtc.QSinglePointEvent_Button(@ptrCast(self));
    }

    pub fn Buttons(self: ?*anyopaque, ) i64 {
        return qtc.QSinglePointEvent_Buttons(@ptrCast(self));
    }

    pub fn Position(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QSinglePointEvent_Position(@ptrCast(self));
    }

    pub fn ScenePosition(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QSinglePointEvent_ScenePosition(@ptrCast(self));
    }

    pub fn GlobalPosition(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QSinglePointEvent_GlobalPosition(@ptrCast(self));
    }

    pub fn IsBeginEvent(self: ?*anyopaque, ) bool {
        return qtc.QSinglePointEvent_IsBeginEvent(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsBeginEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSinglePointEvent_OnIsBeginEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsBeginEvent(self: ?*anyopaque, ) bool {
        return qtc.QSinglePointEvent_QBaseIsBeginEvent(@ptrCast(self));
    }

    pub fn IsUpdateEvent(self: ?*anyopaque, ) bool {
        return qtc.QSinglePointEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsUpdateEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSinglePointEvent_OnIsUpdateEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque, ) bool {
        return qtc.QSinglePointEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    pub fn IsEndEvent(self: ?*anyopaque, ) bool {
        return qtc.QSinglePointEvent_IsEndEvent(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsEndEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QSinglePointEvent_OnIsEndEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsEndEvent(self: ?*anyopaque, ) bool {
        return qtc.QSinglePointEvent_QBaseIsEndEvent(@ptrCast(self));
    }

    pub fn ExclusivePointGrabber(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QSinglePointEvent_ExclusivePointGrabber(@ptrCast(self));
    }

    pub fn SetExclusivePointGrabber(self: ?*anyopaque, exclusiveGrabber: ?*anyopaque) void {
        qtc.QSinglePointEvent_SetExclusivePointGrabber(@ptrCast(self), @ptrCast(exclusiveGrabber));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSinglePointEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qenterevent.html
pub const qenterevent = struct {

    /// New constructs a new QEnterEvent object.
    pub fn New(localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque) QtC.QEnterEvent {
        return qtc.QEnterEvent_new(@ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos));
    }


    /// New2 constructs a new QEnterEvent object.
    pub fn New2(localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, device: ?*anyopaque) QtC.QEnterEvent {
        return qtc.QEnterEvent_new2(@ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @ptrCast(device));
    }


    pub fn Pos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QEnterEvent_Pos(@ptrCast(self));
    }

    pub fn GlobalPos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QEnterEvent_GlobalPos(@ptrCast(self));
    }

    pub fn X(self: ?*anyopaque, ) i32 {
        return qtc.QEnterEvent_X(@ptrCast(self));
    }

    pub fn Y(self: ?*anyopaque, ) i32 {
        return qtc.QEnterEvent_Y(@ptrCast(self));
    }

    pub fn GlobalX(self: ?*anyopaque, ) i32 {
        return qtc.QEnterEvent_GlobalX(@ptrCast(self));
    }

    pub fn GlobalY(self: ?*anyopaque, ) i32 {
        return qtc.QEnterEvent_GlobalY(@ptrCast(self));
    }

    pub fn LocalPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEnterEvent_LocalPos(@ptrCast(self));
    }

    pub fn WindowPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEnterEvent_WindowPos(@ptrCast(self));
    }

    pub fn ScreenPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QEnterEvent_ScreenPos(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QEnterEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmouseevent.html
pub const qmouseevent = struct {

    /// New constructs a new QMouseEvent object.
    pub fn New(typeVal: i32, localPos: ?*anyopaque, button: i64, buttons: i64, modifiers: i64) QtC.QMouseEvent {
        return qtc.QMouseEvent_new(@intCast(typeVal), @ptrCast(localPos), @intCast(button), @intCast(buttons), @intCast(modifiers));
    }


    /// New2 constructs a new QMouseEvent object.
    pub fn New2(typeVal: i32, localPos: ?*anyopaque, globalPos: ?*anyopaque, button: i64, buttons: i64, modifiers: i64) QtC.QMouseEvent {
        return qtc.QMouseEvent_new2(@intCast(typeVal), @ptrCast(localPos), @ptrCast(globalPos), @intCast(button), @intCast(buttons), @intCast(modifiers));
    }


    /// New3 constructs a new QMouseEvent object.
    pub fn New3(typeVal: i32, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, button: i64, buttons: i64, modifiers: i64) QtC.QMouseEvent {
        return qtc.QMouseEvent_new3(@intCast(typeVal), @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @intCast(button), @intCast(buttons), @intCast(modifiers));
    }


    /// New4 constructs a new QMouseEvent object.
    pub fn New4(typeVal: i32, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, button: i64, buttons: i64, modifiers: i64, source: i32) QtC.QMouseEvent {
        return qtc.QMouseEvent_new4(@intCast(typeVal), @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @intCast(button), @intCast(buttons), @intCast(modifiers), @intCast(source));
    }


    /// New5 constructs a new QMouseEvent object.
    pub fn New5(typeVal: i32, localPos: ?*anyopaque, button: i64, buttons: i64, modifiers: i64, device: ?*anyopaque) QtC.QMouseEvent {
        return qtc.QMouseEvent_new5(@intCast(typeVal), @ptrCast(localPos), @intCast(button), @intCast(buttons), @intCast(modifiers), @ptrCast(device));
    }


    /// New6 constructs a new QMouseEvent object.
    pub fn New6(typeVal: i32, localPos: ?*anyopaque, globalPos: ?*anyopaque, button: i64, buttons: i64, modifiers: i64, device: ?*anyopaque) QtC.QMouseEvent {
        return qtc.QMouseEvent_new6(@intCast(typeVal), @ptrCast(localPos), @ptrCast(globalPos), @intCast(button), @intCast(buttons), @intCast(modifiers), @ptrCast(device));
    }


    /// New7 constructs a new QMouseEvent object.
    pub fn New7(typeVal: i32, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, button: i64, buttons: i64, modifiers: i64, device: ?*anyopaque) QtC.QMouseEvent {
        return qtc.QMouseEvent_new7(@intCast(typeVal), @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @intCast(button), @intCast(buttons), @intCast(modifiers), @ptrCast(device));
    }


    /// New8 constructs a new QMouseEvent object.
    pub fn New8(typeVal: i32, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, button: i64, buttons: i64, modifiers: i64, source: i32, device: ?*anyopaque) QtC.QMouseEvent {
        return qtc.QMouseEvent_new8(@intCast(typeVal), @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), @intCast(button), @intCast(buttons), @intCast(modifiers), @intCast(source), @ptrCast(device));
    }


    pub fn Pos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QMouseEvent_Pos(@ptrCast(self));
    }

    pub fn GlobalPos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QMouseEvent_GlobalPos(@ptrCast(self));
    }

    pub fn X(self: ?*anyopaque, ) i32 {
        return qtc.QMouseEvent_X(@ptrCast(self));
    }

    pub fn Y(self: ?*anyopaque, ) i32 {
        return qtc.QMouseEvent_Y(@ptrCast(self));
    }

    pub fn GlobalX(self: ?*anyopaque, ) i32 {
        return qtc.QMouseEvent_GlobalX(@ptrCast(self));
    }

    pub fn GlobalY(self: ?*anyopaque, ) i32 {
        return qtc.QMouseEvent_GlobalY(@ptrCast(self));
    }

    pub fn LocalPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QMouseEvent_LocalPos(@ptrCast(self));
    }

    pub fn WindowPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QMouseEvent_WindowPos(@ptrCast(self));
    }

    pub fn ScreenPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QMouseEvent_ScreenPos(@ptrCast(self));
    }

    pub fn Source(self: ?*anyopaque, ) i32 {
        return qtc.QMouseEvent_Source(@ptrCast(self));
    }

    pub fn Flags(self: ?*anyopaque, ) i32 {
        return qtc.QMouseEvent_Flags(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMouseEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qhoverevent.html
pub const qhoverevent = struct {

    /// New constructs a new QHoverEvent object.
    pub fn New(typeVal: i32, scenePos: ?*anyopaque, globalPos: ?*anyopaque, oldPos: ?*anyopaque) QtC.QHoverEvent {
        return qtc.QHoverEvent_new(@intCast(typeVal), @ptrCast(scenePos), @ptrCast(globalPos), @ptrCast(oldPos));
    }


    /// New2 constructs a new QHoverEvent object.
    pub fn New2(typeVal: i32, pos: ?*anyopaque, oldPos: ?*anyopaque) QtC.QHoverEvent {
        return qtc.QHoverEvent_new2(@intCast(typeVal), @ptrCast(pos), @ptrCast(oldPos));
    }


    /// New3 constructs a new QHoverEvent object.
    pub fn New3(typeVal: i32, scenePos: ?*anyopaque, globalPos: ?*anyopaque, oldPos: ?*anyopaque, modifiers: i64) QtC.QHoverEvent {
        return qtc.QHoverEvent_new3(@intCast(typeVal), @ptrCast(scenePos), @ptrCast(globalPos), @ptrCast(oldPos), @intCast(modifiers));
    }


    /// New4 constructs a new QHoverEvent object.
    pub fn New4(typeVal: i32, scenePos: ?*anyopaque, globalPos: ?*anyopaque, oldPos: ?*anyopaque, modifiers: i64, device: ?*anyopaque) QtC.QHoverEvent {
        return qtc.QHoverEvent_new4(@intCast(typeVal), @ptrCast(scenePos), @ptrCast(globalPos), @ptrCast(oldPos), @intCast(modifiers), @ptrCast(device));
    }


    /// New5 constructs a new QHoverEvent object.
    pub fn New5(typeVal: i32, pos: ?*anyopaque, oldPos: ?*anyopaque, modifiers: i64) QtC.QHoverEvent {
        return qtc.QHoverEvent_new5(@intCast(typeVal), @ptrCast(pos), @ptrCast(oldPos), @intCast(modifiers));
    }


    /// New6 constructs a new QHoverEvent object.
    pub fn New6(typeVal: i32, pos: ?*anyopaque, oldPos: ?*anyopaque, modifiers: i64, device: ?*anyopaque) QtC.QHoverEvent {
        return qtc.QHoverEvent_new6(@intCast(typeVal), @ptrCast(pos), @ptrCast(oldPos), @intCast(modifiers), @ptrCast(device));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHoverEvent_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OnOperatorAssign(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHoverEvent_Connect_OperatorAssign(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Allows for overriding the related default method
    pub fn OnOperatorAssign(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHoverEvent_OnOperatorAssign(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHoverEvent_QBaseOperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Pos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QHoverEvent_Pos(@ptrCast(self));
    }

    pub fn PosF(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QHoverEvent_PosF(@ptrCast(self));
    }

    pub fn IsUpdateEvent(self: ?*anyopaque, ) bool {
        return qtc.QHoverEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsUpdateEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QHoverEvent_OnIsUpdateEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque, ) bool {
        return qtc.QHoverEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    pub fn OldPos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QHoverEvent_OldPos(@ptrCast(self));
    }

    pub fn OldPosF(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QHoverEvent_OldPosF(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHoverEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwheelevent.html
pub const qwheelevent = struct {

    /// New constructs a new QWheelEvent object.
    pub fn New(pos: ?*anyopaque, globalPos: ?*anyopaque, pixelDelta: QtC.QPoint, angleDelta: QtC.QPoint, buttons: i64, modifiers: i64, phase: i32, inverted: bool) QtC.QWheelEvent {
        return qtc.QWheelEvent_new(@ptrCast(pos), @ptrCast(globalPos), @ptrCast(pixelDelta), @ptrCast(angleDelta), @intCast(buttons), @intCast(modifiers), @intCast(phase), inverted);
    }


    /// New2 constructs a new QWheelEvent object.
    pub fn New2(pos: ?*anyopaque, globalPos: ?*anyopaque, pixelDelta: QtC.QPoint, angleDelta: QtC.QPoint, buttons: i64, modifiers: i64, phase: i32, inverted: bool, source: i32) QtC.QWheelEvent {
        return qtc.QWheelEvent_new2(@ptrCast(pos), @ptrCast(globalPos), @ptrCast(pixelDelta), @ptrCast(angleDelta), @intCast(buttons), @intCast(modifiers), @intCast(phase), inverted, @intCast(source));
    }


    /// New3 constructs a new QWheelEvent object.
    pub fn New3(pos: ?*anyopaque, globalPos: ?*anyopaque, pixelDelta: QtC.QPoint, angleDelta: QtC.QPoint, buttons: i64, modifiers: i64, phase: i32, inverted: bool, source: i32, device: ?*anyopaque) QtC.QWheelEvent {
        return qtc.QWheelEvent_new3(@ptrCast(pos), @ptrCast(globalPos), @ptrCast(pixelDelta), @ptrCast(angleDelta), @intCast(buttons), @intCast(modifiers), @intCast(phase), inverted, @intCast(source), @ptrCast(device));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWheelEvent_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OnOperatorAssign(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWheelEvent_Connect_OperatorAssign(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Allows for overriding the related default method
    pub fn OnOperatorAssign(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWheelEvent_OnOperatorAssign(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWheelEvent_QBaseOperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn PixelDelta(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QWheelEvent_PixelDelta(@ptrCast(self));
    }

    pub fn AngleDelta(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QWheelEvent_AngleDelta(@ptrCast(self));
    }

    pub fn Phase(self: ?*anyopaque, ) i32 {
        return qtc.QWheelEvent_Phase(@ptrCast(self));
    }

    pub fn Inverted(self: ?*anyopaque, ) bool {
        return qtc.QWheelEvent_Inverted(@ptrCast(self));
    }

    pub fn IsInverted(self: ?*anyopaque, ) bool {
        return qtc.QWheelEvent_IsInverted(@ptrCast(self));
    }

    pub fn HasPixelDelta(self: ?*anyopaque, ) bool {
        return qtc.QWheelEvent_HasPixelDelta(@ptrCast(self));
    }

    pub fn IsBeginEvent(self: ?*anyopaque, ) bool {
        return qtc.QWheelEvent_IsBeginEvent(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsBeginEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QWheelEvent_OnIsBeginEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsBeginEvent(self: ?*anyopaque, ) bool {
        return qtc.QWheelEvent_QBaseIsBeginEvent(@ptrCast(self));
    }

    pub fn IsUpdateEvent(self: ?*anyopaque, ) bool {
        return qtc.QWheelEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsUpdateEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QWheelEvent_OnIsUpdateEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque, ) bool {
        return qtc.QWheelEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    pub fn IsEndEvent(self: ?*anyopaque, ) bool {
        return qtc.QWheelEvent_IsEndEvent(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsEndEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QWheelEvent_OnIsEndEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsEndEvent(self: ?*anyopaque, ) bool {
        return qtc.QWheelEvent_QBaseIsEndEvent(@ptrCast(self));
    }

    pub fn Source(self: ?*anyopaque, ) i32 {
        return qtc.QWheelEvent_Source(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWheelEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtabletevent.html
pub const qtabletevent = struct {

    /// New constructs a new QTabletEvent object.
    pub fn New(t: i32, device: ?*anyopaque, pos: ?*anyopaque, globalPos: ?*anyopaque, pressure: f64, xTilt: f32, yTilt: f32, tangentialPressure: f32, rotation: f64, z: f32, keyState: i64, button: i64, buttons: i64) QtC.QTabletEvent {
        return qtc.QTabletEvent_new(@intCast(t), @ptrCast(device), @ptrCast(pos), @ptrCast(globalPos), pressure, xTilt, yTilt, tangentialPressure, rotation, z, @intCast(keyState), @intCast(button), @intCast(buttons));
    }


    pub fn Pos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QTabletEvent_Pos(@ptrCast(self));
    }

    pub fn GlobalPos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QTabletEvent_GlobalPos(@ptrCast(self));
    }

    pub fn PosF(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QTabletEvent_PosF(@ptrCast(self));
    }

    pub fn GlobalPosF(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QTabletEvent_GlobalPosF(@ptrCast(self));
    }

    pub fn X(self: ?*anyopaque, ) i32 {
        return qtc.QTabletEvent_X(@ptrCast(self));
    }

    pub fn Y(self: ?*anyopaque, ) i32 {
        return qtc.QTabletEvent_Y(@ptrCast(self));
    }

    pub fn GlobalX(self: ?*anyopaque, ) i32 {
        return qtc.QTabletEvent_GlobalX(@ptrCast(self));
    }

    pub fn GlobalY(self: ?*anyopaque, ) i32 {
        return qtc.QTabletEvent_GlobalY(@ptrCast(self));
    }

    pub fn HiResGlobalX(self: ?*anyopaque, ) f64 {
        return qtc.QTabletEvent_HiResGlobalX(@ptrCast(self));
    }

    pub fn HiResGlobalY(self: ?*anyopaque, ) f64 {
        return qtc.QTabletEvent_HiResGlobalY(@ptrCast(self));
    }

    pub fn UniqueId(self: ?*anyopaque, ) i64 {
        return qtc.QTabletEvent_UniqueId(@ptrCast(self));
    }

    pub fn Pressure(self: ?*anyopaque, ) f64 {
        return qtc.QTabletEvent_Pressure(@ptrCast(self));
    }

    pub fn Rotation(self: ?*anyopaque, ) f64 {
        return qtc.QTabletEvent_Rotation(@ptrCast(self));
    }

    pub fn Z(self: ?*anyopaque, ) f64 {
        return qtc.QTabletEvent_Z(@ptrCast(self));
    }

    pub fn TangentialPressure(self: ?*anyopaque, ) f64 {
        return qtc.QTabletEvent_TangentialPressure(@ptrCast(self));
    }

    pub fn XTilt(self: ?*anyopaque, ) f64 {
        return qtc.QTabletEvent_XTilt(@ptrCast(self));
    }

    pub fn YTilt(self: ?*anyopaque, ) f64 {
        return qtc.QTabletEvent_YTilt(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTabletEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qnativegestureevent.html
pub const qnativegestureevent = struct {

    /// New constructs a new QNativeGestureEvent object.
    pub fn New(typeVal: i32, dev: ?*anyopaque, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, value: f64, sequenceId: u64, intArgument: u64) QtC.QNativeGestureEvent {
        return qtc.QNativeGestureEvent_new(@intCast(typeVal), @ptrCast(dev), @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), value, sequenceId, intArgument);
    }


    /// New2 constructs a new QNativeGestureEvent object.
    pub fn New2(typeVal: i32, dev: ?*anyopaque, fingerCount: i32, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, value: f64, delta: ?*anyopaque) QtC.QNativeGestureEvent {
        return qtc.QNativeGestureEvent_new2(@intCast(typeVal), @ptrCast(dev), fingerCount, @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), value, @ptrCast(delta));
    }


    /// New3 constructs a new QNativeGestureEvent object.
    pub fn New3(typeVal: i32, dev: ?*anyopaque, fingerCount: i32, localPos: ?*anyopaque, scenePos: ?*anyopaque, globalPos: ?*anyopaque, value: f64, delta: ?*anyopaque, sequenceId: u64) QtC.QNativeGestureEvent {
        return qtc.QNativeGestureEvent_new3(@intCast(typeVal), @ptrCast(dev), fingerCount, @ptrCast(localPos), @ptrCast(scenePos), @ptrCast(globalPos), value, @ptrCast(delta), sequenceId);
    }


    pub fn GestureType(self: ?*anyopaque, ) i32 {
        return qtc.QNativeGestureEvent_GestureType(@ptrCast(self));
    }

    pub fn FingerCount(self: ?*anyopaque, ) i32 {
        return qtc.QNativeGestureEvent_FingerCount(@ptrCast(self));
    }

    pub fn Value(self: ?*anyopaque, ) f64 {
        return qtc.QNativeGestureEvent_Value(@ptrCast(self));
    }

    pub fn Delta(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QNativeGestureEvent_Delta(@ptrCast(self));
    }

    pub fn Pos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QNativeGestureEvent_Pos(@ptrCast(self));
    }

    pub fn GlobalPos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QNativeGestureEvent_GlobalPos(@ptrCast(self));
    }

    pub fn LocalPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QNativeGestureEvent_LocalPos(@ptrCast(self));
    }

    pub fn WindowPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QNativeGestureEvent_WindowPos(@ptrCast(self));
    }

    pub fn ScreenPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QNativeGestureEvent_ScreenPos(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNativeGestureEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qkeyevent.html
pub const qkeyevent = struct {

    /// New constructs a new QKeyEvent object.
    pub fn New(typeVal: i32, key: i32, modifiers: i64) QtC.QKeyEvent {
        return qtc.QKeyEvent_new(@intCast(typeVal), key, @intCast(modifiers));
    }


    /// New2 constructs a new QKeyEvent object.
    pub fn New2(typeVal: i32, key: i32, modifiers: i64, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32) QtC.QKeyEvent {
        return qtc.QKeyEvent_new2(@intCast(typeVal), key, @intCast(modifiers), nativeScanCode, nativeVirtualKey, nativeModifiers);
    }


    /// New3 constructs a new QKeyEvent object.
    pub fn New3(typeVal: i32, key: i32, modifiers: i64, text: []const u8) QtC.QKeyEvent {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QKeyEvent_new3(@intCast(typeVal), key, @intCast(modifiers), text_str);
    }


    /// New4 constructs a new QKeyEvent object.
    pub fn New4(typeVal: i32, key: i32, modifiers: i64, text: []const u8, autorep: bool) QtC.QKeyEvent {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QKeyEvent_new4(@intCast(typeVal), key, @intCast(modifiers), text_str, autorep);
    }


    /// New5 constructs a new QKeyEvent object.
    pub fn New5(typeVal: i32, key: i32, modifiers: i64, text: []const u8, autorep: bool, count: u16) QtC.QKeyEvent {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QKeyEvent_new5(@intCast(typeVal), key, @intCast(modifiers), text_str, autorep, count);
    }


    /// New6 constructs a new QKeyEvent object.
    pub fn New6(typeVal: i32, key: i32, modifiers: i64, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32, text: []const u8) QtC.QKeyEvent {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QKeyEvent_new6(@intCast(typeVal), key, @intCast(modifiers), nativeScanCode, nativeVirtualKey, nativeModifiers, text_str);
    }


    /// New7 constructs a new QKeyEvent object.
    pub fn New7(typeVal: i32, key: i32, modifiers: i64, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32, text: []const u8, autorep: bool) QtC.QKeyEvent {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QKeyEvent_new7(@intCast(typeVal), key, @intCast(modifiers), nativeScanCode, nativeVirtualKey, nativeModifiers, text_str, autorep);
    }


    /// New8 constructs a new QKeyEvent object.
    pub fn New8(typeVal: i32, key: i32, modifiers: i64, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32, text: []const u8, autorep: bool, count: u16) QtC.QKeyEvent {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QKeyEvent_new8(@intCast(typeVal), key, @intCast(modifiers), nativeScanCode, nativeVirtualKey, nativeModifiers, text_str, autorep, count);
    }


    /// New9 constructs a new QKeyEvent object.
    pub fn New9(typeVal: i32, key: i32, modifiers: i64, nativeScanCode: u32, nativeVirtualKey: u32, nativeModifiers: u32, text: []const u8, autorep: bool, count: u16, device: ?*anyopaque) QtC.QKeyEvent {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QKeyEvent_new9(@intCast(typeVal), key, @intCast(modifiers), nativeScanCode, nativeVirtualKey, nativeModifiers, text_str, autorep, count, @ptrCast(device));
    }


    pub fn Key(self: ?*anyopaque, ) i32 {
        return qtc.QKeyEvent_Key(@ptrCast(self));
    }

    pub fn Matches(self: ?*anyopaque, key: i32) bool {
        return qtc.QKeyEvent_Matches(@ptrCast(self), @intCast(key));
    }

    pub fn Modifiers(self: ?*anyopaque, ) i64 {
        return qtc.QKeyEvent_Modifiers(@ptrCast(self));
    }

    pub fn KeyCombination(self: ?*anyopaque, ) QtC.QKeyCombination {
        return qtc.QKeyEvent_KeyCombination(@ptrCast(self));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QKeyEvent_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeyevent.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsAutoRepeat(self: ?*anyopaque, ) bool {
        return qtc.QKeyEvent_IsAutoRepeat(@ptrCast(self));
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QKeyEvent_Count(@ptrCast(self));
    }

    pub fn NativeScanCode(self: ?*anyopaque, ) u32 {
        return qtc.QKeyEvent_NativeScanCode(@ptrCast(self));
    }

    pub fn NativeVirtualKey(self: ?*anyopaque, ) u32 {
        return qtc.QKeyEvent_NativeVirtualKey(@ptrCast(self));
    }

    pub fn NativeModifiers(self: ?*anyopaque, ) u32 {
        return qtc.QKeyEvent_NativeModifiers(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QKeyEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qfocusevent.html
pub const qfocusevent = struct {

    /// New constructs a new QFocusEvent object.
    pub fn New(typeVal: i32) QtC.QFocusEvent {
        return qtc.QFocusEvent_new(@intCast(typeVal));
    }


    /// New2 constructs a new QFocusEvent object.
    pub fn New2(typeVal: i32, reason: i32) QtC.QFocusEvent {
        return qtc.QFocusEvent_new2(@intCast(typeVal), @intCast(reason));
    }


    pub fn GotFocus(self: ?*anyopaque, ) bool {
        return qtc.QFocusEvent_GotFocus(@ptrCast(self));
    }

    pub fn LostFocus(self: ?*anyopaque, ) bool {
        return qtc.QFocusEvent_LostFocus(@ptrCast(self));
    }

    pub fn Reason(self: ?*anyopaque, ) i32 {
        return qtc.QFocusEvent_Reason(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFocusEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpaintevent.html
pub const qpaintevent = struct {

    /// New constructs a new QPaintEvent object.
    pub fn New(paintRegion: ?*anyopaque) QtC.QPaintEvent {
        return qtc.QPaintEvent_new(@ptrCast(paintRegion));
    }


    /// New2 constructs a new QPaintEvent object.
    pub fn New2(paintRect: ?*anyopaque) QtC.QPaintEvent {
        return qtc.QPaintEvent_new2(@ptrCast(paintRect));
    }


    pub fn Rect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QPaintEvent_Rect(@ptrCast(self));
    }

    pub fn Region(self: ?*anyopaque, ) QtC.QRegion {
        return qtc.QPaintEvent_Region(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPaintEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmoveevent.html
pub const qmoveevent = struct {

    /// New constructs a new QMoveEvent object.
    pub fn New(pos: ?*anyopaque, oldPos: ?*anyopaque) QtC.QMoveEvent {
        return qtc.QMoveEvent_new(@ptrCast(pos), @ptrCast(oldPos));
    }


    pub fn Pos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QMoveEvent_Pos(@ptrCast(self));
    }

    pub fn OldPos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QMoveEvent_OldPos(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMoveEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qexposeevent.html
pub const qexposeevent = struct {

    /// New constructs a new QExposeEvent object.
    pub fn New(m_region: ?*anyopaque) QtC.QExposeEvent {
        return qtc.QExposeEvent_new(@ptrCast(m_region));
    }


    pub fn Region(self: ?*anyopaque, ) QtC.QRegion {
        return qtc.QExposeEvent_Region(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QExposeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qplatformsurfaceevent.html
pub const qplatformsurfaceevent = struct {

    /// New constructs a new QPlatformSurfaceEvent object.
    pub fn New(surfaceEventType: i32) QtC.QPlatformSurfaceEvent {
        return qtc.QPlatformSurfaceEvent_new(@intCast(surfaceEventType));
    }


    pub fn SurfaceEventType(self: ?*anyopaque, ) i32 {
        return qtc.QPlatformSurfaceEvent_SurfaceEventType(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPlatformSurfaceEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qresizeevent.html
pub const qresizeevent = struct {

    /// New constructs a new QResizeEvent object.
    pub fn New(size: ?*anyopaque, oldSize: ?*anyopaque) QtC.QResizeEvent {
        return qtc.QResizeEvent_new(@ptrCast(size), @ptrCast(oldSize));
    }


    pub fn Size(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QResizeEvent_Size(@ptrCast(self));
    }

    pub fn OldSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QResizeEvent_OldSize(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QResizeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcloseevent.html
pub const qcloseevent = struct {

    /// New constructs a new QCloseEvent object.
    pub fn New() QtC.QCloseEvent {
        return qtc.QCloseEvent_new();
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCloseEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qicondragevent.html
pub const qicondragevent = struct {

    /// New constructs a new QIconDragEvent object.
    pub fn New() QtC.QIconDragEvent {
        return qtc.QIconDragEvent_new();
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QIconDragEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qshowevent.html
pub const qshowevent = struct {

    /// New constructs a new QShowEvent object.
    pub fn New() QtC.QShowEvent {
        return qtc.QShowEvent_new();
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QShowEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qhideevent.html
pub const qhideevent = struct {

    /// New constructs a new QHideEvent object.
    pub fn New() QtC.QHideEvent {
        return qtc.QHideEvent_new();
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHideEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcontextmenuevent.html
pub const qcontextmenuevent = struct {

    /// New constructs a new QContextMenuEvent object.
    pub fn New(reason: i32, pos: ?*anyopaque, globalPos: ?*anyopaque) QtC.QContextMenuEvent {
        return qtc.QContextMenuEvent_new(@intCast(reason), @ptrCast(pos), @ptrCast(globalPos));
    }


    /// New2 constructs a new QContextMenuEvent object.
    pub fn New2(reason: i32, pos: ?*anyopaque) QtC.QContextMenuEvent {
        return qtc.QContextMenuEvent_new2(@intCast(reason), @ptrCast(pos));
    }


    /// New3 constructs a new QContextMenuEvent object.
    pub fn New3(reason: i32, pos: ?*anyopaque, globalPos: ?*anyopaque, modifiers: i64) QtC.QContextMenuEvent {
        return qtc.QContextMenuEvent_new3(@intCast(reason), @ptrCast(pos), @ptrCast(globalPos), @intCast(modifiers));
    }


    pub fn X(self: ?*anyopaque, ) i32 {
        return qtc.QContextMenuEvent_X(@ptrCast(self));
    }

    pub fn Y(self: ?*anyopaque, ) i32 {
        return qtc.QContextMenuEvent_Y(@ptrCast(self));
    }

    pub fn GlobalX(self: ?*anyopaque, ) i32 {
        return qtc.QContextMenuEvent_GlobalX(@ptrCast(self));
    }

    pub fn GlobalY(self: ?*anyopaque, ) i32 {
        return qtc.QContextMenuEvent_GlobalY(@ptrCast(self));
    }

    pub fn Pos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QContextMenuEvent_Pos(@ptrCast(self));
    }

    pub fn GlobalPos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QContextMenuEvent_GlobalPos(@ptrCast(self));
    }

    pub fn Reason(self: ?*anyopaque, ) i32 {
        return qtc.QContextMenuEvent_Reason(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QContextMenuEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qinputmethodevent.html
pub const qinputmethodevent = struct {

    /// New constructs a new QInputMethodEvent object.
    pub fn New() QtC.QInputMethodEvent {
        return qtc.QInputMethodEvent_new();
    }


    /// New2 constructs a new QInputMethodEvent object.
    pub fn New2(preeditText: []const u8, attributes: []const u8) QtC.QInputMethodEvent {
        const preeditText_str = qtc.libqt_string{
    .len = preeditText.len,
    .data = preeditText.ptr,
};
return qtc.QInputMethodEvent_new2(preeditText_str, @ptrCast(attributes));
    }


    pub fn SetCommitString(self: ?*anyopaque, commitString: []const u8) void {
        const commitString_str = qtc.libqt_string{
    .len = commitString.len,
    .data = commitString.ptr,
};
qtc.QInputMethodEvent_SetCommitString(@ptrCast(self), commitString_str);
    }

    pub fn Attributes(self: ?*anyopaque, ) []const u8 {
        return @ptrCast(qtc.QInputMethodEvent_Attributes(@ptrCast(self)));
    }

    pub fn PreeditString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputMethodEvent_PreeditString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputmethodevent.PreeditString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CommitString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputMethodEvent_CommitString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputmethodevent.CommitString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ReplacementStart(self: ?*anyopaque, ) i32 {
        return qtc.QInputMethodEvent_ReplacementStart(@ptrCast(self));
    }

    pub fn ReplacementLength(self: ?*anyopaque, ) i32 {
        return qtc.QInputMethodEvent_ReplacementLength(@ptrCast(self));
    }

    pub fn SetCommitString2(self: ?*anyopaque, commitString: []const u8, replaceFrom: i32) void {
        const commitString_str = qtc.libqt_string{
    .len = commitString.len,
    .data = commitString.ptr,
};
qtc.QInputMethodEvent_SetCommitString2(@ptrCast(self), commitString_str, replaceFrom);
    }

    pub fn SetCommitString3(self: ?*anyopaque, commitString: []const u8, replaceFrom: i32, replaceLength: i32) void {
        const commitString_str = qtc.libqt_string{
    .len = commitString.len,
    .data = commitString.ptr,
};
qtc.QInputMethodEvent_SetCommitString3(@ptrCast(self), commitString_str, replaceFrom, replaceLength);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QInputMethodEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qinputmethodqueryevent.html
pub const qinputmethodqueryevent = struct {

    /// New constructs a new QInputMethodQueryEvent object.
    pub fn New(queries: i64) QtC.QInputMethodQueryEvent {
        return qtc.QInputMethodQueryEvent_new(@intCast(queries));
    }


    pub fn Queries(self: ?*anyopaque, ) i64 {
        return qtc.QInputMethodQueryEvent_Queries(@ptrCast(self));
    }

    pub fn SetValue(self: ?*anyopaque, query: i64, value: ?*anyopaque) void {
        qtc.QInputMethodQueryEvent_SetValue(@ptrCast(self), @intCast(query), @ptrCast(value));
    }

    pub fn Value(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QInputMethodQueryEvent_Value(@ptrCast(self), @intCast(query));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QInputMethodQueryEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdropevent.html
pub const qdropevent = struct {

    /// New constructs a new QDropEvent object.
    pub fn New(pos: ?*anyopaque, actions: i32, data: ?*anyopaque, buttons: i64, modifiers: i64) QtC.QDropEvent {
        return qtc.QDropEvent_new(@ptrCast(pos), @intCast(actions), @ptrCast(data), @intCast(buttons), @intCast(modifiers));
    }


    /// New2 constructs a new QDropEvent object.
    pub fn New2(pos: ?*anyopaque, actions: i32, data: ?*anyopaque, buttons: i64, modifiers: i64, typeVal: i32) QtC.QDropEvent {
        return qtc.QDropEvent_new2(@ptrCast(pos), @intCast(actions), @ptrCast(data), @intCast(buttons), @intCast(modifiers), @intCast(typeVal));
    }


    pub fn Pos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QDropEvent_Pos(@ptrCast(self));
    }

    pub fn PosF(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QDropEvent_PosF(@ptrCast(self));
    }

    pub fn MouseButtons(self: ?*anyopaque, ) i64 {
        return qtc.QDropEvent_MouseButtons(@ptrCast(self));
    }

    pub fn KeyboardModifiers(self: ?*anyopaque, ) i64 {
        return qtc.QDropEvent_KeyboardModifiers(@ptrCast(self));
    }

    pub fn Position(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QDropEvent_Position(@ptrCast(self));
    }

    pub fn Buttons(self: ?*anyopaque, ) i64 {
        return qtc.QDropEvent_Buttons(@ptrCast(self));
    }

    pub fn Modifiers(self: ?*anyopaque, ) i64 {
        return qtc.QDropEvent_Modifiers(@ptrCast(self));
    }

    pub fn PossibleActions(self: ?*anyopaque, ) i32 {
        return qtc.QDropEvent_PossibleActions(@ptrCast(self));
    }

    pub fn ProposedAction(self: ?*anyopaque, ) i32 {
        return qtc.QDropEvent_ProposedAction(@ptrCast(self));
    }

    pub fn AcceptProposedAction(self: ?*anyopaque, ) void {
        qtc.QDropEvent_AcceptProposedAction(@ptrCast(self));
    }

    pub fn DropAction(self: ?*anyopaque, ) i32 {
        return qtc.QDropEvent_DropAction(@ptrCast(self));
    }

    pub fn SetDropAction(self: ?*anyopaque, action: i32) void {
        qtc.QDropEvent_SetDropAction(@ptrCast(self), @intCast(action));
    }

    pub fn Source(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QDropEvent_Source(@ptrCast(self));
    }

    pub fn MimeData(self: ?*anyopaque, ) QtC.QMimeData {
        return qtc.QDropEvent_MimeData(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDropEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdragmoveevent.html
pub const qdragmoveevent = struct {

    /// New constructs a new QDragMoveEvent object.
    pub fn New(pos: ?*anyopaque, actions: i32, data: ?*anyopaque, buttons: i64, modifiers: i64) QtC.QDragMoveEvent {
        return qtc.QDragMoveEvent_new(@ptrCast(pos), @intCast(actions), @ptrCast(data), @intCast(buttons), @intCast(modifiers));
    }


    /// New2 constructs a new QDragMoveEvent object.
    pub fn New2(pos: ?*anyopaque, actions: i32, data: ?*anyopaque, buttons: i64, modifiers: i64, typeVal: i32) QtC.QDragMoveEvent {
        return qtc.QDragMoveEvent_new2(@ptrCast(pos), @intCast(actions), @ptrCast(data), @intCast(buttons), @intCast(modifiers), @intCast(typeVal));
    }


    pub fn AnswerRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QDragMoveEvent_AnswerRect(@ptrCast(self));
    }

    pub fn Accept(self: ?*anyopaque, ) void {
        qtc.QDragMoveEvent_Accept(@ptrCast(self));
    }

    pub fn Ignore(self: ?*anyopaque, ) void {
        qtc.QDragMoveEvent_Ignore(@ptrCast(self));
    }

    pub fn Accept2(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QDragMoveEvent_Accept2(@ptrCast(self), @ptrCast(r));
    }

    pub fn Ignore2(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QDragMoveEvent_Ignore2(@ptrCast(self), @ptrCast(r));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDragMoveEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdragenterevent.html
pub const qdragenterevent = struct {

    /// New constructs a new QDragEnterEvent object.
    pub fn New(pos: ?*anyopaque, actions: i32, data: ?*anyopaque, buttons: i64, modifiers: i64) QtC.QDragEnterEvent {
        return qtc.QDragEnterEvent_new(@ptrCast(pos), @intCast(actions), @ptrCast(data), @intCast(buttons), @intCast(modifiers));
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDragEnterEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdragleaveevent.html
pub const qdragleaveevent = struct {

    /// New constructs a new QDragLeaveEvent object.
    pub fn New() QtC.QDragLeaveEvent {
        return qtc.QDragLeaveEvent_new();
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDragLeaveEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qhelpevent.html
pub const qhelpevent = struct {

    /// New constructs a new QHelpEvent object.
    pub fn New(typeVal: i32, pos: ?*anyopaque, globalPos: ?*anyopaque) QtC.QHelpEvent {
        return qtc.QHelpEvent_new(@intCast(typeVal), @ptrCast(pos), @ptrCast(globalPos));
    }


    pub fn X(self: ?*anyopaque, ) i32 {
        return qtc.QHelpEvent_X(@ptrCast(self));
    }

    pub fn Y(self: ?*anyopaque, ) i32 {
        return qtc.QHelpEvent_Y(@ptrCast(self));
    }

    pub fn GlobalX(self: ?*anyopaque, ) i32 {
        return qtc.QHelpEvent_GlobalX(@ptrCast(self));
    }

    pub fn GlobalY(self: ?*anyopaque, ) i32 {
        return qtc.QHelpEvent_GlobalY(@ptrCast(self));
    }

    pub fn Pos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QHelpEvent_Pos(@ptrCast(self));
    }

    pub fn GlobalPos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QHelpEvent_GlobalPos(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHelpEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstatustipevent.html
pub const qstatustipevent = struct {

    /// New constructs a new QStatusTipEvent object.
    pub fn New(tip: []const u8) QtC.QStatusTipEvent {
        const tip_str = qtc.libqt_string{
    .len = tip.len,
    .data = tip.ptr,
};
return qtc.QStatusTipEvent_new(tip_str);
    }


    pub fn Tip(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStatusTipEvent_Tip(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstatustipevent.Tip: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStatusTipEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwhatsthisclickedevent.html
pub const qwhatsthisclickedevent = struct {

    /// New constructs a new QWhatsThisClickedEvent object.
    pub fn New(href: []const u8) QtC.QWhatsThisClickedEvent {
        const href_str = qtc.libqt_string{
    .len = href.len,
    .data = href.ptr,
};
return qtc.QWhatsThisClickedEvent_new(href_str);
    }


    pub fn Href(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWhatsThisClickedEvent_Href(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwhatsthisclickedevent.Href: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWhatsThisClickedEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qactionevent.html
pub const qactionevent = struct {

    /// New constructs a new QActionEvent object.
    pub fn New(typeVal: i32, action: ?*anyopaque) QtC.QActionEvent {
        return qtc.QActionEvent_new(typeVal, @ptrCast(action));
    }


    /// New2 constructs a new QActionEvent object.
    pub fn New2(typeVal: i32, action: ?*anyopaque, before: ?*anyopaque) QtC.QActionEvent {
        return qtc.QActionEvent_new2(typeVal, @ptrCast(action), @ptrCast(before));
    }


    pub fn Action(self: ?*anyopaque, ) QtC.QAction {
        return qtc.QActionEvent_Action(@ptrCast(self));
    }

    pub fn Before(self: ?*anyopaque, ) QtC.QAction {
        return qtc.QActionEvent_Before(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QActionEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qfileopenevent.html
pub const qfileopenevent = struct {

    /// New constructs a new QFileOpenEvent object.
    pub fn New(file: []const u8) QtC.QFileOpenEvent {
        const file_str = qtc.libqt_string{
    .len = file.len,
    .data = file.ptr,
};
return qtc.QFileOpenEvent_new(file_str);
    }


    /// New2 constructs a new QFileOpenEvent object.
    pub fn New2(url: ?*anyopaque) QtC.QFileOpenEvent {
        return qtc.QFileOpenEvent_new2(@ptrCast(url));
    }


    pub fn File(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileOpenEvent_File(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileopenevent.File: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Url(self: ?*anyopaque, ) QtC.QUrl {
        return qtc.QFileOpenEvent_Url(@ptrCast(self));
    }

    pub fn OpenFile(self: ?*anyopaque, file: ?*anyopaque, flags: QIODevice::OpenMode) bool {
        return qtc.QFileOpenEvent_OpenFile(@ptrCast(self), @ptrCast(file), flags);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFileOpenEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtoolbarchangeevent.html
pub const qtoolbarchangeevent = struct {

    /// New constructs a new QToolBarChangeEvent object.
    pub fn New(t: bool) QtC.QToolBarChangeEvent {
        return qtc.QToolBarChangeEvent_new(t);
    }


    pub fn Toggle(self: ?*anyopaque, ) bool {
        return qtc.QToolBarChangeEvent_Toggle(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QToolBarChangeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qshortcutevent.html
pub const qshortcutevent = struct {

    /// New constructs a new QShortcutEvent object.
    pub fn New(key: ?*anyopaque, id: i32) QtC.QShortcutEvent {
        return qtc.QShortcutEvent_new(@ptrCast(key), id);
    }


    /// New2 constructs a new QShortcutEvent object.
    pub fn New2(key: ?*anyopaque) QtC.QShortcutEvent {
        return qtc.QShortcutEvent_new2(@ptrCast(key));
    }


    /// New3 constructs a new QShortcutEvent object.
    pub fn New3(key: ?*anyopaque, id: i32, ambiguous: bool) QtC.QShortcutEvent {
        return qtc.QShortcutEvent_new3(@ptrCast(key), id, ambiguous);
    }


    /// New4 constructs a new QShortcutEvent object.
    pub fn New4(key: ?*anyopaque, shortcut: ?*anyopaque) QtC.QShortcutEvent {
        return qtc.QShortcutEvent_new4(@ptrCast(key), @ptrCast(shortcut));
    }


    /// New5 constructs a new QShortcutEvent object.
    pub fn New5(key: ?*anyopaque, shortcut: ?*anyopaque, ambiguous: bool) QtC.QShortcutEvent {
        return qtc.QShortcutEvent_new5(@ptrCast(key), @ptrCast(shortcut), ambiguous);
    }


    pub fn Key(self: ?*anyopaque, ) QtC.QKeySequence {
        return qtc.QShortcutEvent_Key(@ptrCast(self));
    }

    pub fn ShortcutId(self: ?*anyopaque, ) i32 {
        return qtc.QShortcutEvent_ShortcutId(@ptrCast(self));
    }

    pub fn IsAmbiguous(self: ?*anyopaque, ) bool {
        return qtc.QShortcutEvent_IsAmbiguous(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QShortcutEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwindowstatechangeevent.html
pub const qwindowstatechangeevent = struct {

    /// New constructs a new QWindowStateChangeEvent object.
    pub fn New(oldState: i32) QtC.QWindowStateChangeEvent {
        return qtc.QWindowStateChangeEvent_new(@intCast(oldState));
    }


    /// New2 constructs a new QWindowStateChangeEvent object.
    pub fn New2(oldState: i32, isOverride: bool) QtC.QWindowStateChangeEvent {
        return qtc.QWindowStateChangeEvent_new2(@intCast(oldState), isOverride);
    }


    pub fn OldState(self: ?*anyopaque, ) i32 {
        return qtc.QWindowStateChangeEvent_OldState(@ptrCast(self));
    }

    pub fn IsOverride(self: ?*anyopaque, ) bool {
        return qtc.QWindowStateChangeEvent_IsOverride(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWindowStateChangeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtouchevent.html
pub const qtouchevent = struct {

    /// New constructs a new QTouchEvent object.
    pub fn New(eventType: i32) QtC.QTouchEvent {
        return qtc.QTouchEvent_new(@intCast(eventType));
    }


    /// New2 constructs a new QTouchEvent object.
    pub fn New2(eventType: i32, device: ?*anyopaque, modifiers: i64, touchPointStates: u8) QtC.QTouchEvent {
        return qtc.QTouchEvent_new2(@intCast(eventType), @ptrCast(device), @intCast(modifiers), @intCast(touchPointStates));
    }


    /// New3 constructs a new QTouchEvent object.
    pub fn New3(eventType: i32, device: ?*anyopaque) QtC.QTouchEvent {
        return qtc.QTouchEvent_new3(@intCast(eventType), @ptrCast(device));
    }


    /// New4 constructs a new QTouchEvent object.
    pub fn New4(eventType: i32, device: ?*anyopaque, modifiers: i64) QtC.QTouchEvent {
        return qtc.QTouchEvent_new4(@intCast(eventType), @ptrCast(device), @intCast(modifiers));
    }


    /// New5 constructs a new QTouchEvent object.
    pub fn New5(eventType: i32, device: ?*anyopaque, modifiers: i64, touchPoints: []const u8) QtC.QTouchEvent {
        return qtc.QTouchEvent_new5(@intCast(eventType), @ptrCast(device), @intCast(modifiers), @ptrCast(touchPoints));
    }


    /// New6 constructs a new QTouchEvent object.
    pub fn New6(eventType: i32, device: ?*anyopaque, modifiers: i64, touchPointStates: u8, touchPoints: []const u8) QtC.QTouchEvent {
        return qtc.QTouchEvent_new6(@intCast(eventType), @ptrCast(device), @intCast(modifiers), @intCast(touchPointStates), @ptrCast(touchPoints));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTouchEvent_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OnOperatorAssign(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTouchEvent_Connect_OperatorAssign(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Allows for overriding the related default method
    pub fn OnOperatorAssign(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTouchEvent_OnOperatorAssign(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTouchEvent_QBaseOperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Target(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QTouchEvent_Target(@ptrCast(self));
    }

    pub fn TouchPointStates(self: ?*anyopaque, ) u8 {
        return qtc.QTouchEvent_TouchPointStates(@ptrCast(self));
    }

    pub fn TouchPoints(self: ?*anyopaque, ) []const u8 {
        return @ptrCast(qtc.QTouchEvent_TouchPoints(@ptrCast(self)));
    }

    pub fn IsBeginEvent(self: ?*anyopaque, ) bool {
        return qtc.QTouchEvent_IsBeginEvent(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsBeginEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QTouchEvent_OnIsBeginEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsBeginEvent(self: ?*anyopaque, ) bool {
        return qtc.QTouchEvent_QBaseIsBeginEvent(@ptrCast(self));
    }

    pub fn IsUpdateEvent(self: ?*anyopaque, ) bool {
        return qtc.QTouchEvent_IsUpdateEvent(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsUpdateEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QTouchEvent_OnIsUpdateEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsUpdateEvent(self: ?*anyopaque, ) bool {
        return qtc.QTouchEvent_QBaseIsUpdateEvent(@ptrCast(self));
    }

    pub fn IsEndEvent(self: ?*anyopaque, ) bool {
        return qtc.QTouchEvent_IsEndEvent(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsEndEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QTouchEvent_OnIsEndEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsEndEvent(self: ?*anyopaque, ) bool {
        return qtc.QTouchEvent_QBaseIsEndEvent(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTouchEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qscrollprepareevent.html
pub const qscrollprepareevent = struct {

    /// New constructs a new QScrollPrepareEvent object.
    pub fn New(startPos: ?*anyopaque) QtC.QScrollPrepareEvent {
        return qtc.QScrollPrepareEvent_new(@ptrCast(startPos));
    }


    pub fn StartPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QScrollPrepareEvent_StartPos(@ptrCast(self));
    }

    pub fn ViewportSize(self: ?*anyopaque, ) QtC.QSizeF {
        return qtc.QScrollPrepareEvent_ViewportSize(@ptrCast(self));
    }

    pub fn ContentPosRange(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QScrollPrepareEvent_ContentPosRange(@ptrCast(self));
    }

    pub fn ContentPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QScrollPrepareEvent_ContentPos(@ptrCast(self));
    }

    pub fn SetViewportSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QScrollPrepareEvent_SetViewportSize(@ptrCast(self), @ptrCast(size));
    }

    pub fn SetContentPosRange(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QScrollPrepareEvent_SetContentPosRange(@ptrCast(self), @ptrCast(rect));
    }

    pub fn SetContentPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QScrollPrepareEvent_SetContentPos(@ptrCast(self), @ptrCast(pos));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScrollPrepareEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qscrollevent.html
pub const qscrollevent = struct {

    /// New constructs a new QScrollEvent object.
    pub fn New(contentPos: ?*anyopaque, overshoot: ?*anyopaque, scrollState: i32) QtC.QScrollEvent {
        return qtc.QScrollEvent_new(@ptrCast(contentPos), @ptrCast(overshoot), @intCast(scrollState));
    }


    pub fn ContentPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QScrollEvent_ContentPos(@ptrCast(self));
    }

    pub fn OvershootDistance(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QScrollEvent_OvershootDistance(@ptrCast(self));
    }

    pub fn ScrollState(self: ?*anyopaque, ) i32 {
        return qtc.QScrollEvent_ScrollState(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScrollEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qscreenorientationchangeevent.html
pub const qscreenorientationchangeevent = struct {

    /// New constructs a new QScreenOrientationChangeEvent object.
    pub fn New(screen: ?*anyopaque, orientation: i32) QtC.QScreenOrientationChangeEvent {
        return qtc.QScreenOrientationChangeEvent_new(@ptrCast(screen), @intCast(orientation));
    }


    pub fn Screen(self: ?*anyopaque, ) QtC.QScreen {
        return qtc.QScreenOrientationChangeEvent_Screen(@ptrCast(self));
    }

    pub fn Orientation(self: ?*anyopaque, ) i32 {
        return qtc.QScreenOrientationChangeEvent_Orientation(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScreenOrientationChangeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qapplicationstatechangeevent.html
pub const qapplicationstatechangeevent = struct {

    /// New constructs a new QApplicationStateChangeEvent object.
    pub fn New(state: i32) QtC.QApplicationStateChangeEvent {
        return qtc.QApplicationStateChangeEvent_new(@intCast(state));
    }


    pub fn ApplicationState(self: ?*anyopaque, ) i32 {
        return qtc.QApplicationStateChangeEvent_ApplicationState(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QApplicationStateChangeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qchildwindowevent.html
pub const qchildwindowevent = struct {

    /// New constructs a new QChildWindowEvent object.
    pub fn New(typeVal: i32, childWindow: ?*anyopaque) QtC.QChildWindowEvent {
        return qtc.QChildWindowEvent_new(@intCast(typeVal), @ptrCast(childWindow));
    }


    pub fn Child(self: ?*anyopaque, ) QtC.QWindow {
        return qtc.QChildWindowEvent_Child(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QChildWindowEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qinputmethodevent-attribute.html
pub const qinputmethodevent__attribute = struct {

    /// New constructs a new QInputMethodEvent::Attribute object.
    pub fn New(typ: i32, s: i32, l: i32, val: QtC.QVariant) QtC.QInputMethodEvent__Attribute {
        return qtc.QInputMethodEvent__Attribute_new(@intCast(typ), s, l, @ptrCast(val));
    }


    /// New2 constructs a new QInputMethodEvent::Attribute object.
    pub fn New2(typ: i32, s: i32, l: i32) QtC.QInputMethodEvent__Attribute {
        return qtc.QInputMethodEvent__Attribute_new2(@intCast(typ), s, l);
    }


    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QInputMethodEvent__Attribute_Type(@ptrCast(self));
    }

    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QInputMethodEvent__Attribute_SetType(@ptrCast(self), @intCast(_type));
    }

    pub fn Start(self: ?*anyopaque, ) i32 {
        return qtc.QInputMethodEvent__Attribute_Start(@ptrCast(self));
    }

    pub fn SetStart(self: ?*anyopaque, start: i32) void {
        qtc.QInputMethodEvent__Attribute_SetStart(@ptrCast(self), start);
    }

    pub fn Length(self: ?*anyopaque, ) i32 {
        return qtc.QInputMethodEvent__Attribute_Length(@ptrCast(self));
    }

    pub fn SetLength(self: ?*anyopaque, length: i32) void {
        qtc.QInputMethodEvent__Attribute_SetLength(@ptrCast(self), length);
    }

    pub fn Value(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QInputMethodEvent__Attribute_Value(@ptrCast(self));
    }

    pub fn SetValue(self: ?*anyopaque, value: QtC.QVariant) void {
        qtc.QInputMethodEvent__Attribute_SetValue(@ptrCast(self), @ptrCast(value));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QInputMethodEvent__Attribute_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QInputMethodEvent__Attribute_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/event.html#types
pub const enums = struct {
    pub const SurfaceEventType = enum {
        pub const SurfaceCreated: i32 = 0;
        pub const SurfaceAboutToBeDestroyed: i32 = 1;
    };

    pub const Reason = enum {
        pub const Mouse: i32 = 0;
        pub const Keyboard: i32 = 1;
        pub const Other: i32 = 2;
    };

    pub const AttributeType = enum {
        pub const TextFormat: i32 = 0;
        pub const Cursor: i32 = 1;
        pub const Language: i32 = 2;
        pub const Ruby: i32 = 3;
        pub const Selection: i32 = 4;
    };

    pub const ScrollState = enum {
        pub const ScrollStarted: i32 = 0;
        pub const ScrollUpdated: i32 = 1;
        pub const ScrollFinished: i32 = 2;
    };

};
