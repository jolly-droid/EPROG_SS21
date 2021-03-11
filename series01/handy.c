/*
 * A telephone company offers a new smartphone Pay As You Go tariff with a mobile phonecall rate of 0.27e per minute.
 * Write a program that reads in a credit g∈R and prints out how
 * long(in minutes) you can phone. Ifg≤0, the program prints the message ‘Please top up your phone!’.
 * Saveyour source code ashandy.cinto the directoryserie01.
 */

#include <stdio.h>

int mainV(int argc, char* argv[]) {
    double credit, b, c, x;
    printf("Let's calculate the phone price ");

    printf("please insert credit:");
    scanf("%lf", &credit);

   if(credit <= 0){
       printf("Please top up your phone");
   }

    double phonetime = credit / 0.27;

    printf("This is the speaking time: %f", phonetime);


    return 0;
}