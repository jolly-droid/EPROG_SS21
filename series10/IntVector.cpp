#include "IntVector.h"
int main(int argc, char* argv[]){ //int argc, char* argv[])
    int l2 = 8;
    int arr2[] = {9,8,7,6,5,34,2,3};

    IntVector z = IntVector();
    IntVector x = IntVector(l2, arr2);
    IntVector eratosti = IntVector(28);

    cout << "the vector z is " << z.getLength() << "long" << endl;
    for (int i = 0; i < z.getLength(); ++i) {
        cout << "z[" << i << "]= " << z.getCoeff()[i] << endl;
    }

    cout << "the vector x is " << x.getLength() << "long" << endl;
    for (int i = 0; i < x.getLength(); ++i) {
        cout << "x[" << i << "]= " << x.getCoeff()[i] << endl;
    }

    cout << "aufgabe 6" << endl;
    cout << "the vector erastoti is " << eratosti.getLength() << "long" << endl;
    for (int i = 0; i < eratosti.getLength(); ++i) {
        cout << "e[" << i << "]= " << eratosti.getCoeff()[i] << endl;
    }

    return 0;
}

int IntVector::getLength(){
    return length;
}
void IntVector::setLength(int l){
    length = l;
}

int* IntVector::getCoeff(){
    return coeff;
}
void IntVector::setCoeff(int* a){
    coeff = a;
}



