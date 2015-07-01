#include "Parser.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <QMessageBox>




void ParserFormula::showMessage(string msg){

    QMessageBox msgBox;
    msgBox.setText(QString::fromStdString(msg));
    msgBox.exec();

}


