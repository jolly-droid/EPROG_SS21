/*
 * Write  a  program  which  reads  the  measures  of  the  two  basesB, b >0  and  the  heighth
 * >0 of a trapezoid from the keyboard, computes the corresponding area and prints it to
 * the screen.Save your source code as trapezoid.c into the directory serie01.
 */

#include <stdio.h>

int Tmain(int argc, char* argv[]){
    double height, a, b;
    printf("Let's calculate the trapezoid: ");

    printf("please insert a:");
    scanf("%lf",&a);
    if(a<= 0){
        printf("No negative a possible! ");
        return -1;
    }
    printf("please insert b:");
    scanf("%lf",&b);
    if(height<= 0){
        printf("No negative b possible! ");
        return -1;
    }

    printf("please insert height:");
    scanf("%lf",&height);
    if(height<= 0){
        printf("No negative height possible! ");
        return -1;
    }

    //typecasting - always use the bigger one
    double help= (a+b)/2;
    double area = help*height;

    printf("This is the area: %f", area);

    return 0;
}
