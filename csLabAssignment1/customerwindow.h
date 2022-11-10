#ifndef CUSTOMERWINDOW_H
#define CUSTOMERWINDOW_H

#include <QDialog>
#include <regc.h>
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


    void display();
    void setProductInfo(QString product,QString price, QString quantity,QString category);
  //  void setProductInfo(QString product,QString price, QString quantity,QString category);



    QString name;
    QString addName;
private slots:

    void on_back_clicked();

    void on_pushButton_4_clicked();


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::customerWindow *ui;
    reg* registrationWindow;
    sellerWindow* sellerW;



};

#endif // CUSTOMERWINDOW_H
