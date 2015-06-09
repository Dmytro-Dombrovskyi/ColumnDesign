#include "calculatestructures.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculateStructures w;
    w.show();

    return a.exec();
}
