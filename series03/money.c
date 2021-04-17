/*
 * Write a void-function money that calculates given an amount of money n∈N the
 * minimal number of bank notes (500e, 100e, 50e, 20e, 10e, 5e) resp. coins (2e, 1e)
 * such that the sum equals the value of n.
 * This number shall be displayed on the screen.
 * For example, for n= 351, one should get the following output
 * 3 x 100 EUR 1 x 50 EUR1 x 1 EUR Write a main program which reads the value n∈N
 * and which calls the function money. Save your sourcecode as money.c into the directory serie03.
 */

#include <stdio.h>

/**
 * @brief: calculates the amount of needed bank notes for a sum
 * @param number is the amount of money that needs to be divided
 */
void money(int number);

int main0303(int argc, char* argv[]) {
    int a = 0;
    printf("Please insert the money amount:");
    scanf("%d",&a);
    if ( a <= 0){
        printf("Cannot be calculated");
        return -1;
    }else{
        money(a);
        return 0;
    }

}


void money(int number){

        int notes []=  { 500, 100, 50, 20, 10, 5,2, 1 };
        int noteCounter [] = {0,0,0,0,0,0,0};

        // count notes using Greedy approach
        for (int i = 0; i < 8; i++) {
            if (number >= notes[i]) { // 351 >= 500, 351 >= 100
                noteCounter[i] = number / notes[i]; //351 / 100 = 3
                number = number - noteCounter[i] * notes[i]; // 351 - 300 = 51 etc
            }
        }

       //print
        for (int i = 0; i < 8; i++) {
            if (noteCounter[i] != 0) { //print node counter array
               printf( "%d x %d \n", notes[i], noteCounter[i] );
            }
        }
    }

