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

}

window::~window()
{
  delete m_btn;
}
