#include "calculator.h"
#include <QApplication>
#include "formula.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calculator w;
    w.show();

    Formula Formula;

    return a.exec();
}
