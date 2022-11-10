#include "sellerwindow.h"
#include "ui_sellerwindow.h"

#include "customerwindow.h"


sellerWindow::sellerWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sellerWindow)
{
    ui->setupUi(this);
}

sellerWindow::~sellerWindow()
{
    delete ui;
}



void sellerWindow::on_back_clicked( )
{

    this->close();
    registrationWindow= new reg(this);
    registrationWindow->show();
    // registrationWindow->confirmInfo(seller, customer);
}






void sellerWindow::on_add_clicked()
{
   product=ui->productInput->text();
   price=ui->priceInput->text();
   quantity=ui->quantityInput->text();
   category=ui->categoryInput->text();

   customerW->setProductInfo(product, price,quantity,category);

}

