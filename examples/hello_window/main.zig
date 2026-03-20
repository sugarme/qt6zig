const qt6 = @import("qt6zig");
const qapplication = qt6.qapplication;
const qwidget = qt6.qwidget;

pub fn main() !void {
    const dummy_arg: [*:0]u8 = @constCast(@ptrCast("qt6zig"));
    var argv = [_][*:0]u8{dummy_arg};
    const app = qapplication.New(1, &argv);
    defer qapplication.QDelete(app);

    const window = qwidget.New2();
    qwidget.SetWindowTitle(window, "Hello Qt6 from Zig!");
    qwidget.SetFixedSize2(window, 400, 300);
    qwidget.Move(window, 200, 200);
    qwidget.ShowNormal(window);

    _ = qapplication.Exec();
}
