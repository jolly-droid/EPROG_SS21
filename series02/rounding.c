/*Write a functionrounding, which, givenx∈R, computes the numbern∈Zwhich isclosest tox.
Ifxis exactly in the middle between two integers n  and n+ 1, the function chooses thebiggest one, i.e.,n+ 1.
Then,write a main program which reads the numberxfrom the keyboard,
callsthe function and displays the rounded value. */
#include <stdio.h>
int rounding (double a);
int main0207(int argc, char* argv[]) {
    printf("Lets calculate the points \n");
    double a = 0;

    printf("Enter number to round:\n");
    scanf("%lf", &a);

    int r = rounding(a);
    printf("result %d", r);
    return 0;
}

int rounding (double num){
   if ( num < 0){
       num = num - 0.5;
   }else{
       num = num + 0.5;
   }
    return (int) num;

}



