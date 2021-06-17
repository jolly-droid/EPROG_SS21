#include "fractionVector.h"

int main(int argc, char* argv[] ) { // fraction l39 ausklammern!!
    fraction x1 = fraction (-1,2);
    fraction x2 = fraction(5,7);
    fraction x3 = fraction (1,3);
    fraction x4 = fraction (0,1);
    fraction x5 = fraction (11,2);
    fraction x6 = fraction (-7,8);

    int len = 6;
    fraction arr [6] = {x1,x2,x3,x4,x5,x6};


    fractionVector vec = fractionVector(len,arr);
    cout << "unsorted: ";
    for (int i = 0; i < vec.getLength(); i++) {
        cout<<vec.getCoeff()[i] << ", ";
    }
    cout<<endl;

    vec.sort();
    cout << "sorted: ";
    for (int i = 0; i < vec.getLength(); i++) {
        cout<<vec.getCoeff()[i] << ", ";
    }

    return 0;
}


int fractionVector::getLength(){
    return length;
}
fraction* fractionVector::getCoeff(){
    return coeff;
}
fractionVector::fractionVector(){
    length = 0;
    coeff = (fraction*) malloc (length*sizeof(fraction));
}

fractionVector::fractionVector(int n){
    length = n;
    coeff = (fraction*) malloc (n*sizeof(fraction));
}

fractionVector::fractionVector(int n, fraction* c){
    length = n;
    coeff = (fraction*) malloc (n*sizeof(fraction));
    coeff = c;
}
fractionVector::~fractionVector(){
    //if( p == 0 || q == 0)
    //free(coeff);
   // std::cout << "deleted" << std::endl;
}
fractionVector::fractionVector(const fractionVector& rhs){
    assert(coeff != NULL);
    length = rhs.length;
    coeff = rhs.coeff;
    cout << "copy constrcutor" << endl;
}
fractionVector& fractionVector::operator=(const fractionVector& rhs) { //zuweisugsoperator
    if(this != &rhs){
        length = rhs.length;
        coeff = rhs.coeff;
    }
    return *this;
}
//aufgabe 11.5
fractionVector fractionVector::sort(){
    for(int j = 0; j < getLength(); j++){
        for(int i = 0; i < getLength()-j-1; i++){
            if(getCoeff()[i].value() > getCoeff()[i+1].value()){
                    swap(&coeff[i], &coeff[i+1]);
            }
        }
    }

}




void fractionVector::swap(fraction *xp, fraction *yp){
    fraction temp = *xp;
    *xp = *yp;
    *yp = temp;
}
