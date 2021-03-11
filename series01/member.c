/*
 * Write a program that, givenn∈N(to be read from the keyboard),
 * computes and printsto the screen the memberan:= 1/(n+ 2) of the sequence (an)n∈N.
 * Save your source code asmember.cinto the directoryserie01.
 */

#include <stdio.h>

int maine(int argc, char* argv[]) {
    double n;
    printf("Let's calculate the sequence! ");
    printf("please insert n:");
    scanf("%lf", &n);
    double value = 1/(n+2);
    printf("This is the value: %f", value);

    return 0;
}