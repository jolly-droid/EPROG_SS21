/*Schreiben Sie ein Programm, das f ̈ur gegebenesn∈N(von der Tastatur einzulesen)
 * dasFolgenglied an:= (−1)n/(n+ 2) bestimmt und am Bildschirm ausgibt.
        Speichern Sie den Source-Codeunterfolgenglied.cin das Verzeichnisserie02 */

#include <stdio.h>
#include <math.h>

int main (int argc, char* argv[]) {
    printf("Lets calculate the member \n");
    double n= 0;
    printf("Please insert n:");
    scanf("%lf",&n);
    double help = 1 / (n +2);
    double ret = pow(-1, n);
    double pr = ret / help;
    printf( "this is the member %lf", pr);
    return 0;
}

