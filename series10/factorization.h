#ifndef EPCPLUS_FACTORIZATION_H
#define EPCPLUS_FACTORIZATION_H

#include "IntVector.h"
#include <cmath>

class Factorization{
private:
    int n;
    int* prime = IntVector().getCoeff();
    int* multiplicity;

public:
    int primSize = 0;
    int multSize = 0;

    Factorization(){
        n = 0;
        prime = nullptr;
        multiplicity = nullptr;
    }

    Factorization(int m){
        n = m;
        IntVector prim = IntVector(m);
       // IntVector mult = IntVector(m);
        primSize = prim.getLength();
       /* for (int i = 0; i < prim.getLength(); ++i) {
            cout << prim.getCoeff()[i] << " ";
        }*/
       // cout << prim.getLength() << endl;

        prime = prim.getCoeff();


        multiplicity = (int*) malloc(prim.getLength());
        for (int i = 0; prim.getLength() > i; ++i) {
            multiplicity[i] = 0;
        }

        for (int i = prim.getLength()-1; i >= 0 ; i--){ //
            while(m%prime[i] == 0){
                m = m/prime[i];
                multiplicity[i] = multiplicity[i] +1;
            }
        }

        primSize = prim.getLength();
        multSize = primSize;


    }

    ~Factorization(){
        cout<< "del" <<endl;
    }

    int getN();
    int* getPrime();
    int* getMultiplicity();
    void setMultiplicity();
    int recomposeInteger();
};

#endif //EPCPLUS_FACTORIZATION_H

