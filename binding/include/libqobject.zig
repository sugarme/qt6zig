const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qobjectdata.html
pub const qobjectdata = struct {

    /// New constructs a new QObjectData object.
    pub fn New() QtC.QObjectData {
        return qtc.QObjectData_new();
    }


    pub fn QPtr(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QObjectData_QPtr(@ptrCast(self));
    }

    pub fn SetQPtr(self: ?*anyopaque, q_ptr: ?*anyopaque) void {
        qtc.QObjectData_SetQPtr(@ptrCast(self), @ptrCast(q_ptr));
    }

    pub fn Parent(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QObjectData_Parent(@ptrCast(self));
    }

    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObjectData_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    pub fn Children(self: ?*anyopaque, ) []const u8 {
        return qtc.QObjectData_Children(@ptrCast(self));
    }

    pub fn SetChildren(self: ?*anyopaque, children: []const u8) void {
        qtc.QObjectData_SetChildren(@ptrCast(self), children);
    }

    pub fn IsWidget(self: ?*anyopaque, ) u32 {
        return qtc.QObjectData_IsWidget(@ptrCast(self));
    }

    pub fn SetIsWidget(self: ?*anyopaque, isWidget: u32) void {
        qtc.QObjectData_SetIsWidget(@ptrCast(self), isWidget);
    }

    pub fn BlockSig(self: ?*anyopaque, ) u32 {
        return qtc.QObjectData_BlockSig(@ptrCast(self));
    }

    pub fn SetBlockSig(self: ?*anyopaque, blockSig: u32) void {
        qtc.QObjectData_SetBlockSig(@ptrCast(self), blockSig);
    }

    pub fn WasDeleted(self: ?*anyopaque, ) u32 {
        return qtc.QObjectData_WasDeleted(@ptrCast(self));
    }

    pub fn SetWasDeleted(self: ?*anyopaque, wasDeleted: u32) void {
        qtc.QObjectData_SetWasDeleted(@ptrCast(self), wasDeleted);
    }

    pub fn IsDeletingChildren(self: ?*anyopaque, ) u32 {
        return qtc.QObjectData_IsDeletingChildren(@ptrCast(self));
    }

    pub fn SetIsDeletingChildren(self: ?*anyopaque, isDeletingChildren: u32) void {
        qtc.QObjectData_SetIsDeletingChildren(@ptrCast(self), isDeletingChildren);
    }

    pub fn SendChildEvents(self: ?*anyopaque, ) u32 {
        return qtc.QObjectData_SendChildEvents(@ptrCast(self));
    }

    pub fn SetSendChildEvents(self: ?*anyopaque, sendChildEvents: u32) void {
        qtc.QObjectData_SetSendChildEvents(@ptrCast(self), sendChildEvents);
    }

    pub fn ReceiveChildEvents(self: ?*anyopaque, ) u32 {
        return qtc.QObjectData_ReceiveChildEvents(@ptrCast(self));
    }

    pub fn SetReceiveChildEvents(self: ?*anyopaque, receiveChildEvents: u32) void {
        qtc.QObjectData_SetReceiveChildEvents(@ptrCast(self), receiveChildEvents);
    }

    pub fn IsWindow(self: ?*anyopaque, ) u32 {
        return qtc.QObjectData_IsWindow(@ptrCast(self));
    }

    pub fn SetIsWindow(self: ?*anyopaque, isWindow: u32) void {
        qtc.QObjectData_SetIsWindow(@ptrCast(self), isWindow);
    }

    pub fn DeleteLaterCalled(self: ?*anyopaque, ) u32 {
        return qtc.QObjectData_DeleteLaterCalled(@ptrCast(self));
    }

    pub fn SetDeleteLaterCalled(self: ?*anyopaque, deleteLaterCalled: u32) void {
        qtc.QObjectData_SetDeleteLaterCalled(@ptrCast(self), deleteLaterCalled);
    }

    pub fn IsQuickItem(self: ?*anyopaque, ) u32 {
        return qtc.QObjectData_IsQuickItem(@ptrCast(self));
    }

    pub fn SetIsQuickItem(self: ?*anyopaque, isQuickItem: u32) void {
        qtc.QObjectData_SetIsQuickItem(@ptrCast(self), isQuickItem);
    }

    pub fn WillBeWidget(self: ?*anyopaque, ) u32 {
        return qtc.QObjectData_WillBeWidget(@ptrCast(self));
    }

    pub fn SetWillBeWidget(self: ?*anyopaque, willBeWidget: u32) void {
        qtc.QObjectData_SetWillBeWidget(@ptrCast(self), willBeWidget);
    }

    pub fn WasWidget(self: ?*anyopaque, ) u32 {
        return qtc.QObjectData_WasWidget(@ptrCast(self));
    }

    pub fn SetWasWidget(self: ?*anyopaque, wasWidget: u32) void {
        qtc.QObjectData_SetWasWidget(@ptrCast(self), wasWidget);
    }

    pub fn ReceiveParentEvents(self: ?*anyopaque, ) u32 {
        return qtc.QObjectData_ReceiveParentEvents(@ptrCast(self));
    }

    pub fn SetReceiveParentEvents(self: ?*anyopaque, receiveParentEvents: u32) void {
        qtc.QObjectData_SetReceiveParentEvents(@ptrCast(self), receiveParentEvents);
    }

    pub fn Unused(self: ?*anyopaque, ) u32 {
        return qtc.QObjectData_Unused(@ptrCast(self));
    }

    pub fn SetUnused(self: ?*anyopaque, unused: u32) void {
        qtc.QObjectData_SetUnused(@ptrCast(self), unused);
    }

    pub fn BindingStorage(self: ?*anyopaque, ) QtC.QBindingStorage {
        return qtc.QObjectData_BindingStorage(@ptrCast(self));
    }

    pub fn SetBindingStorage(self: ?*anyopaque, bindingStorage: QtC.QBindingStorage) void {
        qtc.QObjectData_SetBindingStorage(@ptrCast(self), @ptrCast(bindingStorage));
    }

    pub fn DynamicMetaObject(self: ?*anyopaque, ) QtC.QMetaObject {
        return qtc.QObjectData_DynamicMetaObject(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QObjectData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qobject.html
pub const qobject = struct {

    /// New constructs a new QObject object.
    pub fn New() QtC.QObject {
        return qtc.QObject_new();
    }


    /// New2 constructs a new QObject object.
    pub fn New2(parent: ?*anyopaque) QtC.QObject {
        return qtc.QObject_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qobject.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QObject_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QObject_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    pub fn ObjectName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qobject.ObjectName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsWidgetType(self: ?*anyopaque, ) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    pub fn IsWindowType(self: ?*anyopaque, ) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    pub fn IsQuickItemType(self: ?*anyopaque, ) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    pub fn SignalsBlocked(self: ?*anyopaque, ) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    pub fn Thread(self: ?*anyopaque, ) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), interval);
    }

    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), id);
    }

    pub fn Children(self: ?*anyopaque, ) []const u8 {
        return @ptrCast(qtc.QObject_Children(@ptrCast(self)));
    }

    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    pub fn Disconnect(sender: ?*anyopaque, signal: []const u8, receiver: ?*anyopaque, member: []const u8) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    pub fn Disconnect3(self: ?*anyopaque, ) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    pub fn DumpObjectTree(self: ?*anyopaque, ) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    pub fn DumpObjectInfo(self: ?*anyopaque, ) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        return qtc.QObject_SetProperty(@ptrCast(self), @ptrCast(name), @ptrCast(value));
    }

    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        return qtc.QObject_Property(@ptrCast(self), @ptrCast(name));
    }

    pub fn DynamicPropertyNames(self: ?*anyopaque, ) []const u8 {
        return qtc.QObject_DynamicPropertyNames(@ptrCast(self));
    }

    pub fn BindingStorage(self: ?*anyopaque, ) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    pub fn BindingStorage2(self: ?*anyopaque, ) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    pub fn Destroyed(self: ?*anyopaque, ) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Parent(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        return qtc.QObject_Inherits(@ptrCast(self), @ptrCast(classname));
    }

    pub fn DeleteLater(self: ?*anyopaque, ) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    pub fn Sender(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QObject_Sender(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSender(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QObject) void {
        qtc.QObject_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSender(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QObject_QBaseSender(@ptrCast(self));
    }

    pub fn SenderSignalIndex(self: ?*anyopaque, ) i32 {
        return qtc.QObject_SenderSignalIndex(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QObject_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque, ) i32 {
        return qtc.QObject_QBaseSenderSignalIndex(@ptrCast(self));
    }

    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        return qtc.QObject_Receivers(@ptrCast(self), @ptrCast(signal));
    }

    /// Allows for overriding the related default method
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QObject_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        return qtc.QObject_QBaseReceivers(@ptrCast(self), @ptrCast(signal));
    }

    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QObject_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Allows for overriding the related default method
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QObject_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QObject_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QObject_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QObject_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QObject_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QObject_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QObject_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QObject_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QObject_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Allows for overriding the related default method
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QObject_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QObject_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Allows for overriding the related default method
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QObject_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qobject.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qobject.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), interval, @intCast(timerType));
    }

    pub fn Disconnect1(self: ?*anyopaque, signal: []const u8) bool {
        return qtc.QObject_Disconnect1(@ptrCast(self), @ptrCast(signal));
    }

    pub fn Disconnect22(self: ?*anyopaque, signal: []const u8, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect22(@ptrCast(self), @ptrCast(signal), @ptrCast(receiver));
    }

    pub fn Disconnect32(self: ?*anyopaque, signal: []const u8, receiver: ?*anyopaque, member: []const u8) bool {
        return qtc.QObject_Disconnect32(@ptrCast(self), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: []const u8) bool {
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), @ptrCast(member));
    }

    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn OnobjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_objectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QObject_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsignalblocker.html
pub const qsignalblocker = struct {

    /// New constructs a new QSignalBlocker object.
    pub fn New(o: ?*anyopaque) QtC.QSignalBlocker {
        return qtc.QSignalBlocker_new(@ptrCast(o));
    }


    /// New2 constructs a new QSignalBlocker object.
    pub fn New2(o: ?*anyopaque) QtC.QSignalBlocker {
        return qtc.QSignalBlocker_new2(@ptrCast(o));
    }


    pub fn Reblock(self: ?*anyopaque, ) void {
        qtc.QSignalBlocker_Reblock(@ptrCast(self));
    }

    pub fn Unblock(self: ?*anyopaque, ) void {
        qtc.QSignalBlocker_Unblock(@ptrCast(self));
    }

    pub fn Dismiss(self: ?*anyopaque, ) void {
        qtc.QSignalBlocker_Dismiss(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSignalBlocker_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/object.html#types
pub const enums = struct {
};
