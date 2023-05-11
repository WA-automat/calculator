#include "calculatorwindow.h"
#include "QFont"
#include "QStyleFactory"
#include "QFile"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 设置字体
    QFont f("黑体", 10);
    a.setFont(f);

    // 设置整个窗口的风格
    a.setStyle(QStyleFactory::create("windows"));

    QFile qssFile(":/qss/ubuntu.qss");
    qssFile.open(QFile::ReadOnly);
    if(qssFile.isOpen()) {
        QString qss = QLatin1String(qssFile.readAll());
        a.setStyleSheet(qss);
        qssFile.close();
    }

    CalculatorWindow w;
    w.show();
    return a.exec();
}
