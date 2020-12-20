#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    connect(a, SIGNAL(sendData(QString, QString)), this, SLOT(on_sendData(QString, QString)));
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
        a->show();
}

void MainWindow::on_sendData(QString aa, QString bb)
{
    double aaa = aa.toDouble();
    double bbb = bb.toDouble();
    double tong = aaa + bbb;
    double hieu = aaa - bbb;
    double tich = aaa * bbb;
    double thuong = aaa / bbb;
    ui->lineEdit->setText(QString::number(tong));
    ui->lineEdit_2->setText(QString::number(hieu));
    ui->lineEdit_3->setText(QString::number(tich));
    ui->lineEdit_4->setText(QString::number(thuong));
}
