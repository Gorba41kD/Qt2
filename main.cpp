#include<QtWidgets>
#include<mywindow.h>
int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    MyWindow window;
    return a.exec();
}
