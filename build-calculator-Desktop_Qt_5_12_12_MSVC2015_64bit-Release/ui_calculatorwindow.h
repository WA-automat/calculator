/********************************************************************************
** Form generated from reading UI file 'calculatorwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORWINDOW_H
#define UI_CALCULATORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QWidget *widget_1;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_back;
    QPushButton *pushButton_CE;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_left;
    QPushButton *pushButton_seven;
    QPushButton *pushButton_nine;
    QPushButton *pushButton_eight;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_five;
    QPushButton *pushButton_six;
    QPushButton *pushButton_right;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_four;
    QWidget *widget_down;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_down_left;
    QGridLayout *gridLayout_7;
    QWidget *widget_5;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_div;
    QPushButton *pushButton_point;
    QPushButton *pushButton_zero;
    QWidget *widget_4;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_two;
    QPushButton *pushButton_one;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_three;
    QPushButton *pushButton_equal;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CalculatorWindow)
    {
        if (CalculatorWindow->objectName().isEmpty())
            CalculatorWindow->setObjectName(QString::fromUtf8("CalculatorWindow"));
        CalculatorWindow->resize(800, 600);
        centralwidget = new QWidget(CalculatorWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit->setReadOnly(true);

        verticalLayout->addWidget(lineEdit);

        widget_1 = new QWidget(widget);
        widget_1->setObjectName(QString::fromUtf8("widget_1"));
        gridLayout_2 = new QGridLayout(widget_1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_back = new QPushButton(widget_1);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));

        gridLayout_2->addWidget(pushButton_back, 0, 0, 1, 1);

        pushButton_CE = new QPushButton(widget_1);
        pushButton_CE->setObjectName(QString::fromUtf8("pushButton_CE"));

        gridLayout_2->addWidget(pushButton_CE, 0, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 2);
        gridLayout_2->setColumnStretch(1, 3);

        verticalLayout->addWidget(widget_1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_plus = new QPushButton(widget_2);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));

        gridLayout->addWidget(pushButton_plus, 0, 3, 1, 1);

        pushButton_left = new QPushButton(widget_2);
        pushButton_left->setObjectName(QString::fromUtf8("pushButton_left"));

        gridLayout->addWidget(pushButton_left, 0, 4, 1, 1);

        pushButton_seven = new QPushButton(widget_2);
        pushButton_seven->setObjectName(QString::fromUtf8("pushButton_seven"));

        gridLayout->addWidget(pushButton_seven, 0, 0, 1, 1);

        pushButton_nine = new QPushButton(widget_2);
        pushButton_nine->setObjectName(QString::fromUtf8("pushButton_nine"));

        gridLayout->addWidget(pushButton_nine, 0, 2, 1, 1);

        pushButton_eight = new QPushButton(widget_2);
        pushButton_eight->setObjectName(QString::fromUtf8("pushButton_eight"));

        gridLayout->addWidget(pushButton_eight, 0, 1, 1, 1);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_five = new QPushButton(widget_3);
        pushButton_five->setObjectName(QString::fromUtf8("pushButton_five"));

        gridLayout_3->addWidget(pushButton_five, 0, 1, 1, 1);

        pushButton_six = new QPushButton(widget_3);
        pushButton_six->setObjectName(QString::fromUtf8("pushButton_six"));

        gridLayout_3->addWidget(pushButton_six, 0, 2, 1, 1);

        pushButton_right = new QPushButton(widget_3);
        pushButton_right->setObjectName(QString::fromUtf8("pushButton_right"));

        gridLayout_3->addWidget(pushButton_right, 0, 4, 1, 1);

        pushButton_sub = new QPushButton(widget_3);
        pushButton_sub->setObjectName(QString::fromUtf8("pushButton_sub"));

        gridLayout_3->addWidget(pushButton_sub, 0, 3, 1, 1);

        pushButton_four = new QPushButton(widget_3);
        pushButton_four->setObjectName(QString::fromUtf8("pushButton_four"));

        gridLayout_3->addWidget(pushButton_four, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_3);

        widget_down = new QWidget(widget);
        widget_down->setObjectName(QString::fromUtf8("widget_down"));
        widget_down->setEnabled(true);
        horizontalLayout = new QHBoxLayout(widget_down);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget_down_left = new QWidget(widget_down);
        widget_down_left->setObjectName(QString::fromUtf8("widget_down_left"));
        gridLayout_7 = new QGridLayout(widget_down_left);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(6);
        gridLayout_7->setVerticalSpacing(0);
        gridLayout_7->setContentsMargins(0, 0, 9, 6);
        widget_5 = new QWidget(widget_down_left);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        gridLayout_6 = new QGridLayout(widget_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton_div = new QPushButton(widget_5);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));

        gridLayout_6->addWidget(pushButton_div, 0, 2, 1, 1);

        pushButton_point = new QPushButton(widget_5);
        pushButton_point->setObjectName(QString::fromUtf8("pushButton_point"));

        gridLayout_6->addWidget(pushButton_point, 0, 1, 1, 1);

        pushButton_zero = new QPushButton(widget_5);
        pushButton_zero->setObjectName(QString::fromUtf8("pushButton_zero"));

        gridLayout_6->addWidget(pushButton_zero, 0, 0, 1, 1);

        gridLayout_6->setColumnStretch(0, 2);
        gridLayout_6->setColumnStretch(1, 1);
        gridLayout_6->setColumnStretch(2, 1);

        gridLayout_7->addWidget(widget_5, 1, 0, 1, 1);

        widget_4 = new QWidget(widget_down_left);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        gridLayout_5 = new QGridLayout(widget_4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_two = new QPushButton(widget_4);
        pushButton_two->setObjectName(QString::fromUtf8("pushButton_two"));

        gridLayout_5->addWidget(pushButton_two, 0, 1, 1, 1);

        pushButton_one = new QPushButton(widget_4);
        pushButton_one->setObjectName(QString::fromUtf8("pushButton_one"));

        gridLayout_5->addWidget(pushButton_one, 0, 0, 1, 1);

        pushButton_mul = new QPushButton(widget_4);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));

        gridLayout_5->addWidget(pushButton_mul, 0, 3, 1, 1);

        pushButton_three = new QPushButton(widget_4);
        pushButton_three->setObjectName(QString::fromUtf8("pushButton_three"));

        gridLayout_5->addWidget(pushButton_three, 0, 2, 1, 1);


        gridLayout_7->addWidget(widget_4, 0, 0, 1, 1);

        gridLayout_7->setColumnStretch(0, 4);

        horizontalLayout->addWidget(widget_down_left);

        pushButton_equal = new QPushButton(widget_down);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_equal->sizePolicy().hasHeightForWidth());
        pushButton_equal->setSizePolicy(sizePolicy1);
        pushButton_equal->setMinimumSize(QSize(0, 150));

        horizontalLayout->addWidget(pushButton_equal);

        horizontalLayout->setStretch(0, 4);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addWidget(widget_down);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 2);

        horizontalLayout_2->addWidget(widget);

        CalculatorWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CalculatorWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        CalculatorWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CalculatorWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CalculatorWindow->setStatusBar(statusbar);

        retranslateUi(CalculatorWindow);

        QMetaObject::connectSlotsByName(CalculatorWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorWindow)
    {
        CalculatorWindow->setWindowTitle(QApplication::translate("CalculatorWindow", "CalculatorWindow", nullptr));
        pushButton_back->setText(QApplication::translate("CalculatorWindow", "<-", nullptr));
        pushButton_CE->setText(QApplication::translate("CalculatorWindow", "CE", nullptr));
        pushButton_plus->setText(QApplication::translate("CalculatorWindow", "+", nullptr));
        pushButton_left->setText(QApplication::translate("CalculatorWindow", "(", nullptr));
        pushButton_seven->setText(QApplication::translate("CalculatorWindow", "7", nullptr));
        pushButton_nine->setText(QApplication::translate("CalculatorWindow", "9", nullptr));
        pushButton_eight->setText(QApplication::translate("CalculatorWindow", "8", nullptr));
        pushButton_five->setText(QApplication::translate("CalculatorWindow", "5", nullptr));
        pushButton_six->setText(QApplication::translate("CalculatorWindow", "6", nullptr));
        pushButton_right->setText(QApplication::translate("CalculatorWindow", ")", nullptr));
        pushButton_sub->setText(QApplication::translate("CalculatorWindow", "-", nullptr));
        pushButton_four->setText(QApplication::translate("CalculatorWindow", "4", nullptr));
        pushButton_div->setText(QApplication::translate("CalculatorWindow", "/", nullptr));
        pushButton_point->setText(QApplication::translate("CalculatorWindow", ".", nullptr));
        pushButton_zero->setText(QApplication::translate("CalculatorWindow", "0", nullptr));
        pushButton_two->setText(QApplication::translate("CalculatorWindow", "2", nullptr));
        pushButton_one->setText(QApplication::translate("CalculatorWindow", "1", nullptr));
        pushButton_mul->setText(QApplication::translate("CalculatorWindow", "*", nullptr));
        pushButton_three->setText(QApplication::translate("CalculatorWindow", "3", nullptr));
        pushButton_equal->setText(QApplication::translate("CalculatorWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorWindow: public Ui_CalculatorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORWINDOW_H
