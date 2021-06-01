#include "customer.h"

int main() {
    string person1 = "Hans Peter";
    string person2 = "Pamela";
    int pin1 = 1234, pin2 = 9998;
    double am1 = 66666, am2 = 78345;

    customer cus1, cus2;
    cus1.setName(person1);
    cus1.setPin(pin1);
    cus1.setAmount(am1);

    cus2.setName(person2);
    cus2.setPin(pin2);
    cus2.setAmount(am2);

    std::cout << "this is " << cus1.getName() << " who has " << cus1.getAmount()<< " EUR and a PIN: "<<cus1.getPin() << std::endl;
    std::cout << "this is " << cus2.getName() << " who has " << cus2.getAmount()<< " EUR and a PIN: "<<cus2.getPin() << std::endl;

    std::cout << "Hans Peter goes to the bank" << std::endl;
    cus1.drawMoney();

    std::cout << "Pamela goes to the bank" << std::endl;
    cus2.drawMoney();

    return 0;
}

string customer::getName(){
    return this->name;
}
void customer::setName(string nam){
   this->name = nam;
}

double customer::getAmount(){
    return this->amount;
}
void customer::setAmount(double n){
    this->amount = n;
}

int customer::getPin(){
    return this->pin;
}
void customer::setPin(int n){
    if (n <= 9999 && 0<= n){
        this->pin = n;
    } else{
        std::cout << "this pin is not valid, try again" << std::endl;
    }
}

void customer::printBalance(){
    std::cout << "the amount of money is " << getAmount() << " EUR" << std::endl;
}
bool customer::checkPin(int p){
    if(p == this->getPin()){
        return true;
    }else{
        return false;
    }

}

void customer::drawMoney(){
    std::cout << "please insert PIN" << std::endl;
    int i = -1, j = -1;
    scanf ("%d",&i);

    if(checkPin(i)){
        std::cout << "Hello " << getName() << std::endl;
        printBalance();
        std::cout << "please insert amount" << std::endl;
        scanf ("%d",&j);
        if(j > -1 && j < getAmount()){
            setAmount(getAmount()-j);
            if(getAmount() >= 10){
                printBalance();
            }else{
                printBalance();
                std::cout << "Warning, amount is less than 10 EUR" << std::endl;
            }
        }else{
            std::cout << "ERROR, not enough money" << std::endl;
        }
    }else{
        std::cout << "this pin is not valid, process canceled" << std::endl;
    }

}


