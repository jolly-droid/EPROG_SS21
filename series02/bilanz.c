/*
 Schreiben Sie ein Programm, das die EinnahmenE∈R+0:={x∈R:x≥0},
 sowiedie AusgabenA∈R+0eines Unternehmens von der Tastatur einliest und am
 Bildschirm entweder denerzielten Gewinn bzw. Verlust ausgibt, oder dass die Einnahmen
 gleich den Ausgaben sind. SpeichernSie den Source-Code unterbilanz.cin das Verzeichnisserie02. */



//call by value: variable wird direkt weitergegeben
// call by reference: speicheradresse wird weitergegeben

#include <stdio.h>

int main201(int argc, char* argv[]){
    printf("company:\n");
    double inc = 0, expe = 0;
    double help = 0;

    printf("Please insert the income: \n");
    scanf("%lf",&inc);

    printf("Please insert the expenditure: \n");
    scanf("%lf",&expe);


    if ( inc == expe){
        printf("income and expenditures are equal. \n no profit or los.\n");
    } else if( inc > expe){
        help = inc - expe;
        printf ( "you made %f profit\n", help);
    } else if ( expe > inc){
        help = inc - expe;
        printf("you lost %f\n ", help);
    }else{
        printf("error");
        return -1;
    }
    return 0;
}