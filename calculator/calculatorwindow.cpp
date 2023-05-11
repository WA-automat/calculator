#include "calculatorwindow.h"
#include "ui_calculatorwindow.h"
#include "QString"
#include "QLineEdit"
#include "QPushButton"
#include "QDebug"

CalculatorWindow::CalculatorWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CalculatorWindow)
{
    ui->setupUi(this);

    // 窗口UI
    this->setFixedSize(600, 600);

    // TODO：LineEdit的更新并显示
    ui->lineEdit->setText(str);

    // 设置事件
    // TODO：各个按钮的点击事件（除等号）
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

//    connect(&this->str, &QString::, ui->lineEdit, &QLineEdit::setText);

    // TODO：按下等号进行计算并显示
    connect(ui->pushButton_equal, &QPushButton::clicked, this, [this](){
        str += '=';
        ui->lineEdit->setText(str);

        str = "";
    });
}

CalculatorWindow::~CalculatorWindow()
{
    delete ui;
}

