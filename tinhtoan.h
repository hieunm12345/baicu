#ifndef TINHTOAN_H
#define TINHTOAN_H

#include <QWidget>

namespace Ui {
class TinhToan;
}

class TinhToan : public QWidget
{
    Q_OBJECT

public:
    explicit TinhToan(QWidget *parent = nullptr);
    ~TinhToan();

private slots:
    void on_pushButton_clicked();

signals:
    void sendData(QString a, QString b);
private:
    Ui::TinhToan *ui;
};

#endif // TINHTOAN_H
