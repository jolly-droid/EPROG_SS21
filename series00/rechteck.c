/*schreiben sie ein Programm, das Länge und Breite eines Rechtecks einliest
/und berechnet*/

#include <stdio.h>

static void calculate (int x, int y){
    int ret = x*y;
    printf( "this is result: %d\n", ret);

}

int mainR (void){
    int x = 0, y = 0;
    printf( "please insert x of rect to calculate \n");
    scanf("%d", &x);
    printf( "please insert y of rect to calculate \n");
    scanf("%d", &y);

    calculate(x,y);

    return 0;
}





