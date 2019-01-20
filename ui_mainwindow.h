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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *Update_Button;
    QLabel *outputLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Position_Right_Button;
    QPushButton *Position_Left_Button;
    QPushButton *Position_Center_Button;
    QPushButton *Position_End_Button;
    QLabel *label_4;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *foregroundRed;
    QPushButton *foregroundBlue;
    QLabel *label_3;
    QPushButton *backgroundRed;
    QPushButton *backgroundBlue;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *inputTextBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(564, 353);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Update_Button = new QPushButton(centralWidget);
        Update_Button->setObjectName(QString::fromUtf8("Update_Button"));
        Update_Button->setGeometry(QRect(420, 12, 130, 30));
        Update_Button->setCursor(QCursor(Qt::PointingHandCursor));
        outputLabel = new QLabel(centralWidget);
        outputLabel->setObjectName(QString::fromUtf8("outputLabel"));
        outputLabel->setGeometry(QRect(150, 70, 261, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(17);
        font.setBold(true);
        font.setWeight(75);
        outputLabel->setFont(font);
        outputLabel->setFrameShape(QFrame::Box);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 220, 391, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Position_Right_Button = new QPushButton(layoutWidget);
        Position_Right_Button->setObjectName(QString::fromUtf8("Position_Right_Button"));
        Position_Right_Button->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(Position_Right_Button);

        Position_Left_Button = new QPushButton(layoutWidget);
        Position_Left_Button->setObjectName(QString::fromUtf8("Position_Left_Button"));
        Position_Left_Button->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(Position_Left_Button);

        Position_Center_Button = new QPushButton(layoutWidget);
        Position_Center_Button->setObjectName(QString::fromUtf8("Position_Center_Button"));
        Position_Center_Button->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(Position_Center_Button);

        Position_End_Button = new QPushButton(centralWidget);
        Position_End_Button->setObjectName(QString::fromUtf8("Position_End_Button"));
        Position_End_Button->setGeometry(QRect(420, 270, 130, 30));
        Position_End_Button->setCursor(QCursor(Qt::PointingHandCursor));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(160, 190, 126, 23));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(21, 115, 391, 71));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        foregroundRed = new QPushButton(widget);
        foregroundRed->setObjectName(QString::fromUtf8("foregroundRed"));
        foregroundRed->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(foregroundRed, 0, 1, 1, 1);

        foregroundBlue = new QPushButton(widget);
        foregroundBlue->setObjectName(QString::fromUtf8("foregroundBlue"));
        foregroundBlue->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(foregroundBlue, 0, 2, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        backgroundRed = new QPushButton(widget);
        backgroundRed->setObjectName(QString::fromUtf8("backgroundRed"));
        backgroundRed->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(backgroundRed, 1, 1, 1, 1);

        backgroundBlue = new QPushButton(widget);
        backgroundBlue->setObjectName(QString::fromUtf8("backgroundBlue"));
        backgroundBlue->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(backgroundBlue, 1, 2, 1, 1);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(22, 12, 391, 31));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        inputTextBox = new QPlainTextEdit(widget1);
        inputTextBox->setObjectName(QString::fromUtf8("inputTextBox"));

        horizontalLayout_2->addWidget(inputTextBox);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 564, 21));
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
        outputLabel->setText(QApplication::translate("MainWindow", "Input Message", nullptr));
        Position_Right_Button->setText(QApplication::translate("MainWindow", "Right", nullptr));
        Position_Left_Button->setText(QApplication::translate("MainWindow", "Left", nullptr));
        Position_Center_Button->setText(QApplication::translate("MainWindow", "Center", nullptr));
        Position_End_Button->setText(QApplication::translate("MainWindow", "End", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Allignment:", nullptr));
        label->setText(QApplication::translate("MainWindow", "Foreground:", nullptr));
        foregroundRed->setText(QApplication::translate("MainWindow", "Red", nullptr));
        foregroundBlue->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Background:", nullptr));
        backgroundRed->setText(QApplication::translate("MainWindow", "Red", nullptr));
        backgroundBlue->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Enter Message:", nullptr));
        inputTextBox->setPlainText(QApplication::translate("MainWindow", "Input Message", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
