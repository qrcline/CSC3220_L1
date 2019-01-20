#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Update_Button_clicked();

    void on_foregroundRed_clicked();

    void on_foregroundBlue_clicked();

    void on_backgroundRed_clicked();

    void on_backgroundBlue_clicked();

    void on_Position_End_Button_clicked();

    void on_Position_Right_Button_clicked();

    void on_Position_Left_Button_clicked();

    void on_Position_Center_Button_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
