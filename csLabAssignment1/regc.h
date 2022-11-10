#ifndef REGC_H
#define REGC_H

#include <QDialog>
#include "marketplace.h"


namespace Ui {
class regC;
}
class customerWindow;
class marketplace;

class regC : public QDialog
{
    Q_OBJECT

public:
    explicit regC(QWidget *parent = nullptr);
    ~regC();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::regC *ui;

    marketplace* marketW;

           customerWindow* customerW;

};

#endif // REGC_H
