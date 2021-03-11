
/*what is typecasting?
which types do exist?
 what output does the following code do?

*/

#include <stdio.h>

int main(){
    int x = 2;
    int y = 5.4;
    double z = 3.6;

    double erg1 = x/y + z;
    double erg2 = (double) x/y;
    double erg3 = 3/5;
    int erg4 = (int) z/2;

    printf("erg1 = %f\n" ,erg1);
    printf("erg2 = %f\n" ,erg2);
    printf("erg3 = %f\n" ,erg3);
    printf("erg4 = %d\n" ,erg4);

    /*erg1 = 3.600000
    erg2 = 0.400000
    erg3 = 0.000000
    erg4 = 1*/


    return 0;
}