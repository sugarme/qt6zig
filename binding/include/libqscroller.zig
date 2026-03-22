const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qscroller.html
pub const qscroller = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScroller_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscroller.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn HasScroller(target: ?*anyopaque) bool {
        return qtc.QScroller_HasScroller(@ptrCast(target));
    }

    pub fn Scroller(target: ?*anyopaque) QtC.QScroller {
        return qtc.QScroller_Scroller(@ptrCast(target));
    }

    pub fn Scroller2(target: ?*anyopaque) QtC.QScroller {
        return qtc.QScroller_Scroller2(@ptrCast(target));
    }

    pub fn GrabGesture(target: ?*anyopaque) i64 {
        return qtc.QScroller_GrabGesture(@ptrCast(target));
    }

    pub fn GrabbedGesture(target: ?*anyopaque) i64 {
        return qtc.QScroller_GrabbedGesture(@ptrCast(target));
    }

    pub fn UngrabGesture(target: ?*anyopaque) void {
        qtc.QScroller_UngrabGesture(@ptrCast(target));
    }

    pub fn ActiveScrollers() []const u8 {
        return qtc.QScroller_ActiveScrollers();
    }

    pub fn Target(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QScroller_Target(@ptrCast(self));
    }

    pub fn State(self: ?*anyopaque, ) i32 {
        return qtc.QScroller_State(@ptrCast(self));
    }

    pub fn HandleInput(self: ?*anyopaque, input: i32, position: ?*anyopaque) bool {
        return qtc.QScroller_HandleInput(@ptrCast(self), @intCast(input), @ptrCast(position));
    }

    pub fn Stop(self: ?*anyopaque, ) void {
        qtc.QScroller_Stop(@ptrCast(self));
    }

    pub fn Velocity(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QScroller_Velocity(@ptrCast(self));
    }

    pub fn FinalPosition(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QScroller_FinalPosition(@ptrCast(self));
    }

    pub fn PixelPerMeter(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QScroller_PixelPerMeter(@ptrCast(self));
    }

    pub fn ScrollerProperties(self: ?*anyopaque, ) QtC.QScrollerProperties {
        return qtc.QScroller_ScrollerProperties(@ptrCast(self));
    }

    pub fn SetSnapPositionsX(self: ?*anyopaque, positions: []const u8) void {
        qtc.QScroller_SetSnapPositionsX(@ptrCast(self), @ptrCast(positions));
    }

    pub fn SetSnapPositionsX2(self: ?*anyopaque, first: f64, interval: f64) void {
        qtc.QScroller_SetSnapPositionsX2(@ptrCast(self), first, interval);
    }

    pub fn SetSnapPositionsY(self: ?*anyopaque, positions: []const u8) void {
        qtc.QScroller_SetSnapPositionsY(@ptrCast(self), @ptrCast(positions));
    }

    pub fn SetSnapPositionsY2(self: ?*anyopaque, first: f64, interval: f64) void {
        qtc.QScroller_SetSnapPositionsY2(@ptrCast(self), first, interval);
    }

    pub fn SetScrollerProperties(self: ?*anyopaque, prop: ?*anyopaque) void {
        qtc.QScroller_SetScrollerProperties(@ptrCast(self), @ptrCast(prop));
    }

    pub fn ScrollTo(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QScroller_ScrollTo(@ptrCast(self), @ptrCast(pos));
    }

    pub fn ScrollTo2(self: ?*anyopaque, pos: ?*anyopaque, scrollTime: i32) void {
        qtc.QScroller_ScrollTo2(@ptrCast(self), @ptrCast(pos), scrollTime);
    }

    pub fn EnsureVisible(self: ?*anyopaque, rect: ?*anyopaque, xmargin: f64, ymargin: f64) void {
        qtc.QScroller_EnsureVisible(@ptrCast(self), @ptrCast(rect), xmargin, ymargin);
    }

    pub fn EnsureVisible2(self: ?*anyopaque, rect: ?*anyopaque, xmargin: f64, ymargin: f64, scrollTime: i32) void {
        qtc.QScroller_EnsureVisible2(@ptrCast(self), @ptrCast(rect), xmargin, ymargin, scrollTime);
    }

    pub fn ResendPrepareEvent(self: ?*anyopaque, ) void {
        qtc.QScroller_ResendPrepareEvent(@ptrCast(self));
    }

    pub fn StateChanged(self: ?*anyopaque, newstate: i32) void {
        qtc.QScroller_StateChanged(@ptrCast(self), @intCast(newstate));
    }

    pub fn OnStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QScroller_Connect_StateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ScrollerPropertiesChanged(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QScroller_ScrollerPropertiesChanged(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OnScrollerPropertiesChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScroller_Connect_ScrollerPropertiesChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScroller_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscroller.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScroller_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscroller.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GrabGesture2(target: ?*anyopaque, gestureType: i32) i64 {
        return qtc.QScroller_GrabGesture2(@ptrCast(target), @intCast(gestureType));
    }

    pub fn HandleInput3(self: ?*anyopaque, input: i32, position: ?*anyopaque, timestamp: i64) bool {
        return qtc.QScroller_HandleInput3(@ptrCast(self), @intCast(input), @ptrCast(position), timestamp);
    }
};

/// https://doc.qt.io/qt-6/scroller.html#types
pub const enums = struct {
    pub const State = enum {
        pub const Inactive: i32 = 0;
        pub const Pressed: i32 = 1;
        pub const Dragging: i32 = 2;
        pub const Scrolling: i32 = 3;
    };

    pub const ScrollerGestureType = enum {
        pub const TouchGesture: i32 = 0;
        pub const LeftMouseButtonGesture: i32 = 1;
        pub const RightMouseButtonGesture: i32 = 2;
        pub const MiddleMouseButtonGesture: i32 = 3;
    };

    pub const Input = enum {
        pub const InputPress: i32 = 1;
        pub const InputMove: i32 = 2;
        pub const InputRelease: i32 = 3;
    };

};
