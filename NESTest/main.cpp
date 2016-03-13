#include "cartridgedetails.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CartridgeDetails w;
    w.show();

    return a.exec();
}
