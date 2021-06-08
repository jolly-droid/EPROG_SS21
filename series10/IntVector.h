#ifndef EPCPLUS_INTVECTOR_H
#define EPCPLUS_INTVECTOR_H

#include <iostream>
#include <cassert>

using std::cout;
using std::cin;
using std::endl;

class IntVector{
    private:
        int length;
        int* coeff;
    public:

    //constructors
    IntVector(){
        length = 0;
        coeff = (int*) malloc(length* sizeof(int));
    }
    IntVector(int l, int* c){
        assert(l>=0);
        length = l;
        coeff = c;
       // coeff = (int*) malloc(l* sizeof(int));
        for (int i = 0; i < l; ++i) {
            coeff[i] = 0;
        }
    }
    IntVector(int max){
        assert(max>0);

        // Create a boolean array "prime[0..n]" and initialize all entries it as true.
        // A value in prime[i] will finally be false if i is Not a prime, else true.
        bool prime[max+1];


        for (int j = 0; j < max+1; ++j) {
            prime[j] = true;
        }
        prime[0] = false;
        prime[1] = false;

       // for (int p=2; p*p<=max; p++){
       for (int p = 2; p < max +1; p++){
            // If prime[p] is not changed, then it is a prime
            if (prime[p]){
                for (int j=p*2; j< max +1; j += p){ // Update all multiples of p
                    prime[j] = false;}
            }
        }

        int size = 0;
        for (int j = 0; j < max+1; j++) {
            if(prime[j]) {size++;}
        }
       // cout << size << endl;

        length = size;
        coeff = (int*) malloc (length* sizeof (int));

        // Save all prime numbers
        int i = 0;
        for (int p=2; p<max+1; p++) {
            if (prime[p]) {
                coeff[i] = p;
               // cout << arr[i] << " ";
                i++;
            }
        }

    }

    //destructors
    ~IntVector(){
        //free(coeff);
       // delete[] coeff;
        cout<< "vector deleted"<< endl;
    }

    int getLength();
    void setLength(int l);

    int* getCoeff();
    void setCoeff(int* a);

  };

#endif //EPCPLUS_INTVECTOR_H

