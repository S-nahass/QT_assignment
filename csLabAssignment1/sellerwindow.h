#ifndef SELLERWINDOW_H
#define SELLERWINDOW_H

#include <QDialog>
#include <reg.h>


namespace Ui {
class sellerWindow;
}

class sellerWindow : public QDialog
{
    Q_OBJECT

public:
    explicit sellerWindow(QWidget *parent = nullptr);
    ~sellerWindow();

    void on_back_clicked(int seller);


private slots:


    void on_back_clicked();



    void on_add_clicked();

private:
    Ui::sellerWindow *ui;
    reg* registrationWindow;
           customerWindow* customerW;

    int seller;
    int customer;

    QString product;
    QString category;
    int quantity;
    double price;

};

#endif // SELLERWINDOW_H
