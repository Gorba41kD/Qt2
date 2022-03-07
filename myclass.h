#ifndef MYCLASS_H
#define MYCLASS_H
#include<QObject>
#include<QString>
#include<QtWidgets>
class MyClass : public QObject
{
    Q_OBJECT
private:
QLineEdit* m_line1;
QLineEdit* m_line2;
public:
    MyClass();
    MyClass(QLineEdit* line1 = nullptr,QLineEdit* line2 = nullptr);
public slots:
    void slotInfo();
signals:
    void changed(QString);
};
#endif // MYCLASS_H
