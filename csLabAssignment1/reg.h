#ifndef REG_H
#define REG_H

#include <QDialog>
#include <marketplace.h>


namespace Ui {
class reg;
}

class sellerWindow;


class reg : public QDialog
{
    Q_OBJECT

public:
    explicit reg(QWidget *parent = nullptr);
    ~reg();



private slots:


     void on_confirmInfo_clicked();

     void on_pushButton_clicked();

private:

    Ui::reg *ui;
       sellerWindow* sellerW;
       marketplace* marketW;



};

#endif // REG_H
