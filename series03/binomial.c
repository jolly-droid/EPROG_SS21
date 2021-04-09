/*
 * Write a recursive function binomial which computes and returns the binomial
 * coefficient(nk)of two given integers 0≤k≤n.
 * Use the addition formula(nk)=(n−1k)+(n−1k−1)for 1≤k < n with(n0)= 1 =(nn).
 * Write a main program which reads k and n from the keyboard and prints
 * to the screen the result(nk).
 * Save your source code as binomial.c into the directoryserie03.
 */

#include <stdio.h>
#include <math.h>

int binomial(int n, int k);
int factorial (int n);

int main0304(int argc, char* argv[]) {
    int n = 0, k = 0;
    printf("Please insert n:");
    scanf("%d", &n);
    printf("Please insert k:");
    scanf("%d", &k);
    if(n < 0 || k < 0){
        printf("Cannot be calculated");
        return -1;
    } else if ((n == k)|| (k == 0)){
        printf("1");
        return 0;
    }else{
        k = factorial(k);
        n = factorial(n);

        binomial(n,k);
        return 0;
    }

}
int factorial(int n){
    int fact = 0;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int binomial(int n, int k){
    int s = 0;
    if(n == 0){
       return s;
    }else{

        binomial(n-1, k-1);
    }
    return s;
}

