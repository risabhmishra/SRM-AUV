#include "Widget.h"
#include <QApplication>
#include <QSlider>
#include <QLCDNumber>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("Front End");
    QLCDNumber *lcd= new QLCDNumber;
QSlider *slider=new QSlider(Qt::Horizontal)
    lcd->setRange(0,255);
    slider->setRange(0,255);
        QObject::connect(slider,SIGNAL(valueChanged(int)),spinner,SLOT(valuechanged(int));
   lcd->setValue(10);
    Widget w;
    w.show();
    return a.exec();
}
