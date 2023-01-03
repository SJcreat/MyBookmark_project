#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>
#include <QUrl>
#include <QKeyEvent>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QDesktopServices::openUrl(QUrl("file:///C:/Users/LEESANGJUN/Desktop/업무"));
}

void MainWindow::on_pushButton_2_clicked()
{
    QDesktopServices::openUrl(QUrl("file:///C:/Users/LEESANGJUN/Desktop/업무/통신관련"));
}

void MainWindow::on_pushButton_3_clicked()
{
    QDesktopServices::openUrl(QUrl("file://172.16.100.20/06_01_연구소_도면/전기도면/1.PROGRAM/BlueCON100 프로그램"));
}

void MainWindow::on_pushButton_4_clicked()
{
    QDesktopServices::openUrl(QUrl("file://172.16.100.20/06_01_연구소_도면/00 출도일자별도면/"));
}

void MainWindow::on_pushButton_5_clicked()
{
    QDesktopServices::openUrl(QUrl("file://172.16.100.20/06_01_연구소_도면/전기도면/3. 최신 전기도면"));
}

void MainWindow::on_pushButton_6_clicked()
{
    QDesktopServices::openUrl(QUrl("file://172.16.100.22/ShareElecDraw/1. 전기도면 기준/2. 기종별 도면"));
}

void MainWindow::on_pushButton_7_clicked()
{
    QDesktopServices::openUrl(QUrl("file:///C:/Users/LEESANGJUN/Desktop/업무/DT기준.xlsx"));
}

void MainWindow::on_pushButton_8_clicked()
{
    QDesktopServices::openUrl(QUrl("file://172.16.100.22/Research4/033_WJC_Hydraulic_project/AS결과보고서"));
}

void MainWindow::on_pushButton_9_clicked()
{
    QDesktopServices::openUrl(QUrl("file:///C:/Users/LEESANGJUN/Desktop/업무/블루콘 옵션도면"));
}

void MainWindow::on_pushButton_10_clicked()
{
    QDesktopServices::openUrl(QUrl("file://172.16.100.22/ShareElecDraw/9. 용량표/통합용량표"));
}

void MainWindow::on_pushButton_11_clicked()
{
    QDesktopServices::openUrl(QUrl("file:///C:/Users/LEESANGJUN/Desktop/업무/모니터 사진"));
}



void MainWindow::on_Button_Q_clicked()
{
     QDesktopServices::openUrl(QUrl("file:///C:/Users/LEESANGJUN/Desktop/업무/전기도면"));
}

void MainWindow::on_Button_W_clicked()
{
    QDesktopServices::openUrl(QUrl("file:///C:/Users/LEESANGJUN/Desktop/업무/통합용량표"));
}

void MainWindow::on_Button_E_clicked()
{
    QDesktopServices::openUrl(QUrl("file://172.16.100.20/06_03_넘버링파일/c.프로그램언어파일"));
}

void MainWindow::on_Button_R_clicked()
{
    QDesktopServices::openUrl(QUrl("file:///C:/Users/LEESANGJUN/Desktop/업무/블루콘 기종별 모터 규격"));
}

void MainWindow::on_Button_A_clicked()
{
 QDesktopServices::openUrl(QUrl("file:///Z:/home/sjlee/bluecon1_project"));
}

void MainWindow::on_Button_S_clicked()
{

       QDesktopServices::openUrl(QUrl("file:///Z:/home/sjlee/project"));
}

void MainWindow::on_Button_D_clicked()
{

    QDesktopServices::openUrl(QUrl("file:///D:/trunk"));
}
void MainWindow::on_Button_F_clicked()
{
   QDesktopServices::openUrl(QUrl("file://172.16.100.20/06_02_연구소_일반/00 매뉴얼"));
}

void MainWindow::on_Button_Z_clicked()
{
   QDesktopServices::openUrl(QUrl("file://172.16.100.20/04_02_생산관련전체/출하사진"));
}

void MainWindow::on_Button_X_clicked()
{
    QDesktopServices::openUrl(QUrl("file://172.16.100.20/06_01_연구소_도면/전기도면/5.유압블록스티커및시퀀스차트"));
}

void MainWindow::on_Button_C_clicked()
{
    QDesktopServices::openUrl(QUrl("file://172.16.100.22/RD_Common/5.인증자료/02.S-Mark, KCS-Mark 자료"));
}
void MainWindow::on_Button_F1_clicked()
{
     QDesktopServices::openUrl(QUrl("file:///C:/Users/LEESANGJUN/Desktop/shared_folder"));
}

void MainWindow::on_Button_F2_clicked()
{
     QDesktopServices::openUrl(QUrl("file:///C:/Users/LEESANGJUN/Desktop/휴게소"));
}

void MainWindow::on_Button_F3_clicked()
{
   QDesktopServices::openUrl(QUrl("file://172.16.100.20/06_01_연구소_도면/16 가소화파트/01_표준도면"));
}
void MainWindow::on_Button_F4_clicked()
{
     QDesktopServices::openUrl(QUrl("file:///C:/Users/LEESANGJUN/Desktop/업무/언어번역 프로그램"));
}


void MainWindow::keyPressEvent(QKeyEvent * event)
{

    if (event->key() == Qt::Key_1)
    {
        ui->pushButton->click();
    }
    if (event->key() == Qt::Key_2)
    {
        ui->pushButton_2->click();
    }
    if (event->key() == Qt::Key_3)
    {
        ui->pushButton_3->click();
    }
    if (event->key() == Qt::Key_4)
    {
        ui->pushButton_4->click();
    }
    if (event->key() == Qt::Key_5)
    {
        ui->pushButton_5->click();
    }
    if (event->key() == Qt::Key_6)
    {
        ui->pushButton_6->click();
    }
    if (event->key() == Qt::Key_7)
    {
        ui->pushButton_7->click();
    }
    if (event->key() == Qt::Key_8)
    {
        ui->pushButton_8->click();
    }
    if (event->key() == Qt::Key_9)
    {
        ui->pushButton_9->click();
    }
    if (event->key() == Qt::Key_0)
    {
        ui->pushButton_10->click();
    }
    if (event->key() == Qt::Key_Period)
    {
        ui->pushButton_11->click();
    }
    if (event->key() == Qt::Key_Q)
    {
        ui->Button_Q->click();
    }
    if (event->key() == Qt::Key_W)
    {
        ui->Button_W->click();
    }
    if (event->key() == Qt::Key_E)
    {
        ui->Button_E->click();
    }
    if (event->key() == Qt::Key_R)
    {
        ui->Button_R->click();
    }
    if (event->key() == Qt::Key_A)
    {
        ui->Button_A->click();
    }
    if (event->key() == Qt::Key_S)
    {
        ui->Button_S->click();
    }
    if (event->key() == Qt::Key_D)
    {
        ui->Button_D->click();
    }
    if (event->key() == Qt::Key_F)
    {
        ui->Button_F->click();
    }
    if (event->key() == Qt::Key_Z)
    {
        ui->Button_Z->click();
    }
    if (event->key() == Qt::Key_X)
    {
        ui->Button_X->click();
    }
    if (event->key() == Qt::Key_C)
    {
        ui->Button_C->click();
    }
    if (event->key() == Qt::Key_F1)
    {
        ui->Button_F1->click();
    }
    if (event->key() == Qt::Key_F2)
    {
        ui->Button_F2->click();
    }
    if (event->key() == Qt::Key_F3)
    {
        ui->Button_F3->click();
    }
    if (event->key() == Qt::Key_F4)
    {
        ui->Button_F4->click();
    }

}








