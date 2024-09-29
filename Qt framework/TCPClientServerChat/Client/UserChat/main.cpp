#include <QApplication>
#include "userchat.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    userchat w;
    w.show();

    return app.exec();
}
