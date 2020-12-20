#include "tinhtoan.h"
#include "ui_tinhtoan.h"

TinhToan::TinhToan(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TinhToan)
{
    ui->setupUi(this);
}

TinhToan::~TinhToan()
{
    delete ui;
}

void TinhToan::on_pushButton_clicked()
{
    QString a;
    QString b;
    a = ui->lineEdit->text();
    b = ui->lineEdit_2->text();
    emit sendData(a, b);
    close();
}
