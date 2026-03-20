const std = @import("std");
const qt6 = @import("qt6zig");
const qapplication = qt6.qapplication;
const qpushbutton = qt6.qpushbutton;
const qwidget = qt6.qwidget;

pub fn main() !void {
    qt6.registerPlatformPlugins();

    const dummy_arg: [*:0]u8 = @constCast(@ptrCast("qt6zig"));
    var argv = [_][*:0]u8{dummy_arg};
    const app = qapplication.New(1, &argv);
    defer qapplication.QDelete(app);

    // Create a main window
    const window = qwidget.New2();
    qwidget.SetWindowTitle(window, "Simple Qt6 App");
    qwidget.Resize(window, 600, 400);

    // Create a few buttons
    const btn_hello = qpushbutton.New5("Say Hello", window);
    qpushbutton.SetGeometry(btn_hello, 50, 50, 150, 40);
    qpushbutton.OnClicked(btn_hello, &onHelloClicked);

    const btn_count = qpushbutton.New5("Count", window);
    qpushbutton.SetGeometry(btn_count, 50, 110, 150, 40);
    qpushbutton.OnClicked(btn_count, &onCountClicked);

    const btn_quit = qpushbutton.New5("Quit", window);
    qpushbutton.SetGeometry(btn_quit, 50, 170, 150, 40);
    qpushbutton.OnClicked(btn_quit, &onQuitClicked);

    qwidget.Show(window);
    _ = qapplication.Exec();
}

var click_count: u32 = 0;

fn onHelloClicked(_: ?*anyopaque) callconv(.c) void {
    std.debug.print("Hello from Zig + Qt6!\n", .{});
}

fn onCountClicked(_: ?*anyopaque) callconv(.c) void {
    click_count += 1;
    std.debug.print("Click count: {d}\n", .{click_count});
}

fn onQuitClicked(_: ?*anyopaque) callconv(.c) void {
    qapplication.Quit();
}
