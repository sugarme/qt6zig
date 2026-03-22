const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopenglbuffer.html
pub const qopenglbuffer = struct {

    /// New constructs a new QOpenGLBuffer object.
    pub fn New() QtC.QOpenGLBuffer {
        return qtc.QOpenGLBuffer_new();
    }


    /// New2 constructs a new QOpenGLBuffer object.
    pub fn New2(typeVal: i32) QtC.QOpenGLBuffer {
        return qtc.QOpenGLBuffer_new2(@intCast(typeVal));
    }


    /// New3 constructs a new QOpenGLBuffer object.
    pub fn New3(other: ?*anyopaque) QtC.QOpenGLBuffer {
        return qtc.QOpenGLBuffer_new3(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QOpenGLBuffer_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QOpenGLBuffer_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLBuffer_Type(@ptrCast(self));
    }

    pub fn UsagePattern(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLBuffer_UsagePattern(@ptrCast(self));
    }

    pub fn SetUsagePattern(self: ?*anyopaque, value: i32) void {
        qtc.QOpenGLBuffer_SetUsagePattern(@ptrCast(self), @intCast(value));
    }

    pub fn Create(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLBuffer_Create(@ptrCast(self));
    }

    pub fn IsCreated(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLBuffer_IsCreated(@ptrCast(self));
    }

    pub fn Destroy(self: ?*anyopaque, ) void {
        qtc.QOpenGLBuffer_Destroy(@ptrCast(self));
    }

    pub fn Bind(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLBuffer_Bind(@ptrCast(self));
    }

    pub fn Release(self: ?*anyopaque, ) void {
        qtc.QOpenGLBuffer_Release(@ptrCast(self));
    }

    pub fn Release2(typeVal: i32) void {
        qtc.QOpenGLBuffer_Release2(@intCast(typeVal));
    }

    pub fn BufferId(self: ?*anyopaque, ) u32 {
        return qtc.QOpenGLBuffer_BufferId(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLBuffer_Size(@ptrCast(self));
    }

    pub fn Read(self: ?*anyopaque, offset: i32, data: ?*anyopaque, count: i32) bool {
        return qtc.QOpenGLBuffer_Read(@ptrCast(self), offset, @ptrCast(data), count);
    }

    pub fn Write(self: ?*anyopaque, offset: i32, data: ?*anyopaque, count: i32) void {
        qtc.QOpenGLBuffer_Write(@ptrCast(self), offset, @ptrCast(data), count);
    }

    pub fn Allocate(self: ?*anyopaque, data: ?*anyopaque, count: i32) void {
        qtc.QOpenGLBuffer_Allocate(@ptrCast(self), @ptrCast(data), count);
    }

    pub fn Allocate2(self: ?*anyopaque, count: i32) void {
        qtc.QOpenGLBuffer_Allocate2(@ptrCast(self), count);
    }

    pub fn Map(self: ?*anyopaque, access: i32) ?*anyopaque {
        return qtc.QOpenGLBuffer_Map(@ptrCast(self), @intCast(access));
    }

    pub fn MapRange(self: ?*anyopaque, offset: i32, count: i32, access: i32) ?*anyopaque {
        return qtc.QOpenGLBuffer_MapRange(@ptrCast(self), offset, count, @intCast(access));
    }

    pub fn Unmap(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLBuffer_Unmap(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLBuffer_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/openglbuffer.html#types
pub const enums = struct {
    pub const Type = enum {
        pub const VertexBuffer: i32 = 34962;
        pub const IndexBuffer: i32 = 34963;
        pub const PixelPackBuffer: i32 = 35051;
        pub const PixelUnpackBuffer: i32 = 35052;
    };

    pub const UsagePattern = enum {
        pub const StreamDraw: i32 = 35040;
        pub const StreamRead: i32 = 35041;
        pub const StreamCopy: i32 = 35042;
        pub const StaticDraw: i32 = 35044;
        pub const StaticRead: i32 = 35045;
        pub const StaticCopy: i32 = 35046;
        pub const DynamicDraw: i32 = 35048;
        pub const DynamicRead: i32 = 35049;
        pub const DynamicCopy: i32 = 35050;
    };

    pub const Access = enum {
        pub const ReadOnly: i32 = 35000;
        pub const WriteOnly: i32 = 35001;
        pub const ReadWrite: i32 = 35002;
    };

    pub const RangeAccessFlag = enum {
        pub const RangeRead: i32 = 1;
        pub const RangeWrite: i32 = 2;
        pub const RangeInvalidate: i32 = 4;
        pub const RangeInvalidateBuffer: i32 = 8;
        pub const RangeFlushExplicit: i32 = 16;
        pub const RangeUnsynchronized: i32 = 32;
    };

};
