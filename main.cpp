#include<QtWidgets>
#include<firstwindow.h>
#include<QString>
#include"errorwindow.h"
int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    FirstWindow window1;
    ErrorWindow window2;
    window1.Show();
    window2.Show();
    QObject::connect(&window2.button(),SIGNAL(clicked()),&window1,SLOT(slotInfo()));
    QObject::connect(&window1,SIGNAL(changed(QString)),&window2.label(),SLOT(setText(QString)));
    return app.exec();
}
