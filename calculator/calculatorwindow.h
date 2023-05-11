#ifndef CALCULATORWINDOW_H
#define CALCULATORWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class CalculatorWindow; }
QT_END_NAMESPACE

class CalculatorWindow : public QMainWindow
{
    Q_OBJECT

public:
    CalculatorWindow(QWidget *parent = nullptr);
    ~CalculatorWindow();

    int calculate(QString str);

private:
    Ui::CalculatorWindow *ui;

    // 主字符串：用于显示
    QString str = "";
};
#endif // CALCULATORWINDOW_H
