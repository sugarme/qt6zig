const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopengltimerquery.html
pub const qopengltimerquery = struct {

    /// New constructs a new QOpenGLTimerQuery object.
    pub fn New() QtC.QOpenGLTimerQuery {
        return qtc.QOpenGLTimerQuery_new();
    }


    /// New2 constructs a new QOpenGLTimerQuery object.
    pub fn New2(parent: ?*anyopaque) QtC.QOpenGLTimerQuery {
        return qtc.QOpenGLTimerQuery_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLTimerQuery_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopengltimerquery.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Create(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLTimerQuery_Create(@ptrCast(self));
    }

    pub fn Destroy(self: ?*anyopaque, ) void {
        qtc.QOpenGLTimerQuery_Destroy(@ptrCast(self));
    }

    pub fn IsCreated(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLTimerQuery_IsCreated(@ptrCast(self));
    }

    pub fn ObjectId(self: ?*anyopaque, ) u32 {
        return qtc.QOpenGLTimerQuery_ObjectId(@ptrCast(self));
    }

    pub fn Begin(self: ?*anyopaque, ) void {
        qtc.QOpenGLTimerQuery_Begin(@ptrCast(self));
    }

    pub fn End(self: ?*anyopaque, ) void {
        qtc.QOpenGLTimerQuery_End(@ptrCast(self));
    }

    pub fn WaitForTimestamp(self: ?*anyopaque, ) u64 {
        return qtc.QOpenGLTimerQuery_WaitForTimestamp(@ptrCast(self));
    }

    pub fn RecordTimestamp(self: ?*anyopaque, ) void {
        qtc.QOpenGLTimerQuery_RecordTimestamp(@ptrCast(self));
    }

    pub fn IsResultAvailable(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLTimerQuery_IsResultAvailable(@ptrCast(self));
    }

    pub fn WaitForResult(self: ?*anyopaque, ) u64 {
        return qtc.QOpenGLTimerQuery_WaitForResult(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLTimerQuery_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopengltimerquery.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLTimerQuery_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopengltimerquery.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLTimerQuery_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopengltimemonitor.html
pub const qopengltimemonitor = struct {

    /// New constructs a new QOpenGLTimeMonitor object.
    pub fn New() QtC.QOpenGLTimeMonitor {
        return qtc.QOpenGLTimeMonitor_new();
    }


    /// New2 constructs a new QOpenGLTimeMonitor object.
    pub fn New2(parent: ?*anyopaque) QtC.QOpenGLTimeMonitor {
        return qtc.QOpenGLTimeMonitor_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLTimeMonitor_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopengltimemonitor.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSampleCount(self: ?*anyopaque, sampleCount: i32) void {
        qtc.QOpenGLTimeMonitor_SetSampleCount(@ptrCast(self), sampleCount);
    }

    pub fn SampleCount(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLTimeMonitor_SampleCount(@ptrCast(self));
    }

    pub fn Create(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLTimeMonitor_Create(@ptrCast(self));
    }

    pub fn Destroy(self: ?*anyopaque, ) void {
        qtc.QOpenGLTimeMonitor_Destroy(@ptrCast(self));
    }

    pub fn IsCreated(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLTimeMonitor_IsCreated(@ptrCast(self));
    }

    pub fn ObjectIds(self: ?*anyopaque, ) []const u8 {
        return qtc.QOpenGLTimeMonitor_ObjectIds(@ptrCast(self));
    }

    pub fn RecordSample(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLTimeMonitor_RecordSample(@ptrCast(self));
    }

    pub fn IsResultAvailable(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLTimeMonitor_IsResultAvailable(@ptrCast(self));
    }

    pub fn WaitForSamples(self: ?*anyopaque, ) []const u8 {
        return qtc.QOpenGLTimeMonitor_WaitForSamples(@ptrCast(self));
    }

    pub fn WaitForIntervals(self: ?*anyopaque, ) []const u8 {
        return qtc.QOpenGLTimeMonitor_WaitForIntervals(@ptrCast(self));
    }

    pub fn Reset(self: ?*anyopaque, ) void {
        qtc.QOpenGLTimeMonitor_Reset(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLTimeMonitor_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopengltimemonitor.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLTimeMonitor_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopengltimemonitor.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLTimeMonitor_Delete(@ptrCast(self));
    }
};
