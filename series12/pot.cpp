#include <iostream>
#include <vector>

template <typename T> T pot(T x, int n);

int main(int argc, char* argv[]){

    int a = 5;
    a = pot(5,2);
    std::cout << a << std::endl;

    double a2 = 5;
    a2 = pot(5.345,2);
    std::cout << a2 << std::endl;

    double a3 = 5;
    a3 = pot(5.0,-2);
    std::cout << a3 << std::endl;

    return 0;
}


template <typename T> T pot(T x, int n){
    T res = 1;
    T help = x/x;

    if(n>0){
        for (int i = 0; i < n; ++i) {
            res = res * x;
        }
    } else if (n < 0){
        for (int i = 0; i > n; --i) {
            res = res * x;
        }
    } else {
        return 1;
    }


    if (n<0){
        res = help/res;
    }

    return res;
}




