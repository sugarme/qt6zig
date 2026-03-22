const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qgraphicssceneevent.html
pub const qgraphicssceneevent = struct {

    /// New constructs a new QGraphicsSceneEvent object.
    pub fn New(typeVal: i32) QtC.QGraphicsSceneEvent {
        return qtc.QGraphicsSceneEvent_new(@intCast(typeVal));
    }


    pub fn Widget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QGraphicsSceneEvent_Widget(@ptrCast(self));
    }

    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn Timestamp(self: ?*anyopaque, ) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self));
    }

    pub fn SetTimestamp(self: ?*anyopaque, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self), ts);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html
pub const qgraphicsscenemouseevent = struct {

    /// New constructs a new QGraphicsSceneMouseEvent object.
    pub fn New() QtC.QGraphicsSceneMouseEvent {
        return qtc.QGraphicsSceneMouseEvent_new();
    }


    /// New2 constructs a new QGraphicsSceneMouseEvent object.
    pub fn New2(typeVal: i32) QtC.QGraphicsSceneMouseEvent {
        return qtc.QGraphicsSceneMouseEvent_new2(@intCast(typeVal));
    }


    pub fn Pos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsSceneMouseEvent_Pos(@ptrCast(self));
    }

    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn ScenePos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsSceneMouseEvent_ScenePos(@ptrCast(self));
    }

    pub fn SetScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetScenePos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn ScreenPos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QGraphicsSceneMouseEvent_ScreenPos(@ptrCast(self));
    }

    pub fn SetScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn ButtonDownPos(self: ?*anyopaque, button: i64) QtC.QPointF {
        return qtc.QGraphicsSceneMouseEvent_ButtonDownPos(@ptrCast(self), @intCast(button));
    }

    pub fn SetButtonDownPos(self: ?*anyopaque, button: i64, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetButtonDownPos(@ptrCast(self), @intCast(button), @ptrCast(pos));
    }

    pub fn ButtonDownScenePos(self: ?*anyopaque, button: i64) QtC.QPointF {
        return qtc.QGraphicsSceneMouseEvent_ButtonDownScenePos(@ptrCast(self), @intCast(button));
    }

    pub fn SetButtonDownScenePos(self: ?*anyopaque, button: i64, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetButtonDownScenePos(@ptrCast(self), @intCast(button), @ptrCast(pos));
    }

    pub fn ButtonDownScreenPos(self: ?*anyopaque, button: i64) QtC.QPoint {
        return qtc.QGraphicsSceneMouseEvent_ButtonDownScreenPos(@ptrCast(self), @intCast(button));
    }

    pub fn SetButtonDownScreenPos(self: ?*anyopaque, button: i64, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetButtonDownScreenPos(@ptrCast(self), @intCast(button), @ptrCast(pos));
    }

    pub fn LastPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsSceneMouseEvent_LastPos(@ptrCast(self));
    }

    pub fn SetLastPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetLastPos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn LastScenePos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsSceneMouseEvent_LastScenePos(@ptrCast(self));
    }

    pub fn SetLastScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetLastScenePos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn LastScreenPos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QGraphicsSceneMouseEvent_LastScreenPos(@ptrCast(self));
    }

    pub fn SetLastScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetLastScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn Buttons(self: ?*anyopaque, ) i64 {
        return qtc.QGraphicsSceneMouseEvent_Buttons(@ptrCast(self));
    }

    pub fn SetButtons(self: ?*anyopaque, buttons: i64) void {
        qtc.QGraphicsSceneMouseEvent_SetButtons(@ptrCast(self), @intCast(buttons));
    }

    pub fn Button(self: ?*anyopaque, ) i64 {
        return qtc.QGraphicsSceneMouseEvent_Button(@ptrCast(self));
    }

    pub fn SetButton(self: ?*anyopaque, button: i64) void {
        qtc.QGraphicsSceneMouseEvent_SetButton(@ptrCast(self), @intCast(button));
    }

    pub fn Modifiers(self: ?*anyopaque, ) i64 {
        return qtc.QGraphicsSceneMouseEvent_Modifiers(@ptrCast(self));
    }

    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QGraphicsSceneMouseEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    pub fn Source(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsSceneMouseEvent_Source(@ptrCast(self));
    }

    pub fn SetSource(self: ?*anyopaque, source: i32) void {
        qtc.QGraphicsSceneMouseEvent_SetSource(@ptrCast(self), @intCast(source));
    }

    pub fn Flags(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsSceneMouseEvent_Flags(@ptrCast(self));
    }

    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QGraphicsSceneMouseEvent_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html
pub const qgraphicsscenewheelevent = struct {

    /// New constructs a new QGraphicsSceneWheelEvent object.
    pub fn New() QtC.QGraphicsSceneWheelEvent {
        return qtc.QGraphicsSceneWheelEvent_new();
    }


    /// New2 constructs a new QGraphicsSceneWheelEvent object.
    pub fn New2(typeVal: i32) QtC.QGraphicsSceneWheelEvent {
        return qtc.QGraphicsSceneWheelEvent_new2(@intCast(typeVal));
    }


    pub fn Pos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsSceneWheelEvent_Pos(@ptrCast(self));
    }

    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneWheelEvent_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn ScenePos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsSceneWheelEvent_ScenePos(@ptrCast(self));
    }

    pub fn SetScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneWheelEvent_SetScenePos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn ScreenPos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QGraphicsSceneWheelEvent_ScreenPos(@ptrCast(self));
    }

    pub fn SetScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneWheelEvent_SetScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn Buttons(self: ?*anyopaque, ) i64 {
        return qtc.QGraphicsSceneWheelEvent_Buttons(@ptrCast(self));
    }

    pub fn SetButtons(self: ?*anyopaque, buttons: i64) void {
        qtc.QGraphicsSceneWheelEvent_SetButtons(@ptrCast(self), @intCast(buttons));
    }

    pub fn Modifiers(self: ?*anyopaque, ) i64 {
        return qtc.QGraphicsSceneWheelEvent_Modifiers(@ptrCast(self));
    }

    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QGraphicsSceneWheelEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    pub fn Delta(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsSceneWheelEvent_Delta(@ptrCast(self));
    }

    pub fn SetDelta(self: ?*anyopaque, delta: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetDelta(@ptrCast(self), delta);
    }

    pub fn Orientation(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsSceneWheelEvent_Orientation(@ptrCast(self));
    }

    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    pub fn Phase(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsSceneWheelEvent_Phase(@ptrCast(self));
    }

    pub fn SetPhase(self: ?*anyopaque, scrollPhase: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetPhase(@ptrCast(self), @intCast(scrollPhase));
    }

    pub fn PixelDelta(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QGraphicsSceneWheelEvent_PixelDelta(@ptrCast(self));
    }

    pub fn SetPixelDelta(self: ?*anyopaque, delta: QtC.QPoint) void {
        qtc.QGraphicsSceneWheelEvent_SetPixelDelta(@ptrCast(self), @ptrCast(delta));
    }

    pub fn IsInverted(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsSceneWheelEvent_IsInverted(@ptrCast(self));
    }

    pub fn SetInverted(self: ?*anyopaque, inverted: bool) void {
        qtc.QGraphicsSceneWheelEvent_SetInverted(@ptrCast(self), inverted);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneWheelEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html
pub const qgraphicsscenecontextmenuevent = struct {

    /// New constructs a new QGraphicsSceneContextMenuEvent object.
    pub fn New() QtC.QGraphicsSceneContextMenuEvent {
        return qtc.QGraphicsSceneContextMenuEvent_new();
    }


    /// New2 constructs a new QGraphicsSceneContextMenuEvent object.
    pub fn New2(typeVal: i32) QtC.QGraphicsSceneContextMenuEvent {
        return qtc.QGraphicsSceneContextMenuEvent_new2(@intCast(typeVal));
    }


    pub fn Pos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsSceneContextMenuEvent_Pos(@ptrCast(self));
    }

    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneContextMenuEvent_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn ScenePos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsSceneContextMenuEvent_ScenePos(@ptrCast(self));
    }

    pub fn SetScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneContextMenuEvent_SetScenePos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn ScreenPos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QGraphicsSceneContextMenuEvent_ScreenPos(@ptrCast(self));
    }

    pub fn SetScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneContextMenuEvent_SetScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn Modifiers(self: ?*anyopaque, ) i64 {
        return qtc.QGraphicsSceneContextMenuEvent_Modifiers(@ptrCast(self));
    }

    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QGraphicsSceneContextMenuEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    pub fn Reason(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsSceneContextMenuEvent_Reason(@ptrCast(self));
    }

    pub fn SetReason(self: ?*anyopaque, reason: i32) void {
        qtc.QGraphicsSceneContextMenuEvent_SetReason(@ptrCast(self), @intCast(reason));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneContextMenuEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html
pub const qgraphicsscenehoverevent = struct {

    /// New constructs a new QGraphicsSceneHoverEvent object.
    pub fn New() QtC.QGraphicsSceneHoverEvent {
        return qtc.QGraphicsSceneHoverEvent_new();
    }


    /// New2 constructs a new QGraphicsSceneHoverEvent object.
    pub fn New2(typeVal: i32) QtC.QGraphicsSceneHoverEvent {
        return qtc.QGraphicsSceneHoverEvent_new2(@intCast(typeVal));
    }


    pub fn Pos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsSceneHoverEvent_Pos(@ptrCast(self));
    }

    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn ScenePos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsSceneHoverEvent_ScenePos(@ptrCast(self));
    }

    pub fn SetScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_SetScenePos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn ScreenPos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QGraphicsSceneHoverEvent_ScreenPos(@ptrCast(self));
    }

    pub fn SetScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_SetScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn LastPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsSceneHoverEvent_LastPos(@ptrCast(self));
    }

    pub fn SetLastPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_SetLastPos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn LastScenePos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsSceneHoverEvent_LastScenePos(@ptrCast(self));
    }

    pub fn SetLastScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_SetLastScenePos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn LastScreenPos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QGraphicsSceneHoverEvent_LastScreenPos(@ptrCast(self));
    }

    pub fn SetLastScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_SetLastScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn Modifiers(self: ?*anyopaque, ) i64 {
        return qtc.QGraphicsSceneHoverEvent_Modifiers(@ptrCast(self));
    }

    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QGraphicsSceneHoverEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html
pub const qgraphicsscenehelpevent = struct {

    /// New constructs a new QGraphicsSceneHelpEvent object.
    pub fn New() QtC.QGraphicsSceneHelpEvent {
        return qtc.QGraphicsSceneHelpEvent_new();
    }


    /// New2 constructs a new QGraphicsSceneHelpEvent object.
    pub fn New2(typeVal: i32) QtC.QGraphicsSceneHelpEvent {
        return qtc.QGraphicsSceneHelpEvent_new2(@intCast(typeVal));
    }


    pub fn ScenePos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsSceneHelpEvent_ScenePos(@ptrCast(self));
    }

    pub fn SetScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHelpEvent_SetScenePos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn ScreenPos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QGraphicsSceneHelpEvent_ScreenPos(@ptrCast(self));
    }

    pub fn SetScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHelpEvent_SetScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneHelpEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html
pub const qgraphicsscenedragdropevent = struct {

    /// New constructs a new QGraphicsSceneDragDropEvent object.
    pub fn New() QtC.QGraphicsSceneDragDropEvent {
        return qtc.QGraphicsSceneDragDropEvent_new();
    }


    /// New2 constructs a new QGraphicsSceneDragDropEvent object.
    pub fn New2(typeVal: i32) QtC.QGraphicsSceneDragDropEvent {
        return qtc.QGraphicsSceneDragDropEvent_new2(@intCast(typeVal));
    }


    pub fn Pos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsSceneDragDropEvent_Pos(@ptrCast(self));
    }

    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneDragDropEvent_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn ScenePos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsSceneDragDropEvent_ScenePos(@ptrCast(self));
    }

    pub fn SetScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneDragDropEvent_SetScenePos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn ScreenPos(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QGraphicsSceneDragDropEvent_ScreenPos(@ptrCast(self));
    }

    pub fn SetScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneDragDropEvent_SetScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn Buttons(self: ?*anyopaque, ) i64 {
        return qtc.QGraphicsSceneDragDropEvent_Buttons(@ptrCast(self));
    }

    pub fn SetButtons(self: ?*anyopaque, buttons: i64) void {
        qtc.QGraphicsSceneDragDropEvent_SetButtons(@ptrCast(self), @intCast(buttons));
    }

    pub fn Modifiers(self: ?*anyopaque, ) i64 {
        return qtc.QGraphicsSceneDragDropEvent_Modifiers(@ptrCast(self));
    }

    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QGraphicsSceneDragDropEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    pub fn PossibleActions(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsSceneDragDropEvent_PossibleActions(@ptrCast(self));
    }

    pub fn SetPossibleActions(self: ?*anyopaque, actions: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetPossibleActions(@ptrCast(self), @intCast(actions));
    }

    pub fn ProposedAction(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsSceneDragDropEvent_ProposedAction(@ptrCast(self));
    }

    pub fn SetProposedAction(self: ?*anyopaque, action: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetProposedAction(@ptrCast(self), @intCast(action));
    }

    pub fn AcceptProposedAction(self: ?*anyopaque, ) void {
        qtc.QGraphicsSceneDragDropEvent_AcceptProposedAction(@ptrCast(self));
    }

    pub fn DropAction(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsSceneDragDropEvent_DropAction(@ptrCast(self));
    }

    pub fn SetDropAction(self: ?*anyopaque, action: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetDropAction(@ptrCast(self), @intCast(action));
    }

    pub fn Source(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QGraphicsSceneDragDropEvent_Source(@ptrCast(self));
    }

    pub fn SetSource(self: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QGraphicsSceneDragDropEvent_SetSource(@ptrCast(self), @ptrCast(source));
    }

    pub fn MimeData(self: ?*anyopaque, ) QtC.QMimeData {
        return qtc.QGraphicsSceneDragDropEvent_MimeData(@ptrCast(self));
    }

    pub fn SetMimeData(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.QGraphicsSceneDragDropEvent_SetMimeData(@ptrCast(self), @ptrCast(data));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneDragDropEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html
pub const qgraphicssceneresizeevent = struct {

    /// New constructs a new QGraphicsSceneResizeEvent object.
    pub fn New() QtC.QGraphicsSceneResizeEvent {
        return qtc.QGraphicsSceneResizeEvent_new();
    }


    pub fn OldSize(self: ?*anyopaque, ) QtC.QSizeF {
        return qtc.QGraphicsSceneResizeEvent_OldSize(@ptrCast(self));
    }

    pub fn SetOldSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsSceneResizeEvent_SetOldSize(@ptrCast(self), @ptrCast(size));
    }

    pub fn NewSize(self: ?*anyopaque, ) QtC.QSizeF {
        return qtc.QGraphicsSceneResizeEvent_NewSize(@ptrCast(self));
    }

    pub fn SetNewSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsSceneResizeEvent_SetNewSize(@ptrCast(self), @ptrCast(size));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneResizeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html
pub const qgraphicsscenemoveevent = struct {

    /// New constructs a new QGraphicsSceneMoveEvent object.
    pub fn New() QtC.QGraphicsSceneMoveEvent {
        return qtc.QGraphicsSceneMoveEvent_new();
    }


    pub fn OldPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsSceneMoveEvent_OldPos(@ptrCast(self));
    }

    pub fn SetOldPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMoveEvent_SetOldPos(@ptrCast(self), @ptrCast(pos));
    }

    pub fn NewPos(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsSceneMoveEvent_NewPos(@ptrCast(self));
    }

    pub fn SetNewPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMoveEvent_SetNewPos(@ptrCast(self), @ptrCast(pos));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneMoveEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/graphicssceneevent.html#types
pub const enums = struct {
    pub const Reason = enum {
        pub const Mouse: i32 = 0;
        pub const Keyboard: i32 = 1;
        pub const Other: i32 = 2;
    };

};
