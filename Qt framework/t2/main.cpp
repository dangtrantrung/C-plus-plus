#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtWidgets>

int main(int argc, char *argv[])
{
//     QApplication app(argc, argv);

//     QQmlApplicationEngine engine;
//     engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
//     QPushButton btn("Hello Fresher C++!");
//     //
//     btn.show();
//     return app.exec();
        QApplication app(argc, argv);
        //create a new window
        QWidget window;
        window.setFixedSize(300, 150);

        //create a button in window
        QPushButton btn("Alert !", &window);
        btn.setFont(QFont("Comic Sans MS", 14));
        btn.setCursor(Qt::PointingHandCursor);

        window.show();

        return app.exec();
}
