#ifndef MARKETPLACE_H
#define MARKETPLACE_H


#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class marketplace; }
QT_END_NAMESPACE

class reg;
class regC;

class marketplace : public QMainWindow
{
    Q_OBJECT

public:
    marketplace(QWidget *parent = nullptr);
    ~marketplace();



private slots:
    void on_sellerP_clicked();

    void on_pushButton_clicked();


private:
    Ui::marketplace *ui;

    reg* registrationWindow;
    regC* registrationCustomer;




};
#endif // MARKETPLACE_H
