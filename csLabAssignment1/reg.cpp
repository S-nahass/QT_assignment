#include "reg.h"
#include "ui_reg.h"

#include "sellerwindow.h"
#include "customerwindow.h"




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

  void confirmInfo(int seller, int customer);



}



void reg::confirmInfo (int seller, int customer)
 {


   if(seller==0){



         sellerW= new sellerWindow;

         sellerW->show();

     }

    else if (customer==0) {

         customerW= new customerWindow;

         customerW->show();


     }

 }



/*void reg::confirmInfo (int seller, int customer)
{
    if(seller==0){

        sellerW= new sellerWindow;

        sellerW->show();


    }
    else if(customer==0) {

        customerW= new customerWindow;

        customerW->show();

    }

}

*/




