/*schreiben sie ein Programm, das Länge und Breite eines Rechtecks einliest
/und berechnet*/

#include <stdio.h>

static void calculate (double x, double y){
    double ret = x*y;
    printf( "this is result: %d\n", ret);

}

int mainr (void){
    int x = 0, y = 0;
    printf( "please insert x of rect to calculate: \n");
    scanf("%d", &x);
    if(x<= 0){
        printf("error wrong input");
        return -1;
    }
    printf( "please insert y of rect to calculate: \n");
    scanf("%d", &y);
    if(y<= 0){
        printf("error wrong input");
        return -1;
    }

    calculate(x,y);

    return 0;
}





