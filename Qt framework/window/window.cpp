#include "window.h"

window::window():QWidget()
{
  setFixedSize(300,150);
  //Create *m_btn
  m_btn=new QPushButton("Alert!",this);
  m_btn->setFont(QFont("Comic Sans MS",14));
  m_btn->setCursor(Qt::PointingHandCursor);
  //connect SIGNAL click btn with SLOT quit()
  QObject::connect(m_btn,SIGNAL(clicked()),qApp,SLOT(quit()));
  //set lcd number and slider
  m_lcd=new QLCDNumber(this);
  m_lcd->setSegmentStyle(QLCDNumber::Flat);
  m_lcd->move(50,38);
  m_slider= new QSlider(Qt::Horizontal,this);
  m_slider->setRange(100, 600);
  m_slider->setGeometry(10,60,150,20);
  //connect SIGNAL value change slider with SLOT display of lcd
  QObject::connect(m_slider,SIGNAL(valueChanged(int)),m_lcd,SLOT(display(int)));
  //QProgressBar
  m_progressBar=new QProgressBar(this);
  m_progressBar->move(30,80);
  // m_progressBar->setGeometry(20,50,10,20);
  QObject::connect(m_slider,SIGNAL(valueChanged(int)),m_progressBar,SLOT(setValue(int)));
  //connect m_slider to this window new public SLOT
  QObject::connect(m_slider,SIGNAL(valueChanged(int)),this,SLOT(changeWidthofWindow(int)));
  //connect maxSize signal
  QObject::connect(this,SIGNAL(maxSize()),qApp,SLOT(quit()));
  //create m_btn_dialog
  m_btn_dialog=new QPushButton("Open Dialog",this);
  m_btn_dialog->move(90,80);
  QObject::connect(m_btn_dialog,SIGNAL(clicked()),this,SLOT(openDialog()));
}
window::window(int h, int w):QWidget()
{
  setFixedSize(h,w);
  //Create *m_btn
  m_btn=new QPushButton("Alert set h,w for window!",this);
  m_btn->setFont(QFont("Comic Sans MS",14));
  m_btn->setCursor(Qt::PointingHandCursor);
  //connect SIGNAL click btn with SLOT quit()
  QObject::connect(m_btn,SIGNAL(clicked()),qApp,SLOT(quit()));
  //set lcd number and slider
  m_lcd=new QLCDNumber(this);
  m_lcd->setSegmentStyle(QLCDNumber::Flat);
  m_lcd->move(110,20);
  m_slider= new QSlider(Qt::Horizontal,this);
  m_slider->setGeometry(10,60,150,20);
  //connect SIGNAL value change slider with SLOT display of lcd
  QObject::connect(m_slider,SIGNAL(valueChanged(int)),m_lcd,SLOT(display(int)));
  //QProgressBar
  m_progressBar=new QProgressBar(this);
  m_progressBar->move(300,150);
  // m_progressBar->setGeometry(20,50,10,20);
  QObject::connect(m_slider,SIGNAL(valueChanged(int)),m_progressBar,SLOT(setValue(int)));
  //connect m_slider to this window new public SLOT
  QObject::connect(m_slider,SIGNAL(valueChanged(int)),this,SLOT(changeWidthofWindow(int)));
  //connect maxSize signal
  QObject::connect(this,SIGNAL(maxSize()),qApp,SLOT(quit()));

}
void window::changeWidthofWindow(int w){
setFixedSize(w,150);
if(w==600){
    emit maxSize();
}
}
void window::openDialog(){
QMessageBox::information(this,"Info Dialog","Hello <strong>Fresher C++ - Qt Framework</strong>!!!");
QMessageBox::warning(this,"Warning Dialog","Notice! New <strong>Fresher C++ - Qt Framework</strong>!!!");
QMessageBox::critical(this,"Alert Dialog","Alert! New <strong>Fresher C++ - Qt Framework</strong>!!!");
QMessageBox::question(this,"Q/A Dialog","Are you new <strong>Fresher C++ - Qt Framework</strong>?");
QMessageBox::question(this,"Q/A Dialog","Are you new <strong>Fresher C++ - Qt Framework</strong>?",QMessageBox::Yes|QMessageBox::No|QMessageBox::Ignore);
//Input
QString nickname = QInputDialog::getText(this, "Nickname", "Your Nickname ?");
//process return dialog
bool ok = false;
QString nickname1 = QInputDialog::getText(this, "Nickname", "Nickname ?", QLineEdit::Normal, QString(), &ok);
    if (ok && !nickname1.isEmpty()){
        QMessageBox::information(this, "Nickname", "Hello " + nickname1 + " !");
    }else{
        QMessageBox::critical(this, "Nickname", "Hic hic, your nickname is empty and you chose No ?");
    }
    //open Font Dialog
    bool ok1 = false;
    QFont font = QFontDialog::getFont(&ok1, m_btn_dialog->font(), this, "Font Style");
    if (ok1){
        m_btn_dialog->setFont(font);
    }
    QColor color = QColorDialog::getColor(Qt::white, this);
        QPalette colorPalette;
        colorPalette.setColor(QPalette::ButtonText,color);
        m_btn_dialog->setPalette(colorPalette);

        //Open & Save File
        QString file = QFileDialog::getOpenFileName(this, "Open image file", QString(), "Images (*.png *.gif *.jpg *.jpeg)");
        QMessageBox::information(this, "File", "you opened this file :\n" + file);



}



window::~window()
{
      delete m_btn;
      delete m_progressBar;
      delete m_slider;
      delete m_lcd;
      delete m_btn_dialog;
}
