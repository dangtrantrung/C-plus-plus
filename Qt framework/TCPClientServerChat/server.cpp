#include "server.h"

server::server()
{
    //create widgets
    status=new QLabel();
    exit_btn=new QPushButton(tr("Exit"));
    connect(exit_btn, SIGNAL(clicked()), qApp, SLOT(quit()));

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(status);
    layout->addWidget(exit_btn);
    setLayout(layout);
    setWindowTitle(tr("Aloo Chat App Server!"));

    //server logic
    server_ptn = new QTcpServer(this);
        if (!server_ptn->listen(QHostAddress::Any, 50885)) { // Start Server at Port 50585 at All IP Address
            // if  not server started
            status->setText(tr("server not started.Reason:<br />") +server_ptn->errorString());
        } else {
            // if server started
            status->setText(tr("server started <strong>") + QString::number(server_ptn->serverPort()) + tr("</strong>.<br />User can begin chat."));
            connect(server_ptn, SIGNAL(newConnection()), this, SLOT(newConnection()));
        }

   size = 0;

}


server::~server()
{

}

void server::newConnection(){
    sentToALL( (tr("<em>New user join chat room!</em>")));
    QTcpSocket *newUser = server_ptn->nextPendingConnection();

    user << newUser;

    connect(newUser, SIGNAL(readyRead()), this, SLOT(receiveData()));
    connect(newUser, SIGNAL(disconnected()), this, SLOT(stopConnection()));
}
void server::receiveData(){
        QTcpSocket *socket = qobject_cast<QTcpSocket *>(sender());
        if (socket == 0) { // if can not identify sender, return - exit
            return;
        }

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

        sentToALL(message);

        // set size=0, for next message received data
        size = 0;
}

void server::stopConnection(){
        sentToALL(tr("<em>1 user left chat room!</em>"));

        // identify who left room
        QTcpSocket *socket = qobject_cast<QTcpSocket *>(sender());
        if (socket == 0) { // return if can not identify who left room
            return;
        }
        user.removeOne(socket);
        socket->deleteLater();
}
void server::sentToALL(const QString &message){
       // prepare message
        QByteArray messagePackage;

        QDataStream out(&messagePackage, QIODevice::WriteOnly);
        out << (quint16) 0; // write 0 - size of messagePackage at first
        out << message; // write message to messagePackage
        out.device()->seek(0); // seek(0) to turn back head of messagePackage
        out << (quint16) (messagePackage.size() - sizeof(quint16)); // replace 0 - size of messagePackage at first

        // sent To ALL available QTcpSocket - users in server
        for (int i = 0; i < user.size(); i++) {
            user[i]->write(messagePackage);
        }
}


server::~server()
{

}

void server::newConnection(){

}
void server::receiveData(){

}

void server::stopConnection(){

}
