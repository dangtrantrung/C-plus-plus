#include "window.h"
#include <QApplication>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QString locale=QLocale::system().name().section('_',0,0);
    QTranslator translator;
    translator.load(QString("qt_"))+locale,QLibraryInfo::location(QLibraryInfo::TranslationsPath);
    app.installTranslator(&translator);
    window w;
    w.show();
    window w1(500,400);
    w1.show();

    return app.exec();
}
