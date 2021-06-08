#include "gcdAndLcm.h"

int ggT(int a, int b);
int kgV(int a, int b);



int main(){
    int a = 5, b = 45;
    cout << "ggT is " << ggT( a, b) << endl;
    cout << "kgv is " << kgV(a, b) << endl;
    return 0;
}

int ggT(int a, int b){ // maybe with fraction2???
    Factorization Af = Factorization(a);
    Factorization Bf = Factorization(b);

    int ret = 1;
    for (int i = 0; i < Af.multSize; ++i) {
        if(Af.getMultiplicity()[i] == Bf.getMultiplicity()[i]){
            ret = ret * Af.getMultiplicity()[i];
        }
    }

    return ret;

  /*  assert( a >= 0);
    assert( b >= 0);

    // Everything divides 0
    if (a == 0) return b;
    if (b == 0) return a;

    // base case
    if (a == b) return a;

    // a is greater
    if (a > b) return ggT(a-b, b);
    return ggT(a, b-a);*/

}

int kgV(int a, int b){ // assert in ggt
    Factorization Af = Factorization(a);
    Factorization Bf = Factorization(b);

    int ret = 1;
    for (int i = 0; i < Af.multSize; ++i) {
        if(Af.getPrime()[i] == Bf.getPrime()[i]){
            ret = ret * Af.getPrime()[i];
        }
    }

    return ret;

    /*
    int help = a*b,
        help2 = ggT(a,b);
    return help/help2;
     */
}
