#ifndef FIRSTWINDOW_H
#define FIRSTWINDOW_H
#include<QWidget>
#include<QtWidgets>
class FirstWindow : public QWidget
{
    Q_OBJECT
private:
    QWidget* wgt = new QWidget;
    QLabel* display = new QLabel;
    QLabel* text1 = new QLabel("&Text1 :");
    QLabel* text2 = new QLabel("&Text2 :");
    QLineEdit* line1 = new QLineEdit;
    QLineEdit* line2 = new QLineEdit;
    QVBoxLayout* layout = new QVBoxLayout;
    int loverVal = 48;
    int higherVal = 57;
public:
    FirstWindow();
    void Show();
public slots:
    void slotInfo();
signals:
    void changed(QString);
};

#endif // FIRSTWINDOW_H
