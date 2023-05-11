#include "calculatorwindow.h"
#include "ui_calculatorwindow.h"
#include "QString"
#include "QLineEdit"
#include "QPushButton"
#include "QDebug"
#include "QQueue"
#include "QStack"
#include "QMessageBox"

CalculatorWindow::CalculatorWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CalculatorWindow)
{
    ui->setupUi(this);

    // 窗口UI
    this->setFixedSize(800, 800);
//    this->setWindowTitle("计算器");

    // LineEdit的更新并显示
    ui->lineEdit->setText(str);

    // 设置事件
    // 各个按钮的点击事件（除等号）
    connect(ui->pushButton_one, &QPushButton::clicked, this, [this](){
        str += '1';
        ui->lineEdit->setText(str);
    });
    connect(ui->pushButton_two, &QPushButton::clicked, this, [this](){
        str += '2';
        ui->lineEdit->setText(str);
    });
    connect(ui->pushButton_three, &QPushButton::clicked, this, [this](){
        str += '3';
        ui->lineEdit->setText(str);
    });
    connect(ui->pushButton_four, &QPushButton::clicked, this, [this](){
        str += '4';
        ui->lineEdit->setText(str);
    });
    connect(ui->pushButton_five, &QPushButton::clicked, this, [this](){
        str += '5';
        ui->lineEdit->setText(str);
    });
    connect(ui->pushButton_six, &QPushButton::clicked, this, [this](){
        str += '6';
        ui->lineEdit->setText(str);
    });
    connect(ui->pushButton_seven, &QPushButton::clicked, this, [this](){
        str += '7';
        ui->lineEdit->setText(str);
    });
    connect(ui->pushButton_eight, &QPushButton::clicked, this, [this](){
        str += '8';
        ui->lineEdit->setText(str);
    });
    connect(ui->pushButton_nine, &QPushButton::clicked, this, [this](){
        str += '9';
        ui->lineEdit->setText(str);
    });
    connect(ui->pushButton_zero, &QPushButton::clicked, this, [this](){
        str += '0';
        ui->lineEdit->setText(str);
    });
    connect(ui->pushButton_plus, &QPushButton::clicked, this, [this](){
        str += '+';
        ui->lineEdit->setText(str);
    });
    connect(ui->pushButton_sub, &QPushButton::clicked, this, [this](){
        str += '-';
        ui->lineEdit->setText(str);
    });
    connect(ui->pushButton_mul, &QPushButton::clicked, this, [this](){
        str += '*';
        ui->lineEdit->setText(str);
    });
    connect(ui->pushButton_div, &QPushButton::clicked, this, [this](){
        str += '/';
        ui->lineEdit->setText(str);
    });
    connect(ui->pushButton_CE, &QPushButton::clicked, this, [this](){
        str = "";
        ui->lineEdit->setText(str);
    });
    connect(ui->pushButton_left, &QPushButton::clicked, this, [this](){
        str += '(';
        ui->lineEdit->setText(str);
    });
    connect(ui->pushButton_right, &QPushButton::clicked, this, [this](){
        str += ')';
        ui->lineEdit->setText(str);
    });
    connect(ui->pushButton_point, &QPushButton::clicked, this, [this](){
        str += '.';
        ui->lineEdit->setText(str);
    });
    connect(ui->pushButton_back, &QPushButton::clicked, this, [this](){
        if (str.size() != 0) {
            str = str.left(str.size() - 1);
        }
        ui->lineEdit->setText(str);
    });

    // 按下等号进行计算并显示
    connect(ui->pushButton_equal, &QPushButton::clicked, this, [this](){

        try {
            // 进行计算
            int ans = calculate(str);

            // 补充后续字符串并显示
            str += '=';
            str += QString::number(ans);
            ui->lineEdit->setText(str);

            // 清空字符串
            str = "";
        }  catch (...) {
            // 抛出错误时被接收
            QMessageBox qMessageBox;
            qMessageBox.setText("输入错误");
            qMessageBox.exec();
        }

    });
}

CalculatorWindow::~CalculatorWindow()
{
    delete ui;
}

// 进行计算
int CalculatorWindow::calculate(QString str)
{
    // 将字符串拆分为数字和运算符号

    // 中缀表达式转换为后缀表达式

    // 利用后缀表达式进行计算
    int ans = 0;

    return ans;
}

