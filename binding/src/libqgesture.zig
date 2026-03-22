const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qgesture.html
pub const qgesture = struct {

    /// New constructs a new QGesture object.
    pub fn New() QtC.QGesture {
        return qtc.QGesture_new();
    }


    /// New2 constructs a new QGesture object.
    pub fn New2(parent: ?*anyopaque) QtC.QGesture {
        return qtc.QGesture_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGesture_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgesture.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GestureType(self: ?*anyopaque, ) i64 {
        return qtc.QGesture_GestureType(@ptrCast(self));
    }

    pub fn State(self: ?*anyopaque, ) i32 {
        return qtc.QGesture_State(@ptrCast(self));
    }

    pub fn HotSpot(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGesture_HotSpot(@ptrCast(self));
    }

    pub fn SetHotSpot(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QGesture_SetHotSpot(@ptrCast(self), @ptrCast(value));
    }

    pub fn HasHotSpot(self: ?*anyopaque, ) bool {
        return qtc.QGesture_HasHotSpot(@ptrCast(self));
    }

    pub fn UnsetHotSpot(self: ?*anyopaque, ) void {
        qtc.QGesture_UnsetHotSpot(@ptrCast(self));
    }

    pub fn SetGestureCancelPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QGesture_SetGestureCancelPolicy(@ptrCast(self), @intCast(policy));
    }

    pub fn GestureCancelPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QGesture_GestureCancelPolicy(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGesture_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgesture.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGesture_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgesture.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGesture_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpangesture.html
pub const qpangesture = struct {

    /// New constructs a new QPanGesture object.
    pub fn New() QtC.QPanGesture {
        return qtc.QPanGesture_new();
    }


    /// New2 constructs a new QPanGesture object.
    pub fn New2(parent: ?*anyopaque) QtC.QPanGesture {
        return qtc.QPanGesture_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPanGesture_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpangesture.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn LastOffset(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QPanGesture_LastOffset(@ptrCast(self));
    }

    pub fn Offset(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QPanGesture_Offset(@ptrCast(self));
    }

    pub fn Delta(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QPanGesture_Delta(@ptrCast(self));
    }

    pub fn Acceleration(self: ?*anyopaque, ) f64 {
        return qtc.QPanGesture_Acceleration(@ptrCast(self));
    }

    pub fn SetLastOffset(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QPanGesture_SetLastOffset(@ptrCast(self), @ptrCast(value));
    }

    pub fn SetOffset(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QPanGesture_SetOffset(@ptrCast(self), @ptrCast(value));
    }

    pub fn SetAcceleration(self: ?*anyopaque, value: f64) void {
        qtc.QPanGesture_SetAcceleration(@ptrCast(self), value);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPanGesture_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpangesture.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPanGesture_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpangesture.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPanGesture_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpinchgesture.html
pub const qpinchgesture = struct {

    /// New constructs a new QPinchGesture object.
    pub fn New() QtC.QPinchGesture {
        return qtc.QPinchGesture_new();
    }


    /// New2 constructs a new QPinchGesture object.
    pub fn New2(parent: ?*anyopaque) QtC.QPinchGesture {
        return qtc.QPinchGesture_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPinchGesture_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpinchgesture.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn TotalChangeFlags(self: ?*anyopaque, ) i32 {
        return qtc.QPinchGesture_TotalChangeFlags(@ptrCast(self));
    }

    pub fn SetTotalChangeFlags(self: ?*anyopaque, value: i32) void {
        qtc.QPinchGesture_SetTotalChangeFlags(@ptrCast(self), @intCast(value));
    }

    pub fn ChangeFlags(self: ?*anyopaque, ) i32 {
        return qtc.QPinchGesture_ChangeFlags(@ptrCast(self));
    }

    pub fn SetChangeFlags(self: ?*anyopaque, value: i32) void {
        qtc.QPinchGesture_SetChangeFlags(@ptrCast(self), @intCast(value));
    }

    pub fn StartCenterPoint(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QPinchGesture_StartCenterPoint(@ptrCast(self));
    }

    pub fn LastCenterPoint(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QPinchGesture_LastCenterPoint(@ptrCast(self));
    }

    pub fn CenterPoint(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QPinchGesture_CenterPoint(@ptrCast(self));
    }

    pub fn SetStartCenterPoint(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QPinchGesture_SetStartCenterPoint(@ptrCast(self), @ptrCast(value));
    }

    pub fn SetLastCenterPoint(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QPinchGesture_SetLastCenterPoint(@ptrCast(self), @ptrCast(value));
    }

    pub fn SetCenterPoint(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QPinchGesture_SetCenterPoint(@ptrCast(self), @ptrCast(value));
    }

    pub fn TotalScaleFactor(self: ?*anyopaque, ) f64 {
        return qtc.QPinchGesture_TotalScaleFactor(@ptrCast(self));
    }

    pub fn LastScaleFactor(self: ?*anyopaque, ) f64 {
        return qtc.QPinchGesture_LastScaleFactor(@ptrCast(self));
    }

    pub fn ScaleFactor(self: ?*anyopaque, ) f64 {
        return qtc.QPinchGesture_ScaleFactor(@ptrCast(self));
    }

    pub fn SetTotalScaleFactor(self: ?*anyopaque, value: f64) void {
        qtc.QPinchGesture_SetTotalScaleFactor(@ptrCast(self), value);
    }

    pub fn SetLastScaleFactor(self: ?*anyopaque, value: f64) void {
        qtc.QPinchGesture_SetLastScaleFactor(@ptrCast(self), value);
    }

    pub fn SetScaleFactor(self: ?*anyopaque, value: f64) void {
        qtc.QPinchGesture_SetScaleFactor(@ptrCast(self), value);
    }

    pub fn TotalRotationAngle(self: ?*anyopaque, ) f64 {
        return qtc.QPinchGesture_TotalRotationAngle(@ptrCast(self));
    }

    pub fn LastRotationAngle(self: ?*anyopaque, ) f64 {
        return qtc.QPinchGesture_LastRotationAngle(@ptrCast(self));
    }

    pub fn RotationAngle(self: ?*anyopaque, ) f64 {
        return qtc.QPinchGesture_RotationAngle(@ptrCast(self));
    }

    pub fn SetTotalRotationAngle(self: ?*anyopaque, value: f64) void {
        qtc.QPinchGesture_SetTotalRotationAngle(@ptrCast(self), value);
    }

    pub fn SetLastRotationAngle(self: ?*anyopaque, value: f64) void {
        qtc.QPinchGesture_SetLastRotationAngle(@ptrCast(self), value);
    }

    pub fn SetRotationAngle(self: ?*anyopaque, value: f64) void {
        qtc.QPinchGesture_SetRotationAngle(@ptrCast(self), value);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPinchGesture_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpinchgesture.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPinchGesture_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpinchgesture.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPinchGesture_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qswipegesture.html
pub const qswipegesture = struct {

    /// New constructs a new QSwipeGesture object.
    pub fn New() QtC.QSwipeGesture {
        return qtc.QSwipeGesture_new();
    }


    /// New2 constructs a new QSwipeGesture object.
    pub fn New2(parent: ?*anyopaque) QtC.QSwipeGesture {
        return qtc.QSwipeGesture_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSwipeGesture_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qswipegesture.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn HorizontalDirection(self: ?*anyopaque, ) i32 {
        return qtc.QSwipeGesture_HorizontalDirection(@ptrCast(self));
    }

    pub fn VerticalDirection(self: ?*anyopaque, ) i32 {
        return qtc.QSwipeGesture_VerticalDirection(@ptrCast(self));
    }

    pub fn SwipeAngle(self: ?*anyopaque, ) f64 {
        return qtc.QSwipeGesture_SwipeAngle(@ptrCast(self));
    }

    pub fn SetSwipeAngle(self: ?*anyopaque, value: f64) void {
        qtc.QSwipeGesture_SetSwipeAngle(@ptrCast(self), value);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSwipeGesture_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qswipegesture.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSwipeGesture_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qswipegesture.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSwipeGesture_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtapgesture.html
pub const qtapgesture = struct {

    /// New constructs a new QTapGesture object.
    pub fn New() QtC.QTapGesture {
        return qtc.QTapGesture_new();
    }


    /// New2 constructs a new QTapGesture object.
    pub fn New2(parent: ?*anyopaque) QtC.QTapGesture {
        return qtc.QTapGesture_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTapGesture_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtapgesture.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Position(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QTapGesture_Position(@ptrCast(self));
    }

    pub fn SetPosition(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QTapGesture_SetPosition(@ptrCast(self), @ptrCast(pos));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTapGesture_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtapgesture.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTapGesture_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtapgesture.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTapGesture_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtapandholdgesture.html
pub const qtapandholdgesture = struct {

    /// New constructs a new QTapAndHoldGesture object.
    pub fn New() QtC.QTapAndHoldGesture {
        return qtc.QTapAndHoldGesture_new();
    }


    /// New2 constructs a new QTapAndHoldGesture object.
    pub fn New2(parent: ?*anyopaque) QtC.QTapAndHoldGesture {
        return qtc.QTapAndHoldGesture_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTapAndHoldGesture_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtapandholdgesture.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Position(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QTapAndHoldGesture_Position(@ptrCast(self));
    }

    pub fn SetPosition(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QTapAndHoldGesture_SetPosition(@ptrCast(self), @ptrCast(pos));
    }

    pub fn SetTimeout(msecs: i32) void {
        qtc.QTapAndHoldGesture_SetTimeout(msecs);
    }

    pub fn Timeout() i32 {
        return qtc.QTapAndHoldGesture_Timeout();
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTapAndHoldGesture_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtapandholdgesture.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTapAndHoldGesture_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtapandholdgesture.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTapAndHoldGesture_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgestureevent.html
pub const qgestureevent = struct {

    /// New constructs a new QGestureEvent object.
    pub fn New(gestures: []const u8) QtC.QGestureEvent {
        return qtc.QGestureEvent_new(@ptrCast(gestures));
    }


    /// New2 constructs a new QGestureEvent object.
    pub fn New2(param1: ?*anyopaque) QtC.QGestureEvent {
        return qtc.QGestureEvent_new2(@ptrCast(param1));
    }


    pub fn Gestures(self: ?*anyopaque, ) []const u8 {
        return qtc.QGestureEvent_Gestures(@ptrCast(self));
    }

    pub fn Gesture(self: ?*anyopaque, typeVal: i64) QtC.QGesture {
        return qtc.QGestureEvent_Gesture(@ptrCast(self), @intCast(typeVal));
    }

    pub fn ActiveGestures(self: ?*anyopaque, ) []const u8 {
        return qtc.QGestureEvent_ActiveGestures(@ptrCast(self));
    }

    pub fn CanceledGestures(self: ?*anyopaque, ) []const u8 {
        return qtc.QGestureEvent_CanceledGestures(@ptrCast(self));
    }

    pub fn SetAccepted(self: ?*anyopaque, param1: ?*anyopaque, param2: bool) void {
        qtc.QGestureEvent_SetAccepted(@ptrCast(self), @ptrCast(param1), param2);
    }

    pub fn Accept(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QGestureEvent_Accept(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Ignore(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QGestureEvent_Ignore(@ptrCast(self), @ptrCast(param1));
    }

    pub fn IsAccepted(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QGestureEvent_IsAccepted(@ptrCast(self), @ptrCast(param1));
    }

    pub fn SetAccepted2(self: ?*anyopaque, param1: i64, param2: bool) void {
        qtc.QGestureEvent_SetAccepted2(@ptrCast(self), @intCast(param1), param2);
    }

    pub fn Accept2(self: ?*anyopaque, param1: i64) void {
        qtc.QGestureEvent_Accept2(@ptrCast(self), @intCast(param1));
    }

    pub fn Ignore2(self: ?*anyopaque, param1: i64) void {
        qtc.QGestureEvent_Ignore2(@ptrCast(self), @intCast(param1));
    }

    pub fn IsAccepted2(self: ?*anyopaque, param1: i64) bool {
        return qtc.QGestureEvent_IsAccepted2(@ptrCast(self), @intCast(param1));
    }

    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGestureEvent_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn Widget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QGestureEvent_Widget(@ptrCast(self));
    }

    pub fn MapToGraphicsScene(self: ?*anyopaque, gesturePoint: ?*anyopaque) QtC.QPointF {
        return qtc.QGestureEvent_MapToGraphicsScene(@ptrCast(self), @ptrCast(gesturePoint));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGestureEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/gesture.html#types
pub const enums = struct {
    pub const GestureCancelPolicy = enum {
        pub const CancelNone: i32 = 0;
        pub const CancelAllInContext: i32 = 1;
    };

    pub const ChangeFlag = enum {
        pub const ScaleFactorChanged: i32 = 1;
        pub const RotationAngleChanged: i32 = 2;
        pub const CenterPointChanged: i32 = 4;
    };

    pub const SwipeDirection = enum {
        pub const NoDirection: i32 = 0;
        pub const Left: i32 = 1;
        pub const Right: i32 = 2;
        pub const Up: i32 = 3;
        pub const Down: i32 = 4;
    };

};
