/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionjojo;
    QAction *actiondio;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_plu;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *btn_sub;
    QPushButton *btn_7;
    QPushButton *btn_8;
    QPushButton *btn_9;
    QPushButton *btn_mul;
    QPushButton *btn_0;
    QPushButton *btn_equ;
    QPushButton *btn_div;
    QPushButton *btn_point;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuabout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(757, 480);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        MainWindow->setPalette(palette);
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextOnly);
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionjojo = new QAction(MainWindow);
        actionjojo->setObjectName(QStringLiteral("actionjojo"));
        actiondio = new QAction(MainWindow);
        actiondio->setObjectName(QStringLiteral("actiondio"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 10, 320, 271));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_1 = new QPushButton(layoutWidget);
        btn_1->setObjectName(QStringLiteral("btn_1"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush6(QColor(247, 252, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush7(QColor(192, 223, 245, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        QBrush brush8(QColor(68, 97, 117, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush8);
        QBrush brush9(QColor(91, 130, 157, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush10(QColor(196, 225, 245, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush11(QColor(137, 195, 235, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        btn_1->setPalette(palette1);
        btn_1->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 20pt \"Calibri\";\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(100, 158, 197);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(80, 138, 177);\n"
"border: 1px solid rgb(180,180,180);\n"
"}"));

        gridLayout->addWidget(btn_1, 1, 0, 1, 1);

        btn_2 = new QPushButton(layoutWidget);
        btn_2->setObjectName(QStringLiteral("btn_2"));
        btn_2->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 20pt \"Calibri\";\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(100, 158, 197);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(80, 138, 177);\n"
"border: 1px solid rgb(180,180,180);\n"
"}"));

        gridLayout->addWidget(btn_2, 1, 1, 1, 1);

        btn_3 = new QPushButton(layoutWidget);
        btn_3->setObjectName(QStringLiteral("btn_3"));
        btn_3->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 20pt \"Calibri\";\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(100, 158, 197);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(80, 138, 177);\n"
"border: 1px solid rgb(180,180,180);\n"
"}"));

        gridLayout->addWidget(btn_3, 1, 2, 1, 1);

        btn_plu = new QPushButton(layoutWidget);
        btn_plu->setObjectName(QStringLiteral("btn_plu"));
        btn_plu->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 20pt \"Calibri\";\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(100, 158, 197);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(80, 138, 177);\n"
"border: 1px solid rgb(180,180,180);\n"
"}"));

        gridLayout->addWidget(btn_plu, 1, 3, 1, 1);

        btn_4 = new QPushButton(layoutWidget);
        btn_4->setObjectName(QStringLiteral("btn_4"));
        btn_4->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 20pt \"Calibri\";\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(100, 158, 197);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(80, 138, 177);\n"
"border: 1px solid rgb(180,180,180);\n"
"}"));

        gridLayout->addWidget(btn_4, 2, 0, 1, 1);

        btn_5 = new QPushButton(layoutWidget);
        btn_5->setObjectName(QStringLiteral("btn_5"));
        btn_5->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 20pt \"Calibri\";\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(100, 158, 197);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(80, 138, 177);\n"
"border: 1px solid rgb(180,180,180);\n"
"}"));

        gridLayout->addWidget(btn_5, 2, 1, 1, 1);

        btn_6 = new QPushButton(layoutWidget);
        btn_6->setObjectName(QStringLiteral("btn_6"));
        btn_6->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 20pt \"Calibri\";\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(100, 158, 197);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(80, 138, 177);\n"
"border: 1px solid rgb(180,180,180);\n"
"}"));

        gridLayout->addWidget(btn_6, 2, 2, 1, 1);

        btn_sub = new QPushButton(layoutWidget);
        btn_sub->setObjectName(QStringLiteral("btn_sub"));
        btn_sub->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 20pt \"Calibri\";\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(100, 158, 197);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(80, 138, 177);\n"
"border: 1px solid rgb(180,180,180);\n"
"}"));

        gridLayout->addWidget(btn_sub, 2, 3, 1, 1);

        btn_7 = new QPushButton(layoutWidget);
        btn_7->setObjectName(QStringLiteral("btn_7"));
        btn_7->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 20pt \"Calibri\";\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(100, 158, 197);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(80, 138, 177);\n"
"border: 1px solid rgb(180,180,180);\n"
"}"));

        gridLayout->addWidget(btn_7, 3, 0, 1, 1);

        btn_8 = new QPushButton(layoutWidget);
        btn_8->setObjectName(QStringLiteral("btn_8"));
        btn_8->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 20pt \"Calibri\";\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(100, 158, 197);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(80, 138, 177);\n"
"border: 1px solid rgb(180,180,180);\n"
"}"));

        gridLayout->addWidget(btn_8, 3, 1, 1, 1);

        btn_9 = new QPushButton(layoutWidget);
        btn_9->setObjectName(QStringLiteral("btn_9"));
        btn_9->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 20pt \"Calibri\";\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(100, 158, 197);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(80, 138, 177);\n"
"border: 1px solid rgb(180,180,180);\n"
"}"));

        gridLayout->addWidget(btn_9, 3, 2, 1, 1);

        btn_mul = new QPushButton(layoutWidget);
        btn_mul->setObjectName(QStringLiteral("btn_mul"));
        btn_mul->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 20pt \"Calibri\";\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(100, 158, 197);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(80, 138, 177);\n"
"border: 1px solid rgb(180,180,180);\n"
"}"));

        gridLayout->addWidget(btn_mul, 3, 3, 1, 1);

        btn_0 = new QPushButton(layoutWidget);
        btn_0->setObjectName(QStringLiteral("btn_0"));
        btn_0->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 20pt \"Calibri\";\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(100, 158, 197);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(80, 138, 177);\n"
"border: 1px solid rgb(180,180,180);\n"
"}"));

        gridLayout->addWidget(btn_0, 4, 1, 1, 1);

        btn_equ = new QPushButton(layoutWidget);
        btn_equ->setObjectName(QStringLiteral("btn_equ"));
        btn_equ->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 20pt \"Calibri\";\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(100, 158, 197);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(80, 138, 177);\n"
"border: 1px solid rgb(180,180,180);\n"
"}"));

        gridLayout->addWidget(btn_equ, 4, 2, 1, 1);

        btn_div = new QPushButton(layoutWidget);
        btn_div->setObjectName(QStringLiteral("btn_div"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush12(QColor(254, 254, 255, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush12);
        QBrush brush13(QColor(210, 209, 225, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush13);
        QBrush brush14(QColor(83, 82, 98, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush14);
        QBrush brush15(QColor(111, 110, 131, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush15);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush16(QColor(210, 210, 225, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush16);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush17(QColor(166, 165, 196, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        btn_div->setPalette(palette2);
        btn_div->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 20pt \"Calibri\";\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(100, 158, 197);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(80, 138, 177);\n"
"border: 1px solid rgb(180,180,180);\n"
"}"));

        gridLayout->addWidget(btn_div, 4, 3, 1, 1);

        btn_point = new QPushButton(layoutWidget);
        btn_point->setObjectName(QStringLiteral("btn_point"));
        btn_point->setStyleSheet(QLatin1String("QPushButton{\n"
"font: 20pt \"Calibri\";\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(100, 158, 197);\n"
"border: 1px solid rgb(180,180,180);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(80, 138, 177);\n"
"border: 1px solid rgb(180,180,180);\n"
"}"));

        gridLayout->addWidget(btn_point, 4, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFocusPolicy(Qt::NoFocus);
        label->setStyleSheet(QLatin1String("QLabel{\n"
"font: 25 30pt \"Microsoft YaHei\";                        \n"
"border-radius: 4px;                                            \n"
"background-color: argb(60, 60, 60, 130);          \n"
"color: rgb(255, 255, 255);                                 \n"
"}\n"
""));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        gridLayout->addWidget(label, 0, 0, 1, 4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 757, 22));
        menuabout = new QMenu(menubar);
        menuabout->setObjectName(QStringLiteral("menuabout"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuabout->menuAction());
        menuabout->addAction(actionjojo);
        menuabout->addAction(actiondio);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionjojo->setText(QApplication::translate("MainWindow", "jojo", Q_NULLPTR));
        actiondio->setText(QApplication::translate("MainWindow", "dio", Q_NULLPTR));
        btn_1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        btn_2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        btn_3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        btn_plu->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        btn_4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        btn_5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        btn_6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        btn_sub->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        btn_7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        btn_8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        btn_9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        btn_mul->setText(QApplication::translate("MainWindow", "*", Q_NULLPTR));
        btn_0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        btn_equ->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        btn_div->setText(QApplication::translate("MainWindow", "/", Q_NULLPTR));
        btn_point->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        label->setText(QString());
        menuabout->setTitle(QApplication::translate("MainWindow", "ry\347\232\204\350\256\241\347\256\227\345\231\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
