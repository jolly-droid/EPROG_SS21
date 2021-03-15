/* 1.3
 * A  polynomial  of  second  order  can  be  represented  via  the  monomial  basis  asp(x)  =ax2+bx+c,
 * where a, b, c∈R. Write a program, which reads the parameters a, b, c and a point x∈R from  the  keyboard,
 * computes  the  function  value p(x),  and  prints  the  result  to  the  screen.  Save  yoursource code aspolyeval.cinto the directoryserie01.
 */

#include <stdio.h>
static double calcVal(double a, double b, double c, double x){
    double help1 = a* x* x;
    double help2 = b* x;
    double result = help1 + help2 + c;
    return result;
}

int mainf(int argc, char* argv[]) {
    double a, b, c, x;
    printf("Let's calculate the polynomial ");

    printf("please insert a:");
    scanf("%lf", &a);
    printf("please insert b:");
    scanf("%lf", &b);
    printf("please insert c:");
    scanf("%lf", &c);
    printf("please insert x:");
    scanf("%lf", &x);

    double value =  calcVal(a,b,c,x);

    printf("This is the area: %f", value);


    return 0;
}