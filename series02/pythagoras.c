/*
 * implementing pythagoras
 */

#include <stdio.h>

int pytagoras(int a, int b, int c);

int main0205(int argc, char* argv[]) {
    printf("Do whe have a pythagorieic triangle?\n");
    int a = 0, b = 0, c = 0;
    printf("Please insert a:\n");
    scanf("%d", &a);
    printf("Please insert b:\n");
    scanf("%d", &b);
    printf("Please insert c:\n");
    scanf("%d", &c);
    if( a < 0 || b < 0|| c < 0){
        return -1;
    }else {
        int true = pytagoras(a, b, c);
        if (true == 1){
            printf("This is a pythagoreic triangle!\n");
        }else{
            printf("This is not a pythagoreic triangle!\n");
        }
        return 0;
    }

}

// calculates whether the triangle is a pythagoreic triangle
int pytagoras(int a, int b, int c){
    int side1 = a*a, side2 = b*b, side3 = c*c;
    if ( (side1 + side2) == side3) {
        return 1;
    }else if ( (side1 + side3) == side2){
        return 1;
    }else if ((side2 + side3) == side1){
        return 1;
    }else{
        return 0;}
}