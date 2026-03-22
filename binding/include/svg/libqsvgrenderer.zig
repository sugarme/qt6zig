const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsvgrenderer.html
pub const qsvgrenderer = struct {

    /// New constructs a new QSvgRenderer object.
    pub fn New() QtC.QSvgRenderer {
        return qtc.QSvgRenderer_new();
    }


    /// New2 constructs a new QSvgRenderer object.
    pub fn New2(filename: []const u8) QtC.QSvgRenderer {
        const filename_str = qtc.libqt_string{
    .len = filename.len,
    .data = filename.ptr,
};
return qtc.QSvgRenderer_new2(filename_str);
    }


    /// New3 constructs a new QSvgRenderer object.
    pub fn New3(contents: []u8) QtC.QSvgRenderer {
        const contents_str = qtc.libqt_string{
    .len = contents.len,
    .data = contents.ptr,
};
return qtc.QSvgRenderer_new3(contents_str);
    }


    /// New4 constructs a new QSvgRenderer object.
    pub fn New4(contents: ?*anyopaque) QtC.QSvgRenderer {
        return qtc.QSvgRenderer_new4(@ptrCast(contents));
    }


    /// New5 constructs a new QSvgRenderer object.
    pub fn New5(parent: ?*anyopaque) QtC.QSvgRenderer {
        return qtc.QSvgRenderer_new5(@ptrCast(parent));
    }


    /// New6 constructs a new QSvgRenderer object.
    pub fn New6(filename: []const u8, parent: ?*anyopaque) QtC.QSvgRenderer {
        const filename_str = qtc.libqt_string{
    .len = filename.len,
    .data = filename.ptr,
};
return qtc.QSvgRenderer_new6(filename_str, @ptrCast(parent));
    }


    /// New7 constructs a new QSvgRenderer object.
    pub fn New7(contents: []u8, parent: ?*anyopaque) QtC.QSvgRenderer {
        const contents_str = qtc.libqt_string{
    .len = contents.len,
    .data = contents.ptr,
};
return qtc.QSvgRenderer_new7(contents_str, @ptrCast(parent));
    }


    /// New8 constructs a new QSvgRenderer object.
    pub fn New8(contents: ?*anyopaque, parent: ?*anyopaque) QtC.QSvgRenderer {
        return qtc.QSvgRenderer_new8(@ptrCast(contents), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSvgRenderer_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvgrenderer.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QSvgRenderer_IsValid(@ptrCast(self));
    }

    pub fn DefaultSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSvgRenderer_DefaultSize(@ptrCast(self));
    }

    pub fn ViewBox(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QSvgRenderer_ViewBox(@ptrCast(self));
    }

    pub fn ViewBoxF(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QSvgRenderer_ViewBoxF(@ptrCast(self));
    }

    pub fn SetViewBox(self: ?*anyopaque, viewbox: ?*anyopaque) void {
        qtc.QSvgRenderer_SetViewBox(@ptrCast(self), @ptrCast(viewbox));
    }

    pub fn SetViewBox2(self: ?*anyopaque, viewbox: ?*anyopaque) void {
        qtc.QSvgRenderer_SetViewBox2(@ptrCast(self), @ptrCast(viewbox));
    }

    pub fn AspectRatioMode(self: ?*anyopaque, ) i32 {
        return qtc.QSvgRenderer_AspectRatioMode(@ptrCast(self));
    }

    pub fn SetAspectRatioMode(self: ?*anyopaque, mode: i32) void {
        qtc.QSvgRenderer_SetAspectRatioMode(@ptrCast(self), @intCast(mode));
    }

    pub fn Options(self: ?*anyopaque, ) u32 {
        return qtc.QSvgRenderer_Options(@ptrCast(self));
    }

    pub fn SetOptions(self: ?*anyopaque, flags: u32) void {
        qtc.QSvgRenderer_SetOptions(@ptrCast(self), @intCast(flags));
    }

    pub fn Animated(self: ?*anyopaque, ) bool {
        return qtc.QSvgRenderer_Animated(@ptrCast(self));
    }

    pub fn FramesPerSecond(self: ?*anyopaque, ) i32 {
        return qtc.QSvgRenderer_FramesPerSecond(@ptrCast(self));
    }

    pub fn SetFramesPerSecond(self: ?*anyopaque, num: i32) void {
        qtc.QSvgRenderer_SetFramesPerSecond(@ptrCast(self), num);
    }

    pub fn CurrentFrame(self: ?*anyopaque, ) i32 {
        return qtc.QSvgRenderer_CurrentFrame(@ptrCast(self));
    }

    pub fn SetCurrentFrame(self: ?*anyopaque, currentFrame: i32) void {
        qtc.QSvgRenderer_SetCurrentFrame(@ptrCast(self), currentFrame);
    }

    pub fn AnimationDuration(self: ?*anyopaque, ) i32 {
        return qtc.QSvgRenderer_AnimationDuration(@ptrCast(self));
    }

    pub fn IsAnimationEnabled(self: ?*anyopaque, ) bool {
        return qtc.QSvgRenderer_IsAnimationEnabled(@ptrCast(self));
    }

    pub fn SetAnimationEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QSvgRenderer_SetAnimationEnabled(@ptrCast(self), enable);
    }

    pub fn BoundsOnElement(self: ?*anyopaque, id: []const u8) QtC.QRectF {
        const id_str = qtc.libqt_string{
    .len = id.len,
    .data = id.ptr,
};
return qtc.QSvgRenderer_BoundsOnElement(@ptrCast(self), id_str);
    }

    pub fn ElementExists(self: ?*anyopaque, id: []const u8) bool {
        const id_str = qtc.libqt_string{
    .len = id.len,
    .data = id.ptr,
};
return qtc.QSvgRenderer_ElementExists(@ptrCast(self), id_str);
    }

    pub fn TransformForElement(self: ?*anyopaque, id: []const u8) QtC.QTransform {
        const id_str = qtc.libqt_string{
    .len = id.len,
    .data = id.ptr,
};
return qtc.QSvgRenderer_TransformForElement(@ptrCast(self), id_str);
    }

    pub fn SetDefaultOptions(flags: u32) void {
        qtc.QSvgRenderer_SetDefaultOptions(@intCast(flags));
    }

    pub fn Load(self: ?*anyopaque, filename: []const u8) bool {
        const filename_str = qtc.libqt_string{
    .len = filename.len,
    .data = filename.ptr,
};
return qtc.QSvgRenderer_Load(@ptrCast(self), filename_str);
    }

    pub fn Load2(self: ?*anyopaque, contents: []u8) bool {
        const contents_str = qtc.libqt_string{
    .len = contents.len,
    .data = contents.ptr,
};
return qtc.QSvgRenderer_Load2(@ptrCast(self), contents_str);
    }

    pub fn Load3(self: ?*anyopaque, contents: ?*anyopaque) bool {
        return qtc.QSvgRenderer_Load3(@ptrCast(self), @ptrCast(contents));
    }

    pub fn Render(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QSvgRenderer_Render(@ptrCast(self), @ptrCast(p));
    }

    pub fn Render2(self: ?*anyopaque, p: ?*anyopaque, bounds: ?*anyopaque) void {
        qtc.QSvgRenderer_Render2(@ptrCast(self), @ptrCast(p), @ptrCast(bounds));
    }

    pub fn Render3(self: ?*anyopaque, p: ?*anyopaque, elementId: []const u8) void {
        const elementId_str = qtc.libqt_string{
    .len = elementId.len,
    .data = elementId.ptr,
};
qtc.QSvgRenderer_Render3(@ptrCast(self), @ptrCast(p), elementId_str);
    }

    pub fn RepaintNeeded(self: ?*anyopaque, ) void {
        qtc.QSvgRenderer_RepaintNeeded(@ptrCast(self));
    }

    pub fn OnRepaintNeeded(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSvgRenderer_Connect_RepaintNeeded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSvgRenderer_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvgrenderer.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSvgRenderer_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvgrenderer.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Render32(self: ?*anyopaque, p: ?*anyopaque, elementId: []const u8, bounds: ?*anyopaque) void {
        const elementId_str = qtc.libqt_string{
    .len = elementId.len,
    .data = elementId.ptr,
};
qtc.QSvgRenderer_Render32(@ptrCast(self), @ptrCast(p), elementId_str, @ptrCast(bounds));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSvgRenderer_Delete(@ptrCast(self));
    }
};
