#include "window.h"

window::window():QWidget()
{
  setFixedSize(300,150);
  //Create *m_btn
  m_btn=new QPushButton("Alert!",this);
  m_btn->setFont(QFont("Comic Sans MS",14));
  m_btn->setCursor(Qt::PointingHandCursor);
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
}

window::~window()
{
  delete m_btn;
}
