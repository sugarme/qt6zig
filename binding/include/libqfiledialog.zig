const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qfiledialog.html
pub const qfiledialog = struct {

    /// New constructs a new QFileDialog object.
    pub fn New(parent: ?*anyopaque) QtC.QFileDialog {
        return qtc.QFileDialog_new(@ptrCast(parent));
    }


    /// New2 constructs a new QFileDialog object.
    pub fn New2(parent: ?*anyopaque, f: i64) QtC.QFileDialog {
        return qtc.QFileDialog_new2(@ptrCast(parent), @intCast(f));
    }


    /// New3 constructs a new QFileDialog object.
    pub fn New3() QtC.QFileDialog {
        return qtc.QFileDialog_new3();
    }


    /// New4 constructs a new QFileDialog object.
    pub fn New4(parent: ?*anyopaque, caption: []const u8) QtC.QFileDialog {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
return qtc.QFileDialog_new4(@ptrCast(parent), caption_str);
    }


    /// New5 constructs a new QFileDialog object.
    pub fn New5(parent: ?*anyopaque, caption: []const u8, directory: []const u8) QtC.QFileDialog {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const directory_str = qtc.libqt_string{
    .len = directory.len,
    .data = directory.ptr,
};
return qtc.QFileDialog_new5(@ptrCast(parent), caption_str, directory_str);
    }


    /// New6 constructs a new QFileDialog object.
    pub fn New6(parent: ?*anyopaque, caption: []const u8, directory: []const u8, filter: []const u8) QtC.QFileDialog {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const directory_str = qtc.libqt_string{
    .len = directory.len,
    .data = directory.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
return qtc.QFileDialog_new6(@ptrCast(parent), caption_str, directory_str, filter_str);
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileDialog_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetDirectory(self: ?*anyopaque, directory: []const u8) void {
        const directory_str = qtc.libqt_string{
    .len = directory.len,
    .data = directory.ptr,
};
qtc.QFileDialog_SetDirectory(@ptrCast(self), directory_str);
    }

    pub fn SetDirectory2(self: ?*anyopaque, directory: ?*anyopaque) void {
        qtc.QFileDialog_SetDirectory2(@ptrCast(self), @ptrCast(directory));
    }

    pub fn Directory(self: ?*anyopaque, ) QtC.QDir {
        return qtc.QFileDialog_Directory(@ptrCast(self));
    }

    pub fn SetDirectoryUrl(self: ?*anyopaque, directory: ?*anyopaque) void {
        qtc.QFileDialog_SetDirectoryUrl(@ptrCast(self), @ptrCast(directory));
    }

    pub fn DirectoryUrl(self: ?*anyopaque, ) QtC.QUrl {
        return qtc.QFileDialog_DirectoryUrl(@ptrCast(self));
    }

    pub fn SelectFile(self: ?*anyopaque, filename: []const u8) void {
        const filename_str = qtc.libqt_string{
    .len = filename.len,
    .data = filename.ptr,
};
qtc.QFileDialog_SelectFile(@ptrCast(self), filename_str);
    }

    pub fn SelectedFiles(self: ?*anyopaque, ) []const u8 {
        return qtc.QFileDialog_SelectedFiles(@ptrCast(self));
    }

    pub fn SelectUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QFileDialog_SelectUrl(@ptrCast(self), @ptrCast(url));
    }

    pub fn SelectedUrls(self: ?*anyopaque, ) []const u8 {
        return qtc.QFileDialog_SelectedUrls(@ptrCast(self));
    }

    pub fn SetNameFilter(self: ?*anyopaque, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
qtc.QFileDialog_SetNameFilter(@ptrCast(self), filter_str);
    }

    pub fn SetNameFilters(self: ?*anyopaque, filters: []const u8) void {
        qtc.QFileDialog_SetNameFilters(@ptrCast(self), @ptrCast(filters));
    }

    pub fn NameFilters(self: ?*anyopaque, ) []const u8 {
        return qtc.QFileDialog_NameFilters(@ptrCast(self));
    }

    pub fn SelectNameFilter(self: ?*anyopaque, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
qtc.QFileDialog_SelectNameFilter(@ptrCast(self), filter_str);
    }

    pub fn SelectedMimeTypeFilter(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileDialog_SelectedMimeTypeFilter(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.SelectedMimeTypeFilter: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SelectedNameFilter(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileDialog_SelectedNameFilter(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.SelectedNameFilter: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetMimeTypeFilters(self: ?*anyopaque, filters: []const u8) void {
        qtc.QFileDialog_SetMimeTypeFilters(@ptrCast(self), @ptrCast(filters));
    }

    pub fn MimeTypeFilters(self: ?*anyopaque, ) []const u8 {
        return qtc.QFileDialog_MimeTypeFilters(@ptrCast(self));
    }

    pub fn SelectMimeTypeFilter(self: ?*anyopaque, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
qtc.QFileDialog_SelectMimeTypeFilter(@ptrCast(self), filter_str);
    }

    pub fn Filter(self: ?*anyopaque, ) i32 {
        return qtc.QFileDialog_Filter(@ptrCast(self));
    }

    pub fn SetFilter(self: ?*anyopaque, filters: i32) void {
        qtc.QFileDialog_SetFilter(@ptrCast(self), @intCast(filters));
    }

    pub fn SetViewMode(self: ?*anyopaque, mode: i32) void {
        qtc.QFileDialog_SetViewMode(@ptrCast(self), @intCast(mode));
    }

    pub fn ViewMode(self: ?*anyopaque, ) i32 {
        return qtc.QFileDialog_ViewMode(@ptrCast(self));
    }

    pub fn SetFileMode(self: ?*anyopaque, mode: i32) void {
        qtc.QFileDialog_SetFileMode(@ptrCast(self), @intCast(mode));
    }

    pub fn FileMode(self: ?*anyopaque, ) i32 {
        return qtc.QFileDialog_FileMode(@ptrCast(self));
    }

    pub fn SetAcceptMode(self: ?*anyopaque, mode: i32) void {
        qtc.QFileDialog_SetAcceptMode(@ptrCast(self), @intCast(mode));
    }

    pub fn AcceptMode(self: ?*anyopaque, ) i32 {
        return qtc.QFileDialog_AcceptMode(@ptrCast(self));
    }

    pub fn SetSidebarUrls(self: ?*anyopaque, urls: []const u8) void {
        qtc.QFileDialog_SetSidebarUrls(@ptrCast(self), @ptrCast(urls));
    }

    pub fn SidebarUrls(self: ?*anyopaque, ) []const u8 {
        return qtc.QFileDialog_SidebarUrls(@ptrCast(self));
    }

    pub fn SaveState(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QFileDialog_SaveState(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qfiledialog.SaveState: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn RestoreState(self: ?*anyopaque, state: []u8) bool {
        const state_str = qtc.libqt_string{
    .len = state.len,
    .data = state.ptr,
};
return qtc.QFileDialog_RestoreState(@ptrCast(self), state_str);
    }

    pub fn SetDefaultSuffix(self: ?*anyopaque, suffix: []const u8) void {
        const suffix_str = qtc.libqt_string{
    .len = suffix.len,
    .data = suffix.ptr,
};
qtc.QFileDialog_SetDefaultSuffix(@ptrCast(self), suffix_str);
    }

    pub fn DefaultSuffix(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileDialog_DefaultSuffix(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.DefaultSuffix: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetHistory(self: ?*anyopaque, paths: []const u8) void {
        qtc.QFileDialog_SetHistory(@ptrCast(self), @ptrCast(paths));
    }

    pub fn History(self: ?*anyopaque, ) []const u8 {
        return qtc.QFileDialog_History(@ptrCast(self));
    }

    pub fn SetItemDelegate(self: ?*anyopaque, delegate: ?*anyopaque) void {
        qtc.QFileDialog_SetItemDelegate(@ptrCast(self), @ptrCast(delegate));
    }

    pub fn ItemDelegate(self: ?*anyopaque, ) QtC.QAbstractItemDelegate {
        return qtc.QFileDialog_ItemDelegate(@ptrCast(self));
    }

    pub fn SetIconProvider(self: ?*anyopaque, provider: ?*anyopaque) void {
        qtc.QFileDialog_SetIconProvider(@ptrCast(self), @ptrCast(provider));
    }

    pub fn IconProvider(self: ?*anyopaque, ) QtC.QAbstractFileIconProvider {
        return qtc.QFileDialog_IconProvider(@ptrCast(self));
    }

    pub fn SetLabelText(self: ?*anyopaque, label: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QFileDialog_SetLabelText(@ptrCast(self), @intCast(label), text_str);
    }

    pub fn LabelText(self: ?*anyopaque, label: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileDialog_LabelText(@ptrCast(self), @intCast(label));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.LabelText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSupportedSchemes(self: ?*anyopaque, schemes: []const u8) void {
        qtc.QFileDialog_SetSupportedSchemes(@ptrCast(self), @ptrCast(schemes));
    }

    pub fn SupportedSchemes(self: ?*anyopaque, ) []const u8 {
        return qtc.QFileDialog_SupportedSchemes(@ptrCast(self));
    }

    pub fn SetProxyModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QFileDialog_SetProxyModel(@ptrCast(self), @ptrCast(model));
    }

    pub fn ProxyModel(self: ?*anyopaque, ) QtC.QAbstractProxyModel {
        return qtc.QFileDialog_ProxyModel(@ptrCast(self));
    }

    pub fn SetOption(self: ?*anyopaque, option: i32) void {
        qtc.QFileDialog_SetOption(@ptrCast(self), @intCast(option));
    }

    pub fn TestOption(self: ?*anyopaque, option: i32) bool {
        return qtc.QFileDialog_TestOption(@ptrCast(self), @intCast(option));
    }

    pub fn SetOptions(self: ?*anyopaque, options: i32) void {
        qtc.QFileDialog_SetOptions(@ptrCast(self), @intCast(options));
    }

    pub fn Options(self: ?*anyopaque, ) i32 {
        return qtc.QFileDialog_Options(@ptrCast(self));
    }

    pub fn Open(self: ?*anyopaque, receiver: ?*anyopaque, member: []const u8) void {
        qtc.QFileDialog_Open(@ptrCast(self), @ptrCast(receiver), @ptrCast(member));
    }

    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QFileDialog_SetVisible(@ptrCast(self), visible);
    }

    /// Allows for overriding the related default method
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QFileDialog_OnSetVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QFileDialog_QBaseSetVisible(@ptrCast(self), visible);
    }

    pub fn FileSelected(self: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.libqt_string{
    .len = file.len,
    .data = file.ptr,
};
qtc.QFileDialog_FileSelected(@ptrCast(self), file_str);
    }

    pub fn OnFileSelected(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QFileDialog_Connect_FileSelected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FilesSelected(self: ?*anyopaque, files: []const u8) void {
        qtc.QFileDialog_FilesSelected(@ptrCast(self), @ptrCast(files));
    }

    pub fn OnFilesSelected(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QFileDialog_Connect_FilesSelected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CurrentChanged(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
qtc.QFileDialog_CurrentChanged(@ptrCast(self), path_str);
    }

    pub fn OnCurrentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QFileDialog_Connect_CurrentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DirectoryEntered(self: ?*anyopaque, directory: []const u8) void {
        const directory_str = qtc.libqt_string{
    .len = directory.len,
    .data = directory.ptr,
};
qtc.QFileDialog_DirectoryEntered(@ptrCast(self), directory_str);
    }

    pub fn OnDirectoryEntered(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QFileDialog_Connect_DirectoryEntered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn UrlSelected(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QFileDialog_UrlSelected(@ptrCast(self), @ptrCast(url));
    }

    pub fn OnUrlSelected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFileDialog_Connect_UrlSelected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn UrlsSelected(self: ?*anyopaque, urls: []const u8) void {
        qtc.QFileDialog_UrlsSelected(@ptrCast(self), @ptrCast(urls));
    }

    pub fn OnUrlsSelected(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QFileDialog_Connect_UrlsSelected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CurrentUrlChanged(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QFileDialog_CurrentUrlChanged(@ptrCast(self), @ptrCast(url));
    }

    pub fn OnCurrentUrlChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFileDialog_Connect_CurrentUrlChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DirectoryUrlEntered(self: ?*anyopaque, directory: ?*anyopaque) void {
        qtc.QFileDialog_DirectoryUrlEntered(@ptrCast(self), @ptrCast(directory));
    }

    pub fn OnDirectoryUrlEntered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFileDialog_Connect_DirectoryUrlEntered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FilterSelected(self: ?*anyopaque, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
qtc.QFileDialog_FilterSelected(@ptrCast(self), filter_str);
    }

    pub fn OnFilterSelected(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QFileDialog_Connect_FilterSelected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn GetOpenFileName(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileDialog_GetOpenFileName();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetOpenFileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetOpenFileUrl() QtC.QUrl {
        return qtc.QFileDialog_GetOpenFileUrl();
    }

    pub fn GetSaveFileName(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileDialog_GetSaveFileName();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetSaveFileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetSaveFileUrl() QtC.QUrl {
        return qtc.QFileDialog_GetSaveFileUrl();
    }

    pub fn GetExistingDirectory(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileDialog_GetExistingDirectory();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetExistingDirectory: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetExistingDirectoryUrl() QtC.QUrl {
        return qtc.QFileDialog_GetExistingDirectoryUrl();
    }

    pub fn GetOpenFileNames() []const u8 {
        return qtc.QFileDialog_GetOpenFileNames();
    }

    pub fn GetOpenFileUrls() []const u8 {
        return qtc.QFileDialog_GetOpenFileUrls();
    }

    pub fn SaveFileContent(fileContent: []u8, fileNameHint: []const u8) void {
        const fileContent_str = qtc.libqt_string{
    .len = fileContent.len,
    .data = fileContent.ptr,
};
const fileNameHint_str = qtc.libqt_string{
    .len = fileNameHint.len,
    .data = fileNameHint.ptr,
};
qtc.QFileDialog_SaveFileContent(fileContent_str, fileNameHint_str);
    }

    pub fn Done(self: ?*anyopaque, result: i32) void {
        qtc.QFileDialog_Done(@ptrCast(self), result);
    }

    /// Allows for overriding the related default method
    pub fn OnDone(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QFileDialog_OnDone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDone(self: ?*anyopaque, result: i32) void {
        qtc.QFileDialog_QBaseDone(@ptrCast(self), result);
    }

    pub fn Accept(self: ?*anyopaque, ) void {
        qtc.QFileDialog_Accept(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnAccept(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFileDialog_OnAccept(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAccept(self: ?*anyopaque, ) void {
        qtc.QFileDialog_QBaseAccept(@ptrCast(self));
    }

    pub fn ChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QFileDialog_ChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFileDialog_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QFileDialog_QBaseChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileDialog_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileDialog_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetOption2(self: ?*anyopaque, option: i32, on: bool) void {
        qtc.QFileDialog_SetOption2(@ptrCast(self), @intCast(option), on);
    }

    pub fn GetOpenFileName1(parent: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileDialog_GetOpenFileName1(@ptrCast(parent));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetOpenFileName1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetOpenFileName2(parent: ?*anyopaque, caption: []const u8, allocator: std.mem.Allocator) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const _str = qtc.QFileDialog_GetOpenFileName2(@ptrCast(parent), caption_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetOpenFileName2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetOpenFileName3(parent: ?*anyopaque, caption: []const u8, dir: []const u8, allocator: std.mem.Allocator) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const dir_str = qtc.libqt_string{
    .len = dir.len,
    .data = dir.ptr,
};
const _str = qtc.QFileDialog_GetOpenFileName3(@ptrCast(parent), caption_str, dir_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetOpenFileName3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetOpenFileName4(parent: ?*anyopaque, caption: []const u8, dir: []const u8, filter: []const u8, allocator: std.mem.Allocator) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const dir_str = qtc.libqt_string{
    .len = dir.len,
    .data = dir.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
const _str = qtc.QFileDialog_GetOpenFileName4(@ptrCast(parent), caption_str, dir_str, filter_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetOpenFileName4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetOpenFileName5(parent: ?*anyopaque, caption: []const u8, dir: []const u8, filter: []const u8, selectedFilter: []const u8, allocator: std.mem.Allocator) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const dir_str = qtc.libqt_string{
    .len = dir.len,
    .data = dir.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
const selectedFilter_str = qtc.libqt_string{
    .len = selectedFilter.len,
    .data = selectedFilter.ptr,
};
const _str = qtc.QFileDialog_GetOpenFileName5(@ptrCast(parent), caption_str, dir_str, filter_str, selectedFilter_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetOpenFileName5: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetOpenFileName6(parent: ?*anyopaque, caption: []const u8, dir: []const u8, filter: []const u8, selectedFilter: []const u8, options: i32, allocator: std.mem.Allocator) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const dir_str = qtc.libqt_string{
    .len = dir.len,
    .data = dir.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
const selectedFilter_str = qtc.libqt_string{
    .len = selectedFilter.len,
    .data = selectedFilter.ptr,
};
const _str = qtc.QFileDialog_GetOpenFileName6(@ptrCast(parent), caption_str, dir_str, filter_str, selectedFilter_str, @intCast(options));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetOpenFileName6: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetOpenFileUrl1(parent: ?*anyopaque) QtC.QUrl {
        return qtc.QFileDialog_GetOpenFileUrl1(@ptrCast(parent));
    }

    pub fn GetOpenFileUrl2(parent: ?*anyopaque, caption: []const u8) QtC.QUrl {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
return qtc.QFileDialog_GetOpenFileUrl2(@ptrCast(parent), caption_str);
    }

    pub fn GetOpenFileUrl3(parent: ?*anyopaque, caption: []const u8, dir: ?*anyopaque) QtC.QUrl {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
return qtc.QFileDialog_GetOpenFileUrl3(@ptrCast(parent), caption_str, @ptrCast(dir));
    }

    pub fn GetOpenFileUrl4(parent: ?*anyopaque, caption: []const u8, dir: ?*anyopaque, filter: []const u8) QtC.QUrl {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
return qtc.QFileDialog_GetOpenFileUrl4(@ptrCast(parent), caption_str, @ptrCast(dir), filter_str);
    }

    pub fn GetOpenFileUrl5(parent: ?*anyopaque, caption: []const u8, dir: ?*anyopaque, filter: []const u8, selectedFilter: []const u8) QtC.QUrl {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
const selectedFilter_str = qtc.libqt_string{
    .len = selectedFilter.len,
    .data = selectedFilter.ptr,
};
return qtc.QFileDialog_GetOpenFileUrl5(@ptrCast(parent), caption_str, @ptrCast(dir), filter_str, selectedFilter_str);
    }

    pub fn GetOpenFileUrl6(parent: ?*anyopaque, caption: []const u8, dir: ?*anyopaque, filter: []const u8, selectedFilter: []const u8, options: i32) QtC.QUrl {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
const selectedFilter_str = qtc.libqt_string{
    .len = selectedFilter.len,
    .data = selectedFilter.ptr,
};
return qtc.QFileDialog_GetOpenFileUrl6(@ptrCast(parent), caption_str, @ptrCast(dir), filter_str, selectedFilter_str, @intCast(options));
    }

    pub fn GetOpenFileUrl7(parent: ?*anyopaque, caption: []const u8, dir: ?*anyopaque, filter: []const u8, selectedFilter: []const u8, options: i32, supportedSchemes: []const u8) QtC.QUrl {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
const selectedFilter_str = qtc.libqt_string{
    .len = selectedFilter.len,
    .data = selectedFilter.ptr,
};
return qtc.QFileDialog_GetOpenFileUrl7(@ptrCast(parent), caption_str, @ptrCast(dir), filter_str, selectedFilter_str, @intCast(options), @ptrCast(supportedSchemes));
    }

    pub fn GetSaveFileName1(parent: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileDialog_GetSaveFileName1(@ptrCast(parent));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetSaveFileName1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetSaveFileName2(parent: ?*anyopaque, caption: []const u8, allocator: std.mem.Allocator) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const _str = qtc.QFileDialog_GetSaveFileName2(@ptrCast(parent), caption_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetSaveFileName2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetSaveFileName3(parent: ?*anyopaque, caption: []const u8, dir: []const u8, allocator: std.mem.Allocator) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const dir_str = qtc.libqt_string{
    .len = dir.len,
    .data = dir.ptr,
};
const _str = qtc.QFileDialog_GetSaveFileName3(@ptrCast(parent), caption_str, dir_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetSaveFileName3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetSaveFileName4(parent: ?*anyopaque, caption: []const u8, dir: []const u8, filter: []const u8, allocator: std.mem.Allocator) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const dir_str = qtc.libqt_string{
    .len = dir.len,
    .data = dir.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
const _str = qtc.QFileDialog_GetSaveFileName4(@ptrCast(parent), caption_str, dir_str, filter_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetSaveFileName4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetSaveFileName5(parent: ?*anyopaque, caption: []const u8, dir: []const u8, filter: []const u8, selectedFilter: []const u8, allocator: std.mem.Allocator) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const dir_str = qtc.libqt_string{
    .len = dir.len,
    .data = dir.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
const selectedFilter_str = qtc.libqt_string{
    .len = selectedFilter.len,
    .data = selectedFilter.ptr,
};
const _str = qtc.QFileDialog_GetSaveFileName5(@ptrCast(parent), caption_str, dir_str, filter_str, selectedFilter_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetSaveFileName5: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetSaveFileName6(parent: ?*anyopaque, caption: []const u8, dir: []const u8, filter: []const u8, selectedFilter: []const u8, options: i32, allocator: std.mem.Allocator) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const dir_str = qtc.libqt_string{
    .len = dir.len,
    .data = dir.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
const selectedFilter_str = qtc.libqt_string{
    .len = selectedFilter.len,
    .data = selectedFilter.ptr,
};
const _str = qtc.QFileDialog_GetSaveFileName6(@ptrCast(parent), caption_str, dir_str, filter_str, selectedFilter_str, @intCast(options));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetSaveFileName6: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetSaveFileUrl1(parent: ?*anyopaque) QtC.QUrl {
        return qtc.QFileDialog_GetSaveFileUrl1(@ptrCast(parent));
    }

    pub fn GetSaveFileUrl2(parent: ?*anyopaque, caption: []const u8) QtC.QUrl {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
return qtc.QFileDialog_GetSaveFileUrl2(@ptrCast(parent), caption_str);
    }

    pub fn GetSaveFileUrl3(parent: ?*anyopaque, caption: []const u8, dir: ?*anyopaque) QtC.QUrl {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
return qtc.QFileDialog_GetSaveFileUrl3(@ptrCast(parent), caption_str, @ptrCast(dir));
    }

    pub fn GetSaveFileUrl4(parent: ?*anyopaque, caption: []const u8, dir: ?*anyopaque, filter: []const u8) QtC.QUrl {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
return qtc.QFileDialog_GetSaveFileUrl4(@ptrCast(parent), caption_str, @ptrCast(dir), filter_str);
    }

    pub fn GetSaveFileUrl5(parent: ?*anyopaque, caption: []const u8, dir: ?*anyopaque, filter: []const u8, selectedFilter: []const u8) QtC.QUrl {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
const selectedFilter_str = qtc.libqt_string{
    .len = selectedFilter.len,
    .data = selectedFilter.ptr,
};
return qtc.QFileDialog_GetSaveFileUrl5(@ptrCast(parent), caption_str, @ptrCast(dir), filter_str, selectedFilter_str);
    }

    pub fn GetSaveFileUrl6(parent: ?*anyopaque, caption: []const u8, dir: ?*anyopaque, filter: []const u8, selectedFilter: []const u8, options: i32) QtC.QUrl {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
const selectedFilter_str = qtc.libqt_string{
    .len = selectedFilter.len,
    .data = selectedFilter.ptr,
};
return qtc.QFileDialog_GetSaveFileUrl6(@ptrCast(parent), caption_str, @ptrCast(dir), filter_str, selectedFilter_str, @intCast(options));
    }

    pub fn GetSaveFileUrl7(parent: ?*anyopaque, caption: []const u8, dir: ?*anyopaque, filter: []const u8, selectedFilter: []const u8, options: i32, supportedSchemes: []const u8) QtC.QUrl {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
const selectedFilter_str = qtc.libqt_string{
    .len = selectedFilter.len,
    .data = selectedFilter.ptr,
};
return qtc.QFileDialog_GetSaveFileUrl7(@ptrCast(parent), caption_str, @ptrCast(dir), filter_str, selectedFilter_str, @intCast(options), @ptrCast(supportedSchemes));
    }

    pub fn GetExistingDirectory1(parent: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileDialog_GetExistingDirectory1(@ptrCast(parent));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetExistingDirectory1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetExistingDirectory2(parent: ?*anyopaque, caption: []const u8, allocator: std.mem.Allocator) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const _str = qtc.QFileDialog_GetExistingDirectory2(@ptrCast(parent), caption_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetExistingDirectory2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetExistingDirectory3(parent: ?*anyopaque, caption: []const u8, dir: []const u8, allocator: std.mem.Allocator) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const dir_str = qtc.libqt_string{
    .len = dir.len,
    .data = dir.ptr,
};
const _str = qtc.QFileDialog_GetExistingDirectory3(@ptrCast(parent), caption_str, dir_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetExistingDirectory3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetExistingDirectory4(parent: ?*anyopaque, caption: []const u8, dir: []const u8, options: i32, allocator: std.mem.Allocator) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const dir_str = qtc.libqt_string{
    .len = dir.len,
    .data = dir.ptr,
};
const _str = qtc.QFileDialog_GetExistingDirectory4(@ptrCast(parent), caption_str, dir_str, @intCast(options));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledialog.GetExistingDirectory4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GetExistingDirectoryUrl1(parent: ?*anyopaque) QtC.QUrl {
        return qtc.QFileDialog_GetExistingDirectoryUrl1(@ptrCast(parent));
    }

    pub fn GetExistingDirectoryUrl2(parent: ?*anyopaque, caption: []const u8) QtC.QUrl {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
return qtc.QFileDialog_GetExistingDirectoryUrl2(@ptrCast(parent), caption_str);
    }

    pub fn GetExistingDirectoryUrl3(parent: ?*anyopaque, caption: []const u8, dir: ?*anyopaque) QtC.QUrl {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
return qtc.QFileDialog_GetExistingDirectoryUrl3(@ptrCast(parent), caption_str, @ptrCast(dir));
    }

    pub fn GetExistingDirectoryUrl4(parent: ?*anyopaque, caption: []const u8, dir: ?*anyopaque, options: i32) QtC.QUrl {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
return qtc.QFileDialog_GetExistingDirectoryUrl4(@ptrCast(parent), caption_str, @ptrCast(dir), @intCast(options));
    }

    pub fn GetExistingDirectoryUrl5(parent: ?*anyopaque, caption: []const u8, dir: ?*anyopaque, options: i32, supportedSchemes: []const u8) QtC.QUrl {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
return qtc.QFileDialog_GetExistingDirectoryUrl5(@ptrCast(parent), caption_str, @ptrCast(dir), @intCast(options), @ptrCast(supportedSchemes));
    }

    pub fn GetOpenFileNames1(parent: ?*anyopaque) []const u8 {
        return qtc.QFileDialog_GetOpenFileNames1(@ptrCast(parent));
    }

    pub fn GetOpenFileNames2(parent: ?*anyopaque, caption: []const u8) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
return qtc.QFileDialog_GetOpenFileNames2(@ptrCast(parent), caption_str);
    }

    pub fn GetOpenFileNames3(parent: ?*anyopaque, caption: []const u8, dir: []const u8) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const dir_str = qtc.libqt_string{
    .len = dir.len,
    .data = dir.ptr,
};
return qtc.QFileDialog_GetOpenFileNames3(@ptrCast(parent), caption_str, dir_str);
    }

    pub fn GetOpenFileNames4(parent: ?*anyopaque, caption: []const u8, dir: []const u8, filter: []const u8) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const dir_str = qtc.libqt_string{
    .len = dir.len,
    .data = dir.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
return qtc.QFileDialog_GetOpenFileNames4(@ptrCast(parent), caption_str, dir_str, filter_str);
    }

    pub fn GetOpenFileNames5(parent: ?*anyopaque, caption: []const u8, dir: []const u8, filter: []const u8, selectedFilter: []const u8) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const dir_str = qtc.libqt_string{
    .len = dir.len,
    .data = dir.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
const selectedFilter_str = qtc.libqt_string{
    .len = selectedFilter.len,
    .data = selectedFilter.ptr,
};
return qtc.QFileDialog_GetOpenFileNames5(@ptrCast(parent), caption_str, dir_str, filter_str, selectedFilter_str);
    }

    pub fn GetOpenFileNames6(parent: ?*anyopaque, caption: []const u8, dir: []const u8, filter: []const u8, selectedFilter: []const u8, options: i32) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const dir_str = qtc.libqt_string{
    .len = dir.len,
    .data = dir.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
const selectedFilter_str = qtc.libqt_string{
    .len = selectedFilter.len,
    .data = selectedFilter.ptr,
};
return qtc.QFileDialog_GetOpenFileNames6(@ptrCast(parent), caption_str, dir_str, filter_str, selectedFilter_str, @intCast(options));
    }

    pub fn GetOpenFileUrls1(parent: ?*anyopaque) []const u8 {
        return qtc.QFileDialog_GetOpenFileUrls1(@ptrCast(parent));
    }

    pub fn GetOpenFileUrls2(parent: ?*anyopaque, caption: []const u8) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
return qtc.QFileDialog_GetOpenFileUrls2(@ptrCast(parent), caption_str);
    }

    pub fn GetOpenFileUrls3(parent: ?*anyopaque, caption: []const u8, dir: ?*anyopaque) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
return qtc.QFileDialog_GetOpenFileUrls3(@ptrCast(parent), caption_str, @ptrCast(dir));
    }

    pub fn GetOpenFileUrls4(parent: ?*anyopaque, caption: []const u8, dir: ?*anyopaque, filter: []const u8) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
return qtc.QFileDialog_GetOpenFileUrls4(@ptrCast(parent), caption_str, @ptrCast(dir), filter_str);
    }

    pub fn GetOpenFileUrls5(parent: ?*anyopaque, caption: []const u8, dir: ?*anyopaque, filter: []const u8, selectedFilter: []const u8) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
const selectedFilter_str = qtc.libqt_string{
    .len = selectedFilter.len,
    .data = selectedFilter.ptr,
};
return qtc.QFileDialog_GetOpenFileUrls5(@ptrCast(parent), caption_str, @ptrCast(dir), filter_str, selectedFilter_str);
    }

    pub fn GetOpenFileUrls6(parent: ?*anyopaque, caption: []const u8, dir: ?*anyopaque, filter: []const u8, selectedFilter: []const u8, options: i32) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
const selectedFilter_str = qtc.libqt_string{
    .len = selectedFilter.len,
    .data = selectedFilter.ptr,
};
return qtc.QFileDialog_GetOpenFileUrls6(@ptrCast(parent), caption_str, @ptrCast(dir), filter_str, selectedFilter_str, @intCast(options));
    }

    pub fn GetOpenFileUrls7(parent: ?*anyopaque, caption: []const u8, dir: ?*anyopaque, filter: []const u8, selectedFilter: []const u8, options: i32, supportedSchemes: []const u8) []const u8 {
        const caption_str = qtc.libqt_string{
    .len = caption.len,
    .data = caption.ptr,
};
const filter_str = qtc.libqt_string{
    .len = filter.len,
    .data = filter.ptr,
};
const selectedFilter_str = qtc.libqt_string{
    .len = selectedFilter.len,
    .data = selectedFilter.ptr,
};
return qtc.QFileDialog_GetOpenFileUrls7(@ptrCast(parent), caption_str, @ptrCast(dir), filter_str, selectedFilter_str, @intCast(options), @ptrCast(supportedSchemes));
    }

    pub fn SaveFileContent3(fileContent: []u8, fileNameHint: []const u8, parent: ?*anyopaque) void {
        const fileContent_str = qtc.libqt_string{
    .len = fileContent.len,
    .data = fileContent.ptr,
};
const fileNameHint_str = qtc.libqt_string{
    .len = fileNameHint.len,
    .data = fileNameHint.ptr,
};
qtc.QFileDialog_SaveFileContent3(fileContent_str, fileNameHint_str, @ptrCast(parent));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFileDialog_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/filedialog.html#types
pub const enums = struct {
    pub const ViewMode = enum {
        pub const Detail: i32 = 0;
        pub const List: i32 = 1;
    };

    pub const FileMode = enum {
        pub const AnyFile: i32 = 0;
        pub const ExistingFile: i32 = 1;
        pub const Directory: i32 = 2;
        pub const ExistingFiles: i32 = 3;
    };

    pub const AcceptMode = enum {
        pub const AcceptOpen: i32 = 0;
        pub const AcceptSave: i32 = 1;
    };

    pub const DialogLabel = enum {
        pub const LookIn: i32 = 0;
        pub const FileName: i32 = 1;
        pub const FileType: i32 = 2;
        pub const Accept: i32 = 3;
        pub const Reject: i32 = 4;
    };

    pub const Option = enum {
        pub const ShowDirsOnly: i32 = 1;
        pub const DontResolveSymlinks: i32 = 2;
        pub const DontConfirmOverwrite: i32 = 4;
        pub const DontUseNativeDialog: i32 = 8;
        pub const ReadOnly: i32 = 16;
        pub const HideNameFilterDetails: i32 = 32;
        pub const DontUseCustomDirectoryIcons: i32 = 64;
    };

};
