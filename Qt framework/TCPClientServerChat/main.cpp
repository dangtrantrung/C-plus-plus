#include <QApplication>
#include "server.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    server s;
    s.show();


    return app.exec();
}
