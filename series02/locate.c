/*
 * Gegeben  sei  das  Quadrat  mit  Seitenl ̈angeL >0  und  Ecken  (0,0),  (L,0),  (L, L)  und(0, L).
 * Gegeben sei ferner ein Punkt (x, y)∈R2. Schreiben Sie ein Programm,
 * das die ZahlenL >0 undx, y∈Rvon der Tastatur einliest und danach in der Shell ausgibt,
 * wie der Punkt (x, y) im Verh ̈altniszum Quadrat liegt. Ein Punkt kann innerhalb des Quadrats,
 * auf dem Rand oder außerhalb des Quadratsliegen. Speichern Sie den Source-Code unterlocate.cin das Verzeichnisserie02
 */
#include <stdio.h>

int main0204(int argc, char* argv[]) {
    printf("Where is the point?");
    double a = 0, x = 0, y = 0;
    printf("Please insert length:");
    scanf("%lf",&a);

    printf("Please insert x coordinate:\n");
    scanf("%lf",&x);

    printf("Please insert y coordinate:\n");
    scanf("%lf",&y);

    if ( x < a){
        if ( y < a){
            printf("Point is inside\n");
        }else if ( y == a) {
            printf("point is on boundary\n");
        }else{
            printf("Point is outside\n");
        }
    } else if ( x==a){
        printf("point is on boundary\n");
    } else{ // x>a x is outside
        if ( y < a){
            printf("Point is inside\n");
        }else if ( y == a) {
            printf("point is on boundary\n");
        }else{
            printf("Point is outside:\n");
        }
    }

return 0;
}
