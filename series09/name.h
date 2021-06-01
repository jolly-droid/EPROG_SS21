#ifndef EPCPLUS_NAME_H
#define EPCPLUS_NAME_H

#include <cassert>
#include <iostream>
#include <cstring>
#include <utility>
#include <string>
#include <locale>

using namespace std;

class name{
private:
    string first_name;
    string last_name;

public:
    void setFirstName(string first);
    string getFirstName();

    void setLastName(string Last);
    string getLastName();

    void setFullName(const string& full);
    void printName();
    int spacecounter(string n);


};

#endif //EPCPLUS_NAME_H

