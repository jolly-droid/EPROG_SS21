#include <stdio.h>
#include <math.h>
/*
 * Schreiben Sie ein Programm, das den Radiusreines Kreises von der Tastatur einliest
 * und die dazugehorige Fl̈ache sowie den Umfang berechnet und am Bildschirm ausgibt.
 * Speichern Sie den Source-Code unter kreis.c in das Verzeichnis serie01
 */
static int calculateCircumference(int rad){
    return 2*rad*M_1_PI;
}

static int calculateArea(int rad){
    return M_1_PI*rad*rad;
}


int mainK (int argc, char* argv[] ){
    int k;
    printf("what size do you want your circle to be? :");
    scanf("%d", &k);
    if ( k <= 0){
        printf("negative numbers or zero are not possible!");
        return -1;
    }
    int circ = calculateCircumference(k);
    int area = calculateArea(k);

    printf("The circumference is %d,\n the area is %d", circ, area);
    return 0;
}



