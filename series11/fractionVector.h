#include "fraction.h"

#ifndef EPCPLUS_FRACTIONVECTOR_H
#define EPCPLUS_FRACTIONVECTOR_H

class fractionVector {
private:
    int length;
    fraction* coeff;

public:
    int getLength();
    fraction* getCoeff();
    fractionVector();
    fractionVector(int length);
    fractionVector(int length, fraction* coeff);
    ~fractionVector();
    fractionVector(const fractionVector& rhs);  //copyconstructor
    fractionVector& operator=(const fractionVector& rhs); //zuweisugsoperator

    //aufgabe 11.5
    fractionVector sort();
    void swap(fraction *xp, fraction *yp);

};

#endif //EPCPLUS_FRACTIONVECTOR_H

