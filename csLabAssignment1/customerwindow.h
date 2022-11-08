#ifndef CUSTOMERWINDOW_H
#define CUSTOMERWINDOW_H

#include <QDialog>
#include <reg.h>
#include "sellerwindow.h"


namespace Ui {
class customerWindow;
}

class customerWindow : public QDialog
{
    Q_OBJECT

public:
    explicit customerWindow(QWidget *parent = nullptr);
    ~customerWindow();

    void setProductInfo(QString product,QString price, QString quantity,QString category);


private slots:
    void on_back_clicked();

private:
    Ui::customerWindow *ui;
    reg* registrationWindow;

};

#endif // CUSTOMERWINDOW_H
