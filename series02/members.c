/*Schreiben Sie ein Programm, das f ̈ur gegebenesn∈N(von der Tastatur einzulesen)
 * dasFolgenglied an:= (−1)n/(n+ 2) bestimmt und am Bildschirm ausgibt.
        Speichern Sie den Source-Codeunterfolgenglied.cin das Verzeichnisserie02 */

#include <stdio.h>


int main0203(int argc, char* argv[]) {
    printf("Lets calculate the member \n");
    int n = 0;
    double res = 0, help = 0;
    printf("Please insert n:");
    scanf("%d",&n);

    if ( n < 0) {
        return -1;
    }else{
        help = n + 2;
        if (n % 2 == 0) {
            res = (double) (1 / help);
        } else {
            res = (double) (-1 / help);
        }

        printf("this is the member %lf", res);
        return 0;
    }
}

