#include <stdio.h>

/**
 * @brief calculates the det of a 3x3 matrix
 * @param a is the array that keeps the matrix
 * @return retuns the det
 */
double determinant(double a[]);

int main(int argc, char* argv[]) {
    int n = 8;
    double numberArray[n];
    printf("please insert the matrix:");
    for (int i = 0; i < n; ++i) {
      scanf("%lf", &numberArray[i]);
    }
    double res = determinant(numberArray);
    printf("the det is: %lf\n", res);
    return 0;
}

//maybe for loop??
double determinant(double a[]){
//implement with for loop form 0 to 6 ???
    double ret = 0;
    ret = a[0]*a[1]*a[2];
    ret = ret + (a[1]*a[5]*a[6]);
    ret = ret + (a[2]*a[3]*a[7]);
    ret = ret - (a[2]*a[4]*a[6]);
    ret = ret - (a[1]*a[3]*a[8]);
    ret = ret - (a[0]*a[5]*a[7]);
    return ret;
}
