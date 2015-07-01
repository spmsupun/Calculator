#include "parser.h"

Parser::Parser()
{

}

string* Parser::stringToArray(string str){


    size_t size = str.size();
    string *returnArray = new string[size];



    for(size_t  c = 0;  str.length()>c;    c++){

        returnArray[c] = str.substr(c,1);



    }

    return returnArray;

}

