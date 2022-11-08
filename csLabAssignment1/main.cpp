#include "marketplace.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    marketplace w;
    w.show();
    return a.exec();
}
