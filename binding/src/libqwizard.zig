const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qwizard.html
pub const qwizard = struct {

    /// New constructs a new QWizard object.
    pub fn New(parent: ?*anyopaque) QtC.QWizard {
        return qtc.QWizard_new(@ptrCast(parent));
    }


    /// New2 constructs a new QWizard object.
    pub fn New2() QtC.QWizard {
        return qtc.QWizard_new2();
    }


    /// New3 constructs a new QWizard object.
    pub fn New3(parent: ?*anyopaque, flags: i64) QtC.QWizard {
        return qtc.QWizard_new3(@ptrCast(parent), @intCast(flags));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWizard_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwizard.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddPage(self: ?*anyopaque, page: ?*anyopaque) i32 {
        return qtc.QWizard_AddPage(@ptrCast(self), @ptrCast(page));
    }

    pub fn SetPage(self: ?*anyopaque, id: i32, page: ?*anyopaque) void {
        qtc.QWizard_SetPage(@ptrCast(self), id, @ptrCast(page));
    }

    pub fn RemovePage(self: ?*anyopaque, id: i32) void {
        qtc.QWizard_RemovePage(@ptrCast(self), id);
    }

    pub fn Page(self: ?*anyopaque, id: i32) QtC.QWizardPage {
        return qtc.QWizard_Page(@ptrCast(self), id);
    }

    pub fn HasVisitedPage(self: ?*anyopaque, id: i32) bool {
        return qtc.QWizard_HasVisitedPage(@ptrCast(self), id);
    }

    pub fn VisitedIds(self: ?*anyopaque, ) []const u8 {
        return qtc.QWizard_VisitedIds(@ptrCast(self));
    }

    pub fn PageIds(self: ?*anyopaque, ) []const u8 {
        return qtc.QWizard_PageIds(@ptrCast(self));
    }

    pub fn SetStartId(self: ?*anyopaque, id: i32) void {
        qtc.QWizard_SetStartId(@ptrCast(self), id);
    }

    pub fn StartId(self: ?*anyopaque, ) i32 {
        return qtc.QWizard_StartId(@ptrCast(self));
    }

    pub fn CurrentPage(self: ?*anyopaque, ) QtC.QWizardPage {
        return qtc.QWizard_CurrentPage(@ptrCast(self));
    }

    pub fn CurrentId(self: ?*anyopaque, ) i32 {
        return qtc.QWizard_CurrentId(@ptrCast(self));
    }

    pub fn ValidateCurrentPage(self: ?*anyopaque, ) bool {
        return qtc.QWizard_ValidateCurrentPage(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnValidateCurrentPage(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QWizard_OnValidateCurrentPage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseValidateCurrentPage(self: ?*anyopaque, ) bool {
        return qtc.QWizard_QBaseValidateCurrentPage(@ptrCast(self));
    }

    pub fn NextId(self: ?*anyopaque, ) i32 {
        return qtc.QWizard_NextId(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnNextId(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QWizard_OnNextId(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNextId(self: ?*anyopaque, ) i32 {
        return qtc.QWizard_QBaseNextId(@ptrCast(self));
    }

    pub fn SetField(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QWizard_SetField(@ptrCast(self), name_str, @ptrCast(value));
    }

    pub fn Field(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QWizard_Field(@ptrCast(self), name_str);
    }

    pub fn SetWizardStyle(self: ?*anyopaque, style: i32) void {
        qtc.QWizard_SetWizardStyle(@ptrCast(self), @intCast(style));
    }

    pub fn WizardStyle(self: ?*anyopaque, ) i32 {
        return qtc.QWizard_WizardStyle(@ptrCast(self));
    }

    pub fn SetOption(self: ?*anyopaque, option: i32) void {
        qtc.QWizard_SetOption(@ptrCast(self), @intCast(option));
    }

    pub fn TestOption(self: ?*anyopaque, option: i32) bool {
        return qtc.QWizard_TestOption(@ptrCast(self), @intCast(option));
    }

    pub fn SetOptions(self: ?*anyopaque, options: i32) void {
        qtc.QWizard_SetOptions(@ptrCast(self), @intCast(options));
    }

    pub fn Options(self: ?*anyopaque, ) i32 {
        return qtc.QWizard_Options(@ptrCast(self));
    }

    pub fn SetButtonText(self: ?*anyopaque, which: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QWizard_SetButtonText(@ptrCast(self), @intCast(which), text_str);
    }

    pub fn ButtonText(self: ?*anyopaque, which: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWizard_ButtonText(@ptrCast(self), @intCast(which));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwizard.ButtonText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetButtonLayout(self: ?*anyopaque, layout: []const u8) void {
        qtc.QWizard_SetButtonLayout(@ptrCast(self), @ptrCast(layout));
    }

    pub fn SetButton(self: ?*anyopaque, which: i32, button: ?*anyopaque) void {
        qtc.QWizard_SetButton(@ptrCast(self), @intCast(which), @ptrCast(button));
    }

    pub fn Button(self: ?*anyopaque, which: i32) QtC.QAbstractButton {
        return qtc.QWizard_Button(@ptrCast(self), @intCast(which));
    }

    pub fn SetTitleFormat(self: ?*anyopaque, format: i32) void {
        qtc.QWizard_SetTitleFormat(@ptrCast(self), @intCast(format));
    }

    pub fn TitleFormat(self: ?*anyopaque, ) i32 {
        return qtc.QWizard_TitleFormat(@ptrCast(self));
    }

    pub fn SetSubTitleFormat(self: ?*anyopaque, format: i32) void {
        qtc.QWizard_SetSubTitleFormat(@ptrCast(self), @intCast(format));
    }

    pub fn SubTitleFormat(self: ?*anyopaque, ) i32 {
        return qtc.QWizard_SubTitleFormat(@ptrCast(self));
    }

    pub fn SetPixmap(self: ?*anyopaque, which: i32, pixmap: ?*anyopaque) void {
        qtc.QWizard_SetPixmap(@ptrCast(self), @intCast(which), @ptrCast(pixmap));
    }

    pub fn Pixmap(self: ?*anyopaque, which: i32) QtC.QPixmap {
        return qtc.QWizard_Pixmap(@ptrCast(self), @intCast(which));
    }

    pub fn SetSideWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QWizard_SetSideWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn SideWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QWizard_SideWidget(@ptrCast(self));
    }

    pub fn SetDefaultProperty(self: ?*anyopaque, className: []const u8, property: []const u8, changedSignal: []const u8) void {
        qtc.QWizard_SetDefaultProperty(@ptrCast(self), @ptrCast(className), @ptrCast(property), @ptrCast(changedSignal));
    }

    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QWizard_SetVisible(@ptrCast(self), visible);
    }

    /// Allows for overriding the related default method
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QWizard_OnSetVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QWizard_QBaseSetVisible(@ptrCast(self), visible);
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWizard_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QWizard_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QWizard_QBaseSizeHint(@ptrCast(self));
    }

    pub fn CurrentIdChanged(self: ?*anyopaque, id: i32) void {
        qtc.QWizard_CurrentIdChanged(@ptrCast(self), id);
    }

    pub fn OnCurrentIdChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWizard_Connect_CurrentIdChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn HelpRequested(self: ?*anyopaque, ) void {
        qtc.QWizard_HelpRequested(@ptrCast(self));
    }

    pub fn OnHelpRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWizard_Connect_HelpRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CustomButtonClicked(self: ?*anyopaque, which: i32) void {
        qtc.QWizard_CustomButtonClicked(@ptrCast(self), which);
    }

    pub fn OnCustomButtonClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWizard_Connect_CustomButtonClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PageAdded(self: ?*anyopaque, id: i32) void {
        qtc.QWizard_PageAdded(@ptrCast(self), id);
    }

    pub fn OnPageAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWizard_Connect_PageAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PageRemoved(self: ?*anyopaque, id: i32) void {
        qtc.QWizard_PageRemoved(@ptrCast(self), id);
    }

    pub fn OnPageRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWizard_Connect_PageRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Back(self: ?*anyopaque, ) void {
        qtc.QWizard_Back(@ptrCast(self));
    }

    pub fn Next(self: ?*anyopaque, ) void {
        qtc.QWizard_Next(@ptrCast(self));
    }

    pub fn SetCurrentId(self: ?*anyopaque, id: i32) void {
        qtc.QWizard_SetCurrentId(@ptrCast(self), id);
    }

    pub fn Restart(self: ?*anyopaque, ) void {
        qtc.QWizard_Restart(@ptrCast(self));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWizard_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWizard_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWizard_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWizard_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWizard_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWizard_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn PaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWizard_PaintEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWizard_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWizard_QBasePaintEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
    .len = eventType.len,
    .data = eventType.ptr,
};
return qtc.QWizard_NativeEvent(@ptrCast(self), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Allows for overriding the related default method
    pub fn OnNativeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]u8, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QWizard_OnNativeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
    .len = eventType.len,
    .data = eventType.ptr,
};
return qtc.QWizard_QBaseNativeEvent(@ptrCast(self), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    pub fn Done(self: ?*anyopaque, result: i32) void {
        qtc.QWizard_Done(@ptrCast(self), result);
    }

    /// Allows for overriding the related default method
    pub fn OnDone(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWizard_OnDone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDone(self: ?*anyopaque, result: i32) void {
        qtc.QWizard_QBaseDone(@ptrCast(self), result);
    }

    pub fn InitializePage(self: ?*anyopaque, id: i32) void {
        qtc.QWizard_InitializePage(@ptrCast(self), id);
    }

    /// Allows for overriding the related default method
    pub fn OnInitializePage(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWizard_OnInitializePage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitializePage(self: ?*anyopaque, id: i32) void {
        qtc.QWizard_QBaseInitializePage(@ptrCast(self), id);
    }

    pub fn CleanupPage(self: ?*anyopaque, id: i32) void {
        qtc.QWizard_CleanupPage(@ptrCast(self), id);
    }

    /// Allows for overriding the related default method
    pub fn OnCleanupPage(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWizard_OnCleanupPage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCleanupPage(self: ?*anyopaque, id: i32) void {
        qtc.QWizard_QBaseCleanupPage(@ptrCast(self), id);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWizard_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwizard.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWizard_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwizard.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetOption2(self: ?*anyopaque, option: i32, on: bool) void {
        qtc.QWizard_SetOption2(@ptrCast(self), @intCast(option), on);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWizard_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwizardpage.html
pub const qwizardpage = struct {

    /// New constructs a new QWizardPage object.
    pub fn New(parent: ?*anyopaque) QtC.QWizardPage {
        return qtc.QWizardPage_new(@ptrCast(parent));
    }


    /// New2 constructs a new QWizardPage object.
    pub fn New2() QtC.QWizardPage {
        return qtc.QWizardPage_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWizardPage_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwizardpage.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
qtc.QWizardPage_SetTitle(@ptrCast(self), title_str);
    }

    pub fn Title(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWizardPage_Title(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwizardpage.Title: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSubTitle(self: ?*anyopaque, subTitle: []const u8) void {
        const subTitle_str = qtc.libqt_string{
    .len = subTitle.len,
    .data = subTitle.ptr,
};
qtc.QWizardPage_SetSubTitle(@ptrCast(self), subTitle_str);
    }

    pub fn SubTitle(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWizardPage_SubTitle(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwizardpage.SubTitle: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPixmap(self: ?*anyopaque, which: i32, pixmap: ?*anyopaque) void {
        qtc.QWizardPage_SetPixmap(@ptrCast(self), @intCast(which), @ptrCast(pixmap));
    }

    pub fn Pixmap(self: ?*anyopaque, which: i32) QtC.QPixmap {
        return qtc.QWizardPage_Pixmap(@ptrCast(self), @intCast(which));
    }

    pub fn SetFinalPage(self: ?*anyopaque, finalPage: bool) void {
        qtc.QWizardPage_SetFinalPage(@ptrCast(self), finalPage);
    }

    pub fn IsFinalPage(self: ?*anyopaque, ) bool {
        return qtc.QWizardPage_IsFinalPage(@ptrCast(self));
    }

    pub fn SetCommitPage(self: ?*anyopaque, commitPage: bool) void {
        qtc.QWizardPage_SetCommitPage(@ptrCast(self), commitPage);
    }

    pub fn IsCommitPage(self: ?*anyopaque, ) bool {
        return qtc.QWizardPage_IsCommitPage(@ptrCast(self));
    }

    pub fn SetButtonText(self: ?*anyopaque, which: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QWizardPage_SetButtonText(@ptrCast(self), @intCast(which), text_str);
    }

    pub fn ButtonText(self: ?*anyopaque, which: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWizardPage_ButtonText(@ptrCast(self), @intCast(which));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwizardpage.ButtonText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn InitializePage(self: ?*anyopaque, ) void {
        qtc.QWizardPage_InitializePage(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnInitializePage(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWizardPage_OnInitializePage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitializePage(self: ?*anyopaque, ) void {
        qtc.QWizardPage_QBaseInitializePage(@ptrCast(self));
    }

    pub fn CleanupPage(self: ?*anyopaque, ) void {
        qtc.QWizardPage_CleanupPage(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCleanupPage(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWizardPage_OnCleanupPage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCleanupPage(self: ?*anyopaque, ) void {
        qtc.QWizardPage_QBaseCleanupPage(@ptrCast(self));
    }

    pub fn ValidatePage(self: ?*anyopaque, ) bool {
        return qtc.QWizardPage_ValidatePage(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnValidatePage(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QWizardPage_OnValidatePage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseValidatePage(self: ?*anyopaque, ) bool {
        return qtc.QWizardPage_QBaseValidatePage(@ptrCast(self));
    }

    pub fn IsComplete(self: ?*anyopaque, ) bool {
        return qtc.QWizardPage_IsComplete(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsComplete(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QWizardPage_OnIsComplete(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsComplete(self: ?*anyopaque, ) bool {
        return qtc.QWizardPage_QBaseIsComplete(@ptrCast(self));
    }

    pub fn NextId(self: ?*anyopaque, ) i32 {
        return qtc.QWizardPage_NextId(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnNextId(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QWizardPage_OnNextId(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNextId(self: ?*anyopaque, ) i32 {
        return qtc.QWizardPage_QBaseNextId(@ptrCast(self));
    }

    pub fn CompleteChanged(self: ?*anyopaque, ) void {
        qtc.QWizardPage_CompleteChanged(@ptrCast(self));
    }

    pub fn OnCompleteChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWizardPage_Connect_CompleteChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SetField(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QWizardPage_SetField(@ptrCast(self), name_str, @ptrCast(value));
    }

    /// Allows for overriding the related default method
    pub fn OnSetField(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) void) void {
        qtc.QWizardPage_OnSetField(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetField(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QWizardPage_QBaseSetField(@ptrCast(self), name_str, @ptrCast(value));
    }

    pub fn Field(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QWizardPage_Field(@ptrCast(self), name_str);
    }

    /// Allows for overriding the related default method
    pub fn OnField(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QVariant) void {
        qtc.QWizardPage_OnField(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseField(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QWizardPage_QBaseField(@ptrCast(self), name_str);
    }

    pub fn RegisterField(self: ?*anyopaque, name: []const u8, widget: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QWizardPage_RegisterField(@ptrCast(self), name_str, @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnRegisterField(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) void) void {
        qtc.QWizardPage_OnRegisterField(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRegisterField(self: ?*anyopaque, name: []const u8, widget: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QWizardPage_QBaseRegisterField(@ptrCast(self), name_str, @ptrCast(widget));
    }

    pub fn Wizard(self: ?*anyopaque, ) QtC.QWizard {
        return qtc.QWizardPage_Wizard(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnWizard(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QWizard) void {
        qtc.QWizardPage_OnWizard(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWizard(self: ?*anyopaque, ) QtC.QWizard {
        return qtc.QWizardPage_QBaseWizard(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWizardPage_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwizardpage.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWizardPage_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwizardpage.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn RegisterField3(self: ?*anyopaque, name: []const u8, widget: ?*anyopaque, property: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QWizardPage_RegisterField3(@ptrCast(self), name_str, @ptrCast(widget), @ptrCast(property));
    }

    /// Allows for overriding the related default method
    pub fn OnRegisterField3(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWizardPage_OnRegisterField3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRegisterField3(self: ?*anyopaque, name: []const u8, widget: ?*anyopaque, property: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QWizardPage_QBaseRegisterField3(@ptrCast(self), name_str, @ptrCast(widget), @ptrCast(property));
    }

    pub fn RegisterField4(self: ?*anyopaque, name: []const u8, widget: ?*anyopaque, property: []const u8, changedSignal: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QWizardPage_RegisterField4(@ptrCast(self), name_str, @ptrCast(widget), @ptrCast(property), @ptrCast(changedSignal));
    }

    /// Allows for overriding the related default method
    pub fn OnRegisterField4(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QWizardPage_OnRegisterField4(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRegisterField4(self: ?*anyopaque, name: []const u8, widget: ?*anyopaque, property: []const u8, changedSignal: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QWizardPage_QBaseRegisterField4(@ptrCast(self), name_str, @ptrCast(widget), @ptrCast(property), @ptrCast(changedSignal));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWizardPage_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/wizard.html#types
pub const enums = struct {
    pub const WizardButton = enum {
        pub const BackButton: i32 = 0;
        pub const NextButton: i32 = 1;
        pub const CommitButton: i32 = 2;
        pub const FinishButton: i32 = 3;
        pub const CancelButton: i32 = 4;
        pub const HelpButton: i32 = 5;
        pub const CustomButton1: i32 = 6;
        pub const CustomButton2: i32 = 7;
        pub const CustomButton3: i32 = 8;
        pub const Stretch: i32 = 9;
        pub const NoButton: i32 = -1;
        pub const NStandardButtons: i32 = 6;
        pub const NButtons: i32 = 9;
    };

    pub const WizardPixmap = enum {
        pub const WatermarkPixmap: i32 = 0;
        pub const LogoPixmap: i32 = 1;
        pub const BannerPixmap: i32 = 2;
        pub const BackgroundPixmap: i32 = 3;
        pub const NPixmaps: i32 = 4;
    };

    pub const WizardStyle = enum {
        pub const ClassicStyle: i32 = 0;
        pub const ModernStyle: i32 = 1;
        pub const MacStyle: i32 = 2;
        pub const AeroStyle: i32 = 3;
        pub const NStyles: i32 = 4;
    };

    pub const WizardOption = enum {
        pub const IndependentPages: i32 = 1;
        pub const IgnoreSubTitles: i32 = 2;
        pub const ExtendedWatermarkPixmap: i32 = 4;
        pub const NoDefaultButton: i32 = 8;
        pub const NoBackButtonOnStartPage: i32 = 16;
        pub const NoBackButtonOnLastPage: i32 = 32;
        pub const DisabledBackButtonOnLastPage: i32 = 64;
        pub const HaveNextButtonOnLastPage: i32 = 128;
        pub const HaveFinishButtonOnEarlyPages: i32 = 256;
        pub const NoCancelButton: i32 = 512;
        pub const CancelButtonOnLeft: i32 = 1024;
        pub const HaveHelpButton: i32 = 2048;
        pub const HelpButtonOnRight: i32 = 4096;
        pub const HaveCustomButton1: i32 = 8192;
        pub const HaveCustomButton2: i32 = 16384;
        pub const HaveCustomButton3: i32 = 32768;
        pub const NoCancelButtonOnLastPage: i32 = 65536;
    };

};
