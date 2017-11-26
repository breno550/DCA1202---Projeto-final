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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditIp;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSlider *horizontalSliderMin;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout_3;
    QSlider *horizontalSliderMax;
    QLabel *label_2;
    QLCDNumber *lcdNumber_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSlider *horizontalSliderTimming;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonPut;
    QPushButton *pushButtonStop;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(638, 607);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(12, 11, 611, 531));
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEditIp = new QLineEdit(widget);
        lineEditIp->setObjectName(QStringLiteral("lineEditIp"));

        verticalLayout->addWidget(lineEditIp);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonConnect = new QPushButton(widget);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));

        horizontalLayout->addWidget(pushButtonConnect);

        pushButtonDisconnect = new QPushButton(widget);
        pushButtonDisconnect->setObjectName(QStringLiteral("pushButtonDisconnect"));

        horizontalLayout->addWidget(pushButtonDisconnect);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSliderMin = new QSlider(widget);
        horizontalSliderMin->setObjectName(QStringLiteral("horizontalSliderMin"));
        horizontalSliderMin->setMinimum(1);
        horizontalSliderMin->setMaximum(15);
        horizontalSliderMin->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSliderMin);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lcdNumber = new QLCDNumber(widget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setProperty("value", QVariant(1));

        horizontalLayout_2->addWidget(lcdNumber);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSliderMax = new QSlider(widget);
        horizontalSliderMax->setObjectName(QStringLiteral("horizontalSliderMax"));
        horizontalSliderMax->setMinimum(16);
        horizontalSliderMax->setMaximum(30);
        horizontalSliderMax->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSliderMax);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lcdNumber_2 = new QLCDNumber(widget);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setProperty("value", QVariant(16));

        horizontalLayout_3->addWidget(lcdNumber_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSliderTimming = new QSlider(widget);
        horizontalSliderTimming->setObjectName(QStringLiteral("horizontalSliderTimming"));
        horizontalSliderTimming->setMinimum(500);
        horizontalSliderTimming->setMaximum(10000);
        horizontalSliderTimming->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSliderTimming);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButtonPut = new QPushButton(widget);
        pushButtonPut->setObjectName(QStringLiteral("pushButtonPut"));

        horizontalLayout_5->addWidget(pushButtonPut);

        pushButtonStop = new QPushButton(widget);
        pushButtonStop->setObjectName(QStringLiteral("pushButtonStop"));

        horizontalLayout_5->addWidget(pushButtonStop);


        verticalLayout_3->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_3);

        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout_6->addWidget(listWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 638, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderMin, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSliderMax, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButtonConnect->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        pushButtonDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Min", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Max", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Timming(s):", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        pushButtonPut->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        pushButtonStop->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
