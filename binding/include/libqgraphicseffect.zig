const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qgraphicseffect.html
pub const qgraphicseffect = struct {

    /// New constructs a new QGraphicsEffect object.
    pub fn New() QtC.QGraphicsEffect {
        return qtc.QGraphicsEffect_new();
    }


    /// New2 constructs a new QGraphicsEffect object.
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QGraphicsEffect_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsEffect_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicseffect.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn BoundingRectFor(self: ?*anyopaque, sourceRect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsEffect_BoundingRectFor(@ptrCast(self), @ptrCast(sourceRect));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundingRectFor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsEffect_OnBoundingRectFor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundingRectFor(self: ?*anyopaque, sourceRect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsEffect_QBaseBoundingRectFor(@ptrCast(self), @ptrCast(sourceRect));
    }

    pub fn BoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsEffect_BoundingRect(@ptrCast(self));
    }

    pub fn IsEnabled(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsEffect_IsEnabled(@ptrCast(self));
    }

    pub fn SetEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QGraphicsEffect_SetEnabled(@ptrCast(self), enable);
    }

    pub fn Update(self: ?*anyopaque, ) void {
        qtc.QGraphicsEffect_Update(@ptrCast(self));
    }

    pub fn EnabledChanged(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsEffect_EnabledChanged(@ptrCast(self), enabled);
    }

    pub fn OnEnabledChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsEffect_Connect_EnabledChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Draw(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsEffect_Draw(@ptrCast(self), @ptrCast(painter));
    }

    /// Allows for overriding the related default method
    pub fn OnDraw(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnDraw(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDraw(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsEffect_QBaseDraw(@ptrCast(self), @ptrCast(painter));
    }

    pub fn SourceChanged(self: ?*anyopaque, flags: i32) void {
        qtc.QGraphicsEffect_SourceChanged(@ptrCast(self), @intCast(flags));
    }

    /// Allows for overriding the related default method
    pub fn OnSourceChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnSourceChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSourceChanged(self: ?*anyopaque, flags: i32) void {
        qtc.QGraphicsEffect_QBaseSourceChanged(@ptrCast(self), @intCast(flags));
    }

    pub fn UpdateBoundingRect(self: ?*anyopaque, ) void {
        qtc.QGraphicsEffect_UpdateBoundingRect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateBoundingRect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnUpdateBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateBoundingRect(self: ?*anyopaque, ) void {
        qtc.QGraphicsEffect_QBaseUpdateBoundingRect(@ptrCast(self));
    }

    pub fn SourceIsPixmap(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsEffect_SourceIsPixmap(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSourceIsPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsEffect_OnSourceIsPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSourceIsPixmap(self: ?*anyopaque, ) bool {
        return qtc.QGraphicsEffect_QBaseSourceIsPixmap(@ptrCast(self));
    }

    pub fn SourceBoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsEffect_SourceBoundingRect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSourceBoundingRect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsEffect_OnSourceBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSourceBoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QGraphicsEffect_QBaseSourceBoundingRect(@ptrCast(self));
    }

    pub fn DrawSource(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsEffect_DrawSource(@ptrCast(self), @ptrCast(painter));
    }

    /// Allows for overriding the related default method
    pub fn OnDrawSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnDrawSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDrawSource(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsEffect_QBaseDrawSource(@ptrCast(self), @ptrCast(painter));
    }

    pub fn SourcePixmap(self: ?*anyopaque, ) QtC.QPixmap {
        return qtc.QGraphicsEffect_SourcePixmap(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSourcePixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPixmap) void {
        qtc.QGraphicsEffect_OnSourcePixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSourcePixmap(self: ?*anyopaque, ) QtC.QPixmap {
        return qtc.QGraphicsEffect_QBaseSourcePixmap(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsEffect_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicseffect.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsEffect_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicseffect.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SourceBoundingRect1(self: ?*anyopaque, system: i32) QtC.QRectF {
        return qtc.QGraphicsEffect_SourceBoundingRect1(@ptrCast(self), @intCast(system));
    }

    /// Allows for overriding the related default method
    pub fn OnSourceBoundingRect1(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsEffect_OnSourceBoundingRect1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSourceBoundingRect1(self: ?*anyopaque, system: i32) QtC.QRectF {
        return qtc.QGraphicsEffect_QBaseSourceBoundingRect1(@ptrCast(self), @intCast(system));
    }

    pub fn SourcePixmap1(self: ?*anyopaque, system: i32) QtC.QPixmap {
        return qtc.QGraphicsEffect_SourcePixmap1(@ptrCast(self), @intCast(system));
    }

    /// Allows for overriding the related default method
    pub fn OnSourcePixmap1(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QPixmap) void {
        qtc.QGraphicsEffect_OnSourcePixmap1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSourcePixmap1(self: ?*anyopaque, system: i32) QtC.QPixmap {
        return qtc.QGraphicsEffect_QBaseSourcePixmap1(@ptrCast(self), @intCast(system));
    }

    pub fn SourcePixmap2(self: ?*anyopaque, system: i32, offset: ?*anyopaque) QtC.QPixmap {
        return qtc.QGraphicsEffect_SourcePixmap2(@ptrCast(self), @intCast(system), @ptrCast(offset));
    }

    /// Allows for overriding the related default method
    pub fn OnSourcePixmap2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QPixmap) void {
        qtc.QGraphicsEffect_OnSourcePixmap2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSourcePixmap2(self: ?*anyopaque, system: i32, offset: ?*anyopaque) QtC.QPixmap {
        return qtc.QGraphicsEffect_QBaseSourcePixmap2(@ptrCast(self), @intCast(system), @ptrCast(offset));
    }

    pub fn SourcePixmap3(self: ?*anyopaque, system: i32, offset: ?*anyopaque, mode: i32) QtC.QPixmap {
        return qtc.QGraphicsEffect_SourcePixmap3(@ptrCast(self), @intCast(system), @ptrCast(offset), @intCast(mode));
    }

    /// Allows for overriding the related default method
    pub fn OnSourcePixmap3(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, i32) callconv(.c) QtC.QPixmap) void {
        qtc.QGraphicsEffect_OnSourcePixmap3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSourcePixmap3(self: ?*anyopaque, system: i32, offset: ?*anyopaque, mode: i32) QtC.QPixmap {
        return qtc.QGraphicsEffect_QBaseSourcePixmap3(@ptrCast(self), @intCast(system), @ptrCast(offset), @intCast(mode));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsEffect_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html
pub const qgraphicscolorizeeffect = struct {

    /// New constructs a new QGraphicsColorizeEffect object.
    pub fn New() QtC.QGraphicsColorizeEffect {
        return qtc.QGraphicsColorizeEffect_new();
    }


    /// New2 constructs a new QGraphicsColorizeEffect object.
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsColorizeEffect {
        return qtc.QGraphicsColorizeEffect_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsColorizeEffect_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicscolorizeeffect.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Color(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QGraphicsColorizeEffect_Color(@ptrCast(self));
    }

    pub fn Strength(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsColorizeEffect_Strength(@ptrCast(self));
    }

    pub fn SetColor(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_SetColor(@ptrCast(self), @ptrCast(c));
    }

    pub fn SetStrength(self: ?*anyopaque, strength: f64) void {
        qtc.QGraphicsColorizeEffect_SetStrength(@ptrCast(self), strength);
    }

    pub fn ColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_ColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_Connect_ColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn StrengthChanged(self: ?*anyopaque, strength: f64) void {
        qtc.QGraphicsColorizeEffect_StrengthChanged(@ptrCast(self), strength);
    }

    pub fn OnStrengthChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_Connect_StrengthChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Draw(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_Draw(@ptrCast(self), @ptrCast(painter));
    }

    /// Allows for overriding the related default method
    pub fn OnDraw(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnDraw(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDraw(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_QBaseDraw(@ptrCast(self), @ptrCast(painter));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsColorizeEffect_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicscolorizeeffect.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsColorizeEffect_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicscolorizeeffect.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsblureffect.html
pub const qgraphicsblureffect = struct {

    /// New constructs a new QGraphicsBlurEffect object.
    pub fn New() QtC.QGraphicsBlurEffect {
        return qtc.QGraphicsBlurEffect_new();
    }


    /// New2 constructs a new QGraphicsBlurEffect object.
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsBlurEffect {
        return qtc.QGraphicsBlurEffect_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsBlurEffect_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsblureffect.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn BoundingRectFor(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsBlurEffect_BoundingRectFor(@ptrCast(self), @ptrCast(rect));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundingRectFor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsBlurEffect_OnBoundingRectFor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundingRectFor(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsBlurEffect_QBaseBoundingRectFor(@ptrCast(self), @ptrCast(rect));
    }

    pub fn BlurRadius(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsBlurEffect_BlurRadius(@ptrCast(self));
    }

    pub fn BlurHints(self: ?*anyopaque, ) i32 {
        return qtc.QGraphicsBlurEffect_BlurHints(@ptrCast(self));
    }

    pub fn SetBlurRadius(self: ?*anyopaque, blurRadius: f64) void {
        qtc.QGraphicsBlurEffect_SetBlurRadius(@ptrCast(self), blurRadius);
    }

    pub fn SetBlurHints(self: ?*anyopaque, hints: i32) void {
        qtc.QGraphicsBlurEffect_SetBlurHints(@ptrCast(self), @intCast(hints));
    }

    pub fn BlurRadiusChanged(self: ?*anyopaque, blurRadius: f64) void {
        qtc.QGraphicsBlurEffect_BlurRadiusChanged(@ptrCast(self), blurRadius);
    }

    pub fn OnBlurRadiusChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_Connect_BlurRadiusChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BlurHintsChanged(self: ?*anyopaque, hints: i32) void {
        qtc.QGraphicsBlurEffect_BlurHintsChanged(@ptrCast(self), @intCast(hints));
    }

    pub fn OnBlurHintsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_Connect_BlurHintsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Draw(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_Draw(@ptrCast(self), @ptrCast(painter));
    }

    /// Allows for overriding the related default method
    pub fn OnDraw(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnDraw(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDraw(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_QBaseDraw(@ptrCast(self), @ptrCast(painter));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsBlurEffect_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsblureffect.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsBlurEffect_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsblureffect.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html
pub const qgraphicsdropshadoweffect = struct {

    /// New constructs a new QGraphicsDropShadowEffect object.
    pub fn New() QtC.QGraphicsDropShadowEffect {
        return qtc.QGraphicsDropShadowEffect_new();
    }


    /// New2 constructs a new QGraphicsDropShadowEffect object.
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsDropShadowEffect {
        return qtc.QGraphicsDropShadowEffect_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsDropShadowEffect_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsdropshadoweffect.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn BoundingRectFor(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsDropShadowEffect_BoundingRectFor(@ptrCast(self), @ptrCast(rect));
    }

    /// Allows for overriding the related default method
    pub fn OnBoundingRectFor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsDropShadowEffect_OnBoundingRectFor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBoundingRectFor(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsDropShadowEffect_QBaseBoundingRectFor(@ptrCast(self), @ptrCast(rect));
    }

    pub fn Offset(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QGraphicsDropShadowEffect_Offset(@ptrCast(self));
    }

    pub fn XOffset(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsDropShadowEffect_XOffset(@ptrCast(self));
    }

    pub fn YOffset(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsDropShadowEffect_YOffset(@ptrCast(self));
    }

    pub fn BlurRadius(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsDropShadowEffect_BlurRadius(@ptrCast(self));
    }

    pub fn Color(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QGraphicsDropShadowEffect_Color(@ptrCast(self));
    }

    pub fn SetOffset(self: ?*anyopaque, ofs: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_SetOffset(@ptrCast(self), @ptrCast(ofs));
    }

    pub fn SetOffset2(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QGraphicsDropShadowEffect_SetOffset2(@ptrCast(self), dx, dy);
    }

    pub fn SetOffset3(self: ?*anyopaque, d: f64) void {
        qtc.QGraphicsDropShadowEffect_SetOffset3(@ptrCast(self), d);
    }

    pub fn SetXOffset(self: ?*anyopaque, dx: f64) void {
        qtc.QGraphicsDropShadowEffect_SetXOffset(@ptrCast(self), dx);
    }

    pub fn SetYOffset(self: ?*anyopaque, dy: f64) void {
        qtc.QGraphicsDropShadowEffect_SetYOffset(@ptrCast(self), dy);
    }

    pub fn SetBlurRadius(self: ?*anyopaque, blurRadius: f64) void {
        qtc.QGraphicsDropShadowEffect_SetBlurRadius(@ptrCast(self), blurRadius);
    }

    pub fn SetColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_SetColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn OffsetChanged(self: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_OffsetChanged(@ptrCast(self), @ptrCast(offset));
    }

    pub fn OnOffsetChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_Connect_OffsetChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BlurRadiusChanged(self: ?*anyopaque, blurRadius: f64) void {
        qtc.QGraphicsDropShadowEffect_BlurRadiusChanged(@ptrCast(self), blurRadius);
    }

    pub fn OnBlurRadiusChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_Connect_BlurRadiusChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_ColorChanged(@ptrCast(self), @ptrCast(color));
    }

    pub fn OnColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_Connect_ColorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Draw(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_Draw(@ptrCast(self), @ptrCast(painter));
    }

    /// Allows for overriding the related default method
    pub fn OnDraw(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnDraw(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDraw(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_QBaseDraw(@ptrCast(self), @ptrCast(painter));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsDropShadowEffect_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsdropshadoweffect.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsDropShadowEffect_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsdropshadoweffect.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsopacityeffect.html
pub const qgraphicsopacityeffect = struct {

    /// New constructs a new QGraphicsOpacityEffect object.
    pub fn New() QtC.QGraphicsOpacityEffect {
        return qtc.QGraphicsOpacityEffect_new();
    }


    /// New2 constructs a new QGraphicsOpacityEffect object.
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsOpacityEffect {
        return qtc.QGraphicsOpacityEffect_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsOpacityEffect_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsopacityeffect.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Opacity(self: ?*anyopaque, ) f64 {
        return qtc.QGraphicsOpacityEffect_Opacity(@ptrCast(self));
    }

    pub fn OpacityMask(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QGraphicsOpacityEffect_OpacityMask(@ptrCast(self));
    }

    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QGraphicsOpacityEffect_SetOpacity(@ptrCast(self), opacity);
    }

    pub fn SetOpacityMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_SetOpacityMask(@ptrCast(self), @ptrCast(mask));
    }

    pub fn OpacityChanged(self: ?*anyopaque, opacity: f64) void {
        qtc.QGraphicsOpacityEffect_OpacityChanged(@ptrCast(self), opacity);
    }

    pub fn OnOpacityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_Connect_OpacityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn OpacityMaskChanged(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_OpacityMaskChanged(@ptrCast(self), @ptrCast(mask));
    }

    pub fn OnOpacityMaskChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_Connect_OpacityMaskChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Draw(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_Draw(@ptrCast(self), @ptrCast(painter));
    }

    /// Allows for overriding the related default method
    pub fn OnDraw(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnDraw(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDraw(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_QBaseDraw(@ptrCast(self), @ptrCast(painter));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsOpacityEffect_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsopacityeffect.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsOpacityEffect_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsopacityeffect.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/graphicseffect.html#types
pub const enums = struct {
    pub const ChangeFlag = enum {
        pub const SourceAttached: i32 = 1;
        pub const SourceDetached: i32 = 2;
        pub const SourceBoundingRectChanged: i32 = 4;
        pub const SourceInvalidated: i32 = 8;
    };

    pub const PixmapPadMode = enum {
        pub const NoPad: i32 = 0;
        pub const PadToTransparentBorder: i32 = 1;
        pub const PadToEffectiveBoundingRect: i32 = 2;
    };

    pub const BlurHint = enum {
        pub const PerformanceHint: i32 = 0;
        pub const QualityHint: i32 = 1;
        pub const AnimationHint: i32 = 2;
    };

};
