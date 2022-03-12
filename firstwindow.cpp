#include "firstwindow.h"

FirstWindow::FirstWindow()
{
        wgt->setGeometry(100,100,300,300);
        display->setFrameStyle(QFrame::Box | QFrame::Raised);
        display->setLineWidth(2);
        display->setFixedHeight(50);
        text1->setBuddy(line1);
        QObject::connect(line1,SIGNAL(textChanged(const QString&)),display,SLOT(setText(const QString&)));
        text2->setBuddy(line2);
        QObject::connect(line2,SIGNAL(textChanged(const QString&)),display,SLOT(setText(const QString&)));
        layout->addWidget(display);
        layout->addWidget(text1);
        layout->addWidget(line1);
        layout->addWidget(text2);
        layout->addWidget(line2);
        wgt->setLayout(layout);

}
void FirstWindow::slotInfo()
{
    QString getStr = line1->text() + line2->text();
    std::string str = getStr.toStdString();
    QString myStr;
    char symbol;
    int sum = 0;
    int value = 0;
    for(int i = 0;i < str.size();i++)
    {
        int a = static_cast<int>(str[i]);
        if(a>=loverVal && a<= higherVal)
        {
            sum+=a - loverVal;
            value++;
        }
    }
    if(value == 0)
    {
        emit changed("Warning!,no numbers");
    }
    else
    {
    for(;sum != 0;sum = sum / 10)
    {
        int a = sum % 10;
        symbol = static_cast<char>(a + loverVal);
        myStr = symbol+myStr;
    }
     emit changed(myStr);
    }
}
void FirstWindow::Show()
{
     wgt->show();
}
