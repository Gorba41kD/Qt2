#ifndef ERRORWINDOW_H
#define ERRORWINDOW_H
#include<QWidget>
#include<QtWidgets>
#include<memory>
class ErrorWindow : public QWidget
{
    Q_OBJECT
private:
     std::unique_ptr<QLabel> lbl;
     std::unique_ptr<QBoxLayout> box;
public:
    ErrorWindow();
};

#endif // ERRORWINDOW_H
