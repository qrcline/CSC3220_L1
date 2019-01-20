/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *Update_Button;
    QLabel *label;
    QPlainTextEdit *inputTextBox;
    QLabel *label_2;
    QLabel *outputLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Position_Right_Button;
    QPushButton *Position_Left_Button;
    QPushButton *Position_Center_Button;
    QPushButton *Position_End_Button;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *foregroundRed;
    QPushButton *foregroundBlue;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *backgroundRed;
    QPushButton *backgroundBlue;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(649, 388);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Update_Button = new QPushButton(centralWidget);
        Update_Button->setObjectName(QString::fromUtf8("Update_Button"));
        Update_Button->setGeometry(QRect(440, 30, 161, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 150, 109, 39));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        inputTextBox = new QPlainTextEdit(centralWidget);
        inputTextBox->setObjectName(QString::fromUtf8("inputTextBox"));
        inputTextBox->setGeometry(QRect(130, 20, 301, 39));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 121, 39));
        label_2->setFont(font);
        outputLabel = new QLabel(centralWidget);
        outputLabel->setObjectName(QString::fromUtf8("outputLabel"));
        outputLabel->setGeometry(QRect(130, 90, 291, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        outputLabel->setFont(font1);
        outputLabel->setFrameShape(QFrame::Box);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 240, 451, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Position_Right_Button = new QPushButton(layoutWidget);
        Position_Right_Button->setObjectName(QString::fromUtf8("Position_Right_Button"));

        horizontalLayout->addWidget(Position_Right_Button);

        Position_Left_Button = new QPushButton(layoutWidget);
        Position_Left_Button->setObjectName(QString::fromUtf8("Position_Left_Button"));

        horizontalLayout->addWidget(Position_Left_Button);

        Position_Center_Button = new QPushButton(layoutWidget);
        Position_Center_Button->setObjectName(QString::fromUtf8("Position_Center_Button"));

        horizontalLayout->addWidget(Position_Center_Button);

        Position_End_Button = new QPushButton(layoutWidget);
        Position_End_Button->setObjectName(QString::fromUtf8("Position_End_Button"));

        horizontalLayout->addWidget(Position_End_Button);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(120, 150, 341, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        foregroundRed = new QPushButton(layoutWidget1);
        foregroundRed->setObjectName(QString::fromUtf8("foregroundRed"));

        horizontalLayout_2->addWidget(foregroundRed);

        foregroundBlue = new QPushButton(layoutWidget1);
        foregroundBlue->setObjectName(QString::fromUtf8("foregroundBlue"));

        horizontalLayout_2->addWidget(foregroundBlue);

        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(120, 190, 341, 41));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        backgroundRed = new QPushButton(layoutWidget_2);
        backgroundRed->setObjectName(QString::fromUtf8("backgroundRed"));

        horizontalLayout_3->addWidget(backgroundRed);

        backgroundBlue = new QPushButton(layoutWidget_2);
        backgroundBlue->setObjectName(QString::fromUtf8("backgroundBlue"));

        horizontalLayout_3->addWidget(backgroundBlue);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 190, 109, 39));
        label_3->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 649, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Update_Button->setText(QApplication::translate("MainWindow", "Update", nullptr));
        label->setText(QApplication::translate("MainWindow", "Foreground:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Enter Message:", nullptr));
        outputLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        Position_Right_Button->setText(QApplication::translate("MainWindow", "Right", nullptr));
        Position_Left_Button->setText(QApplication::translate("MainWindow", "Left", nullptr));
        Position_Center_Button->setText(QApplication::translate("MainWindow", "Center", nullptr));
        Position_End_Button->setText(QApplication::translate("MainWindow", "End", nullptr));
        foregroundRed->setText(QApplication::translate("MainWindow", "Red", nullptr));
        foregroundBlue->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        backgroundRed->setText(QApplication::translate("MainWindow", "Red", nullptr));
        backgroundBlue->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Background:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
