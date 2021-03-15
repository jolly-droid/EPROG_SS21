/*
 * he scalar product of two three-dimensional vectorsu= (a, b, c)∈R3andv= (x, y, z)∈R3is given byw=u·v:=ax+by+cz∈R.
 * Write a program, which reads the parameters
 * a, b, c, x, y, zfrom the keyboard, computes the scalar productw, and prints the result to the screen.
 * Save your sourcecode asscalarproduct.cinto the directoryserie01
 */
#include <stdio.h>
static double calcVal(double a, double b, double c, double x, double y, double z){
    double help1 = a* x;
    double help2 = b* y;
    double help3 = c*z;
    return help1 + help2 + help3;
}

int mainF(int argc, char* argv[]) {
    double a, b, c, x, y, z;
   // printf("%s: Let's calculate the vectors! \n", argv[0]);
    printf("Let's calculate the vectors! \n");

    printf("please insert a:");
    scanf("%lf", &a);
    printf("please insert b:");
    scanf("%lf", &b);
    printf("please insert c:");
    scanf("%lf", &c);
    printf("please insert x:");
    scanf("%lf", &x);
    printf("please insert y:");
    scanf("%lf", &y);
    printf("please insert z:");
    scanf("%lf", &z);

    double value = calcVal(a,b,c,x,y,z);

    printf("This is the scalar product w: %f", value);

    return 0;
}