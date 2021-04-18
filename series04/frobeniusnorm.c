#include <assert.h>
#include <stdio.h>
#include <math.h>
double frobeniusnorm(int n, int m, double x[n][m]);


int main04006(int argc, char* argv[]) {
    int n =2, m = 2;
    double numberArray[n][m];
    printf("please insert the matrix:");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; j++){
            scanf("%lf", &numberArray[i][j]);
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; j++){
            printf("[%d][%d]: %lf\n",i, j, numberArray[i][j]);
        }
    }
    double result = frobeniusnorm(n, m, numberArray);
    printf("the result is %lf", result);
    return 0;
}

double frobeniusnorm(int n, int m, double x[n][m]){

    double ret = 0, help = 0.5, help2;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            help2 = pow(x[i][j], 2);
            ret = ret + help2;
        }

    }

    ret = pow(ret, help);
    return ret;
}
