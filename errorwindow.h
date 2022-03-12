#ifndef ERRORWINDOW_H
#define ERRORWINDOW_H
#include<QWidget>
#include<QtWidgets>
#include "firstwindow.h"
class ErrorWindow : public QWidget
{
    Q_OBJECT
private:
    QWidget wgt;
    QBoxLayout* box = new QBoxLayout(QBoxLayout::LeftToRight);
    FirstWindow myClass;
public:
    QLabel lbl;
    QPushButton cmd;
    ErrorWindow();
    void Show();
    QPushButton& button();
    QLabel& label();
};

#endif // ERRORWINDOW_H
