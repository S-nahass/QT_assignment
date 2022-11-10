#include "marketplace.h"
#include "ui_marketplace.h"
#include "reg.h"
#include "regc.h"




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






    registrationWindow = new reg;



      registrationWindow->show();
      this->close();






}


void marketplace::on_pushButton_clicked()
{


    registrationCustomer = new regC;

    registrationCustomer-> show();

    this->close();

}

