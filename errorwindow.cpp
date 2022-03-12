#include "errorwindow.h"
ErrorWindow::ErrorWindow()
{
    lbl.setGeometry(10,600,220,200);
    lbl.setText("Message");
    cmd.setText("Add");
    QBoxLayout* box = new QBoxLayout(QBoxLayout::LeftToRight);
    box->addWidget(&cmd,3);
    wgt.setLayout(box);
    wgt.setGeometry(1000,100,300,300);
}
void ErrorWindow::Show()
{
    wgt.show();
    lbl.show();
}
QPushButton& ErrorWindow::button()
{
    return cmd;
}
QLabel& ErrorWindow::label()
{
    return lbl;
}
