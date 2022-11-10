#include "regc.h"
#include "ui_regc.h"
#include "customerwindow.h"
#include "marketplace.h"



regC::regC(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regC)
{
    ui->setupUi(this);
}

regC::~regC()
{
    delete ui;
}

void regC::on_pushButton_clicked()
{

    this->close();

    customerW= new customerWindow;

    customerW->show();


}


void regC::on_pushButton_2_clicked()
{
    this->close();

    marketW = new marketplace;

    marketW->show();
}

