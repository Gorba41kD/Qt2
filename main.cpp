#include<QtWidgets>
#include<firstwindow.h>
int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    FirstWindow window;
    window.Show();
    window.Connect();
    return a.exec();
}
