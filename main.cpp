#include "calculator.h"
#include <QApplication>

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calculator w;
    w.show();



    return a.exec();
}
