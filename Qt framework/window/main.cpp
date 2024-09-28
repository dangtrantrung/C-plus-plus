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
    QWidget w3;
    QPushButton *b4=new QPushButton("Hello");
    QPushButton *b5=new QPushButton("New");
    QPushButton *b6=new QPushButton("Fresher C++");
    QPushButton *b7=new QPushButton("__++_++__");

    QGridLayout *layout1=new QGridLayout();
    layout1->addWidget(b4,0,0);
    layout1->addWidget(b5,0,1);
    layout1->addWidget(b6,1,0);
    layout1->addWidget(b7,1,1);

    w3.setLayouts(layout1);
    w3.show();
    //QFormLayout
    QWidget w4;
    QLineEdit *First = new QLineEdit();
    QLineEdit *Last  = new QLineEdit();
    QLineEdit *Age = new QLineEdit();

    QFormLayout *layout2=new QFormLayout();
    layout2->addRow("First Name", First);
    layout2->addRow("Last Name", Last);
    layout2->addRow("Age", Age);

    w4.setLayout(layout2);
    w4.show();



    return app.exec();
}
