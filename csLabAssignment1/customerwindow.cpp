#include "customerwindow.h"
#include "ui_customerwindow.h"
#include "sellerwindow.h"




customerWindow::customerWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerWindow)
{
    ui->setupUi(this);


}



customerWindow::~customerWindow()
{
    delete ui;
}

void customerWindow::setProductInfo(QString product){

QString x = product;

   ui->productList->setText(x);
   // ui->productList->setText(product+" "+price+"$"+"\n quantity:"+quantity+ "(category: "+category+")");
//ui->productList->text()

}

void customerWindow::display(){


}

void customerWindow::on_back_clicked()
{
    this->close();
    registrationWindow= new reg(this);
    registrationWindow->show();


}


void customerWindow::on_pushButton_4_clicked() //search product by name || category
{

    name = ui->nameS->text();

    if (name==ui->productList->text()){

        ui->productList->setText(name);

    }

}


