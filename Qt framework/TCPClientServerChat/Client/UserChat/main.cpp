#include <QApplication>
#include "userChat.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    userChat w;
    w.show();

    return app.exec();
}
