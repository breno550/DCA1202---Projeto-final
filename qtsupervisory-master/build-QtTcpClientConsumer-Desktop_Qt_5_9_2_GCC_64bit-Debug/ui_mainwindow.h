/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonGet;
    QWidget *widget;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_connect;
    QPushButton *pushButton_disconnect;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEditIP;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_start;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_update;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSlider *horizontalSlider;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(773, 536);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonGet = new QPushButton(centralWidget);
        pushButtonGet->setObjectName(QStringLiteral("pushButtonGet"));
        pushButtonGet->setGeometry(QRect(140, 450, 101, 29));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(330, 20, 401, 421));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 10, 283, 441));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_connect = new QPushButton(layoutWidget);
        pushButton_connect->setObjectName(QStringLiteral("pushButton_connect"));

        horizontalLayout->addWidget(pushButton_connect);

        pushButton_disconnect = new QPushButton(layoutWidget);
        pushButton_disconnect->setObjectName(QStringLiteral("pushButton_disconnect"));

        horizontalLayout->addWidget(pushButton_disconnect);


        formLayout->setLayout(1, QFormLayout::SpanningRole, horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEditIP = new QLineEdit(layoutWidget);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));

        verticalLayout->addWidget(lineEditIP);


        formLayout->setLayout(0, QFormLayout::SpanningRole, verticalLayout);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, textEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_start = new QPushButton(layoutWidget);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));

        horizontalLayout_2->addWidget(pushButton_start);

        pushButton_stop = new QPushButton(layoutWidget);
        pushButton_stop->setObjectName(QStringLiteral("pushButton_stop"));

        horizontalLayout_2->addWidget(pushButton_stop);


        formLayout->setLayout(5, QFormLayout::SpanningRole, horizontalLayout_2);

        pushButton_update = new QPushButton(layoutWidget);
        pushButton_update->setObjectName(QStringLiteral("pushButton_update"));

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton_update);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider);


        formLayout->setLayout(4, QFormLayout::SpanningRole, verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 773, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButtonGet->setText(QApplication::translate("MainWindow", "getData", Q_NULLPTR));
        pushButton_connect->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        pushButton_disconnect->setText(QApplication::translate("MainWindow", "Disconnect", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "IP do servidor", Q_NULLPTR));
        pushButton_start->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        pushButton_stop->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        pushButton_update->setText(QApplication::translate("MainWindow", "Update", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Timing", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
