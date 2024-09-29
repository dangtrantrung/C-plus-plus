#ifndef CUASONGUOIDUNG_H
#define CUASONGUOIDUNG_H

#include <QtWidgets>
#include <QtNetwork>
#include "ui_userwindow.h"

class userChat : public QWidget, private Ui::userwindow {
    Q_OBJECT

    public:
        userChat();

    private slots:
        void press_connect_btn();
        void press_sendMessage_btn();
        void press_enter_sendMessage();
        void receiveData();
        void connect();
        void stopConnection();
        void loiSocket(QAbstractSocket::SocketError loi);

    private:
        QTcpSocket *socket; // server
        quint16 size;
};

#endif // USERCHAT_H
