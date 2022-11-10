#include "sellerwindow.h"
#include "ui_sellerwindow.h"
#include <QString>
#include "customerwindow.h"


sellerWindow::sellerWindow(QWidget *parent)
   : QDialog(parent),
    ui(new Ui::sellerWindow)
{
    ui->setupUi(this);
}

sellerWindow::~sellerWindow()
{
    delete ui;
}



void sellerWindow::on_back_clicked(int seller )
{

       seller=0;
      // registrationWindow->confirmInfo(seller, customer);
}


void sellerWindow::on_back_clicked()
{

    this->close();
    registrationWindow= new reg(this);
    registrationWindow->show();

}



void sellerWindow::on_add_clicked()
{

   product= ui->productInput->text();
   price= ui->priceInput->text().toDouble();
   quantity=ui->quantityInput->text().toInt();
  category=ui->categoryInput->text();
  struct product lina;
  lina.name=product;
  lina.category=category;
  lina.price=price;
  lina.quantity=quantity;

  this->close();
  registrationWindow= new reg(this);
  registrationWindow->show();

  // customerW->setProductInfo(product,price,quantity,category);
}

