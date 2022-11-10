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



   confirmInfo(0, 1);




}



void reg::confirmInfo (int seller, int customer)
 {


   if(seller==0){



       this->close();

         sellerW= new sellerWindow;

         sellerW->show();

         customer =1;
     }

    else if  (customer==1) {

       this->close();

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




