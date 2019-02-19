#include "qlabeltest.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabelTest w;
    w.show();

    return a.exec();
}
