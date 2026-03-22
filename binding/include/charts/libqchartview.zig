const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qchartview.html
pub const qchartview = struct {

    /// New constructs a new QChartView object.
    pub fn New(parent: ?*anyopaque) QtC.QChartView {
        return qtc.QChartView_new(@ptrCast(parent));
    }


    /// New2 constructs a new QChartView object.
    pub fn New2() QtC.QChartView {
        return qtc.QChartView_new2();
    }


    /// New3 constructs a new QChartView object.
    pub fn New3(chart: ?*anyopaque) QtC.QChartView {
        return qtc.QChartView_new3(@ptrCast(chart));
    }


    /// New4 constructs a new QChartView object.
    pub fn New4(chart: ?*anyopaque, parent: ?*anyopaque) QtC.QChartView {
        return qtc.QChartView_new4(@ptrCast(chart), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QChartView_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qchartview.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetRubberBand(self: ?*anyopaque, rubberBands: *const i32) void {
        qtc.QChartView_SetRubberBand(@ptrCast(self), @intCast(rubberBands));
    }

    pub fn RubberBand(self: ?*anyopaque, ) i32 {
        return qtc.QChartView_RubberBand(@ptrCast(self));
    }

    pub fn Chart(self: ?*anyopaque, ) QtC.QChart {
        return qtc.QChartView_Chart(@ptrCast(self));
    }

    pub fn SetChart(self: ?*anyopaque, chart: ?*anyopaque) void {
        qtc.QChartView_SetChart(@ptrCast(self), @ptrCast(chart));
    }

    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QChartView_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QChartView_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QChartView_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QChartView_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QChartView_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QChartView_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QChartView_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QChartView_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QChartView_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QChartView_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QChartView_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QChartView_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QChartView_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qchartview.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QChartView_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qchartview.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QChartView_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/chartview.html#types
pub const enums = struct {
    pub const RubberBand = enum {
        pub const NoRubberBand: i32 = 0;
        pub const VerticalRubberBand: i32 = 1;
        pub const HorizontalRubberBand: i32 = 2;
        pub const RectangleRubberBand: i32 = 3;
        pub const ClickThroughRubberBand: i32 = 128;
    };

};
