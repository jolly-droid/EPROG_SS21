/*Aufgabe 5.8.
Die  FunktionsquareVecsoll  alle  Eintr ̈age  eines  Vektorsx∈Rnquadrieren,  d.h.
 aus(−1,2,0) soll (1,4,0) werden. Der Vektor soll dabei als Pointer ̈ubergeben werden.
 */
 
 /////////////////??????????????????????????????????????????????????????????

#include <stdio.h>

double squareVec(double vec[], int n);

int main(int argc, char* argv[]) {

    double vec[3] = {-1.0,2.0,0.0};
    
    int j = 0; // doppelte intitialisierung, nicht notwending
    
    squareVec(vec,3);
    
    for(j=0; j<3; ++j) {
        printf("vec[%d] = %f ",j,vec[j]);
    }
    
    printf("\n");
    return 0;
}


double squareVec(double vec[], int n) { // falscher functionenkopf - int squareVec(double vec, int n)

    int j=1; // initialisierung mit 0 unnötig
    int dim = n; // fehlende initialisierung von dim

    for(; j<dim; j++) { // fehler in for loop - immer ; statt , !
        //*vec[j] = &vec[j] * &vec[j]; //kein zugriff auf pointer mit *vec[j];
       vec[j] = vec[j] * vec[j];
    }
    return *vec; //
}

/**

int squareVec(double vec, int n) {
	int j=0;
	for(j=1, j<dim; --j) {
		*vec[j] = &vec[j] * &vec[j];
	}
	return vec;
}

*/

/*̈Andern Sie nur die FunktionsquareVec, so dass diemain-Funktion das richtige Ergebnis ausgibt.
Wieviele Fehler finden Sie? Welchen Aufwand hat Ihre korrigierte FunktionsquareVec?
aufwand von o(n)*/

