#include "task.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <QMessageBox>




void Task::showMessage(string msg){

    QMessageBox msgBox;
    msgBox.setText(QString::fromStdString(msg));
    msgBox.exec();

}

string* Task::stringToArray(string str){


    size_t size = str.size();
    string *returnArray = new string[size];



    for(size_t  c = 0;  str.length()>c;    c++){

        returnArray[c] = str.substr(c,1);



    }

    return returnArray;

}

