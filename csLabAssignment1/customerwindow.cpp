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

void customerWindow::setProductInfo(QString product,QString price, QString quantity,QString category){



  // ui->productList->setText(x);
    ui->productList->setText("b");
   ui->productList->setText(product+" "+price+"$"+"\n quantity:"+quantity+ "(category: "+category+")");
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



void customerWindow::on_pushButton_clicked() // add product
{


    if (addName==ui->lineEdit_3->text()){

        ui->cartL->setText(addName);
    }
}


void customerWindow::on_pushButton_2_clicked() // confirm buying
{


}

