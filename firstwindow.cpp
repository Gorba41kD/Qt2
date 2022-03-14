#include "firstwindow.h"

FirstWindow::FirstWindow() :
    wgt(new QWidget),
    display(new QLabel),
    text1(new QLabel("&Text1 :")),
    text2(new QLabel("&Text2 :")),
    line1(new QLineEdit),
    line2(new QLineEdit),
    layout(new QVBoxLayout)
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
    cmd.setText("Add");
    box = new QBoxLayout(QBoxLayout(QBoxLayout::LeftToRight));
    box->addWidget(&cmd,3);
    button.setLayout(box);
    button.setGeometry(1000,100,300,300);
    lbl.setGeometry(10,600,220,200);
}
int FirstWindow::conversionToInt(const QString& getStr)
{
    std::string str = getStr.toStdString();
    int sum = 0;
    for(int i = 0;i < str.size();++i)
    {

        int a = static_cast<int>(str[i]);
        if(a >= lowerVal && a <= higherVal)
        {
            sum+=a - lowerVal;
            value++;
        }
    }
    return sum;
}
void FirstWindow::slotInfo()
{
    value = 0;
    int sum = 0;
    int firstValue = 0;
    int secondValue = 0;
    firstValue = conversionToInt(line1->text());
    secondValue = conversionToInt(line2->text());
    sum = firstValue + secondValue;
    if(value == 0)
    {
        window.Show();
    }
    else
    {
        if(sum == 0)
        {
            emit changed ("0");
        }
        else
        {
        QString str;
        char symbol;
        for(;sum !=0 ;sum/=10)
        {
            int a = sum % 10;
            symbol = static_cast<char>(a +  lowerVal);
            str = symbol + str;
        }
        emit changed(str);
        }
    }
}
void FirstWindow::Show()
{
    wgt->show();
    button.show();
    lbl.show();
}
QPushButton& FirstWindow::Button()
{
    return cmd;
}
void FirstWindow::Connect()
{
    connect(&cmd,SIGNAL(clicked()),this,SLOT(slotInfo()));
    connect(this,SIGNAL(changed(QString)),&lbl,SLOT(setText(QString)));
}
