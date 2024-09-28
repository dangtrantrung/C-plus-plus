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
        if (!server_ptn->listen(QHostAddress::Any, 50885)) { // Start Server at Port 50585 và at All IP Address
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

}
void server::receiveData(){

}

void server::stopConnection(){

}
