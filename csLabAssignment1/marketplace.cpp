#include "marketplace.h"
#include "ui_marketplace.h"
#include "reg.h"




marketplace::marketplace(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::marketplace)
{
    ui->setupUi(this);
}

marketplace::~marketplace()
{
    delete ui;
}


void marketplace::on_sellerP_clicked()
{


    seller=0;



    registrationWindow = new reg;

       registrationWindow->confirmInfo(seller, customer);

      registrationWindow->show();
      this->close();




}


void marketplace::on_pushButton_clicked()
{

    customer=0;

    registrationWindow = new reg;


    registrationWindow->confirmInfo(seller, customer);

      registrationWindow-> show();
this->close();

}

