#include "myclass.h"

MyClass::MyClass()
{

}
MyClass::MyClass(QLineEdit* line1,QLineEdit* line2):m_line1(line1),m_line2(line2)
{

}
void MyClass::slotInfo()
{
    QString str  = m_line1->text() + m_line2->text();
    if(str.size()<=10)
    {
    emit changed(str);
    }
    else
    {
        emit changed("Oops,this value is out of range");
    }

}
