/*Aufgabe 5.7.
 Was  ist  der  Unterschied  und  der  Zusammenhang  zwischen  einer  Variable  und  einem Pointer?
    Varibale: Call by value
    Pointer: Call by reference
 Was  könnten  Vor-  und  Nachteile  dieser  Konstrukte  sein?
   Nachteile: Keine richtigen Zugriffe auf Speicher
 Schreiben  Sie  eine  Funktion swap,welche die Werte zweier Variablen x und y vertauscht.
 Warum funktioniert das folgende Vorgehen nicht?
*/
#include <stdio.h>

// falsch weil pointer nicht vertauscht sondern nur werte, was keine auswirkung hat
void swapWrong(double x, double y){
    double tmp = x;
    x = y;
    y = tmp;
}

void swap(double* x, double* y){
    double tmp = *x; //deref of x
    *x = *y;
    *y = tmp;
}



int main(int argc, char* argv[]){
    double x = 2.1, y = 4.5;
    printf("x=%f and y =%f\n",x,y);
    swap(&x,&y);
    printf("x=%f and y =%f\n",x,y);
    return 0;
}


//Speichern Sie den Source-Code unterswap.cin das Verzeichnisserie05.


