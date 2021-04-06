/*
 * Write a function double scanfpositive(), which asks the user for a positive number τ >0 and then returns it.
 * The input request is repeated as long as τ∈R is strictly positive, i.e., if the given value satisfies τ≤0,
 * then the input request is repeated. Additionally, write a main program,
 * whichcallsscanfpositive. Save your source code asscanfpositive.cinto the directoryserie03.
 */

#include <stdio.h>

double scanfpositive();

int main0306(int argc, char* argv[]) {
    printf("progam starting ... \n");
    double n = scanfpositive();
    if ( n != 0){
        printf("success\n");
    }
    return 0;
}

double scanfpositive(){
    double n = 0;
    printf("Please insert n:\n");
    scanf("%lf", &n);
    while (n  <= 0 ) {
        printf("try again: \n");
        scanf("%lf", &n);
    }
    return n;
}