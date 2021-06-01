#ifndef EPCPLUS_CUSTOMER_H
#define EPCPLUS_CUSTOMER_H

#include <assert.h>
#include <iostream>
#include <string.h>

using namespace std;

class customer{

private:

    string name;
    double amount;
    int pin;

public:
    string getName();
    void setName(string name);

    double getAmount();
    void setAmount(double n);

    int getPin();
    void setPin(int n);

    void printBalance();
    bool checkPin(int p);
    void drawMoney();
};

#endif //EPCPLUS_CUSTOMER_H

