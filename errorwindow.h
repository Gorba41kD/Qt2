#ifndef ERRORWINDOW_H
#define ERRORWINDOW_H
#include<QWidget>
#include<QtWidgets>
class ErrorWindow : public QWidget
{
    Q_OBJECT
private:
    QLabel lbl;
public:
    ErrorWindow();
    QLabel& label();
    void Show();
};

#endif // ERRORWINDOW_H
