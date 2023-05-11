#include "calculatorwindow.h"
#include "QFont"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont f("黑体", 10);
    a.setFont(f);
    CalculatorWindow w;
    w.show();
    return a.exec();
}
