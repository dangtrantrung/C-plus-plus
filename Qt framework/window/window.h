#ifndef WINDOW_H
#define WINDOW_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>
#include <QProgressBar>
#include <QMessageBox>
#include <QInputDialog>
#include <QFontDialog>
#include <QColorDialog>
#include <QFileDialog>

class window:public QWidget
{
    Q_OBJECT
public:
    window();
    window(int h, int w);
    ~window();
private:
    QPushButton *m_btn;
    QLCDNumber *m_lcd;
    QSlider *m_slider;
    QProgressBar *m_progressBar;
    QPushButton *m_btn_dialog;
public slots:
    void changeWidthofWindow(int w);
    void openDialog();
signals:
    void maxSize();

};

#endif // WINDOW_H
