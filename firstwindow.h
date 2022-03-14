#ifndef FIRSTWINDOW_H
#define FIRSTWINDOW_H
#include<QWidget>
#include<QtWidgets>
#include<errorwindow.h>
class FirstWindow : public QWidget
{
    Q_OBJECT
private:
    QWidget* wgt;
    QLabel* display;
    QLabel* text1;
    QLabel* text2;
    QLineEdit* line1;
    QLineEdit* line2;
    QVBoxLayout* layout;
    QWidget button;
    QBoxLayout* box;
    QPushButton cmd;
    int lowerVal = 48;
    int higherVal = 57;
    int value = 0;
    int conversionToInt(const QString& getStr);
    ErrorWindow window;
    QLabel lbl;
public:
    FirstWindow();
    void Show();
    void Connect();
public slots:
    void slotInfo();
signals:
    void changed(QString);
};

#endif // FIRSTWINDOW_H
