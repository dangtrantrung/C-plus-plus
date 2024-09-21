#include <QApplication>
#include <QQmlApplicationEngine>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    QPushButton btn("Hello Fresher C++!");
    //
    btn.show();
    return app.exec();
}
