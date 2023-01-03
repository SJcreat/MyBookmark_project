#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void keyPressEvent(QKeyEvent *e);

    void on_Button_Q_clicked();

    void on_Button_W_clicked();

    void on_Button_E_clicked();

    void on_Button_R_clicked();

    void on_Button_A_clicked();

    void on_Button_S_clicked();

    void on_Button_D_clicked();

    void on_Button_F_clicked();

    void on_Button_Z_clicked();

    void on_Button_X_clicked();

    void on_Button_C_clicked();

    void on_Button_F3_clicked();

    void on_Button_F1_clicked();

    void on_Button_F2_clicked();

    void on_Button_F4_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
