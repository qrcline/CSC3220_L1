#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Update_Button_clicked()
{

    //Updates the output box with the user input text
    QString message= ui->inputTextBox->toPlainText();
    if(message.length()>0)
    ui->outputLabel->setText(message);
}


void MainWindow::on_foregroundRed_clicked()
{
    QPalette palette=ui->outputLabel->palette();
    palette.setColor(QPalette::WindowText,Qt::red);

    ui->outputLabel->setPalette(palette);
}

void MainWindow::on_foregroundBlue_clicked()
{
    QPalette palette=ui->outputLabel->palette();
    palette.setColor(QPalette::WindowText,Qt::blue);

    ui->outputLabel->setPalette(palette);
}




void MainWindow::on_backgroundRed_clicked()
{
    QPalette palette=ui->outputLabel->palette();
    palette.setColor(QPalette::Window,Qt::red);
    ui->outputLabel->setAutoFillBackground(true);
    ui->outputLabel->setPalette(palette);
}

void MainWindow::on_backgroundBlue_clicked()
{
    QPalette palette=ui->outputLabel->palette();
    palette.setColor(QPalette::Window,Qt::blue);
    ui->outputLabel->setAutoFillBackground(true);
    ui->outputLabel->setPalette(palette);
}

void MainWindow::on_Position_End_Button_clicked()
{
    ui->outputLabel->setAlignment(Qt::AlignHCenter)
}

void MainWindow::on_Position_Right_Button_clicked()
{

}

void MainWindow::on_Position_Left_Button_clicked()
{

}

void MainWindow::on_Position_Center_Button_clicked()
{
    ui->outputLabel->setAlignment(Qt::AlignHCenter);
}
