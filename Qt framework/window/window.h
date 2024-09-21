#ifndef WINDOW_H
#define WINDOW_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>

class window:public QWidget
{
public:
    window();
    window(int h, int w);
    ~window();
private:
    QPushButton *m_btn;
};

#endif // WINDOW_H
