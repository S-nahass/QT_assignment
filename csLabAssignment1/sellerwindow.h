#ifndef SELLERWINDOW_H
#define SELLERWINDOW_H

#include <QDialog>
#include <reg.h>





namespace Ui {
class sellerWindow;
}
class customerWindow;

class sellerWindow : public QDialog
{
    Q_OBJECT

public:
    explicit sellerWindow(QWidget *parent = nullptr);
    ~sellerWindow();

    void on_back_clicked(int seller);

    QString product;
    QString category;
    QString quantity;
    QString price;

private slots:


    void on_back_clicked();



    void on_add_clicked();

private:
    Ui::sellerWindow *ui;
    reg* registrationWindow;
    customerWindow* customerW;




};

#endif // SELLERWINDOW_H
