/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *window;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *push_2;
    QPushButton *push_9;
    QPushButton *push_14;
    QPushButton *push_15;
    QPushButton *push_13;
    QPushButton *push_16;
    QPushButton *push_11;
    QPushButton *push_4;
    QPushButton *push_10;
    QPushButton *push_7;
    QPushButton *push_8;
    QPushButton *push_0;
    QPushButton *push_6;
    QPushButton *push_5;
    QPushButton *push_12;
    QPushButton *push_17;
    QPushButton *push_3;
    QPushButton *push_1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(527, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        window = new QLabel(centralwidget);
        window->setObjectName("window");
        window->setGeometry(QRect(10, 20, 491, 141));
        window->setTextFormat(Qt::TextFormat::AutoText);
        window->setMargin(0);
        window->setIndent(-1);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 180, 501, 371));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        gridLayout->setVerticalSpacing(35);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        push_2 = new QPushButton(layoutWidget);
        push_2->setObjectName("push_2");

        gridLayout->addWidget(push_2, 0, 2, 1, 1);

        push_9 = new QPushButton(layoutWidget);
        push_9->setObjectName("push_9");

        gridLayout->addWidget(push_9, 2, 1, 1, 1);

        push_14 = new QPushButton(layoutWidget);
        push_14->setObjectName("push_14");

        gridLayout->addWidget(push_14, 3, 2, 1, 1);

        push_15 = new QPushButton(layoutWidget);
        push_15->setObjectName("push_15");

        gridLayout->addWidget(push_15, 3, 3, 1, 1);

        push_13 = new QPushButton(layoutWidget);
        push_13->setObjectName("push_13");

        gridLayout->addWidget(push_13, 3, 1, 1, 1);

        push_16 = new QPushButton(layoutWidget);
        push_16->setObjectName("push_16");

        gridLayout->addWidget(push_16, 4, 0, 1, 1);

        push_11 = new QPushButton(layoutWidget);
        push_11->setObjectName("push_11");

        gridLayout->addWidget(push_11, 2, 3, 1, 1);

        push_4 = new QPushButton(layoutWidget);
        push_4->setObjectName("push_4");

        gridLayout->addWidget(push_4, 1, 0, 1, 1);

        push_10 = new QPushButton(layoutWidget);
        push_10->setObjectName("push_10");

        gridLayout->addWidget(push_10, 2, 2, 1, 1);

        push_7 = new QPushButton(layoutWidget);
        push_7->setObjectName("push_7");

        gridLayout->addWidget(push_7, 1, 3, 1, 1);

        push_8 = new QPushButton(layoutWidget);
        push_8->setObjectName("push_8");

        gridLayout->addWidget(push_8, 2, 0, 1, 1);

        push_0 = new QPushButton(layoutWidget);
        push_0->setObjectName("push_0");

        gridLayout->addWidget(push_0, 0, 0, 1, 1);

        push_6 = new QPushButton(layoutWidget);
        push_6->setObjectName("push_6");

        gridLayout->addWidget(push_6, 1, 2, 1, 1);

        push_5 = new QPushButton(layoutWidget);
        push_5->setObjectName("push_5");

        gridLayout->addWidget(push_5, 1, 1, 1, 1);

        push_12 = new QPushButton(layoutWidget);
        push_12->setObjectName("push_12");

        gridLayout->addWidget(push_12, 3, 0, 1, 1);

        push_17 = new QPushButton(layoutWidget);
        push_17->setObjectName("push_17");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(push_17->sizePolicy().hasHeightForWidth());
        push_17->setSizePolicy(sizePolicy);

        gridLayout->addWidget(push_17, 4, 1, 1, 1);

        push_3 = new QPushButton(layoutWidget);
        push_3->setObjectName("push_3");

        gridLayout->addWidget(push_3, 0, 3, 1, 1);

        push_1 = new QPushButton(layoutWidget);
        push_1->setObjectName("push_1");

        gridLayout->addWidget(push_1, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 527, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        window->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        push_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        push_9->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        push_14->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        push_15->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        push_13->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        push_16->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        push_11->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        push_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        push_10->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        push_7->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        push_8->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        push_0->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        push_6->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        push_5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        push_12->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        push_17->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        push_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        push_1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
