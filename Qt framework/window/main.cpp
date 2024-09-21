#include "window.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    window w;
    w.show();
    window w1(500,400);
    w1.show();

    return app.exec();
}
