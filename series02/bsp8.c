/*
 * Aufgabe 2.8.Wiederholen Sie die Begriffe
 * Lifetime :
 * Scope:
 * Was gibt folgendes Programm aus? Erklaren Sie warum.
 */

#include <stdio.h>

int main0208(){
    int x = 1, y = 2, z = 3;
    printf ( "(xyz) = (%d, %d, % d)\n", x, y,z); // (xyz) = (1, 2,  3)

    { // begin block 1
        int x = 100; // deklaration als blockvariable
        y = 2;
        if (x > y) {
            z = x; // zuweiseung auch außerhalb von block gültig !
        } else {
            z = y;
        }
        printf("(xyz) = (%d, %d, % d)\n", x, y, z); // (xyz) = (100, 2,  100)

        { // beginn block 2
            int z = y; // deklaration als blockvariable
            y = 200;  // zuweiseung auch außerhalb von block gültig !
            printf("(xyz) = (%d, %d, % d)\n", x, y, z); //(xyz) = (100, 200,  2)
        } // ende block 2

        printf("(xyz) = (%d, %d, % d)\n", x, y, z); // (xyz) = (100, 200,  2)

    } // ende block 1 - x = 100 wird zu x = 1 da nur variable in block

    printf ( "(xyz) = (%d, %d, % d)\n", x, y,z); // (xyz) = (1, 200,  100)
}