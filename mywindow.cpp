#include "mywindow.h"
MyWindow::MyWindow()
{
    text1 = std::make_unique<QLabel>("&Text1 :");
    text2 = std::make_unique<QLabel>("&Text2 :");
    line1 = std::make_unique<QLineEdit>();
    line2 = std::make_unique<QLineEdit>();
    layout = std::make_unique<QVBoxLayout>();
    cmd = std::make_unique<QPushButton>();
    lbl = std::make_unique<QLabel>();
    this->setGeometry(100,100,300,300);
    text1->setBuddy(line1.get());
    text2->setBuddy(line2.get());
    cmd->setText("Add");
    lbl->setGeometry(10,600,220,200);
    layout->addWidget(text1.get());
    layout->addWidget(line1.get());
    layout->addWidget(text2.get());
    layout->addWidget(line2.get());
    layout->addWidget(cmd.get());
    layout->addWidget(lbl.get());
    this->setLayout(layout.get());
    this->show();
    connect(cmd.get(),SIGNAL(clicked()),SLOT(slotInfo()));
}
void MyWindow::slotInfo()
{
    try
    {
        int firstValue = std::stoi(line1->text().toStdString());
        int secondValue = std::stoi(line2->text().toStdString());
        lbl->setText(QString::number(firstValue + secondValue));
    }
    catch(const std::invalid_argument& exc)
    {
        window = std::make_unique<ErrorWindow>();
    }
    catch(...)
    {
        std::exit(0);
    }


}
