/*
 * The floor function is the function that takes as input a real number and gives as output the greatest integer less than or equal to it.
 * For positive numbers, an implementation of this function can be obtained via the type casting from double to int.
 * Write a program, which reads a positive number x >0 from the keyboard, evaluates the floor function, and prints the result to the screen.
 * This approach does not work for negative numbers. Why? Save your source code as floor.c into the directory serie01
 */

//does not work for negative numbers
#include <stdio.h>

int mainv(int argc, char* argv[]) {
    double number;

    printf("please insert number:");
    scanf("%lf", &number);

    if(number < 0 ||1==1){
        printf("negative numbers not acceped:");
        return -1;
    }else{
        double result = (int) number;
        printf("This is the floored number: %f", result);
        return 0;
    }

}

// wenn ich caste, schneide ich ur die zahl ab
// man müsste die c interne floor funciton verwende oder ceal, oder mit .-1