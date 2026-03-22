const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qfilesystemmodel.html
pub const qfilesystemmodel = struct {

    /// New constructs a new QFileSystemModel object.
    pub fn New() QtC.QFileSystemModel {
        return qtc.QFileSystemModel_new();
    }


    /// New2 constructs a new QFileSystemModel object.
    pub fn New2(parent: ?*anyopaque) QtC.QFileSystemModel {
        return qtc.QFileSystemModel_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileSystemModel_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfilesystemmodel.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn RootPathChanged(self: ?*anyopaque, newPath: []const u8) void {
        const newPath_str = qtc.libqt_string{
    .len = newPath.len,
    .data = newPath.ptr,
};
qtc.QFileSystemModel_RootPathChanged(@ptrCast(self), newPath_str);
    }

    pub fn OnRootPathChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QFileSystemModel_Connect_RootPathChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FileRenamed(self: ?*anyopaque, path: []const u8, oldName: []const u8, newName: []const u8) void {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
const oldName_str = qtc.libqt_string{
    .len = oldName.len,
    .data = oldName.ptr,
};
const newName_str = qtc.libqt_string{
    .len = newName.len,
    .data = newName.ptr,
};
qtc.QFileSystemModel_FileRenamed(@ptrCast(self), path_str, oldName_str, newName_str);
    }

    pub fn OnFileRenamed(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QFileSystemModel_Connect_FileRenamed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DirectoryLoaded(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
qtc.QFileSystemModel_DirectoryLoaded(@ptrCast(self), path_str);
    }

    pub fn OnDirectoryLoaded(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QFileSystemModel_Connect_DirectoryLoaded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Index(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QFileSystemModel_Index(@ptrCast(self), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QFileSystemModel_OnIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIndex(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QFileSystemModel_QBaseIndex(@ptrCast(self), row, column, @ptrCast(parent));
    }

    pub fn Index2(self: ?*anyopaque, path: []const u8) QtC.QModelIndex {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QFileSystemModel_Index2(@ptrCast(self), path_str);
    }

    pub fn Parent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.QFileSystemModel_Parent(@ptrCast(self), @ptrCast(child));
    }

    /// Allows for overriding the related default method
    pub fn OnParent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QFileSystemModel_OnParent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseParent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.QFileSystemModel_QBaseParent(@ptrCast(self), @ptrCast(child));
    }

    pub fn Sibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QFileSystemModel_Sibling(@ptrCast(self), row, column, @ptrCast(idx));
    }

    /// Allows for overriding the related default method
    pub fn OnSibling(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QFileSystemModel_OnSibling(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QFileSystemModel_QBaseSibling(@ptrCast(self), row, column, @ptrCast(idx));
    }

    pub fn HasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QFileSystemModel_HasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnHasChildren(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QFileSystemModel_OnHasChildren(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QFileSystemModel_QBaseHasChildren(@ptrCast(self), @ptrCast(parent));
    }

    pub fn CanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QFileSystemModel_CanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnCanFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QFileSystemModel_OnCanFetchMore(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QFileSystemModel_QBaseCanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    pub fn FetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QFileSystemModel_FetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFileSystemModel_OnFetchMore(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QFileSystemModel_QBaseFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    pub fn RowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QFileSystemModel_RowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnRowCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QFileSystemModel_OnRowCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QFileSystemModel_QBaseRowCount(@ptrCast(self), @ptrCast(parent));
    }

    pub fn ColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QFileSystemModel_ColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnColumnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QFileSystemModel_OnColumnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QFileSystemModel_QBaseColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    pub fn MyComputer(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QFileSystemModel_MyComputer(@ptrCast(self));
    }

    pub fn Data(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QFileSystemModel_Data(@ptrCast(self), @ptrCast(index), role);
    }

    /// Allows for overriding the related default method
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QFileSystemModel_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseData(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QFileSystemModel_QBaseData(@ptrCast(self), @ptrCast(index), role);
    }

    pub fn SetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QFileSystemModel_SetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), role);
    }

    /// Allows for overriding the related default method
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QFileSystemModel_OnSetData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QFileSystemModel_QBaseSetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), role);
    }

    pub fn HeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QFileSystemModel_HeaderData(@ptrCast(self), section, @intCast(orientation), role);
    }

    /// Allows for overriding the related default method
    pub fn OnHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) QtC.QVariant) void {
        qtc.QFileSystemModel_OnHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QFileSystemModel_QBaseHeaderData(@ptrCast(self), section, @intCast(orientation), role);
    }

    pub fn Flags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QFileSystemModel_Flags(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    pub fn OnFlags(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QFileSystemModel_OnFlags(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFlags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QFileSystemModel_QBaseFlags(@ptrCast(self), @ptrCast(index));
    }

    pub fn Sort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QFileSystemModel_Sort(@ptrCast(self), column, @intCast(order));
    }

    /// Allows for overriding the related default method
    pub fn OnSort(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QFileSystemModel_OnSort(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QFileSystemModel_QBaseSort(@ptrCast(self), column, @intCast(order));
    }

    pub fn MimeTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QFileSystemModel_MimeTypes(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMimeTypes(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QFileSystemModel_OnMimeTypes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMimeTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QFileSystemModel_QBaseMimeTypes(@ptrCast(self));
    }

    pub fn MimeData(self: ?*anyopaque, indexes: []const u8) QtC.QMimeData {
        return qtc.QFileSystemModel_MimeData(@ptrCast(self), @ptrCast(indexes));
    }

    /// Allows for overriding the related default method
    pub fn OnMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QMimeData) void {
        qtc.QFileSystemModel_OnMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMimeData(self: ?*anyopaque, indexes: []const u8) QtC.QMimeData {
        return qtc.QFileSystemModel_QBaseMimeData(@ptrCast(self), @ptrCast(indexes));
    }

    pub fn DropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QFileSystemModel_DropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QFileSystemModel_OnDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QFileSystemModel_QBaseDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), row, column, @ptrCast(parent));
    }

    pub fn SupportedDropActions(self: ?*anyopaque, ) i32 {
        return qtc.QFileSystemModel_SupportedDropActions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportedDropActions(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QFileSystemModel_OnSupportedDropActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportedDropActions(self: ?*anyopaque, ) i32 {
        return qtc.QFileSystemModel_QBaseSupportedDropActions(@ptrCast(self));
    }

    pub fn RoleNames(self: ?*anyopaque, ) QHash<int, QByteArray> {
        return qtc.QFileSystemModel_RoleNames(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRoleNames(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QHash<int, QByteArray>) void {
        qtc.QFileSystemModel_OnRoleNames(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRoleNames(self: ?*anyopaque, ) QHash<int, QByteArray> {
        return qtc.QFileSystemModel_QBaseRoleNames(@ptrCast(self));
    }

    pub fn SetRootPath(self: ?*anyopaque, path: []const u8) QtC.QModelIndex {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QFileSystemModel_SetRootPath(@ptrCast(self), path_str);
    }

    pub fn RootPath(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileSystemModel_RootPath(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfilesystemmodel.RootPath: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn RootDirectory(self: ?*anyopaque, ) QtC.QDir {
        return qtc.QFileSystemModel_RootDirectory(@ptrCast(self));
    }

    pub fn SetIconProvider(self: ?*anyopaque, provider: ?*anyopaque) void {
        qtc.QFileSystemModel_SetIconProvider(@ptrCast(self), @ptrCast(provider));
    }

    pub fn IconProvider(self: ?*anyopaque, ) QtC.QAbstractFileIconProvider {
        return qtc.QFileSystemModel_IconProvider(@ptrCast(self));
    }

    pub fn SetFilter(self: ?*anyopaque, filters: i32) void {
        qtc.QFileSystemModel_SetFilter(@ptrCast(self), @intCast(filters));
    }

    pub fn Filter(self: ?*anyopaque, ) i32 {
        return qtc.QFileSystemModel_Filter(@ptrCast(self));
    }

    pub fn SetResolveSymlinks(self: ?*anyopaque, enable: bool) void {
        qtc.QFileSystemModel_SetResolveSymlinks(@ptrCast(self), enable);
    }

    pub fn ResolveSymlinks(self: ?*anyopaque, ) bool {
        return qtc.QFileSystemModel_ResolveSymlinks(@ptrCast(self));
    }

    pub fn SetReadOnly(self: ?*anyopaque, enable: bool) void {
        qtc.QFileSystemModel_SetReadOnly(@ptrCast(self), enable);
    }

    pub fn IsReadOnly(self: ?*anyopaque, ) bool {
        return qtc.QFileSystemModel_IsReadOnly(@ptrCast(self));
    }

    pub fn SetNameFilterDisables(self: ?*anyopaque, enable: bool) void {
        qtc.QFileSystemModel_SetNameFilterDisables(@ptrCast(self), enable);
    }

    pub fn NameFilterDisables(self: ?*anyopaque, ) bool {
        return qtc.QFileSystemModel_NameFilterDisables(@ptrCast(self));
    }

    pub fn SetNameFilters(self: ?*anyopaque, filters: []const u8) void {
        qtc.QFileSystemModel_SetNameFilters(@ptrCast(self), @ptrCast(filters));
    }

    pub fn NameFilters(self: ?*anyopaque, ) []const u8 {
        return qtc.QFileSystemModel_NameFilters(@ptrCast(self));
    }

    pub fn SetOption(self: ?*anyopaque, option: i32) void {
        qtc.QFileSystemModel_SetOption(@ptrCast(self), @intCast(option));
    }

    pub fn TestOption(self: ?*anyopaque, option: i32) bool {
        return qtc.QFileSystemModel_TestOption(@ptrCast(self), @intCast(option));
    }

    pub fn SetOptions(self: ?*anyopaque, options: i32) void {
        qtc.QFileSystemModel_SetOptions(@ptrCast(self), @intCast(options));
    }

    pub fn Options(self: ?*anyopaque, ) i32 {
        return qtc.QFileSystemModel_Options(@ptrCast(self));
    }

    pub fn FilePath(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileSystemModel_FilePath(@ptrCast(self), @ptrCast(index));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfilesystemmodel.FilePath: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsDir(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QFileSystemModel_IsDir(@ptrCast(self), @ptrCast(index));
    }

    pub fn Size(self: ?*anyopaque, index: ?*anyopaque) i64 {
        return qtc.QFileSystemModel_Size(@ptrCast(self), @ptrCast(index));
    }

    pub fn Type(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileSystemModel_Type(@ptrCast(self), @ptrCast(index));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfilesystemmodel.Type: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn LastModified(self: ?*anyopaque, index: ?*anyopaque) QtC.QDateTime {
        return qtc.QFileSystemModel_LastModified(@ptrCast(self), @ptrCast(index));
    }

    pub fn LastModified2(self: ?*anyopaque, index: ?*anyopaque, tz: ?*anyopaque) QtC.QDateTime {
        return qtc.QFileSystemModel_LastModified2(@ptrCast(self), @ptrCast(index), @ptrCast(tz));
    }

    pub fn Mkdir(self: ?*anyopaque, parent: ?*anyopaque, name: []const u8) QtC.QModelIndex {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QFileSystemModel_Mkdir(@ptrCast(self), @ptrCast(parent), name_str);
    }

    pub fn Rmdir(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QFileSystemModel_Rmdir(@ptrCast(self), @ptrCast(index));
    }

    pub fn FileName(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileSystemModel_FileName(@ptrCast(self), @ptrCast(index));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfilesystemmodel.FileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FileIcon(self: ?*anyopaque, index: ?*anyopaque) QtC.QIcon {
        return qtc.QFileSystemModel_FileIcon(@ptrCast(self), @ptrCast(index));
    }

    pub fn Permissions(self: ?*anyopaque, index: ?*anyopaque) QFile::Permissions {
        return qtc.QFileSystemModel_Permissions(@ptrCast(self), @ptrCast(index));
    }

    pub fn FileInfo(self: ?*anyopaque, index: ?*anyopaque) QtC.QFileInfo {
        return qtc.QFileSystemModel_FileInfo(@ptrCast(self), @ptrCast(index));
    }

    pub fn Remove(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QFileSystemModel_Remove(@ptrCast(self), @ptrCast(index));
    }

    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QFileSystemModel_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFileSystemModel_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QFileSystemModel_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QFileSystemModel_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QFileSystemModel_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QFileSystemModel_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileSystemModel_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfilesystemmodel.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileSystemModel_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfilesystemmodel.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Index22(self: ?*anyopaque, path: []const u8, column: i32) QtC.QModelIndex {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QFileSystemModel_Index22(@ptrCast(self), path_str, column);
    }

    pub fn MyComputer1(self: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QFileSystemModel_MyComputer1(@ptrCast(self), role);
    }

    pub fn SetOption2(self: ?*anyopaque, option: i32, on: bool) void {
        qtc.QFileSystemModel_SetOption2(@ptrCast(self), @intCast(option), on);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFileSystemModel_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/filesystemmodel.html#types
pub const enums = struct {
};
