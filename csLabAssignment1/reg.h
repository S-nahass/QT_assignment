#ifndef REG_H
#define REG_H

#include <QDialog>
#include <marketplace.h>


namespace Ui {
class reg;
}

class sellerWindow;
class customerWindow;

class reg : public QDialog
{
    Q_OBJECT

public:
    explicit reg(QWidget *parent = nullptr);
    ~reg();

     void confirmInfo(int seller, int customer);

private slots:


     void on_confirmInfo_clicked();

private:

    Ui::reg *ui;
       sellerWindow* sellerW;
       customerWindow* customerW;

};

#endif // REG_H
