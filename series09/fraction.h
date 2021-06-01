#ifndef INCLUDE_FRACTION
#define FRACTION

#include <cassert>
#include <iostream>

class fraction{
private:
    int p;
    int q;

public:
    fraction(){ // constructor without new!!!
        this->p = 0;
        this->q = 1;
    }
    fraction(int m, int n){
        assert(n != 0);
        if(n < 0){
            this->p = (-1)*m;
            this->q = (-1)*n;
        }else{
            this->p = m;
            this->q = n;
        }

    }

    /*~fraction(){
        //if( p == 0 || q == 0)
        std::cout << "fraction deleted  " << std::endl;
    }*/

  //methods
    int getP();
    int getQ();

    void setP(int n);
    void setQ(int n);

    bool isEqualTo(fraction other);
    bool isNotEqualTo(fraction other);
    bool isSmallerThan(fraction other);
    bool isSmallerThanorEqualTo(fraction other);
    bool isLagerThanOrEqualTo(fraction other);
    bool isLagerThan(fraction other);

    fraction addFractions(fraction a, fraction b);
    int gcd(int a, int b);
};

#endif
