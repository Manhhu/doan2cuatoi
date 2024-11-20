/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_File;
    QWidget *centralwidget;
    QGroupBox *groupBox_Video;
    QLabel *label_Total_Time;
    QSlider *horizontalSlider_Duration;
    QLabel *label_current_Time;
    QLabel *label_songTitle;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Volume;
    QSlider *horizontalSlider_Volume;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Seek_Backward;
    QPushButton *pushButton_Play_Pause;
    QPushButton *pushButton_Stop;
    QPushButton *pushButton_Seek_Forward;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_Previous;
    QPushButton *pushButton_Next;
    QMenuBar *menubar;
    QMenu *menuOpenFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1604, 984);
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName("actionOpen_File");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox_Video = new QGroupBox(centralwidget);
        groupBox_Video->setObjectName("groupBox_Video");
        groupBox_Video->setGeometry(QRect(205, 155, 790, 450));
        groupBox_Video->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"	border:1px solid black;\n"
"}"));
        label_Total_Time = new QLabel(centralwidget);
        label_Total_Time->setObjectName("label_Total_Time");
        label_Total_Time->setGeometry(QRect(938, 611, 82, 27));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_Total_Time->setFont(font);
        horizontalSlider_Duration = new QSlider(centralwidget);
        horizontalSlider_Duration->setObjectName("horizontalSlider_Duration");
        horizontalSlider_Duration->setGeometry(QRect(250, 616, 661, 18));
        horizontalSlider_Duration->setOrientation(Qt::Orientation::Horizontal);
        label_current_Time = new QLabel(centralwidget);
        label_current_Time->setObjectName("label_current_Time");
        label_current_Time->setGeometry(QRect(161, 611, 82, 27));
        label_current_Time->setFont(font);
        label_songTitle = new QLabel(centralwidget);
        label_songTitle->setObjectName("label_songTitle");
        label_songTitle->setGeometry(QRect(1060, 360, 291, 141));
        QFont font1;
        font1.setPointSize(19);
        font1.setBold(true);
        label_songTitle->setFont(font1);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(781, 661, 231, 102));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Volume = new QPushButton(widget);
        pushButton_Volume->setObjectName("pushButton_Volume");
        pushButton_Volume->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 50px;\n"
"    background-color: rgb(255, 255, 255);\n"
"    color: rgb(52, 51, 64);\n"
"    min-width: 100px;\n"
"    max-width: 100px;\n"
"    min-height: 100px;\n"
"    max-height: 100px;\n"
"    padding: 0px;\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_Volume);

        horizontalSlider_Volume = new QSlider(widget);
        horizontalSlider_Volume->setObjectName("horizontalSlider_Volume");
        horizontalSlider_Volume->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout->addWidget(horizontalSlider_Volume);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(152, 650, 491, 102));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_Seek_Backward = new QPushButton(widget1);
        pushButton_Seek_Backward->setObjectName("pushButton_Seek_Backward");
        pushButton_Seek_Backward->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 50px;\n"
"    background-color: rgb(255, 255, 255);\n"
"    color: rgb(52, 51, 64);\n"
"    min-width: 100px;\n"
"    max-width: 100px;\n"
"    min-height: 100px;\n"
"    max-height: 100px;\n"
"    padding: 0px;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_Seek_Backward);

        pushButton_Play_Pause = new QPushButton(widget1);
        pushButton_Play_Pause->setObjectName("pushButton_Play_Pause");
        pushButton_Play_Pause->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 50px;\n"
"    background-color: rgb(255, 255, 255);\n"
"    color: rgb(52, 51, 64);\n"
"    min-width: 100px;\n"
"    max-width: 100px;\n"
"    min-height: 100px;\n"
"    max-height: 100px;\n"
"    padding: 0px;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_Play_Pause);

        pushButton_Stop = new QPushButton(widget1);
        pushButton_Stop->setObjectName("pushButton_Stop");
        pushButton_Stop->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 50px;\n"
"    background-color: rgb(255, 255, 255);\n"
"    color: rgb(52, 51, 64);\n"
"    min-width: 100px;\n"
"    max-width: 100px;\n"
"    min-height: 100px;\n"
"    max-height: 100px;\n"
"    padding: 0px;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_Stop);

        pushButton_Seek_Forward = new QPushButton(widget1);
        pushButton_Seek_Forward->setObjectName("pushButton_Seek_Forward");
        pushButton_Seek_Forward->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 50px;\n"
"    background-color: rgb(255, 255, 255);\n"
"    color: rgb(52, 51, 64);\n"
"    min-width: 100px;\n"
"    max-width: 100px;\n"
"    min-height: 100px;\n"
"    max-height: 100px;\n"
"    padding: 0px;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_Seek_Forward);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(330, 790, 351, 102));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_Previous = new QPushButton(widget2);
        pushButton_Previous->setObjectName("pushButton_Previous");
        pushButton_Previous->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 50px;\n"
"    background-color: rgb(255, 255, 255);\n"
"    color: rgb(52, 51, 64);\n"
"    min-width: 100px;\n"
"    max-width: 100px;\n"
"    min-height: 100px;\n"
"    max-height: 100px;\n"
"    padding: 0px;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(pushButton_Previous);

        pushButton_Next = new QPushButton(widget2);
        pushButton_Next->setObjectName("pushButton_Next");
        pushButton_Next->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 50px;\n"
"    background-color: rgb(255, 255, 255);\n"
"    color: rgb(52, 51, 64);\n"
"    min-width: 100px;\n"
"    max-width: 100px;\n"
"    min-height: 100px;\n"
"    max-height: 100px;\n"
"    padding: 0px;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(pushButton_Next);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1604, 25));
        menuOpenFile = new QMenu(menubar);
        menuOpenFile->setObjectName("menuOpenFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOpenFile->menuAction());
        menuOpenFile->addAction(actionOpen_File);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_File->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        groupBox_Video->setTitle(QString());
        label_Total_Time->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        label_current_Time->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        label_songTitle->setText(QCoreApplication::translate("MainWindow", "Name_File", nullptr));
        pushButton_Volume->setText(QString());
        pushButton_Seek_Backward->setText(QString());
        pushButton_Play_Pause->setText(QString());
        pushButton_Stop->setText(QString());
        pushButton_Seek_Forward->setText(QString());
        pushButton_Previous->setText(QString());
        pushButton_Next->setText(QString());
        menuOpenFile->setTitle(QCoreApplication::translate("MainWindow", "OpenFile", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
