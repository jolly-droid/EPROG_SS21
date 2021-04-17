/*
 * The Fibonacci sequence is recursively defined byx0:= 0,x1:= 1, and
 * xn+1:=xn+xn−1.Write the function fibonacci which returns x n for given n.
 * Then, write a main program, which reads n from the keyboard and prints
 * the corresponding number xn.
 */

#include <math.h>
#include <stdio.h>

/** @brief: calculates all fibonacci series recursively
 * @param: n is the index of the member to be calculated
 * @return: returns the calculated fibonacci member
*/
int fibonacci(int n);

/** @brief: calculates the n_th element of the fibonacci series non recursive, using golden section
 * @param: n is the index of the member to be calculated
 * @return: returns the calculated fibonacci member
*/
int fibonacciNonRecursive(int n);

/** @brief: calculates x to the power of y
 * @param: x and y
 * @return: returns the calculated number as double
*/
double power(double x, int y);
int quiz(int n){
    if(n>1){
        printf( "%d", n);
        return quiz(n-1)+2;
    }
    else return 2;
}
int main0300(int argc, char* argv[]) {

    int result = quiz(4);
    printf("result: %d", result);
    /*
    int a = 0;
    printf("Let's calculate the fibbonaci numbers \n");
    printf("Please insert n:");
    scanf("%d", &a);
    if (a <= 0) {
        printf("Cannot be calculated");
        return -1;
    } else {
        //recurisve version
       /* for(int i = 1;i<a;i++) {
            printf("%d, ",fibbonacci(i));
        }*/

       //non recursive version
      // int result =  fibonacciNonRecursive(a);
        //printf("%d ",result);

   // }
    return 0;
}

//recursive version
int fibonacci(int n) {
    if(n == 0){
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}

//this doesnt work, better version only with for loop possible!!
int fibonacciNonRecursive(int n) {
    int help = 0;
    double rootFive = sqrt(5), help3 = 1, help4 = 1, help5 = 1;

    if(n == 0 || n == 1){
        help = 1;
    } else {
        help3 = (1+rootFive)/(2);
        help4 = (1-rootFive)/(2);
       // printf("%lf, %lf,", help3, help4);
        help3 = power(help3, n);
        help4 = power(help4, n);
        help5 = help3-help4;
        int a = 5;
        printf("%f,", a);
        help = (int) (help5/rootFive);
    }
    return help;
}

double power(double x, int y){
    double ret = 1;
    for (int i = 1; i < y+1; ++i) {
        ret = ret * x;
    }
    return ret;
}
