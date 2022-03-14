#include "errorwindow.h"

ErrorWindow::ErrorWindow()
{
    lbl.setGeometry(400,600,300,220);
    lbl.setText("You entered wrong value.Please try again");
}
void ErrorWindow::Show()
{
    lbl.show();
}
QLabel& ErrorWindow::label()
{
    return lbl;
}
