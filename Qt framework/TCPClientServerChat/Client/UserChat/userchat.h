#ifndef userChat_H
#define userChat_H

#include <QtWidgets>
#include <QtNetwork>
#include "ui_userChat.h"

class userChat : public QWidget, private Ui::userChat {
    Q_OBJECT

    public:
        userChat();
        ~userChat();

    private slots:
        void press_connect_btn();
        void press_sendMessage_btn();
        void press_enter_sendMessage();
        void receiveData();
        void connectServer();
        void stopConnection();
        void errorSocket(QAbstractSocket::SocketError error );

    private:
        QTcpSocket *socket; // server
        quint16 size;
};

#endif // USERCHAT_H
