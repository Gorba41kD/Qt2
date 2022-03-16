#ifndef MYWINDOW_H
#define MYWINDOW_H
#include<QtWidgets>
#include<QWidget>
#include<errorwindow.h>
#include<memory>
class MyWindow : public QWidget
{
    Q_OBJECT
private:
    std::unique_ptr<QLabel> text1;
    std::unique_ptr<QLabel> text2;
    std::unique_ptr<QLineEdit> line1;
    std::unique_ptr<QLineEdit> line2;
    std::unique_ptr<QVBoxLayout> layout;
    std::unique_ptr<QPushButton> cmd;
    std::unique_ptr<QLabel> lbl;
    std::unique_ptr<ErrorWindow> window;
public:
    MyWindow();
public slots:
    void slotInfo();
};

#endif // MYWINDOW_H
