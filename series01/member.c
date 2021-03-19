/*
 * Write a program that, givenn∈N(to be read from the keyboard),
 * computes and printsto the screen the member an:= 1/(n+ 2) of the sequence (an)n∈N.
 * Save your source code asmember.cinto the directoryserie01.
 */

#include <stdio.h>

int mainR(int argc, char* argv[]) {
    int n = 0;
    printf("Let's calculate the member! ");
    printf("please insert n:");
    scanf("%lf", &n);
    double value = 1./(n+2); // impliztes casting // 1./(n+2)
    printf("This is the value of an: %f", value);

    return 0;
}