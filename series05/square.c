//Aufgabe 5.6.Wo liegen die Fehler im folgenden Programm?

 #include <stdio.h>

void square(double* x){
    double* y;
    *x=(*x)*(*x); //x=(*y)*(*x);
    /* 1) double pointer auf x damit zugriff auf wert
     * 2) y ist nicht nützlich oder verwendbar
     */
}
int main(int argc, char* argv[]){
    double x = 2.1;
    square(&x);
    printf("x^2=%f\n",x);
    return 0;
}
//Ver ändern Sienurdie Funktionsquare, so dass der Output des Codes den Erwartungen entspricht.


