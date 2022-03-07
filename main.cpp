#include<QtWidgets>
#include<QString>
#include"myclass.h"
int main(int argc,char** argv)
{
    QApplication app(argc,argv);
    QWidget wgt;
    QPushButton cmd("Add");
    QLabel lbl("");
    lbl.setGeometry(10,600,220,200);
    QBoxLayout* box = new QBoxLayout(QBoxLayout::LeftToRight);
    box->addWidget(&cmd,3);
    wgt.setLayout(box);
    wgt.setGeometry(1000,100,300,300);
    wgt.show();
    lbl.show();
    QWidget wgt2;
    wgt2.setGeometry(100,100,300,300);
    QLabel* display = new QLabel;
    display->setFrameStyle(QFrame::Box | QFrame::Raised);
    display->setLineWidth(2);
    display->setFixedHeight(50);
    QLabel* text1 = new QLabel("&Text1 :");
    QLineEdit* line1 = new QLineEdit;
    text1->setBuddy(line1);
    QObject::connect(line1,SIGNAL(textChanged(const QString&)),display,SLOT(setText(const QString&)));
    QLabel* text2 = new QLabel("&Text2 :");
    QLineEdit* line2 = new QLineEdit;
    text2->setBuddy(line2);
    QObject::connect(line2,SIGNAL(textChanged(const QString&)),display,SLOT(setText(const QString&)));
    QVBoxLayout* layot = new QVBoxLayout;
    layot->addWidget(display);
    layot->addWidget(text1);
    layot->addWidget(line1);
    layot->addWidget(text2);
    layot->addWidget(line2);
    wgt2.setLayout(layot);
    wgt2.show();
    MyClass myClass(line1,line2);
    QObject::connect(&cmd,SIGNAL(clicked()),&myClass,SLOT(slotInfo()));
    QObject::connect(&myClass,SIGNAL(changed(QString)),&lbl,SLOT(setText(QString)));
    return app.exec();
}
