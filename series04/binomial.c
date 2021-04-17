/*
 * Write  anonrecursivefunctionbinomialwhich  computes  the  binomial  coefficient(nk).
 * Use an appropriate loop and the identity(nk)=n·(n−1)···(n−k+1)1·2···k=n1·n−12···n−k+1k.
 * Additionally, writea main program that reads in the values
 * k,n∈N0withk≤nand prints out(nk). Save your source codeasbinomial.cinto the directoryserie04
 */

#include <stdio.h>
int binomial(int n,int k);
int main0401(int argc, char* argv[]) {
    int n = 0, k = 0;
    printf("Please insert n:");
    scanf("%d", &n);
    printf("Please insert k:");
    scanf("%d", &k);
    if(n== 0 || k== 0 || k > n){
        return -1;
    } else{
        int res = binomial(n,k);
        printf("the product is %d", res);
        return 0;
    }

}

int binomial(int n,int k){
    double reslt = 1, help = 1, help2 = 1;

    printf("n: %d, k:%d\n", n,k);
    for (int i = 1; i <= k ; i++) {
        help = n+1-i;
        help2 = help / i;
        reslt = reslt * help2;
      //  printf("dividend: %lf, divison: %lf, res: %lf\n", help, help2, reslt);
    }

    return (int) reslt;
}

/*testcases
 * 4 over 3 is 6
 * 45 over 6 is 8145060
 *
 */