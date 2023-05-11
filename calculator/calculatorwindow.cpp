#include "calculatorwindow.h"
#include "ui_calculatorwindow.h"
#include "QString"
#include "QLineEdit"
#include "QPushButton"
#include "QDebug"
#include "QQueue"
#include "QStack"
#include "QMessageBox"
#include "QVector"

#define DEBUG

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
            double ans = calculate(str);

            // 补充后续字符串并显示
            str += '=';
            str += QString::number(ans);
            ui->lineEdit->setText(str);

            // 清空字符串
            str = "";
        }  catch (...) {
            // 抛出错误时被接收
            QMessageBox qMessageBox;
            qMessageBox.setIcon(QMessageBox::Icon::Warning);
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
double CalculatorWindow::calculate(QString str)
{
    // 将字符串拆分为数字和运算符号
    int len = str.size();
    bool hasPoint = false;
    bool st = false;
    if (!len) return 0;

    // 存储单个数字字符串
    QString num = "";

    // 存储全体字符串
    QVector<QString> arr;

    // 字符串分解
    for (int i = 0; i < len; i++) {
        if (str[i] == '+') {
            hasPoint = false;
            if (i != 0 && str[i - 1] == '.') throw "ERROR";
            if (i > 1 && (str[i - 1] == '+' || str[i - 1] == '-' || str[i - 1] == '*' || str[i - 1] == '/') &&
                    (str[i - 2] == '+' || str[i - 2] == '-' || str[i - 2] == '*' || str[i - 2] == '/')) throw "ERROR";
            if (i > 1 && str[i - 2] == '(' && (str[i - 1] == '+' || str[i - 1] == '-' || str[i - 1] == '*' || str[i - 1] == '/')) throw "ERROR";
            if (i == 0) num += '+';
            else if (i != 0 && (str[i - 1] == '*' || str[i - 1] == '(' || str[i - 1] == '/')) {

            }
            else {
                arr.push_back(num);
                arr.push_back("+");
                num = "";
            }
        }
        else if (str[i] == '-') {
            hasPoint = false;
            if (i == 0) num += '-';
            else if (i != 0 && (str[i - 1] == '*' || str[i - 1] == '(' || str[i - 1] == '/' || str[i - 1] == '+' || str[i - 1] == '-')) {
                num += '-';
            }
            else {
                arr.push_back(num);
                arr.push_back("-");
                num = "";
            }
        }
        else if (str[i] == '.') {
            if (hasPoint) throw "ERROR";
            if (i == 0) throw "ERROR";
            if (str[i - 1] < '0' || str[i - 1] > '9') throw "ERROR";
            hasPoint = true;
            num += ".";
        }
        else if (str[i] == '*' || str[i] == '/') {
            if (i == 0) throw "ERROR";
            if (str[i - 1] == '(' || str[i - 1] == '.' || str[i - 1] == '+' ||
                    str[i - 1] == '-' || str[i - 1] == '*' || str[i - 1] == '/') throw "ERROR";
            hasPoint = false;
            arr.push_back(num);
            arr.push_back(str[i] == '*' ? "*" : "/");
            num = "";
        }
        else if (str[i] == '(') {
            if (i != 0 && (str[i - 1] == ')' || str[i - 1] == '.' || (str[i - 1] >= '0' && str[i - 1] <= '9'))) throw "ERROR";
            if (i > 1 && (str[i - 1] == '+' || str[i - 1] == '-' || str[i - 1] == '*' || str[i - 1] == '/') &&
                    (str[i - 2] == '+' || str[i - 2] == '-' || str[i - 2] == '*' || str[i - 2] == '/')) throw "ERROR";
//            arr.push_back(num);
            arr.push_back("(");
            st = true;
//            num = "";
        }
        else if (str[i] == ')') {
            if (!st) throw "ERROR";
            if (str[i - 1] == '(' || str[i - 1] == '.' || str[i - 1] == '+' ||
                    str[i - 1] == '-' || str[i - 1] == '*' || str[i - 1] == '/') throw "ERROR";
            arr.push_back(num);
            arr.push_back(")");
            num = "";
            st = false;
        }
        else if ('0' <= str[i] && str[i] <= '9') {
            if (i != 0 && str[i - 1] == ')') throw "ERROR";
            if (i != 0 && str[i] == '0' && str[i - 1] == '/') throw "ERROR";
            num += str[i];
        }
        else throw "ERROR";
    }
    if ('0' <= str[len - 1] && str[len - 1] <= '9') {
        arr.push_back(num);
        num = "";
    }

#ifdef DEBUG
    for (int i = 0; i < arr.size(); i++) {
        qDebug() << arr[i] << ' ';
    }
    qDebug() << endl;
#endif

    // 中缀表达式转换为后缀表达式
    QQueue<QString> que;
    QStack<QString> stk;

    for (int i = 0; i < arr.size(); i++) {
        QString p = arr[i];
        if (p.size() > 1) {
            que.enqueue(p);
            continue;
        }
        if (p[0] >= '0' && p[0] <= '9') que.enqueue(p);
        else if (p == "+" || p == "-") {
            while (!stk.empty() && stk.top() != "(") {
                que.enqueue(stk.top());
                stk.pop();
            }
            stk.push(p);
        }
        else if (p == "*" || p == "/") {
            while (!stk.empty() && (stk.top() == "*" || stk.top() =="/")) {
                que.enqueue(stk.top());
                stk.pop();
            }
            stk.push(p);
        }
        else if (p == "(") {
            stk.push(p);
        }
        else if (p == ")") {
            while (!stk.empty() && stk.top() != "(") {
                que.enqueue(stk.top());
                stk.pop();
            }
            if (!stk.empty()) stk.pop();
        }
    }
    while (!stk.empty()) {
        que.enqueue(stk.top());
        stk.pop();
    }

    // 利用后缀表达式进行计算
    double ans = 0;

    for (auto p : que) {
        if (p.size() > 1) {
            stk.push(p);
            continue;
        }
        if (p[0] >= '0' && p[0] <= '9') stk.push(p);
        else if (p == "+") {
            if (stk.size() < 2) throw "ERROR";
            double b = stk.top().toDouble();
            stk.pop();
            double a = stk.top().toDouble();
            stk.pop();
            stk.push(QString::number(a + b));
        }
        else if (p == "-") {
            if (stk.size() < 2) throw "ERROR";
            double b = stk.top().toDouble();
            stk.pop();
            double a = stk.top().toDouble();
            stk.pop();
            stk.push(QString::number(a - b));
        }
        else if (p == "*") {
            if (stk.size() < 2) throw "ERROR";
            double b = stk.top().toDouble();
            stk.pop();
            double a = stk.top().toDouble();
            stk.pop();
            stk.push(QString::number(a * b));
        }
        else if (p == "/") {
            if (stk.size() < 2) throw "ERROR";
            double b = stk.top().toDouble();
            stk.pop();
            double a = stk.top().toDouble();
            stk.pop();
            stk.push(QString::number(a / b));
        }
        else throw "ERROR";
    }

    return stk.top().toDouble();
}

