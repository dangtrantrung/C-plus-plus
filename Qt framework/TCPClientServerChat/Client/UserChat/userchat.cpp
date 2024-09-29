#include "userchat.h"

userChat::userChat()
{
    setupUi(this);

    socket = new QTcpSocket(this);
    connect(socket, SIGNAL(readyRead()), this, SLOT(receiveData()));
    connect(socket, SIGNAL(connected()), this, SLOT(connectServer()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(stopConnection()));
    connect(socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(errorSocket(QAbstractSocket::SocketError)));

    connect(connect_btn, SIGNAL(clicked()), this, SLOT(press_connect_btn()));
    connect(sendMessage_btn, SIGNAL(clicked()), this, SLOT(press_sendMessage_btn()));
    connect(editor, SIGNAL(returnPressed()), this, SLOT(press_enter_sendMessage()));

    size = 0;
}

userChat::~userChat()
{

}

// connect to Server
void userChat::press_connect_btn() {
    // Connecting...
    messageDialog->append(tr("<em>Connecting...</em>"));
    connect_btn->setEnabled(false);

    socket->abort();
    socket->connectToHost(ipServer->text(), portServer->value()); // connect to Server
}
// send Message to Server
void userChat::press_sendMessage_btn() {
    QByteArray messagePackage;
    QDataStream out(&messagePackage, QIODevice::WriteOnly);

    // prepare send messagePackage
    QString sendMessage = tr("<strong>") + nickname->text() +tr("</strong> : ") + editor ->text();

    out << (quint16) 0;
    out << sendMessage;
    out.device()->seek(0);
    out << (quint16) (messagePackage.size() - sizeof(quint16));

    socket->write(messagePackage); // send messagePackage

    editor ->clear(); //  clear editor
    editor ->setFocus();
}

void userChat::press_enter_sendMessage() {
    press_sendMessage_btn();
}

void userChat::receiveData() {
    QDataStream in(socket);
    if (size == 0) { //unknown size, identify size of message in first package
         if (socket->bytesAvailable() < (int)sizeof(quint16)) { //size of message
             return;
        }
        in >> size; // get size of message in first package
    }

    // size, check if we received all data or not
    if (socket->bytesAvailable() < size) { //
        return;
    }

    QString message;
    in >> message;

    messageDialog->append(message);

    // set size=0, for next message received data
    size = 0;
}

// Slot connect successfully
void userChat::connectServer() {
    messageDialog->append(tr("<em>connect successfully !</em>"));
    connect_btn->setEnabled(true);
}

// Slot connection stopped
void userChat::stopConnection() {
    messageDialog->append(tr("<em>Goodbye, see you again!</em>"));
}

// Slot Socket Error
void userChat::errorSocket(QAbstractSocket::SocketError error) {
    switch(error) { // error messages
        case QAbstractSocket::HostNotFoundError:
            messageDialog->append(tr("<em>error : Host Not Found Error - check IP and port of Server.</em>"));
            break;
        case QAbstractSocket::ConnectionRefusedError:
            messageDialog->append(tr("<em>error : Connection to Server Refused Error ! check if Server started or not and check IP and port of Server.</em>"));
            break;
        case QAbstractSocket::RemoteHostClosedError:
            messageDialog->append(tr("<em>error : Remote Host Closed Error  - Server stopped connection!</em>"));
            break;
        default:
            messageDialog->append(tr("<em>error : ") + socket->errorString() + tr("</em>"));
    }
    connect_btn->setEnabled(true);
}

