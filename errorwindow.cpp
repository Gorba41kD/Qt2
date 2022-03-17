#include "errorwindow.h"
ErrorWindow::ErrorWindow()
{
    lbl = std::make_unique<QLabel>();
    box = std::make_unique<QBoxLayout>(QBoxLayout::LeftToRight,this);
    this->setGeometry(400,600,300,220);
    lbl->setText("You entered wrong value.Please try again");
    box->addWidget(lbl.get());
    this->setLayout(box.get());
    this->show();
}
