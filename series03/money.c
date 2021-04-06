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
#include <stdbool.h>

void money(int number);
int main0302(int argc, char* argv[]) {
    int a = 0;
    printf("what type of triangel do we have here?\n");
    printf("Please insert a:");
    scanf("%d",&a);
    if ( a <= 0){
        printf("Cannot be calculated");
        return -1;
    }else{
        money(a);
        return 0;
    }

}

// returns negative number??
void money(int number){
    int help = number;
    bool finished = true;
    int counter500 = 0, counter100 = 0, counter50 = 0, counter20 = 0, counter10 = 0, counter5 = 0, counter2 = 0, counter1 = 0;
    //while ((number != 0) && finished){
        if ((number % 500) == 0) {
            counter500 = number/500;
            number = 0;
        }else{
            number = number - 500;
            if ((number % 100) == 0) {
                counter100 = number/100;
                number = 0;
            } else {
                number = number - 100;
                if ((number % 50) == 0) {
                    counter50 = number/50;
                }else{
                    number = number - 50;
                    if ((number % 20) == 0) {
                        counter20 = number/20;
                    }else{
                        number = number - 20;
                        if ((number % 10) == 0) {
                            counter10 = number/10;

                        } else{
                            if ((number % 5) == 0) {
                                counter500 = number/5;
                            }else{
                                if((number % 2) != 0) {
                                    counter1++;
                                    number = number - 1;
                                }
                            }
                            printf("number %d", number);

                        }
                        printf("number %d", number);

                    }
                    printf("number %d", number);
                }
                printf("number %d", number);
            }
            printf("number %d", number);
        }
    printf("number %d", number);

    //}
}