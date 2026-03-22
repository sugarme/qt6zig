const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopenglframebufferobject.html
pub const qopenglframebufferobject = struct {

    /// New constructs a new QOpenGLFramebufferObject object.
    pub fn New(size: ?*anyopaque) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new(@ptrCast(size));
    }


    /// New2 constructs a new QOpenGLFramebufferObject object.
    pub fn New2(width: i32, height: i32) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new2(width, height);
    }


    /// New3 constructs a new QOpenGLFramebufferObject object.
    pub fn New3(size: ?*anyopaque, attachment: i32) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new3(@ptrCast(size), @intCast(attachment));
    }


    /// New4 constructs a new QOpenGLFramebufferObject object.
    pub fn New4(width: i32, height: i32, attachment: i32) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new4(width, height, @intCast(attachment));
    }


    /// New5 constructs a new QOpenGLFramebufferObject object.
    pub fn New5(size: ?*anyopaque, format: ?*anyopaque) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new5(@ptrCast(size), @ptrCast(format));
    }


    /// New6 constructs a new QOpenGLFramebufferObject object.
    pub fn New6(width: i32, height: i32, format: ?*anyopaque) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new6(width, height, @ptrCast(format));
    }


    /// New7 constructs a new QOpenGLFramebufferObject object.
    pub fn New7(size: ?*anyopaque, target: u32) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new7(@ptrCast(size), target);
    }


    /// New8 constructs a new QOpenGLFramebufferObject object.
    pub fn New8(width: i32, height: i32, target: u32) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new8(width, height, target);
    }


    /// New9 constructs a new QOpenGLFramebufferObject object.
    pub fn New9(size: ?*anyopaque, attachment: i32, target: u32) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new9(@ptrCast(size), @intCast(attachment), target);
    }


    /// New10 constructs a new QOpenGLFramebufferObject object.
    pub fn New10(size: ?*anyopaque, attachment: i32, target: u32, internalFormat: u32) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new10(@ptrCast(size), @intCast(attachment), target, internalFormat);
    }


    /// New11 constructs a new QOpenGLFramebufferObject object.
    pub fn New11(width: i32, height: i32, attachment: i32, target: u32) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new11(width, height, @intCast(attachment), target);
    }


    /// New12 constructs a new QOpenGLFramebufferObject object.
    pub fn New12(width: i32, height: i32, attachment: i32, target: u32, internalFormat: u32) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new12(width, height, @intCast(attachment), target, internalFormat);
    }


    pub fn AddColorAttachment(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QOpenGLFramebufferObject_AddColorAttachment(@ptrCast(self), @ptrCast(size));
    }

    pub fn AddColorAttachment2(self: ?*anyopaque, width: i32, height: i32) void {
        qtc.QOpenGLFramebufferObject_AddColorAttachment2(@ptrCast(self), width, height);
    }

    pub fn Format(self: ?*anyopaque, ) QtC.QOpenGLFramebufferObjectFormat {
        return qtc.QOpenGLFramebufferObject_Format(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLFramebufferObject_IsValid(@ptrCast(self));
    }

    pub fn IsBound(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLFramebufferObject_IsBound(@ptrCast(self));
    }

    pub fn Bind(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLFramebufferObject_Bind(@ptrCast(self));
    }

    pub fn Release(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLFramebufferObject_Release(@ptrCast(self));
    }

    pub fn Width(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLFramebufferObject_Width(@ptrCast(self));
    }

    pub fn Height(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLFramebufferObject_Height(@ptrCast(self));
    }

    pub fn Texture(self: ?*anyopaque, ) u32 {
        return qtc.QOpenGLFramebufferObject_Texture(@ptrCast(self));
    }

    pub fn Textures(self: ?*anyopaque, ) []const u8 {
        return qtc.QOpenGLFramebufferObject_Textures(@ptrCast(self));
    }

    pub fn TakeTexture(self: ?*anyopaque, ) u32 {
        return qtc.QOpenGLFramebufferObject_TakeTexture(@ptrCast(self));
    }

    pub fn TakeTexture2(self: ?*anyopaque, colorAttachmentIndex: i32) u32 {
        return qtc.QOpenGLFramebufferObject_TakeTexture2(@ptrCast(self), colorAttachmentIndex);
    }

    pub fn Size(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QOpenGLFramebufferObject_Size(@ptrCast(self));
    }

    pub fn Sizes(self: ?*anyopaque, ) []const u8 {
        return qtc.QOpenGLFramebufferObject_Sizes(@ptrCast(self));
    }

    pub fn ToImage(self: ?*anyopaque, ) QtC.QImage {
        return qtc.QOpenGLFramebufferObject_ToImage(@ptrCast(self));
    }

    pub fn ToImage2(self: ?*anyopaque, flipped: bool, colorAttachmentIndex: i32) QtC.QImage {
        return qtc.QOpenGLFramebufferObject_ToImage2(@ptrCast(self), flipped, colorAttachmentIndex);
    }

    pub fn Attachment(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLFramebufferObject_Attachment(@ptrCast(self));
    }

    pub fn SetAttachment(self: ?*anyopaque, attachment: i32) void {
        qtc.QOpenGLFramebufferObject_SetAttachment(@ptrCast(self), @intCast(attachment));
    }

    pub fn Handle(self: ?*anyopaque, ) u32 {
        return qtc.QOpenGLFramebufferObject_Handle(@ptrCast(self));
    }

    pub fn BindDefault() bool {
        return qtc.QOpenGLFramebufferObject_BindDefault();
    }

    pub fn HasOpenGLFramebufferObjects() bool {
        return qtc.QOpenGLFramebufferObject_HasOpenGLFramebufferObjects();
    }

    pub fn HasOpenGLFramebufferBlit() bool {
        return qtc.QOpenGLFramebufferObject_HasOpenGLFramebufferBlit();
    }

    pub fn BlitFramebuffer(target: ?*anyopaque, targetRect: ?*anyopaque, source: ?*anyopaque, sourceRect: ?*anyopaque, buffers: u32, filter: u32, readColorAttachmentIndex: i32, drawColorAttachmentIndex: i32, restorePolicy: i32) void {
        qtc.QOpenGLFramebufferObject_BlitFramebuffer(@ptrCast(target), @ptrCast(targetRect), @ptrCast(source), @ptrCast(sourceRect), buffers, filter, readColorAttachmentIndex, drawColorAttachmentIndex, @intCast(restorePolicy));
    }

    pub fn BlitFramebuffer2(target: ?*anyopaque, targetRect: ?*anyopaque, source: ?*anyopaque, sourceRect: ?*anyopaque, buffers: u32, filter: u32, readColorAttachmentIndex: i32, drawColorAttachmentIndex: i32) void {
        qtc.QOpenGLFramebufferObject_BlitFramebuffer2(@ptrCast(target), @ptrCast(targetRect), @ptrCast(source), @ptrCast(sourceRect), buffers, filter, readColorAttachmentIndex, drawColorAttachmentIndex);
    }

    pub fn BlitFramebuffer3(target: ?*anyopaque, targetRect: ?*anyopaque, source: ?*anyopaque, sourceRect: ?*anyopaque) void {
        qtc.QOpenGLFramebufferObject_BlitFramebuffer3(@ptrCast(target), @ptrCast(targetRect), @ptrCast(source), @ptrCast(sourceRect));
    }

    pub fn BlitFramebuffer4(target: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QOpenGLFramebufferObject_BlitFramebuffer4(@ptrCast(target), @ptrCast(source));
    }

    pub fn AddColorAttachment22(self: ?*anyopaque, size: ?*anyopaque, internalFormat: u32) void {
        qtc.QOpenGLFramebufferObject_AddColorAttachment22(@ptrCast(self), @ptrCast(size), internalFormat);
    }

    pub fn AddColorAttachment3(self: ?*anyopaque, width: i32, height: i32, internalFormat: u32) void {
        qtc.QOpenGLFramebufferObject_AddColorAttachment3(@ptrCast(self), width, height, internalFormat);
    }

    pub fn ToImage1(self: ?*anyopaque, flipped: bool) QtC.QImage {
        return qtc.QOpenGLFramebufferObject_ToImage1(@ptrCast(self), flipped);
    }

    pub fn BlitFramebuffer5(target: ?*anyopaque, targetRect: ?*anyopaque, source: ?*anyopaque, sourceRect: ?*anyopaque, buffers: u32) void {
        qtc.QOpenGLFramebufferObject_BlitFramebuffer5(@ptrCast(target), @ptrCast(targetRect), @ptrCast(source), @ptrCast(sourceRect), buffers);
    }

    pub fn BlitFramebuffer6(target: ?*anyopaque, targetRect: ?*anyopaque, source: ?*anyopaque, sourceRect: ?*anyopaque, buffers: u32, filter: u32) void {
        qtc.QOpenGLFramebufferObject_BlitFramebuffer6(@ptrCast(target), @ptrCast(targetRect), @ptrCast(source), @ptrCast(sourceRect), buffers, filter);
    }

    pub fn BlitFramebuffer32(target: ?*anyopaque, source: ?*anyopaque, buffers: u32) void {
        qtc.QOpenGLFramebufferObject_BlitFramebuffer32(@ptrCast(target), @ptrCast(source), buffers);
    }

    pub fn BlitFramebuffer42(target: ?*anyopaque, source: ?*anyopaque, buffers: u32, filter: u32) void {
        qtc.QOpenGLFramebufferObject_BlitFramebuffer42(@ptrCast(target), @ptrCast(source), buffers, filter);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFramebufferObject_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html
pub const qopenglframebufferobjectformat = struct {

    /// New constructs a new QOpenGLFramebufferObjectFormat object.
    pub fn New() QtC.QOpenGLFramebufferObjectFormat {
        return qtc.QOpenGLFramebufferObjectFormat_new();
    }


    /// New2 constructs a new QOpenGLFramebufferObjectFormat object.
    pub fn New2(other: ?*anyopaque) QtC.QOpenGLFramebufferObjectFormat {
        return qtc.QOpenGLFramebufferObjectFormat_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QOpenGLFramebufferObjectFormat_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn SetSamples(self: ?*anyopaque, samples: i32) void {
        qtc.QOpenGLFramebufferObjectFormat_SetSamples(@ptrCast(self), samples);
    }

    pub fn Samples(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLFramebufferObjectFormat_Samples(@ptrCast(self));
    }

    pub fn SetMipmap(self: ?*anyopaque, enabled: bool) void {
        qtc.QOpenGLFramebufferObjectFormat_SetMipmap(@ptrCast(self), enabled);
    }

    pub fn Mipmap(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLFramebufferObjectFormat_Mipmap(@ptrCast(self));
    }

    pub fn SetAttachment(self: ?*anyopaque, attachment: i32) void {
        qtc.QOpenGLFramebufferObjectFormat_SetAttachment(@ptrCast(self), @intCast(attachment));
    }

    pub fn Attachment(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLFramebufferObjectFormat_Attachment(@ptrCast(self));
    }

    pub fn SetTextureTarget(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFramebufferObjectFormat_SetTextureTarget(@ptrCast(self), target);
    }

    pub fn TextureTarget(self: ?*anyopaque, ) GL {
        return qtc.QOpenGLFramebufferObjectFormat_TextureTarget(@ptrCast(self));
    }

    pub fn SetInternalTextureFormat(self: ?*anyopaque, internalTextureFormat: u32) void {
        qtc.QOpenGLFramebufferObjectFormat_SetInternalTextureFormat(@ptrCast(self), internalTextureFormat);
    }

    pub fn InternalTextureFormat(self: ?*anyopaque, ) GL {
        return qtc.QOpenGLFramebufferObjectFormat_InternalTextureFormat(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QOpenGLFramebufferObjectFormat_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QOpenGLFramebufferObjectFormat_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFramebufferObjectFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/openglframebufferobject.html#types
pub const enums = struct {
    pub const Attachment = enum {
        pub const NoAttachment: i32 = 0;
        pub const CombinedDepthStencil: i32 = 1;
        pub const Depth: i32 = 2;
    };

    pub const FramebufferRestorePolicy = enum {
        pub const DontRestoreFramebufferBinding: i32 = 0;
        pub const RestoreFramebufferBindingToDefault: i32 = 1;
        pub const RestoreFrameBufferBinding: i32 = 2;
    };

};
