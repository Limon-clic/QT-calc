/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *about_programm;
    QAction *about_developer;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *Edit_screen;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *Button_clean;
    QPushButton *Button_power;
    QVBoxLayout *verticalLayout_4;
    QPushButton *Button_division;
    QPushButton *Button_mult;
    QPushButton *Button_minus;
    QPushButton *Button_plus;
    QPushButton *Button_equals;
    QVBoxLayout *verticalLayout_3;
    QPushButton *Button_ln;
    QPushButton *Button_exp;
    QPushButton *Button_tan;
    QPushButton *Button_cos;
    QPushButton *Button_sin;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Button_7;
    QPushButton *Button_8;
    QPushButton *Button_9;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Button_4;
    QPushButton *Button_5;
    QPushButton *Button_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *Button_1;
    QPushButton *Button_2;
    QPushButton *Button_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Button_0;
    QPushButton *Button_dot;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(527, 528);
        QFont font;
        font.setPointSize(16);
        MainWindow->setFont(font);
        MainWindow->setMouseTracking(false);
        MainWindow->setFocusPolicy(Qt::NoFocus);
        about_programm = new QAction(MainWindow);
        about_programm->setObjectName(QString::fromUtf8("about_programm"));
        QFont font1;
        font1.setPointSize(14);
        about_programm->setFont(font1);
        about_developer = new QAction(MainWindow);
        about_developer->setObjectName(QString::fromUtf8("about_developer"));
        about_developer->setFont(font1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Edit_screen = new QLineEdit(centralwidget);
        Edit_screen->setObjectName(QString::fromUtf8("Edit_screen"));
        Edit_screen->setEnabled(false);
        Edit_screen->setMinimumSize(QSize(0, 70));
        QFont font2;
        font2.setPointSize(36);
        Edit_screen->setFont(font2);

        gridLayout->addWidget(Edit_screen, 0, 0, 1, 3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        Button_clean = new QPushButton(centralwidget);
        Button_clean->setObjectName(QString::fromUtf8("Button_clean"));
        Button_clean->setMinimumSize(QSize(160, 60));
        Button_clean->setFont(font);

        horizontalLayout_5->addWidget(Button_clean);

        Button_power = new QPushButton(centralwidget);
        Button_power->setObjectName(QString::fromUtf8("Button_power"));
        Button_power->setMinimumSize(QSize(0, 60));
        Button_power->setFont(font);

        horizontalLayout_5->addWidget(Button_power);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        Button_division = new QPushButton(centralwidget);
        Button_division->setObjectName(QString::fromUtf8("Button_division"));
        Button_division->setMinimumSize(QSize(0, 60));
        Button_division->setFont(font);

        verticalLayout_4->addWidget(Button_division);

        Button_mult = new QPushButton(centralwidget);
        Button_mult->setObjectName(QString::fromUtf8("Button_mult"));
        Button_mult->setMinimumSize(QSize(0, 60));
        Button_mult->setFont(font);

        verticalLayout_4->addWidget(Button_mult);

        Button_minus = new QPushButton(centralwidget);
        Button_minus->setObjectName(QString::fromUtf8("Button_minus"));
        Button_minus->setMinimumSize(QSize(0, 60));
        Button_minus->setFont(font);

        verticalLayout_4->addWidget(Button_minus);

        Button_plus = new QPushButton(centralwidget);
        Button_plus->setObjectName(QString::fromUtf8("Button_plus"));
        Button_plus->setMinimumSize(QSize(0, 60));
        Button_plus->setFont(font);

        verticalLayout_4->addWidget(Button_plus);

        Button_equals = new QPushButton(centralwidget);
        Button_equals->setObjectName(QString::fromUtf8("Button_equals"));
        Button_equals->setMinimumSize(QSize(0, 60));
        Button_equals->setFont(font);

        verticalLayout_4->addWidget(Button_equals);


        gridLayout->addLayout(verticalLayout_4, 1, 1, 2, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        Button_ln = new QPushButton(centralwidget);
        Button_ln->setObjectName(QString::fromUtf8("Button_ln"));
        Button_ln->setMinimumSize(QSize(0, 60));
        Button_ln->setFont(font);

        verticalLayout_3->addWidget(Button_ln);

        Button_exp = new QPushButton(centralwidget);
        Button_exp->setObjectName(QString::fromUtf8("Button_exp"));
        Button_exp->setMinimumSize(QSize(0, 60));
        Button_exp->setFont(font);

        verticalLayout_3->addWidget(Button_exp);

        Button_tan = new QPushButton(centralwidget);
        Button_tan->setObjectName(QString::fromUtf8("Button_tan"));
        Button_tan->setMinimumSize(QSize(0, 60));
        Button_tan->setFont(font);

        verticalLayout_3->addWidget(Button_tan);

        Button_cos = new QPushButton(centralwidget);
        Button_cos->setObjectName(QString::fromUtf8("Button_cos"));
        Button_cos->setMinimumSize(QSize(0, 60));
        Button_cos->setFont(font);

        verticalLayout_3->addWidget(Button_cos);

        Button_sin = new QPushButton(centralwidget);
        Button_sin->setObjectName(QString::fromUtf8("Button_sin"));
        Button_sin->setMinimumSize(QSize(0, 60));
        Button_sin->setFont(font);

        verticalLayout_3->addWidget(Button_sin);


        gridLayout->addLayout(verticalLayout_3, 1, 2, 2, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Button_7 = new QPushButton(centralwidget);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        Button_7->setMinimumSize(QSize(0, 60));
        Button_7->setFont(font);

        horizontalLayout_3->addWidget(Button_7);

        Button_8 = new QPushButton(centralwidget);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        Button_8->setMinimumSize(QSize(0, 60));
        Button_8->setFont(font);

        horizontalLayout_3->addWidget(Button_8);

        Button_9 = new QPushButton(centralwidget);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        Button_9->setMinimumSize(QSize(0, 60));
        Button_9->setFont(font);

        horizontalLayout_3->addWidget(Button_9);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Button_4 = new QPushButton(centralwidget);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        Button_4->setMinimumSize(QSize(0, 60));
        Button_4->setFont(font);

        horizontalLayout_2->addWidget(Button_4);

        Button_5 = new QPushButton(centralwidget);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        Button_5->setMinimumSize(QSize(0, 60));
        Button_5->setFont(font);

        horizontalLayout_2->addWidget(Button_5);

        Button_6 = new QPushButton(centralwidget);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        Button_6->setMinimumSize(QSize(0, 60));
        Button_6->setFont(font);

        horizontalLayout_2->addWidget(Button_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Button_1 = new QPushButton(centralwidget);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        Button_1->setMinimumSize(QSize(0, 60));
        Button_1->setFont(font);

        horizontalLayout->addWidget(Button_1);

        Button_2 = new QPushButton(centralwidget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        Button_2->setMinimumSize(QSize(0, 60));
        Button_2->setFont(font);

        horizontalLayout->addWidget(Button_2);

        Button_3 = new QPushButton(centralwidget);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        Button_3->setMinimumSize(QSize(0, 60));
        Button_3->setFont(font);

        horizontalLayout->addWidget(Button_3);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        Button_0 = new QPushButton(centralwidget);
        Button_0->setObjectName(QString::fromUtf8("Button_0"));
        Button_0->setMinimumSize(QSize(0, 60));
        Button_0->setFont(font);

        horizontalLayout_4->addWidget(Button_0);

        Button_dot = new QPushButton(centralwidget);
        Button_dot->setObjectName(QString::fromUtf8("Button_dot"));
        Button_dot->setMinimumSize(QSize(0, 60));
        Button_dot->setFont(font);

        horizontalLayout_4->addWidget(Button_dot);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 527, 43));
        menubar->setFont(font);
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        QFont font3;
        font3.setPointSize(10);
        menu->setFont(font3);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(about_programm);
        menu->addAction(about_developer);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        about_programm->setText(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        about_developer->setText(QCoreApplication::translate("MainWindow", "\320\236 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272\320\265", nullptr));
        Edit_screen->setText(QString());
        Button_clean->setText(QCoreApplication::translate("MainWindow", "CA", nullptr));
#if QT_CONFIG(shortcut)
        Button_clean->setShortcut(QCoreApplication::translate("MainWindow", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_power->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
#if QT_CONFIG(shortcut)
        Button_power->setShortcut(QCoreApplication::translate("MainWindow", "^", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_division->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
#if QT_CONFIG(shortcut)
        Button_division->setShortcut(QCoreApplication::translate("MainWindow", "/", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_mult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
#if QT_CONFIG(shortcut)
        Button_mult->setShortcut(QCoreApplication::translate("MainWindow", "*", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        Button_minus->setShortcut(QCoreApplication::translate("MainWindow", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
#if QT_CONFIG(shortcut)
        Button_plus->setShortcut(QCoreApplication::translate("MainWindow", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
#if QT_CONFIG(shortcut)
        Button_equals->setShortcut(QCoreApplication::translate("MainWindow", "Enter", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_ln->setText(QCoreApplication::translate("MainWindow", "Ln", nullptr));
#if QT_CONFIG(shortcut)
        Button_ln->setShortcut(QCoreApplication::translate("MainWindow", "L", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_exp->setText(QCoreApplication::translate("MainWindow", "EXP", nullptr));
#if QT_CONFIG(shortcut)
        Button_exp->setShortcut(QCoreApplication::translate("MainWindow", "E", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_tan->setText(QCoreApplication::translate("MainWindow", "TAN", nullptr));
#if QT_CONFIG(shortcut)
        Button_tan->setShortcut(QCoreApplication::translate("MainWindow", "T", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_cos->setText(QCoreApplication::translate("MainWindow", "COS", nullptr));
#if QT_CONFIG(shortcut)
        Button_cos->setShortcut(QCoreApplication::translate("MainWindow", "C", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_sin->setText(QCoreApplication::translate("MainWindow", "SIN", nullptr));
#if QT_CONFIG(shortcut)
        Button_sin->setShortcut(QCoreApplication::translate("MainWindow", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
#if QT_CONFIG(shortcut)
        Button_7->setShortcut(QCoreApplication::translate("MainWindow", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
#if QT_CONFIG(shortcut)
        Button_8->setShortcut(QCoreApplication::translate("MainWindow", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
#if QT_CONFIG(shortcut)
        Button_9->setShortcut(QCoreApplication::translate("MainWindow", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
#if QT_CONFIG(shortcut)
        Button_4->setShortcut(QCoreApplication::translate("MainWindow", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
#if QT_CONFIG(shortcut)
        Button_5->setShortcut(QCoreApplication::translate("MainWindow", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
#if QT_CONFIG(shortcut)
        Button_6->setShortcut(QCoreApplication::translate("MainWindow", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(shortcut)
        Button_1->setShortcut(QCoreApplication::translate("MainWindow", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
#if QT_CONFIG(shortcut)
        Button_2->setShortcut(QCoreApplication::translate("MainWindow", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
#if QT_CONFIG(shortcut)
        Button_3->setShortcut(QCoreApplication::translate("MainWindow", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(shortcut)
        Button_0->setShortcut(QCoreApplication::translate("MainWindow", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
#if QT_CONFIG(shortcut)
        Button_dot->setShortcut(QCoreApplication::translate("MainWindow", ",", nullptr));
#endif // QT_CONFIG(shortcut)
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
