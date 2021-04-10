/*
 * Write a recursive function binomial which computes and returns the binomial
 * coefficient(nk)of two given integers 0≤k≤n.
 * Use the addition formula(nk)=(n−1k)+(n−1k−1)for 1≤k < n with(n0)= 1 =(nn).
 * Write a main program which reads k and n from the keyboard and prints
 * to the screen the result(nk).
 * Save your source code as binomial.c into the directoryserie03.
 */

#include <stdio.h>

/** @brief: function calculatin the binominal coefficient
 * @param n and k in (n over k)
 * @return returns the result from (n over k)
 */
int binomial(int n, int k);

int main0304(int argc, char* argv[]) { //0304
    int n = 0, k = 0;
    printf("Please insert n:");
    scanf("%d", &n);
    printf("Please insert k:");
    scanf("%d", &k);
    if(n < 0 || k < 0){
        printf("Cannot be calculated");
        return -1;}
    else{
        int d = binomial(n-1,k)+ binomial(n-1, k-1);
        //int f = binomial(n,k);
        printf("the result is %d", d);
    }

}

int binomial(int n, int k){ //(n over k ) = (n-1 over k) + (n-1 over k-1);
 if ( k == 0){ // n == k)||
        return 1;
 }else{
     return (n*binomial(n-1, k-1))/k;
 }
}


