#include "qlineedittest.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLineEditTest w;
    w.show();

    return a.exec();
}
