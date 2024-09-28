#ifndef server_H
#define server_H
#include <QtWidgets>
#include <QtNetwork>

class server:public QWidget
{
    Q_OBJECT
public:
    server();
    ~server();
    void sentToALL(const QString &message);
private slots:
    void newConnection();
    void receiveData();
    void stopConnection();
private:
    QLabel *status;
    QPushButton *exit_btn;
    QTcpServer *server_ptn;
    QList<QTcpSocket *> user;
    quint16 size;



};

#endif // WINDOW_H
