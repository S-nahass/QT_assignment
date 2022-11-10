#include "customerwindow.h"
#include "ui_customerwindow.h"
#include <QMessageBox>



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


    ui->productList->setText(product+" "+price+"$"+"\n quantity:"+quantity+ "(category: "+category+")");
//ui->productList->text()

}

void customerWindow::on_back_clicked()
{
    this->close();
    registrationWindow= new reg(this);
    registrationWindow->show();


}











void customerWindow::on_confirm_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("total price is  ");
    msgBox.exec();
}

