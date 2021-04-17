#include <assert.h>
#include <stdio.h>
#include <math.h>

double pnorm(double x[], int n, int p);
int main0405(int argc, char* argv[]) {
    int n = 3, p;

   // printf("Please insert length(n):");
   // scanf("%d", &n);
   // assert(n>0);
    printf("Please insert dimension(p):");
    scanf("%d", &p);
    assert(p>1);

    double numberArray[n];
    printf("Please insert vector:");

    assert(n>0);
    for (int i = 0; i < n; i++){
        scanf("%lf", &numberArray[i]);
    }

    for (int i = 0; i < n; i++){ // betrag
        if (numberArray[i] < 0){
            numberArray[i] = numberArray[i] * (-1);
        }

    }

    double result = pnorm(numberArray, n,p);
    printf("the result is %lf", result);

    return 0;
}
//missing betrag, math.h with pow!!!
double pnorm(double x[], int n, int p){

    double ret = 0, help = (double) 1/p, help2;
    for (int i = 0; i < n; ++i) {
        help2 = pow(x[i], p);
        ret = ret + help2;
    }
    ret = pow(ret, help);
    return ret;
}

/*tested with
 * P = 3, vector = (1,2,3); 3,30
 * P = 4, vector = (1,2,3); 3,14
 * P = 5, vector = (1,2,3); 3,07
 * P = 100, vector = (1,2,3); 3
 * P = 200, vector = (1,2,3); 3
 * P = 450, vector = (1,2,3); 3
 * P = 575, vector = (1,2,3); 3
 */