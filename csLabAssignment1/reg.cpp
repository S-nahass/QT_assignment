#include "reg.h"
#include "ui_reg.h"

#include "sellerwindow.h"




reg::reg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reg)
{
    ui->setupUi(this);
}

reg::~reg()
{
    delete ui;
}

void reg::on_confirmInfo_clicked()
{

    this->close();

           sellerW= new sellerWindow;

           sellerW->show();
}







void reg::on_pushButton_clicked()
{
    this->close();

    marketW = new marketplace;

    marketW->show();
}

