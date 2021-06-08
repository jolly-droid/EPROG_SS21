#include "Factorization.h"

int main(int argc, char* argv[]){

    Factorization z = Factorization();
    Factorization u = Factorization(25);
    int* hel = u.getPrime();
    int* help = u.getMultiplicity();

    int len;
    len = u.primSize;

    cout <<"this is number " << u.getN() << endl;

    cout << "this is prime ";
    for (int i = 0; i < len; ++i) {
        cout << hel[i] << ", ";
    }

    cout << endl;
    cout << "this is multiplicity: ";
    len=u.multSize; //sizeof(u.getMultiplicity())/sizeof(int);
    for (int i = 0; i < len ; ++i) {
        cout << help[i] << ", ";
    }

    cout << endl;
    cout << " recompose int: " << u.recomposeInteger() << endl;
    return 0;
}



int Factorization::getN(){
    return n;
}
int* Factorization::getPrime(){
    return prime;
}
int* Factorization::getMultiplicity(){
    return multiplicity;
}

int Factorization::recomposeInteger(){
   int ret = 1, help = 1;

   // int *parray = &(multiplicity[0]);

    int len = multSize;

    for (int i = 0; i < len; ++i) { // lenght of multiarr
        help = pow(getPrime()[i], getMultiplicity()[i]);
        ret = ret* help;
    }
    return ret;
}


